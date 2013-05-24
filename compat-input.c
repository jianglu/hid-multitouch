/*
 * Input compat Library
 *
 * Copyright (c) 1999-2002 Vojtech Pavlik
 * Copyright (c) 2013 Red Hat, inc
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#include "compat-input.h"
#include <linux/slab.h>
#include <linux/module.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(3, 2, 0)
#include <linux/export.h>
#endif
#include <linux/version.h>

/* undefine the compat emulation in case we need the real ones */
#undef input_sync
#undef input_event

static const struct input_value input_value_sync = { EV_SYN, SYN_REPORT, 1 };

static inline int is_event_supported(unsigned int code,
				     unsigned long *bm, unsigned int max)
{
	return code <= max && test_bit(code, bm);
}

static int input_defuzz_abs_event(int value, int old_val, int fuzz)
{
	if (fuzz) {
		if (value > old_val - fuzz / 2 && value < old_val + fuzz / 2)
			return old_val;

		if (value > old_val - fuzz && value < old_val + fuzz)
			return (old_val * 3 + value) / 4;

		if (value > old_val - fuzz * 2 && value < old_val + fuzz * 2)
			return (old_val + value) / 2;
	}

	return value;
}

static void input_start_autorepeat(struct input_dev *dev, int code)
{
	if (test_bit(EV_REP, dev->evbit) &&
	    dev->rep[REP_PERIOD] && dev->rep[REP_DELAY] &&
	    dev->timer.data) {
		dev->repeat_key = code;
		mod_timer(&dev->timer,
			  jiffies + msecs_to_jiffies(dev->rep[REP_DELAY]));
	}
}

static void input_stop_autorepeat(struct input_dev *dev)
{
	del_timer(&dev->timer);
}

/*
 * Pass event first through all filters and then, if event has not been
 * filtered out, through all open handles. This function is called with
 * dev->event_lock held and interrupts disabled.
 */
static unsigned int input_to_handler(struct input_handle *handle,
			struct input_value *vals, unsigned int count)
{
	struct input_handler *handler = handle->handler;
	struct input_value *end = vals;
	struct input_value *v;

	for (v = vals; v != vals + count; v++) {
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 34)
		if (handler->filter &&
		    handler->filter(handle, v->type, v->code, v->value))
			continue;
#endif
		if (end != v)
			*end = *v;
		end++;
	}

	count = end - vals;
	if (!count)
		return 0;

#if LINUX_VERSION_CODE >= KERNEL_VERSION(3, 7, 0)
	if (handler->events)
		handler->events(handle, vals, count);
	else
#endif
	if (handler->event)
		for (v = vals; v != end; v++)
			handler->event(handle, v->type, v->code, v->value);

	return count;
}

/*
 * Pass values first through all filters and then, if event has not been
 * filtered out, through all open handles. This function is called with
 * dev->event_lock held and interrupts disabled.
 */
static void input_pass_values(struct input_dev *dev,
			      struct input_value *vals, unsigned int count)
{
	struct input_handle *handle;
	struct input_value *v;

	if (!count)
		return;

	rcu_read_lock();

	handle = rcu_dereference(dev->grab);
	if (handle) {
		count = input_to_handler(handle, vals, count);
	} else {
		list_for_each_entry_rcu(handle, &dev->h_list, d_node)
			if (handle->open)
				count = input_to_handler(handle, vals, count);
	}

	rcu_read_unlock();

/** compat:	drop: add_input_randomness(vals->type, vals->code, vals->value); */

	/* trigger auto repeat for key events */
	for (v = vals; v != vals + count; v++) {
		if (v->type == EV_KEY && v->value != 2) {
			if (v->value)
				input_start_autorepeat(dev, v->code);
			else
				input_stop_autorepeat(dev);
		}
	}
}

#define INPUT_IGNORE_EVENT	0
#define INPUT_PASS_TO_HANDLERS	1
#define INPUT_PASS_TO_DEVICE	2
#define INPUT_SLOT		4
#define INPUT_FLUSH		8
#define INPUT_PASS_TO_ALL	(INPUT_PASS_TO_HANDLERS | INPUT_PASS_TO_DEVICE)

static int input_handle_abs_event(struct input_dev *dev,
				  unsigned int code, int *pval)
{
	struct input_mt *mt = input_get_mt(dev);
	bool is_mt_event;
	int *pold;

	if (code == ABS_MT_SLOT) {
		/*
		 * "Stage" the event; we'll flush it later, when we
		 * get actual touch data.
		 */
		if (mt && *pval >= 0 && *pval < mt->num_slots)
			mt->slot = *pval;

		return INPUT_IGNORE_EVENT;
	}

	is_mt_event = input_is_mt_value(code);

	if (!is_mt_event) {
#if LINUX_VERSION_CODE >= KERNEL_VERSION(3, 0, 0)
		pold = &dev->absinfo[code].value;
#else
		pold = &dev->abs[code];
#endif
	} else if (mt) {
		pold = &mt->slots[mt->slot].abs[code - ABS_MT_FIRST];
	} else {
		/*
		 * Bypass filtering for multi-touch events when
		 * not employing slots.
		 */
		pold = NULL;
	}

	if (pold) {
		*pval = input_defuzz_abs_event(*pval, *pold,
						input_abs_get_fuzz(dev, code));
		if (*pold == *pval)
			return INPUT_IGNORE_EVENT;

		*pold = *pval;
	}

	/* Flush pending "slot" event */
	if (is_mt_event && mt && mt->slot != input_abs_get_val(dev, ABS_MT_SLOT)) {
		input_abs_set_val(dev, ABS_MT_SLOT, mt->slot);
		return INPUT_PASS_TO_HANDLERS | INPUT_SLOT;
	}

	return INPUT_PASS_TO_HANDLERS;
}

static int input_get_disposition(struct input_dev *dev,
			  unsigned int type, unsigned int code, int value)
{
	int disposition = INPUT_IGNORE_EVENT;

	switch (type) {

	case EV_SYN:
		switch (code) {
		case SYN_CONFIG:
			disposition = INPUT_PASS_TO_ALL;
			break;

		case SYN_REPORT:
			disposition = INPUT_PASS_TO_HANDLERS | INPUT_FLUSH;
			break;
		case SYN_MT_REPORT:
			disposition = INPUT_PASS_TO_HANDLERS;
			break;
		}
		break;

	case EV_KEY:
		if (is_event_supported(code, dev->keybit, KEY_MAX)) {

			/* auto-repeat bypasses state updates */
			if (value == 2) {
				disposition = INPUT_PASS_TO_HANDLERS;
				break;
			}

			if (!!test_bit(code, dev->key) != !!value) {

				__change_bit(code, dev->key);
				disposition = INPUT_PASS_TO_HANDLERS;
			}
		}
		break;

	case EV_SW:
		if (is_event_supported(code, dev->swbit, SW_MAX) &&
		    !!test_bit(code, dev->sw) != !!value) {

			__change_bit(code, dev->sw);
			disposition = INPUT_PASS_TO_HANDLERS;
		}
		break;

	case EV_ABS:
		if (is_event_supported(code, dev->absbit, ABS_MAX))
			disposition = input_handle_abs_event(dev, code, &value);

		break;

	case EV_REL:
		if (is_event_supported(code, dev->relbit, REL_MAX) && value)
			disposition = INPUT_PASS_TO_HANDLERS;

		break;

	case EV_MSC:
		if (is_event_supported(code, dev->mscbit, MSC_MAX))
			disposition = INPUT_PASS_TO_ALL;

		break;

	case EV_LED:
		if (is_event_supported(code, dev->ledbit, LED_MAX) &&
		    !!test_bit(code, dev->led) != !!value) {

			__change_bit(code, dev->led);
			disposition = INPUT_PASS_TO_ALL;
		}
		break;

	case EV_SND:
		if (is_event_supported(code, dev->sndbit, SND_MAX)) {

			if (!!test_bit(code, dev->snd) != !!value)
				__change_bit(code, dev->snd);
			disposition = INPUT_PASS_TO_ALL;
		}
		break;

	case EV_REP:
		if (code <= REP_MAX && value >= 0 && dev->rep[code] != value) {
			dev->rep[code] = value;
			disposition = INPUT_PASS_TO_ALL;
		}
		break;

	case EV_FF:
		if (value >= 0)
			disposition = INPUT_PASS_TO_ALL;
		break;

	case EV_PWR:
		disposition = INPUT_PASS_TO_ALL;
		break;
	}

	return disposition;
}

static void __compat_input_handle_event(struct input_dev *dev,
			       unsigned int type, unsigned int code, int value)
{
	int disposition;
	struct __compat_input_dev *c_dev = __input_to_compat(dev);

	disposition = input_get_disposition(dev, type, code, value);

	if ((disposition & INPUT_PASS_TO_DEVICE) && dev->event)
		dev->event(dev, type, code, value);

	if (!c_dev->vals)
		return;

	if (disposition & INPUT_PASS_TO_HANDLERS) {
		struct input_value *v;

		if (disposition & INPUT_SLOT) {
			v = &c_dev->vals[c_dev->num_vals++];
			v->type = EV_ABS;
			v->code = ABS_MT_SLOT;
			v->value = c_dev->mt->slot;
		}

		v = &c_dev->vals[c_dev->num_vals++];
		v->type = type;
		v->code = code;
		v->value = value;
	}

	if (disposition & INPUT_FLUSH) {
		if (c_dev->num_vals >= 2)
			input_pass_values(dev, c_dev->vals, c_dev->num_vals);
		c_dev->num_vals = 0;
	} else if (c_dev->num_vals >= c_dev->max_vals - 2) {
		c_dev->vals[c_dev->num_vals++] = input_value_sync;
		input_pass_values(dev, c_dev->vals, c_dev->num_vals);
		c_dev->num_vals = 0;
	}

}

/**
 * input_event() - report new input event
 * @dev: device that generated the event
 * @type: type of the event
 * @code: event code
 * @value: value of the event
 *
 * This function should be used by drivers implementing various input
 * devices to report input events. See also input_inject_event().
 *
 * NOTE: input_event() may be safely used right after input device was
 * allocated with input_allocate_device(), even before it is registered
 * with input_register_device(), but the event will not reach any of the
 * input handlers. Such early invocation of input_event() may be used
 * to 'seed' initial state of a switch or initial position of absolute
 * axis, etc.
 */
void __compat_input_event(struct input_dev *dev,
		 unsigned int type, unsigned int code, int value)
{
	struct __compat_input_dev *_dev;
	unsigned long flags;
	bool compat_called = 0;

	if (!is_event_supported(type, dev->evbit, EV_MAX))
		return;

	spin_lock_irqsave(&dev->event_lock, flags);
	_dev = __input_to_compat(dev);
	if (_dev && _dev->vals) {
		__compat_input_handle_event(dev, type, code, value);
		compat_called = 1;
	}
	spin_unlock_irqrestore(&dev->event_lock, flags);

	if (!compat_called)
		input_event(dev, type, code, value);
}
EXPORT_SYMBOL(__compat_input_event);

static unsigned int input_estimate_events_per_packet(struct input_dev *dev)
{
	struct __compat_input_dev *_dev = __input_to_compat(dev);
	struct input_mt *mt = _dev->mt;
	int mt_slots;
	int i;
	unsigned int events;

	if (mt) {
		mt_slots = mt->num_slots;
	} else if (test_bit(ABS_MT_TRACKING_ID, dev->absbit)) {
		mt_slots = input_abs_get_max(dev, ABS_MT_TRACKING_ID) -
			   input_abs_get_min(dev, ABS_MT_TRACKING_ID) + 1;
		mt_slots = clamp(mt_slots, 2, 32);
	} else if (test_bit(ABS_MT_POSITION_X, dev->absbit)) {
		mt_slots = 2;
	} else {
		mt_slots = 0;
	}

	events = mt_slots + 1; /* count SYN_MT_REPORT and SYN_REPORT */

	for (i = 0; i < ABS_CNT; i++) {
		if (test_bit(i, dev->absbit)) {
			if (input_is_mt_axis(i))
				events += mt_slots;
			else
				events++;
		}
	}

	for (i = 0; i < REL_CNT; i++)
		if (test_bit(i, dev->relbit))
			events++;

	/* Make room for KEY and MSC events */
	events += 7;

	return events;
}

static struct __compat_input_dev *__do_input_allocate_extra(struct input_dev *dev)
{
	struct __compat_input_dev *extra = __input_to_compat(dev);

	if (extra && !extra->vals && extra->mt) {
		extra->max_vals = input_estimate_events_per_packet(dev) + 2;
		extra->vals = kcalloc(extra->max_vals, sizeof(*extra->vals),
					GFP_KERNEL);
	}
	return extra;
}

struct __compat_input_dev *input_allocate_extra(struct input_dev *dev)
{
	struct __compat_input_dev *extra;

	if (__input_to_compat(dev))
		return __do_input_allocate_extra(dev);

	extra = kzalloc(sizeof(struct __compat_input_dev), GFP_KERNEL);
	if (extra)
		dev->dev.platform_data = extra;

	return __do_input_allocate_extra(dev);
}
EXPORT_SYMBOL_GPL(input_allocate_extra);

void input_free_extra(struct input_dev *dev)
{
	struct __compat_input_dev *_dev = __input_to_compat(dev);
	unsigned long flags;

	if (!_dev)
		return;

	spin_lock_irqsave(&dev->event_lock, flags);
	kfree(_dev);
	dev->dev.platform_data = NULL;
	spin_unlock_irqrestore(&dev->event_lock, flags);
}
EXPORT_SYMBOL_GPL(input_free_extra);

struct input_mt *input_get_mt(struct input_dev *dev)
{
	struct __compat_input_dev *_dev = __input_to_compat(dev);
	if (_dev)
		return _dev->mt;
	return NULL;
}

void input_set_mt(struct input_dev *dev, struct input_mt *mt)
{
	struct __compat_input_dev *_dev = __input_to_compat(dev);
	if (_dev)
		_dev->mt = mt;
}
