/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __OPTIPLEX_3050_GPIO_H__
#define __OPTIPLEX_3050_GPIO_H__

static const struct pad_config gpio_table[] = {

	/* ------- GPIO Community 0 ------- */

	/* ------- GPIO Group GPP_A ------- */
	PAD_CFG_NF(GPP_A0, UP_20K, PLTRST, NF1),			/* RCIN# */
	PAD_CFG_NF(GPP_A1, UP_20K, PLTRST, NF1),			/* LAD0 */
	PAD_CFG_NF(GPP_A2, UP_20K, PLTRST, NF1),			/* LAD1 */
	PAD_CFG_NF(GPP_A3, UP_20K, PLTRST, NF1),			/* LAD2 */
	PAD_CFG_NF(GPP_A4, UP_20K, PLTRST, NF1),			/* LAD3 */
	PAD_CFG_NF(GPP_A5, NONE, PLTRST, NF1),				/* LFRAME# */
	PAD_CFG_NF(GPP_A6, NONE, PLTRST, NF1),				/* SERIRQ */
	PAD_CFG_GPI_TRIG_OWN(GPP_A7, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1),				/* CLKRUN# */
	PAD_CFG_NF(GPP_A9, NONE, PLTRST, NF1),				/* CLKOUT_LPC0 */
	PAD_CFG_NF(GPP_A10, NONE, PLTRST, NF1),				/* CLKOUT_LPC1 */
	PAD_CFG_NF(GPP_A11, UP_20K, DEEP, NF1),				/* PME# */
	PAD_CFG_GPO(GPP_A12, 0, PLTRST),				/* GPIO */
	PAD_CFG_NF(GPP_A13, NONE, PLTRST, NF1),				/* SUSWARN#/SUSPWRDNACK */
	PAD_CFG_GPI_TRIG_OWN(GPP_A14, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_A15, UP_20K, PLTRST, NF1),			/* SUS_ACK# */
	PAD_CFG_GPO(GPP_A16, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A17, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A18, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A19, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A20, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A21, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A22, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_A23, 0, PLTRST),				/* GPIO */

	/* ------- GPIO Group GPP_B ------- */
	PAD_CFG_GPO(GPP_B0, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_B1, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_B2, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_B3, 1, RSMRST),					/* GPIO (ME_CNTL, B3 -> LOW => HDA_SDO -> HIGH) */
	PAD_CFG_GPI_TRIG_OWN(GPP_B4, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_B5, 1, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_B6, 1, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_B7, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B8, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_B9, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_B10, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_B11, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_B12, NONE, PLTRST, NF1),				/* SLP_S0# */
	PAD_CFG_NF(GPP_B13, NONE, PLTRST, NF1),				/* PLTRST# */
	PAD_CFG_NF(GPP_B14, DN_20K, PLTRST, NF1),			/* SPKR */
	PAD_CFG_GPO(GPP_B15, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_B16, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_B17, 0, PLTRST),				/* GPIO */
	PAD_CFG_NF(GPP_B18, DN_20K, DEEP, NF1),				/* GSPIO_MOSI */
	PAD_CFG_GPO(GPP_B19, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_B20, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_B21, 0, DEEP),					/* GPIO */
	PAD_CFG_NF(GPP_B22, DN_20K, DEEP, NF1),				/* GSPI1_MOSI */
	PAD_CFG_NF(GPP_B23, DN_20K, DEEP, NF2),				/* PCHHOT# */

	/* ------- GPIO Community 1 ------- */

	/* ------- GPIO Group GPP_C ------- */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),				/* SMBCLK */
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),				/* SMBDATA */
	PAD_CFG_GPI_TRIG_OWN(GPP_C2, DN_20K, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_C3, NONE, PLTRST, NF1),				/* SML0CLK */
	PAD_CFG_NF(GPP_C4, NONE, PLTRST, NF1),				/* SML0DATA */
	PAD_CFG_GPI_TRIG_OWN(GPP_C5, DN_20K, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_C6, NONE, DEEP, NF1),				/* SML1CLK */
	PAD_CFG_NF(GPP_C7, NONE, DEEP, NF1),				/* SML1DATA */
	PAD_CFG_NF(GPP_C8, NONE, DEEP, NF1),				/* UART0_RXD */
	PAD_CFG_NF(GPP_C9, NONE, DEEP, NF1),				/* UART0_TXD */
	PAD_CFG_GPO(GPP_C10, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C11, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C12, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C13, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C14, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C15, 0, PLTRST),				/* GPIO */
	PAD_CFG_NF(GPP_C16, NONE, PLTRST, NF1),				/* I2C0_SDA */
	PAD_CFG_NF(GPP_C17, NONE, PLTRST, NF1),				/* I2C0_SCL */
	PAD_CFG_GPO(GPP_C18, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C19, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C20, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C21, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_C22, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPI_SCI(GPP_C23, NONE, DEEP, EDGE_SINGLE, INVERT),	/* GPIO */

	/* ------- GPIO Group GPP_D ------- */
	PAD_CFG_GPO(GPP_D0, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D1, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D2, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D3, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D4, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_D5, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_D6, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_D7, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D8, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D9, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_D10, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D11, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D12, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D13, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D14, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D15, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D16, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D17, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D18, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D19, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D20, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D21, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D22, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_D23, 0, PLTRST),				/* GPIO */

	/* ------- GPIO Group GPP_E ------- */
	PAD_CFG_NF(GPP_E0, NONE, DEEP, NF1),				/* SATAXPCIE0 */
	PAD_CFG_NF(GPP_E1, NONE, DEEP, NF1),				/* SATAXPCIE1 */
	PAD_CFG_NF(GPP_E2, NONE, DEEP, NF1),				/* SATAXPCIE2 */
	PAD_CFG_GPO(GPP_E3, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_E4, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_E5, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_E6, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_E7, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_E8, NONE, PLTRST, NF1),				/* SATA_LED# */
	PAD_CFG_NF(GPP_E9, UP_20K, PLTRST, NF1),			/* USB_OC0# */
	PAD_CFG_NF(GPP_E10, UP_20K, PLTRST, NF1),			/* USB_OC1# */
	PAD_CFG_NF(GPP_E11, UP_20K, PLTRST, NF1),			/* USB_OC2# */
	PAD_CFG_NF(GPP_E12, UP_20K, PLTRST, NF1),			/* USB_OC3# */

	/* ------- GPIO Group GPP_F ------- */
	PAD_CFG_NF(GPP_F0, NONE, DEEP, NF1),				/* SATAXPCIE3 */
	PAD_CFG_NF(GPP_F1, NONE, DEEP, NF1),				/* SATAXPCIE4 */
	PAD_CFG_NF(GPP_F2, NONE, DEEP, NF1),				/* SATAXPCIE5 */
	PAD_CFG_NF(GPP_F3, NONE, DEEP, NF1),				/* SATAXPCIE6 */
	PAD_CFG_NF(GPP_F4, NONE, DEEP, NF1),				/* SATAXPCIE7 */
	PAD_CFG_GPI_TRIG_OWN(GPP_F5, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_F6, NONE, RSMRST, NF1),				/* SATA_DEVSLP4 */
	PAD_CFG_GPO(GPP_F7, 1, PLTRST),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F8, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_F9, 0, RSMRST),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F10, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F11, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F12, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_F13, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_F14, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_NF(GPP_F15, UP_20K, DEEP, NF1),				/* USB_OC4# */
	PAD_CFG_NF(GPP_F16, UP_20K, DEEP, NF1),				/* USB_OC5# */
	PAD_CFG_NF(GPP_F17, UP_20K, PLTRST, NF1),			/* USB_OC6# */
	PAD_CFG_TERM_GPO(GPP_F18, 0, UP_20K, DEEP),			/* GPIO */
	PAD_CFG_GPO(GPP_F19, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_F20, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_F21, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_F22, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_F23, 1, RSMRST),				/* GPIO */

	/* ------- GPIO Group GPP_G ------- */
	PAD_CFG_GPI_TRIG_OWN(GPP_G0, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G1, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G2, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G3, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G4, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G5, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G6, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G7, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G8, NONE, PLTRST, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_G9, 1, PLTRST),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G10, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G11, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_G12, 1, DEEP),					/* GPIO */
	PAD_CFG_GPI_TRIG_OWN(GPP_G13, NONE, DEEP, OFF, ACPI),		/* GPIO */
	PAD_CFG_GPO(GPP_G14, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G15, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G16, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G17, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G18, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_G19, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G20, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_G21, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G22, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_G23, 0, PLTRST),				/* GPIO */

	/* ------- GPIO Group GPP_H ------- */
	PAD_CFG_GPO(GPP_H0, 0, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_H1, 1, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H2, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H3, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H4, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H5, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H6, 1, DEEP),					/* GPIO */
	PAD_CFG_GPO(GPP_H7, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H8, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H9, 0, PLTRST),					/* GPIO */
	PAD_CFG_GPO(GPP_H10, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H11, 0, PLTRST),				/* GPIO */
	PAD_CFG_TERM_GPO(GPP_H12, 1, DN_20K, DEEP),			/* GPIO */
	PAD_CFG_GPO(GPP_H13, 1, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H14, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H15, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H16, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H17, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H18, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H19, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H20, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H21, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H22, 0, PLTRST),				/* GPIO */
	PAD_CFG_GPO(GPP_H23, 0, PLTRST),				/* GPIO */

	/* ------- GPIO Community 2 ------- */

	/* -------- GPIO Group GPD -------- */
	PAD_CFG_NF(GPD0, NONE, RSMRST, NF1),				/* BATLOW# */
	PAD_CFG_GPO(GPD1, 0, PWROK),					/* GPIO */
	PAD_CFG_NF(GPD2, NONE, RSMRST, NF1),				/* LAN_WAKE# */
	PAD_CFG_NF(GPD3, UP_20K, RSMRST, NF1),				/* PWRBTN# */
	PAD_CFG_NF(GPD4, NONE, RSMRST, NF1),				/* SLP_S3# */
	PAD_CFG_NF(GPD5, NONE, RSMRST, NF1),				/* SLP_S4# */
	PAD_CFG_NF(GPD6, NONE, RSMRST, NF1),				/* SLP_A# */
	PAD_CFG_GPO(GPD7, 1, RSMRST),					/* GPIO */
	PAD_CFG_NF(GPD8, NONE, RSMRST, NF1),				/* SUSCLK */
	PAD_CFG_NF(GPD9, NONE, RSMRST, NF1),				/* SLP_WLAN# */
	PAD_CFG_NF(GPD10, NONE, RSMRST, NF1),				/* SLP_S5# */
	PAD_CFG_GPO(GPD11, 1, RSMRST),					/* GPIO */

	/* ------- GPIO Community 3 ------- */

	/* ------- GPIO Group GPP_I ------- */
	PAD_CFG_NF(GPP_I0, NONE, PLTRST, NF1),				/* DDPB_HPD0 */
	PAD_CFG_NF(GPP_I1, NONE, PLTRST, NF1),				/* DDPC_HPD1 */
	PAD_CFG_NF(GPP_I2, NONE, PLTRST, NF1),				/* DDPD_HPD2 */
	PAD_CFG_NF(GPP_I3, NONE, PLTRST, NF1),				/* DDPE_HPD3 */
	PAD_CFG_NF(GPP_I4, NONE, PLTRST, NF1),				/* EDP_HPD */
	PAD_CFG_NF(GPP_I5, NONE, PLTRST, NF1),				/* DDPB_CTRLCLK */
	PAD_CFG_NF(GPP_I6, DN_20K, PLTRST, NF1),			/* DDPB_CTRLDATA */
	PAD_CFG_NF(GPP_I7, NONE, PLTRST, NF1),				/* DDPC_CTRLCLK */
	PAD_CFG_NF(GPP_I8, DN_20K, PLTRST, NF1),			/* DDPC_CTRLDATA */
	PAD_CFG_NF(GPP_I9, NONE, PLTRST, NF1),				/* DDPD_CTRLCLK */
	PAD_CFG_NF(GPP_I10, DN_20K, PLTRST, NF1),			/* DDPD_CTRLDATA */
};

#endif
