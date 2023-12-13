;;#############################################################################
;; FILE: CLAacos.asm
;; 
;; DESCRIPTION: CLA arccosine function
;; 
;; Group:            C2000
;; Target Family:    C28x+CLA
;;
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

    .cdecls C,LIST,"CLAmath.h"
	.include "CLAeabi.asm"

;;----------------------------------------------------------------------------
;; Description: 
;;  
;;   Step(1): Calculate absolute of the input X  
;;  
;;   Step(2): Use the upper 6-bits of input "X" value as an
;;                index into the table to obtain the coefficients
;;                for a second order equation:
;;  
;;              _CLAacosinTable:
;;                   CoeffA0[0]
;;                   CoeffA1[0]
;;                   CoeffA2[0]
;;                      .
;;                      .
;;                   CoeffA0[63]
;;                   CoeffA1[63]
;;                   CoeffA2[63]
;;  
;;   Step(3):   Calculate the angle using the folowing equation:
;;  
;;              arccos(Ratio) = A0 + A1*Ratio + A2*Ratio*Ratio
;;              arccos(Ratio) = A0 + Ratio(A1 + A2*Ratio)
;;  
;;   Step(4):   The final angle is determined as follows:
;;  
;;              if( X < 0 )
;;                  Angle = Pi - Angle
;;  
;; Equation:    y = acos(x)
;;
;; Regs Used:   MR0, MR1, MR2, MR3 , MAR0,MAR1
;;
;; Input:   x           f32 value in memory
;;
;; Output:  y           f32 value in memory
;;          MR0 = y     f32 result
;; 
;; Benchmark:   Cycles =  27 
;;              Instructions =  27
;;
;; Scratchpad Usage: (Local Function Scratchpad Pointer (SP))
;;
;;   |_______|<- MR3                               (SP+2)
;;   |_______|<- acos temporary variable           (SP+0)
;;
;;----------------------------------------------------------------------------

    .def    _CLAacos
    .sect   "Cla1Prog:_CLAacos"
    .align  2
	.def    __cla_CLAacos_sp
__cla_CLAacos_sp    .usect  ".scratchpad:Cla1Prog:_CLAacos",4,0,1  

_CLAacos:
    .asmfunc
    .asg    __cla_CLAacos_sp + 0, _acos_tmp
    .asg    __cla_CLAacos_sp + 2, _save_MR3
; Context Save
     MMOV32     @_save_MR3, MR3
     
; MR0 = X(fVal) is stored in the scratchpad memory
     MMOV32     @_acos_tmp, MR0
    
; Perform Step (1):
     MABSF32     MR3,MR0            ; MR3 = abs(X)
     
; Perform Step (2):
     MMPYF32     MR2,MR3,#63.0      ; 64 = Elements In Table (indexed from 0)
     MF32TOUI16  MR2,MR2            ; MR2 = int(63*x)
     MADD32      MR2,MR2,MR2        ; MR2 = 2*MR2
     MADD32      MR1,MR2,MR2        ; MR1 = 4*MR2
     MADD32      MR2,MR2,MR1        ; MR2 = 6*MR2 this is the index value for the stored data array
     MMOV16      MAR0,MR2,#_CLAacosinTable+4       ; MAR0 points to A2, this will be used in step 4
     MMOVI16     MAR1,#_CLAacosinHalfPITable+2     ; MAR1 points to pi/2, this will be used in step 5
     MNOP
     MNOP
; Perform Step (4):
; arcsin(x) = A0 + x(A1 + A2*x)
     MMOV32      MR1,*MAR0[#-2]++   ; MR1 = A2
     MMPYF32     MR1,MR1,MR3        ; MR1 = A2*x
  || MMOV32      MR2,*MAR0[#-2]++   ; MR2 = A1

     MADDF32     MR2,MR2,MR1        ; MR2 = A1 + A2*x
  || MMOV32      MR1,*MAR0          ; MR1 = A0
     MMPYF32     MR2,MR2,MR3        ; MR3 = x*(A1 + A2*x)
  
     MADDF32     MR3,MR1,MR2        ; MR3 = A0 + x*(A1 + A2*x)=arccosin(x)

; Perform Step (5):
    MMOV32      MR1,*MAR1,UNC     ; MR1 = pi  (no flag change)
    MSUBF32     MR1,MR1,MR3       ; MR2= pi - arcos(x)
  
    MMOV32      MR2,@_acos_tmp    ; MR2 = x (set/clear NF,ZF)

; Context Restore and Final Operations
    MRCNDD      UNC
    MMOV32      MR3,MR1,LT 
    MMOV32      MR0,MR3           ; Store Y = acos(X)
    MMOV32      MR3,@_save_MR3 
    .unasg  _acos_tmp
    .unasg  _save_MR3
    .endasmfunc

;;----------------------------------------------------------------------------
;; Description: 
;;     Use this variant when using the acos table in ROM for these devices:
;;       1. F2805x (all revisions)
;;
;;     There are 65 triplets in the lookup table on these devices
;;     and the routine must ignore the first triplet. This is done
;;     with the TABLESKIP factor.
;;   
;;    Step(1): Calculate absolute of the input X  
;;   
;;    Step(2): Use the upper 6-bits of input "X" value as an
;;                 index into the table to obtain the coefficients
;;                 for a second order equation:
;;   
;;               _CLAacosinTable:
;;                    CoeffA0[0]
;;                    CoeffA1[0]
;;                    CoeffA2[0]
;;                       .
;;                       .
;;                    CoeffA0[63]
;;                    CoeffA1[63]
;;                    CoeffA2[63]
;;   
;;    Step(3):   Calculate the angle using the folowing equation:
;;   
;;               arccos(Ratio) = A0 + A1*Ratio + A2*Ratio*Ratio
;;               arccos(Ratio) = A0 + Ratio(A1 + A2*Ratio)
;;   
;;    Step(4):   The final angle is determined as follows:
;;   
;;               if( X < 0 )
;;                   Angle = Pi - Angle
;;   
;; Equation:    y = acos(x)
;;
;; Regs Used:   MR0, MR1, MR2, MR3 , MAR0,MAR1
;;
;; Input:   x           f32 value in memory
;;
;; Output:  y           f32 value in memory
;;          MR0 = y     f32 result
;; 
;; Benchmark:   Cycles =  24 
;;              Instructions =  24
;;
;; Scratchpad Usage: (Local Function Scratchpad Pointer (SP))
;;
;;   |_______|<- MR3                               (SP+2)
;;   |_______|<- acos temporary variable           (SP+0)
;;
;;----------------------------------------------------------------------------
    .def    _CLAacos_spc
    .sect   "Cla1Prog:_CLAacos_spc"
    .align  2
	.def    __cla_CLAacos_spc_sp
__cla_CLAacos_spc_sp    .usect  ".scratchpad:Cla1Prog:_CLAacos_spc",4,0,1  

TABLESKIP .set   6

_CLAacos_spc:
    .asmfunc
    .asg    __cla_CLAacos_spc_sp + 0, _acos_tmp
    .asg    __cla_CLAacos_spc_sp + 2, _save_MR3
; Context Save
    MMOV32     @_save_MR3, MR3
     
; MR0 = X(fVal) is stored in the scratchpad memory
    MMOV32     @_acos_tmp, MR0
    
; Perform Step (1):
    MABSF32     MR3,MR0            ; MR3 = abs(X)
     
; Perform Step (2):
    MMPYF32     MR2,MR3,#63.0      ; 64 = Elements In Table (indexed from 0)
    MF32TOUI16  MR2,MR2            ; MR2 = int(63*x)
    MADD32      MR2,MR2,MR2        ; MR2 = 2*MR2
    MADD32      MR1,MR2,MR2        ; MR1 = 4*MR2
    MADD32      MR2,MR2,MR1        ; MR2 = 6*MR2 this is the index value for the stored data array
    MMOV16      MAR0,MR2,#_CLAacosinTable+4+TABLESKIP  ; MAR0 points to A2, this will be used in step 4
    MMOVI16     MAR1,#_CLAacosinHalfPITable+2          ; MAR1 points to pi/2, this will be used in step 5
    MNOP
    MNOP
; Perform Step (4):
; arcsin(x) = A0 + x(A1 + A2*x)
    MMOV32      MR1,*MAR0[#-2]++   ; MR1 = A2
    MMPYF32     MR1,MR1,MR3        ; MR1 = A2*x
 || MMOV32      MR2,*MAR0[#-2]++   ; MR2 = A1

    MADDF32     MR2,MR2,MR1        ; MR2 = A1 + A2*x
 || MMOV32      MR1,*MAR0          ; MR1 = A0
    MMPYF32     MR2,MR2,MR3        ; MR3 = x*(A1 + A2*x)
 
    MADDF32     MR3,MR1,MR2        ; MR3 = A0 + x*(A1 + A2*x)=arccosin(x)

; Perform Step (5):
    MMOV32      MR1,*MAR1,UNC      ; MR1 = pi  (no flag change)
    MSUBF32     MR1,MR1,MR3        ; MR2= pi - arcos(x)

    MMOV32      MR2,@_acos_tmp     ; MR2 = x (set/clear NF,ZF)

; Context Restore and Final Operations
    
    MRCNDD      UNC
    MMOV32      MR3,@_save_MR3 
    MMOV32      MR3,MR1,LT 
    MMOV32      MR0,MR3            ; Store Y = acos(X)
    .unasg  _acos_tmp
    .unasg  _save_MR3
    .endasmfunc
    
;; End of File
