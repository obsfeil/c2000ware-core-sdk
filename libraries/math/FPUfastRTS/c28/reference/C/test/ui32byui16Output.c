//#############################################################################
//! \file ui32byui16Output.c
//! \brief  FID Ouput Vector (256) 
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

const uint32_t test_quotient[256] = {
            2302,        74027,        26170,        80120, 
         7536205,        33735,        77125,         6964, 
          224058,        64927,       264725,       171920, 
           28281,        45231,         5851,        61853, 
           44983,        94966,        28573,        26287, 
           13932,       158701,        42278,        12580, 
          353479,        75622,        39262,       124980, 
          137566,        22130,        67052,        58150, 
          116540,       156876,       137271,        11069, 
           83139,        36344,        30045,       108284, 
           17013,       180095,        35979,        38932, 
          210919,       821964,       160346,        32740, 
          516198,       118533,        63283,       205588, 
          327389,        54026,       715026,        45364, 
           12494,        93508,       121558,        82537, 
           20514,        63014,        35737,    115049320, 
           70081,       823320,       537381,       578637, 
           17244,       231359,       172184,         2977, 
           88669,       101228,        39435,        54032, 
          185171,        44703,        55929,        22070, 
          302099,       427528,        67821,        77860, 
          158638,       274112,        60759,        35814, 
            7271,       545485,         2923,        31159, 
            5400,       904601,       141881,        81455, 
          620209,       136540,        30937,        62460, 
          280630,       224503,        63387,       343112, 
           59607,        56518,          417,        70663, 
           18563,        32814,        55215,        21808, 
           60056,       270328,       113252,        32638, 
          270081,        13786,        86153,        78540, 
           21599,       410397,       195330,        18841, 
           32702,       204207,        42565,        12931, 
          709986,        49001,        46223,        58999, 
           60958,       158347,        19784,        95827, 
          140554,        68723,        18609,        90473, 
           19638,       104591,       671889,        56067, 
           26871,        78029,        46117,       805952, 
          378064,        40818,       147951,       166757, 
           12635,        60315,        70736,       136865, 
           65887,        43452,       263098,        75359, 
           13823,        49867,       115297,        52486, 
          223223,        47427,       387360,       135563, 
           42904,       164086,        44554,        95153, 
           80125,       113495,        77034,        46968, 
           59352,        18216,       310595,       330860, 
          174179,        64747,        83772,       242749, 
           38471,        86745,       110092,        32288, 
            5572,       132107,         7433,       304802, 
          505033,       125638,        13593,        92250, 
           42707,         1526,        91140,        62595, 
            8318,        34092,       168324,        67666, 
           79856,        64872,        27518,        37572, 
          121021,        36747,       100505,       116492, 
           71765,        22098,        27350,        75787, 
            2497,         1053,        60264,        50015, 
          273187,        56039,        21814,       111217, 
           23308,       141489,        28062,       287142, 
           79925,        91145,        26649,       143228, 
          174474,        13263,       114183,        57251, 
          134098,      1237047,        19193,       675884, 
          197851,        22314,        24789,        85201, 
           14635,        43130,        38675,       109638, 
          506738,        15958,           68,        63039, 
           69841,       372528,       457979,        36968, 
}; 

const uint16_t test_remainder[256] = {
           28896,        16570,         3389,        22727, 
             335,        11887,        21858,        11636, 
             646,        51816,          188,        10873, 
           45642,        32925,        34294,        10808, 
           18630,         2889,        37463,        59618, 
           22114,         1720,        12272,        11583, 
            6621,         7195,        12939,         4442, 
            7509,        22235,        13905,        21294, 
            3668,         5691,        24654,        35751, 
            9301,        15590,         3898,         2187, 
           59615,          783,        59019,          523, 
            5017,         3523,        18135,        47194, 
             607,         3640,         4659,         3191, 
             331,        32530,         2156,        33415, 
            3899,        31592,         9962,        14136, 
           47218,        32610,        11033,            6, 
            7413,          115,         3032,         6994, 
           12935,         7318,         2568,         9085, 
           22232,        27477,         6740,        31483, 
           15072,        29532,         5494,        29368, 
            7909,         2113,        25279,        22067, 
             760,         2694,        28487,         7971, 
           49055,         5796,          436,        57963, 
             472,         3003,        10450,         4844, 
            2602,        14091,        29681,        27201, 
            2524,         7301,         1017,         1021, 
           49322,         4673,         4215,        43490, 
           49659,        29659,        29095,        53311, 
            7865,         8992,        35232,        11409, 
            1288,        13091,        20535,         6270, 
            1334,         1970,         6612,        17418, 
           29983,         4712,        35656,        48237, 
            1226,         3057,        12202,        20128, 
           15089,         8269,        14514,         8427, 
           10021,        34197,        28063,        33784, 
            8406,         5181,         3089,        44461, 
           10386,        13906,        11046,         4335, 
            5422,        41367,          771,        22920, 
            3284,        26013,        11190,        14167, 
            2870,        26203,          128,        10035, 
           34435,        18431,          663,        43947, 
            6064,        12539,         7049,        15034, 
           14564,         1413,         2236,        27178, 
             215,          780,        25899,         7136, 
            9947,         6026,        11351,         1698, 
            7758,        26317,        29876,         3227, 
           18884,        19418,        21538,        19429, 
           25964,        14926,        33050,         6150, 
             674,        12915,        45469,        15361, 
            9777,         5457,        20261,        26134, 
            1198,        36681,        12013,         9407, 
           41619,        30375,        28784,        20094, 
           12029,        39390,        14433,        32587, 
           28961,         6738,         5560,          640, 
           10054,        13063,        38613,        12414, 
           13498,        53585,        42436,         5234, 
           40183,        21231,        15667,         6537, 
            1431,        15323,        19444,        15665, 
            6098,        14615,         1766,        30880, 
            5293,            1,        11258,         1550, 
            7632,        24672,        11977,         3779, 
           28005,        38980,        27545,         5773, 
            3574,        29132,         9116,        51212, 
            7296,         2426,         3586,         5556, 
}; 


// End of File
