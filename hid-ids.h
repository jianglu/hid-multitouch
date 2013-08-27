/*
 *  USB HID quirks support for Linux
 *
 *  Copyright (c) 1999 Andreas Gal
 *  Copyright (c) 2000-2005 Vojtech Pavlik <vojtech@suse.cz>
 *  Copyright (c) 2005 Michael Haboustak <mike-@cinci.rr.com> for Concept2, Inc
 *  Copyright (c) 2006-2007 Jiri Kosina
 */

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 */

#ifndef HID_IDS_H_FILE
#define HID_IDS_H_FILE

#define USB_VENDOR_ID_3M		0x0596
#define USB_DEVICE_ID_3M1968		0x0500
#define USB_DEVICE_ID_3M2256		0x0502
#define USB_DEVICE_ID_3M3266		0x0506

#define USB_VENDOR_ID_A4TECH		0x09da
#define USB_DEVICE_ID_A4TECH_WCP32PU	0x0006
#define USB_DEVICE_ID_A4TECH_X5_005D	0x000a
#define USB_DEVICE_ID_A4TECH_RP_649	0x001a

#define USB_VENDOR_ID_AASHIMA		0x06d6
#define USB_DEVICE_ID_AASHIMA_GAMEPAD	0x0025
#define USB_DEVICE_ID_AASHIMA_PREDATOR	0x0026

#define USB_VENDOR_ID_ACECAD		0x0460
#define USB_DEVICE_ID_ACECAD_FLAIR	0x0004
#define USB_DEVICE_ID_ACECAD_302	0x0008

#define USB_VENDOR_ID_ACRUX		0x1a34

#define USB_VENDOR_ID_ACTIONSTAR	0x2101
#define USB_DEVICE_ID_ACTIONSTAR_1011	0x1011

#define USB_VENDOR_ID_ADS_TECH		0x06e1
#define USB_DEVICE_ID_ADS_TECH_RADIO_SI470X	0xa155

#define USB_VENDOR_ID_AFATECH		0x15a4
#define USB_DEVICE_ID_AFATECH_AF9016	0x9016

#define USB_VENDOR_ID_AIPTEK		0x08ca
#define USB_DEVICE_ID_AIPTEK_01		0x0001
#define USB_DEVICE_ID_AIPTEK_10		0x0010
#define USB_DEVICE_ID_AIPTEK_20		0x0020
#define USB_DEVICE_ID_AIPTEK_21		0x0021
#define USB_DEVICE_ID_AIPTEK_22		0x0022
#define USB_DEVICE_ID_AIPTEK_23		0x0023
#define USB_DEVICE_ID_AIPTEK_24		0x0024

#define USB_VENDOR_ID_AIRCABLE		0x16CA
#define USB_DEVICE_ID_AIRCABLE1		0x1502

#define USB_VENDOR_ID_AIREN		0x1a2c
#define USB_DEVICE_ID_AIREN_SLIMPLUS	0x0002

#define USB_VENDOR_ID_ALCOR		0x058f
#define USB_DEVICE_ID_ALCOR_USBRS232	0x9720

#define USB_VENDOR_ID_ALPS		0x0433
#define USB_DEVICE_ID_IBM_GAMEPAD	0x1101

#define USB_VENDOR_ID_APPLE		0x05ac
#define USB_DEVICE_ID_APPLE_MIGHTYMOUSE	0x0304
#define USB_DEVICE_ID_APPLE_MAGICMOUSE	0x030d
#define USB_DEVICE_ID_APPLE_MAGICTRACKPAD	0x030e
#define USB_DEVICE_ID_APPLE_FOUNTAIN_ANSI	0x020e
#define USB_DEVICE_ID_APPLE_FOUNTAIN_ISO	0x020f
#define USB_DEVICE_ID_APPLE_GEYSER_ANSI	0x0214
#define USB_DEVICE_ID_APPLE_GEYSER_ISO	0x0215
#define USB_DEVICE_ID_APPLE_GEYSER_JIS	0x0216
#define USB_DEVICE_ID_APPLE_GEYSER3_ANSI	0x0217
#define USB_DEVICE_ID_APPLE_GEYSER3_ISO	0x0218
#define USB_DEVICE_ID_APPLE_GEYSER3_JIS	0x0219
#define USB_DEVICE_ID_APPLE_GEYSER4_ANSI	0x021a
#define USB_DEVICE_ID_APPLE_GEYSER4_ISO	0x021b
#define USB_DEVICE_ID_APPLE_GEYSER4_JIS	0x021c
#define USB_DEVICE_ID_APPLE_ALU_MINI_ANSI	0x021d
#define USB_DEVICE_ID_APPLE_ALU_MINI_ISO	0x021e
#define USB_DEVICE_ID_APPLE_ALU_MINI_JIS	0x021f
#define USB_DEVICE_ID_APPLE_ALU_ANSI	0x0220
#define USB_DEVICE_ID_APPLE_ALU_ISO	0x0221
#define USB_DEVICE_ID_APPLE_ALU_JIS	0x0222
#define USB_DEVICE_ID_APPLE_WELLSPRING_ANSI	0x0223
#define USB_DEVICE_ID_APPLE_WELLSPRING_ISO	0x0224
#define USB_DEVICE_ID_APPLE_WELLSPRING_JIS	0x0225
#define USB_DEVICE_ID_APPLE_GEYSER4_HF_ANSI	0x0229
#define USB_DEVICE_ID_APPLE_GEYSER4_HF_ISO	0x022a
#define USB_DEVICE_ID_APPLE_GEYSER4_HF_JIS	0x022b
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_ANSI	0x022c
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_ISO	0x022d
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_JIS	0x022e
#define USB_DEVICE_ID_APPLE_WELLSPRING2_ANSI	0x0230
#define USB_DEVICE_ID_APPLE_WELLSPRING2_ISO	0x0231
#define USB_DEVICE_ID_APPLE_WELLSPRING2_JIS	0x0232
#define USB_DEVICE_ID_APPLE_WELLSPRING3_ANSI	0x0236
#define USB_DEVICE_ID_APPLE_WELLSPRING3_ISO	0x0237
#define USB_DEVICE_ID_APPLE_WELLSPRING3_JIS	0x0238
#define USB_DEVICE_ID_APPLE_WELLSPRING4_ANSI	0x023f
#define USB_DEVICE_ID_APPLE_WELLSPRING4_ISO	0x0240
#define USB_DEVICE_ID_APPLE_WELLSPRING4_JIS	0x0241
#define USB_DEVICE_ID_APPLE_WELLSPRING4A_ANSI	0x0242
#define USB_DEVICE_ID_APPLE_WELLSPRING4A_ISO	0x0243
#define USB_DEVICE_ID_APPLE_WELLSPRING4A_JIS	0x0244
#define USB_DEVICE_ID_APPLE_WELLSPRING5_ANSI	0x0245
#define USB_DEVICE_ID_APPLE_WELLSPRING5_ISO	0x0246
#define USB_DEVICE_ID_APPLE_WELLSPRING5_JIS	0x0247
#define USB_DEVICE_ID_APPLE_ALU_REVB_ANSI	0x024f
#define USB_DEVICE_ID_APPLE_ALU_REVB_ISO	0x0250
#define USB_DEVICE_ID_APPLE_ALU_REVB_JIS	0x0251
#define USB_DEVICE_ID_APPLE_WELLSPRING5A_ANSI	0x0252
#define USB_DEVICE_ID_APPLE_WELLSPRING5A_ISO	0x0253
#define USB_DEVICE_ID_APPLE_WELLSPRING5A_JIS	0x0254
#define USB_DEVICE_ID_APPLE_WELLSPRING7A_ANSI	0x0259
#define USB_DEVICE_ID_APPLE_WELLSPRING7A_ISO	0x025a
#define USB_DEVICE_ID_APPLE_WELLSPRING7A_JIS	0x025b
#define USB_DEVICE_ID_APPLE_WELLSPRING6A_ANSI	0x0249
#define USB_DEVICE_ID_APPLE_WELLSPRING6A_ISO	0x024a
#define USB_DEVICE_ID_APPLE_WELLSPRING6A_JIS	0x024b
#define USB_DEVICE_ID_APPLE_WELLSPRING6_ANSI	0x024c
#define USB_DEVICE_ID_APPLE_WELLSPRING6_ISO	0x024d
#define USB_DEVICE_ID_APPLE_WELLSPRING6_JIS	0x024e
#define USB_DEVICE_ID_APPLE_WELLSPRING7_ANSI	0x0262
#define USB_DEVICE_ID_APPLE_WELLSPRING7_ISO	0x0263
#define USB_DEVICE_ID_APPLE_WELLSPRING7_JIS	0x0264
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_2009_ANSI  0x0239
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_2009_ISO   0x023a
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_2009_JIS   0x023b
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_2011_ANSI  0x0255
#define USB_DEVICE_ID_APPLE_ALU_WIRELESS_2011_ISO   0x0256
#define USB_DEVICE_ID_APPLE_WELLSPRING8_ANSI	0x0291
#define USB_DEVICE_ID_APPLE_WELLSPRING8_ISO	0x0292
#define USB_DEVICE_ID_APPLE_WELLSPRING8_JIS	0x0293
#define USB_DEVICE_ID_APPLE_FOUNTAIN_TP_ONLY	0x030a
#define USB_DEVICE_ID_APPLE_GEYSER1_TP_ONLY	0x030b
#define USB_DEVICE_ID_APPLE_IRCONTROL	0x8240
#define USB_DEVICE_ID_APPLE_IRCONTROL2	0x1440
#define USB_DEVICE_ID_APPLE_IRCONTROL3	0x8241
#define USB_DEVICE_ID_APPLE_IRCONTROL4	0x8242
#define USB_DEVICE_ID_APPLE_IRCONTROL5	0x8243

#define USB_VENDOR_ID_ASUS		0x0486
#define USB_DEVICE_ID_ASUS_T91MT	0x0185
#define USB_DEVICE_ID_ASUSTEK_MULTITOUCH_YFO	0x0186

#define USB_VENDOR_ID_ASUSTEK		0x0b05
#define USB_DEVICE_ID_ASUSTEK_LCM	0x1726
#define USB_DEVICE_ID_ASUSTEK_LCM2	0x175b

#define USB_VENDOR_ID_ATEN		0x0557
#define USB_DEVICE_ID_ATEN_UC100KM	0x2004
#define USB_DEVICE_ID_ATEN_CS124U	0x2202
#define USB_DEVICE_ID_ATEN_2PORTKVM	0x2204
#define USB_DEVICE_ID_ATEN_4PORTKVM	0x2205
#define USB_DEVICE_ID_ATEN_4PORTKVMC	0x2208

#define USB_VENDOR_ID_ATMEL		0x03eb
#define USB_DEVICE_ID_ATMEL_MULTITOUCH	0x211c
#define USB_DEVICE_ID_ATMEL_MXT_DIGITIZER	0x2118
#define USB_VENDOR_ID_ATMEL_V_USB	0x16c0
#define USB_DEVICE_ID_ATMEL_V_USB	0x05df

#define USB_VENDOR_ID_AUREAL		0x0755
#define USB_DEVICE_ID_AUREAL_W01RN	0x2626

#define USB_VENDOR_ID_AVERMEDIA		0x07ca
#define USB_DEVICE_ID_AVER_FM_MR800	0xb800

#define USB_VENDOR_ID_AXENTIA		0x12cf
#define USB_DEVICE_ID_AXENTIA_FM_RADIO	0x7111

#define USB_VENDOR_ID_BAANTO		0x2453
#define USB_DEVICE_ID_BAANTO_MT_190W2	0x0100

#define USB_VENDOR_ID_BELKIN		0x050d
#define USB_DEVICE_ID_FLIP_KVM		0x3201

#define USB_VENDOR_ID_BERKSHIRE		0x0c98
#define USB_DEVICE_ID_BERKSHIRE_PCWD	0x1140

#define USB_VENDOR_ID_BTC		0x046e
#define USB_DEVICE_ID_BTC_EMPREX_REMOTE	0x5578
#define USB_DEVICE_ID_BTC_EMPREX_REMOTE_2	0x5577

#define USB_VENDOR_ID_CANDO		0x2087
#define USB_DEVICE_ID_CANDO_PIXCIR_MULTI_TOUCH 0x0703
#define USB_DEVICE_ID_CANDO_MULTI_TOUCH	0x0a01
#define USB_DEVICE_ID_CANDO_MULTI_TOUCH_10_1 0x0a02
#define USB_DEVICE_ID_CANDO_MULTI_TOUCH_11_6 0x0b03
#define USB_DEVICE_ID_CANDO_MULTI_TOUCH_15_6 0x0f01

#define USB_VENDOR_ID_CH		0x068e
#define USB_DEVICE_ID_CH_PRO_THROTTLE	0x00f1
#define USB_DEVICE_ID_CH_PRO_PEDALS	0x00f2
#define USB_DEVICE_ID_CH_FIGHTERSTICK	0x00f3
#define USB_DEVICE_ID_CH_COMBATSTICK	0x00f4
#define USB_DEVICE_ID_CH_FLIGHT_SIM_ECLIPSE_YOKE       0x0051
#define USB_DEVICE_ID_CH_FLIGHT_SIM_YOKE	0x00ff
#define USB_DEVICE_ID_CH_3AXIS_5BUTTON_STICK	0x00d3
#define USB_DEVICE_ID_CH_AXIS_295	0x001c

#define USB_VENDOR_ID_CHERRY		0x046a
#define USB_DEVICE_ID_CHERRY_CYMOTION	0x0023
#define USB_DEVICE_ID_CHERRY_CYMOTION_SOLAR	0x0027

#define USB_VENDOR_ID_CHIC		0x05fe
#define USB_DEVICE_ID_CHIC_GAMEPAD	0x0014

#define USB_VENDOR_ID_CHICONY		0x04f2
#define USB_DEVICE_ID_CHICONY_TACTICAL_PAD	0x0418
#define USB_DEVICE_ID_CHICONY_MULTI_TOUCH	0xb19d
#define USB_DEVICE_ID_CHICONY_WIRELESS	0x0618
#define USB_DEVICE_ID_CHICONY_WIRELESS2	0x1123
#define USB_DEVICE_ID_CHICONY_AK1D	0x1125

#define USB_VENDOR_ID_CHUNGHWAT		0x2247
#define USB_DEVICE_ID_CHUNGHWAT_MULTITOUCH	0x0001

#define USB_VENDOR_ID_CIDC		0x1677

#define USB_VENDOR_ID_CMEDIA		0x0d8c
#define USB_DEVICE_ID_CM109		0x000e

#define USB_VENDOR_ID_CODEMERCS		0x07c0
#define USB_DEVICE_ID_CODEMERCS_IOW_FIRST	0x1500
#define USB_DEVICE_ID_CODEMERCS_IOW_LAST	0x15ff

#define USB_VENDOR_ID_CREATIVELABS	0x041e
#define USB_DEVICE_ID_PRODIKEYS_PCMIDI	0x2801

#define USB_VENDOR_ID_CVTOUCH		0x1ff7
#define USB_DEVICE_ID_CVTOUCH_SCREEN	0x0013

#define USB_VENDOR_ID_CYGNAL		0x10c4
#define USB_DEVICE_ID_CYGNAL_RADIO_SI470X	0x818a

#define USB_VENDOR_ID_CYPRESS		0x04b4
#define USB_DEVICE_ID_CYPRESS_MOUSE	0x0001
#define USB_DEVICE_ID_CYPRESS_HIDCOM	0x5500
#define USB_DEVICE_ID_CYPRESS_ULTRAMOUSE	0x7417
#define USB_DEVICE_ID_CYPRESS_BARCODE_1	0xde61
#define USB_DEVICE_ID_CYPRESS_BARCODE_2	0xde64
#define USB_DEVICE_ID_CYPRESS_BARCODE_3	0xbca1
#define USB_DEVICE_ID_CYPRESS_BARCODE_4	0xed81
#define USB_DEVICE_ID_CYPRESS_TRUETOUCH	0xc001

#define USB_VENDOR_ID_DATA_MODUL	0x7374
#define USB_VENDOR_ID_DATA_MODUL_EASYMAXTOUCH	0x1201

#define USB_VENDOR_ID_DEALEXTREAME	0x10c5
#define USB_DEVICE_ID_DEALEXTREAME_RADIO_SI4701	0x819a

#define USB_VENDOR_ID_DELORME		0x1163
#define USB_DEVICE_ID_DELORME_EARTHMATE	0x0100
#define USB_DEVICE_ID_DELORME_EM_LT20	0x0200

#define USB_VENDOR_ID_DMI		0x0c0b
#define USB_DEVICE_ID_DMI_ENC		0x5fab

#define USB_VENDOR_ID_DRAGONRISE	0x0079

#define USB_VENDOR_ID_DWAV		0x0eef
#define USB_DEVICE_ID_EGALAX_TOUCHCONTROLLER	0x0001
#define USB_DEVICE_ID_DWAV_TOUCHCONTROLLER	0x0002
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_480D	0x480d
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_480E	0x480e
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_7207	0x7207
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_720C	0x720c
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_7224	0x7224
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_722A	0x722A
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_725E	0x725e
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_7262	0x7262
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_726B	0x726b
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_72A1	0x72a1
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_72AA	0x72aa
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_72C4	0x72c4
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_72D0	0x72d0
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_72FA	0x72fa
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_7302	0x7302
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_7349	0x7349
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_73F7	0x73f7
#define USB_DEVICE_ID_DWAV_EGALAX_MULTITOUCH_A001	0xa001

#define USB_VENDOR_ID_ELECOM		0x056e
#define USB_DEVICE_ID_ELECOM_BM084	0x0061

#define USB_VENDOR_ID_DREAM_CHEEKY	0x1d34

#define USB_VENDOR_ID_ELO		0x04E7
#define USB_DEVICE_ID_ELO_TS2515	0x0022
#define USB_DEVICE_ID_ELO_TS2700	0x0020

#define USB_VENDOR_ID_EMS		0x2006
#define USB_DEVICE_ID_EMS_TRIO_LINKER_PLUS_II 0x0118

#define USB_VENDOR_ID_FLATFROG		0x25b5
#define USB_DEVICE_ID_MULTITOUCH_3200	0x0002

#define USB_VENDOR_ID_ESSENTIAL_REALITY	0x0d7f
#define USB_DEVICE_ID_ESSENTIAL_REALITY_P5 0x0100

#define USB_VENDOR_ID_ETT		0x0664
#define USB_DEVICE_ID_TC5UH		0x0309
#define USB_DEVICE_ID_TC4UM		0x0306

#define USB_VENDOR_ID_ETURBOTOUCH	0x22b9
#define USB_DEVICE_ID_ETURBOTOUCH	0x0006

#define USB_VENDOR_ID_EZKEY		0x0518
#define USB_DEVICE_ID_BTC_8193		0x0002

#define USB_VENDOR_ID_FORMOSA          0x147a
#define USB_DEVICE_ID_FORMOSA_IR_RECEIVER      0xe03e

#define USB_VENDOR_ID_FREESCALE		0x15A2
#define USB_DEVICE_ID_FREESCALE_MX28	0x004F

#define USB_VENDOR_ID_FRUCTEL	0x25B6
#define USB_DEVICE_ID_GAMETEL_MT_MODE	0x0002

#define USB_VENDOR_ID_GAMERON		0x0810
#define USB_DEVICE_ID_GAMERON_DUAL_PSX_ADAPTOR	0x0001
#define USB_DEVICE_ID_GAMERON_DUAL_PCS_ADAPTOR	0x0002

#define USB_VENDOR_ID_GENERAL_TOUCH	0x0dfc
#define USB_DEVICE_ID_GENERAL_TOUCH_WIN7_TWOFINGERS 0x0003
#define USB_DEVICE_ID_GENERAL_TOUCH_WIN8_PWT_TENFINGERS 0x0100

#define USB_VENDOR_ID_GLAB		0x06c2
#define USB_DEVICE_ID_4_PHIDGETSERVO_30	0x0038
#define USB_DEVICE_ID_1_PHIDGETSERVO_30	0x0039
#define USB_DEVICE_ID_0_0_4_IF_KIT	0x0040
#define USB_DEVICE_ID_0_16_16_IF_KIT	0x0044
#define USB_DEVICE_ID_8_8_8_IF_KIT	0x0045
#define USB_DEVICE_ID_0_8_7_IF_KIT	0x0051
#define USB_DEVICE_ID_0_8_8_IF_KIT	0x0053
#define USB_DEVICE_ID_PHIDGET_MOTORCONTROL	0x0058

#define USB_VENDOR_ID_GOODTOUCH		0x1aad
#define USB_DEVICE_ID_GOODTOUCH_000f	0x000f

#define USB_VENDOR_ID_GOTOP		0x08f2
#define USB_DEVICE_ID_SUPER_Q2		0x007f
#define USB_DEVICE_ID_GOGOPEN		0x00ce
#define USB_DEVICE_ID_PENPOWER		0x00f4

#define USB_VENDOR_ID_GREENASIA		0x0e8f
#define USB_DEVICE_ID_GREENASIA_DUAL_USB_JOYPAD	0x3013

#define USB_VENDOR_ID_GRETAGMACBETH	0x0971
#define USB_DEVICE_ID_GRETAGMACBETH_HUEY	0x2005

#define USB_VENDOR_ID_GRIFFIN		0x077d
#define USB_DEVICE_ID_POWERMATE		0x0410
#define USB_DEVICE_ID_SOUNDKNOB		0x04AA
#define USB_DEVICE_ID_RADIOSHARK	0x627a

#define USB_VENDOR_ID_GTCO		0x078c
#define USB_DEVICE_ID_GTCO_90		0x0090
#define USB_DEVICE_ID_GTCO_100		0x0100
#define USB_DEVICE_ID_GTCO_101		0x0101
#define USB_DEVICE_ID_GTCO_103		0x0103
#define USB_DEVICE_ID_GTCO_104		0x0104
#define USB_DEVICE_ID_GTCO_105		0x0105
#define USB_DEVICE_ID_GTCO_106		0x0106
#define USB_DEVICE_ID_GTCO_107		0x0107
#define USB_DEVICE_ID_GTCO_108		0x0108
#define USB_DEVICE_ID_GTCO_200		0x0200
#define USB_DEVICE_ID_GTCO_201		0x0201
#define USB_DEVICE_ID_GTCO_202		0x0202
#define USB_DEVICE_ID_GTCO_203		0x0203
#define USB_DEVICE_ID_GTCO_204		0x0204
#define USB_DEVICE_ID_GTCO_205		0x0205
#define USB_DEVICE_ID_GTCO_206		0x0206
#define USB_DEVICE_ID_GTCO_207		0x0207
#define USB_DEVICE_ID_GTCO_300		0x0300
#define USB_DEVICE_ID_GTCO_301		0x0301
#define USB_DEVICE_ID_GTCO_302		0x0302
#define USB_DEVICE_ID_GTCO_303		0x0303
#define USB_DEVICE_ID_GTCO_304		0x0304
#define USB_DEVICE_ID_GTCO_305		0x0305
#define USB_DEVICE_ID_GTCO_306		0x0306
#define USB_DEVICE_ID_GTCO_307		0x0307
#define USB_DEVICE_ID_GTCO_308		0x0308
#define USB_DEVICE_ID_GTCO_309		0x0309
#define USB_DEVICE_ID_GTCO_400		0x0400
#define USB_DEVICE_ID_GTCO_401		0x0401
#define USB_DEVICE_ID_GTCO_402		0x0402
#define USB_DEVICE_ID_GTCO_403		0x0403
#define USB_DEVICE_ID_GTCO_404		0x0404
#define USB_DEVICE_ID_GTCO_405		0x0405
#define USB_DEVICE_ID_GTCO_500		0x0500
#define USB_DEVICE_ID_GTCO_501		0x0501
#define USB_DEVICE_ID_GTCO_502		0x0502
#define USB_DEVICE_ID_GTCO_503		0x0503
#define USB_DEVICE_ID_GTCO_504		0x0504
#define USB_DEVICE_ID_GTCO_1000		0x1000
#define USB_DEVICE_ID_GTCO_1001		0x1001
#define USB_DEVICE_ID_GTCO_1002		0x1002
#define USB_DEVICE_ID_GTCO_1003		0x1003
#define USB_DEVICE_ID_GTCO_1004		0x1004
#define USB_DEVICE_ID_GTCO_1005		0x1005
#define USB_DEVICE_ID_GTCO_1006		0x1006
#define USB_DEVICE_ID_GTCO_1007		0x1007

#define USB_VENDOR_ID_GYRATION		0x0c16
#define USB_DEVICE_ID_GYRATION_REMOTE	0x0002
#define USB_DEVICE_ID_GYRATION_REMOTE_2 0x0003
#define USB_DEVICE_ID_GYRATION_REMOTE_3 0x0008

#define USB_VENDOR_ID_HANWANG		0x0b57
#define USB_DEVICE_ID_HANWANG_TABLET_FIRST	0x5000
#define USB_DEVICE_ID_HANWANG_TABLET_LAST	0x8fff

#define USB_VENDOR_ID_HANVON		0x20b3
#define USB_DEVICE_ID_HANVON_MULTITOUCH	0x0a18

#define USB_VENDOR_ID_HANVON_ALT	0x22ed
#define USB_DEVICE_ID_HANVON_ALT_MULTITOUCH	0x1010

#define USB_VENDOR_ID_HAPP		0x078b
#define USB_DEVICE_ID_UGCI_DRIVING	0x0010
#define USB_DEVICE_ID_UGCI_FLYING	0x0020
#define USB_DEVICE_ID_UGCI_FIGHTING	0x0030

#define USB_VENDOR_ID_HUION		0x256c
#define USB_DEVICE_ID_HUION_580		0x006e

#define USB_VENDOR_ID_IDEACOM		0x1cb6
#define USB_DEVICE_ID_IDEACOM_IDC6650	0x6650
#define USB_DEVICE_ID_IDEACOM_IDC6651	0x6651

#define USB_VENDOR_ID_ILITEK		0x222a
#define USB_DEVICE_ID_ILITEK_MULTITOUCH	0x0001

#define USB_VENDOR_ID_ION		0x15e4
#define USB_DEVICE_ID_ICADE		0x0132

#define USB_VENDOR_ID_HOLTEK		0x1241
#define USB_DEVICE_ID_HOLTEK_ON_LINE_GRIP	0x5015

#define USB_VENDOR_ID_HOLTEK_ALT		0x04d9
#define USB_DEVICE_ID_HOLTEK_ALT_KEYBOARD	0xa055
#define USB_DEVICE_ID_HOLTEK_ALT_MOUSE_A067	0xa067
#define USB_DEVICE_ID_HOLTEK_ALT_MOUSE_A04A	0xa04a

#define USB_VENDOR_ID_IMATION		0x0718
#define USB_DEVICE_ID_DISC_STAKKA	0xd000

#define USB_VENDOR_ID_IRTOUCHSYSTEMS	0x6615
#define USB_DEVICE_ID_IRTOUCH_INFRARED_USB	0x0070

#define USB_VENDOR_ID_JABRA		0x0b0e
#define USB_DEVICE_ID_JABRA_SPEAK_410	0x0412
#define USB_DEVICE_ID_JABRA_SPEAK_510	0x0420

#define USB_VENDOR_ID_JESS		0x0c45
#define USB_DEVICE_ID_JESS_YUREX	0x1010

#define USB_VENDOR_ID_JESS2		0x0f30
#define USB_DEVICE_ID_JESS2_COLOR_RUMBLE_PAD 0x0111

#define USB_VENDOR_ID_KBGEAR		0x084e
#define USB_DEVICE_ID_KBGEAR_JAMSTUDIO	0x1001

#define USB_VENDOR_ID_KENSINGTON	0x047d
#define USB_DEVICE_ID_KS_SLIMBLADE	0x2041

#define USB_VENDOR_ID_KWORLD		0x1b80
#define USB_DEVICE_ID_KWORLD_RADIO_FM700	0xd700

#define USB_VENDOR_ID_KEYTOUCH		0x0926
#define USB_DEVICE_ID_KEYTOUCH_IEC	0x3333

#define USB_VENDOR_ID_KYE		0x0458
#define USB_DEVICE_ID_KYE_ERGO_525V	0x0087
#define USB_DEVICE_ID_GENIUS_GILA_GAMING_MOUSE	0x0138
#define USB_DEVICE_ID_GENIUS_GX_IMPERATOR	0x4018
#define USB_DEVICE_ID_KYE_GPEN_560	0x5003
#define USB_DEVICE_ID_KYE_EASYPEN_I405X	0x5010
#define USB_DEVICE_ID_KYE_MOUSEPEN_I608X	0x5011
#define USB_DEVICE_ID_KYE_EASYPEN_M610X	0x5013

#define USB_VENDOR_ID_LABTEC		0x1020
#define USB_DEVICE_ID_LABTEC_WIRELESS_KEYBOARD	0x0006

#define USB_VENDOR_ID_LCPOWER		0x1241
#define USB_DEVICE_ID_LCPOWER_LC1000	0xf767

#define USB_VENDOR_ID_LD		0x0f11
#define USB_DEVICE_ID_LD_CASSY		0x1000
#define USB_DEVICE_ID_LD_CASSY2		0x1001
#define USB_DEVICE_ID_LD_POCKETCASSY	0x1010
#define USB_DEVICE_ID_LD_POCKETCASSY2	0x1011
#define USB_DEVICE_ID_LD_MOBILECASSY	0x1020
#define USB_DEVICE_ID_LD_MOBILECASSY2	0x1021
#define USB_DEVICE_ID_LD_MICROCASSYVOLTAGE	0x1031
#define USB_DEVICE_ID_LD_MICROCASSYCURRENT	0x1032
#define USB_DEVICE_ID_LD_MICROCASSYTIME		0x1033
#define USB_DEVICE_ID_LD_MICROCASSYTEMPERATURE	0x1035
#define USB_DEVICE_ID_LD_MICROCASSYPH		0x1038
#define USB_DEVICE_ID_LD_JWM		0x1080
#define USB_DEVICE_ID_LD_DMMP		0x1081
#define USB_DEVICE_ID_LD_UMIP		0x1090
#define USB_DEVICE_ID_LD_UMIC		0x10A0
#define USB_DEVICE_ID_LD_UMIB		0x10B0
#define USB_DEVICE_ID_LD_XRAY		0x1100
#define USB_DEVICE_ID_LD_XRAY2		0x1101
#define USB_DEVICE_ID_LD_XRAYCT		0x1110
#define USB_DEVICE_ID_LD_VIDEOCOM	0x1200
#define USB_DEVICE_ID_LD_MOTOR		0x1210
#define USB_DEVICE_ID_LD_COM3LAB	0x2000
#define USB_DEVICE_ID_LD_TELEPORT	0x2010
#define USB_DEVICE_ID_LD_NETWORKANALYSER 0x2020
#define USB_DEVICE_ID_LD_POWERCONTROL	0x2030
#define USB_DEVICE_ID_LD_MACHINETEST	0x2040
#define USB_DEVICE_ID_LD_MOSTANALYSER	0x2050
#define USB_DEVICE_ID_LD_MOSTANALYSER2	0x2051
#define USB_DEVICE_ID_LD_ABSESP		0x2060
#define USB_DEVICE_ID_LD_AUTODATABUS	0x2070
#define USB_DEVICE_ID_LD_MCT		0x2080
#define USB_DEVICE_ID_LD_HYBRID		0x2090
#define USB_DEVICE_ID_LD_HEATCONTROL	0x20A0

#define USB_VENDOR_ID_LENOVO		0x17ef
#define USB_DEVICE_ID_LENOVO_TPKBD	0x6009

#define USB_VENDOR_ID_LG		0x1fd2
#define USB_DEVICE_ID_LG_MULTITOUCH	0x0064

#define USB_VENDOR_ID_LOGITECH		0x046d
#define USB_DEVICE_ID_LOGITECH_AUDIOHUB 0x0a0e
#define USB_DEVICE_ID_LOGITECH_RECEIVER	0xc101
#define USB_DEVICE_ID_LOGITECH_HARMONY_FIRST  0xc110
#define USB_DEVICE_ID_LOGITECH_HARMONY_LAST 0xc14f
#define USB_DEVICE_ID_LOGITECH_HARMONY_PS3 0x0306
#define USB_DEVICE_ID_LOGITECH_RUMBLEPAD_CORD	0xc20a
#define USB_DEVICE_ID_LOGITECH_RUMBLEPAD	0xc211
#define USB_DEVICE_ID_LOGITECH_EXTREME_3D	0xc215
#define USB_DEVICE_ID_LOGITECH_RUMBLEPAD2	0xc218
#define USB_DEVICE_ID_LOGITECH_RUMBLEPAD2_2	0xc219
#define USB_DEVICE_ID_LOGITECH_WINGMAN_F3D	0xc283
#define USB_DEVICE_ID_LOGITECH_FORCE3D_PRO	0xc286
#define USB_DEVICE_ID_LOGITECH_FLIGHT_SYSTEM_G940	0xc287
#define USB_DEVICE_ID_LOGITECH_WINGMAN_FFG	0xc293
#define USB_DEVICE_ID_LOGITECH_WHEEL	0xc294
#define USB_DEVICE_ID_LOGITECH_MOMO_WHEEL	0xc295
#define USB_DEVICE_ID_LOGITECH_DFP_WHEEL	0xc298
#define USB_DEVICE_ID_LOGITECH_G25_WHEEL	0xc299
#define USB_DEVICE_ID_LOGITECH_DFGT_WHEEL	0xc29a
#define USB_DEVICE_ID_LOGITECH_G27_WHEEL	0xc29b
#define USB_DEVICE_ID_LOGITECH_WII_WHEEL	0xc29c
#define USB_DEVICE_ID_LOGITECH_ELITE_KBD	0xc30a
#define USB_DEVICE_ID_S510_RECEIVER	0xc50c
#define USB_DEVICE_ID_S510_RECEIVER_2	0xc517
#define USB_DEVICE_ID_LOGITECH_CORDLESS_DESKTOP_LX500	0xc512
#define USB_DEVICE_ID_MX3000_RECEIVER	0xc513
#define USB_DEVICE_ID_LOGITECH_UNIFYING_RECEIVER	0xc52b
#define USB_DEVICE_ID_LOGITECH_UNIFYING_RECEIVER_2	0xc532
#define USB_DEVICE_ID_SPACETRAVELLER	0xc623
#define USB_DEVICE_ID_SPACENAVIGATOR	0xc626
#define USB_DEVICE_ID_DINOVO_DESKTOP	0xc704
#define USB_DEVICE_ID_DINOVO_EDGE	0xc714
#define USB_DEVICE_ID_DINOVO_MINI	0xc71f
#define USB_DEVICE_ID_LOGITECH_MOMO_WHEEL2	0xca03

#define USB_VENDOR_ID_LUMIO		0x202e
#define USB_DEVICE_ID_CRYSTALTOUCH	0x0006
#define USB_DEVICE_ID_CRYSTALTOUCH_DUAL	0x0007

#define USB_VENDOR_ID_MADCATZ		0x0738
#define USB_DEVICE_ID_MADCATZ_BEATPAD	0x4540

#define USB_VENDOR_ID_MCC		0x09db
#define USB_DEVICE_ID_MCC_PMD1024LS	0x0076
#define USB_DEVICE_ID_MCC_PMD1208LS	0x007a

#define USB_VENDOR_ID_MGE		0x0463
#define USB_DEVICE_ID_MGE_UPS		0xffff
#define USB_DEVICE_ID_MGE_UPS1		0x0001

#define USB_VENDOR_ID_MICROCHIP		0x04d8
#define USB_DEVICE_ID_PICKIT1		0x0032
#define USB_DEVICE_ID_PICKIT2		0x0033
#define USB_DEVICE_ID_PICOLCD		0xc002
#define USB_DEVICE_ID_PICOLCD_BOOTLOADER	0xf002

#define USB_VENDOR_ID_MICROSOFT		0x045e
#define USB_DEVICE_ID_SIDEWINDER_GV	0x003b
#define USB_DEVICE_ID_WIRELESS_OPTICAL_DESKTOP_3_0 0x009d
#define USB_DEVICE_ID_MS_NE4K		0x00db
#define USB_DEVICE_ID_MS_NE4K_JP	0x00dc
#define USB_DEVICE_ID_MS_LK6K		0x00f9
#define USB_DEVICE_ID_MS_PRESENTER_8K_BT	0x0701
#define USB_DEVICE_ID_MS_PRESENTER_8K_USB	0x0713
#define USB_DEVICE_ID_MS_DIGITAL_MEDIA_3K	0x0730
#define USB_DEVICE_ID_MS_COMFORT_MOUSE_4500	0x076c

#define USB_VENDOR_ID_MOJO		0x8282
#define USB_DEVICE_ID_RETRO_ADAPTER	0x3201

#define USB_VENDOR_ID_MONTEREY		0x0566
#define USB_DEVICE_ID_GENIUS_KB29E	0x3004

#define USB_VENDOR_ID_MSI		0x1770
#define USB_DEVICE_ID_MSI_GX680R_LED_PANEL	0xff00

#define USB_VENDOR_ID_NATIONAL_SEMICONDUCTOR 0x0400
#define USB_DEVICE_ID_N_S_HARMONY	0xc359

#define USB_VENDOR_ID_NATSU		0x08b7
#define USB_DEVICE_ID_NATSU_GAMEPAD	0x0001

#define USB_VENDOR_ID_NCR		0x0404
#define USB_DEVICE_ID_NCR_FIRST		0x0300
#define USB_DEVICE_ID_NCR_LAST		0x03ff

#define USB_VENDOR_ID_NEC		0x073e
#define USB_DEVICE_ID_NEC_USB_GAME_PAD	0x0301

#define USB_VENDOR_ID_NEXIO		0x1870
#define USB_DEVICE_ID_NEXIO_MULTITOUCH_420	0x010d

#define USB_VENDOR_ID_NEXTWINDOW	0x1926
#define USB_DEVICE_ID_NEXTWINDOW_TOUCHSCREEN	0x0003

#define USB_VENDOR_ID_NINTENDO		0x057e
#define USB_DEVICE_ID_NINTENDO_WIIMOTE	0x0306
#define USB_DEVICE_ID_NINTENDO_WIIMOTE2	0x0330

#define USB_VENDOR_ID_NOVATEK		0x0603
#define USB_DEVICE_ID_NOVATEK_PCT	0x0600
#define USB_DEVICE_ID_NOVATEK_MOUSE	0x1602

#define USB_VENDOR_ID_NTRIG		0x1b96
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN   0x0001
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_1   0x0003
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_2   0x0004
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_3   0x0005
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_4   0x0006
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_5   0x0007
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_6   0x0008
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_7   0x0009
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_8   0x000A
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_9   0x000B
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_10   0x000C
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_11   0x000D
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_12   0x000E
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_13   0x000F
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_14   0x0010
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_15   0x0011
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_16   0x0012
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_17   0x0013
#define USB_DEVICE_ID_NTRIG_TOUCH_SCREEN_18   0x0014

#define USB_VENDOR_ID_ONTRAK		0x0a07
#define USB_DEVICE_ID_ONTRAK_ADU100	0x0064

#define USB_VENDOR_ID_ORTEK		0x05a4
#define USB_DEVICE_ID_ORTEK_PKB1700	0x1700
#define USB_DEVICE_ID_ORTEK_WKB2000	0x2000

#define USB_VENDOR_ID_PANASONIC		0x04da
#define USB_DEVICE_ID_PANABOARD_UBT780	0x1044
#define USB_DEVICE_ID_PANABOARD_UBT880	0x104d

#define USB_VENDOR_ID_PANJIT		0x134c

#define USB_VENDOR_ID_PANTHERLORD	0x0810
#define USB_DEVICE_ID_PANTHERLORD_TWIN_USB_JOYSTICK	0x0001

#define USB_VENDOR_ID_PENMOUNT		0x14e1
#define USB_DEVICE_ID_PENMOUNT_PCI	0x3500

#define USB_VENDOR_ID_PETALYNX		0x18b1
#define USB_DEVICE_ID_PETALYNX_MAXTER_REMOTE	0x0037

#define USB_VENDOR_ID_PHILIPS		0x0471
#define USB_DEVICE_ID_PHILIPS_IEEE802154_DONGLE 0x0617

#define USB_VENDOR_ID_PI_ENGINEERING	0x05f3
#define USB_DEVICE_ID_PI_ENGINEERING_VEC_USB_FOOTPEDAL	0xff

#define USB_VENDOR_ID_PIXART				0x093a
#define USB_DEVICE_ID_PIXART_OPTICAL_TOUCH_SCREEN	0x8001
#define USB_DEVICE_ID_PIXART_OPTICAL_TOUCH_SCREEN1	0x8002
#define USB_DEVICE_ID_PIXART_OPTICAL_TOUCH_SCREEN2	0x8003

#define USB_VENDOR_ID_PLAYDOTCOM	0x0b43
#define USB_DEVICE_ID_PLAYDOTCOM_EMS_USBII	0x0003

#define USB_VENDOR_ID_POWERCOM		0x0d9f
#define USB_DEVICE_ID_POWERCOM_UPS	0x0002

#define USB_VENDOR_ID_PRODIGE		0x05af
#define USB_DEVICE_ID_PRODIGE_CORDLESS	0x3062

#define USB_VENDOR_ID_QUANTA		0x0408
#define USB_DEVICE_ID_QUANTA_OPTICAL_TOUCH		0x3000
#define USB_DEVICE_ID_QUANTA_OPTICAL_TOUCH_3001		0x3001
#define USB_DEVICE_ID_QUANTA_OPTICAL_TOUCH_3008		0x3008

#define USB_VENDOR_ID_REALTEK		0x0bda
#define USB_DEVICE_ID_REALTEK_READER	0x0152

#define USB_VENDOR_ID_ROCCAT		0x1e7d
#define USB_DEVICE_ID_ROCCAT_ARVO	0x30d4
#define USB_DEVICE_ID_ROCCAT_ISKU	0x319c
#define USB_DEVICE_ID_ROCCAT_ISKUFX	0x3264
#define USB_DEVICE_ID_ROCCAT_KONE	0x2ced
#define USB_DEVICE_ID_ROCCAT_KONEPLUS	0x2d51
#define USB_DEVICE_ID_ROCCAT_KONEPURE	0x2dbe
#define USB_DEVICE_ID_ROCCAT_KONEXTD	0x2e22
#define USB_DEVICE_ID_ROCCAT_KOVAPLUS	0x2d50
#define USB_DEVICE_ID_ROCCAT_LUA	0x2c2e
#define USB_DEVICE_ID_ROCCAT_PYRA_WIRED	0x2c24
#define USB_DEVICE_ID_ROCCAT_PYRA_WIRELESS	0x2cf6
#define USB_DEVICE_ID_ROCCAT_SAVU	0x2d5a

#define USB_VENDOR_ID_SAITEK		0x06a3
#define USB_DEVICE_ID_SAITEK_RUMBLEPAD	0xff17
#define USB_DEVICE_ID_SAITEK_PS1000	0x0621

#define USB_VENDOR_ID_SAMSUNG		0x0419
#define USB_DEVICE_ID_SAMSUNG_IR_REMOTE	0x0001
#define USB_DEVICE_ID_SAMSUNG_WIRELESS_KBD_MOUSE	0x0600

#define USB_VENDOR_ID_SENNHEISER	0x1395
#define USB_DEVICE_ID_SENNHEISER_BTD500USB	0x002c

#define USB_VENDOR_ID_SIGMA_MICRO	0x1c4f
#define USB_DEVICE_ID_SIGMA_MICRO_KEYBOARD	0x0002

#define USB_VENDOR_ID_SIGMATEL		0x066F
#define USB_DEVICE_ID_SIGMATEL_STMP3780	0x3780

#define USB_VENDOR_ID_SKYCABLE			0x1223
#define	USB_DEVICE_ID_SKYCABLE_WIRELESS_PRESENTER	0x3F07

#define USB_VENDOR_ID_SONY			0x054c
#define USB_DEVICE_ID_SONY_VAIO_VGX_MOUSE	0x024b
#define USB_DEVICE_ID_SONY_VAIO_VGP_MOUSE	0x0374
#define USB_DEVICE_ID_SONY_PS3_BDREMOTE		0x0306
#define USB_DEVICE_ID_SONY_PS3_CONTROLLER	0x0268
#define USB_DEVICE_ID_SONY_NAVIGATION_CONTROLLER	0x042f
#define USB_DEVICE_ID_SONY_BUZZ_CONTROLLER		0x0002
#define USB_DEVICE_ID_SONY_WIRELESS_BUZZ_CONTROLLER	0x1000

#define USB_VENDOR_ID_SOUNDGRAPH	0x15c2
#define USB_DEVICE_ID_SOUNDGRAPH_IMON_FIRST	0x0034
#define USB_DEVICE_ID_SOUNDGRAPH_IMON_LAST	0x0046

#define USB_VENDOR_ID_STANTUM		0x1f87
#define USB_DEVICE_ID_MTP		0x0002

#define USB_VENDOR_ID_STANTUM_STM		0x0483
#define USB_DEVICE_ID_MTP_STM		0x3261

#define USB_VENDOR_ID_STANTUM_SITRONIX		0x1403
#define USB_DEVICE_ID_MTP_SITRONIX		0x5001

#define USB_VENDOR_ID_STEELSERIES	0x1038
#define USB_DEVICE_ID_STEELSERIES_SRWS1	0x1410

#define USB_VENDOR_ID_SUN		0x0430
#define USB_DEVICE_ID_RARITAN_KVM_DONGLE	0xcdab

#define USB_VENDOR_ID_SUNPLUS		0x04fc
#define USB_DEVICE_ID_SUNPLUS_WDESKTOP	0x05d8

#define USB_VENDOR_ID_SYMBOL		0x05e0
#define USB_DEVICE_ID_SYMBOL_SCANNER_1	0x0800
#define USB_DEVICE_ID_SYMBOL_SCANNER_2	0x1300

#define USB_VENDOR_ID_SYNAPTICS		0x06cb
#define USB_DEVICE_ID_SYNAPTICS_TP	0x0001
#define USB_DEVICE_ID_SYNAPTICS_INT_TP	0x0002
#define USB_DEVICE_ID_SYNAPTICS_CPAD	0x0003
#define USB_DEVICE_ID_SYNAPTICS_TS	0x0006
#define USB_DEVICE_ID_SYNAPTICS_STICK	0x0007
#define USB_DEVICE_ID_SYNAPTICS_WP	0x0008
#define USB_DEVICE_ID_SYNAPTICS_COMP_TP	0x0009
#define USB_DEVICE_ID_SYNAPTICS_WTP	0x0010
#define USB_DEVICE_ID_SYNAPTICS_DPAD	0x0013

#define USB_VENDOR_ID_THINGM		0x27b8
#define USB_DEVICE_ID_BLINK1		0x01ed

#define USB_VENDOR_ID_THRUSTMASTER	0x044f

#define USB_VENDOR_ID_TIVO		0x150a
#define USB_DEVICE_ID_TIVO_SLIDE_BT	0x1200
#define USB_DEVICE_ID_TIVO_SLIDE	0x1201

#define USB_VENDOR_ID_TOPSEED		0x0766
#define USB_DEVICE_ID_TOPSEED_CYBERLINK	0x0204

#define USB_VENDOR_ID_TOPSEED2		0x1784
#define USB_DEVICE_ID_TOPSEED2_RF_COMBO	0x0004
#define USB_DEVICE_ID_TOPSEED2_PERIPAD_701	0x0016

#define USB_VENDOR_ID_TOPMAX		0x0663
#define USB_DEVICE_ID_TOPMAX_COBRAPAD	0x0103

#define USB_VENDOR_ID_TOUCH_INTL	0x1e5e
#define USB_DEVICE_ID_TOUCH_INTL_MULTI_TOUCH	0x0313

#define USB_VENDOR_ID_TOUCHPACK		0x1bfd
#define USB_DEVICE_ID_TOUCHPACK_RTS	0x1688

#define USB_VENDOR_ID_TPV		0x25aa
#define USB_DEVICE_ID_TPV_OPTICAL_TOUCHSCREEN	0x8883

#define USB_VENDOR_ID_TURBOX		0x062a
#define USB_DEVICE_ID_TURBOX_KEYBOARD	0x0201
#define USB_DEVICE_ID_TURBOX_TOUCHSCREEN_MOSART	0x7100

#define USB_VENDOR_ID_TWINHAN		0x6253
#define USB_DEVICE_ID_TWINHAN_IR_REMOTE	0x0100

#define USB_VENDOR_ID_UCLOGIC		0x5543
#define USB_DEVICE_ID_UCLOGIC_TABLET_PF1209	0x0042
#define USB_DEVICE_ID_UCLOGIC_TABLET_KNA5	0x6001
#define USB_DEVICE_ID_UCLOGIC_TABLET_TWA60	0x0064
#define USB_DEVICE_ID_UCLOGIC_TABLET_WP4030U	0x0003
#define USB_DEVICE_ID_UCLOGIC_TABLET_WP5540U	0x0004
#define USB_DEVICE_ID_UCLOGIC_TABLET_WP8060U	0x0005
#define USB_DEVICE_ID_UCLOGIC_TABLET_WP1062	0x0064
#define USB_DEVICE_ID_UCLOGIC_WIRELESS_TABLET_TWHL850	0x0522
#define USB_DEVICE_ID_UCLOGIC_TABLET_TWHA60	0x0781

#define USB_VENDOR_ID_UNITEC	0x227d
#define USB_DEVICE_ID_UNITEC_USB_TOUCH_0709	0x0709
#define USB_DEVICE_ID_UNITEC_USB_TOUCH_0A19	0x0a19

#define USB_VENDOR_ID_VELLEMAN		0x10cf
#define USB_DEVICE_ID_VELLEMAN_K8055_FIRST	0x5500
#define USB_DEVICE_ID_VELLEMAN_K8055_LAST	0x5503
#define USB_DEVICE_ID_VELLEMAN_K8061_FIRST	0x8061
#define USB_DEVICE_ID_VELLEMAN_K8061_LAST	0x8068

#define USB_VENDOR_ID_VERNIER		0x08f7
#define USB_DEVICE_ID_VERNIER_LABPRO	0x0001
#define USB_DEVICE_ID_VERNIER_GOTEMP	0x0002
#define USB_DEVICE_ID_VERNIER_SKIP	0x0003
#define USB_DEVICE_ID_VERNIER_CYCLOPS	0x0004
#define USB_DEVICE_ID_VERNIER_LCSPEC	0x0006

#define USB_VENDOR_ID_WACOM		0x056a
#define USB_DEVICE_ID_WACOM_GRAPHIRE_BLUETOOTH	0x81
#define USB_DEVICE_ID_WACOM_INTUOS4_BLUETOOTH   0x00BD

#define USB_VENDOR_ID_WALTOP				0x172f
#define USB_DEVICE_ID_WALTOP_SLIM_TABLET_5_8_INCH	0x0032
#define USB_DEVICE_ID_WALTOP_SLIM_TABLET_12_1_INCH	0x0034
#define USB_DEVICE_ID_WALTOP_Q_PAD			0x0037
#define USB_DEVICE_ID_WALTOP_PID_0038			0x0038
#define USB_DEVICE_ID_WALTOP_MEDIA_TABLET_10_6_INCH	0x0501
#define USB_DEVICE_ID_WALTOP_MEDIA_TABLET_14_1_INCH	0x0500
#define USB_DEVICE_ID_WALTOP_SIRIUS_BATTERY_FREE_TABLET	0x0502

#define USB_VENDOR_ID_WISEGROUP		0x0925
#define USB_DEVICE_ID_SMARTJOY_PLUS	0x0005
#define USB_DEVICE_ID_1_PHIDGETSERVO_20	0x8101
#define USB_DEVICE_ID_4_PHIDGETSERVO_20	0x8104
#define USB_DEVICE_ID_8_8_4_IF_KIT	0x8201
#define USB_DEVICE_ID_SUPER_JOY_BOX_3	0x8888
#define USB_DEVICE_ID_QUAD_USB_JOYPAD	0x8800
#define USB_DEVICE_ID_DUAL_USB_JOYPAD	0x8866

#define USB_VENDOR_ID_WISEGROUP_LTD	0x6666
#define USB_VENDOR_ID_WISEGROUP_LTD2	0x6677
#define USB_DEVICE_ID_SMARTJOY_DUAL_PLUS 0x8802
#define USB_DEVICE_ID_SUPER_JOY_BOX_3_PRO 0x8801
#define USB_DEVICE_ID_SUPER_DUAL_BOX_PRO 0x8802
#define USB_DEVICE_ID_SUPER_JOY_BOX_5_PRO 0x8804

#define USB_VENDOR_ID_X_TENSIONS               0x1ae7
#define USB_DEVICE_ID_SPEEDLINK_VAD_CEZANNE    0x9001

#define USB_VENDOR_ID_XAT	0x2505
#define USB_DEVICE_ID_XAT_CSR	0x0220

#define USB_VENDOR_ID_XIN_MO			0x16c0
#define USB_DEVICE_ID_XIN_MO_DUAL_ARCADE	0x05e1

#define USB_VENDOR_ID_XIROKU		0x1477
#define USB_DEVICE_ID_XIROKU_SPX	0x1006
#define USB_DEVICE_ID_XIROKU_MPX	0x1007
#define USB_DEVICE_ID_XIROKU_CSR	0x100e
#define USB_DEVICE_ID_XIROKU_SPX1	0x1021
#define USB_DEVICE_ID_XIROKU_CSR1	0x1022
#define USB_DEVICE_ID_XIROKU_MPX1	0x1023
#define USB_DEVICE_ID_XIROKU_SPX2	0x1024
#define USB_DEVICE_ID_XIROKU_CSR2	0x1025
#define USB_DEVICE_ID_XIROKU_MPX2	0x1026

#define USB_VENDOR_ID_YEALINK		0x6993
#define USB_DEVICE_ID_YEALINK_P1K_P4K_B2K	0xb001

#define USB_VENDOR_ID_ZEROPLUS		0x0c12

#define USB_VENDOR_ID_ZYDACRON	0x13EC
#define USB_DEVICE_ID_ZYDACRON_REMOTE_CONTROL	0x0006

#define USB_VENDOR_ID_ZYTRONIC		0x14c8
#define USB_DEVICE_ID_ZYTRONIC_ZXY100	0x0005

#define USB_VENDOR_ID_PRIMAX	0x0461
#define USB_DEVICE_ID_PRIMAX_KEYBOARD	0x4e05

#endif
