//#############################################################################
//! \file   input.c
//! \brief  Input Vector (256) 
//! \author Vishal Coelho 
//! \date   19-Aug-2016
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
//
//#############################################################################
//
//
// $Copyright: Copyright (C) 2019 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//#############################################################################

#ifdef __cplusplus
#pragma DATA_SECTION("FFT_buffer_1")
#else
#pragma DATA_SECTION(test_input, "FFT_buffer_1")
#endif

float test_input[256] = {
      77.000000000000F,    0.000000000000F,   45.321542597114F,   28.517201792762F,
      48.938746669790F,   48.715947146598F,   -1.272077938642F,   55.440734982460F,
      -0.983392686809F,   48.522509446919F,  -39.677179906405F,   32.517610835512F,
     -19.000000000000F,   14.535898384862F,  -37.248078874273F,    1.159151854595F,
      -3.866896714861F,   -4.183818756445F,  -20.727922061358F,   -2.272077938642F,
       4.544646017019F,    2.791513911032F,  -23.995238822098F,    5.886255830454F,
      -7.000000000000F,    3.464101615138F,  -35.741825477920F,   -4.789688774154F,
     -10.571849954929F,  -15.953290065266F,  -26.727922061358F,  -25.440734982460F,
       9.350289401670F,  -29.323642301185F,   -2.704627201468F,  -26.245123854120F,
      29.000000000000F,  -18.000000000000F,    6.612858422223F,   -8.528205892286F,
      27.350289401670F,   -1.853272235055F,   -1.272077938642F,   -0.015109140256F,
      20.605064581311F,   -2.046709934734F,   -0.968495731513F,   -4.527796849537F,
      29.000000000000F,   -3.464101615138F,   10.778090924309F,    3.431229793237F,
      35.721560553259F,   15.208486088968F,    4.727922061358F,   27.727922061358F,
      14.133103285139F,   35.360733292685F,  -27.930593250582F,   33.614177891811F,
     -19.000000000000F,   21.464101615138F,  -48.994665530095F,    2.255718910894F,
     -18.983392686809F,  -17.345594910680F,  -26.727922061358F,  -29.984890859744F,
      17.761832133551F,  -30.715947146598F,   10.548212850708F,  -19.199716169072F,
      41.000000000000F,    0.000000000000F,   10.548212850708F,   19.199716169072F,
      17.761832133550F,   30.715947146598F,  -26.727922061358F,   29.984890859744F,
     -18.983392686809F,   17.345594910680F,  -48.994665530095F,   -2.255718910895F,
     -19.000000000000F,  -21.464101615138F,  -27.930593250582F,  -33.614177891812F,
      14.133103285139F,  -35.360733292685F,    4.727922061358F,  -27.727922061358F,
      35.721560553259F,  -15.208486088968F,   10.778090924309F,   -3.431229793237F,
      29.000000000000F,    3.464101615138F,   -0.968495731514F,    4.527796849536F,
      20.605064581310F,    2.046709934734F,   -1.272077938642F,    0.015109140255F,
      27.350289401670F,    1.853272235055F,    6.612858422223F,    8.528205892286F,
      29.000000000000F,   18.000000000000F,   -2.704627201468F,   26.245123854120F,
       9.350289401671F,   29.323642301185F,  -26.727922061358F,   25.440734982460F,
     -10.571849954929F,   15.953290065267F,  -35.741825477920F,    4.789688774154F,
      -7.000000000000F,   -3.464101615137F,  -23.995238822098F,   -5.886255830454F,
       4.544646017019F,   -2.791513911031F,  -20.727922061358F,    2.272077938642F,
      -3.866896714861F,    4.183818756445F,  -37.248078874273F,   -1.159151854595F,
     -19.000000000000F,  -14.535898384862F,  -39.677179906405F,  -32.517610835513F,
      -0.983392686809F,  -48.522509446919F,   -1.272077938642F,  -55.440734982460F,
      48.938746669791F,  -48.715947146597F,   45.321542597114F,  -28.517201792763F,
      77.000000000000F,    0.000000000001F,   45.321542597114F,   28.517201792762F,
      48.938746669790F,   48.715947146598F,   -1.272077938642F,   55.440734982459F,
      -0.983392686809F,   48.522509446920F,  -39.677179906405F,   32.517610835511F,
     -19.000000000000F,   14.535898384862F,  -37.248078874273F,    1.159151854595F,
      -3.866896714861F,   -4.183818756445F,  -20.727922061358F,   -2.272077938642F,
       4.544646017019F,    2.791513911033F,  -23.995238822098F,    5.886255830453F,
      -7.000000000000F,    3.464101615138F,  -35.741825477920F,   -4.789688774155F,
     -10.571849954930F,  -15.953290065266F,  -26.727922061358F,  -25.440734982460F,
       9.350289401670F,  -29.323642301184F,   -2.704627201468F,  -26.245123854121F,
      29.000000000000F,  -18.000000000000F,    6.612858422223F,   -8.528205892287F,
      27.350289401671F,   -1.853272235055F,   -1.272077938642F,   -0.015109140256F,
      20.605064581311F,   -2.046709934733F,   -0.968495731513F,   -4.527796849537F,
      29.000000000000F,   -3.464101615137F,   10.778090924309F,    3.431229793237F,
      35.721560553259F,   15.208486088969F,    4.727922061358F,   27.727922061358F,
      14.133103285139F,   35.360733292685F,  -27.930593250583F,   33.614177891811F,
     -19.000000000000F,   21.464101615138F,  -48.994665530095F,    2.255718910893F,
     -18.983392686809F,  -17.345594910679F,  -26.727922061357F,  -29.984890859745F,
      17.761832133551F,  -30.715947146597F,   10.548212850708F,  -19.199716169072F,
      41.000000000000F,    0.000000000001F,   10.548212850707F,   19.199716169071F,
      17.761832133550F,   30.715947146599F,  -26.727922061358F,   29.984890859743F,
     -18.983392686810F,   17.345594910680F,  -48.994665530095F,   -2.255718910895F,
     -19.000000000000F,  -21.464101615138F,  -27.930593250582F,  -33.614177891812F,
      14.133103285139F,  -35.360733292684F,    4.727922061358F,  -27.727922061358F,
      35.721560553259F,  -15.208486088967F,   10.778090924309F,   -3.431229793237F,
      29.000000000000F,    3.464101615139F,   -0.968495731514F,    4.527796849536F,
      20.605064581310F,    2.046709934734F,   -1.272077938642F,    0.015109140255F,
      27.350289401670F,    1.853272235056F,    6.612858422223F,    8.528205892285F,
      29.000000000000F,   18.000000000000F,   -2.704627201467F,   26.245123854119F,
};


// End of File
