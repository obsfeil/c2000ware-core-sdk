let CLB_Inputs = [
	{ name: "CLB_IN0", displayName: "Input 0" },
	{ name: "CLB_IN1", displayName: "Input 1" },
	{ name: "CLB_IN2", displayName: "Input 2" },
	{ name: "CLB_IN3", displayName: "Input 3" },
	{ name: "CLB_IN4", displayName: "Input 4" },
	{ name: "CLB_IN5", displayName: "Input 5" },
	{ name: "CLB_IN6", displayName: "Input 6" },
	{ name: "CLB_IN7", displayName: "Input 7" },
]
let CLB_Outputs = [
	{ name: "CLB_OUT0", displayName: "Output 0" },
	{ name: "CLB_OUT1", displayName: "Output 1" },
	{ name: "CLB_OUT2", displayName: "Output 2" },
	{ name: "CLB_OUT3", displayName: "Output 3" },
	{ name: "CLB_OUT4", displayName: "Output 4" },
	{ name: "CLB_OUT5", displayName: "Output 5" },
	{ name: "CLB_OUT6", displayName: "Output 6" },
	{ name: "CLB_OUT7", displayName: "Output 7" },
]
let CLB_AOCs = [
	{ name: "CLB_AOC0", displayName: "AOC 0" },
	{ name: "CLB_AOC1", displayName: "AOC 1" },
	{ name: "CLB_AOC2", displayName: "AOC 2" },
	{ name: "CLB_AOC3", displayName: "AOC 3" },
	{ name: "CLB_AOC4", displayName: "AOC 4" },
	{ name: "CLB_AOC5", displayName: "AOC 5" },
	{ name: "CLB_AOC6", displayName: "AOC 6" },
	{ name: "CLB_AOC7", displayName: "AOC 7" },
]
let CLB_SWReleaseCtrl = [
	{ name: "CLB_SW_RLS_CTRL0", displayName: "SW RLS CTRL 0" },
	{ name: "CLB_SW_RLS_CTRL1", displayName: "SW RLS CTRL 1" },
	{ name: "CLB_SW_RLS_CTRL2", displayName: "SW RLS CTRL 2" },
	{ name: "CLB_SW_RLS_CTRL3", displayName: "SW RLS CTRL 3" },
	{ name: "CLB_SW_RLS_CTRL4", displayName: "SW RLS CTRL 4" },
	{ name: "CLB_SW_RLS_CTRL5", displayName: "SW RLS CTRL 5" },
	{ name: "CLB_SW_RLS_CTRL6", displayName: "SW RLS CTRL 6" },
	{ name: "CLB_SW_RLS_CTRL7", displayName: "SW RLS CTRL 7" },
]
let CLB_SWGateCtrl = [
	{ name: "CLB_SW_GATE_CTRL0", displayName: "SW GATE CTRL 0" },
	{ name: "CLB_SW_GATE_CTRL1", displayName: "SW GATE CTRL 1" },
	{ name: "CLB_SW_GATE_CTRL2", displayName: "SW GATE CTRL 2" },
	{ name: "CLB_SW_GATE_CTRL3", displayName: "SW GATE CTRL 3" },
	{ name: "CLB_SW_GATE_CTRL4", displayName: "SW GATE CTRL 4" },
	{ name: "CLB_SW_GATE_CTRL5", displayName: "SW GATE CTRL 5" },
	{ name: "CLB_SW_GATE_CTRL6", displayName: "SW GATE CTRL 6" },
	{ name: "CLB_SW_GATE_CTRL7", displayName: "SW GATE CTRL 7" },
]
let CLB_Counters = [
	{ name: "CLB_CTR0", displayName: "Counter 0" },
	{ name: "CLB_CTR1", displayName: "Counter 1" },
	{ name: "CLB_CTR2", displayName: "Counter 2" },
]
let CLB_Register = [
	{ name: "CLB_REG_HLC_R0", displayName: "HLC R0 register" },
	{ name: "CLB_REG_HLC_R1", displayName: "HLC R1 register" },
	{ name: "CLB_REG_HLC_R2", displayName: "HLC R2 register" },
	{ name: "CLB_REG_HLC_R3", displayName: "HLC R3 register" },
	{ name: "CLB_REG_CTR_C0", displayName: "Counter 0 register" },
	{ name: "CLB_REG_CTR_C1", displayName: "Counter 1 register" },
	{ name: "CLB_REG_CTR_C2", displayName: "Counter 2 register" },
]
let CLB_FilterType = [
	{ name: "CLB_FILTER_NONE", displayName: "No filtering" },
	{ name: "CLB_FILTER_RISING_EDGE", displayName: "Rising edge detect" },
	{ name: "CLB_FILTER_FALLING_EDGE", displayName: "Falling edge detect" },
	{ name: "CLB_FILTER_ANY_EDGE", displayName: "Any edge detect" },
]
let CLB_GPInputMux = [
	{ name: "CLB_GP_IN_MUX_EXTERNAL", displayName: "Use external input path" },
	{ name: "CLB_GP_IN_MUX_GP_REG", displayName: "Use CLB_GP_REG bit value as input" },
]
let CLB_LocalInputMux = [
	{ name: "CLB_LOCAL_IN_MUX_GLOBAL_IN", displayName: "Global input mux selection" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCAEVT1", displayName: "EPWMx DCAEVT1" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCAEVT2", displayName: "EPWMx DCAEVT2" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCBEVT1", displayName: "EPWMx DCBEVT1" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCBEVT2", displayName: "EPWMx DCBEVT2" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCAH", displayName: "EPWMx DCAH" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCAL", displayName: "EPWMx DCAL" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCBH", displayName: "EPWMx DCBH" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_DCBL", displayName: "EPWMx DCBL" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_OST", displayName: "EPWMx OST" },
	{ name: "CLB_LOCAL_IN_MUX_EPWM_CBC", displayName: "EPWMx CBC" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_ECAPIN", displayName: "ECAPx ECAPIN" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_ECAP_OUT", displayName: "ECAPx ECAP_OUT" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_ECAP_OUT_EN", displayName: "ECAPx ECAP_OUT_EN" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_CEVT1", displayName: "ECAPx CEVT1" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_CEVT2", displayName: "ECAPx CEVT2" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_CEVT3", displayName: "ECAPx CEVT3" },
	{ name: "CLB_LOCAL_IN_MUX_ECAP_CEVT4", displayName: "ECAPx CEVT4" },
	{ name: "CLB_LOCAL_IN_MUX_EQEP_EQEPA", displayName: "EQEPx EQEPA" },
	{ name: "CLB_LOCAL_IN_MUX_EQEP_EQEPB", displayName: "EQEPx EQEPB" },
	{ name: "CLB_LOCAL_IN_MUX_EQEP_EQEPI", displayName: "EQEPx EQEPI" },
	{ name: "CLB_LOCAL_IN_MUX_EQEP_EQEPS", displayName: "EQEPx EQEPS" },
	{ name: "CLB_LOCAL_IN_MUX_CPU1_TBCLKSYNC", displayName: "CPU1.TBCLKSYNC" },
	{ name: "CLB_LOCAL_IN_MUX_CPU1_HALT", displayName: "CPU1.HALT" },
	{ name: "CLB_LOCAL_IN_MUX_SPICLK", displayName: "SPI Clock" },
	{ name: "CLB_LOCAL_IN_MUX_SPIPICO_PERIPHERAL", displayName: "SPIPICO Peripheral Input", legacyNames: ["CLB_LOCAL_IN_MUX_SPISIMO_SLAVE"]},
	{ name: "CLB_LOCAL_IN_MUX_SPIPTE", displayName: "SPI PTE", legacyNames: ["CLB_LOCAL_IN_MUX_SPISTE"]},
	{ name: "CLB_LOCAL_IN_MUX_SCI_TX", displayName: "SCI TX" },
	{ name: "CLB_LOCAL_IN_MUX_CLB_PSCLK", displayName: "CLB prescaled clock" },
]
let CLB_GlobalInputMux = [
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1A", displayName: "EPWM1A" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1A_OE", displayName: "EPWM1A trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1B", displayName: "EPWM1B" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1B_OE", displayName: "EPWM1B trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTR_ZERO", displayName: "EPWM1 TBCTR = Zero" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTR_PRD", displayName: "EPWM1 TBCTR = TBPRD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTRDIR", displayName: "EPWM1 CTRDIR" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_TBCLK", displayName: "EPWM1 TBCLK" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTR_CMPA", displayName: "EPWM1 TBCTR = CMPA" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTR_CMPB", displayName: "EPWM1 TBCTR = CMPB" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTR_CMPC", displayName: "EPWM1 TBCTR = CMPC" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1_CTR_CMPD", displayName: "EPWM1 TBCTR = CMPD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1A_AQ", displayName: "EPWM1A AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1B_AQ", displayName: "EPWM1B AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1A_DB", displayName: "EPWM1A DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM1B_DB", displayName: "EPWM1B DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2A", displayName: "EPWM2A" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2A_OE", displayName: "EPWM2A trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2B", displayName: "EPWM2B" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2B_OE", displayName: "EPWM2B trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTR_ZERO", displayName: "EPWM2 TBCTR = Zero" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTR_PRD", displayName: "EPWM2 TBCTR = TBPRD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTRDIR", displayName: "EPWM2 CTRDIR" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_TBCLK", displayName: "EPWM2 TBCLK" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTR_CMPA", displayName: "EPWM2 TBCTR = CMPA" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTR_CMPB", displayName: "EPWM2 TBCTR = CMPB" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTR_CMPC", displayName: "EPWM2 TBCTR = CMPC" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2_CTR_CMPD", displayName: "EPWM2 TBCTR = CMPD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2A_AQ", displayName: "EPWM2A AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2B_AQ", displayName: "EPWM2B AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2A_DB", displayName: "EPWM2A DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM2B_DB", displayName: "EPWM2B DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3A", displayName: "EPWM3A" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3A_OE", displayName: "EPWM3A trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3B", displayName: "EPWM3B" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3B_OE", displayName: "EPWM3B trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTR_ZERO", displayName: "EPWM3 TBCTR = Zero" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTR_PRD", displayName: "EPWM3 TBCTR = TBPRD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTRDIR", displayName: "EPWM3 CTRDIR" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_TBCLK", displayName: "EPWM3 TBCLK" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTR_CMPA", displayName: "EPWM3 TBCTR = CMPA" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTR_CMPB", displayName: "EPWM3 TBCTR = CMPB" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTR_CMPC", displayName: "EPWM3 TBCTR = CMPC" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3_CTR_CMPD", displayName: "EPWM3 TBCTR = CMPD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3A_AQ", displayName: "EPWM3A AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3B_AQ", displayName: "EPWM3B AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3A_DB", displayName: "EPWM3A DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM3B_DB", displayName: "EPWM3B DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4A", displayName: "EPWM4A" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4A_OE", displayName: "EPWM4A trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4B", displayName: "EPWM4B" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4B_OE", displayName: "EPWM4B trip output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTR_ZERO", displayName: "EPWM4 TBCTR = Zero" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTR_PRD", displayName: "EPWM4 TBCTR = TBPRD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTRDIR", displayName: "EPWM4 CTRDIR" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_TBCLK", displayName: "EPWM4 TBCLK" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTR_CMPA", displayName: "EPWM4 TBCTR = CMPA" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTR_CMPB", displayName: "EPWM4 TBCTR = CMPB" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTR_CMPC", displayName: "EPWM4 TBCTR = CMPC" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4_CTR_CMPD", displayName: "EPWM4 TBCTR = CMPD" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4A_AQ", displayName: "EPWM4A AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4B_AQ", displayName: "EPWM4B AQ submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4A_DB", displayName: "EPWM4A DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_EPWM4B_DB", displayName: "EPWM4B DB submodule output" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG0", displayName: "CLB X-BAR AUXSIG0" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG1", displayName: "CLB X-BAR AUXSIG1" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG2", displayName: "CLB X-BAR AUXSIG2" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG3", displayName: "CLB X-BAR AUXSIG3" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG4", displayName: "CLB X-BAR AUXSIG4" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG5", displayName: "CLB X-BAR AUXSIG5" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG6", displayName: "CLB X-BAR AUXSIG6" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB_AUXSIG7", displayName: "CLB X-BAR AUXSIG7" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT16", displayName: "CLB1 OUT16" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT17", displayName: "CLB1 OUT17" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT18", displayName: "CLB1 OUT18" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT19", displayName: "CLB1 OUT19" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT20", displayName: "CLB1 OUT20" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT21", displayName: "CLB1 OUT21" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT22", displayName: "CLB1 OUT22" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB1_OUT23", displayName: "CLB1 OUT23" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT16", displayName: "CLB2 OUT16" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT17", displayName: "CLB2 OUT17" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT18", displayName: "CLB2 OUT18" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT19", displayName: "CLB2 OUT19" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT20", displayName: "CLB2 OUT20" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT21", displayName: "CLB2 OUT21" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT22", displayName: "CLB2 OUT22" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB2_OUT23", displayName: "CLB2 OUT23" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT16", displayName: "CLB3 OUT16" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT17", displayName: "CLB3 OUT17" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT18", displayName: "CLB3 OUT18" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT19", displayName: "CLB3 OUT19" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT20", displayName: "CLB3 OUT20" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT21", displayName: "CLB3 OUT21" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT22", displayName: "CLB3 OUT22" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB3_OUT23", displayName: "CLB3 OUT23" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT16", displayName: "CLB4 OUT16" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT17", displayName: "CLB4 OUT17" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT18", displayName: "CLB4 OUT18" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT19", displayName: "CLB4 OUT19" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT20", displayName: "CLB4 OUT20" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT21", displayName: "CLB4 OUT21" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT22", displayName: "CLB4 OUT22" },
	{ name: "CLB_GLOBAL_IN_MUX_CLB4_OUT23", displayName: "CLB4 OUT23" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT0", displayName: "ERAD Event 0 (BUSCOMP1)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT1", displayName: "ERAD Event 1 (BUSCOMP2)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT2", displayName: "ERAD Event 2 (BUSCOMP3)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT3", displayName: "ERAD Event 3 (BUSCOMP4)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT4", displayName: "ERAD Event 4 (BUSCOMP5)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT5", displayName: "ERAD Event 5 (BUSCOMP6)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT6", displayName: "ERAD Event 6 (BUSCOMP7)" },
	{ name: "CLB_GLOBAL_IN_MUX_ERAD_EVENT7", displayName: "ERAD Event 7 (BUSCOMP8)" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_DATA_PACKET_RCVD", displayName: "FSIRXA Data Packet Received" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_ERROR_PACKET_RCVD", displayName: "FSIRXA Error Packet Received" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_PING_PACKET_RCVD", displayName: "FSIRXA PING Packet Received" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_OUTPUT_FRAME_DONE", displayName: "FSIRXA Output Frame Done" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_PACKET_TAG0", displayName: "FSIRXA Packet TAG0" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_PACKET_TAG1", displayName: "FSIRXA Packet TAG1" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_PACKET_TAG2", displayName: "FSIRXA Packet TAG2" },
	{ name: "CLB_GLOBAL_IN_MUX_FSIRXA_PACKET_TAG3", displayName: "FSIRXA Packet TAG3" },
	{ name: "CLB_GLOBAL_IN_MUX_SPI1_SPICLK", displayName: "SPI1 SPICLK OUT" },
	{ name: "CLB_GLOBAL_IN_MUX_SPI1_SPIPOCI_CONTROLLER", displayName: "SPI1 SPIPOCI Controller IN", legacyNames: ["CLB_GLOBAL_IN_MUX_SPI1_SPISOMI_MASTER"]},
	{ name: "CLB_GLOBAL_IN_MUX_SPI1_SPIPTE", displayName: "SPI1 SPIPTE OUT", legacyNames: ["CLB_GLOBAL_IN_MUX_SPI1_SPISTE"]},
	{ name: "CLB_GLOBAL_IN_MUX_SPI2_SPICLK", displayName: "SPI2 SPICLK OUT" },
	{ name: "CLB_GLOBAL_IN_MUX_SPI2_SPIPOCI_CONTROLLER", displayName: "SPI2 SPIPOCI Controller IN", legacyNames: ["CLB_GLOBAL_IN_MUX_SPI2_SPISOMI_MASTER"]},
	{ name: "CLB_GLOBAL_IN_MUX_SPI2_SPIPTE", displayName: "SPI2 SPIPTE OUT", legacyNames: ["CLB_GLOBAL_IN_MUX_SPI2_SPISTE"]},
]
let CLB_FIFO_SIZE = [
	{ name: "CLB_FIFO_SIZE", displayName: "FIFO SIZE" },
]
let CLB_LOCK_KEY = [
	{ name: "CLB_LOCK_KEY", displayName: "LOCK KEY" },
]
let CLB_LCL_MUX_SEL_MISC_INPUT_SEL = [
	{ name: "CLB_LCL_MUX_SEL_MISC_INPUT_SEL_M", displayName: "LCL MUX SEL MISC INPUT SEL M" },
	{ name: "CLB_LCL_MUX_SEL_MISC_INPUT_SEL_S", displayName: "LCL MUX SEL MISC INPUT SEL S" },
	{ name: "CLB_LCL_MUX_SEL_MISC_INPUT_SEL_BITM", displayName: "LCL MUX SEL MISC INPUT SEL BITM" },
]
let CLB_OUTPUT = [
	{ name: "CLB_OUTPUT_00", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 0" },
	{ name: "CLB_OUTPUT_01", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 1" },
	{ name: "CLB_OUTPUT_02", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 2" },
	{ name: "CLB_OUTPUT_03", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 3" },
	{ name: "CLB_OUTPUT_04", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 4" },
	{ name: "CLB_OUTPUT_05", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 5" },
	{ name: "CLB_OUTPUT_06", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 6" },
	{ name: "CLB_OUTPUT_07", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 7" },
	{ name: "CLB_OUTPUT_08", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 8" },
	{ name: "CLB_OUTPUT_09", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 9" },
	{ name: "CLB_OUTPUT_10", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 10" },
	{ name: "CLB_OUTPUT_11", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 11" },
	{ name: "CLB_OUTPUT_12", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 12" },
	{ name: "CLB_OUTPUT_13", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 13" },
	{ name: "CLB_OUTPUT_14", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 14" },
	{ name: "CLB_OUTPUT_15", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 15" },
	{ name: "CLB_OUTPUT_16", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 16" },
	{ name: "CLB_OUTPUT_17", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 17" },
	{ name: "CLB_OUTPUT_18", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 18" },
	{ name: "CLB_OUTPUT_19", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 19" },
	{ name: "CLB_OUTPUT_20", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 20" },
	{ name: "CLB_OUTPUT_21", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 21" },
	{ name: "CLB_OUTPUT_22", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 22" },
	{ name: "CLB_OUTPUT_23", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 23" },
	{ name: "CLB_OUTPUT_24", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 24" },
	{ name: "CLB_OUTPUT_25", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 25" },
	{ name: "CLB_OUTPUT_26", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 26" },
	{ name: "CLB_OUTPUT_27", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 27" },
	{ name: "CLB_OUTPUT_28", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 28" },
	{ name: "CLB_OUTPUT_29", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 29" },
	{ name: "CLB_OUTPUT_30", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 30" },
	{ name: "CLB_OUTPUT_31", displayName: "Mask for CLB OUTPUT ENABLE/DISABLE 31" },
]
module.exports = {
	CLB_Inputs: CLB_Inputs,
	CLB_Outputs: CLB_Outputs,
	CLB_AOCs: CLB_AOCs,
	CLB_SWReleaseCtrl: CLB_SWReleaseCtrl,
	CLB_SWGateCtrl: CLB_SWGateCtrl,
	CLB_Counters: CLB_Counters,
	CLB_Register: CLB_Register,
	CLB_FilterType: CLB_FilterType,
	CLB_GPInputMux: CLB_GPInputMux,
	CLB_LocalInputMux: CLB_LocalInputMux,
	CLB_GlobalInputMux: CLB_GlobalInputMux,
	CLB_FIFO_SIZE: CLB_FIFO_SIZE,
	CLB_LOCK_KEY: CLB_LOCK_KEY,
	CLB_LCL_MUX_SEL_MISC_INPUT_SEL: CLB_LCL_MUX_SEL_MISC_INPUT_SEL,
	CLB_OUTPUT: CLB_OUTPUT,
}