//#############################################################################
//
//! \file   dsp_cfft_windowed.c
//!
//! \brief  Runs the single precision Complex FFT routine by first windowing
//!         the real and complex parts of the input
//! \author Vishal Coelho
//! \date   Sep 16, 2016
//
//  Group:          C2000
//  Target Device:  TMS320f28002x
//
// The input and golden files were obtained by running the MATLAB script, 
// FPU_DSP_runWindowedFFT.m (under reference/MATLAB), at the MATLAB command 
// line as follows
// "
//   OUT = FPU_DSP_runWindowedFFT('complex', 2, 'hann', 256, ...
//             'TYPE_FLOAT','FTYPE_C');
//   Sampling Rate (Hz) : 100e3
//   Number of Sines : 5
// "
// - For this example we use a 256 point Hann window. While MATLAB does 
//   generate the window in a .c file, we will not include it; we will, 
//   instead include the header file "fpu_fft_hann.h"
// - Please note that this script generates the input wave using random values
//   for the frequency, amplitude and phase so it may not be possible to 
//   generate the exact same set of inputs and outputs given in 
//   this example.
// - Also note the script will generate the magnitude and phase which it then
//   tacks on to the end of the golden CFFT outputs
// - The input must be assigned to the section "FFT_buffer_1".
// Modify the input file generated by MATLAB by adding the following
// line above the array declaration
//   #pragma DATA_SECTION(test_input, "FFT_buffer_1")
// - Define FFT_ALIGN=4N (replace 4N with the actual number) in the linker
// settings, C2000 Linker -> Advanced Options -> Command File Preprocessing
// -> --define. For example, for a 128 point FFT, set FFT_ALIGN=512
// - Set option USE_TABLES to 1 in project properties (C2000 Compiler->
//   Advanced options->Predefined Symbols->--define) if the user does not 
//   wish to compute the twiddle factors at runtime, but instead use a 
//   pre generated table along with the CFFT_f32t variant of the complex 
//   FFT routines
// - This project has a build configuration "RAM_ROMTABLES" where the FFT 
//   tables are already in the ROM of the device. For this configuration the
//   user must define USE_TABLES to 1 as described in the foregoing bullet 
//   point
//
//#############################################################################
//
//
// $Copyright: Copyright (C) 2023 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//#############################################################################


//*****************************************************************************
// the includes
//*****************************************************************************
#include <string.h>

#include "fpu.h"
#include "dsp.h"
#include "dsp_examples_setup.h"
#include "fpu32/fpu_cfft.h"
#include "fpu32/fpu_fft_hann.h"

//*****************************************************************************
// the defines
//*****************************************************************************
#define TEST_SIZE       (128U)
#define FFT_STAGES      (7U)
#define FFT_SIZE        (1 << FFT_STAGES)

// If the input is real only, i.e. the imaginary portion is 0 and you intend
// to run a complex FFT on the input, set TEST_INPUT_REAL to 1 - this will 
// cause the more efficient CFFT_f32_win() to be used. 
#define TEST_INPUT_REAL     0
// If the input is complex set TEST_INPUT_REAL to 0, TEST_INPUT_COMPLEX will
// become 1 and the example uses the CFFT_f32_win_dual() instead
#define TEST_INPUT_COMPLEX  (~TEST_INPUT_REAL)
//*****************************************************************************
// the globals
//*****************************************************************************
// The global pass, fail values
uint16_t pass = 0U, fail = 0U;
// The absolute error between the result and expected values
float tolerance = 3e-2;


// CFFT_F32_STRUCT object
CFFT_F32_STRUCT cfft;
// Handle to the CFFT_F32_STRUCT object
CFFT_F32_STRUCT_Handle hnd_cfft = &cfft;

#ifdef __cplusplus
#pragma DATA_SECTION("FFT_buffer_2")
#else
#pragma DATA_SECTION(test_output, "FFT_buffer_2")
#endif
float test_output[TEST_SIZE << 1];

float test_error[TEST_SIZE << 1];

float test_phase[TEST_SIZE];

float twiddleFactors[TEST_SIZE];

const float fftWindow[TEST_SIZE >> 1] = HANN128;

//*****************************************************************************
// the function definitions
//*****************************************************************************
void DSP_runTest(void)
{
    // Locals
    int16_t i, j;
    float32u_t out, gold, err;
    float *p_temp;

    //
    // Off-Place Algorithm
    //
    // Note: In this version, input and output buffers are used in
    //       ping-pong fashion. The input data is first stored in the input
    //       buffer where the first stage of the FFT, including bit reversed
    //       ordering, is done.
    //       At each successive stage of the FFT the cfft.CurrentInPtr pointer 
    //       will point to the buffer that is the input for that stage. In this
    //       manner the "CurrentInPtr" and "CurrentOutPtr" are exchanged at the
    //       start of each stage. Depending on the number of FFT stages, the 
    //       final output will be in either test_output (#Stages is odd) or
    //       test_intput (#stages is even).
    //
    // Configure the object
    CFFT_f32_setInputPtr(hnd_cfft, test_input);
    CFFT_f32_setOutputPtr(hnd_cfft, test_output);
    CFFT_f32_setStages(hnd_cfft, FFT_STAGES);
    CFFT_f32_setFFTSize(hnd_cfft, FFT_SIZE);

    //Twiddle factor table
#ifdef USE_TABLES
    CFFT_f32_setTwiddlesPtr(hnd_cfft, CFFT_f32_twiddleFactors);
#else
    CFFT_f32_setTwiddlesPtr(hnd_cfft, twiddleFactors);
    CFFT_f32_sincostable(hnd_cfft);   
#endif //USE_TABLES

    // Apply the window
#if    (TEST_INPUT_REAL == 1)
    CFFT_f32_win(&test_input[0], (float *)&fftWindow, FFT_SIZE);
#else //(TEST_INPUT_COMPLEX == 1)
    CFFT_f32_win_dual(&test_input[0], (float *)&fftWindow, FFT_SIZE);
#endif //(TEST_INPUT_REAL == 1)

    // Run the FFT calculation function
#ifdef USE_TABLES
    CFFT_f32t(hnd_cfft);                  // Calculate FFT
#else
    CFFT_f32(hnd_cfft);                   // Calculate FFT
#endif //USE_TABLES

    // Check the output
    // NOTE: Final output of the FFT is stored in the buffer
    // pointed to by obj.p_currInput
    p_temp      = CFFT_f32_getCurrInputPtr(hnd_cfft);
    for(i = 0U; i < (TEST_SIZE << 1); i++)
    {
        out.f32  = p_temp[i];
        gold.f32 = test_golden[i];
        err.f32  = fabsf(out.f32 - gold.f32);
        if(err.f32 < tolerance)
        {
            pass++;
        }
        else
        {
            fail++;
        }
        test_error[i] = err.f32;
    }

    // Zero out the error array
    memset(test_error, 0U, sizeof(float)*(TEST_SIZE << 1));
    
    //
    // Note: The input buffer for the magnitude calculation is pointed to by
    //       cfft.CurrentInPtr, while the output is stored in the memory 
    //       pointed to by cfft.CurrentOutPtr. If the user does not changed
    //       the value of cfft.CurrentOutPtr after calling the magnitude 
    //       calculation function, the output buffer is overwritten when the
    //       phase calculation function is called
    //
    //       If number of Stages is ODD, 
    //           currentInPtr=test_input, currentOutPtr=test_output
    //       If number of Stages is EVEN, 
    //           currentInPtr=test_output, currentOutPtr=test_input
    //
    // Calculate Magnitude:    
#ifdef __TMS320C28XX_TMU__ //defined when --tmu_support=tmu0 in the project 
                           // properties
    // Calculate magnitude, result stored in CurrentOutPtr
    CFFT_f32_mag_TMU0(hnd_cfft);     
#else
    // Calculate magnitude, result stored in CurrentOutPtr    
    CFFT_f32_mag(hnd_cfft);          
#endif
    // NOTE: Final output of the FFT magnitude is stored in the
    // buffer pointed to by obj.p_currOutput
    p_temp      = CFFT_f32_getCurrOutputPtr(hnd_cfft);
    // Check the output
    for(i = (TEST_SIZE << 1), j=0U; i < (3U*TEST_SIZE); i++, j++)
    {
    	out.f32     = p_temp[j];
        gold.f32    = test_golden[i];
        err.f32     = fabsf(out.f32 - gold.f32);
        if(err.f32 < tolerance)
        {
            pass++;
        }
        else
        {
            fail++;
        }
        test_error[j] = err.f32;
    }
     
    // Zero out the error array
    memset(test_error, 0U, sizeof(float)*(TEST_SIZE << 1));
    
    // Calculate Phase:
    // To avoid overwriting the magnitude, change the output buffer for 
    // the phase()
    CFFT_f32_setCurrOutputPtr(hnd_cfft, test_phase);
                                         
#ifdef __TMS320C28XX_TMU__ //defined when --tmu_support=tmu0 in the project 
                           //properties
    // Calculate phase, result stored in CurrentOutPtr
    CFFT_f32_phase_TMU0(hnd_cfft);        
#else
    // Calculate phase, result stored in CurrentOutPtr    
    CFFT_f32_phase(hnd_cfft);              
#endif
//
//        if(err.f32 < tolerance)
//        {
//            pass++;
//        }
//        else
//        {
//            fail++;
//        }
//        test_error[j] = err.f32;
//    }
// VC160919>>
}

// End of File
