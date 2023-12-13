; DCL_PID_A1.asm - Parallel PID controller on C28x (fixed point)
;
;;#############################################################################
;;!
;;! Copyright: Copyright (C) 2023 Texas Instruments Incorporated -
;;!	All rights reserved not granted herein.
;;!	Limited License.
;;!
;;! Texas Instruments Incorporated grants a world-wide, royalty-free,
;;! non-exclusive license under copyrights and patents it now or hereafter
;;! owns or controls to make, have made, use, import, offer to sell and sell
;;! ("Utilize") this software subject to the terms herein. With respect to the
;;! foregoing patent license, such license is granted solely to the extent that
;;! any such patent is necessary to Utilize the software alone. The patent
;;! license shall not apply to any combinations which include this software,
;;! other than combinations with devices manufactured by or for TI 
;;! ("TI Devices").
;;! No hardware patent is licensed hereunder.
;;!
;;! Redistributions must preserve existing copyright notices and reproduce this
;;! license (including the above copyright notice and the disclaimer and
;;! (if applicable) source code license limitations below) in the documentation
;;!  and/or other materials provided with the distribution.
;;!
;;! Redistribution and use in binary form, without modification, are permitted
;;! provided that the following conditions are met:
;;!
;;! * No reverse engineering, decompilation, or disassembly of this software is 
;;! permitted with respect to any software provided in binary form.
;;! * Any redistribution and use are licensed by TI for use only 
;;!   with TI Devices.
;;! * Nothing shall obligate TI to provide you with source code for the 
;;!   software licensed and provided to you in object code.
;;!
;;! If software source code is provided to you, modification and redistribution
;;! of the source code are permitted provided that the following conditions 
;;! are met:
;;!
;;! * any redistribution and use of the source code, including any resulting
;;!   derivative works, are licensed by TI for use only with TI Devices.
;;! * any redistribution and use of any object code compiled from the source
;;!   code and any resulting derivative works, are licensed by TI for use 
;;!   only with TI Devices.
;;!
;;! Neither the name of Texas Instruments Incorporated nor the names of its
;;! suppliers may be used to endorse or promote products derived from this 
;;! software without specific prior written permission.
;;#############################################################################


   	  .if $defined(__TI_EABI__)
		.if __TI_EABI__
		.asg	DCL_runPID_A1, _DCL_runPID_A1
		.endif
      .endif

   		.global	_DCL_runPID_A1

		.sect	"dcl32funcs"

; C prototype: int32_t DCL_runPID_A1(DCL_DCL_PID32 *p, int32_t rk, int32_t yk)
; argument 1 = *p : DCL_PID32 structure address [XAR4]
; argument 2 = rk : set point reference [ACC]
; argument 3 = yk : feedback [stack-2]
; return = uk : control [ACC]

		.align	2

_DCL_runPID_A1:
		.asmfunc
		MOVL	XT, *-SP[4]					; XT = yk
		SUBL	ACC, XT						; ACC = v5
		MOVL	XT, ACC						; XT = v5
		IMPYL	P, XT, *XAR4				; P = v6[L]
		QMPYL	ACC, XT, *XAR4++			; ACC = v6[H]
		LSL64	ACC:P, #8					; ACC = [I8Q24]
		PUSH	ACC							; push v6 to stack
		IMPYL	P, XT, *XAR4				; P = v7[L]
		QMPYL	ACC, XT, *XAR4++			; ACC = v7[H]
		LSL64	ACC:P, #8					; ACC = [I8Q24]
		MOVB	XAR0, #12					; XAR0 = 12
		MOVL	XT, ACC						; XT = v7
		IMPYL	P, XT, *+XAR4[AR0]			; P = v14[L]
		QMPYL	ACC, XT, *+XAR4[AR0]		; ACC = v14[H]
		LSL64	ACC:P, #8					; ACC = [I8Q24]
		MOVB	XAR0, #10					; XAR0 = 10
		ADDL	ACC, *+XAR4[AR0]			; ACC = v8
		SAT		ACC							; saturate v8
		MOVL	*+XAR4[AR0], ACC			; store i10
		PUSH	ACC							; push v8 to stack
		MOVL	XT, *-SP[8]					; XT = yk
		IMPYL	P, XT, *XAR4				; P = v1a[L] = v5*Kda
		QMPYL	ACC, XT, *XAR4++			; ACC = v1a[H] = v5*Kda
		LSL64	ACC:P, #8					; format v1a as[I8Q24]
		MOVL	XT, ACC						; XT = v1
		IMPYL	P, XT, *XAR4				; P = v2a[L]
		QMPYL	ACC, XT, *XAR4++			; ACC = v2a[H]
		LSL64	ACC:P, #8					; ACC = [I8Q24]
		MOVL	P, ACC						; P = v2a
		ADDL	ACC, P						; ACC = v2 <<--- c1a coefficient scaling
		MOVL	P, ACC						; P = v2
		SUBL	ACC, *+XAR4[2]				; ACC = v2b = v2-d2
		MOVL	*+XAR4[2], P				; save d2
		SUBL	ACC, *+XAR4[4]				; ACC = v4
		SAT		ACC							; saturate v4
		MOVL	XT, ACC						; XT = v4
		IMPYL	P, XT, *XAR4				; P = v3[L]
		QMPYL	ACC, XT, *XAR4				; ACC = d3[H]
		LSL64	ACC:P, #8					; format d3 as [I8Q24]
		MOVL	*+XAR4[4], ACC				; save d3
		MOVL	P, XT						; P = v4
		POP		ACC							; ACC = v8
		SPM		0							; PM = 0
		SUBL	ACC, P						; ACC = v8-v4
		POP		P							; P = v6
		ADDL	ACC, P						; ACC = v9
		SAT		ACC							; saturate v9
		ADDB	XAR4, #10					; XAR4 = &Umaxa
		MOVL	P, ACC						; P = v9
		MINL	ACC, *XAR4++				; clamp v9 pos
		MAXL	ACC, *XAR4					; clamp v9 neg; ACC = uk
		PUSH	ACC							; save uk to stack
		CMPL	ACC, P<<PM					; set flags on (uk-v9)
		PUSH	ST0							; save flags
		ZAPA								; ACC = P = 0
		OR		ACC, #0x1000<<12			; ACC = [I8Q24](1.0)
		POP		ST0							; restore flags
		MOVL	P, ACC, EQ					; P = v12
		SUBB	XAR4, #4					; XAR4 = &i14
		MOVL	*XAR4, P					; save i14
		POP		ACC							; ACC = uk
		LRETR								; return uk
		.endasmfunc

		.end

; end of file
