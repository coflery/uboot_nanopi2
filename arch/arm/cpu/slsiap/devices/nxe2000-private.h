/*
 * nxe2000.h - Voltage regulator driver for the NXE2000
 *
 *  Copyright (C) 2013 Nexell Co,.Ltd.
 *  Bongkwan Kook <kook@nexell.co.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_NXE2000_PRIV_H
#define __LINUX_NXE2000_PRIV_H

#define NXE2000_NUM_IRQ_REGS			4

#define NXE2000_REG_TYPE_INVALID		0x4000
#define NXE2000_REG_TYPE_INTMASK		0x4100
#define NXE2000_REG_TYPE_INTEN			0x4200


/* NXE2000 registers */
#define	NXE2000_NUM_OF_REGS				0xFF

/* System control */
#define	NXE2000_REG_LSIVER				0x00	/* Read only */
#define	NXE2000_REG_OTPVER				0x01	/* Read only */
#define	NXE2000_REG_IODAC				0x02
#define	NXE2000_REG_VINDAC				0x03
/* I2C control */
#define	NXE2000_REG_CPUCNT				0x06
/* Power control */
#define	NXE2000_REG_PSWR				0x07
#define	NXE2000_REG_PONHIS				0x09	/* Read only */
#define	NXE2000_REG_POFFHIS				0x0A	/* Read only */
#define	NXE2000_REG_WATCHDOG			0x0B
#define	NXE2000_REG_WATCHDOGCNT			0x0C	/* Read only */
#define	NXE2000_REG_PWRFUNC				0x0D
#define	NXE2000_REG_SLPCNT				0x0E
#define	NXE2000_REG_REPCNT				0x0F
#define	NXE2000_REG_PWRONTIMSET			0x10
#define	NXE2000_REG_NOETIMSETCNT		0x11
#define	NXE2000_REG_PWRIREN				0x12
#define	NXE2000_REG_PWRIRQ				0x13
#define	NXE2000_REG_PWRMON				0x14
#define	NXE2000_REG_PWRIRSEL			0x15
#define	NXE2000_REG_DC1SLP_SLOT			0x16
#define	NXE2000_REG_DC2SLP_SLOT			0x17
#define	NXE2000_REG_DC3SLP_SLOT			0x18
#define	NXE2000_REG_DC4SLP_SLOT			0x19
#define	NXE2000_REG_DC5SLP_SLOT			0x1A
#define	NXE2000_REG_LDO1SLP_SLOT		0x1B
#define	NXE2000_REG_LDO2SLP_SLOT		0x1C
#define	NXE2000_REG_LDO3SLP_SLOT		0x1D
#define	NXE2000_REG_LDO4SLP_SLOT		0x1E
#define	NXE2000_REG_LDO5SLP_SLOT		0x1F
#define	NXE2000_REG_LDO6SLP_SLOT		0x20
#define	NXE2000_REG_LDO7SLP_SLOT		0x21
#define	NXE2000_REG_LDO8SLP_SLOT		0x22
#define	NXE2000_REG_LDO9SLP_SLOT		0x23
#define	NXE2000_REG_LDO10SLP_SLOT		0x24
#define	NXE2000_REG_PSO0SLP_SLOT		0x25
#define	NXE2000_REG_PSO1SLP_SLOT		0x26
#define	NXE2000_REG_PSO2SLP_SLOT		0x27
#define	NXE2000_REG_PSO3SLP_SLOT		0x28
#define	NXE2000_REG_PSO4SLP_SLOT		0x29
#define	NXE2000_REG_LDORTC1SLP_SLOT		0x2A
/* DCDC */
#define	NXE2000_REG_DC1CTL				0x2C
#define	NXE2000_REG_DC1CTL2				0x2D
#define	NXE2000_REG_DC2CTL				0x2E
#define	NXE2000_REG_DC2CTL2				0x2F
#define	NXE2000_REG_DC3CTL				0x30
#define	NXE2000_REG_DC3CTL2				0x31
#define	NXE2000_REG_DC4CTL				0x32
#define	NXE2000_REG_DC4CTL2				0x33
#define	NXE2000_REG_DC5CTL				0x34
#define	NXE2000_REG_DC5CTL2				0x35
#define	NXE2000_REG_DC1VOL				0x36
#define	NXE2000_REG_DC2VOL				0x37
#define	NXE2000_REG_DC3VOL				0x38
#define	NXE2000_REG_DC4VOL				0x39
#define	NXE2000_REG_DC5VOL				0x3A
#define	NXE2000_REG_DC1VOL_SLP			0x3B
#define	NXE2000_REG_DC2VOL_SLP			0x3C
#define	NXE2000_REG_DC3VOL_SLP			0x3D
#define	NXE2000_REG_DC4VOL_SLP			0x3E
#define	NXE2000_REG_DC5VOL_SLP			0x3F
#define	NXE2000_REG_DCIREN				0x40	/* Enable	*/
#define	NXE2000_REG_DCIRQ				0x41	/* Mask		*/
#define	NXE2000_REG_DCIRMON				0x42	/* Status	*/
/* LDO */
#define	NXE2000_REG_LDOEN1				0x44
#define	NXE2000_REG_LDOEN2				0x45
#define	NXE2000_REG_LDODIS1				0x46
#define	NXE2000_REG_LDO1VOL				0x4C
#define	NXE2000_REG_LDO2VOL				0x4D
#define	NXE2000_REG_LDO3VOL				0x4E
#define	NXE2000_REG_LDO4VOL				0x4F
#define	NXE2000_REG_LDO5VOL				0x50
#define	NXE2000_REG_LDO6VOL				0x51
#define	NXE2000_REG_LDO7VOL				0x52
#define	NXE2000_REG_LDO8VOL				0x53
#define	NXE2000_REG_LDO9VOL				0x54
#define	NXE2000_REG_LDO10VOL			0x55
#define	NXE2000_REG_LDORTC1VOL			0x56
#define	NXE2000_REG_LDORTC2VOL			0x57
#define	NXE2000_REG_LDO1VOL_SLP			0x58
#define	NXE2000_REG_LDO2VOL_SLP			0x59
#define	NXE2000_REG_LDO3VOL_SLP			0x5A
#define	NXE2000_REG_LDO4VOL_SLP			0x5B
#define	NXE2000_REG_LDO5VOL_SLP			0x5C
#define	NXE2000_REG_LDO6VOL_SLP			0x5D
#define	NXE2000_REG_LDO7VOL_SLP			0x5E
#define	NXE2000_REG_LDO8VOL_SLP			0x5F
#define	NXE2000_REG_LDO9VOL_SLP			0x60
#define	NXE2000_REG_LDO10VOL_SLP		0x61
/* ADC */
#define	NXE2000_REG_ADCCNT1				0x64
#define	NXE2000_REG_ADCCNT2				0x65
#define	NXE2000_REG_ADCCNT3				0x66
#define	NXE2000_REG_ILIMDATAH			0x68	/* Read only */
#define	NXE2000_REG_ILIMDATAL			0x69	/* Read only */
#define	NXE2000_REG_VBATDATAH			0x6A	/* Read only */
#define	NXE2000_REG_VBATDATAL			0x6B	/* Read only */
#define	NXE2000_REG_VADPDATAH			0x6C	/* Read only */
#define	NXE2000_REG_VADPDATAL			0x6D	/* Read only */
#define	NXE2000_REG_VUSBDATAH			0x6E	/* Read only */
#define	NXE2000_REG_VUSBDATAL			0x6F	/* Read only */
#define	NXE2000_REG_VSYSDATAH			0x70	/* Read only */
#define	NXE2000_REG_VSYSDATAL			0x71	/* Read only */
#define	NXE2000_REG_VTHMDATAH			0x72	/* Read only */
#define	NXE2000_REG_VTHMDATAL			0x73	/* Read only */
#define	NXE2000_REG_AIN1DATAH			0x74	/* Read only */
#define	NXE2000_REG_AIN1DATAL			0x75	/* Read only */
#define	NXE2000_REG_AIN0DATAH			0x76	/* Read only */
#define	NXE2000_REG_AIN0DATAL			0x77	/* Read only */
#define	NXE2000_REG_ILOMMONTHL			0x78
#define	NXE2000_REG_ILOMMONTHH			0x79
#define	NXE2000_REG_VBATTHL				0x7A
#define	NXE2000_REG_VBATTHH				0x7B
#define	NXE2000_REG_VADPTHL				0x7C
#define	NXE2000_REG_VADPTHH				0x7D
#define	NXE2000_REG_VUSBTHL				0x7E
#define	NXE2000_REG_VUSBTHH				0x7F
#define	NXE2000_REG_VSYSTHL				0x80
#define	NXE2000_REG_VSYSTHH				0x81
#define	NXE2000_REG_VTHMTHL				0x82
#define	NXE2000_REG_VTHMTHH				0x83
#define	NXE2000_REG_AIN1THL				0x84
#define	NXE2000_REG_AIN1THH				0x85
#define	NXE2000_REG_AIN0THL				0x86
#define	NXE2000_REG_AIN0THH				0x87
#define	NXE2000_REG_EN_ADCIR1			0x88	/* Enable & Mask */
#define	NXE2000_REG_EN_ADCIR2			0x89	/* Enable & Mask */
#define	NXE2000_REG_EN_ADCIR3			0x8A	/* Enable & Mask */
#define	NXE2000_REG_IR_ADC1				0x8C	/* Pending */
#define	NXE2000_REG_IR_ADC2				0x8D	/* Pending */
#define	NXE2000_REG_IR_ADC3				0x8E	/* Pending */
/* GPIO */
#define	NXE2000_REG_IOSEL				0x90
#define	NXE2000_REG_IOOUT				0x91
#define	NXE2000_REG_GPEDGE1				0x92
#define	NXE2000_REG_GPEDGE2				0x93
#define	NXE2000_REG_EN_GPIR				0x94	/* Enable & Mask */
#define	NXE2000_REG_IR_GPR				0x95	/* Pending */
#define	NXE2000_REG_IR_GPF				0x96	/* Pending */
#define	NXE2000_REG_MON_IOIN			0x97	/* Status */
#define	NXE2000_REG_GPLED_FUNC			0x98
/* Interrupt */
#define	NXE2000_REG_INTPOL				0x9C
#define	NXE2000_REG_INTEN				0x9D	/* Enable & Mask */
#define	NXE2000_REG_INTMON				0x9E	/* Status */
/* RTC */
#define NXE2000_REG_SEC                 0xA0
#define NXE2000_REG_MIN                 0xA1
#define NXE2000_REG_HOUR                0xA2
#define NXE2000_REG_WEEK                0xA3 
#define NXE2000_REG_DAY                 0xA4
#define NXE2000_REG_MONTH               0xA5
#define NXE2000_REG_YEAR                0xA6
#define NXE2000_REG_RTCADJ              0xA7
#define NXE2000_REG_DAL_SEC             0xA8
#define NXE2000_REG_DAL_MIN             0xA9
#define NXE2000_REG_DAL_HOUR            0xAA
#define NXE2000_REG_DAL_DAY             0xAB
#define NXE2000_REG_DAL_MONTH           0xAC
#define NXE2000_REG_DAL_YEAR            0xAD
#define NXE2000_REG_RTCCNT1             0xAE
#define NXE2000_REG_RTCCNT2             0xAF
/* System Option */
#define	NXE2000_REG_PREVINDAC			0xB0
#define	NXE2000_REG_BATDAC				0xB1
/* Charge */
#define	NXE2000_REG_CHGCTL1				0xB3
#define	NXE2000_REG_CHGCTL2				0xB4
#define	NXE2000_REG_VSYSSET				0xB5
#define	NXE2000_REG_REGISET1			0xB6
#define	NXE2000_REG_REGISET2			0xB7
#define	NXE2000_REG_CHGISET				0xB8
#define	NXE2000_REG_TIMSET				0xB9
#define	NXE2000_REG_BATSET1				0xBA
#define	NXE2000_REG_BATSET2				0xBB
#define	NXE2000_REG_DIESET				0xBC
#define	NXE2000_REG_CHGSTATE			0xBD	/* Read only */
#define	NXE2000_REG_CHGCTL_IRFMASK		0xBE	/* Mask */
#define	NXE2000_REG_CHGSTAT_IRFMASK1	0xBF	/* Mask */
#define	NXE2000_REG_CHGSTAT_IRFMASK2	0xC0	/* Mask */
#define	NXE2000_REG_CHGERR_IRFMASK		0xC1	/* Mask */
#define	NXE2000_REG_CHGCTL_IRR			0xC2	/* Pending & Status */
#define	NXE2000_REG_CHGSTAT_IRR1		0xC3	/* Pending & Status */
#define	NXE2000_REG_CHGSTAT_IRR2		0xC4	/* Pending & Status */
#define	NXE2000_REG_CHGERR_IRR			0xC5	/* Pending & Status */
#define	NXE2000_REG_CHGCTL_MONI			0xC6	/* Read only */
#define	NXE2000_REG_CHGSTAT_MONI1		0xC7	/* Read only */
#define	NXE2000_REG_CHGSTAT_MONI2		0xC8	/* Read only */
#define	NXE2000_REG_CHGERR_MONI			0xC9	/* Read only */
#define	NXE2000_REG_CHGCTL_DETMOD1		0xCA
#define	NXE2000_REG_CHGCTL_DETMOD2		0xCB
#define	NXE2000_REG_CHGSTAT_DETMOD1		0xCC
#define	NXE2000_REG_CHGSTAT_DETMOD2		0xCD
#define	NXE2000_REG_CHGSTAT_DETMOD3		0xCE
#define	NXE2000_REG_CHGERR_DETMOD1		0xCF
#define	NXE2000_REG_CHGERR_DETMOD2		0xD0
#define	NXE2000_REG_CHGEXTIF_IRFMASK	0xD1
#define	NXE2000_REG_CHGEXTIF_IRR		0xD2
#define	NXE2000_REG_CHGCTRL_MONI		0xD3
#define	NXE2000_REG_CHGOSCCTL			0xD4
#define	NXE2000_REG_CHGOSCSCORESET1		0xD5
#define	NXE2000_REG_CHGOSCSCORESET2		0xD6
#define	NXE2000_REG_CHGOSCSCORESET3		0xD7
#define	NXE2000_REG_CHGOSCFREQSET1		0xD8
#define	NXE2000_REG_CHGOSCFREQSET2		0xD9
#define	NXE2000_REG_EXTIF_GCHGDET		0xDA
#define	NXE2000_REG_EXTIF_PCHGDET		0xDB
#define	NXE2000_REG_EXTIF_FD_EN			0xDC
#define	NXE2000_REG_EXTIF_FD_VREF		0xDD
#define	NXE2000_REG_EXTIF_SD_EN			0xDE
#define	NXE2000_REG_EXTIF_SD_VREF		0xDF
/* Fuel Gauge */
#define	NXE2000_REG_FG_CTRL				0xE0
#define	NXE2000_REG_SOC					0xE1	/* Read only */
#define	NXE2000_REG_RE_CAP_H			0xE2	/* Read only */
#define	NXE2000_REG_RE_CAP_L			0xE3	/* Read only */
#define	NXE2000_REG_FA_CAP_H			0xE4	/* Read only */
#define	NXE2000_REG_FA_CAP_L			0xE5	/* Read only */
#define	NXE2000_REG_AGE					0xE6	/* Read only */
#define	NXE2000_REG_TT_EMPTY_H			0xE7	/* Read only */
#define	NXE2000_REG_TT_EMPTY_L			0xE8	/* Read only */
#define	NXE2000_REG_TT_FULL_H			0xE9	/* Read only */
#define	NXE2000_REG_TT_FULL_L			0xEA	/* Read only */
#define	NXE2000_REG_VOLTAGE_1			0xEB	/* Read only */
#define	NXE2000_REG_VOLTAGE_0			0xEC	/* Read only */
#define	NXE2000_REG_TEMP_1				0xED	/* Read only */
#define	NXE2000_REG_TEMP_0				0xEE	/* Read only */
#define	NXE2000_REG_CC_CTRL				0xEF
#define	NXE2000_REG_CC_COUNT2			0xF0
#define	NXE2000_REG_CC_COUNT1			0xF1
#define	NXE2000_REG_CC_COUNT0			0xF2
#define	NXE2000_REG_CC_SUMREG3			0xF3
#define	NXE2000_REG_CC_SUMREG2			0xF4
#define	NXE2000_REG_CC_SUMREG1			0xF5
#define	NXE2000_REG_CC_SUMREG0			0xF6
#define	NXE2000_REG_CC_OFFREG1			0xF7
#define	NXE2000_REG_CC_OFFREG0			0xF8
#define	NXE2000_REG_CC_GAINREG1			0xF9
#define	NXE2000_REG_CC_GAINREG0			0xFA
#define	NXE2000_REG_CC_AVERREG1			0xFB	/* Read only */
#define	NXE2000_REG_CC_AVERREG0			0xFC	/* Read only */
/* ETC */
#define	NXE2000_REG_BANKSEL				0xFF


/*
 * register bit position
 */

/* PSWR */
#define	NXE2000_POS_PSWR_PSWR				(0)
#define	NXE2000_POS_PSWR_RRESET				(7)

/* PONHIS */
#define	NXE2000_POS_PONHIS_PWRONPON			(0)
#define	NXE2000_POS_PONHIS_REPWRPON			(1)
#define	NXE2000_POS_PONHIS_CHARGEPON		(2)
#define	NXE2000_POS_PONHIS_ON_EXTINPON		(3)

/* POFFHIS */
#define	NXE2000_POS_POFFHIS_PWRONPOFF		(0)
#define	NXE2000_POS_POFFHIS_TSHUTPOFF		(1)
#define	NXE2000_POS_POFFHIS_VINDETPOFF		(2)
#define	NXE2000_POS_POFFHIS_IODETPOFF		(3)
#define	NXE2000_POS_POFFHIS_SWPWRPOFF		(4)
#define	NXE2000_POS_POFFHIS_WDGPOFF			(5)
#define	NXE2000_POS_POFFHIS_DCLIMPOFF		(6)
#define	NXE2000_POS_POFFHIS_N_OEPOFF		(7)

/* WATHDOG */
#define	NXE2000_POS_WATHDOG_WDOGTIM			(0)
#define	NXE2000_POS_WATHDOG_WDOG_EN			(1)
#define	NXE2000_POS_WATHDOG_WDOGSLPEN		(2)

/* PWRFUNC */
#define	NXE2000_POS_PWRFUNC_OFFSEQ_SEL		(1)
#define	NXE2000_POS_PWRFUNC_DC1EXON_EN		(2)
#define	NXE2000_POS_PWRFUNC_DC2EXON_EN		(3)
#define	NXE2000_POS_PWRFUNC_SLP_TO_OFFSEQ	(5)

/* SLPCNT */
#define	NXE2000_POS_SLPCNT_SWPWROFF			(0)
#define	NXE2000_POS_SLPCNT_SLPENT			(4)
#define	NXE2000_POS_SLPCNT_SLPEXIT			(5)

/* REPCNT */
#define	NXE2000_POS_REPCNT_REPWRON			(0)
#define	NXE2000_POS_REPCNT_REPWRTIM			(1)
#define	NXE2000_POS_REPCNT_OFF_RESETO		(4)

/* PWRONTIMSET */
#define	NXE2000_POS_PWRONTIMSET_DIS_OFF_PWRON_TIM	(7)
#define	NXE2000_POS_PWRONTIMSET_OFF_PRESS_PWRON		(4)
#define	NXE2000_POS_PWRONTIMSET_OFF_JUDGE_PWRON		(3)
#define	NXE2000_POS_PWRONTIMSET_ON_PRESS_PWRON		(0)

/* NOETIMSET */
#define	NXE2000_POS_NOETIMSET_DIS_OFF_NOE_TIM 		(3)
#define	NXE2000_POS_NOETIMSET_OFF_JUDGE_NOE 		(2)
#define	NXE2000_POS_NOETIMSET_OFF_PRESS_NOE			(0)

/* PWRIREN */
#define	NXE2000_POS_PWRIREN_WDOG			(6)
#define	NXE2000_POS_PWRIREN_NOE_OFF			(5)
#define	NXE2000_POS_PWRIREN_PWRON_OFF 		(4)
#define	NXE2000_POS_PWRIREN_PREOT			(3)
#define	NXE2000_POS_PWRIREN_PRVINDT			(2)
#define	NXE2000_POS_PWRIREN_EXTIN			(1)
#define	NXE2000_POS_PWRIREN_PWRON			(0)

/* PWRIRQ */
#define	NXE2000_POS_PWRIRQ_WDOG				(6)
#define	NXE2000_POS_PWRIRQ_NOE_OFF			(5)
#define	NXE2000_POS_PWRIRQ_PWRON_OFF		(4)
#define	NXE2000_POS_PWRIRQ_PREOT			(3)
#define	NXE2000_POS_PWRIRQ_PRVINDT			(2)
#define	NXE2000_POS_PWRIRQ_EXTIN			(1)
#define	NXE2000_POS_PWRIRQ_PWRON			(0)

/* PWRMON */
#define	NXE2000_POS_PWRMON_PREOT			(3)
#define	NXE2000_POS_PWRMON_PRVINDT			(2)
#define	NXE2000_POS_PWRMON_EXTIN			(1)
#define	NXE2000_POS_PWRMON_PWRON			(0)

/* PWRIRSEL */
#define	NXE2000_POS_PWRIRSEL_SEL_PREOT		(3)
#define	NXE2000_POS_PWRIRSEL_SEL_PRVINDT 	(2)
#define	NXE2000_POS_PWRIRSEL_SEL_EXTIN		(1)
#define	NXE2000_POS_PWRIRSEL_SEL_PWRON		(0)

/* DC1_SLOT */
#define	NXE2000_POS_DC1SLOT_ON				(4)
#define	NXE2000_POS_DC1SLOT_SLP				(0)

/* DC2_SLOT */
#define	NXE2000_POS_DC2SLOT_ON				(4)
#define	NXE2000_POS_DC2SLOT_SLP				(0)

/* DC3_SLOT */
#define	NXE2000_POS_DC3SLOT_ON				(4)
#define	NXE2000_POS_DC3SLOT_SLP				(0)

/* LDO1_SLOT */
#define	NXE2000_POS_LDO1SLOT_ON				(4)
#define	NXE2000_POS_LDO1SLOT_SLP			(0)

/* LDO2_SLOT */
#define	NXE2000_POS_LDO2SLOT_ON				(4)
#define	NXE2000_POS_LDO2SLOT_SLP			(0)

/* LDO3_SLOT */
#define	NXE2000_POS_LDO3SLOT_ON				(4)
#define	NXE2000_POS_LDO3SLOT_SLP			(0)

/* LDO4_SLOT */
#define	NXE2000_POS_LDO4SLOT_ON				(4)
#define	NXE2000_POS_LDO4SLOT_SLP			(0)

/* LDO5_SLOT */
#define	NXE2000_POS_LDO5SLOT_ON				(4)
#define	NXE2000_POS_LDO5SLOT_SLP			(0)

/* PSO0_SLOT */
#define	NXE2000_POS_PSO0SLOT_ON				(4)
#define	NXE2000_POS_PSO0SLOT_SLP			(0)

/* PSO1_SLOT */
#define	NXE2000_POS_PSO1SLOT_ON				(4)
#define	NXE2000_POS_PSO1SLOT_SLP			(0)

/* PSO2_SLOT */
#define	NXE2000_POS_PSO2SLOT_ON				(4)
#define	NXE2000_POS_PSO2SLOT_SLP			(0)

/* PSO3_SLOT */
#define	NXE2000_POS_PSO3SLOT_ON				(4)
#define	NXE2000_POS_PSO3SLOT_SLP			(0)

/* LDORTC1_SLOT */
#define	NXE2000_POS_LDORTC1SLOT_ON			(4)
#define	NXE2000_POS_LDORTC1SLOT_SLP			(0)

/* DC1CTL, DC2CTL, DC3CTL */
#define	NXE2000_POS_DCxCTL_DCxMODE_SLP		(6)
#define	NXE2000_POS_DCxCTL_DCxMODE			(4)
#define	NXE2000_POS_DCxCTL_DCxDIS			(1)
#define	NXE2000_POS_DCxCTL_DCxEN			(0)

/* DC1CTL2, DC2CTL2, DC3CTL2 */
#define	NXE2000_POS_DCxCTL2_DCxOSC			(6)
#define	NXE2000_POS_DCxCTL2_DCxSR			(4)
#define	NXE2000_POS_DCxCTL2_DCxLIM			(1)
#define	NXE2000_POS_DCxCTL2_DCxLIMSDEN		(0)

/* DCIREN */
#define	NXE2000_POS_DCIREN_DC3LIM			(2)
#define	NXE2000_POS_DCIREN_DC2LIM			(1)
#define	NXE2000_POS_DCIREN_DC1LIM			(0)

/* DCIRQ */
#define	NXE2000_POS_DCIRQ_DC3LIM			(2)
#define	NXE2000_POS_DCIRQ_DC2LIM			(1)
#define	NXE2000_POS_DCIRQ_DC1LIM			(0)

/* DCIRMON */
#define	NXE2000_POS_DCIRMON_DC3LIM			(2)
#define	NXE2000_POS_DCIRMON_DC2LIM			(1)
#define	NXE2000_POS_DCIRMON_DC1LIM			(0)

/* LDOEN1 */
#define	NXE2000_POS_LDOEN1_LDO8EN			(7)
#define	NXE2000_POS_LDOEN1_LDO7EN			(6)
#define	NXE2000_POS_LDOEN1_LDO6EN			(5)
#define	NXE2000_POS_LDOEN1_LDO5EN			(4)
#define	NXE2000_POS_LDOEN1_LDO4EN			(3)
#define	NXE2000_POS_LDOEN1_LDO3EN			(2)
#define	NXE2000_POS_LDOEN1_LDO2EN			(1)
#define	NXE2000_POS_LDOEN1_LDO1EN			(0)

/* LDOEN2 */
#define	NXE2000_POS_LDOEN2_LDORTC2EN		(5)
#define	NXE2000_POS_LDOEN2_LDORTC1EN		(4)
#define	NXE2000_POS_LDOEN2_LDO10EN			(1)
#define	NXE2000_POS_LDOEN2_LDO9EN			(0)

/* LDODIS */
#define	NXE2000_POS_LDODIS1_LDO8DIS			(7)
#define	NXE2000_POS_LDODIS1_LDO7DIS			(6)
#define	NXE2000_POS_LDODIS1_LDO6DIS			(5)
#define	NXE2000_POS_LDODIS1_LDO5DIS			(4)
#define	NXE2000_POS_LDODIS1_LDO4DIS			(3)
#define	NXE2000_POS_LDODIS1_LDO3DIS			(2)
#define	NXE2000_POS_LDODIS1_LDO2DIS			(1)
#define	NXE2000_POS_LDODIS1_LDO1DIS			(0)

#define	NXE2000_POS_LDODIS2_LDO10DIS		(1)
#define	NXE2000_POS_LDODIS2_LDO9DIS			(0)

/* LDOECO */
#define	NXE2000_POS_LDOECO1_LDO8DIS			(7)
#define	NXE2000_POS_LDOECO1_LDO7DIS			(6)
#define	NXE2000_POS_LDOECO1_LDO6DIS			(5)
#define	NXE2000_POS_LDOECO1_LDO5DIS			(4)
#define	NXE2000_POS_LDOECO1_LDO4DIS			(3)
#define	NXE2000_POS_LDOECO1_LDO3DIS			(2)
#define	NXE2000_POS_LDOECO1_LDO2DIS			(1)
#define	NXE2000_POS_LDOECO1_LDO1DIS			(0)

/* ADCCNT1 */
#define	NXE2000_POS_ADCCNT1_AIN0SEL			(7)
#define	NXE2000_POS_ADCCNT1_AIN1SEL			(6)
#define	NXE2000_POS_ADCCNT1_VTHMSEL			(5)
#define	NXE2000_POS_ADCCNT1_VSYSSEL			(4)
#define	NXE2000_POS_ADCCNT1_VUSBSEL			(3)
#define	NXE2000_POS_ADCCNT1_VADPSEL			(2)
#define	NXE2000_POS_ADCCNT1_VBATSEL			(1)
#define	NXE2000_POS_ADCCNT1_ILIMSEL			(0)

/* ADCCNT3 */
#define	NXE2000_POS_ADCCNT3_ADRQ			(4)
#define	NXE2000_POS_ADCCNT3_ADRQ_MASK		(0x2)
	#define	NXE2000_POS_ADCCNT3_ADRQ_STOP		(0 << NXE2000_POS_ADCCNT3_ADRQ)
	#define	NXE2000_POS_ADCCNT3_ADRQ_SINGLE		(1 << NXE2000_POS_ADCCNT3_ADRQ)
	#define	NXE2000_POS_ADCCNT3_ADRQ_AUTO		(2 << NXE2000_POS_ADCCNT3_ADRQ)
	#define	NXE2000_POS_ADCCNT3_ADRQ_PROHIBIT	(3 << NXE2000_POS_ADCCNT3_ADRQ)
#define	NXE2000_POS_ADCCNT3_AVE				(3)
#define	NXE2000_POS_ADCCNT3_ADSEL			(0)
#define	NXE2000_POS_ADCCNT3_ADSEL_MASK		(0x7)
	#define	NXE2000_POS_ADCCNT3_ADSEL_LIMMON	(0 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_VBAT		(1 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_VADP		(2 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_VUSB		(3 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_VSYS		(4 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_THERBAT	(5 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_GPIO1		(6 << NXE2000_POS_ADCCNT3_ADSEL)
	#define NXE2000_POS_ADCCNT3_ADSEL_GPIO0		(7 << NXE2000_POS_ADCCNT3_ADSEL)

/* EN_ADCIR1, EN_ADCIR2, IR_ADC1, IR_ADC2 */
#define	NXE2000_POS_ADC_AIN0				(7)
#define	NXE2000_POS_ADC_AIN1				(6)
#define	NXE2000_POS_ADC_VTHM				(5)
#define	NXE2000_POS_ADC_VSYS				(4)
#define	NXE2000_POS_ADC_VUSB				(3)
#define	NXE2000_POS_ADC_VADP				(2)
#define	NXE2000_POS_ADC_VBAT				(1)
#define	NXE2000_POS_ADC_ILIM				(0)

/*  EN_ADCIR3, IR_ADC3 */
#define	NXE2000_POS_ADC_ADCEND				(0)

/* IOSEL */
#define	NXE2000_POS_IOSEL_IO03				(3)
#define	NXE2000_POS_IOSEL_IO02				(2)
#define	NXE2000_POS_IOSEL_IO01				(1)
#define	NXE2000_POS_IOSEL_IO00				(0) 

/* IOOUT */
#define	NXE2000_POS_IOOUT_IO03				(3)			// 1 : Hi-Z, 0 : Low
#define	NXE2000_POS_IOOUT_IO02				(2)
#define	NXE2000_POS_IOOUT_IO01				(1)
#define	NXE2000_POS_IOOUT_IO00				(0) 

/* GPEDGE1 */
#define	NXE2000_POS_GPEDGE1_EDGE03			(3)
#define	NXE2000_POS_GPEDGE1_EDGE02			(2)
#define	NXE2000_POS_GPEDGE1_EDGE01			(1)
#define	NXE2000_POS_GPEDGE1_EDGE00			(0)

#define	NXE2000_VAL_GPEDGE1_EDGE_MASK		(3)
#define	NXE2000_VAL_GPEDGE1_BOTH_EDGE		(3)
#define	NXE2000_VAL_GPEDGE1_FALLING_EDGE	(2)
#define	NXE2000_VAL_GPEDGE1_RISING_EDGE		(1)
#define	NXE2000_VAL_GPEDGE1_LEVEL			(0)

/* EN_GPIR */
#define	NXE2000_POS_EN_GPIR_GP03			(3)
#define	NXE2000_POS_EN_GPIR_GP02			(2)
#define	NXE2000_POS_EN_GPIR_GP01			(1)
#define	NXE2000_POS_EN_GPIR_GP00			(0)

/* IR_GPR */
#define	NXE2000_POS_IR_GPR_GP03				(3)
#define	NXE2000_POS_IR_GPR_GP02				(2)
#define	NXE2000_POS_IR_GPR_GP01				(1)
#define	NXE2000_POS_IR_GPR_GP00				(0)

/* IR_GPF */
#define	NXE2000_POS_IR_GPF_GP03				(3)
#define	NXE2000_POS_IR_GPF_GP02				(2)
#define	NXE2000_POS_IR_GPF_GP01				(1)
#define	NXE2000_POS_IR_GPF_GP00				(0)

/* MON_IOIN */
#define	NXE2000_POS_MON_IOIN_GP03			(3)
#define	NXE2000_POS_MON_IOIN_GP02			(2)
#define	NXE2000_POS_MON_IOIN_GP01			(1)
#define	NXE2000_POS_MON_IOIN_GP00			(0)

/* GPLED_FUNC */
#define	NXE2000_POS_GPLED_FUNC_GP1_LEDMODE	(6)
#define	NXE2000_POS_GPLED_FUNC_GP1_LEDFUNC	(4)
#define	NXE2000_POS_GPLED_FUNC_GP0_LEDMODE	(2)
#define	NXE2000_POS_GPLED_FUNC_GP0_LEDFUNC	(0)

/* INTPOL */
#define	NXE2000_POS_INTPOL					(0)
#define	NXE2000_VAL_INTPOL					(1)

/* INTEN */
#define	NXE2000_POS_INTEN_FGIREN			(7)
#define	NXE2000_POS_INTEN_CHGIREN			(6)
#define	NXE2000_POS_INTEN_GPIOIREN			(4)
#define	NXE2000_POS_INTEN_ADCIREN			(3)
#define	NXE2000_POS_INTEN_DCDCIREN			(1)
#define	NXE2000_POS_INTEN_SYSTEMIREN		(0)

/* INTMON */
#define	NXE2000_POS_INTMON_FGIRM			(7)
#define	NXE2000_POS_INTMON_CHGIRM			(6)
#define	NXE2000_POS_INTMON_WDGIRM			(5)
#define	NXE2000_POS_INTMON_GPIOIRM			(4)
#define	NXE2000_POS_INTMON_ADCIRM			(3)
#define	NXE2000_POS_INTMON_DCDCIRM			(1)
#define	NXE2000_POS_INTMON_SYSTEMIRM		(0)

/* PREVINDAC */
#define	NXE2000_POS_PREVINDAC				(0)

/* BATDAC */
#define	NXE2000_POS_BATDAC					(0)

/* CHGCTL1 */
#define	NXE2000_POS_CHGCTL1_CHGP			(7)
#define	NXE2000_POS_CHGCTL1_CHGCMP_DIS		(6)
#define	NXE2000_POS_CHGCTL1_NOBATOVLIM		(5)
#define	NXE2000_POS_CHGCTL1_OTG_BOOST_EN	(4)
#define	NXE2000_POS_CHGCTL1_SUSPEND			(3)
#define	NXE2000_POS_CHGCTL1_JEITAEN			(2)
#define	NXE2000_POS_CHGCTL1_VUSBCHGEN		(1)
#define	NXE2000_POS_CHGCTL1_VADPCHGEN		(0)

/* CHGCTL2 */
#define	NXE2000_POS_CHGCTL2_USB_VCONTMASK	(5)
#define	NXE2000_POS_CHGCTL2_ADP_VCONTMASK	(4)
#define	NXE2000_POS_CHGCTL2_VUSBBUCK_VTH	(2)
#define	NXE2000_POS_CHGCTL2_VADPBUCK_VTH	(0)

/* VSYSSET */
#define	NXE2000_POS_VSYSSET_PSWON			(7)
#define	NXE2000_POS_VSYSSET_VSYSSET			(4)
#define	NXE2000_POS_VSYSSET_VSYSOVSET		(0)

/* REGISET1 */
#define	NXE2000_POS_REGISET1_ILIM_ADP		(0)

/* REGISET2 */
#define	NXE2000_POS_REGISET2_SDPOVRLIM		(7)
#define	NXE2000_POS_REGISET2_SDPLIMSEL		(6)
#define	NXE2000_POS_REGISET2_ILIPORTCHGEN	(5)
#define	NXE2000_POS_REGISET2_ILIM_USB		(0)

#define	NXE2000_VAL_CURRENT_SETTING_MAX		(0x1D)		// 3000mA
#define	NXE2000_VAL_CURRENT_SETTING_MIN		(0x00)		// 100mA

/* CHGISET */
#define	NXE2000_POS_CHGISET_ICCHG			(6)
#define	NXE2000_POS_CHGISET_ICHG			(0)

#define	NXE2000_VAL_CHGISET_ICCHG_MASK		(0x3)
#define	NXE2000_VAL_CHGISET_ICHG_MASK		(0x1F)

/* TIMSET */
#define	NXE2000_POS_TIMSET_TTIMSET			(4)
#define	NXE2000_POS_TIMSET_CTIMSET			(2)
#define	NXE2000_POS_TIMSET_RTIMSET			(0)

#define	NXE2000_VAL_CTIME_1000mS			(3)
#define	NXE2000_VAL_CTIME_5000mS			(2)
#define	NXE2000_VAL_CTIME_100mS				(1)
#define	NXE2000_VAL_CTIME_500mS				(0)

/* BATSET1 */
#define	NXE2000_POS_BATSET1_CHGPON			(5)
#define	NXE2000_POS_BATSET1_VBATOVSET		(4)
#define	NXE2000_POS_BATSET1_VWEAK			(2)
#define	NXE2000_POS_BATSET1_VDEAD			(1)
#define	NXE2000_POS_BATSET1_VSHORT			(0)

/* BATSET2 */
#define	NXE2000_POS_BATSET2_VFCHG			(4)
#define	NXE2000_POS_BATSET2_VRCHG			(0)

/*  DIESET */
#define	NXE2000_POS_DIESET_DIERTNTEMP		(4)
#define	NXE2000_POS_DIESET_DIEERRTEMP		(2)
#define	NXE2000_POS_DIESET_DIESHUTTEMP		(0)

/* CHGSTATE */
#define	NXE2000_POS_CHGSTATE_USEUSB			(7)
#define	NXE2000_POS_CHGSTATE_USEADP			(6)
#define	NXE2000_POS_CHGSTATE_PWRSRC_MASK	(0xC0)

#define	NXE2000_POS_CHGSTATE_RDSTATE		(0)
#define	NXE2000_POS_CHGSTATE_RDSTATE_MASK	(0x3F)
	#define	NXE2000_VAL_CHGSTATE_CHG_RDY_VUSB	(0x11)	// Charge Ready (VUSB)
	#define	NXE2000_VAL_CHGSTATE_NO_BATT2		(0x10)	// No Battery2
	#define	NXE2000_VAL_CHGSTATE_DIE_SHUDN		(0x0C)	// Die Shutdown
	#define	NXE2000_VAL_CHGSTATE_DIE_ERR		(0x0B)	// Die Error 
	#define	NXE2000_VAL_CHGSTATE_BATT_TEMPERR	(0x0A)	// Battery Temperature Error
	#define	NXE2000_VAL_CHGSTATE_BATT_OVV		(0x09)	// Battery Over Voltage 
	#define	NXE2000_VAL_CHGSTATE_NO_BATT		(0x08)	// No Battery
	#define	NXE2000_VAL_CHGSTATE_BATT_ERR		(0x07)	// Battery Error
	#define	NXE2000_VAL_CHGSTATE_VCHG_OVER		(0x06)	// VCHG Over Voltage
	#define	NXE2000_VAL_CHGSTATE_SUSPEND		(0x05)
	#define	NXE2000_VAL_CHGSTATE_CHG_CMP		(0x04)	// Charge Complete
	#define	NXE2000_VAL_CHGSTATE_RAPID_CHG		(0x03)	// Rapid Charge
	#define	NXE2000_VAL_CHGSTATE_TRICKLE_CHG	(0x02)	// Trickle Charge
	#define	NXE2000_VAL_CHGSTATE_CHG_RDY_VADP	(0x01)	// (VADP) 
	#define	NXE2000_VAL_CHGSTATE_CHG_OFF		(0x00)

/* CHGCTRL_IRFMASK */
#define	NXE2000_POS_CHGCTRL_IRFMASK_RDSTATE	(6)
#define	NXE2000_POS_CHGCTRL_IRFMASK_WVUSB	(5)
#define	NXE2000_POS_CHGCTRL_IRFMASK_WVADP	(4)
#define	NXE2000_POS_CHGCTRL_IRFMASK_VUSBLV	(3)
#define	NXE2000_POS_CHGCTRL_IRFMASK_VADPLV	(2)
#define	NXE2000_POS_CHGCTRL_IRFMASK_VUSBDET	(1)
#define	NXE2000_POS_CHGCTRL_IRFMASK_VADPDET	(0)

/* CHGCTRL_IRFMASK1 */
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMBTEMPJTA4		(7)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMBTEMPJTA3		(6)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMBTEMPJTA2		(5)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMBTEMPJTA1		(4)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMSLPMODE			(3)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMBATOPEN			(2)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMCHGCMP			(1)
#define	NXE2000_POS_CHGSTAT_IRFMASK1_FMONCHG			(0)

/* CHGSTAT_IRFMASK2 */
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMOSCMDETINT		(7)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMOSCFDETINT3		(6)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMOSCFDETINT2		(5)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMOSCFDETINT1		(4)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMPOOR_CHGCURINT	(3)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMICRVSINT			(2)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMVOLTERMINT		(1)
#define	NXE2000_POS_CHGSTAT_IRFMASK2_FMCURTERMINT		(0)

/* CHGERR_IRFMASK */
#define	NXE2000_POS_CHGERR_IRFMASK_FMVUSBOVS		(7)
#define	NXE2000_POS_CHGERR_IRFMASK_FMVADPOVSINT		(6)
#define	NXE2000_POS_CHGERR_IRFMASK_FMRTIMOVINT		(5)
#define	NXE2000_POS_CHGERR_IRFMASK_FMTTIMOVINT		(4)
#define	NXE2000_POS_CHGERR_IRFMASK_FMVBATOVINT		(3)
#define	NXE2000_POS_CHGERR_IRFMASK_FMBTEMPERRINT	(2)
#define	NXE2000_POS_CHGERR_IRFMASK_FMDIEERRINT		(1)
#define	NXE2000_POS_CHGERR_IRFMASK_FMDIEOFFIN		(0)

/* CHGCTRL_IRR */
#define	NXE2000_POS_CHGCTRL_IRR_FRDSTATESHIFTINT	(6)	
#define	NXE2000_POS_CHGCTRL_IRR_FWVUSBSINT			(5)
#define	NXE2000_POS_CHGCTRL_IRR_FWVADPSINT			(4)
#define	NXE2000_POS_CHGCTRL_IRR_FVUSBLVSINT			(3)
#define	NXE2000_POS_CHGCTRL_IRR_FVADPLVSINT			(2)
#define	NXE2000_POS_CHGCTRL_IRR_FVUSBDETSINT		(1)
#define	NXE2000_POS_CHGCTRL_IRR_FVADPDETSINT		(0)

/* CHGSTAT_IRR1 */
#define	NXE2000_POS_CHGSTAT_IRR1_FBTEMPJTA4INT		(7)
#define	NXE2000_POS_CHGSTAT_IRR1_FBTEMPJTA3INT		(6)
#define	NXE2000_POS_CHGSTAT_IRR1_FBTEMPJTA2INT		(5)
#define	NXE2000_POS_CHGSTAT_IRR1_FBTEMPJTA1INT		(4)
#define	NXE2000_POS_CHGSTAT_IRR1_FSLPMODEINT		(3)
#define	NXE2000_POS_CHGSTAT_IRR1_FBATOPENINT		(2)
#define	NXE2000_POS_CHGSTAT_IRR1_FCHGCMPINT			(1)
#define	NXE2000_POS_CHGSTAT_IRR1_FONCHGINT			(0)

/* CHGSTAT_IRR2 */
#define	NXE2000_POS_CHGSTAT_IRR2_FOSCMDETINT		(7)
#define	NXE2000_POS_CHGSTAT_IRR2_FOSCFDETINT3		(6)
#define	NXE2000_POS_CHGSTAT_IRR2_FOSCFDETINT2		(5)
#define	NXE2000_POS_CHGSTAT_IRR2_FOSCFDETINT1		(4)
#define	NXE2000_POS_CHGSTAT_IRR2_FPOOR_CHGCURINT	(3)
#define	NXE2000_POS_CHGSTAT_IRR2_FICRVSINT			(2)
#define	NXE2000_POS_CHGSTAT_IRR2_FVOLTERMINT		(1)
#define	NXE2000_POS_CHGSTAT_IRR2_FCURTERMINT		(0)

/* CHGERR_IRR */
#define	NXE2000_POS_CHGERR_IRR_FVUSBOVSINT			(7)
#define	NXE2000_POS_CHGERR_IRR_FVADPOVSINT			(6)
#define	NXE2000_POS_CHGERR_IRR_FRTIMOVINT			(5)
#define	NXE2000_POS_CHGERR_IRR_FTTIMOVINT			(4)
#define	NXE2000_POS_CHGERR_IRR_FVBATOVINT			(3)
#define	NXE2000_POS_CHGERR_IRR_FBTEMPERRINT			(2)
#define	NXE2000_POS_CHGERR_IRR_FDIEERRINT			(1)
#define	NXE2000_POS_CHGERR_IRR_FDIEOFFINT			(0)

/* CHGCTRL_MONI */
#define	NXE2000_POS_CHGCTRL_MONI_RDSTATESHIFT		(6)
#define	NXE2000_POS_CHGCTRL_MONI_WVUSBSINT			(5)
#define	NXE2000_POS_CHGCTRL_MONI_WVADPSINT			(4)
#define	NXE2000_POS_CHGCTRL_MONI_VUSBLVSINT			(3)
#define	NXE2000_POS_CHGCTRL_MONI_VADPLVSINT			(2)
#define	NXE2000_POS_CHGCTRL_MONI_VUSBDETSINT		(1)
#define	NXE2000_POS_CHGCTRL_MONI_VADPDETSINT		(0)

/* CHGSTAT_MONI1 */
#define	NXE2000_POS_CHGSTAT_MONI1_BTEMPJTA4INT		(7)
#define	NXE2000_POS_CHGSTAT_MONI1_BTEMPJTA3INT		(6)
#define	NXE2000_POS_CHGSTAT_MONI1_BTEMPJTA2INT		(5)
#define	NXE2000_POS_CHGSTAT_MONI1_BTEMPJTA1INT		(4)
#define	NXE2000_POS_CHGSTAT_MONI1_SLPMODEINT		(3)
#define	NXE2000_POS_CHGSTAT_MONI1_BATOPENINT		(2)
#define	NXE2000_POS_CHGSTAT_MONI1_CHGCMPINT			(1)
#define	NXE2000_POS_CHGSTAT_MONI1_ONCHGINT			(0)

/* CHGSTAT_MONI2 */
#define	NXE2000_POS_CHGSTAT_MONI2_OSCMDETINT		(7)
#define	NXE2000_POS_CHGSTAT_MONI2_OSCFDETINT3		(6)
#define	NXE2000_POS_CHGSTAT_MONI2_OSCFDETINT2		(5)
#define	NXE2000_POS_CHGSTAT_MONI2_OSCFDETINT1		(4)
#define	NXE2000_POS_CHGSTAT_MONI2_POOR_CHGCURINT	(3)
#define	NXE2000_POS_CHGSTAT_MONI2_ICRVSINT			(2)
#define	NXE2000_POS_CHGSTAT_MONI2_VOLTERMINT		(1)
#define	NXE2000_POS_CHGSTAT_MONI2_CURTERMINT		(0)

/* CHGERR_MONI */
#define	NXE2000_POS_CHGERR_MONI_VUSBOVSINT			(7)
#define	NXE2000_POS_CHGERR_MONI_VADPOVSINT			(6)
#define	NXE2000_POS_CHGERR_MONI_RTIMOVINT			(5)
#define	NXE2000_POS_CHGERR_MONI_TTIMOVINT			(4)
#define	NXE2000_POS_CHGERR_MONI_VBATOVINT			(3)
#define	NXE2000_POS_CHGERR_MONI_BTEMPERRINT			(2)
#define	NXE2000_POS_CHGERR_MONI_DIEERRINT			(1)
#define	NXE2000_POS_CHGERR_MONI_DIEOFFINT			(0)

/* CHGCTRL_DETMOD1 */
#define	NXE2000_POS_CHGCTRL_DETMOD1_VUSBLVSINT		(3)
#define	NXE2000_POS_CHGCTRL_DETMOD1_VADPLVSINT		(2)
#define	NXE2000_POS_CHGCTRL_DETMOD1_VUSBDETSINT		(1)
#define	NXE2000_POS_CHGCTRL_DETMOD1_VADPDETSINT		(0)

/* CHGCTRL_DETMOD2 */
#define	NXE2000_POS_CHGCTRL_DETMOD2_WVUSBSINT		(2)
#define	NXE2000_POS_CHGCTRL_DETMOD2_WVADPSINT		(0)

/* CHGSTAT_DETMOD1 */
#define	NXE2000_POS_CHGSTAT_DETMOD1_SLPMODEINT		(6)
#define	NXE2000_POS_CHGSTAT_DETMOD1_BATOPENINT		(4)
#define	NXE2000_POS_CHGSTAT_DETMOD1_CHGCMPINT		(2)
#define	NXE2000_POS_CHGSTAT_DETMOD1_ONCHGINT		(0)

/* CHGSTAT_DETMOD2 */
#define	NXE2000_POS_CHGSTAT_DETMOD2_BTEMPJTA4INT	(6)
#define	NXE2000_POS_CHGSTAT_DETMOD2_BTEMPJTA3INT	(4)
#define	NXE2000_POS_CHGSTAT_DETMOD2_BTEMPJTA2INT	(2)
#define	NXE2000_POS_CHGSTAT_DETMOD2_BTEMPJTA1INT	(0)

/* CHGSTAT_DETMOD3 */
#define	NXE2000_POS_CHGSTAT_DETMOD3_POOR_CHGCURINT	(6)
#define	NXE2000_POS_CHGSTAT_DETMOD3_ICRVSINT		(4)
#define	NXE2000_POS_CHGSTAT_DETMOD3_VOLTERMINT		(2)
#define	NXE2000_POS_CHGSTAT_DETMOD3_CURTERMINT		(0)

/* CHGERR_DETMOD1 */
#define	NXE2000_POS_CHGERR_DETMOD1_VBATOVINT		(6)
#define	NXE2000_POS_CHGERR_DETMOD1_BTEMPERRINT		(4)
#define	NXE2000_POS_CHGERR_DETMOD1_DIEERRINT		(2)
#define	NXE2000_POS_CHGERR_DETMOD1_DIEOFFINT		(0)

/* CHGERR_DETMOD2 */
#define	NXE2000_POS_CHGERR_DETMOD2_MODVUSBOVSINT	(6)
#define	NXE2000_POS_CHGERR_DETMOD2_MODVADPOVSINT	(4)
#define	NXE2000_POS_CHGERR_DETMOD2_MODRTIMOVINT		(2)
#define	NXE2000_POS_CHGERR_DETMOD2_MODTTIMOVINT		(0)

/* CHGOSCCTL */
#define	NXE2000_POS_CHGOSCCTL_OSCFREQON4			(7)
#define	NXE2000_POS_CHGOSCCTL_OSCFREQON3			(6)
#define	NXE2000_POS_CHGOSCCTL_OSCFREQON2			(5)
#define	NXE2000_POS_CHGOSCCTL_OSCFREQON1			(4)
#define	NXE2000_POS_CHGOSCCTL_OSCMODESEL			(2)
#define	NXE2000_POS_CHGOSCCTL_OSCERROFF				(1)
#define	NXE2000_POS_CHGOSCCTL_OSCMODEON				(0)

/* CHGOSCSCORERESET1 */
#define	NXE2000_POS_CHGOSCSCORERESET1_F34HSEL		(6)
#define	NXE2000_POS_CHGOSCSCORERESET1_F2HSEL		(4)
#define	NXE2000_POS_CHGOSCSCORERESET1_F1SEL			(2)
#define	NXE2000_POS_CHGOSCSCORERESET1_MHSEL 		(0)

/* CHGOSCSCORERESET2 */
#define	NXE2000_POS_CHGOSCSCORERESET2_F34PMSEL		(6)
#define	NXE2000_POS_CHGOSCSCORERESET2_F2PMSEL		(4)
#define	NXE2000_POS_CHGOSCSCORERESET2_F1PMSEL		(2)
#define	NXE2000_POS_CHGOSCSCORERESET2_MPMSEL		(0)

/* CHGOSCSCORERESET3 */
#define	NXE2000_POS_CHGOSCSCORERESET3_F3PMMOD		(7)
#define	NXE2000_POS_CHGOSCSCORERESET3_F2PMMOD		(6)
#define	NXE2000_POS_CHGOSCSCORERESET3_F1PMMOD		(5)
#define	NXE2000_POS_CHGOSCSCORERESET3_MPMMOD		(4)
#define	NXE2000_POS_CHGOSCSCORERESET3_F34HMOD		(3)
#define	NXE2000_POS_CHGOSCSCORERESET3_F2HMOD		(2)
#define	NXE2000_POS_CHGOSCSCORERESET3_F1HMOD		(1)
#define	NXE2000_POS_CHGOSCSCORERESET3_MHMOD			(0)

/* CHGOSCFREQSET1 */
#define	NXE2000_POS_CHGOSCFREQSET1_F3DIS		(6)
#define	NXE2000_POS_CHGOSCFREQSET1_F2TH 		(0)

/* CHGOSCFREQSET2 */
#define	NXE2000_POS_CHGOSCFREQSET2_F4TIM		(4)
#define	NXE2000_POS_CHGOSCFREQSET2_F4TH			(2)
#define	NXE2000_POS_CHGOSCFREQSET2_F3TH			(0)

/* EXTIF_GCHGDET */
#define	NXE2000_POS_GCHGDET_DCD_TIMEOUT			(7)
#define	NXE2000_POS_GCHGDET_IRP					(6)
#define	NXE2000_POS_GCHGDET_VBUS_TYPE			(4)
	#define	NXE2000_GCHGDET_VBUS_TYPE_MASK			(0x3)
	#define NXE2000_GCHGDET_VBUS_TYPE_SDP			(0x0)
	#define NXE2000_GCHGDET_VBUS_TYPE_CDP			(0x1)
	#define NXE2000_GCHGDET_VBUS_TYPE_DCP			(0x2)
	#define NXE2000_GCHGDET_VBUS_TYPE_OTHER			(0x3)
#define NXE2000_POS_GCHGDET_GC_DET				(2)
	#define NXE2000_GCHGDET_GC_DET_MASK			    (0x3)
	#define NXE2000_GCHGDET_GC_DET_IDLE				(0x0)
	#define NXE2000_GCHGDET_GC_DET_DETECTING		(0x1)
	#define NXE2000_GCHGDET_GC_DET_COMPLETE			(0x2)
	#define NXE2000_GCHGDET_GC_DET_RESERVED			(0x3)
#define	NXE2000_POS_GCHGDET_PDET_RESULT			(1)
#define	NXE2000_POS_GCHGDET_DET_RESTART			(0)

/* EXTIF_PCHGDET */
#define NXE2000_POS_PCHGDET_PC_DET				(2)
	#define NXE2000_PCHGDET_PC_DET_MASK			    (0x3)
	#define NXE2000_PCHGDET_PC_DET_IDLE				(0x0)
	#define NXE2000_PCHGDET_PC_DET_DETECTING		(0x1)
	#define NXE2000_PCHGDET_PC_DET_COMPLETE			(0x2)
	#define NXE2000_PCHGDET_PC_DET_RESERVED			(0x3)

/* FG_CTRL */
#define	NXE2000_POS_FG_CTRL_SRST0			(7)
#define	NXE2000_POS_FG_CTRL_SRST1			(6)
#define	NXE2000_POS_FG_CTRL_FG_ACC			(4)
#define	NXE2000_POS_FG_CTRL_FG_EN			(0)

/* AGE */
#define	NXE2000_POS_AGE_AGEFLG				(7)
#define	NXE2000_POS_AGE_AGE					(0)

/* CC_CTRL */
#define	NXE2000_POS_CC_EN					(4)
#define	NXE2000_POS_CC_SFTRST				(3)
#define	NXE2000_POS_CC_CAL_REQ				(1)
#define	NXE2000_POS_CC_PAUSE				(0)


/* Charger */
enum {CHARGER_ENABLE, CHARGER_DISABLE};

enum {POWER_OFF, POWER_ON};

enum {
	STATE_CHARGING  = 0,
	STATE_POWER_OFF,
	STATE_BOOT,
};

enum {
    BOOT_SRC_VUSB   = 1,
    BOOT_SRC_KEY,
    BOOT_SRC_BOTH,
};

enum {
    BOOT_SRC_POS_VUSB   = 0,
    BOOT_SRC_POS_KEY,
};

/* Nexell 2000 regulator ids */
enum {
	NXE2000_LDO1 = 0,
	NXE2000_LDO2,
	NXE2000_LDO3,
	NXE2000_LDO4,
	NXE2000_LDO5,
	NXE2000_LDO6,
	NXE2000_LDO7,
	NXE2000_LDO8,
	NXE2000_LDO9,
	NXE2000_LDO10,
	NXE2000_LDORTC1,
	NXE2000_LDORTC2,
	NXE2000_BUCK1,		/* DCDC1 */
	NXE2000_BUCK2,		/* DCDC2 */
	NXE2000_BUCK3,		/* DCDC3 */
	NXE2000_BUCK4,		/* DCDC4 */
	NXE2000_BUCK5,		/* DCDC5 */
	NXE2000_REG_MAX,
};

/*
 * platform device data
 */
struct nxe2000_power {
	int		i2c_bus;
	int		i2c_addr;
	int		support_policy;
	int		warm_reset;
};

extern u8 nxe2000_get_ldo_step(u8 ldo_num, int want_vol);
extern u8 nxe2000_get_dcdc_step(u8 ldo_num, int want_vol);
extern int nxe2000_set_vol(struct pmic *p, int pwr_src, int set_uV, int pwr_on);

extern int power_nxe2000_fg_init(unsigned char bus);
extern int power_nxe2000_bat_init(unsigned char bus);
extern int power_nxe2000_muic_init(unsigned int bus);

extern int power_pmic_init(unsigned char bus);
extern int power_pmic_function_init(void);
extern int power_battery_check(int skip, void (*bd_display_run)(char *, int, int));

extern int bd_pmic_init(void);

#endif /*  __LINUX_NXE2000_PRIV_H */
