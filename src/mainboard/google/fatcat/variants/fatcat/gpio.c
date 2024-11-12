/* SPDX-License-Identifier: GPL-2.0-or-later */

#include <baseboard/gpio.h>
#include <baseboard/variants.h>
#include <boardid.h>
#include <soc/gpio.h>

/* Pad configuration in ramstage*/
static const struct pad_config gpio_table[] = {
	/* GPP_A00:     ESPI_IO0_EC_R */
	/*  GPP_A00 : GPP_A00 ==> ESPI_IO0_EC_R configured on reset, do not touch */

	/* GPP_A01:     ESPI_IO1_EC_R */
	/*  GPP_A01 : GPP_A01 ==> ESPI_IO1_EC_R configured on reset, do not touch */

	/* GPP_A02:     ESPI_IO2_EC_R */
	/*  GPP_A02 : GPP_A02 ==> ESPI_IO2_EC_R configured on reset, do not touch */

	/* GPP_A03:     ESPI_IO3_EC_R */
	/*  GPP_A03 : GPP_A03 ==> ESPI_IO3_EC_R configured on reset, do not touch */

	/* GPP_A04:     ESPI_CS0_EC_R_N */
	/*  GPP_A04 : GPP_A04 ==> ESPI_CS0_HDR_L configured on reset, do not touch */

	/* GPP_A05:     ESPI_CLK_EC_R */
	/*  GPP_A05 : GPP_A05 ==> ESPI_CLK_HDR configured on reset, do not touch */

	/* GPP_A06:     ESPI_RST_EC_R_N */
	/*  GPP_A06 : GPP_A06 ==> ESPI_RST_HDR configured on reset, do not touch */

	/* GPP_A08:     X1_PCIE_SLOT_PWR_EN */
	PAD_CFG_GPO(GPP_A08, 1, PLTRST),
	/* GPP_A09:     M.2_WWAN_FCP_OFF_N */
	PAD_CFG_GPO(GPP_A09, 1, PLTRST),
	/* GPP_A10:     M.2_WWAN_DISABLE_N */
	PAD_CFG_GPO(GPP_A10, 1, PLTRST),
	/* GPP_A11:     WLAN_RST_N */
	PAD_CFG_GPO(GPP_A11, 1, PLTRST),
	/* GPP_A12:     WIFI_WAKE_N */
	PAD_CFG_GPI_SCI_LOW(GPP_A12, NONE, DEEP, LEVEL),
	/* GPP_A13:     Not used */
	PAD_NC(GPP_A13, NONE),
	/* GPP_A15:     GPP_A15_DNX_FORCE_RELOAD */
	PAD_CFG_NF(GPP_A15, NONE, DEEP, NF1),
	/* GPP_A16:     BT_RF_KILL_N */
	PAD_CFG_GPO(GPP_A16, 1, DEEP),
	/* GPP_A17:     WIFI_RF_KILL_N */
	PAD_CFG_GPO(GPP_A17, 1, DEEP),

	/* GPP_B00:     USBC_SML_CLK_PD */
	PAD_CFG_NF(GPP_B00, NONE, DEEP, NF1),
	/* GPP_B01:     USBC_SML_DATA_PD */
	PAD_CFG_NF(GPP_B01, NONE, DEEP, NF1),
	/* GPP_B02:     ISH_I2C0_SDA_SNSR_HDR */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_B02, NONE, DEEP, NF3),
	/* GPP_B03:     ISH_I2C0_SCL_SNSR_HDR */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_B03, NONE, DEEP, NF3),
	/* GPP_B04:     ISH_GP_0_SNSR_HDR */
	PAD_CFG_NF(GPP_B04, NONE, DEEP, NF4),
	/* GPP_B05:     ISH_GP_1_SNSR_HDR */
	PAD_CFG_NF(GPP_B05, NONE, DEEP, NF4),
	/* GPP_B06:     ISH_GP_2_SNSR_HDR */
	PAD_CFG_NF(GPP_B06, NONE, DEEP, NF4),
	/* GPP_B07:     ISH_GP_3_SNSR_HDR */
	PAD_CFG_NF(GPP_B07, NONE, DEEP, NF4),
	/* GPP_B08:     ISH_GP_4_SNSR_HDR */
	PAD_CFG_NF(GPP_B08, NONE, DEEP, NF4),
	/* GPP_B09:     M2_GEN4_SSD_RESET_N */
	PAD_CFG_GPO(GPP_B09, 1, PLTRST),
	/* GPP_B10:     GEN4_SSD_PWREN */
	PAD_CFG_GPO(GPP_B10, 1, PLTRST),
	/* GPP_B11:     MOD_TCSS1_DISP_HPD3 */
	PAD_CFG_NF(GPP_B11, NONE, DEEP, NF2),
	/* GPP_B12:     PM_SLP_S0_N */
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1),
	/* GPP_B13:     PLT_RST_N */
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1),
	/* GPP_B14:     MOD_TCSS2_DISP_HPD4 */
	PAD_CFG_NF(GPP_B14, NONE, DEEP, NF2),
	/* GPP_B15:     MOD_TCSS_USB_TYP_A_OC3_N */
	PAD_CFG_NF(GPP_B15, NONE, DEEP, NF1),
	/* GPP_B16:     GEN5_SSD_PWREN */
	PAD_CFG_GPO(GPP_B16, 1, PLTRST),
	/* GPP_B17:     Not used */
	PAD_NC(GPP_B17, NONE),
	/* GPP_B18:     ISH_I2C2_SDA_SNSR_HDR */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_B18, NONE, DEEP, NF1),
	/* GPP_B19:     ISH_I2C2_SCL_SNSR_HDR */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_B19, NONE, DEEP, NF1),
	/* GPP_B20:     M.2_WWAN_RST_N */
	PAD_CFG_GPO(GPP_B20, 1, PLTRST),
	/* GPP_B21:     TCP_RETIMER_FORCE_PWR */
	PAD_CFG_GPO(GPP_B21, 0, DEEP),
	/* GPP_B22:     ISH_GP_5_SNSR_HDR */
	PAD_CFG_NF(GPP_B22, NONE, DEEP, NF4),
	/* GPP_B23:     ISH_GP_6_SNSR_HDR */
	PAD_CFG_NF(GPP_B23, NONE, DEEP, NF4),
	/* GPP_B24:     ESPI_ALERT0_EC_R_N */
	PAD_NC(GPP_B24, NONE),
	/* GPP_B25:     X1_SLOT_WAKE_N */
	PAD_CFG_GPI_SCI_LOW(GPP_B25, NONE, DEEP, LEVEL),

	/* GPP_C00:     GPP_C0_SMBCLK */
	PAD_CFG_NF(GPP_C00, NONE, DEEP, NF1),
	/* GPP_C01:     GPP_C1_SMBDATA */
	PAD_CFG_NF(GPP_C01, NONE, DEEP, NF1),
	/* GPP_C02:     Not used */
	PAD_NC(GPP_C02, NONE),
	/* GPP_C03:     TCP_LAN_SML0_SCL_R */
	PAD_CFG_NF(GPP_C03, NONE, DEEP, NF1),
	/* GPP_C04:     TCP_LAN_SML0_SDA_R */
	PAD_CFG_NF(GPP_C04, NONE, DEEP, NF1),
	/* GPP_C05:     CRD1_PWREN */
	PAD_CFG_GPO(GPP_C05, 1, PLTRST),
	/* GPP_C06:     SML1_CLK */
	PAD_CFG_NF(GPP_C06, NONE, DEEP, NF1),
	/* GPP_C07:     SML1_DATA */
	PAD_CFG_NF(GPP_C07, NONE, DEEP, NF1),
	/* GPP_C08:     CRD2_PWREN */
	PAD_CFG_GPO(GPP_C08, 1, PLTRST),
	/* GPP_C09:     CLKREQ0_X8_GEN5_DT_CEM_SLOT_N */
	PAD_CFG_NF(GPP_C09, NONE, DEEP, NF1),
	/* GPP_C10:     CLKREQ1_X4_GEN5_M2_SSD_N */
	PAD_CFG_NF(GPP_C10, NONE, DEEP, NF1),
	/* GPP_C11:     CLKREQ2_X1_GEN4_DT_CEM_SLOT_N */
	PAD_CFG_NF(GPP_C11, NONE, DEEP, NF1),
	/* GPP_C12:     CLKREQ3_X1_GEN1_GBE_LAN_N */
	PAD_CFG_NF(GPP_C12, NONE, DEEP, NF1),
	/* GPP_C13:     CLKREQ4_X1_GEN4_M2_WLAN_N */
	PAD_CFG_NF(GPP_C13, NONE, DEEP, NF1),
	/* GPP_C14:     CLKREQ5_X1_GEN4_M2_WWAN_N */
	PAD_CFG_NF(GPP_C14, NONE, DEEP, NF1),
	/* GPP_C15:     CRD1_CLK_EN */
	PAD_CFG_GPO(GPP_C15, 1, PLTRST),
	/* GPP_C16:     TBT_LSX0_TXD  */
	PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1),
	/* GPP_C17:     TBT_LSX0_RXD  */
	PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
	/* GPP_C18:     TBT_LSX1_TXD  */
	PAD_CFG_NF(GPP_C18, NONE, DEEP, NF1),
	/* GPP_C19:     TBT_LSX1_RXD */
	PAD_CFG_NF(GPP_C19, NONE, DEEP, NF1),
	/* GPP_C20:     MOD_TCSS1_LS_TX_DDC_SCL */
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),
	/* GPP_C21:     MOD_TCSS1_LS_RX_DDC_SDA */
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
	/* GPP_C22:     MOD_TCSS2_LS_TX_DDC_SCL */
	PAD_CFG_NF(GPP_C22, NONE, DEEP, NF2),
	/* GPP_C23:     MOD_TCSS2_LS_RX_DDC_SDA */
	PAD_CFG_NF(GPP_C23, NONE, DEEP, NF2),

	/* GPP_D00:     IMGCLKOUT_1 */
	PAD_CFG_NF(GPP_D00, NONE, DEEP, NF1),
	/* GPP_D01:     MOD_TCSS1_TYP_A_VBUS_EN */
	PAD_CFG_GPO(GPP_D01, 1, DEEP),
	/* GPP_D02:     Not used */
	PAD_NC(GPP_D02, NONE),
	/* GPP_D03:     M.2_WWAN_PERST_GPIO_N */
	PAD_CFG_GPO(GPP_D03, 1, PLTRST),
	/* GPP_D04:     IMGCLKOUT_0 */
	PAD_CFG_NF(GPP_D04, NONE, DEEP, NF1),
	/* GPP_D07:     NC */
	PAD_NC(GPP_D07, NONE),
	/* GPP_D08:     NC */
	PAD_NC(GPP_D08, NONE),
	/* GPP_D09:     PEG_SLOT_RST_N */
	PAD_CFG_GPO(GPP_D09, 1, PLTRST),
	/* GPP_D10:     HDA_BCLK */
	PAD_CFG_NF(GPP_D10, NONE, DEEP, NF1),
	/* GPP_D11:     HDA_SYNC */
	PAD_CFG_NF(GPP_D11, NONE, DEEP, NF1),
	/* GPP_D12:     HDA_SDO */
	PAD_CFG_NF(GPP_D12, NONE, DEEP, NF1),
	/* GPP_D13:     HDA_SDI0 */
	PAD_CFG_NF(GPP_D13, NONE, DEEP, NF1),
	/* GPP_D14:     COINLESS_MODE_SELECT */
	PAD_CFG_GPI_TRIG_OWN(GPP_D14, NONE, PLTRST, LEVEL, ACPI),
	/* GPP_D15:     SPI_TPM_INT_N */
	PAD_CFG_GPI_APIC_LOCK(GPP_D15, NONE, LEVEL, INVERT, LOCK_CONFIG),
	/* GPP_D16:     HDA_RST_N_HDR */
	PAD_CFG_NF(GPP_D16, NONE, DEEP, NF1),
	/* GPP_D17:     HDA_SDI1_HDR */
	PAD_CFG_NF(GPP_D17, NONE, DEEP, NF1),
	/* GPP_D18:     CLKREQ6_X4_GEN4_M2_SSD_N */
	PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1),
	/* GPP_D19:     X1_DT_PCIE_RST_N */
	PAD_CFG_GPO(GPP_D19, 1, PLTRST),
	/* GPP_D20:     CSE_EARLY_SW */
	PAD_CFG_GPI_SCI_HIGH(GPP_D20, NONE, DEEP, LEVEL),
	/* GPP_D21:     GPP_D21_UFS_REFCLK */
	PAD_CFG_NF(GPP_D21, NONE, DEEP, NF1),
	/* GPP_D22:     BPKI3C_SDA */
	PAD_CFG_NF(GPP_D22, NONE, DEEP, NF1),
	/* GPP_D23:     BPKI3C_SCL */
	PAD_CFG_NF(GPP_D23, NONE, DEEP, NF1),
	/* GPP_D24:     PEG_SLOT_WAKE_N */
	PAD_CFG_GPI_SCI_LOW(GPP_D24, NONE, DEEP, LEVEL),
	/* GPP_D25:     X4_SLOT_WAKE_N */
	PAD_CFG_GPI_SCI_LOW(GPP_D25, NONE, DEEP, LEVEL),

	/* GPP_E01:     CRD2_RST_N */
	PAD_CFG_GPO(GPP_E01, 1, PLTRST),
	/* GPP_E02:     WWAN_WAKE_GPIO_N  */
	PAD_CFG_GPI_SCI_LOW(GPP_E02, NONE, DEEP, LEVEL),
	/* GPP_E03:     M2_GEN5_SSD_RESET_N */
	PAD_CFG_GPO(GPP_E03, 1, PLTRST),
	/* GPP_E06:     SECURE_CAM_SW */
	PAD_CFG_GPI_TRIG_OWN(GPP_E06, NONE, PLTRST, LEVEL, ACPI),
#if CONFIG(BOARD_GOOGLE_FATCAT)
	/* GPP_E07:     Not used */
	PAD_NC(GPP_E07, NONE),
#else
	/* GPP_E07 : [] ==> EC_SOC_INT_ODL */
	PAD_CFG_GPI_APIC_LOCK(GPP_E07, NONE, LEVEL, INVERT, LOCK_CONFIG),
#endif
	/* GPP_E08:     Not used */
	PAD_NC(GPP_E08, NONE),
	/* GPP_E09:     USB_RD_FP_CONN_12_OC0_N */
	PAD_CFG_NF(GPP_E09, NONE, DEEP, NF1),
	/* GPP_E10:     CRD1_RST_N */
	PAD_CFG_GPO(GPP_E10, 1, PLTRST),
	/* GPP_E11:     THC0_SPI1_CLK_TCH_PNL1 */
	PAD_CFG_NF(GPP_E11, NONE, DEEP, NF3),
	/* GPP_E12:     THC0_SPI1_IO_0_I2C4_SCL_TCH_PNL1 */
	PAD_CFG_NF(GPP_E12, NONE, DEEP, NF3),
	/* GPP_E13:     THC0_SPI1_IO_1_I2C4_SDA_TCH_PNL1 */
	PAD_CFG_NF(GPP_E13, NONE, DEEP, NF3),
	/* GPP_E14:     THC0_SPI1_IO_2_TCH_PNL1 */
	PAD_CFG_NF(GPP_E14, NONE, DEEP, NF3),
	/* GPP_E15:     THC0_SPI1_IO_3_TCH_PNL1 */
	PAD_CFG_NF(GPP_E15, NONE, DEEP, NF3),
	/* GPP_E16:     THC0_SPI1_RST_N_TCH_PNL1 */
	/* THC NOTE: use GPO instead of GPO for THC0 Rst */
	PAD_CFG_GPO(GPP_E16, 1, DEEP),
	/* GPP_E17:     THC0_SPI1_CS0_N_TCH_PNL1 */
	PAD_CFG_NF(GPP_E17, NONE, DEEP, NF3),
	/* GPP_E18:     THC0_SPI1_INT_N_TCH_PNL1 */
	PAD_CFG_NF(GPP_E18, NONE, DEEP, NF3),
	/* GPP_E19:     PEG_SLOT_DGPU_SEL_N */
	PAD_CFG_GPO(GPP_E19, 1, PLTRST),
	/* GPP_E20:     PEG_SLOT_DGPU_PWR_OK */
	PAD_CFG_GPI(GPP_E20, NONE, PLTRST),
	/* GPP_E21:     I2C_PMC_PD_INT_N */
	PAD_CFG_NF(GPP_E21, NONE, DEEP, NF1),
	/* GPP_E22:     THC0_SPI1_DSYNC */
	PAD_CFG_NF(GPP_E22, NONE, DEEP, NF3),

	/* GPP_F00:     M.2_CNV_BRI_DT_BT_UART2_RTS_N */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_F00, NONE, DEEP, NF1),
	/* GPP_F01:     M.2_CNV_BRI_RSP_BT_UART2_RXD */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_F01, NONE, DEEP, NF1),
	/* GPP_F02:     M.2_CNV_RGI_DT_BT_UART2_TXD */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_F02, NONE, DEEP, NF1),
	/* GPP_F03:     M.2_CNV_RGI_RSP_BT_UART2_CTS_N */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_F03, NONE, DEEP, NF1),
	/* GPP_F04:     CNV_RF_RESET_R_N */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_F04, NONE, DEEP, NF1),
	/* GPP_F05:     CRF_CLKREQ_R */
	/* NOTE: IOSSTAGE: 'Ignore' for S0ix */
	PAD_CFG_NF_IOSTANDBY_IGNORE(GPP_F05, NONE, DEEP, NF3),
	/* GPP_F06:     WLAN_WWAN_COEX3 */
	PAD_CFG_NF(GPP_F06, NONE, DEEP, NF1),
	/* GPP_F07:     IMGCLKOUT_2 */
	PAD_CFG_NF(GPP_F07, NONE, DEEP, NF2),
	/* GPP_F08:     TCH_PNL1_PWR_EN */
	PAD_CFG_GPO(GPP_F08, 1, PLTRST),
	/* GPP_F09:     NC */
	PAD_NC(GPP_F09, NONE),
	/* GPP_F10:     PEG_SLOT_PWR_EN_N */
	PAD_CFG_GPO(GPP_F10, 0, PLTRST),
	/* GPP_F11:     MOD_TCSS2_TYP_A_VBUS_EN */
	PAD_CFG_GPO(GPP_F11, 1, DEEP),
	/* GPP_F12:     THC_I2C1_SCL_TCH_PAD */
	PAD_CFG_NF(GPP_F12, NONE, DEEP, NF8),
	/* GPP_F13:     THC_I2C1_SDA_TCH_PAD */
	PAD_CFG_NF(GPP_F13, NONE, DEEP, NF8),
	/* GPP_F14:     Not used */
	PAD_NC(GPP_F14, NONE),
	/* GPP_F15:     Not used */
	PAD_NC(GPP_F15, NONE),
	/* GPP_F16:     Not used */
	PAD_NC(GPP_F16, NONE),
	/* GPP_F17:     Not used */
	PAD_CFG_GPI_INT(GPP_F17, NONE, PLTRST, EDGE_BOTH),
	/* GPP_F18:     TCH_PAD_INT_N */
	PAD_CFG_GPI_APIC(GPP_F18, NONE, PLTRST, EDGE_SINGLE, INVERT),
	/* GPP_F19:     GPP_PRIVACY_LED_CAM2 */
	PAD_CFG_GPO(GPP_F19, 0, PLTRST),
	/* GPP_F20:     GPP_PRIVACY_LED_CAM1_CVS_HST_WAKE */
	PAD_CFG_GPO(GPP_F20, 0, PLTRST),
	/* GPP_F22:     THC1_SPI2_DSYNC */
	PAD_CFG_NF(GPP_F22, NONE, DEEP, NF3),
	/* GPP_F23:     SMC_LID */
	PAD_CFG_GPI_SCI_LOW(GPP_F23, NONE, DEEP, LEVEL),

	/* GPP_H00:     Not used */
	PAD_NC(GPP_H00, NONE),
	/* GPP_H01:     CRD_CAM_STROBE */
	PAD_CFG_GPO(GPP_H01, 0, PLTRST),
	/* GPP_H02:     DEBUG_TRACE_PNP */
	PAD_CFG_GPO(GPP_H02, 1, PLTRST),
	/* GPP_H03:     MIC MUTE */
	PAD_CFG_NF(GPP_H03, NONE, DEEP, NF1),
	/* GPP_H04:     I2C2_SDA_CAM_FLSH */
	PAD_CFG_NF(GPP_H04, NONE, DEEP, NF1),
	/* GPP_H05:     I2C2_SCL_CAM_FLSH */
	PAD_CFG_NF(GPP_H05, NONE, DEEP, NF1),
	/* GPP_H06:     I2C3_SDA_PSS */
	PAD_CFG_NF(GPP_H06, NONE, DEEP, NF1),
	/* GPP_H07:     I2C3_SCL_PSS */
	PAD_CFG_NF(GPP_H07, NONE, DEEP, NF1),
	/* GPP_H08:     UART0_BUF_RXD */
	PAD_CFG_NF(GPP_H08, NONE, DEEP, NF1),
	/* GPP_H09:     UART0_BUF_TXD */
	PAD_CFG_NF(GPP_H09, NONE, DEEP, NF1),
	/* GPP_H10:     UART0_BUF_RTS */
	PAD_CFG_NF(GPP_H10, NONE, DEEP, NF1),
	/* GPP_H11:     UART0_BUF_CTS */
	PAD_CFG_NF(GPP_H11, NONE, DEEP, NF1),
	/* GPP_H13:     CPU_C10_GATE_N_R */
	PAD_CFG_NF(GPP_H13, NONE, DEEP, NF1),
	/* GPP_H14:     NC */
	PAD_NC(GPP_H14, NONE),
	/* GPP_H15:     NC */
	PAD_NC(GPP_H15, NONE),
	/* GPP_H16:     WWAN_PWREN */
	PAD_CFG_GPO(GPP_H16, 1, PLTRST),
	/* GPP_H17:     MIC MUTE LED */
	PAD_CFG_NF(GPP_H17, NONE, DEEP, NF1),
	/* GPP_H19:     I3C0_SDA_HDR */
	PAD_CFG_NF(GPP_H19, NONE, DEEP, NF2),
	/* GPP_H20:     I3C0_SCL_HDR */
	PAD_CFG_NF(GPP_H20, NONE, DEEP, NF2),
	/* GPP_H21:     I2C1_SDA_I3C1_SDA_CAM_FLSH_CVS */
	PAD_CFG_NF(GPP_H21, NONE, DEEP, NF1),
	/* GPP_H22:     I2C1_SCL_I3C1_SCL_CAM_FLSH_CVS */
	PAD_CFG_NF(GPP_H22, NONE, DEEP, NF1),

	/* GPP_S00:     SNDW3_CLK_CODEC */
	PAD_CFG_NF(GPP_S00, NONE, DEEP, NF1),
	/* GPP_S01:     SNDW3_DATA0_CODEC */
	PAD_CFG_NF(GPP_S01, NONE, DEEP, NF1),
	/* GPP_S02:     SNDW3_DATA1_CODEC */
	PAD_CFG_NF(GPP_S02, NONE, DEEP, NF1),
	/* GPP_S03:     SNDW3_DATA2_CODEC */
	PAD_CFG_NF(GPP_S03, NONE, DEEP, NF1),
	/* GPP_S04:     SNDW2_CLK */
	PAD_CFG_NF(GPP_S04, NONE, DEEP, NF2),
	/* GPP_S05:     SNDW2_DATA0 */
	PAD_CFG_NF(GPP_S05, NONE, DEEP, NF2),
	/* GPP_S06:     SNDW1_CLK */
	PAD_CFG_NF(GPP_S06, NONE, DEEP, NF3),
	/* GPP_S07:     SNDW1_DATA0 */
	PAD_CFG_NF(GPP_S07, NONE, DEEP, NF3),

	/* GPP_V00:     PM_BATLOW_N */
	PAD_CFG_NF(GPP_V00, NONE, DEEP, NF1),
	/* GPP_V01:     BC_ACOK_MCP */
	PAD_CFG_NF(GPP_V01, NONE, DEEP, NF1),
	/* GPP_V02:     LANWAKE_N_R */
	PAD_CFG_NF(GPP_V02, NONE, DEEP, NF1),
	/* GPP_V03:     PWRBTN_MCP_N */
	PAD_CFG_NF(GPP_V03, NONE, DEEP, NF1),
	/* GPP_V04:     PM_SLP_S3_N */
	PAD_CFG_NF(GPP_V04, NONE, DEEP, NF1),
	/* GPP_V05:     PM_SLP_S4_N */
	PAD_CFG_NF(GPP_V05, NONE, DEEP, NF1),
	/* GPP_V06:     PM_SLP_A_N */
	PAD_CFG_NF(GPP_V06, NONE, DEEP, NF1),
	/* GPP_V07:     Not used */
	PAD_NC(GPP_V07, NONE),
	/* GPP_V08:     SLP_WLAN_N */
	PAD_CFG_NF(GPP_V08, NONE, DEEP, NF1),
	/* GPP_V09:     PM_SLP_S5_N */
	PAD_CFG_NF(GPP_V09, NONE, DEEP, NF1),
	/* GPP_V10:     LANPHYPC_R_N */
	PAD_CFG_NF(GPP_V10, NONE, DEEP, NF1),
	/* GPP_V11:     PM_SLP_LAN_N */
	PAD_CFG_NF(GPP_V11, NONE, DEEP, NF1),
	/* GPP_V12:     WAKE_N */
	PAD_CFG_NF(GPP_V12, NONE, DEEP, NF1),
	/* GPP_V13:     GPP_V13_CATERR_N */
	PAD_CFG_NF(GPP_V13, NONE, DEEP, NF1),
	/* GPP_V14:     GPP_V14_FORCEPR_N */
	PAD_CFG_NF(GPP_V14, NONE, DEEP, NF1),
	/* GPP_V15:     GPP_V15_THERMTRIP_N */
	PAD_CFG_NF(GPP_V15, NONE, DEEP, NF1),
	/* GPP_V16:     GPP_V16_VCCST_EN */
	PAD_CFG_NF(GPP_V16, NONE, DEEP, NF1),
	/* GPP_V17:     TCP_RT_S0IX_ENTRY_EXIT_N */
	PAD_CFG_GPO(GPP_V17, 1, DEEP),
};

/* Early pad configuration in bootblock */
static const struct pad_config early_gpio_table[] = {
	/* GPP_H08:     UART0_BUF_RXD */
	PAD_CFG_NF(GPP_H08, NONE, DEEP, NF1),
	/* GPP_H09:     UART0_BUF_TXD */
	PAD_CFG_NF(GPP_H09, NONE, DEEP, NF1),

	/* GPP_H06: I2C3_SDA_PSS */
	PAD_CFG_NF(GPP_H06, NONE, DEEP, NF1),
	/* GPP_H07: I2C3_SCL_PSS */
	PAD_CFG_NF(GPP_H07, NONE, DEEP, NF1),
	/* GPP_D15: SPI_TPM_INT_N */
	PAD_CFG_GPI_APIC(GPP_D15, NONE, PLTRST, LEVEL, INVERT),
};

/* Pad configuration in romstage */
static const struct pad_config romstage_gpio_table[] = {
	/* GPP_C00:     GPP_C0_SMBCLK */
	PAD_CFG_NF(GPP_C00, NONE, DEEP, NF1),
	/* GPP_C01:     GPP_C1_SMBDATA */
	PAD_CFG_NF(GPP_C01, NONE, DEEP, NF1),
};

const struct pad_config *variant_gpio_table(size_t *num)
{
	*num = ARRAY_SIZE(gpio_table);
	return gpio_table;
}

const struct pad_config *variant_early_gpio_table(size_t *num)
{
	*num = ARRAY_SIZE(early_gpio_table);
	return early_gpio_table;
}

/* Create the stub for romstage gpio, typically use for power sequence */
const struct pad_config *variant_romstage_gpio_table(size_t *num)
{
	*num = ARRAY_SIZE(romstage_gpio_table);
	return romstage_gpio_table;
}

static const struct cros_gpio cros_gpios[] = {
	CROS_GPIO_REC_AL(CROS_GPIO_VIRTUAL, CROS_GPIO_DEVICE0_NAME),
	CROS_GPIO_REC_AL(CROS_GPIO_VIRTUAL, CROS_GPIO_DEVICE1_NAME),
	CROS_GPIO_REC_AL(CROS_GPIO_VIRTUAL, CROS_GPIO_DEVICE2_NAME),
	CROS_GPIO_REC_AL(CROS_GPIO_VIRTUAL, CROS_GPIO_DEVICE3_NAME),
};

DECLARE_CROS_GPIOS(cros_gpios);
