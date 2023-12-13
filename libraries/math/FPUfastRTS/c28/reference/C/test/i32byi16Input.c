//#############################################################################
//! \file i32byi16Input.c
//! \brief  FID Input Vectors (256) 
//! \author Vishal Coelho 
//! \date   15-Apr-2016
//! 
//
//  Group:            C2000
//  Target Family:    $DEVICE$
//
//#############################################################################
//
//
// $Copyright:
// Copyright (C) 2022 Texas Instruments Incorporated - http://www.ti.com
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################


#include <stdint.h>

const int32_t test_dividend[256] = {
     -2011386176,    966094086,  -1528326274,    583801231, 
      1244885785,    284555011,   -526503188,   1381201848, 
      -838030456,   -775786639,   1223979313,     16047874, 
     -1026511220,    998474773,  -1447618878,   1808504307, 
     -1193041144,  -1788386941,  -1830937885,   1157715553, 
      1364412440,   1032619810,   1109170094,   1980817356, 
      -144203690,   1232640529,   -332567549,   1905805659, 
     -2141838352,   2067029921,    301481717,   -659403948, 
       246973732,   -859918155,  -1464271078,    709770343, 
       791144929,   1255888648,   -650153090,  -1073420847, 
      -665705391,   -736017410,   1836036382,   1099822722, 
      -909508144,    456039095,   1142587418,   1486712997, 
      1726496072,    411059068,  -1853123148,  -1210994484, 
      1586597389,   -368431511,    692388035,   1217558117, 
     -1082821352,    233754835,  -1161421884,  -2117793553, 
      1145207490,  -2053710555,   -459117253,  -1062831938, 
     -1270378650,    696985004,   1781303669,  -2117837431, 
      1058379586,   1287076260,   1751483114,   2038279531, 
     -1632673874,     81474513,   1382871286,    588508439, 
      1949530223,   1919534156,   2004054268,  -1858242561, 
      -268286019,   -769486587,  -1571734441,  -1569444829, 
      1314035195,    106361705,   1908069159,   2097404658, 
      -387001551,   -553243855,  -1173152740,   -231795267, 
     -1004071280,   -175679651,   -288169422,  -1032409489, 
     -1573184208,   -346911301,     29465671,   -754520291, 
       793232357,   -244411510,   -276324968,   1258526416, 
      1355304287,   1082815602,   1242344807,      5443669, 
       237004553,    561565850,  -1726623390,  -1092312481, 
       497035701,   -837690604,   1146617122,   -999743436, 
     -1977805363,   -873760513,    242085724,   2014659512, 
       812284448,    935793480,    253528138,    143255231, 
      1613722302,   -459138049,   -180101130,  -1253077303, 
      1104979820,    200540733,   -612513048,    863278933, 
     -1678376597,  -2119090624,    417909250,    683656000, 
       343625002,   1760728758,    584141975,    109784738, 
     -1032411010,  -1927706446,    996218218,  -1441857497, 
      -943187679,  -1033251244,    202275606,    177246718, 
      1237436702,   1587443772,   1234977173,   2016177288, 
     -1372379019,   1849408462,  -1953557817,  -1113917441, 
     -2109451583,    736988617,   1738659583,    311025689, 
     -1479782490,     10168050,    290910496,  -1338862529, 
      -755070440,    927873321,    227327072,  -1536388229, 
      -513834600,   -444231710,    329603073,  -2064154828, 
       333203825,   1856268083,  -1688468552,    997075621, 
      2020879981,    467659827,    943456620,   -847172311, 
      -175997478,  -1941202325,   -492408959,   -593923625, 
      -912319536,   1360270842,   -212480215,   1316976646, 
      1246283265,   -932188837,  -1854097702,  -1911557967, 
       590655238,   -325190953,   1741743877,   -355104101, 
     -1485808170,    171795529,   1877293130,    691296739, 
      -452442844,  -1035127740,   1494271348,   1911501286, 
      -528281677,  -1858517456,  -1367595890,    325333530, 
     -1349113517,   -895722491,   -164651407,   -657226887, 
      -780972301,   -172165570,  -1134322681,  -2028289554, 
       680552411,  -1465427540,   1299925970,   -392646891, 
      -741346236,   1056625213,   1058073440,  -1400352766, 
     -1642632568,  -1399998173,    547218192,   1468407466, 
        43305531,  -1435533789,    920434179,   1748211875, 
     -1208871197,   1593267286,  -1237655198,   1445964907, 
      1543189004,    100405481,    -97226059,   1674535303, 
     -1867983496,     40613748,    518823232,   1003164515, 
     -1159657358,  -2053544657,  -1550530912,   1157525670, 
      2017626088,   -486214281,   2119256219,   -745634379, 
     -1558381483,   -494979390,    269018852,    574818780, 
}; 

const int16_t test_divisor[256] = {
            2726,       -12125,       -22327,       -22766, 
          -23793,        13749,        -2303,       -25345, 
           13164,       -20973,        19900,          914, 
            3174,       -19147,        18650,         1735, 
            4654,        -5110,        14493,       -27975, 
            6216,        23722,        -3356,         9999, 
          -12880,         7041,       -14490,        19631, 
           19409,        29758,        -3648,        -2826, 
            6541,        22453,       -30723,       -20495, 
           29070,        29354,        -3082,        20370, 
           28106,        11319,        -8367,        -6181, 
           -4010,        11707,        -2290,        29704, 
           -9523,       -10550,        25942,         2977, 
           16336,       -24584,        -3065,       -27869, 
           10704,        13346,        27455,        10490, 
           12458,        23181,        -2104,        -2722, 
           20060,        21283,       -20288,       -31086, 
          -29045,       -23401,       -21534,         8247, 
          -30834,        -1814,        11694,       -25245, 
          -17298,       -13823,       -21446,       -11554, 
           19733,       -13132,        18063,         3458, 
            3584,        15115,        17932,        26269, 
          -23713,        19272,       -20355,       -30869, 
          -24420,       -24004,       -24359,        28524, 
          -14862,        29010,         9053,        24413, 
           -8712,       -17289,       -20492,         2991, 
          -16049,       -12726,       -31749,         5733, 
           30313,        22927,       -32248,         8783, 
           -9222,       -25293,         2675,        -5478, 
            1120,        25304,       -22977,        -4281, 
          -28899,        -7797,        14572,       -26534, 
           10956,       -13343,         6459,       -22816, 
           -4170,       -31937,       -17759,       -15488, 
             746,       -18672,       -10086,        16240, 
           -5661,       -29114,        -7208,        -1673, 
           21319,       -12869,        21088,         4304, 
          -29204,       -15728,         5839,        -1329, 
          -19749,       -17104,        18362,         7687, 
          -23323,        14164,        -6455,        -2466, 
           13584,        -6475,       -31825,       -27876, 
            5968,        -3539,        27958,       -26549, 
           -8165,         3014,       -25449,        26506, 
            8734,        26568,         8555,       -31836, 
          -12028,       -25437,         8484,       -28789, 
           11402,        -1479,       -12744,         1070, 
           13567,        20552,       -12072,       -12367, 
          -10160,        10898,        23662,        17155, 
           24630,        24328,       -21444,        22951, 
           30119,        17708,        24576,       -28350, 
            9620,       -11528,         9197,        24886, 
           -8282,        17480,       -21752,         1292, 
            8352,        14018,       -12688,       -15487, 
           27262,         7538,       -26662,         8368, 
          -20183,        18150,        23887,       -10907, 
          -23894,        17397,       -11888,       -16228, 
          -19656,       -28245,         3401,        -6304, 
           16391,         -840,        -7551,       -28744, 
          -18764,         2875,        -5856,        26277, 
          -29079,        -3703,         2478,       -23982, 
            2683,        23420,       -19791,       -22570, 
          -28746,        10555,       -31549,       -13691, 
           31052,        17343,       -16798,        11934, 
          -23734,         8507,        23396,        26200, 
           -9938,         -898,        11764,        13377, 
}; 


// End of File
