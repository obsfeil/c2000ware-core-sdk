//#############################################################################
//! \file   input.c
//! \brief  Input Vector (64) 
//! \author Vishal Coelho 
//! \date   25-Jul-2016
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
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


#include "dsp.h"

float64_t test_input[128] = {
  44.2093241160L,    4.4990611554L,   98.7409248242L,  -56.2646735201L, 
 -78.8403453500L,  -78.0605070954L,  -87.2817258050L,  -19.0840008285L, 
 -10.3254175867L,  -26.8367646324L,   52.7009281698L,   25.5792759228L, 
  54.3960771108L,   86.5707140558L,   94.5481708006L,  -61.5943301144L, 
 -72.2251594342L,   39.2532674166L,  -81.2359946450L,    5.0808807719L, 
   6.0688436786L,   72.2279622787L,   -3.0293332896L,  -21.3087277569L, 
  34.2862279348L,   48.2515886908L,    4.0104934781L,  -30.4574657445L, 
 -70.0005492337L,   17.2184134463L,  -47.5709364544L,  -91.1091815444L, 
  50.9866534462L,  -51.4429284358L,  -11.5195373996L,   37.5592170240L, 
 -28.1543579196L,   47.2680148602L,  -21.0585049442L,   36.6831733936L, 
  40.8094860669L,  -11.5389173233L,  -96.0844752893L,  -33.8284239572L, 
 -15.1381006334L,  -45.9459153136L,  -60.5892403809L,   64.3442369923L, 
 -14.0157181233L,   77.5541908513L,  -21.7634009078L,   53.8228774777L, 
 -20.6416965973L,   61.7028191775L,   51.0154198014L,  -24.5208910330L, 
 -56.7962168077L,   58.0814435934L,   89.8607823700L,  -34.4869131850L, 
  34.2528740903L,  -12.2710034826L,   66.7001191178L,   53.7708504859L, 
 -66.5492909011L,   72.3960957404L,   97.9744307263L,    2.8846913011L, 
  76.8562046254L,   17.6052110617L,  -69.0495302688L,  -60.0274354285L, 
 -18.6090325722L,   49.7411436431L,   65.1167631572L,   57.9926059889L, 
 -36.2951509202L,    6.8128254741L,  -82.0098642459L,  -77.6588511614L, 
 -72.7414902123L,   35.7304609600L,   -0.9645961821L,  -62.0579187965L, 
  -0.9988350020L,  -70.4783556047L,  -89.0051706188L,   70.1425348578L, 
  12.1119054710L,   85.9217733513L,   39.3334401110L,   16.5581930352L, 
  63.0794422955L,   75.8027809194L,   97.7823232159L,  -99.8955249286L, 
  73.0877182026L,   22.5132938968L,   97.9900411418L,    5.5360138677L, 
  -4.0953229580L,   60.2695211044L,  -54.4314128588L,   -0.3811417607L, 
  80.1704977064L,   14.9322438260L,   69.0356370108L,   47.7280583991L, 
  17.1974071653L,  -50.6530948028L,   33.2832434639L,  -83.3034372795L, 
  25.1919570343L,   32.1889115895L,   45.9503710634L,   78.1504232651L, 
  96.4606445767L,   53.8058170672L,   16.2892975751L,   85.6626124628L, 
  16.0180731517L,  -96.6034123325L,  -75.8280857803L,   72.5421437399L, 
  -3.1406977576L,   68.9711349153L,  -58.1189831958L,   10.4582683078L, 

}; 

// End of File
