;;#############################################################################
;;! \file source/fft/CFFT_f32_twiddleFactors.asm
;; 
;;! \brief  Twiddle Factors for 1024-pt CFFT 
;;! \author Vishal Coelho 
;;! \date   24-Apr-2015
;;! 
;;  Revision History:
;;+----------+---------------+------------------------------------------------+
;;| DATE     | AUTHOR        | CHANGE                                         |
;;+----------+---------------+------------------------------------------------+
;;| 01/16/18 | Ritvik Sadana | Changed symbol names to keep naming consistent |
;;|          |               | with FPU32 math table symbols.                 |
;;+----------+---------------+------------------------------------------------+
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

;; For N = 1024-pt Complex FFT there are 10 stages
;; requiring 768 complex twiddle factors for the FPU implementation
;; Total space requirement = 768 long words(32-bit) or,
;; 1536 words (16-bits) or,
;; 3072 bytes
;; The values range from sin(pi * 0/512) to sin(pi * 767/512) i.e.,
;;    sin(pi * k/512), where k = 0 to 3N/4-1 (N=1024)
    .if __TI_EABI__
    .asg    CFFT_f32_twiddleFactors, _CFFT_f32_twiddleFactors
    .asg    FPU32CFFTtwiddleFactors, _FPU32CFFTtwiddleFactors
    .endif

    .sect "FPUfftTables"
    .global _CFFT_f32_twiddleFactors
    .global _FPU32CFFTtwiddleFactors
    
_CFFT_f32_twiddleFactors:
_FPU32CFFTtwiddleFactors:
    .float     0.000000000,  0.006135885,  0.012271538,  0.018406730
    .float     0.024541229,  0.030674804,  0.036807224,  0.042938258
    .float     0.049067676,  0.055195246,  0.061320737,  0.067443922
    .float     0.073564567,  0.079682440,  0.085797310,  0.091908954
    .float     0.098017141,  0.104121633,  0.110222206,  0.116318628
    .float     0.122410677,  0.128498107,  0.134580702,  0.140658244
    .float     0.146730468,  0.152797192,  0.158858150,  0.164913118
    .float     0.170961887,  0.177004218,  0.183039889,  0.189068660
    .float     0.195090324,  0.201104641,  0.207111374,  0.213110313
    .float     0.219101235,  0.225083917,  0.231058106,  0.237023607
    .float     0.242980182,  0.248927608,  0.254865646,  0.260794103
    .float     0.266712755,  0.272621363,  0.278519690,  0.284407526
    .float     0.290284663,  0.296150893,  0.302005947,  0.307849646
    .float     0.313681751,  0.319502026,  0.325310290,  0.331106305
    .float     0.336889863,  0.342660725,  0.348418683,  0.354163527
    .float     0.359895051,  0.365612984,  0.371317208,  0.377007425
    .float     0.382683426,  0.388345033,  0.393992037,  0.399624199
    .float     0.405241311,  0.410843164,  0.416429549,  0.422000259
    .float     0.427555084,  0.433093816,  0.438616246,  0.444122136
    .float     0.449611336,  0.455083579,  0.460538715,  0.465976506
    .float     0.471396744,  0.476799220,  0.482183784,  0.487550169
    .float     0.492898196,  0.498227656,  0.503538370,  0.508830130
    .float     0.514102757,  0.519356012,  0.524589658,  0.529803634
    .float     0.534997642,  0.540171444,  0.545324981,  0.550457954
    .float     0.555570245,  0.560661554,  0.565731823,  0.570780754
    .float     0.575808167,  0.580813944,  0.585797846,  0.590759695
    .float     0.595699310,  0.600616455,  0.605511069,  0.610382795
    .float     0.615231574,  0.620057225,  0.624859512,  0.629638255
    .float     0.634393275,  0.639124453,  0.643831551,  0.648514390
    .float     0.653172851,  0.657806695,  0.662415802,  0.666999936
    .float     0.671558976,  0.676092684,  0.680601001,  0.685083687
    .float     0.689540565,  0.693971455,  0.698376238,  0.702754736
    .float     0.707106769,  0.711432219,  0.715730846,  0.720002532
    .float     0.724247098,  0.728464365,  0.732654274,  0.736816585
    .float     0.740951121,  0.745057762,  0.749136388,  0.753186822
    .float     0.757208824,  0.761202395,  0.765167236,  0.769103348
    .float     0.773010433,  0.776888490,  0.780737221,  0.784556568
    .float     0.788346410,  0.792106569,  0.795836926,  0.799537241
    .float     0.803207517,  0.806847572,  0.810457170,  0.814036310
    .float     0.817584813,  0.821102500,  0.824589312,  0.828045070
    .float     0.831469595,  0.834862888,  0.838224709,  0.841554999
    .float     0.844853580,  0.848120332,  0.851355195,  0.854557991
    .float     0.857728601,  0.860866964,  0.863972843,  0.867046237
    .float     0.870086968,  0.873094976,  0.876070082,  0.879012227
    .float     0.881921291,  0.884797096,  0.887639642,  0.890448749
    .float     0.893224299,  0.895966232,  0.898674488,  0.901348829
    .float     0.903989315,  0.906595707,  0.909168005,  0.911706030
    .float     0.914209783,  0.916679084,  0.919113874,  0.921514034
    .float     0.923879504,  0.926210225,  0.928506076,  0.930766940
    .float     0.932992816,  0.935183525,  0.937339008,  0.939459205
    .float     0.941544056,  0.943593442,  0.945607305,  0.947585583
    .float     0.949528158,  0.951435030,  0.953306019,  0.955141187
    .float     0.956940353,  0.958703458,  0.960430503,  0.962121427
    .float     0.963776052,  0.965394437,  0.966976464,  0.968522072
    .float     0.970031261,  0.971503913,  0.972939968,  0.974339366
    .float     0.975702107,  0.977028131,  0.978317380,  0.979569793
    .float     0.980785251,  0.981963873,  0.983105481,  0.984210074
    .float     0.985277653,  0.986308098,  0.987301409,  0.988257587
    .float     0.989176512,  0.990058184,  0.990902662,  0.991709769
    .float     0.992479563,  0.993211925,  0.993906975,  0.994564593
    .float     0.995184720,  0.995767415,  0.996312618,  0.996820271
    .float     0.997290432,  0.997723043,  0.998118103,  0.998475552
    .float     0.998795450,  0.999077737,  0.999322355,  0.999529421
    .float     0.999698818,  0.999830604,  0.999924719,  0.999981165
    .float     1.000000000,  0.999981165,  0.999924719,  0.999830604
    .float     0.999698818,  0.999529421,  0.999322355,  0.999077737
    .float     0.998795450,  0.998475552,  0.998118103,  0.997723043
    .float     0.997290432,  0.996820271,  0.996312618,  0.995767415
    .float     0.995184720,  0.994564593,  0.993906975,  0.993211925
    .float     0.992479563,  0.991709769,  0.990902662,  0.990058184
    .float     0.989176512,  0.988257587,  0.987301409,  0.986308098
    .float     0.985277653,  0.984210074,  0.983105481,  0.981963873
    .float     0.980785251,  0.979569793,  0.978317380,  0.977028131
    .float     0.975702107,  0.974339366,  0.972939968,  0.971503913
    .float     0.970031261,  0.968522072,  0.966976464,  0.965394437
    .float     0.963776052,  0.962121427,  0.960430503,  0.958703458
    .float     0.956940353,  0.955141187,  0.953306019,  0.951435030
    .float     0.949528158,  0.947585583,  0.945607305,  0.943593442
    .float     0.941544056,  0.939459205,  0.937339008,  0.935183525
    .float     0.932992816,  0.930766940,  0.928506076,  0.926210225
    .float     0.923879504,  0.921514034,  0.919113874,  0.916679084
    .float     0.914209783,  0.911706030,  0.909168005,  0.906595707
    .float     0.903989315,  0.901348829,  0.898674488,  0.895966232
    .float     0.893224299,  0.890448749,  0.887639642,  0.884797096
    .float     0.881921291,  0.879012227,  0.876070082,  0.873094976
    .float     0.870086968,  0.867046237,  0.863972843,  0.860866964
    .float     0.857728601,  0.854557991,  0.851355195,  0.848120332
    .float     0.844853580,  0.841554999,  0.838224709,  0.834862888
    .float     0.831469595,  0.828045070,  0.824589312,  0.821102500
    .float     0.817584813,  0.814036310,  0.810457170,  0.806847572
    .float     0.803207517,  0.799537241,  0.795836926,  0.792106569
    .float     0.788346410,  0.784556568,  0.780737221,  0.776888490
    .float     0.773010433,  0.769103348,  0.765167236,  0.761202395
    .float     0.757208824,  0.753186822,  0.749136388,  0.745057762
    .float     0.740951121,  0.736816585,  0.732654274,  0.728464365
    .float     0.724247098,  0.720002532,  0.715730846,  0.711432219
    .float     0.707106769,  0.702754736,  0.698376238,  0.693971455
    .float     0.689540565,  0.685083687,  0.680601001,  0.676092684
    .float     0.671558976,  0.666999936,  0.662415802,  0.657806695
    .float     0.653172851,  0.648514390,  0.643831551,  0.639124453
    .float     0.634393275,  0.629638255,  0.624859512,  0.620057225
    .float     0.615231574,  0.610382795,  0.605511069,  0.600616455
    .float     0.595699310,  0.590759695,  0.585797846,  0.580813944
    .float     0.575808167,  0.570780754,  0.565731823,  0.560661554
    .float     0.555570245,  0.550457954,  0.545324981,  0.540171444
    .float     0.534997642,  0.529803634,  0.524589658,  0.519356012
    .float     0.514102757,  0.508830130,  0.503538370,  0.498227656
    .float     0.492898196,  0.487550169,  0.482183784,  0.476799220
    .float     0.471396744,  0.465976506,  0.460538715,  0.455083579
    .float     0.449611336,  0.444122136,  0.438616246,  0.433093816
    .float     0.427555084,  0.422000259,  0.416429549,  0.410843164
    .float     0.405241311,  0.399624199,  0.393992037,  0.388345033
    .float     0.382683426,  0.377007425,  0.371317208,  0.365612984
    .float     0.359895051,  0.354163527,  0.348418683,  0.342660725
    .float     0.336889863,  0.331106305,  0.325310290,  0.319502026
    .float     0.313681751,  0.307849646,  0.302005947,  0.296150893
    .float     0.290284663,  0.284407526,  0.278519690,  0.272621363
    .float     0.266712755,  0.260794103,  0.254865646,  0.248927608
    .float     0.242980182,  0.237023607,  0.231058106,  0.225083917
    .float     0.219101235,  0.213110313,  0.207111374,  0.201104641
    .float     0.195090324,  0.189068660,  0.183039889,  0.177004218
    .float     0.170961887,  0.164913118,  0.158858150,  0.152797192
    .float     0.146730468,  0.140658244,  0.134580702,  0.128498107
    .float     0.122410677,  0.116318628,  0.110222206,  0.104121633
    .float     0.098017141,  0.091908954,  0.085797310,  0.079682440
    .float     0.073564567,  0.067443922,  0.061320737,  0.055195246
    .float     0.049067676,  0.042938258,  0.036807224,  0.030674804
    .float     0.024541229,  0.018406730,  0.012271538,  0.006135885
    .float     0.000000000, -0.006135885, -0.012271538, -0.018406730
    .float    -0.024541229, -0.030674804, -0.036807224, -0.042938258
    .float    -0.049067676, -0.055195246, -0.061320737, -0.067443922
    .float    -0.073564567, -0.079682440, -0.085797310, -0.091908954
    .float    -0.098017141, -0.104121633, -0.110222206, -0.116318628
    .float    -0.122410677, -0.128498107, -0.134580702, -0.140658244
    .float    -0.146730468, -0.152797192, -0.158858150, -0.164913118
    .float    -0.170961887, -0.177004218, -0.183039889, -0.189068660
    .float    -0.195090324, -0.201104641, -0.207111374, -0.213110313
    .float    -0.219101235, -0.225083917, -0.231058106, -0.237023607
    .float    -0.242980182, -0.248927608, -0.254865646, -0.260794103
    .float    -0.266712755, -0.272621363, -0.278519690, -0.284407526
    .float    -0.290284663, -0.296150893, -0.302005947, -0.307849646
    .float    -0.313681751, -0.319502026, -0.325310290, -0.331106305
    .float    -0.336889863, -0.342660725, -0.348418683, -0.354163527
    .float    -0.359895051, -0.365612984, -0.371317208, -0.377007425
    .float    -0.382683426, -0.388345033, -0.393992037, -0.399624199
    .float    -0.405241311, -0.410843164, -0.416429549, -0.422000259
    .float    -0.427555084, -0.433093816, -0.438616246, -0.444122136
    .float    -0.449611336, -0.455083579, -0.460538715, -0.465976506
    .float    -0.471396744, -0.476799220, -0.482183784, -0.487550169
    .float    -0.492898196, -0.498227656, -0.503538370, -0.508830130
    .float    -0.514102757, -0.519356012, -0.524589658, -0.529803634
    .float    -0.534997642, -0.540171444, -0.545324981, -0.550457954
    .float    -0.555570245, -0.560661554, -0.565731823, -0.570780754
    .float    -0.575808167, -0.580813944, -0.585797846, -0.590759695
    .float    -0.595699310, -0.600616455, -0.605511069, -0.610382795
    .float    -0.615231574, -0.620057225, -0.624859512, -0.629638255
    .float    -0.634393275, -0.639124453, -0.643831551, -0.648514390
    .float    -0.653172851, -0.657806695, -0.662415802, -0.666999936
    .float    -0.671558976, -0.676092684, -0.680601001, -0.685083687
    .float    -0.689540565, -0.693971455, -0.698376238, -0.702754736
    .float    -0.707106769, -0.711432219, -0.715730846, -0.720002532
    .float    -0.724247098, -0.728464365, -0.732654274, -0.736816585
    .float    -0.740951121, -0.745057762, -0.749136388, -0.753186822
    .float    -0.757208824, -0.761202395, -0.765167236, -0.769103348
    .float    -0.773010433, -0.776888490, -0.780737221, -0.784556568
    .float    -0.788346410, -0.792106569, -0.795836926, -0.799537241
    .float    -0.803207517, -0.806847572, -0.810457170, -0.814036310
    .float    -0.817584813, -0.821102500, -0.824589312, -0.828045070
    .float    -0.831469595, -0.834862888, -0.838224709, -0.841554999
    .float    -0.844853580, -0.848120332, -0.851355195, -0.854557991
    .float    -0.857728601, -0.860866964, -0.863972843, -0.867046237
    .float    -0.870086968, -0.873094976, -0.876070082, -0.879012227
    .float    -0.881921291, -0.884797096, -0.887639642, -0.890448749
    .float    -0.893224299, -0.895966232, -0.898674488, -0.901348829
    .float    -0.903989315, -0.906595707, -0.909168005, -0.911706030
    .float    -0.914209783, -0.916679084, -0.919113874, -0.921514034
    .float    -0.923879504, -0.926210225, -0.928506076, -0.930766940
    .float    -0.932992816, -0.935183525, -0.937339008, -0.939459205
    .float    -0.941544056, -0.943593442, -0.945607305, -0.947585583
    .float    -0.949528158, -0.951435030, -0.953306019, -0.955141187
    .float    -0.956940353, -0.958703458, -0.960430503, -0.962121427
    .float    -0.963776052, -0.965394437, -0.966976464, -0.968522072
    .float    -0.970031261, -0.971503913, -0.972939968, -0.974339366
    .float    -0.975702107, -0.977028131, -0.978317380, -0.979569793
    .float    -0.980785251, -0.981963873, -0.983105481, -0.984210074
    .float    -0.985277653, -0.986308098, -0.987301409, -0.988257587
    .float    -0.989176512, -0.990058184, -0.990902662, -0.991709769
    .float    -0.992479563, -0.993211925, -0.993906975, -0.994564593
    .float    -0.995184720, -0.995767415, -0.996312618, -0.996820271
    .float    -0.997290432, -0.997723043, -0.998118103, -0.998475552
    .float    -0.998795450, -0.999077737, -0.999322355, -0.999529421
    .float    -0.999698818, -0.999830604, -0.999924719, -0.999981165
;;#############################################################################
;; End of File
;;#############################################################################
