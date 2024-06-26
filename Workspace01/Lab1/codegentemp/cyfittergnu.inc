/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ADC */
.set ADC_DEC__COHER, CYREG_DEC_COHER
.set ADC_DEC__CR, CYREG_DEC_CR
.set ADC_DEC__DR1, CYREG_DEC_DR1
.set ADC_DEC__DR2, CYREG_DEC_DR2
.set ADC_DEC__DR2H, CYREG_DEC_DR2H
.set ADC_DEC__GCOR, CYREG_DEC_GCOR
.set ADC_DEC__GCORH, CYREG_DEC_GCORH
.set ADC_DEC__GVAL, CYREG_DEC_GVAL
.set ADC_DEC__OCOR, CYREG_DEC_OCOR
.set ADC_DEC__OCORH, CYREG_DEC_OCORH
.set ADC_DEC__OCORM, CYREG_DEC_OCORM
.set ADC_DEC__OUTSAMP, CYREG_DEC_OUTSAMP
.set ADC_DEC__OUTSAMPH, CYREG_DEC_OUTSAMPH
.set ADC_DEC__OUTSAMPM, CYREG_DEC_OUTSAMPM
.set ADC_DEC__OUTSAMPS, CYREG_DEC_OUTSAMPS
.set ADC_DEC__PM_ACT_CFG, CYREG_PM_ACT_CFG10
.set ADC_DEC__PM_ACT_MSK, 0x01
.set ADC_DEC__PM_STBY_CFG, CYREG_PM_STBY_CFG10
.set ADC_DEC__PM_STBY_MSK, 0x01
.set ADC_DEC__SHIFT1, CYREG_DEC_SHIFT1
.set ADC_DEC__SHIFT2, CYREG_DEC_SHIFT2
.set ADC_DEC__SR, CYREG_DEC_SR
.set ADC_DEC__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DEC_M1
.set ADC_DEC__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DEC_M2
.set ADC_DEC__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DEC_M3
.set ADC_DEC__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DEC_M4
.set ADC_DEC__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DEC_M5
.set ADC_DEC__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DEC_M6
.set ADC_DEC__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DEC_M7
.set ADC_DEC__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DEC_M8
.set ADC_DSM__BUF0, CYREG_DSM0_BUF0
.set ADC_DSM__BUF1, CYREG_DSM0_BUF1
.set ADC_DSM__BUF2, CYREG_DSM0_BUF2
.set ADC_DSM__BUF3, CYREG_DSM0_BUF3
.set ADC_DSM__CLK, CYREG_DSM0_CLK
.set ADC_DSM__CR0, CYREG_DSM0_CR0
.set ADC_DSM__CR1, CYREG_DSM0_CR1
.set ADC_DSM__CR10, CYREG_DSM0_CR10
.set ADC_DSM__CR11, CYREG_DSM0_CR11
.set ADC_DSM__CR12, CYREG_DSM0_CR12
.set ADC_DSM__CR13, CYREG_DSM0_CR13
.set ADC_DSM__CR14, CYREG_DSM0_CR14
.set ADC_DSM__CR15, CYREG_DSM0_CR15
.set ADC_DSM__CR16, CYREG_DSM0_CR16
.set ADC_DSM__CR17, CYREG_DSM0_CR17
.set ADC_DSM__CR2, CYREG_DSM0_CR2
.set ADC_DSM__CR3, CYREG_DSM0_CR3
.set ADC_DSM__CR4, CYREG_DSM0_CR4
.set ADC_DSM__CR5, CYREG_DSM0_CR5
.set ADC_DSM__CR6, CYREG_DSM0_CR6
.set ADC_DSM__CR7, CYREG_DSM0_CR7
.set ADC_DSM__CR8, CYREG_DSM0_CR8
.set ADC_DSM__CR9, CYREG_DSM0_CR9
.set ADC_DSM__DEM0, CYREG_DSM0_DEM0
.set ADC_DSM__DEM1, CYREG_DSM0_DEM1
.set ADC_DSM__MISC, CYREG_DSM0_MISC
.set ADC_DSM__OUT0, CYREG_DSM0_OUT0
.set ADC_DSM__OUT1, CYREG_DSM0_OUT1
.set ADC_DSM__REF0, CYREG_DSM0_REF0
.set ADC_DSM__REF1, CYREG_DSM0_REF1
.set ADC_DSM__REF2, CYREG_DSM0_REF2
.set ADC_DSM__REF3, CYREG_DSM0_REF3
.set ADC_DSM__RSVD1, CYREG_DSM0_RSVD1
.set ADC_DSM__SW0, CYREG_DSM0_SW0
.set ADC_DSM__SW2, CYREG_DSM0_SW2
.set ADC_DSM__SW3, CYREG_DSM0_SW3
.set ADC_DSM__SW4, CYREG_DSM0_SW4
.set ADC_DSM__SW6, CYREG_DSM0_SW6
.set ADC_DSM__TR0, CYREG_NPUMP_DSM_TR0
.set ADC_DSM__TST0, CYREG_DSM0_TST0
.set ADC_DSM__TST1, CYREG_DSM0_TST1
.set ADC_Ext_CP_Clk__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ADC_Ext_CP_Clk__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ADC_Ext_CP_Clk__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK, 0x07
.set ADC_Ext_CP_Clk__INDEX, 0x00
.set ADC_Ext_CP_Clk__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_Ext_CP_Clk__PM_ACT_MSK, 0x01
.set ADC_Ext_CP_Clk__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_Ext_CP_Clk__PM_STBY_MSK, 0x01
.set ADC_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_IRQ__INTC_MASK, 0x20000000
.set ADC_IRQ__INTC_NUMBER, 29
.set ADC_IRQ__INTC_PRIOR_NUM, 7
.set ADC_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_29
.set ADC_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_theACLK__INDEX, 0x00
.set ADC_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_theACLK__PM_ACT_MSK, 0x01
.set ADC_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_theACLK__PM_STBY_MSK, 0x01

/* LCD */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU2_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC0
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU2_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC1
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU2_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU2_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC3
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU2_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC4
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU2_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC5
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU2_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC6
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT2_AG
.set LCD_LCDPort__AMUX, CYREG_PRT2_AMUX
.set LCD_LCDPort__BIE, CYREG_PRT2_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT2_BYP
.set LCD_LCDPort__CTL, CYREG_PRT2_CTL
.set LCD_LCDPort__DM0, CYREG_PRT2_DM0
.set LCD_LCDPort__DM1, CYREG_PRT2_DM1
.set LCD_LCDPort__DM2, CYREG_PRT2_DM2
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set LCD_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set LCD_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PRT, CYREG_PRT2_PRT
.set LCD_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SLW, CYREG_PRT2_SLW

/* SW1 */
.set SW1__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set SW1__0__MASK, 0x20
.set SW1__0__PC, CYREG_PRT12_PC5
.set SW1__0__PORT, 12
.set SW1__0__SHIFT, 5
.set SW1__AG, CYREG_PRT12_AG
.set SW1__BIE, CYREG_PRT12_BIE
.set SW1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SW1__BYP, CYREG_PRT12_BYP
.set SW1__DM0, CYREG_PRT12_DM0
.set SW1__DM1, CYREG_PRT12_DM1
.set SW1__DM2, CYREG_PRT12_DM2
.set SW1__DR, CYREG_PRT12_DR
.set SW1__INP_DIS, CYREG_PRT12_INP_DIS
.set SW1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SW1__MASK, 0x20
.set SW1__PORT, 12
.set SW1__PRT, CYREG_PRT12_PRT
.set SW1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SW1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SW1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SW1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SW1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SW1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SW1__PS, CYREG_PRT12_PS
.set SW1__SHIFT, 5
.set SW1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SW1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SW1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SW1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SW1__SLW, CYREG_PRT12_SLW

/* SW2 */
.set SW2__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set SW2__0__MASK, 0x10
.set SW2__0__PC, CYREG_PRT12_PC4
.set SW2__0__PORT, 12
.set SW2__0__SHIFT, 4
.set SW2__AG, CYREG_PRT12_AG
.set SW2__BIE, CYREG_PRT12_BIE
.set SW2__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SW2__BYP, CYREG_PRT12_BYP
.set SW2__DM0, CYREG_PRT12_DM0
.set SW2__DM1, CYREG_PRT12_DM1
.set SW2__DM2, CYREG_PRT12_DM2
.set SW2__DR, CYREG_PRT12_DR
.set SW2__INP_DIS, CYREG_PRT12_INP_DIS
.set SW2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SW2__MASK, 0x10
.set SW2__PORT, 12
.set SW2__PRT, CYREG_PRT12_PRT
.set SW2__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SW2__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SW2__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SW2__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SW2__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SW2__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SW2__PS, CYREG_PRT12_PS
.set SW2__SHIFT, 4
.set SW2__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SW2__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SW2__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SW2__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SW2__SLW, CYREG_PRT12_SLW

/* COL1 */
.set COL1__0__INTTYPE, CYREG_PICU3_INTTYPE1
.set COL1__0__MASK, 0x02
.set COL1__0__PC, CYREG_PRT3_PC1
.set COL1__0__PORT, 3
.set COL1__0__SHIFT, 1
.set COL1__AG, CYREG_PRT3_AG
.set COL1__AMUX, CYREG_PRT3_AMUX
.set COL1__BIE, CYREG_PRT3_BIE
.set COL1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set COL1__BYP, CYREG_PRT3_BYP
.set COL1__CTL, CYREG_PRT3_CTL
.set COL1__DM0, CYREG_PRT3_DM0
.set COL1__DM1, CYREG_PRT3_DM1
.set COL1__DM2, CYREG_PRT3_DM2
.set COL1__DR, CYREG_PRT3_DR
.set COL1__INP_DIS, CYREG_PRT3_INP_DIS
.set COL1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set COL1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set COL1__LCD_EN, CYREG_PRT3_LCD_EN
.set COL1__MASK, 0x02
.set COL1__PORT, 3
.set COL1__PRT, CYREG_PRT3_PRT
.set COL1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set COL1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set COL1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set COL1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set COL1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set COL1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set COL1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set COL1__PS, CYREG_PRT3_PS
.set COL1__SHIFT, 1
.set COL1__SLW, CYREG_PRT3_SLW

/* COL2 */
.set COL2__0__INTTYPE, CYREG_PICU3_INTTYPE3
.set COL2__0__MASK, 0x08
.set COL2__0__PC, CYREG_PRT3_PC3
.set COL2__0__PORT, 3
.set COL2__0__SHIFT, 3
.set COL2__AG, CYREG_PRT3_AG
.set COL2__AMUX, CYREG_PRT3_AMUX
.set COL2__BIE, CYREG_PRT3_BIE
.set COL2__BIT_MASK, CYREG_PRT3_BIT_MASK
.set COL2__BYP, CYREG_PRT3_BYP
.set COL2__CTL, CYREG_PRT3_CTL
.set COL2__DM0, CYREG_PRT3_DM0
.set COL2__DM1, CYREG_PRT3_DM1
.set COL2__DM2, CYREG_PRT3_DM2
.set COL2__DR, CYREG_PRT3_DR
.set COL2__INP_DIS, CYREG_PRT3_INP_DIS
.set COL2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set COL2__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set COL2__LCD_EN, CYREG_PRT3_LCD_EN
.set COL2__MASK, 0x08
.set COL2__PORT, 3
.set COL2__PRT, CYREG_PRT3_PRT
.set COL2__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set COL2__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set COL2__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set COL2__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set COL2__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set COL2__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set COL2__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set COL2__PS, CYREG_PRT3_PS
.set COL2__SHIFT, 3
.set COL2__SLW, CYREG_PRT3_SLW

/* COL3 */
.set COL3__0__INTTYPE, CYREG_PICU3_INTTYPE4
.set COL3__0__MASK, 0x10
.set COL3__0__PC, CYREG_PRT3_PC4
.set COL3__0__PORT, 3
.set COL3__0__SHIFT, 4
.set COL3__AG, CYREG_PRT3_AG
.set COL3__AMUX, CYREG_PRT3_AMUX
.set COL3__BIE, CYREG_PRT3_BIE
.set COL3__BIT_MASK, CYREG_PRT3_BIT_MASK
.set COL3__BYP, CYREG_PRT3_BYP
.set COL3__CTL, CYREG_PRT3_CTL
.set COL3__DM0, CYREG_PRT3_DM0
.set COL3__DM1, CYREG_PRT3_DM1
.set COL3__DM2, CYREG_PRT3_DM2
.set COL3__DR, CYREG_PRT3_DR
.set COL3__INP_DIS, CYREG_PRT3_INP_DIS
.set COL3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set COL3__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set COL3__LCD_EN, CYREG_PRT3_LCD_EN
.set COL3__MASK, 0x10
.set COL3__PORT, 3
.set COL3__PRT, CYREG_PRT3_PRT
.set COL3__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set COL3__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set COL3__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set COL3__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set COL3__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set COL3__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set COL3__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set COL3__PS, CYREG_PRT3_PS
.set COL3__SHIFT, 4
.set COL3__SLW, CYREG_PRT3_SLW

/* LED1 */
.set LED1__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set LED1__0__MASK, 0x01
.set LED1__0__PC, CYREG_PRT0_PC0
.set LED1__0__PORT, 0
.set LED1__0__SHIFT, 0
.set LED1__AG, CYREG_PRT0_AG
.set LED1__AMUX, CYREG_PRT0_AMUX
.set LED1__BIE, CYREG_PRT0_BIE
.set LED1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED1__BYP, CYREG_PRT0_BYP
.set LED1__CTL, CYREG_PRT0_CTL
.set LED1__DM0, CYREG_PRT0_DM0
.set LED1__DM1, CYREG_PRT0_DM1
.set LED1__DM2, CYREG_PRT0_DM2
.set LED1__DR, CYREG_PRT0_DR
.set LED1__INP_DIS, CYREG_PRT0_INP_DIS
.set LED1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED1__LCD_EN, CYREG_PRT0_LCD_EN
.set LED1__MASK, 0x01
.set LED1__PORT, 0
.set LED1__PRT, CYREG_PRT0_PRT
.set LED1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED1__PS, CYREG_PRT0_PS
.set LED1__SHIFT, 0
.set LED1__SLW, CYREG_PRT0_SLW

/* LED2 */
.set LED2__0__INTTYPE, CYREG_PICU0_INTTYPE1
.set LED2__0__MASK, 0x02
.set LED2__0__PC, CYREG_PRT0_PC1
.set LED2__0__PORT, 0
.set LED2__0__SHIFT, 1
.set LED2__AG, CYREG_PRT0_AG
.set LED2__AMUX, CYREG_PRT0_AMUX
.set LED2__BIE, CYREG_PRT0_BIE
.set LED2__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED2__BYP, CYREG_PRT0_BYP
.set LED2__CTL, CYREG_PRT0_CTL
.set LED2__DM0, CYREG_PRT0_DM0
.set LED2__DM1, CYREG_PRT0_DM1
.set LED2__DM2, CYREG_PRT0_DM2
.set LED2__DR, CYREG_PRT0_DR
.set LED2__INP_DIS, CYREG_PRT0_INP_DIS
.set LED2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED2__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED2__LCD_EN, CYREG_PRT0_LCD_EN
.set LED2__MASK, 0x02
.set LED2__PORT, 0
.set LED2__PRT, CYREG_PRT0_PRT
.set LED2__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED2__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED2__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED2__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED2__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED2__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED2__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED2__PS, CYREG_PRT0_PS
.set LED2__SHIFT, 1
.set LED2__SLW, CYREG_PRT0_SLW

/* LED3 */
.set LED3__0__INTTYPE, CYREG_PICU0_INTTYPE5
.set LED3__0__MASK, 0x20
.set LED3__0__PC, CYREG_PRT0_PC5
.set LED3__0__PORT, 0
.set LED3__0__SHIFT, 5
.set LED3__AG, CYREG_PRT0_AG
.set LED3__AMUX, CYREG_PRT0_AMUX
.set LED3__BIE, CYREG_PRT0_BIE
.set LED3__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED3__BYP, CYREG_PRT0_BYP
.set LED3__CTL, CYREG_PRT0_CTL
.set LED3__DM0, CYREG_PRT0_DM0
.set LED3__DM1, CYREG_PRT0_DM1
.set LED3__DM2, CYREG_PRT0_DM2
.set LED3__DR, CYREG_PRT0_DR
.set LED3__INP_DIS, CYREG_PRT0_INP_DIS
.set LED3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED3__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED3__LCD_EN, CYREG_PRT0_LCD_EN
.set LED3__MASK, 0x20
.set LED3__PORT, 0
.set LED3__PRT, CYREG_PRT0_PRT
.set LED3__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED3__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED3__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED3__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED3__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED3__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED3__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED3__PS, CYREG_PRT0_PS
.set LED3__SHIFT, 5
.set LED3__SLW, CYREG_PRT0_SLW

/* LED4 */
.set LED4__0__INTTYPE, CYREG_PICU0_INTTYPE6
.set LED4__0__MASK, 0x40
.set LED4__0__PC, CYREG_PRT0_PC6
.set LED4__0__PORT, 0
.set LED4__0__SHIFT, 6
.set LED4__AG, CYREG_PRT0_AG
.set LED4__AMUX, CYREG_PRT0_AMUX
.set LED4__BIE, CYREG_PRT0_BIE
.set LED4__BIT_MASK, CYREG_PRT0_BIT_MASK
.set LED4__BYP, CYREG_PRT0_BYP
.set LED4__CTL, CYREG_PRT0_CTL
.set LED4__DM0, CYREG_PRT0_DM0
.set LED4__DM1, CYREG_PRT0_DM1
.set LED4__DM2, CYREG_PRT0_DM2
.set LED4__DR, CYREG_PRT0_DR
.set LED4__INP_DIS, CYREG_PRT0_INP_DIS
.set LED4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set LED4__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set LED4__LCD_EN, CYREG_PRT0_LCD_EN
.set LED4__MASK, 0x40
.set LED4__PORT, 0
.set LED4__PRT, CYREG_PRT0_PRT
.set LED4__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set LED4__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set LED4__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set LED4__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set LED4__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set LED4__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set LED4__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set LED4__PS, CYREG_PRT0_PS
.set LED4__SHIFT, 6
.set LED4__SLW, CYREG_PRT0_SLW

/* Pot1 */
.set Pot1__0__INTTYPE, CYREG_PICU0_INTTYPE7
.set Pot1__0__MASK, 0x80
.set Pot1__0__PC, CYREG_PRT0_PC7
.set Pot1__0__PORT, 0
.set Pot1__0__SHIFT, 7
.set Pot1__AG, CYREG_PRT0_AG
.set Pot1__AMUX, CYREG_PRT0_AMUX
.set Pot1__BIE, CYREG_PRT0_BIE
.set Pot1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pot1__BYP, CYREG_PRT0_BYP
.set Pot1__CTL, CYREG_PRT0_CTL
.set Pot1__DM0, CYREG_PRT0_DM0
.set Pot1__DM1, CYREG_PRT0_DM1
.set Pot1__DM2, CYREG_PRT0_DM2
.set Pot1__DR, CYREG_PRT0_DR
.set Pot1__INP_DIS, CYREG_PRT0_INP_DIS
.set Pot1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pot1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pot1__LCD_EN, CYREG_PRT0_LCD_EN
.set Pot1__MASK, 0x80
.set Pot1__PORT, 0
.set Pot1__PRT, CYREG_PRT0_PRT
.set Pot1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pot1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pot1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pot1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pot1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pot1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pot1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pot1__PS, CYREG_PRT0_PS
.set Pot1__SHIFT, 7
.set Pot1__SLW, CYREG_PRT0_SLW

/* ROW0 */
.set ROW0__0__INTTYPE, CYREG_PICU3_INTTYPE5
.set ROW0__0__MASK, 0x20
.set ROW0__0__PC, CYREG_PRT3_PC5
.set ROW0__0__PORT, 3
.set ROW0__0__SHIFT, 5
.set ROW0__AG, CYREG_PRT3_AG
.set ROW0__AMUX, CYREG_PRT3_AMUX
.set ROW0__BIE, CYREG_PRT3_BIE
.set ROW0__BIT_MASK, CYREG_PRT3_BIT_MASK
.set ROW0__BYP, CYREG_PRT3_BYP
.set ROW0__CTL, CYREG_PRT3_CTL
.set ROW0__DM0, CYREG_PRT3_DM0
.set ROW0__DM1, CYREG_PRT3_DM1
.set ROW0__DM2, CYREG_PRT3_DM2
.set ROW0__DR, CYREG_PRT3_DR
.set ROW0__INP_DIS, CYREG_PRT3_INP_DIS
.set ROW0__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set ROW0__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set ROW0__LCD_EN, CYREG_PRT3_LCD_EN
.set ROW0__MASK, 0x20
.set ROW0__PORT, 3
.set ROW0__PRT, CYREG_PRT3_PRT
.set ROW0__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set ROW0__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set ROW0__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set ROW0__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set ROW0__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set ROW0__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set ROW0__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set ROW0__PS, CYREG_PRT3_PS
.set ROW0__SHIFT, 5
.set ROW0__SLW, CYREG_PRT3_SLW

/* ROW1 */
.set ROW1__0__INTTYPE, CYREG_PICU3_INTTYPE6
.set ROW1__0__MASK, 0x40
.set ROW1__0__PC, CYREG_PRT3_PC6
.set ROW1__0__PORT, 3
.set ROW1__0__SHIFT, 6
.set ROW1__AG, CYREG_PRT3_AG
.set ROW1__AMUX, CYREG_PRT3_AMUX
.set ROW1__BIE, CYREG_PRT3_BIE
.set ROW1__BIT_MASK, CYREG_PRT3_BIT_MASK
.set ROW1__BYP, CYREG_PRT3_BYP
.set ROW1__CTL, CYREG_PRT3_CTL
.set ROW1__DM0, CYREG_PRT3_DM0
.set ROW1__DM1, CYREG_PRT3_DM1
.set ROW1__DM2, CYREG_PRT3_DM2
.set ROW1__DR, CYREG_PRT3_DR
.set ROW1__INP_DIS, CYREG_PRT3_INP_DIS
.set ROW1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set ROW1__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set ROW1__LCD_EN, CYREG_PRT3_LCD_EN
.set ROW1__MASK, 0x40
.set ROW1__PORT, 3
.set ROW1__PRT, CYREG_PRT3_PRT
.set ROW1__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set ROW1__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set ROW1__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set ROW1__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set ROW1__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set ROW1__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set ROW1__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set ROW1__PS, CYREG_PRT3_PS
.set ROW1__SHIFT, 6
.set ROW1__SLW, CYREG_PRT3_SLW

/* ROW2 */
.set ROW2__0__INTTYPE, CYREG_PICU3_INTTYPE7
.set ROW2__0__MASK, 0x80
.set ROW2__0__PC, CYREG_PRT3_PC7
.set ROW2__0__PORT, 3
.set ROW2__0__SHIFT, 7
.set ROW2__AG, CYREG_PRT3_AG
.set ROW2__AMUX, CYREG_PRT3_AMUX
.set ROW2__BIE, CYREG_PRT3_BIE
.set ROW2__BIT_MASK, CYREG_PRT3_BIT_MASK
.set ROW2__BYP, CYREG_PRT3_BYP
.set ROW2__CTL, CYREG_PRT3_CTL
.set ROW2__DM0, CYREG_PRT3_DM0
.set ROW2__DM1, CYREG_PRT3_DM1
.set ROW2__DM2, CYREG_PRT3_DM2
.set ROW2__DR, CYREG_PRT3_DR
.set ROW2__INP_DIS, CYREG_PRT3_INP_DIS
.set ROW2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set ROW2__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set ROW2__LCD_EN, CYREG_PRT3_LCD_EN
.set ROW2__MASK, 0x80
.set ROW2__PORT, 3
.set ROW2__PRT, CYREG_PRT3_PRT
.set ROW2__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set ROW2__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set ROW2__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set ROW2__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set ROW2__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set ROW2__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set ROW2__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set ROW2__PS, CYREG_PRT3_PS
.set ROW2__SHIFT, 7
.set ROW2__SLW, CYREG_PRT3_SLW

/* ROW3 */
.set ROW3__0__INTTYPE, CYREG_PICU15_INTTYPE0
.set ROW3__0__MASK, 0x01
.set ROW3__0__PC, CYREG_IO_PC_PRT15_PC0
.set ROW3__0__PORT, 15
.set ROW3__0__SHIFT, 0
.set ROW3__AG, CYREG_PRT15_AG
.set ROW3__AMUX, CYREG_PRT15_AMUX
.set ROW3__BIE, CYREG_PRT15_BIE
.set ROW3__BIT_MASK, CYREG_PRT15_BIT_MASK
.set ROW3__BYP, CYREG_PRT15_BYP
.set ROW3__CTL, CYREG_PRT15_CTL
.set ROW3__DM0, CYREG_PRT15_DM0
.set ROW3__DM1, CYREG_PRT15_DM1
.set ROW3__DM2, CYREG_PRT15_DM2
.set ROW3__DR, CYREG_PRT15_DR
.set ROW3__INP_DIS, CYREG_PRT15_INP_DIS
.set ROW3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set ROW3__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set ROW3__LCD_EN, CYREG_PRT15_LCD_EN
.set ROW3__MASK, 0x01
.set ROW3__PORT, 15
.set ROW3__PRT, CYREG_PRT15_PRT
.set ROW3__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set ROW3__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set ROW3__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set ROW3__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set ROW3__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set ROW3__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set ROW3__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set ROW3__PS, CYREG_PRT15_PS
.set ROW3__SHIFT, 0
.set ROW3__SLW, CYREG_PRT15_SLW

/* Pin_p */
.set Pin_p__0__INTTYPE, CYREG_PICU2_INTTYPE7
.set Pin_p__0__MASK, 0x80
.set Pin_p__0__PC, CYREG_PRT2_PC7
.set Pin_p__0__PORT, 2
.set Pin_p__0__SHIFT, 7
.set Pin_p__AG, CYREG_PRT2_AG
.set Pin_p__AMUX, CYREG_PRT2_AMUX
.set Pin_p__BIE, CYREG_PRT2_BIE
.set Pin_p__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Pin_p__BYP, CYREG_PRT2_BYP
.set Pin_p__CTL, CYREG_PRT2_CTL
.set Pin_p__DM0, CYREG_PRT2_DM0
.set Pin_p__DM1, CYREG_PRT2_DM1
.set Pin_p__DM2, CYREG_PRT2_DM2
.set Pin_p__DR, CYREG_PRT2_DR
.set Pin_p__INP_DIS, CYREG_PRT2_INP_DIS
.set Pin_p__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set Pin_p__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Pin_p__LCD_EN, CYREG_PRT2_LCD_EN
.set Pin_p__MASK, 0x80
.set Pin_p__PORT, 2
.set Pin_p__PRT, CYREG_PRT2_PRT
.set Pin_p__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Pin_p__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Pin_p__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Pin_p__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Pin_p__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Pin_p__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Pin_p__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Pin_p__PS, CYREG_PRT2_PS
.set Pin_p__SHIFT, 7
.set Pin_p__SLW, CYREG_PRT2_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
