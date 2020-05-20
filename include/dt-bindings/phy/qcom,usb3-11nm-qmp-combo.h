/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_PHY_QCOM_11NM_QMP_COMBO_USB_H
#define _DT_BINDINGS_PHY_QCOM_11NM_QMP_COMBO_USB_H

#define USB3PHY_QSERDES_COM_ATB_SEL1				0x0000
#define USB3PHY_QSERDES_COM_ATB_SEL2				0x0004
#define USB3PHY_QSERDES_COM_FREQ_UPDATE				0x0008
#define USB3PHY_QSERDES_COM_BG_TIMER				0x000C
#define USB3PHY_QSERDES_COM_SSC_EN_CENTER			0x0010
#define USB3PHY_QSERDES_COM_SSC_ADJ_PER1			0x0014
#define USB3PHY_QSERDES_COM_SSC_ADJ_PER2			0x0018
#define USB3PHY_QSERDES_COM_SSC_PER1				0x001C
#define USB3PHY_QSERDES_COM_SSC_PER2				0x0020
#define USB3PHY_QSERDES_COM_SSC_STEP_SIZE1			0x0024
#define USB3PHY_QSERDES_COM_SSC_STEP_SIZE2			0x0028
#define USB3PHY_QSERDES_COM_POST_DIV				0x002C
#define USB3PHY_QSERDES_COM_POST_DIV_MUX			0x0030
#define USB3PHY_QSERDES_COM_BIAS_EN_CLKBUFLR_EN			0x0034
#define USB3PHY_QSERDES_COM_CLK_ENABLE1				0x0038
#define USB3PHY_QSERDES_COM_SYS_CLK_CTRL			0x003C
#define USB3PHY_QSERDES_COM_SYSCLK_BUF_ENABLE			0x0040
#define USB3PHY_QSERDES_COM_PLL_EN				0x0044
#define USB3PHY_QSERDES_COM_PLL_IVCO				0x0048
#define USB3PHY_QSERDES_COM_LOCK_CMP1_MODE0			0x004C
#define USB3PHY_QSERDES_COM_LOCK_CMP2_MODE0			0x0050
#define USB3PHY_QSERDES_COM_LOCK_CMP3_MODE0			0x0054
#define USB3PHY_QSERDES_COM_LOCK_CMP1_MODE1			0x0058
#define USB3PHY_QSERDES_COM_LOCK_CMP2_MODE1			0x005C
#define USB3PHY_QSERDES_COM_LOCK_CMP3_MODE1			0x0060
#define USB3PHY_QSERDES_COM_CMN_RSVD0				0x0064
#define USB3PHY_QSERDES_COM_EP_CLOCK_DETECT_CTRL		0x0068
#define USB3PHY_QSERDES_COM_SYSCLK_DET_COMP_STATUS		0x006C
#define USB3PHY_QSERDES_COM_BG_TRIM				0x0070
#define USB3PHY_QSERDES_COM_CLK_EP_DIV				0x0074
#define USB3PHY_QSERDES_COM_CP_CTRL_MODE0			0x0078
#define USB3PHY_QSERDES_COM_CP_CTRL_MODE1			0x007C
#define USB3PHY_QSERDES_COM_CMN_RSVD1				0x0080
#define USB3PHY_QSERDES_COM_PLL_RCTRL_MODE0			0x0084
#define USB3PHY_QSERDES_COM_PLL_RCTRL_MODE1			0x0088
#define USB3PHY_QSERDES_COM_CMN_RSVD2				0x008C
#define USB3PHY_QSERDES_COM_PLL_CCTRL_MODE0			0x0090
#define USB3PHY_QSERDES_COM_PLL_CCTRL_MODE1			0x0094
#define USB3PHY_QSERDES_COM_CMN_RSVD3				0x0098
#define USB3PHY_QSERDES_COM_PLL_CNTRL				0x009C
#define USB3PHY_QSERDES_COM_PHASE_SEL_CTRL			0x00A0
#define USB3PHY_QSERDES_COM_PHASE_SEL_DC			0x00A4
#define USB3PHY_QSERDES_COM_BIAS_EN_CTRL_BY_PSM			0x00A8
#define USB3PHY_QSERDES_COM_SYSCLK_EN_SEL			0x00AC
#define USB3PHY_QSERDES_COM_CML_SYSCLK_SEL			0x00B0
#define USB3PHY_QSERDES_COM_RESETSM_CNTRL			0x00B4
#define USB3PHY_QSERDES_COM_RESETSM_CNTRL2			0x00B8
#define USB3PHY_QSERDES_COM_RESTRIM_CTRL			0x00BC
#define USB3PHY_QSERDES_COM_RESTRIM_CTRL2			0x00C0
#define USB3PHY_QSERDES_COM_RESCODE_DIV_NUM			0x00C4
#define USB3PHY_QSERDES_COM_LOCK_CMP_EN				0x00C8
#define USB3PHY_QSERDES_COM_LOCK_CMP_CFG			0x00CC
#define USB3PHY_QSERDES_COM_DEC_START_MODE0			0x00D0
#define USB3PHY_QSERDES_COM_DEC_START_MODE1			0x00D4
#define USB3PHY_QSERDES_COM_VCOCAL_DEADMAN_CTRL			0x00D8
#define USB3PHY_QSERDES_COM_DIV_FRAC_START1_MODE0		0x00DC
#define USB3PHY_QSERDES_COM_DIV_FRAC_START2_MODE0		0x00E0
#define USB3PHY_QSERDES_COM_DIV_FRAC_START3_MODE0		0x00E4
#define USB3PHY_QSERDES_COM_DIV_FRAC_START1_MODE1		0x00E8
#define USB3PHY_QSERDES_COM_DIV_FRAC_START2_MODE1		0x00EC
#define USB3PHY_QSERDES_COM_DIV_FRAC_START3_MODE1		0x00F0
#define USB3PHY_QSERDES_COM_VCO_TUNE_MINVAL1			0x00F4
#define USB3PHY_QSERDES_COM_VCO_TUNE_MINVAL2			0x00F8
#define USB3PHY_QSERDES_COM_CMN_RSVD4				0x00FC
#define USB3PHY_QSERDES_COM_INTEGLOOP_INITVAL			0x0100
#define USB3PHY_QSERDES_COM_INTEGLOOP_EN			0x0104
#define USB3PHY_QSERDES_COM_INTEGLOOP_GAIN0_MODE0		0x0108
#define USB3PHY_QSERDES_COM_INTEGLOOP_GAIN1_MODE0		0x010C
#define USB3PHY_QSERDES_COM_INTEGLOOP_GAIN0_MODE1		0x0110
#define USB3PHY_QSERDES_COM_INTEGLOOP_GAIN1_MODE1		0x0114
#define USB3PHY_QSERDES_COM_VCO_TUNE_MAXVAL1			0x0118
#define USB3PHY_QSERDES_COM_VCO_TUNE_MAXVAL2			0x011C
#define USB3PHY_QSERDES_COM_RES_TRIM_CONTROL2			0x0120
#define USB3PHY_QSERDES_COM_VCO_TUNE_CTRL			0x0124
#define USB3PHY_QSERDES_COM_VCO_TUNE_MAP			0x0128
#define USB3PHY_QSERDES_COM_VCO_TUNE1_MODE0			0x012C
#define USB3PHY_QSERDES_COM_VCO_TUNE2_MODE0			0x0130
#define USB3PHY_QSERDES_COM_VCO_TUNE1_MODE1			0x0134
#define USB3PHY_QSERDES_COM_VCO_TUNE2_MODE1			0x0138
#define USB3PHY_QSERDES_COM_VCO_TUNE_INITVAL1			0x013C
#define USB3PHY_QSERDES_COM_VCO_TUNE_INITVAL2			0x0140
#define USB3PHY_QSERDES_COM_VCO_TUNE_TIMER1			0x0144
#define USB3PHY_QSERDES_COM_VCO_TUNE_TIMER2			0x0148
#define USB3PHY_QSERDES_COM_SAR					0x014C
#define USB3PHY_QSERDES_COM_SAR_CLK				0x0150
#define USB3PHY_QSERDES_COM_SAR_CODE_OUT_STATUS			0x0154
#define USB3PHY_QSERDES_COM_SAR_CODE_READY_STATUS		0x0158
#define USB3PHY_QSERDES_COM_CMN_STATUS				0x015C
#define USB3PHY_QSERDES_COM_RESET_SM_STATUS			0x0160
#define USB3PHY_QSERDES_COM_RESTRIM_CODE_STATUS			0x0164
#define USB3PHY_QSERDES_COM_PLLCAL_CODE1_STATUS			0x0168
#define USB3PHY_QSERDES_COM_PLLCAL_CODE2_STATUS			0x016C
#define USB3PHY_QSERDES_COM_BG_CTRL				0x0170
#define USB3PHY_QSERDES_COM_CLK_SELECT				0x0174
#define USB3PHY_QSERDES_COM_HSCLK_SEL				0x0178
#define USB3PHY_QSERDES_COM_INTEGLOOP_BINCODE_STATUS		0x017C
#define USB3PHY_QSERDES_COM_PLL_ANALOG				0x0180
#define USB3PHY_QSERDES_COM_CORECLK_DIV				0x0184
#define USB3PHY_QSERDES_COM_SW_RESET				0x0188
#define USB3PHY_QSERDES_COM_CORE_CLK_EN				0x018C
#define USB3PHY_QSERDES_COM_C_READY_STATUS			0x0190
#define USB3PHY_QSERDES_COM_CMN_CONFIG				0x0194
#define USB3PHY_QSERDES_COM_CMN_RATE_OVERRIDE			0x0198
#define USB3PHY_QSERDES_COM_SVS_MODE_CLK_SEL			0x019C
#define USB3PHY_QSERDES_COM_DEBUG_BUS0				0x01A0
#define USB3PHY_QSERDES_COM_DEBUG_BUS1				0x01A4
#define USB3PHY_QSERDES_COM_DEBUG_BUS2				0x01A8
#define USB3PHY_QSERDES_COM_DEBUG_BUS3				0x01AC
#define USB3PHY_QSERDES_COM_DEBUG_BUS_SEL			0x01B0
#define USB3PHY_QSERDES_COM_CMN_MISC1				0x01B4
#define USB3PHY_QSERDES_COM_CMN_MISC2				0x01B8
#define USB3PHY_QSERDES_COM_CORECLK_DIV_MODE1			0x01BC
#define USB3PHY_QSERDES_COM_CMN_RSVD5				0x01C0
#define USB3PHY_QSERDES_TXA_BIST_MODE_LANENO			0x0200
#define USB3PHY_QSERDES_TXA_BIST_INVERT				0x0204
#define USB3PHY_QSERDES_TXA_CLKBUF_ENABLE			0x0208
#define USB3PHY_QSERDES_TXA_TX_EMP_POST1_LVL			0x020C
#define USB3PHY_QSERDES_TXA_TX_POST2_EMPH			0x0210
#define USB3PHY_QSERDES_TXA_TX_BOOST_LVL_UP_DN			0x0214
#define USB3PHY_QSERDES_TXA_TX_IDLE_LVL_LARGE_AMP		0x0218
#define USB3PHY_QSERDES_TXA_TX_DRV_LVL				0x021C
#define USB3PHY_QSERDES_TXA_TX_DRV_LVL_OFFSET			0x0220
#define USB3PHY_QSERDES_TXA_RESET_TSYNC_EN			0x0224
#define USB3PHY_QSERDES_TXA_PRE_STALL_LDO_BOOST_EN		0x0228
#define USB3PHY_QSERDES_TXA_TX_BAND				0x022C
#define USB3PHY_QSERDES_TXA_SLEW_CNTL				0x0230
#define USB3PHY_QSERDES_TXA_INTERFACE_SELECT			0x0234
#define USB3PHY_QSERDES_TXA_LPB_EN				0x0238
#define USB3PHY_QSERDES_TXA_RES_CODE_LANE_TX			0x023C
#define USB3PHY_QSERDES_TXA_RES_CODE_LANE_RX			0x0240
#define USB3PHY_QSERDES_TXA_RES_CODE_LANE_OFFSET_TX		0x0244
#define USB3PHY_QSERDES_TXA_RES_CODE_LANE_OFFSET_RX		0x0248
#define USB3PHY_QSERDES_TXA_PERL_LENGTH1			0x024C
#define USB3PHY_QSERDES_TXA_PERL_LENGTH2			0x0250
#define USB3PHY_QSERDES_TXA_SERDES_BYP_EN_OUT			0x0254
#define USB3PHY_QSERDES_TXA_DEBUG_BUS_SEL			0x0258
#define USB3PHY_QSERDES_TXA_TRANSCEIVER_BIAS_EN			0x025C
#define USB3PHY_QSERDES_TXA_HIGHZ_DRVR_EN			0x0260
#define USB3PHY_QSERDES_TXA_TX_POL_INV				0x0264
#define USB3PHY_QSERDES_TXA_PARRATE_REC_DETECT_IDLE_EN		0x0268
#define USB3PHY_QSERDES_TXA_BIST_PATTERN1			0x026C
#define USB3PHY_QSERDES_TXA_BIST_PATTERN2			0x0270
#define USB3PHY_QSERDES_TXA_BIST_PATTERN3			0x0274
#define USB3PHY_QSERDES_TXA_BIST_PATTERN4			0x0278
#define USB3PHY_QSERDES_TXA_BIST_PATTERN5			0x027C
#define USB3PHY_QSERDES_TXA_BIST_PATTERN6			0x0280
#define USB3PHY_QSERDES_TXA_BIST_PATTERN7			0x0284
#define USB3PHY_QSERDES_TXA_BIST_PATTERN8			0x0288
#define USB3PHY_QSERDES_TXA_LANE_MODE_1				0x028C
#define USB3PHY_QSERDES_TXA_LANE_MODE_2				0x0290
#define USB3PHY_QSERDES_TXA_LANE_MODE_3				0x0294
#define USB3PHY_QSERDES_TXA_ATB_SEL1				0x0298
#define USB3PHY_QSERDES_TXA_ATB_SEL2				0x029C
#define USB3PHY_QSERDES_TXA_RCV_DETECT_LVL			0x02A0
#define USB3PHY_QSERDES_TXA_RCV_DETECT_LVL_2			0x02A4
#define USB3PHY_QSERDES_TXA_PRBS_SEED1				0x02A8
#define USB3PHY_QSERDES_TXA_PRBS_SEED2				0x02AC
#define USB3PHY_QSERDES_TXA_PRBS_SEED3				0x02B0
#define USB3PHY_QSERDES_TXA_PRBS_SEED4				0x02B4
#define USB3PHY_QSERDES_TXA_RESET_GEN				0x02B8
#define USB3PHY_QSERDES_TXA_RESET_GEN_MUXES			0x02BC
#define USB3PHY_QSERDES_TXA_TRAN_DRVR_EMP_EN			0x02C0
#define USB3PHY_QSERDES_TXA_TX_INTERFACE_MODE			0x02C4
#define USB3PHY_QSERDES_TXA_PWM_CTRL				0x02C8
#define USB3PHY_QSERDES_TXA_PWM_ENCODED_OR_DATA			0x02CC
#define USB3PHY_QSERDES_TXA_PWM_GEAR_1_DIVIDER_BAND2		0x02D0
#define USB3PHY_QSERDES_TXA_PWM_GEAR_2_DIVIDER_BAND2		0x02D4
#define USB3PHY_QSERDES_TXA_PWM_GEAR_3_DIVIDER_BAND2		0x02D8
#define USB3PHY_QSERDES_TXA_PWM_GEAR_4_DIVIDER_BAND2		0x02DC
#define USB3PHY_QSERDES_TXA_PWM_GEAR_1_DIVIDER_BAND0_1		0x02E0
#define USB3PHY_QSERDES_TXA_PWM_GEAR_2_DIVIDER_BAND0_1		0x02E4
#define USB3PHY_QSERDES_TXA_PWM_GEAR_3_DIVIDER_BAND0_1		0x02E8
#define USB3PHY_QSERDES_TXA_PWM_GEAR_4_DIVIDER_BAND0_1		0x02EC
#define USB3PHY_QSERDES_TXA_VMODE_CTRL1				0x02F0
#define USB3PHY_QSERDES_TXA_ALOG_OBSV_BUS_CTRL_1		0x02F4
#define USB3PHY_QSERDES_TXA_BIST_STATUS				0x02F8
#define USB3PHY_QSERDES_TXA_BIST_ERROR_COUNT1			0x02FC
#define USB3PHY_QSERDES_TXA_BIST_ERROR_COUNT2			0x0300
#define USB3PHY_QSERDES_TXA_ALOG_OBSV_BUS_STATUS_1		0x0304
#define USB3PHY_QSERDES_TXA_DIG_BKUP_CTRL			0x0308
#define USB3PHY_QSERDES_RXA_UCDR_FO_GAIN_HALF			0x0400
#define USB3PHY_QSERDES_RXA_UCDR_FO_GAIN_QUARTER		0x0404
#define USB3PHY_QSERDES_RXA_UCDR_FO_GAIN			0x0408
#define USB3PHY_QSERDES_RXA_UCDR_SO_GAIN_HALF			0x040C
#define USB3PHY_QSERDES_RXA_UCDR_SO_GAIN_QUARTER		0x0410
#define USB3PHY_QSERDES_RXA_UCDR_SO_GAIN			0x0414
#define USB3PHY_QSERDES_RXA_UCDR_SVS_FO_GAIN_HALF		0x0418
#define USB3PHY_QSERDES_RXA_UCDR_SVS_FO_GAIN_QUARTER		0x041C
#define USB3PHY_QSERDES_RXA_UCDR_SVS_FO_GAIN			0x0420
#define USB3PHY_QSERDES_RXA_UCDR_SVS_SO_GAIN_HALF		0x0424
#define USB3PHY_QSERDES_RXA_UCDR_SVS_SO_GAIN_QUARTER		0x0428
#define USB3PHY_QSERDES_RXA_UCDR_SVS_SO_GAIN			0x042C
#define USB3PHY_QSERDES_RXA_UCDR_FASTLOCK_FO_GAIN		0x0430
#define USB3PHY_QSERDES_RXA_UCDR_SO_SATURATION_AND_ENABLE	0x0434
#define USB3PHY_QSERDES_RXA_UCDR_FO_TO_SO_DELAY			0x0438
#define USB3PHY_QSERDES_RXA_UCDR_FASTLOCK_COUNT_LOW		0x043C
#define USB3PHY_QSERDES_RXA_UCDR_FASTLOCK_COUNT_HIGH		0x0440
#define USB3PHY_QSERDES_RXA_UCDR_PI_CONTROLS			0x0444
#define USB3PHY_QSERDES_RXA_UCDR_SB2_THRESH1			0x0448
#define USB3PHY_QSERDES_RXA_UCDR_SB2_THRESH2			0x044C
#define USB3PHY_QSERDES_RXA_UCDR_SB2_GAIN1			0x0450
#define USB3PHY_QSERDES_RXA_UCDR_SB2_GAIN2			0x0454
#define USB3PHY_QSERDES_RXA_AUX_CONTROL				0x0458
#define USB3PHY_QSERDES_RXA_AUX_DATA_TCOARSE_TFINE		0x045C
#define USB3PHY_QSERDES_RXA_RCLK_AUXDATA_SEL			0x0460
#define USB3PHY_QSERDES_RXA_AC_JTAG_ENABLE			0x0464
#define USB3PHY_QSERDES_RXA_AC_JTAG_INITP			0x0468
#define USB3PHY_QSERDES_RXA_AC_JTAG_INITN			0x046C
#define USB3PHY_QSERDES_RXA_AC_JTAG_LVL				0x0470
#define USB3PHY_QSERDES_RXA_AC_JTAG_MODE			0x0474
#define USB3PHY_QSERDES_RXA_AC_JTAG_RESET			0x0478
#define USB3PHY_QSERDES_RXA_RX_TERM_BW				0x047C
#define USB3PHY_QSERDES_RXA_RX_RCVR_IQ_EN			0x0480
#define USB3PHY_QSERDES_RXA_RX_IDAC_I_DC_OFFSETS		0x0484
#define USB3PHY_QSERDES_RXA_RX_IDAC_IBAR_DC_OFFSETS		0x0488
#define USB3PHY_QSERDES_RXA_RX_IDAC_Q_DC_OFFSETS		0x048C
#define USB3PHY_QSERDES_RXA_RX_IDAC_QBAR_DC_OFFSETS		0x0490
#define USB3PHY_QSERDES_RXA_RX_IDAC_A_DC_OFFSETS		0x0494
#define USB3PHY_QSERDES_RXA_RX_IDAC_ABAR_DC_OFFSETS		0x0498
#define USB3PHY_QSERDES_RXA_RX_IDAC_EN				0x049C
#define USB3PHY_QSERDES_RXA_RX_IDAC_ENABLES			0x04A0
#define USB3PHY_QSERDES_RXA_RX_IDAC_SIGN			0x04A4
#define USB3PHY_QSERDES_RXA_RX_HIGHZ_HIGHRATE			0x04A8
#define USB3PHY_QSERDES_RXA_RX_TERM_AC_BYPASS_DC_COUPLE_OFFSET	0x04AC
#define USB3PHY_QSERDES_RXA_DFE_1				0x04B0
#define USB3PHY_QSERDES_RXA_DFE_2				0x04B4
#define USB3PHY_QSERDES_RXA_DFE_3				0x04B8
#define USB3PHY_QSERDES_RXA_VGA_CAL_CNTRL1			0x04BC
#define USB3PHY_QSERDES_RXA_VGA_CAL_CNTRL2			0x04C0
#define USB3PHY_QSERDES_RXA_GM_CAL				0x04C4
#define USB3PHY_QSERDES_RXA_RX_EQ_GAIN2_LSB			0x04C8
#define USB3PHY_QSERDES_RXA_RX_EQ_GAIN2_MSB			0x04CC
#define USB3PHY_QSERDES_RXA_RX_EQU_ADAPTOR_CNTRL1		0x04D0
#define USB3PHY_QSERDES_RXA_RX_EQU_ADAPTOR_CNTRL2		0x04D4
#define USB3PHY_QSERDES_RXA_RX_EQU_ADAPTOR_CNTRL3		0x04D8
#define USB3PHY_QSERDES_RXA_RX_EQU_ADAPTOR_CNTRL4		0x04DC
#define USB3PHY_QSERDES_RXA_RX_IDAC_TSETTLE_LOW			0x04E0
#define USB3PHY_QSERDES_RXA_RX_IDAC_TSETTLE_HIGH		0x04E4
#define USB3PHY_QSERDES_RXA_RX_IDAC_MEASURE_TIME		0x04E8
#define USB3PHY_QSERDES_RXA_RX_IDAC_ACCUMULATOR			0x04EC
#define USB3PHY_QSERDES_RXA_RX_EQ_OFFSET_LSB			0x04F0
#define USB3PHY_QSERDES_RXA_RX_EQ_OFFSET_MSB			0x04F4
#define USB3PHY_QSERDES_RXA_RX_EQ_OFFSET_ADAPTOR_CNTRL1		0x04F8
#define USB3PHY_QSERDES_RXA_RX_OFFSET_ADAPTOR_CNTRL2		0x04FC
#define USB3PHY_QSERDES_RXA_SIGDET_ENABLES			0x0500
#define USB3PHY_QSERDES_RXA_SIGDET_CNTRL			0x0504
#define USB3PHY_QSERDES_RXA_SIGDET_LVL				0x0508
#define USB3PHY_QSERDES_RXA_SIGDET_DEGLITCH_CNTRL		0x050C
#define USB3PHY_QSERDES_RXA_RX_BAND				0x0510
#define USB3PHY_QSERDES_RXA_CDR_FREEZE_UP_DN			0x0514
#define USB3PHY_QSERDES_RXA_CDR_RESET_OVERRIDE			0x0518
#define USB3PHY_QSERDES_RXA_RX_INTERFACE_MODE			0x051C
#define USB3PHY_QSERDES_RXA_JITTER_GEN_MODE			0x0520
#define USB3PHY_QSERDES_RXA_BUJ_AMP				0x0524
#define USB3PHY_QSERDES_RXA_SJ_AMP1				0x0528
#define USB3PHY_QSERDES_RXA_SJ_AMP2				0x052C
#define USB3PHY_QSERDES_RXA_SJ_PER1				0x0530
#define USB3PHY_QSERDES_RXA_SJ_PER2				0x0534
#define USB3PHY_QSERDES_RXA_BUJ_STEP_FREQ1			0x0538
#define USB3PHY_QSERDES_RXA_BUJ_STEP_FREQ2			0x053C
#define USB3PHY_QSERDES_RXA_PPM_OFFSET1				0x0540
#define USB3PHY_QSERDES_RXA_PPM_OFFSET2				0x0544
#define USB3PHY_QSERDES_RXA_SIGN_PPM_PERIOD1			0x0548
#define USB3PHY_QSERDES_RXA_SIGN_PPM_PERIOD2			0x054C
#define USB3PHY_QSERDES_RXA_RX_PWM_ENABLE_AND_DATA		0x0550
#define USB3PHY_QSERDES_RXA_RX_PWM_GEAR1_TIMEOUT_COUNT		0x0554
#define USB3PHY_QSERDES_RXA_RX_PWM_GEAR2_TIMEOUT_COUNT		0x0558
#define USB3PHY_QSERDES_RXA_RX_PWM_GEAR3_TIMEOUT_COUNT		0x055C
#define USB3PHY_QSERDES_RXA_RX_PWM_GEAR4_TIMEOUT_COUNT		0x0560
#define USB3PHY_QSERDES_RXA_RX_MODE_00				0x0564
#define USB3PHY_QSERDES_RXA_RX_MODE_01				0x0568
#define USB3PHY_QSERDES_RXA_RX_MODE_10				0x056C
#define USB3PHY_QSERDES_RXA_ALOG_OBSV_BUS_CTRL_1		0x0570
#define USB3PHY_QSERDES_RXA_PI_CTRL1				0x0574
#define USB3PHY_QSERDES_RXA_PI_CTRL2				0x0578
#define USB3PHY_QSERDES_RXA_PI_QUAD				0x057C
#define USB3PHY_QSERDES_RXA_IDATA1				0x0580
#define USB3PHY_QSERDES_RXA_IDATA2				0x0584
#define USB3PHY_QSERDES_RXA_AUX_DATA1				0x0588
#define USB3PHY_QSERDES_RXA_AUX_DATA2				0x058C
#define USB3PHY_QSERDES_RXA_AC_JTAG_OUTP			0x0590
#define USB3PHY_QSERDES_RXA_AC_JTAG_OUTN			0x0594
#define USB3PHY_QSERDES_RXA_RX_SIGDET				0x0598
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_I			0x059C
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_IBAR			0x05A0
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_Q			0x05A4
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_QBAR			0x05A8
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_A			0x05AC
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_ABAR			0x05B0
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_SM_ON			0x05B4
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_CAL_DONE		0x05B8
#define USB3PHY_QSERDES_RXA_IDAC_STATUS_SIGNERROR		0x05BC
#define USB3PHY_QSERDES_RXA_READ_EQCODE				0x05C0
#define USB3PHY_QSERDES_RXA_READ_OFFSETCODE			0x05C4
#define USB3PHY_QSERDES_RXA_IA_ERROR_COUNTER_LOW		0x05C8
#define USB3PHY_QSERDES_RXA_IA_ERROR_COUNTER_HIGH		0x05CC
#define USB3PHY_QSERDES_RXA_VGA_READ_CODE			0x05D0
#define USB3PHY_QSERDES_RXA_DFE_TAP1_READ_CODE			0x05D4
#define USB3PHY_QSERDES_RXA_DFE_TAP2_READ_CODE			0x05D8
#define USB3PHY_QSERDES_RXA_ALOG_OBSV_BUS_STATUS_1		0x05DC
#define USB3PHY_QSERDES_TXB_BIST_MODE_LANENO			0x0600
#define USB3PHY_QSERDES_TXB_BIST_INVERT				0x0604
#define USB3PHY_QSERDES_TXB_CLKBUF_ENABLE			0x0608
#define USB3PHY_QSERDES_TXB_TX_EMP_POST1_LVL			0x060C
#define USB3PHY_QSERDES_TXB_TX_POST2_EMPH			0x0610
#define USB3PHY_QSERDES_TXB_TX_BOOST_LVL_UP_DN			0x0614
#define USB3PHY_QSERDES_TXB_TX_IDLE_LVL_LARGE_AMP		0x0618
#define USB3PHY_QSERDES_TXB_TX_DRV_LVL				0x061C
#define USB3PHY_QSERDES_TXB_TX_DRV_LVL_OFFSET			0x0620
#define USB3PHY_QSERDES_TXB_RESET_TSYNC_EN			0x0624
#define USB3PHY_QSERDES_TXB_PRE_STALL_LDO_BOOST_EN		0x0628
#define USB3PHY_QSERDES_TXB_TX_BAND				0x062C
#define USB3PHY_QSERDES_TXB_SLEW_CNTL				0x0630
#define USB3PHY_QSERDES_TXB_INTERFACE_SELECT			0x0634
#define USB3PHY_QSERDES_TXB_LPB_EN				0x0638
#define USB3PHY_QSERDES_TXB_RES_CODE_LANE_TX			0x063C
#define USB3PHY_QSERDES_TXB_RES_CODE_LANE_RX			0x0640
#define USB3PHY_QSERDES_TXB_RES_CODE_LANE_OFFSET_TX		0x0644
#define USB3PHY_QSERDES_TXB_RES_CODE_LANE_OFFSET_RX		0x0648
#define USB3PHY_QSERDES_TXB_PERL_LENGTH1			0x064C
#define USB3PHY_QSERDES_TXB_PERL_LENGTH2			0x0650
#define USB3PHY_QSERDES_TXB_SERDES_BYP_EN_OUT			0x0654
#define USB3PHY_QSERDES_TXB_DEBUG_BUS_SEL			0x0658
#define USB3PHY_QSERDES_TXB_TRANSCEIVER_BIAS_EN			0x065C
#define USB3PHY_QSERDES_TXB_HIGHZ_DRVR_EN			0x0660
#define USB3PHY_QSERDES_TXB_TX_POL_INV				0x0664
#define USB3PHY_QSERDES_TXB_PARRATE_REC_DETECT_IDLE_EN		0x0668
#define USB3PHY_QSERDES_TXB_BIST_PATTERN1			0x066C
#define USB3PHY_QSERDES_TXB_BIST_PATTERN2			0x0670
#define USB3PHY_QSERDES_TXB_BIST_PATTERN3			0x0674
#define USB3PHY_QSERDES_TXB_BIST_PATTERN4			0x0678
#define USB3PHY_QSERDES_TXB_BIST_PATTERN5			0x067C
#define USB3PHY_QSERDES_TXB_BIST_PATTERN6			0x0680
#define USB3PHY_QSERDES_TXB_BIST_PATTERN7			0x0684
#define USB3PHY_QSERDES_TXB_BIST_PATTERN8			0x0688
#define USB3PHY_QSERDES_TXB_LANE_MODE_1				0x068C
#define USB3PHY_QSERDES_TXB_LANE_MODE_2				0x0690
#define USB3PHY_QSERDES_TXB_LANE_MODE_3				0x0694
#define USB3PHY_QSERDES_TXB_ATB_SEL1				0x0698
#define USB3PHY_QSERDES_TXB_ATB_SEL2				0x069C
#define USB3PHY_QSERDES_TXB_RCV_DETECT_LVL			0x06A0
#define USB3PHY_QSERDES_TXB_RCV_DETECT_LVL_2			0x06A4
#define USB3PHY_QSERDES_TXB_PRBS_SEED1				0x06A8
#define USB3PHY_QSERDES_TXB_PRBS_SEED2				0x06AC
#define USB3PHY_QSERDES_TXB_PRBS_SEED3				0x06B0
#define USB3PHY_QSERDES_TXB_PRBS_SEED4				0x06B4
#define USB3PHY_QSERDES_TXB_RESET_GEN				0x06B8
#define USB3PHY_QSERDES_TXB_RESET_GEN_MUXES			0x06BC
#define USB3PHY_QSERDES_TXB_TRAN_DRVR_EMP_EN			0x06C0
#define USB3PHY_QSERDES_TXB_TX_INTERFACE_MODE			0x06C4
#define USB3PHY_QSERDES_TXB_PWM_CTRL				0x06C8
#define USB3PHY_QSERDES_TXB_PWM_ENCODED_OR_DATA			0x06CC
#define USB3PHY_QSERDES_TXB_PWM_GEAR_1_DIVIDER_BAND2		0x06D0
#define USB3PHY_QSERDES_TXB_PWM_GEAR_2_DIVIDER_BAND2		0x06D4
#define USB3PHY_QSERDES_TXB_PWM_GEAR_3_DIVIDER_BAND2		0x06D8
#define USB3PHY_QSERDES_TXB_PWM_GEAR_4_DIVIDER_BAND2		0x06DC
#define USB3PHY_QSERDES_TXB_PWM_GEAR_1_DIVIDER_BAND0_1		0x06E0
#define USB3PHY_QSERDES_TXB_PWM_GEAR_2_DIVIDER_BAND0_1		0x06E4
#define USB3PHY_QSERDES_TXB_PWM_GEAR_3_DIVIDER_BAND0_1		0x06E8
#define USB3PHY_QSERDES_TXB_PWM_GEAR_4_DIVIDER_BAND0_1		0x06EC
#define USB3PHY_QSERDES_TXB_VMODE_CTRL1				0x06F0
#define USB3PHY_QSERDES_TXB_ALOG_OBSV_BUS_CTRL_1		0x06F4
#define USB3PHY_QSERDES_TXB_BIST_STATUS				0x06F8
#define USB3PHY_QSERDES_TXB_BIST_ERROR_COUNT1			0x06FC
#define USB3PHY_QSERDES_TXB_BIST_ERROR_COUNT2			0x0700
#define USB3PHY_QSERDES_TXB_ALOG_OBSV_BUS_STATUS_1		0x0704
#define USB3PHY_QSERDES_TXB_DIG_BKUP_CTRL			0x0708
#define USB3PHY_QSERDES_RXB_UCDR_FO_GAIN_HALF			0x0800
#define USB3PHY_QSERDES_RXB_UCDR_FO_GAIN_QUARTER		0x0804
#define USB3PHY_QSERDES_RXB_UCDR_FO_GAIN			0x0808
#define USB3PHY_QSERDES_RXB_UCDR_SO_GAIN_HALF			0x080C
#define USB3PHY_QSERDES_RXB_UCDR_SO_GAIN_QUARTER		0x0810
#define USB3PHY_QSERDES_RXB_UCDR_SO_GAIN			0x0814
#define USB3PHY_QSERDES_RXB_UCDR_SVS_FO_GAIN_HALF		0x0818
#define USB3PHY_QSERDES_RXB_UCDR_SVS_FO_GAIN_QUARTER		0x081C
#define USB3PHY_QSERDES_RXB_UCDR_SVS_FO_GAIN			0x0820
#define USB3PHY_QSERDES_RXB_UCDR_SVS_SO_GAIN_HALF		0x0824
#define USB3PHY_QSERDES_RXB_UCDR_SVS_SO_GAIN_QUARTER		0x0828
#define USB3PHY_QSERDES_RXB_UCDR_SVS_SO_GAIN			0x082C
#define USB3PHY_QSERDES_RXB_UCDR_FASTLOCK_FO_GAIN		0x0830
#define USB3PHY_QSERDES_RXB_UCDR_SO_SATURATION_AND_ENABLE	0x0834
#define USB3PHY_QSERDES_RXB_UCDR_FO_TO_SO_DELAY			0x0838
#define USB3PHY_QSERDES_RXB_UCDR_FASTLOCK_COUNT_LOW		0x083C
#define USB3PHY_QSERDES_RXB_UCDR_FASTLOCK_COUNT_HIGH		0x0840
#define USB3PHY_QSERDES_RXB_UCDR_PI_CONTROLS			0x0844
#define USB3PHY_QSERDES_RXB_UCDR_SB2_THRESH1			0x0848
#define USB3PHY_QSERDES_RXB_UCDR_SB2_THRESH2			0x084C
#define USB3PHY_QSERDES_RXB_UCDR_SB2_GAIN1			0x0850
#define USB3PHY_QSERDES_RXB_UCDR_SB2_GAIN2			0x0854
#define USB3PHY_QSERDES_RXB_AUX_CONTROL				0x0858
#define USB3PHY_QSERDES_RXB_AUX_DATA_TCOARSE_TFINE		0x085C
#define USB3PHY_QSERDES_RXB_RCLK_AUXDATA_SEL			0x0860
#define USB3PHY_QSERDES_RXB_AC_JTAG_ENABLE			0x0864
#define USB3PHY_QSERDES_RXB_AC_JTAG_INITP			0x0868
#define USB3PHY_QSERDES_RXB_AC_JTAG_INITN			0x086C
#define USB3PHY_QSERDES_RXB_AC_JTAG_LVL				0x0870
#define USB3PHY_QSERDES_RXB_AC_JTAG_MODE			0x0874
#define USB3PHY_QSERDES_RXB_AC_JTAG_RESET			0x0878
#define USB3PHY_QSERDES_RXB_RX_TERM_BW				0x087C
#define USB3PHY_QSERDES_RXB_RX_RCVR_IQ_EN			0x0880
#define USB3PHY_QSERDES_RXB_RX_IDAC_I_DC_OFFSETS		0x0884
#define USB3PHY_QSERDES_RXB_RX_IDAC_IBAR_DC_OFFSETS		0x0888
#define USB3PHY_QSERDES_RXB_RX_IDAC_Q_DC_OFFSETS		0x088C
#define USB3PHY_QSERDES_RXB_RX_IDAC_QBAR_DC_OFFSETS		0x0890
#define USB3PHY_QSERDES_RXB_RX_IDAC_A_DC_OFFSETS		0x0894
#define USB3PHY_QSERDES_RXB_RX_IDAC_ABAR_DC_OFFSETS		0x0898
#define USB3PHY_QSERDES_RXB_RX_IDAC_EN				0x089C
#define USB3PHY_QSERDES_RXB_RX_IDAC_ENABLES			0x08A0
#define USB3PHY_QSERDES_RXB_RX_IDAC_SIGN			0x08A4
#define USB3PHY_QSERDES_RXB_RX_HIGHZ_HIGHRATE			0x08A8
#define USB3PHY_QSERDES_RXB_RX_TERM_AC_BYPASS_DC_COUPLE_OFFSET	0x08AC
#define USB3PHY_QSERDES_RXB_DFE_1				0x08B0
#define USB3PHY_QSERDES_RXB_DFE_2				0x08B4
#define USB3PHY_QSERDES_RXB_DFE_3				0x08B8
#define USB3PHY_QSERDES_RXB_VGA_CAL_CNTRL1			0x08BC
#define USB3PHY_QSERDES_RXB_VGA_CAL_CNTRL2			0x08C0
#define USB3PHY_QSERDES_RXB_GM_CAL				0x08C4
#define USB3PHY_QSERDES_RXB_RX_EQ_GAIN2_LSB			0x08C8
#define USB3PHY_QSERDES_RXB_RX_EQ_GAIN2_MSB			0x08CC
#define USB3PHY_QSERDES_RXB_RX_EQU_ADAPTOR_CNTRL1		0x08D0
#define USB3PHY_QSERDES_RXB_RX_EQU_ADAPTOR_CNTRL2		0x08D4
#define USB3PHY_QSERDES_RXB_RX_EQU_ADAPTOR_CNTRL3		0x08D8
#define USB3PHY_QSERDES_RXB_RX_EQU_ADAPTOR_CNTRL4		0x08DC
#define USB3PHY_QSERDES_RXB_RX_IDAC_TSETTLE_LOW			0x08E0
#define USB3PHY_QSERDES_RXB_RX_IDAC_TSETTLE_HIGH		0x08E4
#define USB3PHY_QSERDES_RXB_RX_IDAC_MEASURE_TIME		0x08E8
#define USB3PHY_QSERDES_RXB_RX_IDAC_ACCUMULATOR			0x08EC
#define USB3PHY_QSERDES_RXB_RX_EQ_OFFSET_LSB			0x08F0
#define USB3PHY_QSERDES_RXB_RX_EQ_OFFSET_MSB			0x08F4
#define USB3PHY_QSERDES_RXB_RX_EQ_OFFSET_ADAPTOR_CNTRL1		0x08F8
#define USB3PHY_QSERDES_RXB_RX_OFFSET_ADAPTOR_CNTRL2		0x08FC
#define USB3PHY_QSERDES_RXB_SIGDET_ENABLES			0x0900
#define USB3PHY_QSERDES_RXB_SIGDET_CNTRL			0x0904
#define USB3PHY_QSERDES_RXB_SIGDET_LVL				0x0908
#define USB3PHY_QSERDES_RXB_SIGDET_DEGLITCH_CNTRL		0x090C
#define USB3PHY_QSERDES_RXB_RX_BAND				0x0910
#define USB3PHY_QSERDES_RXB_CDR_FREEZE_UP_DN			0x0914
#define USB3PHY_QSERDES_RXB_CDR_RESET_OVERRIDE			0x0918
#define USB3PHY_QSERDES_RXB_RX_INTERFACE_MODE			0x091C
#define USB3PHY_QSERDES_RXB_JITTER_GEN_MODE			0x0920
#define USB3PHY_QSERDES_RXB_BUJ_AMP				0x0924
#define USB3PHY_QSERDES_RXB_SJ_AMP1				0x0928
#define USB3PHY_QSERDES_RXB_SJ_AMP2				0x092C
#define USB3PHY_QSERDES_RXB_SJ_PER1				0x0930
#define USB3PHY_QSERDES_RXB_SJ_PER2				0x0934
#define USB3PHY_QSERDES_RXB_BUJ_STEP_FREQ1			0x0938
#define USB3PHY_QSERDES_RXB_BUJ_STEP_FREQ2			0x093C
#define USB3PHY_QSERDES_RXB_PPM_OFFSET1				0x0940
#define USB3PHY_QSERDES_RXB_PPM_OFFSET2				0x0944
#define USB3PHY_QSERDES_RXB_SIGN_PPM_PERIOD1			0x0948
#define USB3PHY_QSERDES_RXB_SIGN_PPM_PERIOD2			0x094C
#define USB3PHY_QSERDES_RXB_RX_PWM_ENABLE_AND_DATA		0x0950
#define USB3PHY_QSERDES_RXB_RX_PWM_GEAR1_TIMEOUT_COUNT		0x0954
#define USB3PHY_QSERDES_RXB_RX_PWM_GEAR2_TIMEOUT_COUNT		0x0958
#define USB3PHY_QSERDES_RXB_RX_PWM_GEAR3_TIMEOUT_COUNT		0x095C
#define USB3PHY_QSERDES_RXB_RX_PWM_GEAR4_TIMEOUT_COUNT		0x0960
#define USB3PHY_QSERDES_RXB_RX_MODE_00				0x0964
#define USB3PHY_QSERDES_RXB_RX_MODE_01				0x0968
#define USB3PHY_QSERDES_RXB_RX_MODE_10				0x096C
#define USB3PHY_QSERDES_RXB_ALOG_OBSV_BUS_CTRL_1		0x0970
#define USB3PHY_QSERDES_RXB_PI_CTRL1				0x0974
#define USB3PHY_QSERDES_RXB_PI_CTRL2				0x0978
#define USB3PHY_QSERDES_RXB_PI_QUAD				0x097C
#define USB3PHY_QSERDES_RXB_IDATA1				0x0980
#define USB3PHY_QSERDES_RXB_IDATA2				0x0984
#define USB3PHY_QSERDES_RXB_AUX_DATA1				0x0988
#define USB3PHY_QSERDES_RXB_AUX_DATA2				0x098C
#define USB3PHY_QSERDES_RXB_AC_JTAG_OUTP			0x0990
#define USB3PHY_QSERDES_RXB_AC_JTAG_OUTN			0x0994
#define USB3PHY_QSERDES_RXB_RX_SIGDET				0x0998
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_I			0x099C
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_IBAR			0x09A0
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_Q			0x09A4
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_QBAR			0x09A8
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_A			0x09AC
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_ABAR			0x09B0
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_SM_ON			0x09B4
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_CAL_DONE		0x09B8
#define USB3PHY_QSERDES_RXB_IDAC_STATUS_SIGNERROR		0x09BC
#define USB3PHY_QSERDES_RXB_READ_EQCODE				0x09C0
#define USB3PHY_QSERDES_RXB_READ_OFFSETCODE			0x09C4
#define USB3PHY_QSERDES_RXB_IA_ERROR_COUNTER_LOW		0x09C8
#define USB3PHY_QSERDES_RXB_IA_ERROR_COUNTER_HIGH		0x09CC
#define USB3PHY_QSERDES_RXB_VGA_READ_CODE			0x09D0
#define USB3PHY_QSERDES_RXB_DFE_TAP1_READ_CODE			0x09D4
#define USB3PHY_QSERDES_RXB_DFE_TAP2_READ_CODE			0x09D8
#define USB3PHY_QSERDES_RXB_ALOG_OBSV_BUS_STATUS_1		0x09DC
#define USB3PHY_PCS_MISC_TYPEC_CTRL				0x0A00
#define USB3PHY_PCS_MISC_TYPEC_STATUS				0x0A04
#define USB3PHY_PCS_MISC_DEBUG_BUS_BYTE0_INDEX			0x0A08
#define USB3PHY_PCS_MISC_DEBUG_BUS_BYTE1_INDEX			0x0A0C
#define USB3PHY_PCS_MISC_DEBUG_BUS_BYTE2_INDEX			0x0A10
#define USB3PHY_PCS_MISC_DEBUG_BUS_BYTE3_INDEX			0x0A14
#define USB3PHY_PCS_MISC_PLACEHOLDER_STATUS			0x0A18
#define USB3PHY_PCS_MISC_DEBUG_BUS_0_STATUS			0x0A1C
#define USB3PHY_PCS_MISC_DEBUG_BUS_1_STATUS			0x0A20
#define USB3PHY_PCS_MISC_DEBUG_BUS_2_STATUS			0x0A24
#define USB3PHY_PCS_MISC_DEBUG_BUS_3_STATUS			0x0A28
#define USB3PHY_PCS_MISC_BIST_CTRL				0x0A2C
#define USB3PHY_PCS_SW_RESET					0x0C00
#define USB3PHY_PCS_POWER_DOWN_CONTROL				0x0C04
#define USB3PHY_PCS_START_CONTROL				0x0C08
#define USB3PHY_PCS_TXMGN_V0					0x0C0C
#define USB3PHY_PCS_TXMGN_V1					0x0C10
#define USB3PHY_PCS_TXMGN_V2					0x0C14
#define USB3PHY_PCS_TXMGN_V3					0x0C18
#define USB3PHY_PCS_TXMGN_V4					0x0C1C
#define USB3PHY_PCS_TXMGN_LS					0x0C20
#define USB3PHY_PCS_TXDEEMPH_M6DB_V0				0x0C24
#define USB3PHY_PCS_TXDEEMPH_M3P5DB_V0				0x0C28
#define USB3PHY_PCS_TXDEEMPH_M6DB_V1				0x0C2C
#define USB3PHY_PCS_TXDEEMPH_M3P5DB_V1				0x0C30
#define USB3PHY_PCS_TXDEEMPH_M6DB_V2				0x0C34
#define USB3PHY_PCS_TXDEEMPH_M3P5DB_V2				0x0C38
#define USB3PHY_PCS_TXDEEMPH_M6DB_V3				0x0C3C
#define USB3PHY_PCS_TXDEEMPH_M3P5DB_V3				0x0C40
#define USB3PHY_PCS_TXDEEMPH_M6DB_V4				0x0C44
#define USB3PHY_PCS_TXDEEMPH_M3P5DB_V4				0x0C48
#define USB3PHY_PCS_TXDEEMPH_M6DB_LS				0x0C4C
#define USB3PHY_PCS_TXDEEMPH_M3P5DB_LS				0x0C50
#define USB3PHY_PCS_ENDPOINT_REFCLK_DRIVE			0x0C54
#define USB3PHY_PCS_RX_IDLE_DTCT_CNTRL				0x0C58
#define USB3PHY_PCS_RATE_SLEW_CNTRL				0x0C5C
#define USB3PHY_PCS_POWER_STATE_CONFIG1				0x0C60
#define USB3PHY_PCS_POWER_STATE_CONFIG2				0x0C64
#define USB3PHY_PCS_POWER_STATE_CONFIG3				0x0C68
#define USB3PHY_PCS_POWER_STATE_CONFIG4				0x0C6C
#define USB3PHY_PCS_RCVR_DTCT_DLY_P1U2_L			0x0C70
#define USB3PHY_PCS_RCVR_DTCT_DLY_P1U2_H			0x0C74
#define USB3PHY_PCS_RCVR_DTCT_DLY_U3_L				0x0C78
#define USB3PHY_PCS_RCVR_DTCT_DLY_U3_H				0x0C7C
#define USB3PHY_PCS_LOCK_DETECT_CONFIG1				0x0C80
#define USB3PHY_PCS_LOCK_DETECT_CONFIG2				0x0C84
#define USB3PHY_PCS_LOCK_DETECT_CONFIG3				0x0C88
#define USB3PHY_PCS_TSYNC_RSYNC_TIME				0x0C8C
#define USB3PHY_PCS_SIGDET_LOW_2_IDLE_TIME			0x0C90
#define USB3PHY_PCS_BEACON_2_IDLE_TIME_L			0x0C94
#define USB3PHY_PCS_BEACON_2_IDLE_TIME_H			0x0C98
#define USB3PHY_PCS_PWRUP_RESET_DLY_TIME_SYSCLK			0x0C9C
#define USB3PHY_PCS_PWRUP_RESET_DLY_TIME_AUXCLK			0x0CA0
#define USB3PHY_PCS_LP_WAKEUP_DLY_TIME_AUXCLK			0x0CA4
#define USB3PHY_PCS_PLL_LOCK_CHK_DLY_TIME			0x0CA8
#define USB3PHY_PCS_LFPS_DET_HIGH_COUNT_VAL			0x0CAC
#define USB3PHY_PCS_LFPS_TX_ECSTART_EQTLOCK			0x0CB0
#define USB3PHY_PCS_LFPS_TX_END_CNT_P2U3_START			0x0CB4
#define USB3PHY_PCS_RXEQTRAINING_WAIT_TIME			0x0CB8
#define USB3PHY_PCS_RXEQTRAINING_RUN_TIME			0x0CBC
#define USB3PHY_PCS_TXONESZEROS_RUN_LENGTH			0x0CC0
#define USB3PHY_PCS_FLL_CNTRL1					0x0CC4
#define USB3PHY_PCS_FLL_CNTRL2					0x0CC8
#define USB3PHY_PCS_FLL_CNT_VAL_L				0x0CCC
#define USB3PHY_PCS_FLL_CNT_VAL_H_TOL				0x0CD0
#define USB3PHY_PCS_FLL_MAN_CODE				0x0CD4
#define USB3PHY_PCS_AUTONOMOUS_MODE_CTRL			0x0CD8
#define USB3PHY_PCS_LFPS_RXTERM_IRQ_CLEAR			0x0CDC
#define USB3PHY_PCS_ARCVR_DTCT_EN_PERIOD			0x0CE0
#define USB3PHY_PCS_ARCVR_DTCT_CM_DLY				0x0CE4
#define USB3PHY_PCS_ALFPS_DEGLITCH_VAL				0x0CE8
#define USB3PHY_PCS_INSIG_SW_CTRL1				0x0CEC
#define USB3PHY_PCS_INSIG_SW_CTRL2				0x0CF0
#define USB3PHY_PCS_INSIG_SW_CTRL3				0x0CF4
#define USB3PHY_PCS_INSIG_MX_CTRL1				0x0CF8
#define USB3PHY_PCS_INSIG_MX_CTRL2				0x0CFC
#define USB3PHY_PCS_INSIG_MX_CTRL3				0x0D00
#define USB3PHY_PCS_OUTSIG_SW_CTRL1				0x0D04
#define USB3PHY_PCS_OUTSIG_MX_CTRL1				0x0D08
#define USB3PHY_PCS_CLK_DEBUG_BYPASS_CTRL			0x0D0C
#define USB3PHY_PCS_TEST_CONTROL				0x0D10
#define USB3PHY_PCS_TEST_CONTROL2				0x0D14
#define USB3PHY_PCS_TEST_CONTROL3				0x0D18
#define USB3PHY_PCS_TEST_CONTROL4				0x0D1C
#define USB3PHY_PCS_TEST_CONTROL5				0x0D20
#define USB3PHY_PCS_TEST_CONTROL6				0x0D24
#define USB3PHY_PCS_TEST_CONTROL7				0x0D28
#define USB3PHY_PCS_COM_RESET_CONTROL				0x0D2C
#define USB3PHY_PCS_BIST_CTRL					0x0D30
#define USB3PHY_PCS_PRBS_POLY0					0x0D34
#define USB3PHY_PCS_PRBS_POLY1					0x0D38
#define USB3PHY_PCS_PRBS_SEED0					0x0D3C
#define USB3PHY_PCS_PRBS_SEED1					0x0D40
#define USB3PHY_PCS_FIXED_PAT_CTRL				0x0D44
#define USB3PHY_PCS_FIXED_PAT0					0x0D48
#define USB3PHY_PCS_FIXED_PAT1					0x0D4C
#define USB3PHY_PCS_FIXED_PAT2					0x0D50
#define USB3PHY_PCS_FIXED_PAT3					0x0D54
#define USB3PHY_PCS_COM_CLK_SWITCH_CTRL				0x0D58
#define USB3PHY_PCS_ELECIDLE_DLY_SEL				0x0D5C
#define USB3PHY_PCS_SPARE1					0x0D60
#define USB3PHY_PCS_BIST_CHK_ERR_CNT_L_STATUS			0x0D64
#define USB3PHY_PCS_BIST_CHK_ERR_CNT_H_STATUS			0x0D68
#define USB3PHY_PCS_BIST_CHK_STATUS				0x0D6C
#define USB3PHY_PCS_LFPS_RXTERM_IRQ_SOURCE_STATUS		0x0D70
#define USB3PHY_PCS_PCS_STATUS					0x0D74
#define USB3PHY_PCS_PCS_STATUS2					0x0D78
#define USB3PHY_PCS_PCS_STATUS3					0x0D7C
#define USB3PHY_PCS_COM_RESET_STATUS				0x0D80
#define USB3PHY_PCS_OSC_DTCT_STATUS				0x0D84
#define USB3PHY_PCS_REVISION_ID0				0x0D88
#define USB3PHY_PCS_REVISION_ID1				0x0D8C
#define USB3PHY_PCS_REVISION_ID2				0x0D90
#define USB3PHY_PCS_REVISION_ID3				0x0D94
#define USB3PHY_PCS_DEBUG_BUS_0_STATUS				0x0D98
#define USB3PHY_PCS_DEBUG_BUS_1_STATUS				0x0D9C
#define USB3PHY_PCS_DEBUG_BUS_2_STATUS				0x0DA0
#define USB3PHY_PCS_DEBUG_BUS_3_STATUS				0x0DA4
#define USB3PHY_PCS_LP_WAKEUP_DLY_TIME_AUXCLK_MSB		0x0DA8
#define USB3PHY_PCS_OSC_DTCT_ACTIONS				0x0DAC
#define USB3PHY_PCS_SIGDET_CNTRL				0x0DB0
#define USB3PHY_PCS_IDAC_CAL_CNTRL				0x0DB4
#define USB3PHY_PCS_CMN_ACK_OUT_SEL				0x0DB8
#define USB3PHY_PCS_PLL_LOCK_CHK_DLY_TIME_SYSCLK		0x0DBC
#define USB3PHY_PCS_AUTONOMOUS_MODE_STATUS			0x0DC0
#define USB3PHY_PCS_ENDPOINT_REFCLK_CNTRL			0x0DC4
#define USB3PHY_PCS_EPCLK_PRE_PLL_LOCK_DLY_SYSCLK		0x0DC8
#define USB3PHY_PCS_EPCLK_PRE_PLL_LOCK_DLY_AUXCLK		0x0DCC
#define USB3PHY_PCS_EPCLK_DLY_COUNT_VAL_L			0x0DD0
#define USB3PHY_PCS_EPCLK_DLY_COUNT_VAL_H			0x0DD4
#define USB3PHY_PCS_RX_SIGDET_LVL				0x0DD8
#define USB3PHY_PCS_L1SS_WAKEUP_DLY_TIME_AUXCLK_LSB		0x0DDC
#define USB3PHY_PCS_L1SS_WAKEUP_DLY_TIME_AUXCLK_MSB		0x0DE0
#define USB3PHY_PCS_AUTONOMOUS_MODE_CTRL2			0x0DE4
#define USB3PHY_PCS_RXTERMINATION_DLY_SEL			0x0DE8
#define USB3PHY_PCS_LFPS_PER_TIMER_VAL				0x0DEC
#define USB3PHY_PCS_SIGDET_STARTUP_TIMER_VAL			0x0DF0
#define USB3PHY_PCS_LOCK_DETECT_CONFIG4				0x0DF4
#define USB3PHY_PCS_RX_SIGDET_DTCT_CNTRL			0x0DF8
#define USB3PHY_PCS_PCS_STATUS4					0x0DFC
#define USB3PHY_PCS_PCS_STATUS4_CLEAR				0x0E00
#define USB3PHY_PCS_DEC_ERROR_COUNT_STATUS			0x0E04
#define USB3PHY_PCS_COMMA_POS_STATUS				0x0E08
#define USB3PHY_PCS_REFGEN_REQ_CONFIG1				0x0E0C
#define USB3PHY_PCS_REFGEN_REQ_CONFIG2				0x0E10
#define USB3PHY_PCS_REFGEN_REQ_CONFIG3				0x0E14

#endif /* _DT_BINDINGS_PHY_QCOM_11NM_QMP_COMBO_USB_H */
