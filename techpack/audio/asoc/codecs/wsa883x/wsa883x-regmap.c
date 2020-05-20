// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2015-2016, 2019, The Linux Foundation. All rights reserved.
 */

#include <linux/regmap.h>
#include <linux/device.h>
#include "wsa883x-registers.h"
#include "wsa883x.h"

extern const u8 wsa883x_reg_access[WSA883X_NUM_REGISTERS];

static struct reg_default wsa883x_defaults[] = {
	{WSA883X_REF_CTRL,                   0x6C},
	{WSA883X_TEST_CTL_0,                 0x06},
	{WSA883X_BIAS_0,                     0xD2},
	{WSA883X_OP_CTL,                     0xE0},
	{WSA883X_IREF_CTL,                   0x58},
	{WSA883X_ISENS_CTL,                  0x47},
	{WSA883X_CLK_CTL,                    0x87},
	{WSA883X_TEST_CTL_1,                 0x00},
	{WSA883X_BIAS_1,                     0x51},
	{WSA883X_ADC_CTL,                    0x03},
	{WSA883X_DOUT_MSB,                   0x00},
	{WSA883X_DOUT_LSB,                   0x00},
	{WSA883X_VBAT_SNS,                   0x00},
	{WSA883X_ITRIM_CODE,                 0x1F},
	{WSA883X_EN,                         0x00},
	{WSA883X_OVERRIDE1,                  0x00},
	{WSA883X_OVERRIDE2,                  0x08},
	{WSA883X_VSENSE1,                    0xD3},
	{WSA883X_ISENSE1,                    0xD4},
	{WSA883X_ISENSE2,                    0x20},
	{WSA883X_ISENSE_CAL,                 0x00},
	{WSA883X_MISC,                       0x00},
	{WSA883X_ADC_0,                      0x00},
	{WSA883X_ADC_1,                      0x00},
	{WSA883X_ADC_2,                      0x00},
	{WSA883X_ADC_3,                      0x00},
	{WSA883X_ADC_4,                      0x45},
	{WSA883X_ADC_5,                      0x20},
	{WSA883X_ADC_6,                      0x10},
	{WSA883X_ADC_7,                      0x00},
	{WSA883X_STATUS,                     0x00},
	{WSA883X_DAC_CTRL_REG,               0x41},
	{WSA883X_DAC_EN_DEBUG_REG,           0x00},
	{WSA883X_DAC_OPAMP_BIAS1_REG,        0x48},
	{WSA883X_DAC_OPAMP_BIAS2_REG,        0x48},
	{WSA883X_DAC_VCM_CTRL_REG,           0x0B},
	{WSA883X_DAC_VOLTAGE_CTRL_REG,       0x05},
	{WSA883X_ATEST1_REG,                 0x00},
	{WSA883X_ATEST2_REG,                 0x00},
	{WSA883X_SPKR_TOP_BIAS_REG1,         0x4A},
	{WSA883X_SPKR_TOP_BIAS_REG2,         0x65},
	{WSA883X_SPKR_TOP_BIAS_REG3,         0x55},
	{WSA883X_SPKR_TOP_BIAS_REG4,         0xA9},
	{WSA883X_SPKR_CLIP_DET_REG,          0x00},
	{WSA883X_SPKR_DRV_LF_BLK_EN,         0x0F},
	{WSA883X_SPKR_DRV_LF_EN,             0x0A},
	{WSA883X_SPKR_DRV_LF_MASK_DCC_CTL,   0x00},
	{WSA883X_SPKR_DRV_LF_MISC_CTL,       0x32},
	{WSA883X_SPKR_DRV_LF_REG_GAIN,       0x00},
	{WSA883X_SPKR_DRV_LF_OS_CAL_CTL1,    0x90},
	{WSA883X_SPKR_DRV_LF_OS_CAL_CTL,     0x00},
	{WSA883X_SPKR_PWM_CLK_CTL,           0x00},
	{WSA883X_SPKR_PDRV_HS_CTL,           0x50},
	{WSA883X_SPKR_PDRV_LS_CTL,           0x48},
	{WSA883X_SPKR_PWRSTG_DBG,            0x00},
	{WSA883X_SPKR_OCP_CTL,               0x00},
	{WSA883X_SPKR_BBM_CTL,               0x90},
	{WSA883X_PA_STATUS0,                 0x00},
	{WSA883X_PA_STATUS1,                 0x00},
	{WSA883X_PA_STATUS2,                 0x00},
	{WSA883X_EN_CTRL,                    0x54},
	{WSA883X_CURRENT_LIMIT,              0x90},
	{WSA883X_IBIAS1,                     0x00},
	{WSA883X_IBIAS2,                     0x00},
	{WSA883X_IBIAS3,                     0x00},
	{WSA883X_LDO_PROG,                   0x2A},
	{WSA883X_STABILITY_CTRL1,            0x8E},
	{WSA883X_STABILITY_CTRL2,            0x00},
	{WSA883X_PWRSTAGE_CTRL1,             0x00},
	{WSA883X_PWRSTAGE_CTRL2,             0x40},
	{WSA883X_UVLO,                       0xE9},
	{WSA883X_SEQUENCE_CTRL,              0x11},
	{WSA883X_ZX_CTRL_1,                  0xF0},
	{WSA883X_ZX_CTRL_2,                  0x06},
	{WSA883X_MISC1,                      0x02},
	{WSA883X_MISC2,                      0x81},
	{WSA883X_GMAMP_SUP1,                 0x84},
	{WSA883X_PWRSTAGE_CTRL3,             0x14},
	{WSA883X_PRSTAGE_CTRL4,              0x5F},
	{WSA883X_SPARE1,                     0x00},
	{WSA883X_PON_CTL_0,                  0xE3},
	{WSA883X_PON_CLT_1,                  0x70},
	{WSA883X_PON_CTL_2,                  0x00},
	{WSA883X_PON_CTL_3,                  0x00},
	{WSA883X_PON_CTL_4,                  0x00},
	{WSA883X_CKWD_CTL_0,                 0x34},
	{WSA883X_CKWD_CTL_1,                 0x80},
	{WSA883X_CKWD_CTL_2,                 0x00},
	{WSA883X_CKSK_CTL_0,                 0x0A},
	{WSA883X_TEST_0,                     0x00},
	{WSA883X_TEST_1,                     0x00},
	{WSA883X_STATUS_0,                   0x00},
	{WSA883X_STATUS_1,                   0x00},
	{WSA883X_PAGE_REGISTER,              0x00},
	{WSA883X_CHIP_ID0,                   0x00},
	{WSA883X_CHIP_ID1,                   0x00},
	{WSA883X_CHIP_ID2,                   0x02},
	{WSA883X_CHIP_ID3,                   0x02},
	{WSA883X_BUS_ID,                     0x00},
	{WSA883X_CDC_RST_CTL,                0x01},
	{WSA883X_TOP_CLK_CFG,                0x00},
	{WSA883X_CDC_PATH_MODE,              0x00},
	{WSA883X_CDC_CLK_CTL,                0xFF},
	{WSA883X_SWR_RESET_EN,               0x00},
	{WSA883X_PA_FSM_CTL,                 0x00},
	{WSA883X_PA_FSM_TIMER0,              0x80},
	{WSA883X_PA_FSM_TIMER1,              0x80},
	{WSA883X_PA_FSM_STA,                 0x00},
	{WSA883X_PA_FSM_ERR_COND,            0x00},
	{WSA883X_PA_FSM_MSK,                 0x00},
	{WSA883X_PA_FSM_BYP,                 0x00},
	{WSA883X_TADC_VALUE_CTL,             0x03},
	{WSA883X_TEMP_DETECT_CTL,            0x01},
	{WSA883X_TEMP_MSB,                   0x00},
	{WSA883X_TEMP_LSB,                   0x00},
	{WSA883X_TEMP_CONFIG0,               0x00},
	{WSA883X_TEMP_CONFIG1,               0x00},
	{WSA883X_VBAT_ADC_FLT_CTL,           0x00},
	{WSA883X_VBAT_DIN_MSB,               0x00},
	{WSA883X_VBAT_DIN_LSB,               0x00},
	{WSA883X_VBAT_DOUT,                  0x00},
	{WSA883X_SDM_PDM9_LSB,               0x00},
	{WSA883X_SDM_PDM9_MSB,               0x00},
	{WSA883X_CDC_RX_CTL,                 0xFE},
	{WSA883X_CDC_SPK_DSM_A1_0,           0x00},
	{WSA883X_CDC_SPK_DSM_A1_1,           0x01},
	{WSA883X_CDC_SPK_DSM_A2_0,           0x96},
	{WSA883X_CDC_SPK_DSM_A2_1,           0x09},
	{WSA883X_CDC_SPK_DSM_A3_0,           0xAB},
	{WSA883X_CDC_SPK_DSM_A3_1,           0x05},
	{WSA883X_CDC_SPK_DSM_A4_0,           0x1C},
	{WSA883X_CDC_SPK_DSM_A4_1,           0x02},
	{WSA883X_CDC_SPK_DSM_A5_0,           0x17},
	{WSA883X_CDC_SPK_DSM_A5_1,           0x02},
	{WSA883X_CDC_SPK_DSM_A6_0,           0xAA},
	{WSA883X_CDC_SPK_DSM_A7_0,           0xE3},
	{WSA883X_CDC_SPK_DSM_C_0,            0x69},
	{WSA883X_CDC_SPK_DSM_C_1,            0x54},
	{WSA883X_CDC_SPK_DSM_C_2,            0x02},
	{WSA883X_CDC_SPK_DSM_C_3,            0x15},
	{WSA883X_CDC_SPK_DSM_R1,             0xA4},
	{WSA883X_CDC_SPK_DSM_R2,             0xB5},
	{WSA883X_CDC_SPK_DSM_R3,             0x86},
	{WSA883X_CDC_SPK_DSM_R4,             0x85},
	{WSA883X_CDC_SPK_DSM_R5,             0xAA},
	{WSA883X_CDC_SPK_DSM_R6,             0xE2},
	{WSA883X_CDC_SPK_DSM_R7,             0x62},
	{WSA883X_CDC_SPK_GAIN_PDM_0,         0x00},
	{WSA883X_CDC_SPK_GAIN_PDM_1,         0xFC},
	{WSA883X_CDC_SPK_GAIN_PDM_2,         0x05},
	{WSA883X_PDM_WD_CTL,                 0x00},
	{WSA883X_DEM_BYPASS_DATA0,           0x00},
	{WSA883X_DEM_BYPASS_DATA1,           0x00},
	{WSA883X_DEM_BYPASS_DATA2,           0x00},
	{WSA883X_DEM_BYPASS_DATA3,           0x00},
	{WSA883X_WAVG_CTL,                   0x06},
	{WSA883X_WAVG_LRA_PER_0,             0xD1},
	{WSA883X_WAVG_LRA_PER_1,             0x00},
	{WSA883X_WAVG_DELTA_THETA_0,         0xE6},
	{WSA883X_WAVG_DELTA_THETA_1,         0x04},
	{WSA883X_WAVG_DIRECT_AMP_0,          0x50},
	{WSA883X_WAVG_DIRECT_AMP_1,          0x00},
	{WSA883X_WAVG_PTRN_AMP0_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP0_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP1_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP1_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP2_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP2_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP3_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP3_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP4_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP4_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP5_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP5_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP6_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP6_1,           0x00},
	{WSA883X_WAVG_PTRN_AMP7_0,           0x50},
	{WSA883X_WAVG_PTRN_AMP7_1,           0x00},
	{WSA883X_WAVG_PER_0_1,               0x88},
	{WSA883X_WAVG_PER_2_3,               0x88},
	{WSA883X_WAVG_PER_4_5,               0x88},
	{WSA883X_WAVG_PER_6_7,               0x88},
	{WSA883X_DRE_CTL_0,                  0x30},
	{WSA883X_DRE_CTL_1,                  0x20},
	{WSA883X_CLSH_CTL_0,                 0x37},
	{WSA883X_CLSH_CTL_1,                 0x81},
	{WSA883X_CLSH_V_HD_PA,               0x0F},
	{WSA883X_CLSH_V_PA_MIN,              0x00},
	{WSA883X_CLSH_OVRD_VAL,              0x00},
	{WSA883X_CLSH_HARD_MAX,              0xFF},
	{WSA883X_CLSH_SOFT_MAX,              0xFF},
	{WSA883X_CLSH_SIG_DP,                0x00},
	{WSA883X_TAGC_CTL,                   0x10},
	{WSA883X_TAGC_TIME,                  0x20},
	{WSA883X_TAGC_E2E_GAIN,              0x02},
	{WSA883X_TAGC_FORCE_VAL,             0x00},
	{WSA883X_VAGC_CTL,                   0x00},
	{WSA883X_VAGC_TIME,                  0x08},
	{WSA883X_VAGC_ATTN_LVL_1_2,          0x21},
	{WSA883X_VAGC_ATTN_LVL_3,            0x03},
	{WSA883X_INTR_MODE,                  0x00},
	{WSA883X_INTR_MASK0,                 0x1B},
	{WSA883X_INTR_MASK1,                 0x03},
	{WSA883X_INTR_STATUS0,               0x00},
	{WSA883X_INTR_STATUS1,               0x00},
	{WSA883X_INTR_CLEAR0,                0x00},
	{WSA883X_INTR_CLEAR1,                0x03},
	{WSA883X_INTR_LEVEL0,                0x00},
	{WSA883X_INTR_LEVEL1,                0x03},
	{WSA883X_INTR_SET0,                  0x00},
	{WSA883X_INTR_SET1,                  0x03},
	{WSA883X_INTR_TEST0,                 0x00},
	{WSA883X_INTR_TEST1,                 0x03},
	{WSA883X_OTP_CTRL0,                  0x00},
	{WSA883X_OTP_CTRL1,                  0x00},
	{WSA883X_HDRIVE_CTL_GROUP1,          0x00},
	{WSA883X_PIN_CTL,                    0x04},
	{WSA883X_PIN_CTL_OE,                 0x00},
	{WSA883X_PIN_WDATA_IOPAD,            0x00},
	{WSA883X_PIN_STATUS,                 0x00},
	{WSA883X_I2C_SLAVE_CTL,              0x00},
	{WSA883X_PDM_TEST_MODE,              0x00},
	{WSA883X_ATE_TEST_MODE,              0x00},
	{WSA883X_DRE_TEST,                   0x00},
	{WSA883X_DIG_DEBUG_MODE,             0x00},
	{WSA883X_DIG_DEBUG_SEL,              0x00},
	{WSA883X_DIG_DEBUG_EN,               0x00},
	{WSA883X_SWR_HM_TEST0,               0x08},
	{WSA883X_SWR_HM_TEST1,               0x00},
	{WSA883X_SWR_PAD_CTL,                0x45},
	{WSA883X_TEMP_DETECT_DBG_CTL,        0x00},
	{WSA883X_TEMP_DEBUG_MSB,             0x00},
	{WSA883X_TEMP_DEBUG_LSB,             0x00},
	{WSA883X_SAMPLE_EDGE_SEL,            0x7F},
	{WSA883X_TEST_MODE_CTL,              0x00},
	{WSA883X_IOPAD_CTL,                  0x00},
	{WSA883X_SPARE_0,                    0x00},
	{WSA883X_SPARE_1,                    0x00},
	{WSA883X_SPARE_2,                    0x00},
	{WSA883X_SCODE,                      0x00},
	{WSA883X_PAGE_REGISTER,              0x00},
	{WSA883X_OTP_REG_0,                  0x01},
	{WSA883X_OTP_REG_1,                  0xFF},
	{WSA883X_OTP_REG_2,                  0xC0},
	{WSA883X_OTP_REG_3,                  0xFF},
	{WSA883X_OTP_REG_4,                  0xC0},
	{WSA883X_OTP_REG_5,                  0xFF},
	{WSA883X_OTP_REG_6,                  0xFF},
	{WSA883X_OTP_REG_7,                  0xFF},
	{WSA883X_OTP_REG_8,                  0xFF},
	{WSA883X_OTP_REG_9,                  0xFF},
	{WSA883X_OTP_REG_10,                 0xFF},
	{WSA883X_OTP_REG_11,                 0xFF},
	{WSA883X_OTP_REG_12,                 0xFF},
	{WSA883X_OTP_REG_13,                 0xFF},
	{WSA883X_OTP_REG_14,                 0xFF},
	{WSA883X_OTP_REG_15,                 0xFF},
	{WSA883X_OTP_REG_16,                 0xFF},
	{WSA883X_OTP_REG_17,                 0xFF},
	{WSA883X_OTP_REG_18,                 0xFF},
	{WSA883X_OTP_REG_19,                 0xFF},
	{WSA883X_OTP_REG_20,                 0xFF},
	{WSA883X_OTP_REG_21,                 0xFF},
	{WSA883X_OTP_REG_22,                 0xFF},
	{WSA883X_OTP_REG_23,                 0xFF},
	{WSA883X_OTP_REG_24,                 0x03},
	{WSA883X_OTP_REG_25,                 0x01},
	{WSA883X_OTP_REG_26,                 0x03},
	{WSA883X_OTP_REG_27,                 0x11},
	{WSA883X_OTP_REG_28,                 0x3F},
	{WSA883X_OTP_REG_29,                 0x3F},
	{WSA883X_OTP_REG_30,                 0x01},
	{WSA883X_OTP_REG_31,                 0x01},
	{WSA883X_OTP_REG_SCODE,              0x00},
	{WSA883X_OTP_REG_63,                 0x40},
	{WSA883X_EMEM_0,                     0x00},
	{WSA883X_EMEM_1,                     0x00},
	{WSA883X_EMEM_2,                     0x00},
	{WSA883X_EMEM_3,                     0x00},
	{WSA883X_EMEM_4,                     0x00},
	{WSA883X_EMEM_5,                     0x00},
	{WSA883X_EMEM_6,                     0x00},
	{WSA883X_EMEM_7,                     0x00},
	{WSA883X_EMEM_8,                     0x00},
	{WSA883X_EMEM_9,                     0x00},
	{WSA883X_EMEM_10,                    0x00},
	{WSA883X_EMEM_11,                    0x00},
	{WSA883X_EMEM_12,                    0x00},
	{WSA883X_EMEM_13,                    0x00},
	{WSA883X_EMEM_14,                    0x00},
	{WSA883X_EMEM_15,                    0x00},
	{WSA883X_EMEM_16,                    0x00},
	{WSA883X_EMEM_17,                    0x00},
	{WSA883X_EMEM_18,                    0x00},
	{WSA883X_EMEM_19,                    0x00},
	{WSA883X_EMEM_20,                    0x00},
	{WSA883X_EMEM_21,                    0x00},
	{WSA883X_EMEM_22,                    0x00},
	{WSA883X_EMEM_23,                    0x00},
	{WSA883X_EMEM_24,                    0x00},
	{WSA883X_EMEM_25,                    0x00},
	{WSA883X_EMEM_26,                    0x00},
	{WSA883X_EMEM_27,                    0x00},
	{WSA883X_EMEM_28,                    0x00},
	{WSA883X_EMEM_29,                    0x00},
	{WSA883X_EMEM_30,                    0x00},
	{WSA883X_EMEM_31,                    0x00},
	{WSA883X_EMEM_32,                    0x00},
	{WSA883X_EMEM_33,                    0x00},
	{WSA883X_EMEM_34,                    0x00},
	{WSA883X_EMEM_35,                    0x00},
	{WSA883X_EMEM_36,                    0x00},
	{WSA883X_EMEM_37,                    0x00},
	{WSA883X_EMEM_38,                    0x00},
	{WSA883X_EMEM_39,                    0x00},
	{WSA883X_EMEM_40,                    0x00},
	{WSA883X_EMEM_41,                    0x00},
	{WSA883X_EMEM_42,                    0x00},
	{WSA883X_EMEM_43,                    0x00},
	{WSA883X_EMEM_44,                    0x00},
	{WSA883X_EMEM_45,                    0x00},
	{WSA883X_EMEM_46,                    0x00},
	{WSA883X_EMEM_47,                    0x00},
	{WSA883X_EMEM_48,                    0x00},
	{WSA883X_EMEM_49,                    0x00},
	{WSA883X_EMEM_50,                    0x00},
	{WSA883X_EMEM_51,                    0x00},
	{WSA883X_EMEM_52,                    0x00},
	{WSA883X_EMEM_53,                    0x00},
	{WSA883X_EMEM_54,                    0x00},
	{WSA883X_EMEM_55,                    0x00},
	{WSA883X_EMEM_56,                    0x00},
	{WSA883X_EMEM_57,                    0x00},
	{WSA883X_EMEM_58,                    0x00},
	{WSA883X_EMEM_59,                    0x00},
	{WSA883X_EMEM_60,                    0x00},
	{WSA883X_EMEM_61,                    0x00},
	{WSA883X_EMEM_62,                    0x00},
	{WSA883X_EMEM_63,                    0x00},
};

static bool wsa883x_readable_register(struct device *dev, unsigned int reg)
{
	if (reg <= WSA883X_BASE)
		return 0;

	return wsa883x_reg_access[WSA883X_REG(reg)] & RD_REG;
}

static bool wsa883x_writeable_register(struct device *dev, unsigned int reg)
{
	if (reg <= WSA883X_BASE)
		return 0;

	return wsa883x_reg_access[WSA883X_REG(reg)] & WR_REG;
}

static bool wsa883x_volatile_register(struct device *dev, unsigned int reg)
{
	if (reg <= WSA883X_BASE)
		return 0;

	return ((wsa883x_reg_access[WSA883X_REG(reg)] & RD_REG) &&
		!(wsa883x_reg_access[WSA883X_REG(reg)] & WR_REG));
}

struct regmap_config wsa881x_regmap_config = {
	.reg_bits = 16,
	.val_bits = 8,
	.cache_type = REGCACHE_RBTREE,
	.reg_defaults = wsa883x_defaults,
	.num_reg_defaults = ARRAY_SIZE(wsa883x_defaults),
	.max_register = WSA883X_MAX_REGISTER,
	.volatile_reg = wsa883x_volatile_register,
	.readable_reg = wsa883x_readable_register,
	.writeable_reg = wsa883x_writeable_register,
	.reg_format_endian = REGMAP_ENDIAN_NATIVE,
	.val_format_endian = REGMAP_ENDIAN_NATIVE,
	.can_multi_write = true,
};
