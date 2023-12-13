//#############################################################################
//! \file sinInput.c
//! \brief  Sine Input Vector (512) 
//! \author Vishal Coelho 
//! \date   13-Feb-2017
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


const double test_input[512] = {
	-3.141592653590, -3.129320807287, -3.117048960984, -3.104777114681, 
	-3.092505268377, -3.080233422074, -3.067961575771, -3.055689729468, 
	-3.043417883165, -3.031146036862, -3.018874190559, -3.006602344256, 
	-2.994330497953, -2.982058651650, -2.969786805347, -2.957514959044, 
	-2.945243112740, -2.932971266437, -2.920699420134, -2.908427573831, 
	-2.896155727528, -2.883883881225, -2.871612034922, -2.859340188619, 
	-2.847068342316, -2.834796496013, -2.822524649710, -2.810252803406, 
	-2.797980957103, -2.785709110800, -2.773437264497, -2.761165418194, 
	-2.748893571891, -2.736621725588, -2.724349879285, -2.712078032982, 
	-2.699806186679, -2.687534340376, -2.675262494073, -2.662990647769, 
	-2.650718801466, -2.638446955163, -2.626175108860, -2.613903262557, 
	-2.601631416254, -2.589359569951, -2.577087723648, -2.564815877345, 
	-2.552544031042, -2.540272184739, -2.528000338436, -2.515728492132, 
	-2.503456645829, -2.491184799526, -2.478912953223, -2.466641106920, 
	-2.454369260617, -2.442097414314, -2.429825568011, -2.417553721708, 
	-2.405281875405, -2.393010029102, -2.380738182799, -2.368466336495, 
	-2.356194490192, -2.343922643889, -2.331650797586, -2.319378951283, 
	-2.307107104980, -2.294835258677, -2.282563412374, -2.270291566071, 
	-2.258019719768, -2.245747873465, -2.233476027161, -2.221204180858, 
	-2.208932334555, -2.196660488252, -2.184388641949, -2.172116795646, 
	-2.159844949343, -2.147573103040, -2.135301256737, -2.123029410434, 
	-2.110757564131, -2.098485717828, -2.086213871524, -2.073942025221, 
	-2.061670178918, -2.049398332615, -2.037126486312, -2.024854640009, 
	-2.012582793706, -2.000310947403, -1.988039101100, -1.975767254797, 
	-1.963495408494, -1.951223562191, -1.938951715887, -1.926679869584, 
	-1.914408023281, -1.902136176978, -1.889864330675, -1.877592484372, 
	-1.865320638069, -1.853048791766, -1.840776945463, -1.828505099160, 
	-1.816233252857, -1.803961406554, -1.791689560250, -1.779417713947, 
	-1.767145867644, -1.754874021341, -1.742602175038, -1.730330328735, 
	-1.718058482432, -1.705786636129, -1.693514789826, -1.681242943523, 
	-1.668971097220, -1.656699250916, -1.644427404613, -1.632155558310, 
	-1.619883712007, -1.607611865704, -1.595340019401, -1.583068173098, 
	-1.570796326795, -1.558524480492, -1.546252634189, -1.533980787886, 
	-1.521708941583, -1.509437095279, -1.497165248976, -1.484893402673, 
	-1.472621556370, -1.460349710067, -1.448077863764, -1.435806017461, 
	-1.423534171158, -1.411262324855, -1.398990478552, -1.386718632249, 
	-1.374446785946, -1.362174939642, -1.349903093339, -1.337631247036, 
	-1.325359400733, -1.313087554430, -1.300815708127, -1.288543861824, 
	-1.276272015521, -1.264000169218, -1.251728322915, -1.239456476612, 
	-1.227184630309, -1.214912784005, -1.202640937702, -1.190369091399, 
	-1.178097245096, -1.165825398793, -1.153553552490, -1.141281706187, 
	-1.129009859884, -1.116738013581, -1.104466167278, -1.092194320975, 
	-1.079922474671, -1.067650628368, -1.055378782065, -1.043106935762, 
	-1.030835089459, -1.018563243156, -1.006291396853, -0.994019550550, 
	-0.981747704247, -0.969475857944, -0.957204011641, -0.944932165338, 
	-0.932660319034, -0.920388472731, -0.908116626428, -0.895844780125, 
	-0.883572933822, -0.871301087519, -0.859029241216, -0.846757394913, 
	-0.834485548610, -0.822213702307, -0.809941856004, -0.797670009701, 
	-0.785398163397, -0.773126317094, -0.760854470791, -0.748582624488, 
	-0.736310778185, -0.724038931882, -0.711767085579, -0.699495239276, 
	-0.687223392973, -0.674951546670, -0.662679700367, -0.650407854064, 
	-0.638136007760, -0.625864161457, -0.613592315154, -0.601320468851, 
	-0.589048622548, -0.576776776245, -0.564504929942, -0.552233083639, 
	-0.539961237336, -0.527689391033, -0.515417544730, -0.503145698426, 
	-0.490873852123, -0.478602005820, -0.466330159517, -0.454058313214, 
	-0.441786466911, -0.429514620608, -0.417242774305, -0.404970928002, 
	-0.392699081699, -0.380427235396, -0.368155389093, -0.355883542789, 
	-0.343611696486, -0.331339850183, -0.319068003880, -0.306796157577, 
	-0.294524311274, -0.282252464971, -0.269980618668, -0.257708772365, 
	-0.245436926062, -0.233165079759, -0.220893233456, -0.208621387152, 
	-0.196349540849, -0.184077694546, -0.171805848243, -0.159534001940, 
	-0.147262155637, -0.134990309334, -0.122718463031, -0.110446616728, 
	-0.098174770425, -0.085902924122, -0.073631077819, -0.061359231515, 
	-0.049087385212, -0.036815538909, -0.024543692606, -0.012271846303, 
	-0.000000000000,  0.012271846303,  0.024543692606,  0.036815538909, 
	 0.049087385212,  0.061359231515,  0.073631077819,  0.085902924122, 
	 0.098174770425,  0.110446616728,  0.122718463031,  0.134990309334, 
	 0.147262155637,  0.159534001940,  0.171805848243,  0.184077694546, 
	 0.196349540849,  0.208621387152,  0.220893233456,  0.233165079759, 
	 0.245436926062,  0.257708772365,  0.269980618668,  0.282252464971, 
	 0.294524311274,  0.306796157577,  0.319068003880,  0.331339850183, 
	 0.343611696486,  0.355883542789,  0.368155389093,  0.380427235396, 
	 0.392699081699,  0.404970928002,  0.417242774305,  0.429514620608, 
	 0.441786466911,  0.454058313214,  0.466330159517,  0.478602005820, 
	 0.490873852123,  0.503145698426,  0.515417544730,  0.527689391033, 
	 0.539961237336,  0.552233083639,  0.564504929942,  0.576776776245, 
	 0.589048622548,  0.601320468851,  0.613592315154,  0.625864161457, 
	 0.638136007760,  0.650407854064,  0.662679700367,  0.674951546670, 
	 0.687223392973,  0.699495239276,  0.711767085579,  0.724038931882, 
	 0.736310778185,  0.748582624488,  0.760854470791,  0.773126317094, 
	 0.785398163397,  0.797670009701,  0.809941856004,  0.822213702307, 
	 0.834485548610,  0.846757394913,  0.859029241216,  0.871301087519, 
	 0.883572933822,  0.895844780125,  0.908116626428,  0.920388472731, 
	 0.932660319034,  0.944932165338,  0.957204011641,  0.969475857944, 
	 0.981747704247,  0.994019550550,  1.006291396853,  1.018563243156, 
	 1.030835089459,  1.043106935762,  1.055378782065,  1.067650628368, 
	 1.079922474671,  1.092194320975,  1.104466167278,  1.116738013581, 
	 1.129009859884,  1.141281706187,  1.153553552490,  1.165825398793, 
	 1.178097245096,  1.190369091399,  1.202640937702,  1.214912784005, 
	 1.227184630309,  1.239456476612,  1.251728322915,  1.264000169218, 
	 1.276272015521,  1.288543861824,  1.300815708127,  1.313087554430, 
	 1.325359400733,  1.337631247036,  1.349903093339,  1.362174939642, 
	 1.374446785946,  1.386718632249,  1.398990478552,  1.411262324855, 
	 1.423534171158,  1.435806017461,  1.448077863764,  1.460349710067, 
	 1.472621556370,  1.484893402673,  1.497165248976,  1.509437095279, 
	 1.521708941583,  1.533980787886,  1.546252634189,  1.558524480492, 
	 1.570796326795,  1.583068173098,  1.595340019401,  1.607611865704, 
	 1.619883712007,  1.632155558310,  1.644427404613,  1.656699250916, 
	 1.668971097220,  1.681242943523,  1.693514789826,  1.705786636129, 
	 1.718058482432,  1.730330328735,  1.742602175038,  1.754874021341, 
	 1.767145867644,  1.779417713947,  1.791689560250,  1.803961406554, 
	 1.816233252857,  1.828505099160,  1.840776945463,  1.853048791766, 
	 1.865320638069,  1.877592484372,  1.889864330675,  1.902136176978, 
	 1.914408023281,  1.926679869584,  1.938951715887,  1.951223562191, 
	 1.963495408494,  1.975767254797,  1.988039101100,  2.000310947403, 
	 2.012582793706,  2.024854640009,  2.037126486312,  2.049398332615, 
	 2.061670178918,  2.073942025221,  2.086213871524,  2.098485717828, 
	 2.110757564131,  2.123029410434,  2.135301256737,  2.147573103040, 
	 2.159844949343,  2.172116795646,  2.184388641949,  2.196660488252, 
	 2.208932334555,  2.221204180858,  2.233476027161,  2.245747873465, 
	 2.258019719768,  2.270291566071,  2.282563412374,  2.294835258677, 
	 2.307107104980,  2.319378951283,  2.331650797586,  2.343922643889, 
	 2.356194490192,  2.368466336495,  2.380738182799,  2.393010029102, 
	 2.405281875405,  2.417553721708,  2.429825568011,  2.442097414314, 
	 2.454369260617,  2.466641106920,  2.478912953223,  2.491184799526, 
	 2.503456645829,  2.515728492132,  2.528000338436,  2.540272184739, 
	 2.552544031042,  2.564815877345,  2.577087723648,  2.589359569951, 
	 2.601631416254,  2.613903262557,  2.626175108860,  2.638446955163, 
	 2.650718801466,  2.662990647769,  2.675262494073,  2.687534340376, 
	 2.699806186679,  2.712078032982,  2.724349879285,  2.736621725588, 
	 2.748893571891,  2.761165418194,  2.773437264497,  2.785709110800, 
	 2.797980957103,  2.810252803406,  2.822524649710,  2.834796496013, 
	 2.847068342316,  2.859340188619,  2.871612034922,  2.883883881225, 
	 2.896155727528,  2.908427573831,  2.920699420134,  2.932971266437, 
	 2.945243112740,  2.957514959043,  2.969786805347,  2.982058651650, 
	 2.994330497953,  3.006602344256,  3.018874190559,  3.031146036862, 
	 3.043417883165,  3.055689729468,  3.067961575771,  3.080233422074, 
	 3.092505268377,  3.104777114681,  3.117048960984,  3.129320807287, 
}; 


// End of File
