#ifndef _CRCTABLE0X1EDC6F41_H_
#define _CRCTABLE0X1EDC6F41_H_
//#############################################################################
//! \file include/common/CrcTable0x1EDC6F41.h
//!
//! \brief  CRC Lookup Table for polynomial 0x1EDC6F41
//!
//#############################################################################
//!
//! Copyright: Copyright (C) 2023 Texas Instruments Incorporated -
//!	All rights reserved not granted herein.
//!	Limited License.
//!
//! Texas Instruments Incorporated grants a world-wide, royalty-free,
//! non-exclusive license under copyrights and patents it now or hereafter
//! owns or controls to make, have made, use, import, offer to sell and sell
//! ("Utilize") this software subject to the terms herein. With respect to the
//! foregoing patent license, such license is granted solely to the extent that
//! any such patent is necessary to Utilize the software alone. The patent
//! license shall not apply to any combinations which include this software,
//! other than combinations with devices manufactured by or for TI 
//! ("TI Devices").
//! No hardware patent is licensed hereunder.
//!
//! Redistributions must preserve existing copyright notices and reproduce this
//! license (including the above copyright notice and the disclaimer and
//! (if applicable) source code license limitations below) in the documentation
//!  and/or other materials provided with the distribution.
//!
//! Redistribution and use in binary form, without modification, are permitted
//! provided that the following conditions are met:
//!
//! * No reverse engineering, decompilation, or disassembly of this software is 
//! permitted with respect to any software provided in binary form.
//! * Any redistribution and use are licensed by TI for use only 
//!   with TI Devices.
//! * Nothing shall obligate TI to provide you with source code for the 
//!   software licensed and provided to you in object code.
//!
//! If software source code is provided to you, modification and redistribution
//! of the source code are permitted provided that the following conditions 
//! are met:
//!
//! * any redistribution and use of the source code, including any resulting
//!   derivative works, are licensed by TI for use only with TI Devices.
//! * any redistribution and use of any object code compiled from the source
//!   code and any resulting derivative works, are licensed by TI for use 
//!   only with TI Devices.
//!
//! Neither the name of Texas Instruments Incorporated nor the names of its
//! suppliers may be used to endorse or promote products derived from this 
//! software without specific prior written permission.
//#############################################################################

#define POLYNOMIAL32P2		0x1EDC6F41

const unsigned long crc32P2Table[] = {
0x00000000, 0x1EDC6F41, 0x3DB8DE82, 0x2364B1C3, 0x7B71BD04, 0x65ADD245, 0x46C96386, 0x58150CC7,
0xF6E37A08, 0xE83F1549, 0xCB5BA48A, 0xD587CBCB, 0x8D92C70C, 0x934EA84D, 0xB02A198E, 0xAEF676CF,
0xF31A9B51, 0xEDC6F410, 0xCEA245D3, 0xD07E2A92, 0x886B2655, 0x96B74914, 0xB5D3F8D7, 0xAB0F9796,
0x05F9E159, 0x1B258E18, 0x38413FDB, 0x269D509A, 0x7E885C5D, 0x6054331C, 0x433082DF, 0x5DECED9E,
0xF8E959E3, 0xE63536A2, 0xC5518761, 0xDB8DE820, 0x8398E4E7, 0x9D448BA6, 0xBE203A65, 0xA0FC5524,
0x0E0A23EB, 0x10D64CAA, 0x33B2FD69, 0x2D6E9228, 0x757B9EEF, 0x6BA7F1AE, 0x48C3406D, 0x561F2F2C,
0x0BF3C2B2, 0x152FADF3, 0x364B1C30, 0x28977371, 0x70827FB6, 0x6E5E10F7, 0x4D3AA134, 0x53E6CE75,
0xFD10B8BA, 0xE3CCD7FB, 0xC0A86638, 0xDE740979, 0x866105BE, 0x98BD6AFF, 0xBBD9DB3C, 0xA505B47D,
0xEF0EDC87, 0xF1D2B3C6, 0xD2B60205, 0xCC6A6D44, 0x947F6183, 0x8AA30EC2, 0xA9C7BF01, 0xB71BD040,
0x19EDA68F, 0x0731C9CE, 0x2455780D, 0x3A89174C, 0x629C1B8B, 0x7C4074CA, 0x5F24C509, 0x41F8AA48,
0x1C1447D6, 0x02C82897, 0x21AC9954, 0x3F70F615, 0x6765FAD2, 0x79B99593, 0x5ADD2450, 0x44014B11,
0xEAF73DDE, 0xF42B529F, 0xD74FE35C, 0xC9938C1D, 0x918680DA, 0x8F5AEF9B, 0xAC3E5E58, 0xB2E23119,
0x17E78564, 0x093BEA25, 0x2A5F5BE6, 0x348334A7, 0x6C963860, 0x724A5721, 0x512EE6E2, 0x4FF289A3,
0xE104FF6C, 0xFFD8902D, 0xDCBC21EE, 0xC2604EAF, 0x9A754268, 0x84A92D29, 0xA7CD9CEA, 0xB911F3AB,
0xE4FD1E35, 0xFA217174, 0xD945C0B7, 0xC799AFF6, 0x9F8CA331, 0x8150CC70, 0xA2347DB3, 0xBCE812F2,
0x121E643D, 0x0CC20B7C, 0x2FA6BABF, 0x317AD5FE, 0x696FD939, 0x77B3B678, 0x54D707BB, 0x4A0B68FA,
0xC0C1D64F, 0xDE1DB90E, 0xFD7908CD, 0xE3A5678C, 0xBBB06B4B, 0xA56C040A, 0x8608B5C9, 0x98D4DA88,
0x3622AC47, 0x28FEC306, 0x0B9A72C5, 0x15461D84, 0x4D531143, 0x538F7E02, 0x70EBCFC1, 0x6E37A080,
0x33DB4D1E, 0x2D07225F, 0x0E63939C, 0x10BFFCDD, 0x48AAF01A, 0x56769F5B, 0x75122E98, 0x6BCE41D9,
0xC5383716, 0xDBE45857, 0xF880E994, 0xE65C86D5, 0xBE498A12, 0xA095E553, 0x83F15490, 0x9D2D3BD1,
0x38288FAC, 0x26F4E0ED, 0x0590512E, 0x1B4C3E6F, 0x435932A8, 0x5D855DE9, 0x7EE1EC2A, 0x603D836B,
0xCECBF5A4, 0xD0179AE5, 0xF3732B26, 0xEDAF4467, 0xB5BA48A0, 0xAB6627E1, 0x88029622, 0x96DEF963,
0xCB3214FD, 0xD5EE7BBC, 0xF68ACA7F, 0xE856A53E, 0xB043A9F9, 0xAE9FC6B8, 0x8DFB777B, 0x9327183A,
0x3DD16EF5, 0x230D01B4, 0x0069B077, 0x1EB5DF36, 0x46A0D3F1, 0x587CBCB0, 0x7B180D73, 0x65C46232,
0x2FCF0AC8, 0x31136589, 0x1277D44A, 0x0CABBB0B, 0x54BEB7CC, 0x4A62D88D, 0x6906694E, 0x77DA060F,
0xD92C70C0, 0xC7F01F81, 0xE494AE42, 0xFA48C103, 0xA25DCDC4, 0xBC81A285, 0x9FE51346, 0x81397C07,
0xDCD59199, 0xC209FED8, 0xE16D4F1B, 0xFFB1205A, 0xA7A42C9D, 0xB97843DC, 0x9A1CF21F, 0x84C09D5E,
0x2A36EB91, 0x34EA84D0, 0x178E3513, 0x09525A52, 0x51475695, 0x4F9B39D4, 0x6CFF8817, 0x7223E756,
0xD726532B, 0xC9FA3C6A, 0xEA9E8DA9, 0xF442E2E8, 0xAC57EE2F, 0xB28B816E, 0x91EF30AD, 0x8F335FEC,
0x21C52923, 0x3F194662, 0x1C7DF7A1, 0x02A198E0, 0x5AB49427, 0x4468FB66, 0x670C4AA5, 0x79D025E4,
0x243CC87A, 0x3AE0A73B, 0x198416F8, 0x075879B9, 0x5F4D757E, 0x41911A3F, 0x62F5ABFC, 0x7C29C4BD,
0xD2DFB272, 0xCC03DD33, 0xEF676CF0, 0xF1BB03B1, 0xA9AE0F76, 0xB7726037, 0x9416D1F4, 0x8ACABEB5,
};
 #endif // _CRCTABLE0X1EDC6F41_H_

// End of File