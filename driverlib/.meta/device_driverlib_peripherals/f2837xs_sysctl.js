let SysCtl_PeripheralPCLOCKCR = [
	{ name: "SYSCTL_PERIPH_CLK_CLA1", displayName: "CLA1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_DMA", displayName: "DMA clock" },
	{ name: "SYSCTL_PERIPH_CLK_TIMER0", displayName: "CPUTIMER0 clock" },
	{ name: "SYSCTL_PERIPH_CLK_TIMER1", displayName: "CPUTIMER1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_TIMER2", displayName: "CPUTIMER2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_HRPWM", displayName: "HRPWM clock" },
	{ name: "SYSCTL_PERIPH_CLK_TBCLKSYNC", displayName: "TBCLKSYNC clock" },
	{ name: "SYSCTL_PERIPH_CLK_EMIF1", displayName: "EMIF1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EMIF2", displayName: "EMIF2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM1", displayName: "EPWM1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM2", displayName: "EPWM2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM3", displayName: "EPWM3 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM4", displayName: "EPWM4 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM5", displayName: "EPWM5 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM6", displayName: "EPWM6 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM7", displayName: "EPWM7 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM8", displayName: "EPWM8 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM9", displayName: "EPWM9 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM10", displayName: "EPWM10 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM11", displayName: "EPWM11 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EPWM12", displayName: "EPWM12 clock" },
	{ name: "SYSCTL_PERIPH_CLK_ECAP1", displayName: "ECAP1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_ECAP2", displayName: "ECAP2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_ECAP3", displayName: "ECAP3 clock" },
	{ name: "SYSCTL_PERIPH_CLK_ECAP4", displayName: "ECAP4 clock" },
	{ name: "SYSCTL_PERIPH_CLK_ECAP5", displayName: "ECAP5 clock" },
	{ name: "SYSCTL_PERIPH_CLK_ECAP6", displayName: "ECAP6 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EQEP1", displayName: "EQEP1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EQEP2", displayName: "EQEP2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_EQEP3", displayName: "EQEP3 clock" },
	{ name: "SYSCTL_PERIPH_CLK_SD1", displayName: "SD1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_SD2", displayName: "SD2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_SCIA", displayName: "SCI_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_SCIB", displayName: "SCI_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_SCIC", displayName: "SCI_C clock" },
	{ name: "SYSCTL_PERIPH_CLK_SCID", displayName: "SCI_D clock" },
	{ name: "SYSCTL_PERIPH_CLK_SPIA", displayName: "SPI_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_SPIB", displayName: "SPI_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_SPIC", displayName: "SPI_C clock" },
	{ name: "SYSCTL_PERIPH_CLK_I2CA", displayName: "I2C_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_I2CB", displayName: "I2C_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_CANA", displayName: "CAN_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_CANB", displayName: "CAN_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_MCBSPA", displayName: "MCBSP_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_MCBSPB", displayName: "MCBSP_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_USBA", displayName: "USB_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_UPPA", displayName: "UPP_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_ADCA", displayName: "ADC_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_ADCB", displayName: "ADC_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_ADCC", displayName: "ADC_C clock" },
	{ name: "SYSCTL_PERIPH_CLK_ADCD", displayName: "ADC_D clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS1", displayName: "CMPSS1 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS2", displayName: "CMPSS2 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS3", displayName: "CMPSS3 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS4", displayName: "CMPSS4 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS5", displayName: "CMPSS5 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS6", displayName: "CMPSS6 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS7", displayName: "CMPSS7 clock" },
	{ name: "SYSCTL_PERIPH_CLK_CMPSS8", displayName: "CMPSS8 clock" },
	{ name: "SYSCTL_PERIPH_CLK_DACA", displayName: "DAC_A clock" },
	{ name: "SYSCTL_PERIPH_CLK_DACB", displayName: "DAC_B clock" },
	{ name: "SYSCTL_PERIPH_CLK_DACC", displayName: "DAC_C clock" },
]
let SysCtl_PeripheralSOFTPRES = [
	{ name: "SYSCTL_PERIPH_RES_CPU1CLA1", displayName: "Reset CPU1_CLA1 clock" },
	{ name: "SYSCTL_PERIPH_RES_EMIF1", displayName: "Reset EMIF1 clock" },
	{ name: "SYSCTL_PERIPH_RES_EMIF2", displayName: "Reset EMIF2 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM1", displayName: "Reset EPWM1 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM2", displayName: "Reset EPWM2 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM3", displayName: "Reset EPWM3 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM4", displayName: "Reset EPWM4 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM5", displayName: "Reset EPWM5 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM6", displayName: "Reset EPWM6 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM7", displayName: "Reset EPWM7 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM8", displayName: "Reset EPWM8 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM9", displayName: "Reset EPWM9 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM10", displayName: "Reset EPWM10 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM11", displayName: "Reset EPWM11 clock" },
	{ name: "SYSCTL_PERIPH_RES_EPWM12", displayName: "Reset EPWM12 clock" },
	{ name: "SYSCTL_PERIPH_RES_ECAP1", displayName: "Reset ECAP1 clock" },
	{ name: "SYSCTL_PERIPH_RES_ECAP2", displayName: "Reset ECAP2 clock" },
	{ name: "SYSCTL_PERIPH_RES_ECAP3", displayName: "Reset ECAP3 clock" },
	{ name: "SYSCTL_PERIPH_RES_ECAP4", displayName: "Reset ECAP4 clock" },
	{ name: "SYSCTL_PERIPH_RES_ECAP5", displayName: "Reset ECAP5 clock" },
	{ name: "SYSCTL_PERIPH_RES_ECAP6", displayName: "Reset ECAP6 clock" },
	{ name: "SYSCTL_PERIPH_RES_EQEP1", displayName: "Reset EQEP1 clock" },
	{ name: "SYSCTL_PERIPH_RES_EQEP2", displayName: "Reset EQEP2 clock" },
	{ name: "SYSCTL_PERIPH_RES_EQEP3", displayName: "Reset EQEP3 clock" },
	{ name: "SYSCTL_PERIPH_RES_SD1", displayName: "Reset SD1 clock" },
	{ name: "SYSCTL_PERIPH_RES_SD2", displayName: "Reset SD2 clock" },
	{ name: "SYSCTL_PERIPH_RES_SCIA", displayName: "Reset SCI_A clock" },
	{ name: "SYSCTL_PERIPH_RES_SCIB", displayName: "Reset SCI_B clock" },
	{ name: "SYSCTL_PERIPH_RES_SCIC", displayName: "Reset SCI_C clock" },
	{ name: "SYSCTL_PERIPH_RES_SCID", displayName: "Reset SCI_D clock" },
	{ name: "SYSCTL_PERIPH_RES_SPIA", displayName: "Reset SPI_A clock" },
	{ name: "SYSCTL_PERIPH_RES_SPIB", displayName: "Reset SPI_B clock" },
	{ name: "SYSCTL_PERIPH_RES_SPIC", displayName: "Reset SPI_C clock" },
	{ name: "SYSCTL_PERIPH_RES_I2CA", displayName: "Reset I2C_A clock" },
	{ name: "SYSCTL_PERIPH_RES_I2CB", displayName: "Reset I2C_B clock" },
	{ name: "SYSCTL_PERIPH_RES_MCBSPA", displayName: "Reset MCBSP_A clock" },
	{ name: "SYSCTL_PERIPH_RES_MCBSPB", displayName: "Reset MCBSP_B clock" },
	{ name: "SYSCTL_PERIPH_RES_USBA", displayName: "Reset USB_A clock" },
	{ name: "SYSCTL_PERIPH_RES_ADCA", displayName: "Reset ADC_A clock" },
	{ name: "SYSCTL_PERIPH_RES_ADCB", displayName: "Reset ADC_B clock" },
	{ name: "SYSCTL_PERIPH_RES_ADCC", displayName: "Reset ADC_C clock" },
	{ name: "SYSCTL_PERIPH_RES_ADCD", displayName: "Reset ADC_D clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS1", displayName: "Reset CMPSS1 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS2", displayName: "Reset CMPSS2 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS3", displayName: "Reset CMPSS3 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS4", displayName: "Reset CMPSS4 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS5", displayName: "Reset CMPSS5 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS6", displayName: "Reset CMPSS6 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS7", displayName: "Reset CMPSS7 clock" },
	{ name: "SYSCTL_PERIPH_RES_CMPSS8", displayName: "Reset CMPSS8 clock" },
	{ name: "SYSCTL_PERIPH_RES_DACA", displayName: "Reset DAC_A clock" },
	{ name: "SYSCTL_PERIPH_RES_DACB", displayName: "Reset DAC_B clock" },
	{ name: "SYSCTL_PERIPH_RES_DACC", displayName: "Reset DAC_C clock" },
]
let SysCtl_WDPrescaler = [
	{ name: "SYSCTL_WD_PRESCALE_1", displayName: "WDCLK = PREDIVCLK / 1" },
	{ name: "SYSCTL_WD_PRESCALE_2", displayName: "WDCLK = PREDIVCLK / 2" },
	{ name: "SYSCTL_WD_PRESCALE_4", displayName: "WDCLK = PREDIVCLK / 4" },
	{ name: "SYSCTL_WD_PRESCALE_8", displayName: "WDCLK = PREDIVCLK / 8" },
	{ name: "SYSCTL_WD_PRESCALE_16", displayName: "WDCLK = PREDIVCLK / 16" },
	{ name: "SYSCTL_WD_PRESCALE_32", displayName: "WDCLK = PREDIVCLK / 32" },
	{ name: "SYSCTL_WD_PRESCALE_64", displayName: "WDCLK = PREDIVCLK / 64" },
]
let SysCtl_WDMode = [
	{ name: "SYSCTL_WD_MODE_RESET", displayName: "Watchdog can generate a reset signal" },
	{ name: "SYSCTL_WD_MODE_INTERRUPT", displayName: "Watchdog can generate an interrupt signal; reset signal is disabled" },
]
let SysCtl_LSPCLKPrescaler = [
	{ name: "SYSCTL_LSPCLK_PRESCALE_1", displayName: "LSPCLK = SYSCLK / 1" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_2", displayName: "LSPCLK = SYSCLK / 2" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_4", displayName: "LSPCLK = SYSCLK / 4 (default)" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_6", displayName: "LSPCLK = SYSCLK / 6" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_8", displayName: "LSPCLK = SYSCLK / 8" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_10", displayName: "LSPCLK = SYSCLK / 10" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_12", displayName: "LSPCLK = SYSCLK / 12" },
	{ name: "SYSCTL_LSPCLK_PRESCALE_14", displayName: "LSPCLK = SYSCLK / 14" },
]
let SysCtl_EPWMCLKDivider = [
	{ name: "SYSCTL_EPWMCLK_DIV_1", displayName: "EPWMCLK = PLLSYSCLK / 1" },
	{ name: "SYSCTL_EPWMCLK_DIV_2", displayName: "EPWMCLK = PLLSYSCLK / 2" },
]
let SysCtl_EMIF1CLKDivider = [
	{ name: "SYSCTL_EMIF1CLK_DIV_1", displayName: "EMIF1CLK = PLLSYSCLK / 1" },
	{ name: "SYSCTL_EMIF1CLK_DIV_2", displayName: "EMIF1CLK = PLLSYSCLK / 2" },
]
let SysCtl_EMIF2CLKDivider = [
	{ name: "SYSCTL_EMIF2CLK_DIV_1", displayName: "EMIF2CLK = PLLSYSCLK / 1" },
	{ name: "SYSCTL_EMIF2CLK_DIV_2", displayName: "EMIF2CLK = PLLSYSCLK / 2" },
]
let SysCtl_ClockOut = [
	{ name: "SYSCTL_CLOCKOUT_PLLSYS", displayName: "PLL System Clock post SYSCLKDIV" },
	{ name: "SYSCTL_CLOCKOUT_PLLRAW", displayName: "PLL Raw Clock" },
	{ name: "SYSCTL_CLOCKOUT_SYSCLK", displayName: "CPU System Clock" },
	{ name: "SYSCTL_CLOCKOUT_INTOSC1", displayName: "Internal Oscillator 1" },
	{ name: "SYSCTL_CLOCKOUT_INTOSC2", displayName: "Internal Oscillator 2" },
	{ name: "SYSCTL_CLOCKOUT_XTALOSC", displayName: "External Oscillator" },
]
let SysCtl_SyncInput = [
	{ name: "SYSCTL_SYNC_IN_EPWM4", displayName: "Sync input to EPWM4" },
	{ name: "SYSCTL_SYNC_IN_EPWM7", displayName: "Sync input to EPWM7" },
	{ name: "SYSCTL_SYNC_IN_EPWM10", displayName: "Sync input to EPWM10" },
	{ name: "SYSCTL_SYNC_IN_ECAP1", displayName: "Sync input to ECAP1" },
	{ name: "SYSCTL_SYNC_IN_ECAP4", displayName: "Sync input to ECAP4" },
]
let SysCtl_SyncInputSource = [
	{ name: "SYSCTL_SYNC_IN_SRC_EPWM1SYNCOUT", displayName: "EPWM1SYNCOUT" },
	{ name: "SYSCTL_SYNC_IN_SRC_EPWM4SYNCOUT", displayName: "EPWM4SYNCOUT" },
	{ name: "SYSCTL_SYNC_IN_SRC_EPWM7SYNCOUT", displayName: "EPWM7SYNCOUT" },
	{ name: "SYSCTL_SYNC_IN_SRC_EPWM10SYNCOUT", displayName: "EPWM10SYNCOUT" },
	{ name: "SYSCTL_SYNC_IN_SRC_ECAP1SYNCOUT", displayName: "ECAP1SYNCOUT" },
	{ name: "SYSCTL_SYNC_IN_SRC_EXTSYNCIN1", displayName: "EXTSYNCIN1--Valid for all values of syncInput" },
	{ name: "SYSCTL_SYNC_IN_SRC_EXTSYNCIN2", displayName: "EXTSYNCIN2--Valid for all values of syncInput" },
]
let SysCtl_SyncOutputSource = [
	{ name: "SYSCTL_SYNC_OUT_SRC_EPWM1SYNCOUT", displayName: "EPWM1SYNCOUT --> EXTSYNCOUT" },
	{ name: "SYSCTL_SYNC_OUT_SRC_EPWM4SYNCOUT", displayName: "EPWM4SYNCOUT --> EXTSYNCOUT" },
	{ name: "SYSCTL_SYNC_OUT_SRC_EPWM7SYNCOUT", displayName: "EPWM7SYNCOUT --> EXTSYNCOUT" },
	{ name: "SYSCTL_SYNC_OUT_SRC_EPWM10SYNCOUT", displayName: "EPWM10SYNCOUT --> EXTSYNCOUT" },
]
let SysCtl_DeviceParametric = [
	{ name: "SYSCTL_DEVICE_QUAL", displayName: "Device Qualification Status" },
	{ name: "SYSCTL_DEVICE_PINCOUNT", displayName: "Device Pin Count" },
	{ name: "SYSCTL_DEVICE_INSTASPIN", displayName: "Device InstaSPIN Feature Set" },
	{ name: "SYSCTL_DEVICE_FLASH", displayName: "Device Flash size (KB)" },
	{ name: "SYSCTL_DEVICE_PARTID", displayName: "Device Part ID Format Revision" },
	{ name: "SYSCTL_DEVICE_FAMILY", displayName: "Device Family" },
	{ name: "SYSCTL_DEVICE_PARTNO", displayName: "Device Part Number" },
	{ name: "SYSCTL_DEVICE_CLASSID", displayName: "Device Class ID" },
]
let SysCtl_XClkDivider = [
	{ name: "SYSCTL_XCLKOUT_DIV_1", displayName: "XCLKOUT =  XCLKOUT / 1" },
	{ name: "SYSCTL_XCLKOUT_DIV_2", displayName: "XCLKOUT =  XCLKOUT / 2" },
	{ name: "SYSCTL_XCLKOUT_DIV_4", displayName: "XCLKOUT =  XCLKOUT / 4" },
	{ name: "SYSCTL_XCLKOUT_DIV_8", displayName: "XCLKOUT =  XCLKOUT / 8" },
]
let SysCtl_AuxPLLClkDivider = [
	{ name: "SYSCTL_AUXPLLCLK_DIV_1", displayName: "AUXPLL clock =  AUXPLL clock / 1" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_2", displayName: "AUXPLL clock =  AUXPLL clock / 2" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_4", displayName: "AUXPLL clock =  AUXPLL clock / 4" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_8", displayName: "AUXPLL clock =  AUXPLL clock / 8" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_3", displayName: "AUXPLL clock =  AUXPLL clock / 3" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_5", displayName: "AUXPLL clock =  AUXPLL clock / 5" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_6", displayName: "AUXPLL clock =  AUXPLL clock / 6" },
	{ name: "SYSCTL_AUXPLLCLK_DIV_7", displayName: "AUXPLL clock =  AUXPLL clock / 7" },
]
let SysCtl_Cputimer2ClkDivider = [
	{ name: "SYSCTL_TMR2CLKPRESCALE_1", displayName: "Cputimer2 clock =  Cputimer2 clock / 1" },
	{ name: "SYSCTL_TMR2CLKPRESCALE_2", displayName: "Cputimer2 clock =  Cputimer2 clock / 2" },
	{ name: "SYSCTL_TMR2CLKPRESCALE_4", displayName: "Cputimer2 clock =  Cputimer2 clock / 4" },
	{ name: "SYSCTL_TMR2CLKPRESCALE_8", displayName: "Cputimer2 clock =  Cputimer2 clock / 8" },
	{ name: "SYSCTL_TMR2CLKPRESCALE_16", displayName: "Cputimer2 clock =  Cputimer2 clock / 16" },
]
let SysCtl_Cputimer2ClkSource = [
	{ name: "SYSCTL_TMR2CLKSRCSEL_SYSCLK", displayName: "System Clock" },
	{ name: "SYSCTL_TMR2CLKSRCSEL_INTOSC1", displayName: "Internal Oscillator 1" },
	{ name: "SYSCTL_TMR2CLKSRCSEL_INTOSC2", displayName: "Internal Oscillator 2" },
	{ name: "SYSCTL_TMR2CLKSRCSEL_XTAL", displayName: "Crystal oscillator" },
	{ name: "SYSCTL_TMR2CLKSRCSEL_AUXPLLCLK", displayName: "Aux PLL CLock" },
]
let SYSCTL_AUXPLL = [
	{ name: "SYSCTL_AUXPLL_DIV_1", displayName: "Auxiliary PLL divide by 1" },
	{ name: "SYSCTL_AUXPLL_DIV_2", displayName: "Auxiliary PLL divide by 2" },
	{ name: "SYSCTL_AUXPLL_DIV_4", displayName: "Auxiliary PLL divide by 4" },
	{ name: "SYSCTL_AUXPLL_DIV_8", displayName: "Auxiliary PLL divide by 8" },
	{ name: "SYSCTL_AUXPLL_IMULT(x)", displayName: "Macro to format integer multiplier value. x is a number from 1 to 127." },
	{ name: "SYSCTL_AUXPLL_FMULT_NONE", displayName: "No fractional multiplier" },
	{ name: "SYSCTL_AUXPLL_FMULT_0", displayName: "No fractional multiplier" },
	{ name: "SYSCTL_AUXPLL_FMULT_1_4", displayName: "Fractional multiplier - 0.25" },
	{ name: "SYSCTL_AUXPLL_FMULT_1_2", displayName: "Fractional multiplier - 0.50" },
	{ name: "SYSCTL_AUXPLL_FMULT_3_4", displayName: "Fractional multiplier - 0.75" },
	{ name: "SYSCTL_AUXPLL_OSCSRC_OSC2", displayName: "Internal oscillator INTOSC2 as auxiliary clock input" },
	{ name: "SYSCTL_AUXPLL_OSCSRC_XTAL", displayName: "External oscillator (XTAL) as auxiliary clock input" },
	{ name: "SYSCTL_AUXPLL_OSCSRC_AUXCLKIN", displayName: "AUXCLKIN (from GPIO) as auxiliary clock input" },
	{ name: "SYSCTL_AUXPLL_ENABLE", displayName: "Enable AUXPLL" },
	{ name: "SYSCTL_AUXPLL_DISABLE", displayName: "Disable AUXPLL" },
]
let SYSCTL_SEC_CONTROLLER = [
	{ name: "SYSCTL_SEC_CONTROLLER_CLA", displayName: "Configure CLA as the secondary controller", legacyNames: ["SYSCTL_SEC_MASTER_CLA"]},
	{ name: "SYSCTL_SEC_CONTROLLER_DMA", displayName: "Configure DMA a secondary controller", legacyNames: ["SYSCTL_SEC_MASTER_DMA"]},
]
let SYSCTL_NMI = [
	{ name: "SYSCTL_NMI_NMIINT", displayName: "NMI Interrupt Flag" },
	{ name: "SYSCTL_NMI_CLOCKFAIL", displayName: "Clock Fail Interrupt Flag" },
	{ name: "SYSCTL_NMI_RAMUNCERR", displayName: "RAM Uncorrectable Error NMI Flag" },
	{ name: "SYSCTL_NMI_FLUNCERR", displayName: "Flash Uncorrectable Error NMI Flag" },
	{ name: "SYSCTL_NMI_CPU1HWBISTERR", displayName: "HW BIST Error NMI Flag" },
	{ name: "SYSCTL_NMI_CLBNMI", displayName: "Configurable Logic Block NMI Flag" },
]
let SYSCTL_CAUSE = [
	{ name: "SYSCTL_CAUSE_POR", displayName: "Power-on reset" },
	{ name: "SYSCTL_CAUSE_XRS", displayName: "External reset pin" },
	{ name: "SYSCTL_CAUSE_WDRS", displayName: "Watchdog reset" },
	{ name: "SYSCTL_CAUSE_NMIWDRS", displayName: "NMI watchdog reset" },
	{ name: "SYSCTL_CAUSE_SCCRESET", displayName: "SCCRESETn by DCSM" },
]
let SYSCTL_ADCSOC_SRC = [
	{ name: "SYSCTL_ADCSOC_SRC_PWM1SOCA", displayName: "ePWM1 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM2SOCA", displayName: "ePWM2 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM3SOCA", displayName: "ePWM3 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM4SOCA", displayName: "ePWM4 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM5SOCA", displayName: "ePWM5 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM6SOCA", displayName: "ePWM6 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM7SOCA", displayName: "ePWM7 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM8SOCA", displayName: "ePWM8 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM9SOCA", displayName: "ePWM9 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM10SOCA", displayName: "ePWM10 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM11SOCA", displayName: "ePWM11 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM12SOCA", displayName: "ePWM12 SOCA for ADCSOCAO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM1SOCB", displayName: "ePWM1 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM2SOCB", displayName: "ePWM2 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM3SOCB", displayName: "ePWM3 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM4SOCB", displayName: "ePWM4 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM5SOCB", displayName: "ePWM5 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM6SOCB", displayName: "ePWM6 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM7SOCB", displayName: "ePWM7 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM8SOCB", displayName: "ePWM8 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM9SOCB", displayName: "ePWM9 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM10SOCB", displayName: "ePWM10 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM11SOCB", displayName: "ePWM11 SOCB for ADCSOCBO" },
	{ name: "SYSCTL_ADCSOC_SRC_PWM12SOCB", displayName: "ePWM12 SOCB for ADCSOCBO" },
]
module.exports = {
	SysCtl_PeripheralPCLOCKCR: SysCtl_PeripheralPCLOCKCR,
	SysCtl_PeripheralSOFTPRES: SysCtl_PeripheralSOFTPRES,
	SysCtl_WDPrescaler: SysCtl_WDPrescaler,
	SysCtl_WDMode: SysCtl_WDMode,
	SysCtl_LSPCLKPrescaler: SysCtl_LSPCLKPrescaler,
	SysCtl_EPWMCLKDivider: SysCtl_EPWMCLKDivider,
	SysCtl_EMIF1CLKDivider: SysCtl_EMIF1CLKDivider,
	SysCtl_EMIF2CLKDivider: SysCtl_EMIF2CLKDivider,
	SysCtl_ClockOut: SysCtl_ClockOut,
	SysCtl_SyncInput: SysCtl_SyncInput,
	SysCtl_SyncInputSource: SysCtl_SyncInputSource,
	SysCtl_SyncOutputSource: SysCtl_SyncOutputSource,
	SysCtl_DeviceParametric: SysCtl_DeviceParametric,
	SysCtl_XClkDivider: SysCtl_XClkDivider,
	SysCtl_AuxPLLClkDivider: SysCtl_AuxPLLClkDivider,
	SysCtl_Cputimer2ClkDivider: SysCtl_Cputimer2ClkDivider,
	SysCtl_Cputimer2ClkSource: SysCtl_Cputimer2ClkSource,
	SYSCTL_AUXPLL: SYSCTL_AUXPLL,
	SYSCTL_SEC_CONTROLLER: SYSCTL_SEC_CONTROLLER,
	SYSCTL_NMI: SYSCTL_NMI,
	SYSCTL_CAUSE: SYSCTL_CAUSE,
	SYSCTL_ADCSOC_SRC: SYSCTL_ADCSOC_SRC,
}