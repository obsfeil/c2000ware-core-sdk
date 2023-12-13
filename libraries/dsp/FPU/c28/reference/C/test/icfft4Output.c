//#############################################################################
//! \file icfft4Output.c
//! \brief  Ouput Vector (1024) 
//! \author Vishal Coelho 
//! \date   16-Nov-2015
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


const float test_golden[2048] = {
	 3.00000000000F,  0.00000000000F,  1.24148922378F,  2.31229818248F, 
	-1.07000807715F,  1.26148089594F, -0.36327863860F, -0.69262196094F, 
	 1.40128535384F,  0.04467766000F,  0.72633700993F,  1.96182564317F, 
	-1.29361764200F,  1.74907374358F, -1.65923413010F,  0.11421741517F, 
	-0.79199009406F, -0.40403573448F, -0.67395610531F, -0.13480603411F, 
	-0.85021713573F, -0.52643216288F, -0.29361764200F, -0.84696071099F, 
	-0.08267998445F, -0.37404039088F, -0.71674863491F, -0.58351942859F, 
	-0.24524464985F, -1.84621980765F,  1.73900891722F, -1.67369564365F, 
	 2.24148922378F,  0.58981485011F,  0.19098300563F,  1.58778525229F, 
	-0.87654476497F, -0.22654358611F,  1.04802591160F, -1.27736087265F, 
	 2.44573835578F,  0.89516329136F,  0.40128535384F,  2.94679069259F, 
	-2.08267998445F,  1.54961089547F, -1.41165163075F, -0.78976802501F, 
	 0.45879985865F, -0.42462435342F,  0.01702690032F,  1.18374951782F, 
	-1.67395610531F,  0.76730699848F, -1.65923413010F, -0.93864691058F, 
	-0.41165163075F, -1.38580247957F,  0.03535400430F, -0.91288215947F, 
	 0.09226835946F, -0.99573417630F,  0.75475535015F, -0.94410677506F, 
	 0.92999192285F, -0.08591039135F,  0.12345523503F,  0.05097308152F, 
	 0.30901699437F, -0.95105651630F,  1.93247222940F, -0.63875833381F, 
	 2.04802591160F,  1.62475215994F, -0.36327863860F,  2.48294854365F, 
	-1.71674863491F,  0.40794892400F,  0.03535400430F, -0.98923087312F, 
	 1.39736536362F,  0.79801722728F, -0.54120014135F,  2.47748867917F, 
	-2.79199009406F,  0.77153477011F, -1.79199009406F, -1.77153477011F, 
	 0.45879985865F, -1.47748867917F,  0.39736536362F,  0.20198277272F, 
	-0.96464599570F, -0.01076912688F, -0.71674863491F, -1.40794892400F, 
	 0.63672136140F, -1.48294854365F,  1.04802591160F, -0.62475215994F, 
	 0.93247222940F, -0.36124166619F,  1.30901699437F, -0.04894348370F, 
	 1.12345523503F,  0.94902691848F, -0.07000807715F,  1.08591039135F, 
	-0.24524464985F, -0.05589322494F,  1.09226835946F, -0.00426582370F, 
	 1.03535400430F,  1.91288215947F, -1.41165163075F,  2.38580247957F, 
	-2.65923413010F, -0.06135308942F, -0.67395610531F, -1.76730699848F, 
	 1.01702690032F, -0.18374951782F, -0.54120014135F,  1.42462435342F, 
	-2.41165163075F, -0.21023197499F, -1.08267998445F, -2.54961089547F, 
	 1.40128535384F, -1.94679069259F,  1.44573835578F,  0.10483670864F, 
	 0.04802591160F,  0.27736087265F,  0.12345523503F, -0.77345641389F, 
	 1.19098300563F, -0.58778525229F,  1.24148922378F,  0.41018514989F, 
	 0.73900891722F,  0.67369564365F,  0.75475535015F,  0.84621980765F, 
	 0.28325136509F,  1.58351942859F, -1.08267998445F,  1.37404039088F, 
	-1.29361764200F, -0.15303928901F,  0.14978286427F, -0.47356783712F, 
	 0.32604389469F,  1.13480603411F, -1.79199009406F,  1.40403573448F, 
	-2.65923413010F, -1.11421741517F, -0.29361764200F, -2.74907374358F, 
	 1.72633700993F, -0.96182564317F,  0.40128535384F,  0.95532234000F, 
	-1.36327863860F, -0.30737803906F, -0.07000807715F, -2.26148089594F, 
	 2.24148922378F, -1.31229818248F,  2.00000000000F,  1.00000000000F, 
	 0.24148922378F,  1.31229818248F, -0.07000807715F,  0.26148089594F, 
	 0.63672136140F,  0.30737803906F,  0.40128535384F,  1.04467766000F, 
	-0.27366299007F,  0.96182564317F, -0.29361764200F,  0.74907374358F, 
	-0.65923413010F,  1.11421741517F, -1.79199009406F,  0.59596426552F, 
	-1.67395610531F, -1.13480603411F,  0.14978286427F, -1.52643216288F, 
	 0.70638235800F,  0.15303928901F, -1.08267998445F,  0.62595960912F, 
	-1.71674863491F, -1.58351942859F,  0.75475535015F, -2.84621980765F, 
	 2.73900891722F, -0.67369564365F,  1.24148922378F,  1.58981485011F, 
	-0.80901699437F,  0.58778525229F,  0.12345523503F, -1.22654358611F, 
	 2.04802591160F, -0.27736087265F,  1.44573835578F,  1.89516329136F, 
	-0.59871464616F,  1.94679069259F, -1.08267998445F,  0.54961089547F, 
	-0.41165163075F,  0.21023197499F, -0.54120014135F,  0.57537564658F, 
	-0.98297309968F,  0.18374951782F, -0.67395610531F, -0.23269300152F, 
	-0.65923413010F,  0.06135308942F, -1.41165163075F, -0.38580247957F, 
	-0.96464599570F, -1.91288215947F,  1.09226835946F, -1.99573417630F, 
	 1.75475535015F,  0.05589322494F, -0.07000807715F,  0.91408960865F, 
	-0.87654476497F, -0.94902691848F,  1.30901699437F, -1.95105651630F, 
	 2.93247222940F,  0.36124166619F,  1.04802591160F,  2.62475215994F, 
	-1.36327863860F,  1.48294854365F, -0.71674863491F, -0.59205107600F, 
	 1.03535400430F,  0.01076912688F,  0.39736536362F,  1.79801722728F, 
	-1.54120014135F,  1.47748867917F, -1.79199009406F, -0.22846522989F, 
	-0.79199009406F, -0.77153477011F, -0.54120014135F, -0.47748867917F, 
	-0.60263463638F, -0.79801722728F,  0.03535400430F, -1.01076912688F, 
	 0.28325136509F, -0.40794892400F, -0.36327863860F, -0.48294854365F, 
	 0.04802591160F, -1.62475215994F,  1.93247222940F, -1.36124166619F, 
	 2.30901699437F,  0.95105651630F,  0.12345523503F,  1.94902691848F, 
	-1.07000807715F,  0.08591039135F,  0.75475535015F, -1.05589322494F, 
	 2.09226835946F,  0.99573417630F,  0.03535400430F,  2.91288215947F, 
	-2.41165163075F,  1.38580247957F, -1.65923413010F, -1.06135308942F, 
	 0.32604389469F, -0.76730699848F,  0.01702690032F,  0.81625048218F, 
	-1.54120014135F,  0.42462435342F, -1.41165163075F, -1.21023197499F, 
	-0.08267998445F, -1.54961089547F,  0.40128535384F, -0.94679069259F, 
	 0.44573835578F, -0.89516329136F,  1.04802591160F, -0.72263912735F, 
	 1.12345523503F,  0.22654358611F,  0.19098300563F,  0.41221474771F, 
	 0.24148922378F, -0.58981485011F,  1.73900891722F, -0.32630435635F, 
	 1.75475535015F,  1.84621980765F, -0.71674863491F,  2.58351942859F, 
	-2.08267998445F,  0.37404039088F, -0.29361764200F, -1.15303928901F, 
	 1.14978286427F,  0.52643216288F, -0.67395610531F,  2.13480603411F, 
	-2.79199009406F,  0.40403573448F, -1.65923413010F, -2.11421741517F, 
	 0.70638235800F, -1.74907374358F,  0.72633700993F,  0.03817435683F, 
	-0.59871464616F, -0.04467766000F, -0.36327863860F, -1.30737803906F, 
	 0.92999192285F, -1.26148089594F,  1.24148922378F, -0.31229818248F, 
	 1.00000000000F, -0.00000000000F,  1.24148922378F,  0.31229818248F, 
	 0.92999192285F,  1.26148089594F, -0.36327863860F,  1.30737803906F, 
	-0.59871464616F,  0.04467766000F,  0.72633700993F, -0.03817435683F, 
	 0.70638235800F,  1.74907374358F, -1.65923413010F,  2.11421741517F, 
	-2.79199009406F, -0.40403573448F, -0.67395610531F, -2.13480603411F, 
	 1.14978286427F, -0.52643216288F, -0.29361764200F,  1.15303928901F, 
	-2.08267998445F, -0.37404039088F, -0.71674863491F, -2.58351942859F, 
	 1.75475535015F, -1.84621980765F,  1.73900891722F,  0.32630435635F, 
	 0.24148922378F,  0.58981485011F,  0.19098300563F, -0.41221474771F, 
	 1.12345523503F, -0.22654358611F,  1.04802591160F,  0.72263912735F, 
	 0.44573835578F,  0.89516329136F,  0.40128535384F,  0.94679069259F, 
	-0.08267998445F,  1.54961089547F, -1.41165163075F,  1.21023197499F, 
	-1.54120014135F, -0.42462435342F,  0.01702690032F, -0.81625048218F, 
	 0.32604389469F,  0.76730699848F, -1.65923413010F,  1.06135308942F, 
	-2.41165163075F, -1.38580247957F,  0.03535400430F, -2.91288215947F, 
	 2.09226835946F, -0.99573417629F,  0.75475535015F,  1.05589322494F, 
	-1.07000807715F, -0.08591039135F,  0.12345523503F, -1.94902691848F, 
	 2.30901699437F, -0.95105651630F,  1.93247222940F,  1.36124166619F, 
	 0.04802591160F,  1.62475215994F, -0.36327863860F,  0.48294854365F, 
	 0.28325136509F,  0.40794892400F,  0.03535400430F,  1.01076912688F, 
	-0.60263463638F,  0.79801722728F, -0.54120014135F,  0.47748867917F, 
	-0.79199009406F,  0.77153477011F, -1.79199009406F,  0.22846522989F, 
	-1.54120014135F, -1.47748867917F,  0.39736536362F, -1.79801722728F, 
	 1.03535400430F, -0.01076912688F, -0.71674863491F,  0.59205107600F, 
	-1.36327863860F, -1.48294854365F,  1.04802591160F, -2.62475215994F, 
	 2.93247222940F, -0.36124166619F,  1.30901699437F,  1.95105651630F, 
	-0.87654476497F,  0.94902691848F, -0.07000807715F, -0.91408960865F, 
	 1.75475535015F, -0.05589322494F,  1.09226835946F,  1.99573417630F, 
	-0.96464599570F,  1.91288215947F, -1.41165163075F,  0.38580247957F, 
	-0.65923413010F, -0.06135308942F, -0.67395610531F,  0.23269300152F, 
	-0.98297309968F, -0.18374951782F, -0.54120014135F, -0.57537564658F, 
	-0.41165163075F, -0.21023197499F, -1.08267998445F, -0.54961089547F, 
	-0.59871464616F, -1.94679069259F,  1.44573835578F, -1.89516329136F, 
	 2.04802591160F,  0.27736087265F,  0.12345523503F,  1.22654358611F, 
	-0.80901699437F, -0.58778525229F,  1.24148922378F, -1.58981485011F, 
	 2.73900891722F,  0.67369564365F,  0.75475535015F,  2.84621980765F, 
	-1.71674863491F,  1.58351942859F, -1.08267998445F, -0.62595960912F, 
	 0.70638235800F, -0.15303928901F,  0.14978286427F,  1.52643216288F, 
	-1.67395610531F,  1.13480603411F, -1.79199009406F, -0.59596426552F, 
	-0.65923413010F, -1.11421741517F, -0.29361764200F, -0.74907374358F, 
	-0.27366299007F, -0.96182564317F,  0.40128535384F, -1.04467766000F, 
	 0.63672136140F, -0.30737803906F, -0.07000807715F, -0.26148089594F, 
	 0.24148922378F, -1.31229818248F,  2.00000000000F, -1.00000000000F, 
	 2.24148922378F,  1.31229818248F, -0.07000807715F,  2.26148089594F, 
	-1.36327863860F,  0.30737803906F,  0.40128535384F, -0.95532234000F, 
	 1.72633700993F,  0.96182564317F, -0.29361764200F,  2.74907374358F, 
	-2.65923413010F,  1.11421741517F, -1.79199009406F, -1.40403573448F, 
	 0.32604389469F, -1.13480603411F,  0.14978286427F,  0.47356783712F, 
	-1.29361764200F,  0.15303928901F, -1.08267998445F, -1.37404039088F, 
	 0.28325136509F, -1.58351942859F,  0.75475535015F, -0.84621980765F, 
	 0.73900891722F, -0.67369564365F,  1.24148922378F, -0.41018514989F, 
	 1.19098300563F,  0.58778525229F,  0.12345523503F,  0.77345641389F, 
	 0.04802591160F, -0.27736087265F,  1.44573835578F, -0.10483670864F, 
	 1.40128535384F,  1.94679069259F, -1.08267998445F,  2.54961089547F, 
	-2.41165163075F,  0.21023197499F, -0.54120014135F, -1.42462435342F, 
	 1.01702690032F,  0.18374951782F, -0.67395610531F,  1.76730699848F, 
	-2.65923413010F,  0.06135308942F, -1.41165163075F, -2.38580247957F, 
	 1.03535400430F, -1.91288215947F,  1.09226835946F,  0.00426582371F, 
	-0.24524464985F,  0.05589322494F, -0.07000807715F, -1.08591039135F, 
	 1.12345523503F, -0.94902691848F,  1.30901699437F,  0.04894348370F, 
	 0.93247222940F,  0.36124166619F,  1.04802591160F,  0.62475215994F, 
	 0.63672136140F,  1.48294854365F, -0.71674863491F,  1.40794892400F, 
	-0.96464599570F,  0.01076912688F,  0.39736536362F, -0.20198277272F, 
	 0.45879985865F,  1.47748867917F, -1.79199009406F,  1.77153477011F, 
	-2.79199009406F, -0.77153477011F, -0.54120014135F, -2.47748867917F, 
	 1.39736536362F, -0.79801722728F,  0.03535400430F,  0.98923087312F, 
	-1.71674863491F, -0.40794892400F, -0.36327863860F, -2.48294854365F, 
	 2.04802591160F, -1.62475215994F,  1.93247222940F,  0.63875833381F, 
	 0.30901699437F,  0.95105651630F,  0.12345523503F, -0.05097308152F, 
	 0.92999192285F,  0.08591039135F,  0.75475535015F,  0.94410677506F, 
	 0.09226835946F,  0.99573417630F,  0.03535400430F,  0.91288215947F, 
	-0.41165163075F,  1.38580247957F, -1.65923413010F,  0.93864691058F, 
	-1.67395610531F, -0.76730699848F,  0.01702690032F, -1.18374951782F, 
	 0.45879985865F,  0.42462435342F, -1.41165163075F,  0.78976802501F, 
	-2.08267998445F, -1.54961089547F,  0.40128535384F, -2.94679069259F, 
	 2.44573835578F, -0.89516329135F,  1.04802591160F,  1.27736087265F, 
	-0.87654476497F,  0.22654358611F,  0.19098300563F, -1.58778525229F, 
	 2.24148922378F, -0.58981485011F,  1.73900891722F,  1.67369564365F, 
	-0.24524464985F,  1.84621980765F, -0.71674863491F,  0.58351942859F, 
	-0.08267998445F,  0.37404039088F, -0.29361764200F,  0.84696071099F, 
	-0.85021713573F,  0.52643216288F, -0.67395610531F,  0.13480603411F, 
	-0.79199009406F,  0.40403573448F, -1.65923413010F, -0.11421741517F, 
	-1.29361764200F, -1.74907374358F,  0.72633700993F, -1.96182564317F, 
	 1.40128535384F, -0.04467766000F, -0.36327863860F,  0.69262196094F, 
	-1.07000807715F, -1.26148089594F,  1.24148922378F, -2.31229818248F, 
	 3.00000000000F,  0.00000000000F,  1.24148922378F,  2.31229818248F, 
	-1.07000807715F,  1.26148089594F, -0.36327863860F, -0.69262196094F, 
	 1.40128535384F,  0.04467766000F,  0.72633700993F,  1.96182564317F, 
	-1.29361764200F,  1.74907374358F, -1.65923413010F,  0.11421741517F, 
	-0.79199009406F, -0.40403573448F, -0.67395610531F, -0.13480603411F, 
	-0.85021713573F, -0.52643216288F, -0.29361764200F, -0.84696071099F, 
	-0.08267998445F, -0.37404039088F, -0.71674863491F, -0.58351942859F, 
	-0.24524464985F, -1.84621980765F,  1.73900891722F, -1.67369564365F, 
	 2.24148922378F,  0.58981485011F,  0.19098300562F,  1.58778525229F, 
	-0.87654476497F, -0.22654358611F,  1.04802591160F, -1.27736087265F, 
	 2.44573835578F,  0.89516329136F,  0.40128535384F,  2.94679069259F, 
	-2.08267998445F,  1.54961089547F, -1.41165163075F, -0.78976802501F, 
	 0.45879985865F, -0.42462435342F,  0.01702690032F,  1.18374951782F, 
	-1.67395610531F,  0.76730699848F, -1.65923413010F, -0.93864691058F, 
	-0.41165163075F, -1.38580247957F,  0.03535400430F, -0.91288215947F, 
	 0.09226835946F, -0.99573417630F,  0.75475535015F, -0.94410677506F, 
	 0.92999192285F, -0.08591039135F,  0.12345523503F,  0.05097308152F, 
	 0.30901699438F, -0.95105651630F,  1.93247222940F, -0.63875833381F, 
	 2.04802591160F,  1.62475215994F, -0.36327863860F,  2.48294854365F, 
	-1.71674863491F,  0.40794892400F,  0.03535400430F, -0.98923087312F, 
	 1.39736536362F,  0.79801722728F, -0.54120014135F,  2.47748867917F, 
	-2.79199009406F,  0.77153477011F, -1.79199009406F, -1.77153477011F, 
	 0.45879985865F, -1.47748867917F,  0.39736536362F,  0.20198277272F, 
	-0.96464599570F, -0.01076912688F, -0.71674863491F, -1.40794892400F, 
	 0.63672136140F, -1.48294854365F,  1.04802591160F, -0.62475215994F, 
	 0.93247222940F, -0.36124166619F,  1.30901699437F, -0.04894348370F, 
	 1.12345523503F,  0.94902691848F, -0.07000807715F,  1.08591039135F, 
	-0.24524464985F, -0.05589322494F,  1.09226835946F, -0.00426582370F, 
	 1.03535400430F,  1.91288215947F, -1.41165163075F,  2.38580247957F, 
	-2.65923413010F, -0.06135308942F, -0.67395610531F, -1.76730699848F, 
	 1.01702690032F, -0.18374951782F, -0.54120014135F,  1.42462435342F, 
	-2.41165163075F, -0.21023197499F, -1.08267998445F, -2.54961089547F, 
	 1.40128535384F, -1.94679069259F,  1.44573835578F,  0.10483670864F, 
	 0.04802591160F,  0.27736087265F,  0.12345523503F, -0.77345641389F, 
	 1.19098300563F, -0.58778525229F,  1.24148922378F,  0.41018514989F, 
	 0.73900891722F,  0.67369564365F,  0.75475535015F,  0.84621980765F, 
	 0.28325136509F,  1.58351942859F, -1.08267998445F,  1.37404039088F, 
	-1.29361764200F, -0.15303928901F,  0.14978286427F, -0.47356783712F, 
	 0.32604389469F,  1.13480603411F, -1.79199009406F,  1.40403573448F, 
	-2.65923413010F, -1.11421741517F, -0.29361764200F, -2.74907374358F, 
	 1.72633700993F, -0.96182564317F,  0.40128535384F,  0.95532234000F, 
	-1.36327863860F, -0.30737803906F, -0.07000807715F, -2.26148089594F, 
	 2.24148922378F, -1.31229818248F,  2.00000000000F,  1.00000000000F, 
	 0.24148922378F,  1.31229818248F, -0.07000807715F,  0.26148089594F, 
	 0.63672136140F,  0.30737803906F,  0.40128535384F,  1.04467766000F, 
	-0.27366299007F,  0.96182564317F, -0.29361764200F,  0.74907374358F, 
	-0.65923413010F,  1.11421741517F, -1.79199009406F,  0.59596426552F, 
	-1.67395610531F, -1.13480603411F,  0.14978286427F, -1.52643216288F, 
	 0.70638235800F,  0.15303928902F, -1.08267998445F,  0.62595960912F, 
	-1.71674863491F, -1.58351942859F,  0.75475535015F, -2.84621980765F, 
	 2.73900891722F, -0.67369564365F,  1.24148922378F,  1.58981485011F, 
	-0.80901699437F,  0.58778525229F,  0.12345523503F, -1.22654358611F, 
	 2.04802591160F, -0.27736087265F,  1.44573835578F,  1.89516329136F, 
	-0.59871464616F,  1.94679069259F, -1.08267998445F,  0.54961089547F, 
	-0.41165163075F,  0.21023197499F, -0.54120014135F,  0.57537564658F, 
	-0.98297309968F,  0.18374951782F, -0.67395610531F, -0.23269300152F, 
	-0.65923413010F,  0.06135308942F, -1.41165163075F, -0.38580247957F, 
	-0.96464599570F, -1.91288215947F,  1.09226835946F, -1.99573417629F, 
	 1.75475535015F,  0.05589322494F, -0.07000807715F,  0.91408960865F, 
	-0.87654476497F, -0.94902691848F,  1.30901699438F, -1.95105651630F, 
	 2.93247222940F,  0.36124166619F,  1.04802591160F,  2.62475215994F, 
	-1.36327863860F,  1.48294854365F, -0.71674863491F, -0.59205107600F, 
	 1.03535400430F,  0.01076912688F,  0.39736536362F,  1.79801722728F, 
	-1.54120014135F,  1.47748867917F, -1.79199009406F, -0.22846522989F, 
	-0.79199009406F, -0.77153477011F, -0.54120014135F, -0.47748867917F, 
	-0.60263463638F, -0.79801722728F,  0.03535400430F, -1.01076912688F, 
	 0.28325136509F, -0.40794892400F, -0.36327863860F, -0.48294854365F, 
	 0.04802591160F, -1.62475215994F,  1.93247222940F, -1.36124166619F, 
	 2.30901699437F,  0.95105651630F,  0.12345523503F,  1.94902691848F, 
	-1.07000807715F,  0.08591039135F,  0.75475535015F, -1.05589322494F, 
	 2.09226835946F,  0.99573417630F,  0.03535400430F,  2.91288215947F, 
	-2.41165163075F,  1.38580247957F, -1.65923413010F, -1.06135308942F, 
	 0.32604389469F, -0.76730699848F,  0.01702690032F,  0.81625048218F, 
	-1.54120014135F,  0.42462435342F, -1.41165163075F, -1.21023197499F, 
	-0.08267998445F, -1.54961089547F,  0.40128535384F, -0.94679069259F, 
	 0.44573835578F, -0.89516329136F,  1.04802591160F, -0.72263912735F, 
	 1.12345523503F,  0.22654358611F,  0.19098300562F,  0.41221474771F, 
	 0.24148922378F, -0.58981485011F,  1.73900891722F, -0.32630435635F, 
	 1.75475535015F,  1.84621980765F, -0.71674863491F,  2.58351942859F, 
	-2.08267998445F,  0.37404039088F, -0.29361764200F, -1.15303928901F, 
	 1.14978286427F,  0.52643216288F, -0.67395610531F,  2.13480603411F, 
	-2.79199009406F,  0.40403573448F, -1.65923413010F, -2.11421741517F, 
	 0.70638235800F, -1.74907374358F,  0.72633700993F,  0.03817435683F, 
	-0.59871464616F, -0.04467766000F, -0.36327863860F, -1.30737803906F, 
	 0.92999192285F, -1.26148089594F,  1.24148922378F, -0.31229818248F, 
	 1.00000000000F, -0.00000000000F,  1.24148922378F,  0.31229818248F, 
	 0.92999192285F,  1.26148089594F, -0.36327863860F,  1.30737803906F, 
	-0.59871464616F,  0.04467766000F,  0.72633700993F, -0.03817435683F, 
	 0.70638235800F,  1.74907374358F, -1.65923413010F,  2.11421741517F, 
	-2.79199009406F, -0.40403573448F, -0.67395610531F, -2.13480603411F, 
	 1.14978286427F, -0.52643216288F, -0.29361764200F,  1.15303928901F, 
	-2.08267998445F, -0.37404039088F, -0.71674863491F, -2.58351942859F, 
	 1.75475535015F, -1.84621980765F,  1.73900891722F,  0.32630435635F, 
	 0.24148922378F,  0.58981485011F,  0.19098300563F, -0.41221474771F, 
	 1.12345523503F, -0.22654358611F,  1.04802591160F,  0.72263912735F, 
	 0.44573835578F,  0.89516329136F,  0.40128535384F,  0.94679069259F, 
	-0.08267998445F,  1.54961089547F, -1.41165163075F,  1.21023197499F, 
	-1.54120014135F, -0.42462435342F,  0.01702690032F, -0.81625048218F, 
	 0.32604389469F,  0.76730699848F, -1.65923413010F,  1.06135308942F, 
	-2.41165163075F, -1.38580247957F,  0.03535400430F, -2.91288215947F, 
	 2.09226835946F, -0.99573417629F,  0.75475535015F,  1.05589322494F, 
	-1.07000807715F, -0.08591039135F,  0.12345523503F, -1.94902691848F, 
	 2.30901699438F, -0.95105651630F,  1.93247222940F,  1.36124166619F, 
	 0.04802591160F,  1.62475215994F, -0.36327863860F,  0.48294854365F, 
	 0.28325136509F,  0.40794892400F,  0.03535400430F,  1.01076912688F, 
	-0.60263463638F,  0.79801722728F, -0.54120014135F,  0.47748867917F, 
	-0.79199009406F,  0.77153477011F, -1.79199009406F,  0.22846522989F, 
	-1.54120014135F, -1.47748867917F,  0.39736536362F, -1.79801722728F, 
	 1.03535400430F, -0.01076912688F, -0.71674863491F,  0.59205107600F, 
	-1.36327863860F, -1.48294854365F,  1.04802591160F, -2.62475215994F, 
	 2.93247222940F, -0.36124166619F,  1.30901699437F,  1.95105651630F, 
	-0.87654476497F,  0.94902691848F, -0.07000807715F, -0.91408960865F, 
	 1.75475535015F, -0.05589322494F,  1.09226835946F,  1.99573417630F, 
	-0.96464599570F,  1.91288215947F, -1.41165163075F,  0.38580247957F, 
	-0.65923413010F, -0.06135308942F, -0.67395610531F,  0.23269300152F, 
	-0.98297309968F, -0.18374951782F, -0.54120014135F, -0.57537564658F, 
	-0.41165163075F, -0.21023197499F, -1.08267998445F, -0.54961089547F, 
	-0.59871464616F, -1.94679069259F,  1.44573835578F, -1.89516329135F, 
	 2.04802591160F,  0.27736087265F,  0.12345523503F,  1.22654358611F, 
	-0.80901699437F, -0.58778525229F,  1.24148922378F, -1.58981485011F, 
	 2.73900891722F,  0.67369564365F,  0.75475535015F,  2.84621980765F, 
	-1.71674863491F,  1.58351942859F, -1.08267998445F, -0.62595960912F, 
	 0.70638235800F, -0.15303928901F,  0.14978286427F,  1.52643216288F, 
	-1.67395610531F,  1.13480603411F, -1.79199009406F, -0.59596426552F, 
	-0.65923413010F, -1.11421741517F, -0.29361764200F, -0.74907374358F, 
	-0.27366299007F, -0.96182564317F,  0.40128535384F, -1.04467766000F, 
	 0.63672136140F, -0.30737803906F, -0.07000807715F, -0.26148089594F, 
	 0.24148922378F, -1.31229818248F,  2.00000000000F, -1.00000000000F, 
	 2.24148922378F,  1.31229818248F, -0.07000807715F,  2.26148089594F, 
	-1.36327863860F,  0.30737803906F,  0.40128535384F, -0.95532234000F, 
	 1.72633700993F,  0.96182564317F, -0.29361764200F,  2.74907374358F, 
	-2.65923413010F,  1.11421741517F, -1.79199009406F, -1.40403573448F, 
	 0.32604389469F, -1.13480603411F,  0.14978286427F,  0.47356783712F, 
	-1.29361764200F,  0.15303928901F, -1.08267998445F, -1.37404039088F, 
	 0.28325136509F, -1.58351942859F,  0.75475535015F, -0.84621980765F, 
	 0.73900891722F, -0.67369564365F,  1.24148922378F, -0.41018514989F, 
	 1.19098300562F,  0.58778525229F,  0.12345523503F,  0.77345641389F, 
	 0.04802591160F, -0.27736087265F,  1.44573835578F, -0.10483670864F, 
	 1.40128535384F,  1.94679069259F, -1.08267998445F,  2.54961089547F, 
	-2.41165163075F,  0.21023197499F, -0.54120014135F, -1.42462435342F, 
	 1.01702690032F,  0.18374951782F, -0.67395610531F,  1.76730699848F, 
	-2.65923413010F,  0.06135308941F, -1.41165163075F, -2.38580247957F, 
	 1.03535400430F, -1.91288215947F,  1.09226835946F,  0.00426582371F, 
	-0.24524464985F,  0.05589322494F, -0.07000807715F, -1.08591039135F, 
	 1.12345523503F, -0.94902691848F,  1.30901699437F,  0.04894348370F, 
	 0.93247222940F,  0.36124166619F,  1.04802591160F,  0.62475215994F, 
	 0.63672136140F,  1.48294854365F, -0.71674863491F,  1.40794892400F, 
	-0.96464599570F,  0.01076912688F,  0.39736536362F, -0.20198277272F, 
	 0.45879985865F,  1.47748867917F, -1.79199009406F,  1.77153477011F, 
	-2.79199009406F, -0.77153477011F, -0.54120014135F, -2.47748867917F, 
	 1.39736536362F, -0.79801722728F,  0.03535400430F,  0.98923087312F, 
	-1.71674863491F, -0.40794892400F, -0.36327863860F, -2.48294854365F, 
	 2.04802591160F, -1.62475215994F,  1.93247222940F,  0.63875833381F, 
	 0.30901699437F,  0.95105651629F,  0.12345523503F, -0.05097308152F, 
	 0.92999192285F,  0.08591039135F,  0.75475535015F,  0.94410677506F, 
	 0.09226835946F,  0.99573417629F,  0.03535400430F,  0.91288215947F, 
	-0.41165163075F,  1.38580247957F, -1.65923413010F,  0.93864691058F, 
	-1.67395610531F, -0.76730699848F,  0.01702690032F, -1.18374951782F, 
	 0.45879985865F,  0.42462435342F, -1.41165163075F,  0.78976802501F, 
	-2.08267998445F, -1.54961089547F,  0.40128535384F, -2.94679069259F, 
	 2.44573835578F, -0.89516329135F,  1.04802591160F,  1.27736087265F, 
	-0.87654476497F,  0.22654358611F,  0.19098300563F, -1.58778525229F, 
	 2.24148922378F, -0.58981485011F,  1.73900891722F,  1.67369564365F, 
	-0.24524464985F,  1.84621980765F, -0.71674863491F,  0.58351942859F, 
	-0.08267998445F,  0.37404039088F, -0.29361764200F,  0.84696071099F, 
	-0.85021713573F,  0.52643216288F, -0.67395610531F,  0.13480603411F, 
	-0.79199009406F,  0.40403573448F, -1.65923413010F, -0.11421741517F, 
	-1.29361764200F, -1.74907374358F,  0.72633700993F, -1.96182564317F, 
	 1.40128535384F, -0.04467766000F, -0.36327863860F,  0.69262196094F, 
	-1.07000807715F, -1.26148089594F,  1.24148922378F, -2.31229818248F, 
	 3.00000000000F,  0.00000000000F,  1.24148922378F,  2.31229818248F, 
	-1.07000807715F,  1.26148089594F, -0.36327863860F, -0.69262196094F, 
	 1.40128535384F,  0.04467766000F,  0.72633700993F,  1.96182564317F, 
	-1.29361764200F,  1.74907374358F, -1.65923413010F,  0.11421741517F, 
	-0.79199009406F, -0.40403573448F, -0.67395610531F, -0.13480603411F, 
	-0.85021713573F, -0.52643216288F, -0.29361764200F, -0.84696071099F, 
	-0.08267998445F, -0.37404039088F, -0.71674863491F, -0.58351942859F, 
	-0.24524464985F, -1.84621980765F,  1.73900891722F, -1.67369564365F, 
	 2.24148922378F,  0.58981485011F,  0.19098300562F,  1.58778525229F, 
	-0.87654476497F, -0.22654358611F,  1.04802591160F, -1.27736087265F, 
	 2.44573835578F,  0.89516329136F,  0.40128535384F,  2.94679069259F, 
	-2.08267998445F,  1.54961089547F, -1.41165163075F, -0.78976802501F, 
	 0.45879985865F, -0.42462435342F,  0.01702690032F,  1.18374951782F, 
	-1.67395610531F,  0.76730699848F, -1.65923413010F, -0.93864691058F, 
	-0.41165163075F, -1.38580247957F,  0.03535400430F, -0.91288215947F, 
	 0.09226835946F, -0.99573417630F,  0.75475535015F, -0.94410677506F, 
	 0.92999192285F, -0.08591039135F,  0.12345523503F,  0.05097308152F, 
	 0.30901699438F, -0.95105651630F,  1.93247222940F, -0.63875833381F, 
	 2.04802591160F,  1.62475215994F, -0.36327863860F,  2.48294854365F, 
	-1.71674863491F,  0.40794892400F,  0.03535400430F, -0.98923087312F, 
	 1.39736536362F,  0.79801722728F, -0.54120014135F,  2.47748867917F, 
	-2.79199009406F,  0.77153477011F, -1.79199009406F, -1.77153477011F, 
	 0.45879985865F, -1.47748867917F,  0.39736536362F,  0.20198277272F, 
	-0.96464599570F, -0.01076912688F, -0.71674863491F, -1.40794892400F, 
	 0.63672136140F, -1.48294854365F,  1.04802591160F, -0.62475215994F, 
	 0.93247222940F, -0.36124166619F,  1.30901699437F, -0.04894348370F, 
	 1.12345523503F,  0.94902691848F, -0.07000807715F,  1.08591039135F, 
	-0.24524464985F, -0.05589322494F,  1.09226835946F, -0.00426582370F, 
	 1.03535400430F,  1.91288215947F, -1.41165163075F,  2.38580247957F, 
	-2.65923413010F, -0.06135308942F, -0.67395610531F, -1.76730699848F, 
	 1.01702690032F, -0.18374951782F, -0.54120014135F,  1.42462435342F, 
	-2.41165163075F, -0.21023197499F, -1.08267998445F, -2.54961089547F, 
	 1.40128535384F, -1.94679069259F,  1.44573835578F,  0.10483670865F, 
	 0.04802591160F,  0.27736087265F,  0.12345523503F, -0.77345641389F, 
	 1.19098300563F, -0.58778525229F,  1.24148922378F,  0.41018514989F, 
	 0.73900891722F,  0.67369564365F,  0.75475535015F,  0.84621980765F, 
	 0.28325136509F,  1.58351942859F, -1.08267998445F,  1.37404039088F, 
	-1.29361764200F, -0.15303928901F,  0.14978286427F, -0.47356783712F, 
	 0.32604389469F,  1.13480603411F, -1.79199009406F,  1.40403573448F, 
	-2.65923413010F, -1.11421741517F, -0.29361764200F, -2.74907374358F, 
	 1.72633700993F, -0.96182564317F,  0.40128535384F,  0.95532234000F, 
	-1.36327863860F, -0.30737803906F, -0.07000807715F, -2.26148089594F, 
	 2.24148922378F, -1.31229818248F,  2.00000000000F,  1.00000000000F, 
	 0.24148922378F,  1.31229818248F, -0.07000807715F,  0.26148089594F, 
	 0.63672136140F,  0.30737803906F,  0.40128535384F,  1.04467766000F, 
	-0.27366299007F,  0.96182564317F, -0.29361764200F,  0.74907374358F, 
	-0.65923413010F,  1.11421741517F, -1.79199009406F,  0.59596426552F, 
	-1.67395610531F, -1.13480603411F,  0.14978286427F, -1.52643216288F, 
	 0.70638235800F,  0.15303928902F, -1.08267998445F,  0.62595960912F, 
	-1.71674863491F, -1.58351942859F,  0.75475535015F, -2.84621980765F, 
	 2.73900891722F, -0.67369564365F,  1.24148922378F,  1.58981485011F, 
	-0.80901699438F,  0.58778525229F,  0.12345523503F, -1.22654358611F, 
	 2.04802591160F, -0.27736087265F,  1.44573835578F,  1.89516329136F, 
	-0.59871464616F,  1.94679069259F, -1.08267998445F,  0.54961089547F, 
	-0.41165163075F,  0.21023197499F, -0.54120014135F,  0.57537564658F, 
	-0.98297309968F,  0.18374951782F, -0.67395610531F, -0.23269300152F, 
	-0.65923413010F,  0.06135308942F, -1.41165163075F, -0.38580247957F, 
	-0.96464599570F, -1.91288215947F,  1.09226835946F, -1.99573417629F, 
	 1.75475535015F,  0.05589322494F, -0.07000807715F,  0.91408960865F, 
	-0.87654476497F, -0.94902691848F,  1.30901699438F, -1.95105651630F, 
	 2.93247222940F,  0.36124166619F,  1.04802591160F,  2.62475215994F, 
	-1.36327863860F,  1.48294854365F, -0.71674863491F, -0.59205107600F, 
	 1.03535400430F,  0.01076912688F,  0.39736536362F,  1.79801722728F, 
	-1.54120014135F,  1.47748867917F, -1.79199009406F, -0.22846522989F, 
	-0.79199009406F, -0.77153477011F, -0.54120014135F, -0.47748867917F, 
	-0.60263463638F, -0.79801722728F,  0.03535400430F, -1.01076912688F, 
	 0.28325136509F, -0.40794892400F, -0.36327863860F, -0.48294854365F, 
	 0.04802591160F, -1.62475215994F,  1.93247222940F, -1.36124166619F, 
	 2.30901699437F,  0.95105651630F,  0.12345523503F,  1.94902691848F, 
	-1.07000807715F,  0.08591039135F,  0.75475535015F, -1.05589322494F, 
	 2.09226835946F,  0.99573417630F,  0.03535400430F,  2.91288215947F, 
	-2.41165163075F,  1.38580247957F, -1.65923413010F, -1.06135308942F, 
	 0.32604389469F, -0.76730699848F,  0.01702690032F,  0.81625048218F, 
	-1.54120014135F,  0.42462435342F, -1.41165163075F, -1.21023197499F, 
	-0.08267998445F, -1.54961089547F,  0.40128535384F, -0.94679069259F, 
	 0.44573835578F, -0.89516329136F,  1.04802591160F, -0.72263912735F, 
	 1.12345523503F,  0.22654358611F,  0.19098300562F,  0.41221474771F, 
	 0.24148922378F, -0.58981485011F,  1.73900891722F, -0.32630435635F, 
	 1.75475535015F,  1.84621980765F, -0.71674863491F,  2.58351942859F, 
	-2.08267998445F,  0.37404039088F, -0.29361764200F, -1.15303928901F, 
	 1.14978286427F,  0.52643216288F, -0.67395610531F,  2.13480603411F, 
	-2.79199009406F,  0.40403573448F, -1.65923413010F, -2.11421741517F, 
	 0.70638235800F, -1.74907374358F,  0.72633700993F,  0.03817435683F, 
	-0.59871464616F, -0.04467766000F, -0.36327863860F, -1.30737803906F, 
	 0.92999192285F, -1.26148089594F,  1.24148922378F, -0.31229818248F, 
	 1.00000000000F, -0.00000000000F,  1.24148922378F,  0.31229818248F, 
	 0.92999192285F,  1.26148089594F, -0.36327863860F,  1.30737803906F, 
	-0.59871464616F,  0.04467766000F,  0.72633700993F, -0.03817435683F, 
	 0.70638235800F,  1.74907374358F, -1.65923413010F,  2.11421741517F, 
	-2.79199009406F, -0.40403573448F, -0.67395610531F, -2.13480603411F, 
	 1.14978286427F, -0.52643216288F, -0.29361764200F,  1.15303928902F, 
	-2.08267998445F, -0.37404039088F, -0.71674863491F, -2.58351942859F, 
	 1.75475535015F, -1.84621980765F,  1.73900891722F,  0.32630435635F, 
	 0.24148922378F,  0.58981485011F,  0.19098300563F, -0.41221474771F, 
	 1.12345523503F, -0.22654358611F,  1.04802591160F,  0.72263912735F, 
	 0.44573835578F,  0.89516329135F,  0.40128535384F,  0.94679069259F, 
	-0.08267998445F,  1.54961089547F, -1.41165163075F,  1.21023197499F, 
	-1.54120014135F, -0.42462435342F,  0.01702690032F, -0.81625048218F, 
	 0.32604389469F,  0.76730699848F, -1.65923413010F,  1.06135308942F, 
	-2.41165163075F, -1.38580247957F,  0.03535400430F, -2.91288215947F, 
	 2.09226835946F, -0.99573417629F,  0.75475535015F,  1.05589322494F, 
	-1.07000807715F, -0.08591039135F,  0.12345523503F, -1.94902691848F, 
	 2.30901699438F, -0.95105651630F,  1.93247222940F,  1.36124166619F, 
	 0.04802591160F,  1.62475215994F, -0.36327863860F,  0.48294854365F, 
	 0.28325136509F,  0.40794892400F,  0.03535400430F,  1.01076912688F, 
	-0.60263463638F,  0.79801722728F, -0.54120014135F,  0.47748867917F, 
	-0.79199009406F,  0.77153477011F, -1.79199009406F,  0.22846522989F, 
	-1.54120014135F, -1.47748867917F,  0.39736536362F, -1.79801722728F, 
	 1.03535400430F, -0.01076912688F, -0.71674863491F,  0.59205107600F, 
	-1.36327863860F, -1.48294854365F,  1.04802591160F, -2.62475215994F, 
	 2.93247222940F, -0.36124166619F,  1.30901699437F,  1.95105651630F, 
	-0.87654476497F,  0.94902691848F, -0.07000807715F, -0.91408960865F, 
	 1.75475535015F, -0.05589322494F,  1.09226835946F,  1.99573417630F, 
	-0.96464599570F,  1.91288215947F, -1.41165163075F,  0.38580247957F, 
	-0.65923413010F, -0.06135308941F, -0.67395610531F,  0.23269300152F, 
	-0.98297309968F, -0.18374951782F, -0.54120014135F, -0.57537564658F, 
	-0.41165163075F, -0.21023197499F, -1.08267998445F, -0.54961089547F, 
	-0.59871464616F, -1.94679069259F,  1.44573835578F, -1.89516329135F, 
	 2.04802591160F,  0.27736087265F,  0.12345523503F,  1.22654358611F, 
	-0.80901699437F, -0.58778525229F,  1.24148922378F, -1.58981485011F, 
	 2.73900891722F,  0.67369564365F,  0.75475535015F,  2.84621980765F, 
	-1.71674863491F,  1.58351942859F, -1.08267998445F, -0.62595960912F, 
	 0.70638235800F, -0.15303928901F,  0.14978286427F,  1.52643216288F, 
	-1.67395610531F,  1.13480603411F, -1.79199009406F, -0.59596426552F, 
	-0.65923413010F, -1.11421741517F, -0.29361764200F, -0.74907374358F, 
	-0.27366299007F, -0.96182564317F,  0.40128535384F, -1.04467766000F, 
	 0.63672136140F, -0.30737803906F, -0.07000807715F, -0.26148089594F, 
	 0.24148922378F, -1.31229818248F,  2.00000000000F, -1.00000000000F, 
	 2.24148922378F,  1.31229818248F, -0.07000807715F,  2.26148089594F, 
	-1.36327863860F,  0.30737803906F,  0.40128535384F, -0.95532234000F, 
	 1.72633700993F,  0.96182564317F, -0.29361764200F,  2.74907374358F, 
	-2.65923413010F,  1.11421741517F, -1.79199009406F, -1.40403573448F, 
	 0.32604389469F, -1.13480603411F,  0.14978286427F,  0.47356783712F, 
	-1.29361764200F,  0.15303928901F, -1.08267998445F, -1.37404039088F, 
	 0.28325136509F, -1.58351942859F,  0.75475535015F, -0.84621980765F, 
	 0.73900891722F, -0.67369564365F,  1.24148922378F, -0.41018514989F, 
	 1.19098300562F,  0.58778525229F,  0.12345523503F,  0.77345641389F, 
	 0.04802591160F, -0.27736087265F,  1.44573835578F, -0.10483670864F, 
	 1.40128535384F,  1.94679069259F, -1.08267998445F,  2.54961089547F, 
	-2.41165163075F,  0.21023197499F, -0.54120014135F, -1.42462435342F, 
	 1.01702690032F,  0.18374951782F, -0.67395610531F,  1.76730699848F, 
	-2.65923413010F,  0.06135308941F, -1.41165163075F, -2.38580247957F, 
	 1.03535400430F, -1.91288215947F,  1.09226835946F,  0.00426582371F, 
	-0.24524464985F,  0.05589322494F, -0.07000807715F, -1.08591039135F, 
	 1.12345523503F, -0.94902691848F,  1.30901699437F,  0.04894348370F, 
	 0.93247222940F,  0.36124166619F,  1.04802591160F,  0.62475215994F, 
	 0.63672136140F,  1.48294854365F, -0.71674863491F,  1.40794892400F, 
	-0.96464599570F,  0.01076912688F,  0.39736536362F, -0.20198277272F, 
	 0.45879985865F,  1.47748867917F, -1.79199009406F,  1.77153477011F, 
	-2.79199009406F, -0.77153477011F, -0.54120014135F, -2.47748867917F, 
	 1.39736536362F, -0.79801722728F,  0.03535400430F,  0.98923087312F, 
	-1.71674863491F, -0.40794892400F, -0.36327863860F, -2.48294854365F, 
	 2.04802591160F, -1.62475215994F,  1.93247222940F,  0.63875833381F, 
	 0.30901699437F,  0.95105651629F,  0.12345523503F, -0.05097308152F, 
	 0.92999192285F,  0.08591039135F,  0.75475535015F,  0.94410677506F, 
	 0.09226835946F,  0.99573417629F,  0.03535400430F,  0.91288215947F, 
	-0.41165163075F,  1.38580247957F, -1.65923413010F,  0.93864691058F, 
	-1.67395610531F, -0.76730699848F,  0.01702690032F, -1.18374951782F, 
	 0.45879985865F,  0.42462435342F, -1.41165163075F,  0.78976802501F, 
	-2.08267998445F, -1.54961089547F,  0.40128535384F, -2.94679069259F, 
	 2.44573835578F, -0.89516329135F,  1.04802591160F,  1.27736087265F, 
	-0.87654476497F,  0.22654358610F,  0.19098300563F, -1.58778525229F, 
	 2.24148922378F, -0.58981485011F,  1.73900891722F,  1.67369564365F, 
	-0.24524464985F,  1.84621980765F, -0.71674863491F,  0.58351942859F, 
	-0.08267998445F,  0.37404039088F, -0.29361764200F,  0.84696071099F, 
	-0.85021713573F,  0.52643216288F, -0.67395610531F,  0.13480603411F, 
	-0.79199009406F,  0.40403573448F, -1.65923413010F, -0.11421741517F, 
	-1.29361764200F, -1.74907374358F,  0.72633700993F, -1.96182564317F, 
	 1.40128535384F, -0.04467766000F, -0.36327863860F,  0.69262196094F, 
	-1.07000807715F, -1.26148089594F,  1.24148922378F, -2.31229818248F, 
	 3.00000000000F,  0.00000000000F,  1.24148922378F,  2.31229818248F, 
	-1.07000807715F,  1.26148089594F, -0.36327863860F, -0.69262196094F, 
}; 


// End of File
