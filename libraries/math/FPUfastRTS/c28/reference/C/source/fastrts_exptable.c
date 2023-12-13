//#############################################################################
//! \file exptable_f64.c
//! \brief  Exponent Lookup Table (710) 
//! \author Vishal Coelho 
//! \date   05-Jan-2017
//! 
//
//  Group:			C2000
//  Target Family:	$DEVICE$
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

#include "fastrts.h"

const fsize_t FPUINV1  =  1.0000000000000; 
const fsize_t FPUINV2  =  0.5000000000000; 
const fsize_t FPUINV3  =  0.3333333333333; 
const fsize_t FPUINV4  =  0.2500000000000; 
const fsize_t FPUINV5  =  0.2000000000000; 
const fsize_t FPUINV6  =  0.1666666666667; 
const fsize_t FPUINV7  =  0.1428571428571; 
const fsize_t FPUINV8  =  0.1250000000000; 
const fsize_t FPUINV9  =  0.1111111111111; 
const fsize_t FPUINV10 =  0.1000000000000; 
const fsize_t FPUINV11 =  0.0909090909091; 
const fsize_t FPUINV12 =  0.0833333333333; 
const fsize_t FPUINV13 =  0.0769230769231; 
const fsize_t FPUINV14 =  0.0714285714286; 
const fsize_t FPULOG10 =  0.4342944819033; 

#if USE_FPU64 == 1
//This table has 710 entries
const fsize_t FastRTS_expTable[710] = {
	1.0000000000000e+00, // exp(  0)
	2.7182818284590e+00, // exp(  1)
	7.3890560989307e+00, // exp(  2)
	2.0085536923188e+01, // exp(  3)
	5.4598150033144e+01, // exp(  4)
	1.4841315910258e+02, // exp(  5)
	4.0342879349274e+02, // exp(  6)
	1.0966331584285e+03, // exp(  7)
	2.9809579870417e+03, // exp(  8)
	8.1030839275754e+03, // exp(  9)
	2.2026465794807e+04, // exp( 10)
	5.9874141715198e+04, // exp( 11)
	1.6275479141900e+05, // exp( 12)
	4.4241339200892e+05, // exp( 13)
	1.2026042841648e+06, // exp( 14)
	3.2690173724721e+06, // exp( 15)
	8.8861105205079e+06, // exp( 16)
	2.4154952753575e+07, // exp( 17)
	6.5659969137331e+07, // exp( 18)
	1.7848230096319e+08, // exp( 19)
	4.8516519540979e+08, // exp( 20)
	1.3188157344832e+09, // exp( 21)
	3.5849128461316e+09, // exp( 22)
	9.7448034462489e+09, // exp( 23)
	2.6489122129843e+10, // exp( 24)
	7.2004899337386e+10, // exp( 25)
	1.9572960942884e+11, // exp( 26)
	5.3204824060180e+11, // exp( 27)
	1.4462570642915e+12, // exp( 28)
	3.9313342971440e+12, // exp( 29)
	1.0686474581524e+13, // exp( 30)
	2.9048849665247e+13, // exp( 31)
	7.8962960182681e+13, // exp( 32)
	2.1464357978592e+14, // exp( 33)
	5.8346174252745e+14, // exp( 34)
	1.5860134523134e+15, // exp( 35)
	4.3112315471152e+15, // exp( 36)
	1.1719142372803e+16, // exp( 37)
	3.1855931757114e+16, // exp( 38)
	8.6593400423994e+16, // exp( 39)
	2.3538526683702e+17, // exp( 40)
	6.3984349353005e+17, // exp( 41)
	1.7392749415205e+18, // exp( 42)
	4.7278394682293e+18, // exp( 43)
	1.2851600114359e+19, // exp( 44)
	3.4934271057485e+19, // exp( 45)
	9.4961194206024e+19, // exp( 46)
	2.5813128861901e+20, // exp( 47)
	7.0167359120976e+20, // exp( 48)
	1.9073465724951e+21, // exp( 49)
	5.1847055285871e+21, // exp( 50)
	1.4093490824269e+22, // exp( 51)
	3.8310080007166e+22, // exp( 52)
	1.0413759433029e+23, // exp( 53)
	2.8307533032747e+23, // exp( 54)
	7.6947852651420e+23, // exp( 55)
	2.0916594960130e+24, // exp( 56)
	5.6857199993359e+24, // exp( 57)
	1.5455389355901e+25, // exp( 58)
	4.2012104037905e+25, // exp( 59)
	1.1420073898157e+26, // exp( 60)
	3.1042979357019e+26, // exp( 61)
	8.4383566687415e+26, // exp( 62)
	2.2937831594696e+27, // exp( 63)
	6.2351490808116e+27, // exp( 64)
	1.6948892444103e+28, // exp( 65)
	4.6071866343313e+28, // exp( 66)
	1.2523631708422e+29, // exp( 67)
	3.4042760499317e+29, // exp( 68)
	9.2537817255878e+29, // exp( 69)
	2.5154386709192e+30, // exp( 70)
	6.8376712297627e+30, // exp( 71)
	1.8586717452841e+31, // exp( 72)
	5.0523936302761e+31, // exp( 73)
	1.3733829795402e+32, // exp( 74)
	3.7332419967990e+32, // exp( 75)
	1.0148003881139e+33, // exp( 76)
	2.7585134545232e+33, // exp( 77)
	7.4984169969901e+33, // exp( 78)
	2.0382810665127e+34, // exp( 79)
	5.5406223843935e+34, // exp( 80)
	1.5060973145850e+35, // exp( 81)
	4.0939969621275e+35, // exp( 82)
	1.1128637547918e+36, // exp( 83)
	3.0250773222011e+36, // exp( 84)
	8.2230127146229e+36, // exp( 85)
	2.2352466037347e+37, // exp( 86)
	6.0760302250569e+37, // exp( 87)
	1.6516362549940e+38, // exp( 88)
	4.4896128191743e+38, // exp( 89)
	1.2204032943178e+39, // exp( 90)
	3.3174000983357e+39, // exp( 91)
	9.0176284050343e+39, // exp( 92)
	2.4512455429201e+40, // exp( 93)
	6.6631762164109e+40, // exp( 94)
	1.8112390828890e+41, // exp( 95)
	4.9234582860121e+41, // exp( 96)
	1.3383347192043e+42, // exp( 97)
	3.6379709476088e+42, // exp( 98)
	9.8890303193469e+42, // exp( 99)
	2.6881171418161e+43, // exp(100)
	7.3070599793681e+43, // exp(101)
	1.9862648361377e+44, // exp(102)
	5.3992276105802e+44, // exp(103)
	1.4676622301554e+45, // exp(104)
	3.9895195705472e+45, // exp(105)
	1.0844638552900e+46, // exp(106)
	2.9478783914555e+46, // exp(107)
	8.0131642640006e+46, // exp(108)
	2.1782038807290e+47, // exp(109)
	5.9209720276647e+47, // exp(110)
	1.6094870669615e+48, // exp(111)
	4.3750394472613e+48, // exp(112)
	1.1892590228282e+49, // exp(113)
	3.2327411910849e+49, // exp(114)
	8.7875016358370e+49, // exp(115)
	2.3886906014250e+50, // exp(116)
	6.4931342556645e+50, // exp(117)
	1.7650168856918e+51, // exp(118)
	4.7978133272993e+51, // exp(119)
	1.3041808783936e+52, // exp(120)
	3.5451311827612e+52, // exp(121)
	9.6366656736032e+52, // exp(122)
	2.6195173187491e+53, // exp(123)
	7.1205863268893e+53, // exp(124)
	1.9355760420357e+54, // exp(125)
	5.2614411826664e+54, // exp(126)
	1.4302079958348e+55, // exp(127)
	3.8877084059946e+55, // exp(128)
	1.0567887114363e+56, // exp(129)
	2.8726495508178e+56, // exp(130)
	7.8086710735192e+56, // exp(131)
	2.1226168683561e+57, // exp(132)
	5.7698708620330e+57, // exp(133)
	1.5684135116820e+58, // exp(134)
	4.2633899483147e+58, // exp(135)
	1.1589095424139e+59, // exp(136)
	3.1502427499715e+59, // exp(137)
	8.5632476224822e+59, // exp(138)
	2.3277320404789e+60, // exp(139)
	6.3274317071556e+60, // exp(140)
	1.7199742630377e+61, // exp(141)
	4.6753747846325e+61, // exp(142)
	1.2708986318302e+62, // exp(143)
	3.4546606567175e+62, // exp(144)
	9.3907412866477e+62, // exp(145)
	2.5526681395255e+63, // exp(146)
	6.9388714177584e+63, // exp(147)
	1.8861808084907e+64, // exp(148)
	5.1271710169083e+64, // exp(149)
	1.3937095806664e+65, // exp(150)
	3.7884954272747e+65, // exp(151)
	1.0298198277161e+66, // exp(152)
	2.7993405242675e+66, // exp(153)
	7.6093964787854e+66, // exp(154)
	2.0684484173822e+67, // exp(155)
	5.6226257460750e+67, // exp(156)
	1.5283881393782e+68, // exp(157)
	4.1545897061040e+68, // exp(158)
	1.1293345702806e+69, // exp(159)
	3.0698496406442e+69, // exp(160)
	8.3447164942648e+69, // exp(161)
	2.2683291210002e+70, // exp(162)
	6.1659578305794e+70, // exp(163)
	1.6760811125909e+71, // exp(164)
	4.5560608313792e+71, // exp(165)
	1.2384657367292e+72, // exp(166)
	3.3664989073202e+72, // exp(167)
	9.1510928052956e+72, // exp(168)
	2.4875249283177e+73, // exp(169)
	6.7617938104850e+73, // exp(170)
	1.8380461242828e+74, // exp(171)
	4.9963273795076e+74, // exp(172)
	1.3581425924748e+75, // exp(173)
	3.6918143295805e+75, // exp(174)
	1.0035391806143e+76, // exp(175)
	2.7279023188106e+76, // exp(176)
	7.4152073030342e+76, // exp(177)
	2.0156623266095e+77, // exp(178)
	5.4791382747320e+77, // exp(179)
	1.4893842007818e+78, // exp(180)
	4.0485660085793e+78, // exp(181)
	1.1005143412438e+79, // exp(182)
	2.9915081357616e+79, // exp(183)
	8.1317622051281e+79, // exp(184)
	2.2104421435550e+80, // exp(185)
	6.0086047116856e+80, // exp(186)
	1.6333081002168e+81, // exp(187)
	4.4397917290944e+81, // exp(188)
	1.2068605179340e+82, // exp(189)
	3.2805870153847e+82, // exp(190)
	8.9175600705988e+82, // exp(191)
	2.4240441494101e+83, // exp(192)
	6.5892351627239e+83, // exp(193)
	1.7911398206276e+84, // exp(194)
	4.8688228266413e+84, // exp(195)
	1.3234832615646e+85, // exp(196)
	3.5976005001807e+85, // exp(197)
	9.7792920656963e+85, // exp(198)
	2.6582871917376e+86, // exp(199)
	7.2259737681257e+86, // exp(200)
	1.9642233186818e+87, // exp(201)
	5.3393125542082e+87, // exp(202)
	1.4513756292568e+88, // exp(203)
	3.9452479992769e+88, // exp(204)
	1.0724295945199e+89, // exp(205)
	2.9151658790851e+89, // exp(206)
	7.9242424360609e+89, // exp(207)
	2.1540324218248e+90, // exp(208)
	5.8552671901581e+90, // exp(209)
	1.5916266403779e+91, // exp(210)
	4.3264897742306e+91, // exp(211)
	1.1760618534305e+92, // exp(212)
	3.1968675653240e+92, // exp(213)
	8.6899870108103e+92, // exp(214)
	2.3621833781031e+93, // exp(215)
	6.4210801521856e+93, // exp(216)
	1.7454305496765e+94, // exp(217)
	4.7445721460230e+94, // exp(218)
	1.2897084248347e+95, // exp(219)
	3.5057909752387e+95, // exp(220)
	9.5297279023672e+95, // exp(221)
	2.5904486187164e+96, // exp(222)
	7.0415694078136e+96, // exp(223)
	1.9140970165093e+97, // exp(224)
	5.2030551378849e+97, // exp(225)
	1.4143370233783e+98, // exp(226)
	3.8445666299661e+98, // exp(227)
	1.0450615608537e+99, // exp(228)
	2.8407718504896e+99, // exp(229)
	7.7220184999838e+99, // exp(230)
	2.0990622567531e+100, // exp(231)
	5.7058427893361e+100, // exp(232)
	1.5510088770296e+101, // exp(233)
	4.2160792462083e+101, // exp(234)
	1.1460491602311e+102, // exp(235)
	3.1152846067771e+102, // exp(236)
	8.4682215370803e+102, // exp(237)
	2.3019012723611e+103, // exp(238)
	6.2572163995659e+103, // exp(239)
	1.7008877635676e+104, // exp(240)
	4.6234922999541e+104, // exp(241)
	1.2567955102986e+105, // exp(242)
	3.4163243977335e+105, // exp(243)
	9.2865325304802e+105, // exp(244)
	2.5243412626998e+106, // exp(245)
	6.8618709832263e+106, // exp(246)
	1.8652499202934e+107, // exp(247)
	5.0702749638683e+107, // exp(248)
	1.3782436299574e+108, // exp(249)
	3.7464546145027e+108, // exp(250)
	1.0183919499749e+109, // exp(251)
	2.7682763318658e+109, // exp(252)
	7.5249552490640e+109, // exp(253)
	2.0454949113498e+110, // exp(254)
	5.5602316477277e+110, // exp(255)
	1.5114276650041e+111, // exp(256)
	4.1084863568109e+111, // exp(257)
	1.1168023806191e+112, // exp(258)
	3.0357836172167e+112, // exp(259)
	8.2521154418139e+112, // exp(260)
	2.2431575451829e+113, // exp(261)
	6.0975343934415e+113, // exp(262)
	1.6574816940096e+114, // exp(263)
	4.5055023698298e+114, // exp(264)
	1.2247225219988e+115, // exp(265)
	3.3291409764537e+115, // exp(266)
	9.0495434206726e+115, // exp(267)
	2.4599209436265e+116, // exp(268)
	6.6867584005059e+116, // exp(269)
	1.8176493851391e+117, // exp(270)
	4.9408832941334e+117, // exp(271)
	1.3430713274980e+118, // exp(272)
	3.6508463838621e+118, // exp(273)
	9.9240293837477e+118, // exp(274)
	2.6976308738935e+119, // exp(275)
	7.3329209843948e+119, // exp(276)
	1.9932945861406e+120, // exp(277)
	5.4183364522719e+120, // exp(278)
	1.4728565518688e+121, // exp(279)
	4.0036392008718e+121, // exp(280)
	1.0883019687436e+122, // exp(281)
	2.9583114655119e+122, // exp(282)
	8.0415242996232e+122, // exp(283)
	2.1859129376778e+123, // exp(284)
	5.9419274170830e+123, // exp(285)
	1.6151833323879e+124, // exp(286)
	4.3905235020600e+124, // exp(287)
	1.1934680253072e+125, // exp(288)
	3.2441824460395e+125, // exp(289)
	8.8186021912750e+125, // exp(290)
	2.3971446088952e+126, // exp(291)
	6.5161146305483e+126, // exp(292)
	1.7712635992376e+127, // exp(293)
	4.8147936552185e+127, // exp(294)
	1.3087966100760e+128, // exp(295)
	3.5576780423184e+128, // exp(296)
	9.6707715739420e+128, // exp(297)
	2.6287882636625e+129, // exp(298)
	7.1457873679801e+129, // exp(299)
	1.9424263952413e+130, // exp(300)
	5.2800623733035e+130, // exp(301)
	1.4352697602481e+131, // exp(302)
	3.9014677082193e+131, // exp(303)
	1.0605288775572e+132, // exp(304)
	2.8828163764198e+132, // exp(305)
	7.8363073708062e+132, // exp(306)
	2.1301291928282e+133, // exp(307)
	5.7902914771351e+133, // exp(308)
	1.5739644103778e+134, // exp(309)
	4.2784788553711e+134, // exp(310)
	1.1630111326002e+135, // exp(311)
	3.1613920280426e+135, // exp(312)
	8.5935545024634e+135, // exp(313)
	2.3359703045919e+136, // exp(314)
	6.3498256307920e+136, // exp(315)
	1.7260615626066e+137, // exp(316)
	4.6919217804350e+137, // exp(317)
	1.2753965716308e+138, // exp(318)
	3.4668873247429e+138, // exp(319)
	9.4239768161636e+138, // exp(320)
	2.5617024931197e+139, // exp(321)
	6.9634293369655e+139, // exp(322)
	1.8928563430432e+140, // exp(323)
	5.1453170011777e+140, // exp(324)
	1.3986421705963e+141, // exp(325)
	3.8019035968484e+141, // exp(326)
	1.0334645460866e+142, // exp(327)
	2.8092478959839e+142, // exp(328)
	7.6363275072898e+142, // exp(329)
	2.0757690299228e+143, // exp(330)
	5.6425252341172e+143, // exp(331)
	1.5337973810522e+144, // exp(332)
	4.1692935494524e+144, // exp(333)
	1.1333314892988e+145, // exp(334)
	3.0807143929813e+145, // exp(335)
	8.3742499531134e+145, // exp(336)
	2.2763571474522e+146, // exp(337)
	6.1877802690022e+146, // exp(338)
	1.6820130663726e+147, // exp(339)
	4.5721855535513e+147, // exp(340)
	1.2428488906562e+148, // exp(341)
	3.3784135549911e+148, // exp(342)
	9.1834801755521e+148, // exp(343)
	2.4963287283217e+149, // exp(344)
	6.7857250200572e+149, // exp(345)
	1.8445513014941e+150, // exp(346)
	5.0140102845120e+150, // exp(347)
	1.3629493044096e+151, // exp(348)
	3.7048803272874e+151, // exp(349)
	1.0070908870281e+152, // exp(350)
	2.7375568578151e+152, // exp(351)
	7.4414510609723e+152, // exp(352)
	2.0227961196408e+153, // exp(353)
	5.4985299346971e+153, // exp(354)
	1.4946554004725e+154, // exp(355)
	4.0628946149127e+154, // exp(356)
	1.1044092602661e+155, // exp(357)
	3.0020956233633e+155, // exp(358)
	8.1605419802849e+155, // exp(359)
	2.2182652975386e+156, // exp(360)
	6.0298702490004e+156, // exp(361)
	1.6390886725823e+157, // exp(362)
	4.4555049539137e+157, // exp(363)
	1.2111318152833e+158, // exp(364)
	3.2921976053531e+158, // exp(365)
	8.9491209263278e+158, // exp(366)
	2.4326232794720e+159, // exp(367)
	6.6125556560751e+159, // exp(368)
	1.7974789879583e+160, // exp(369)
	4.8860544700040e+160, // exp(370)
	1.3281673078673e+161, // exp(371)
	3.6103330581290e+161, // exp(372)
	9.8139027465971e+161, // exp(373)
	2.6676953502339e+162, // exp(374)
	7.2515477944056e+162, // exp(375)
	1.9711750597735e+163, // exp(376)
	5.3582093456939e+163, // exp(377)
	1.4565123097479e+164, // exp(378)
	3.9592109445147e+164, // exp(379)
	1.0762251165510e+165, // exp(380)
	2.9254831776519e+165, // exp(381)
	7.9522877612739e+165, // exp(382)
	2.1616559316148e+166, // exp(383)
	5.8759900382892e+166, // exp(384)
	1.5972596945288e+167, // exp(385)
	4.3418020029677e+167, // exp(386)
	1.1802241487434e+168, // exp(387)
	3.2081818570378e+168, // exp(388)
	8.7207424443778e+168, // exp(389)
	2.3705435717224e+169, // exp(390)
	6.4438055145833e+169, // exp(391)
	1.7516079436416e+170, // exp(392)
	4.7613640437855e+170, // exp(393)
	1.2942729358900e+171, // exp(394)
	3.5181986026962e+171, // exp(395)
	9.5634553306191e+171, // exp(396)
	2.5996166842502e+172, // exp(397)
	7.0664907937562e+172, // exp(398)
	1.9208713515641e+173, // exp(399)
	5.2214696897641e+173, // exp(400)
	1.4193426175536e+174, // exp(401)
	3.8581732456533e+174, // exp(402)
	1.0487602224706e+175, // exp(403)
	2.8508258551526e+175, // exp(404)
	7.7493481181625e+175, // exp(405)
	2.1064912172004e+176, // exp(406)
	5.7260367975245e+176, // exp(407)
	1.5564981775799e+177, // exp(408)
	4.2310007121450e+177, // exp(409)
	1.1501052352021e+178, // exp(410)
	3.1263101616655e+178, // exp(411)
	8.4981921025821e+178, // exp(412)
	2.3100481167203e+179, // exp(413)
	6.2793618185469e+179, // exp(414)
	1.7069075125676e+180, // exp(415)
	4.6398556742726e+180, // exp(416)
	1.2612435366048e+181, // exp(417)
	3.4284153868142e+181, // exp(418)
	9.3193992463864e+181, // exp(419)
	2.5332753623607e+182, // exp(420)
	6.8861563839881e+182, // exp(421)
	1.8718513766522e+183, // exp(422)
	5.0882195827298e+183, // exp(423)
	1.3831214830944e+184, // exp(424)
	3.7597139940468e+184, // exp(425)
	1.0219962230221e+185, // exp(426)
	2.7780737617946e+185, // exp(427)
	7.5515874248052e+185, // exp(428)
	2.0527342872868e+186, // exp(429)
	5.5799103117865e+186, // exp(430)
	1.5167768804960e+187, // exp(431)
	4.1230270320792e+187, // exp(432)
	1.1207549459546e+188, // exp(433)
	3.0465278037441e+188, // exp(434)
	8.2813211688128e+188, // exp(435)
	2.2510964848817e+189, // exp(436)
	6.1191146689619e+189, // exp(437)
	1.6633478210896e+190, // exp(438)
	4.5214481564749e+190, // exp(439)
	1.2290570362065e+191, // exp(440)
	3.3409234076600e+191, // exp(441)
	9.0815713893156e+191, // exp(442)
	2.4686270481430e+192, // exp(443)
	6.7104240462097e+192, // exp(444)
	1.8240823746066e+193, // exp(445)
	4.9583699725056e+193, // exp(446)
	1.3478246995039e+194, // exp(447)
	3.6637673886097e+194, // exp(448)
	9.9591523161587e+194, // exp(449)
	2.7071782767870e+195, // exp(450)
	7.3588735161892e+195, // exp(451)
	2.0003492156986e+196, // exp(452)
	5.4375129236057e+196, // exp(453)
	1.4780692572249e+197, // exp(454)
	4.0178088031183e+197, // exp(455)
	1.0921536659739e+198, // exp(456)
	2.9687814641018e+198, // exp(457)
	8.0699847065341e+198, // exp(458)
	2.1936492783714e+199, // exp(459)
	5.9629569714093e+199, // exp(460)
	1.6208997579265e+200, // exp(461)
	4.4060623577253e+200, // exp(462)
	1.1976919242062e+201, // exp(463)
	3.2556641936619e+201, // exp(464)
	8.8498128171958e+201, // exp(465)
	2.4056285366247e+202, // exp(466)
	6.5391763371295e+202, // exp(467)
	1.7775324210309e+203, // exp(468)
	4.8318340795850e+203, // exp(469)
	1.3134286776665e+204, // exp(470)
	3.5702693074778e+204, // exp(471)
	9.7049981812221e+204, // exp(472)
	2.6380920201244e+205, // exp(473)
	7.1710776001070e+205, // exp(474)
	1.9493009930841e+206, // exp(475)
	5.2987494676976e+206, // exp(476)
	1.4403494391599e+207, // exp(477)
	3.9152757070996e+207, // exp(478)
	1.0642822808016e+208, // exp(479)
	2.8930191842539e+208, // exp(480)
	7.8640414779409e+208, // exp(481)
	2.1376681047735e+209, // exp(482)
	5.8107843644823e+209, // exp(483)
	1.5795349547066e+210, // exp(484)
	4.2936211647949e+210, // exp(485)
	1.1671272390549e+211, // exp(486)
	3.1725807654225e+211, // exp(487)
	8.6239686439667e+211, // exp(488)
	2.3442377254095e+212, // exp(489)
	6.3722988105689e+212, // exp(490)
	1.7321704062281e+213, // exp(491)
	4.7085273390443e+213, // exp(492)
	1.2799104304527e+214, // exp(493)
	3.4791572651547e+214, // exp(494)
	9.4573299722212e+214, // exp(495)
	2.5707688209230e+215, // exp(496)
	6.9880741710841e+215, // exp(497)
	1.8995555035182e+216, // exp(498)
	5.1635272073629e+216, // exp(499)
	1.4035922178528e+217, // exp(500)
	3.8153592203559e+217, // exp(501)
	1.0371221637737e+218, // exp(502)
	2.8191903316782e+218, // exp(503)
	7.6633538495683e+218, // exp(504)
	2.0831155514333e+219, // exp(505)
	5.6624951500416e+219, // exp(506)
	1.5392257670096e+220, // exp(507)
	4.1840494323580e+220, // exp(508)
	1.1373425541353e+221, // exp(509)
	3.0916175976392e+221, // exp(510)
	8.4038879362070e+221, // exp(511)
	2.2844135865398e+222, // exp(512)
	6.2096799409760e+222, // exp(513)
	1.6879660144102e+223, // exp(514)
	4.5883673440276e+223, // exp(515)
	1.2472475573565e+224, // exp(516)
	3.3903703707521e+224, // exp(517)
	9.2159821705615e+224, // exp(518)
	2.5051636865640e+225, // exp(519)
	6.8097409265023e+225, // exp(520)
	1.8510795017025e+226, // exp(521)
	5.0317557725110e+226, // exp(522)
	1.3677730281660e+227, // exp(523)
	3.7179925679202e+227, // exp(524)
	1.0106551635723e+228, // exp(525)
	2.7472455659769e+228, // exp(526)
	7.4677877003098e+228, // exp(527)
	2.0299551604542e+229, // exp(528)
	5.5179902252493e+229, // exp(529)
	1.4999452558910e+230, // exp(530)
	4.0772739327718e+230, // exp(531)
	1.1083179641103e+231, // exp(532)
	3.0127205819959e+231, // exp(533)
	8.1894236122639e+231, // exp(534)
	2.2261161390770e+232, // exp(535)
	6.0512110488925e+232, // exp(536)
	1.6448897034375e+233, // exp(537)
	4.4712737906736e+233, // exp(538)
	1.2154182295253e+234, // exp(539)
	3.3038492872965e+234, // exp(540)
	8.9807934816256e+234, // exp(541)
	2.4412327726246e+235, // exp(542)
	6.6359586848642e+235, // exp(543)
	1.8038405907471e+236, // exp(544)
	4.9033470992648e+236, // exp(545)
	1.3328679318559e+237, // exp(546)
	3.6231106788996e+237, // exp(547)
	9.8486359209488e+237, // exp(548)
	2.6771368059024e+238, // exp(549)
	7.2772123317834e+238, // exp(550)
	1.9781514043325e+239, // exp(551)
	5.3771730163377e+239, // exp(552)
	1.4616671698791e+240, // exp(553)
	3.9732233071376e+240, // exp(554)
	1.0800340716202e+241, // exp(555)
	2.9358369910018e+241, // exp(556)
	7.9804323439582e+241, // exp(557)
	2.1693064223828e+242, // exp(558)
	5.8967862283227e+242, // exp(559)
	1.6029126850757e+243, // exp(560)
	4.3571684244478e+243, // exp(561)
	1.1844011751712e+244, // exp(562)
	3.2195361920734e+244, // exp(563)
	8.7516067269795e+244, // exp(564)
	2.3789333535768e+245, // exp(565)
	6.4666113061430e+245, // exp(566)
	1.7578072005196e+246, // exp(567)
	4.7782153711070e+246, // exp(568)
	1.2988536015744e+247, // exp(569)
	3.5306501429882e+247, // exp(570)
	9.5973021263312e+247, // exp(571)
	2.6088171972238e+248, // exp(572)
	7.0915003809848e+248, // exp(573)
	1.9276696622141e+249, // exp(574)
	5.2399494140685e+249, // exp(575)
	1.4243659274307e+250, // exp(576)
	3.8718280176111e+250, // exp(577)
	1.0524719743191e+251, // exp(578)
	2.8609154427540e+251, // exp(579)
	7.7767744607960e+251, // exp(580)
	2.1139464700806e+252, // exp(581)
	5.7463022759553e+252, // exp(582)
	1.5620069057562e+253, // exp(583)
	4.2459749878446e+253, // exp(584)
	1.1541756653550e+254, // exp(585)
	3.1373747379840e+254, // exp(586)
	8.5282687393285e+254, // exp(587)
	2.3182237942332e+255, // exp(588)
	6.3015856141654e+255, // exp(589)
	1.7129485665465e+256, // exp(590)
	4.6562769615283e+256, // exp(591)
	1.2657073052795e+257, // exp(592)
	3.4405491680891e+257, // exp(593)
	9.3523822835364e+257, // exp(594)
	2.5422410814139e+258, // exp(595)
	6.9105277351696e+258, // exp(596)
	1.8784761967574e+259, // exp(597)
	5.1062277108384e+259, // exp(598)
	1.3880165998346e+260, // exp(599)
	3.7730203009299e+260, // exp(600)
	1.0256132522425e+261, // exp(601)
	2.7879058665976e+261, // exp(602)
	7.5783138566265e+261, // exp(603)
	2.0599992846827e+262, // exp(604)
	5.5996586221917e+262, // exp(605)
	1.5221450278278e+263, // exp(606)
	4.1376191694235e+263, // exp(607)
	1.1247215001328e+264, // exp(608)
	3.0573100158881e+264, // exp(609)
	8.3106302601545e+264, // exp(610)
	2.2590635219220e+265, // exp(611)
	6.1407713209752e+265, // exp(612)
	1.6692347094529e+266, // exp(613)
	4.5374503781390e+266, // exp(614)
	1.2334068910430e+267, // exp(615)
	3.3527475390183e+267, // exp(616)
	9.1137127107243e+267, // exp(617)
	2.4773639651358e+268, // exp(618)
	6.7341734489079e+268, // exp(619)
	1.8305381315858e+269, // exp(620)
	4.9759185393910e+269, // exp(621)
	1.3525948945519e+270, // exp(622)
	3.6767341231269e+270, // exp(623)
	9.9943995549712e+270, // exp(624)
	2.7167594696637e+271, // exp(625)
	7.3849178986810e+271, // exp(626)
	2.0074288128646e+272, // exp(627)
	5.4567572639351e+272, // exp(628)
	1.4833004112867e+273, // exp(629)
	4.0320285541464e+273, // exp(630)
	1.0960189950564e+274, // exp(631)
	2.9792885179078e+274, // exp(632)
	8.0985458399654e+274, // exp(633)
	2.2014129993720e+275, // exp(634)
	5.9840609531266e+275, // exp(635)
	1.6266364149275e+276, // exp(636)
	4.4216562082073e+276, // exp(637)
	1.2019307722463e+277, // exp(638)
	3.2671865772628e+277, // exp(639)
	8.8811339031589e+277, // exp(640)
	2.4141424905068e+278, // exp(641)
	6.5623196632556e+278, // exp(642)
	1.7838234293167e+279, // exp(643)
	4.8489348130911e+279, // exp(644)
	1.3180771389808e+280, // exp(645)
	3.5829051353988e+280, // exp(646)
	9.7393459226472e+280, // exp(647)
	2.6474287042609e+281, // exp(648)
	7.1964573389332e+281, // exp(649)
	1.9561999213703e+282, // exp(650)
	5.3175026990938e+282, // exp(651)
	1.4454470959729e+283, // exp(652)
	3.9291325749819e+283, // exp(653)
	1.0680489680180e+284, // exp(654)
	2.9032581016677e+284, // exp(655)
	7.8918737410899e+284, // exp(656)
	2.1452336982898e+285, // exp(657)
	5.8313497798591e+285, // exp(658)
	1.5851252141980e+286, // exp(659)
	4.3088170655866e+286, // exp(660)
	1.1712579131538e+287, // exp(661)
	3.1838091017649e+287, // exp(662)
	8.6544904266101e+287, // exp(663)
	2.3525344061227e+288, // exp(664)
	6.3948515269880e+288, // exp(665)
	1.7383008701505e+289, // exp(666)
	4.7251916677247e+289, // exp(667)
	1.2844402646362e+290, // exp(668)
	3.4914706311017e+290, // exp(669)
	9.4908011711222e+290, // exp(670)
	2.5798672360979e+291, // exp(671)
	7.0128062277219e+291, // exp(672)
	1.9062783735321e+292, // exp(673)
	5.1818018627567e+292, // exp(674)
	1.4085597842207e+293, // exp(675)
	3.8288624657453e+293, // exp(676)
	1.0407927264304e+294, // exp(677)
	2.8291679554482e+294, // exp(678)
	7.6904758429534e+294, // exp(679)
	2.0904880736104e+295, // exp(680)
	5.6825357431054e+295, // exp(681)
	1.5446733650052e+296, // exp(682)
	4.1988575389984e+296, // exp(683)
	1.1413678148548e+297, // exp(684)
	3.1025593907077e+297, // exp(685)
	8.4336308134758e+297, // exp(686)
	2.2924985388203e+298, // exp(687)
	6.2316571198443e+298, // exp(688)
	1.6939400310060e+299, // exp(689)
	4.6046064047830e+299, // exp(690)
	1.2516617917328e+300, // exp(691)
	3.4023695038437e+300, // exp(692)
	9.2485991960015e+300, // exp(693)
	2.5140299133192e+301, // exp(694)
	6.8338418295780e+301, // exp(695)
	1.8576308063905e+302, // exp(696)
	5.0495640649971e+302, // exp(697)
	1.3726138239521e+303, // exp(698)
	3.7311512151408e+303, // exp(699)
	1.0142320547350e+304, // exp(700)
	2.7569685642268e+304, // exp(701)
	7.4942175497707e+304, // exp(702)
	2.0371395384060e+305, // exp(703)
	5.5375193892846e+305, // exp(704)
	1.5052538330632e+306, // exp(705)
	4.0917041416340e+306, // exp(706)
	1.1122405015634e+307, // exp(707)
	3.0233831442761e+307, // exp(708)
	8.2184074615550e+307, // exp(709)
}; 
#else // USE_FPU32 == 1
//This table has 89 entries
const float FastRTS_expTable[89] = {
	1.0000000000000e+00F, // exp(  0)
	2.7182817459106e+00F, // exp(  1)
	7.3890562057495e+00F, // exp(  2)
	2.0085536956787e+01F, // exp(  3)
	5.4598152160645e+01F, // exp(  4)
	1.4841316223145e+02F, // exp(  5)
	4.0342880249023e+02F, // exp(  6)
	1.0966331787109e+03F, // exp(  7)
	2.9809580078125e+03F, // exp(  8)
	8.1030839843750e+03F, // exp(  9)
	2.2026464843750e+04F, // exp( 10)
	5.9874140625000e+04F, // exp( 11)
	1.6275479687500e+05F, // exp( 12)
	4.4241337500000e+05F, // exp( 13)
	1.2026042500000e+06F, // exp( 14)
	3.2690175000000e+06F, // exp( 15)
	8.8861110000000e+06F, // exp( 16)
	2.4154952000000e+07F, // exp( 17)
	6.5659968000000e+07F, // exp( 18)
	1.7848230400000e+08F, // exp( 19)
	4.8516518400000e+08F, // exp( 20)
	1.3188157440000e+09F, // exp( 21)
	3.5849128960000e+09F, // exp( 22)
	9.7448038400000e+09F, // exp( 23)
	2.6489122816000e+10F, // exp( 24)
	7.2004902912000e+10F, // exp( 25)
	1.9572962099200e+11F, // exp( 26)
	5.3204824883200e+11F, // exp( 27)
	1.4462570987520e+12F, // exp( 28)
	3.9313342464000e+12F, // exp( 29)
	1.0686474223616e+13F, // exp( 30)
	2.9048849825792e+13F, // exp( 31)
	7.8962956959744e+13F, // exp( 32)
	2.1464357430886e+14F, // exp( 33)
	5.8346171059405e+14F, // exp( 34)
	1.5860134450299e+15F, // exp( 35)
	4.3112315318436e+15F, // exp( 36)
	1.1719142537167e+16F, // exp( 37)
	3.1855931348222e+16F, // exp( 38)
	8.6593404045099e+16F, // exp( 39)
	2.3538527034042e+17F, // exp( 40)
	6.3984347447611e+17F, // exp( 41)
	1.7392749753422e+18F, // exp( 42)
	4.7278395262973e+18F, // exp( 43)
	1.2851599879818e+19F, // exp( 44)
	3.4934270576908e+19F, // exp( 45)
	9.4961195300688e+19F, // exp( 46)
	2.5813128932181e+20F, // exp( 47)
	7.0167362905576e+20F, // exp( 48)
	1.9073464997854e+21F, // exp( 49)
	5.1847054576655e+21F, // exp( 50)
	1.4093490364499e+22F, // exp( 51)
	3.8310081899410e+22F, // exp( 52)
	1.0413759887482e+23F, // exp( 53)
	2.8307533984544e+23F, // exp( 54)
	7.6947854714906e+23F, // exp( 55)
	2.0916594490409e+24F, // exp( 56)
	5.6857200220030e+24F, // exp( 57)
	1.5455390078758e+25F, // exp( 58)
	4.2012104528050e+25F, // exp( 59)
	1.1420073962419e+26F, // exp( 60)
	3.1042977826582e+26F, // exp( 61)
	8.4383568232726e+26F, // exp( 62)
	2.2937831182341e+27F, // exp( 63)
	6.2351494320497e+27F, // exp( 64)
	1.6948892066757e+28F, // exp( 65)
	4.6071865476425e+28F, // exp( 66)
	1.2523631854447e+29F, // exp( 67)
	3.4042761729011e+29F, // exp( 68)
	9.2537816213739e+29F, // exp( 69)
	2.5154387003559e+30F, // exp( 70)
	6.8376711375563e+30F, // exp( 71)
	1.8586717056324e+31F, // exp( 72)
	5.0523935602179e+31F, // exp( 73)
	1.3733829622695e+32F, // exp( 74)
	3.7332418496475e+32F, // exp( 75)
	1.0148004187492e+33F, // exp( 76)
	2.7585135499700e+33F, // exp( 77)
	7.4984169815783e+33F, // exp( 78)
	2.0382810254658e+34F, // exp( 79)
	5.5406224846768e+34F, // exp( 80)
	1.5060972626944e+35F, // exp( 81)
	4.0939968518217e+35F, // exp( 82)
	1.1128637275465e+36F, // exp( 83)
	3.0250773415263e+36F, // exp( 84)
	8.2230123930183e+36F, // exp( 85)
	2.2352465286716e+37F, // exp( 86)
	6.0760303473996e+37F, // exp( 87)
	1.6516362661361e+38F, // exp( 88)
}; 
#endif // USE_FPU64 == 1

// End of File
