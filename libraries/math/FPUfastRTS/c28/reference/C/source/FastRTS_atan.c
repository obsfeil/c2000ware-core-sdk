//#############################################################################
//! \file   reference/C/source/$FILENAME$
//! \brief  Arctangent
//! \author Vishal Coelho 
//! \date   26-Aug-2015
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


//*****************************************************************************
// the includes
//*****************************************************************************
#include "fastrts.h"
#include "fastrts_assert.h"
//*****************************************************************************
// defines
//*****************************************************************************
FASTRTS_FILENUM(7)

//*****************************************************************************
// FastRTS_atan
//*****************************************************************************
fsize_t FastRTS_atan(const fsize_t x, const fsize_t *tbl)
{
    // Locals
    int32_t k;
    fsize_t r, a0, a1, a2, res;
    
    // Reduce the xument to the range [-1,1]
    if((fsize_t)1.0 >= fabs_t(x))
    {
        r = fabs_t(x)/(fsize_t)1.0;
    }
    else //(fsize_t)1.0 < fabs_t(x)
    {
        r = (fsize_t)1.0/fabs_t(x);
    }
    
    // Calculate the index into the lookup table, the table 
    // is a set of 3-tuples
    k = (uint16_t)(r * ARCTAN2_TBLSIZE);
    k = k * 3U;
    // Get the coefficients
    a0 = tbl[k++];
    a1 = tbl[k++];
    a2 = tbl[k++];
    // Calculate the arctangent for the first quadrant
    // 0 to +pi/4 (x > 0 && |x| <= 1.0)
    res = a0 + r*(a1 + a2*r);
    
    if((fsize_t)1.0 < fabs_t(x))
    {
        // if the argument lies in the first quadrant
        // +pi/4 to +pi/2, then we would have calculated
        // arctan(1/|x|). We can use the identity
        // arctan(x) = pi/2 - arctan(1/|x|)
        res = PI_O_2 - res;
    }

    if(x < (fsize_t)0.0)
    {
        // if the argument lies in the second quadrant
        // we use the identity arctan(-|x|) = -arctan(|x|).
        res = - res;
    }
#ifdef _DEBUG
    // Debugging message
    printf("x=%f, r=%f, k=%d, a0=%f, a1=%f, a2=%f, res=%f\n", 
           x, r, k, a0, a1, a2, res);
#endif
    return(res);
}

// End of File
