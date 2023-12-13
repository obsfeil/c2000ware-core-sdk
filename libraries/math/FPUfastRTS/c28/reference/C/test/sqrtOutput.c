//#############################################################################
//! \file sqrtOutput.c
//! \brief  Square Root Ouput Vector (512) 
//! \author Vishal Coelho 
//! \date   03-Sep-2015
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


const float test_golden[512] = {
	1.64872127070e+00F, 1.64897198503e+00F, 1.64922266125e+00F, 
	1.64947329937e+00F, 1.64972389941e+00F, 1.64997446139e+00F, 
	1.65022498533e+00F, 1.65047547123e+00F, 1.65072591913e+00F, 
	1.65097632904e+00F, 1.65122670097e+00F, 1.65147703495e+00F, 
	1.65172733099e+00F, 1.65197758910e+00F, 1.65222780930e+00F, 
	1.65247799162e+00F, 1.65272813607e+00F, 1.65297824266e+00F, 
	1.65322831141e+00F, 1.65347834235e+00F, 1.65372833548e+00F, 
	1.65397829083e+00F, 1.65422820840e+00F, 1.65447808823e+00F, 
	1.65472793032e+00F, 1.65497773470e+00F, 1.65522750137e+00F, 
	1.65547723036e+00F, 1.65572692169e+00F, 1.65597657537e+00F, 
	1.65622619141e+00F, 1.65647576984e+00F, 1.65672531067e+00F, 
	1.65697481393e+00F, 1.65722427961e+00F, 1.65747370775e+00F, 
	1.65772309836e+00F, 1.65797245146e+00F, 1.65822176706e+00F, 
	1.65847104519e+00F, 1.65872028584e+00F, 1.65896948906e+00F, 
	1.65921865484e+00F, 1.65946778322e+00F, 1.65971687420e+00F, 
	1.65996592780e+00F, 1.66021494404e+00F, 1.66046392293e+00F, 
	1.66071286450e+00F, 1.66096176876e+00F, 1.66121063572e+00F, 
	1.66145946540e+00F, 1.66170825783e+00F, 1.66195701301e+00F, 
	1.66220573096e+00F, 1.66245441171e+00F, 1.66270305526e+00F, 
	1.66295166163e+00F, 1.66320023084e+00F, 1.66344876291e+00F, 
	1.66369725785e+00F, 1.66394571568e+00F, 1.66419413642e+00F, 
	1.66444252008e+00F, 1.66469086668e+00F, 1.66493917623e+00F, 
	1.66518744876e+00F, 1.66543568428e+00F, 1.66568388280e+00F, 
	1.66593204435e+00F, 1.66618016893e+00F, 1.66642825657e+00F, 
	1.66667630728e+00F, 1.66692432108e+00F, 1.66717229798e+00F, 
	1.66742023801e+00F, 1.66766814117e+00F, 1.66791600748e+00F, 
	1.66816383697e+00F, 1.66841162964e+00F, 1.66865938552e+00F, 
	1.66890710462e+00F, 1.66915478695e+00F, 1.66940243253e+00F, 
	1.66965004139e+00F, 1.66989761353e+00F, 1.67014514897e+00F, 
	1.67039264772e+00F, 1.67064010982e+00F, 1.67088753526e+00F, 
	1.67113492407e+00F, 1.67138227626e+00F, 1.67162959185e+00F, 
	1.67187687086e+00F, 1.67212411329e+00F, 1.67237131918e+00F, 
	1.67261848853e+00F, 1.67286562136e+00F, 1.67311271769e+00F, 
	1.67335977752e+00F, 1.67360680089e+00F, 1.67385378780e+00F, 
	1.67410073828e+00F, 1.67434765233e+00F, 1.67459452997e+00F, 
	1.67484137123e+00F, 1.67508817610e+00F, 1.67533494462e+00F, 
	1.67558167680e+00F, 1.67582837265e+00F, 1.67607503219e+00F, 
	1.67632165544e+00F, 1.67656824241e+00F, 1.67681479312e+00F, 
	1.67706130758e+00F, 1.67730778581e+00F, 1.67755422782e+00F, 
	1.67780063364e+00F, 1.67804700327e+00F, 1.67829333674e+00F, 
	1.67853963406e+00F, 1.67878589524e+00F, 1.67903212030e+00F, 
	1.67927830926e+00F, 1.67952446214e+00F, 1.67977057894e+00F, 
	1.68001665969e+00F, 1.68026270440e+00F, 1.68050871308e+00F, 
	1.68075468576e+00F, 1.68100062244e+00F, 1.68124652315e+00F, 
	1.68149238790e+00F, 1.68173821670e+00F, 1.68198400958e+00F, 
	1.68222976654e+00F, 1.68247548760e+00F, 1.68272117279e+00F, 
	1.68296682210e+00F, 1.68321243557e+00F, 1.68345801320e+00F, 
	1.68370355501e+00F, 1.68394906102e+00F, 1.68419453124e+00F, 
	1.68443996569e+00F, 1.68468536439e+00F, 1.68493072734e+00F, 
	1.68517605457e+00F, 1.68542134609e+00F, 1.68566660191e+00F, 
	1.68591182206e+00F, 1.68615700654e+00F, 1.68640215538e+00F, 
	1.68664726858e+00F, 1.68689234617e+00F, 1.68713738816e+00F, 
	1.68738239457e+00F, 1.68762736540e+00F, 1.68787230068e+00F, 
	1.68811720042e+00F, 1.68836206464e+00F, 1.68860689335e+00F, 
	1.68885168657e+00F, 1.68909644431e+00F, 1.68934116659e+00F, 
	1.68958585342e+00F, 1.68983050483e+00F, 1.69007512082e+00F, 
	1.69031970140e+00F, 1.69056424661e+00F, 1.69080875644e+00F, 
	1.69105323092e+00F, 1.69129767007e+00F, 1.69154207389e+00F, 
	1.69178644240e+00F, 1.69203077562e+00F, 1.69227507356e+00F, 
	1.69251933624e+00F, 1.69276356368e+00F, 1.69300775588e+00F, 
	1.69325191286e+00F, 1.69349603465e+00F, 1.69374012125e+00F, 
	1.69398417268e+00F, 1.69422818895e+00F, 1.69447217009e+00F, 
	1.69471611609e+00F, 1.69496002699e+00F, 1.69520390280e+00F, 
	1.69544774352e+00F, 1.69569154918e+00F, 1.69593531979e+00F, 
	1.69617905537e+00F, 1.69642275593e+00F, 1.69666642148e+00F, 
	1.69691005205e+00F, 1.69715364764e+00F, 1.69739720827e+00F, 
	1.69764073396e+00F, 1.69788422473e+00F, 1.69812768057e+00F, 
	1.69837110152e+00F, 1.69861448759e+00F, 1.69885783878e+00F, 
	1.69910115512e+00F, 1.69934443663e+00F, 1.69958768331e+00F, 
	1.69983089518e+00F, 1.70007407226e+00F, 1.70031721456e+00F, 
	1.70056032209e+00F, 1.70080339488e+00F, 1.70104643293e+00F, 
	1.70128943626e+00F, 1.70153240489e+00F, 1.70177533883e+00F, 
	1.70201823810e+00F, 1.70226110270e+00F, 1.70250393266e+00F, 
	1.70274672799e+00F, 1.70298948870e+00F, 1.70323221482e+00F, 
	1.70347490634e+00F, 1.70371756330e+00F, 1.70396018570e+00F, 
	1.70420277356e+00F, 1.70444532689e+00F, 1.70468784571e+00F, 
	1.70493033004e+00F, 1.70517277988e+00F, 1.70541519525e+00F, 
	1.70565757617e+00F, 1.70589992265e+00F, 1.70614223471e+00F, 
	1.70638451236e+00F, 1.70662675561e+00F, 1.70686896448e+00F, 
	1.70711113899e+00F, 1.70735327915e+00F, 1.70759538497e+00F, 
	1.70783745648e+00F, 1.70807949367e+00F, 1.70832149657e+00F, 
	1.70856346520e+00F, 1.70880539956e+00F, 1.70904729967e+00F, 
	1.70928916555e+00F, 1.70953099721e+00F, 1.70977279467e+00F, 
	1.71001455793e+00F, 1.71025628702e+00F, 1.71049798195e+00F, 
	1.71073964273e+00F, 1.71098126938e+00F, 1.71122286191e+00F, 
	1.71146442033e+00F, 1.71170594467e+00F, 1.71194743493e+00F, 
	1.71218889114e+00F, 1.71243031329e+00F, 1.71267170142e+00F, 
	1.71291305553e+00F, 1.71315437563e+00F, 1.71339566175e+00F, 
	1.71363691390e+00F, 1.71387813208e+00F, 1.71411931632e+00F, 
	1.71436046663e+00F, 1.71460158302e+00F, 1.71484266551e+00F, 
	1.71508371411e+00F, 1.71532472884e+00F, 1.71556570970e+00F, 
	1.71580665673e+00F, 1.71604756992e+00F, 1.71628844929e+00F, 
	1.71652929487e+00F, 1.71677010665e+00F, 1.71701088466e+00F, 
	1.71725162891e+00F, 1.71749233942e+00F, 1.71773301619e+00F, 
	1.71797365925e+00F, 1.71821426860e+00F, 1.71845484426e+00F, 
	1.71869538625e+00F, 1.71893589458e+00F, 1.71917636927e+00F, 
	1.71941681032e+00F, 1.71965721775e+00F, 1.71989759158e+00F, 
	1.72013793181e+00F, 1.72037823847e+00F, 1.72061851157e+00F, 
	1.72085875113e+00F, 1.72109895714e+00F, 1.72133912964e+00F, 
	1.72157926863e+00F, 1.72181937414e+00F, 1.72205944616e+00F, 
	1.72229948472e+00F, 1.72253948983e+00F, 1.72277946150e+00F, 
	1.72301939975e+00F, 1.72325930460e+00F, 1.72349917605e+00F, 
	1.72373901412e+00F, 1.72397881882e+00F, 1.72421859017e+00F, 
	1.72445832819e+00F, 1.72469803288e+00F, 1.72493770426e+00F, 
	1.72517734234e+00F, 1.72541694714e+00F, 1.72565651867e+00F, 
	1.72589605695e+00F, 1.72613556198e+00F, 1.72637503379e+00F, 
	1.72661447239e+00F, 1.72685387778e+00F, 1.72709324999e+00F, 
	1.72733258903e+00F, 1.72757189491e+00F, 1.72781116764e+00F, 
	1.72805040725e+00F, 1.72828961373e+00F, 1.72852878712e+00F, 
	1.72876792741e+00F, 1.72900703463e+00F, 1.72924610879e+00F, 
	1.72948514990e+00F, 1.72972415797e+00F, 1.72996313303e+00F, 
	1.73020207507e+00F, 1.73044098413e+00F, 1.73067986020e+00F, 
	1.73091870331e+00F, 1.73115751346e+00F, 1.73139629067e+00F, 
	1.73163503496e+00F, 1.73187374634e+00F, 1.73211242482e+00F, 
	1.73235107042e+00F, 1.73258968314e+00F, 1.73282826301e+00F, 
	1.73306681004e+00F, 1.73330532423e+00F, 1.73354380561e+00F, 
	1.73378225418e+00F, 1.73402066997e+00F, 1.73425905298e+00F, 
	1.73449740322e+00F, 1.73473572072e+00F, 1.73497400548e+00F, 
	1.73521225752e+00F, 1.73545047685e+00F, 1.73568866349e+00F, 
	1.73592681744e+00F, 1.73616493873e+00F, 1.73640302736e+00F, 
	1.73664108335e+00F, 1.73687910671e+00F, 1.73711709746e+00F, 
	1.73735505561e+00F, 1.73759298117e+00F, 1.73783087415e+00F, 
	1.73806873458e+00F, 1.73830656245e+00F, 1.73854435780e+00F, 
	1.73878212062e+00F, 1.73901985093e+00F, 1.73925754875e+00F, 
	1.73949521409e+00F, 1.73973284696e+00F, 1.73997044738e+00F, 
	1.74020801536e+00F, 1.74044555090e+00F, 1.74068305404e+00F, 
	1.74092052477e+00F, 1.74115796312e+00F, 1.74139536909e+00F, 
	1.74163274270e+00F, 1.74187008396e+00F, 1.74210739289e+00F, 
	1.74234466949e+00F, 1.74258191379e+00F, 1.74281912579e+00F, 
	1.74305630551e+00F, 1.74329345296e+00F, 1.74353056815e+00F, 
	1.74376765110e+00F, 1.74400470183e+00F, 1.74424172033e+00F, 
	1.74447870664e+00F, 1.74471566075e+00F, 1.74495258268e+00F, 
	1.74518947246e+00F, 1.74542633008e+00F, 1.74566315556e+00F, 
	1.74589994892e+00F, 1.74613671017e+00F, 1.74637343932e+00F, 
	1.74661013638e+00F, 1.74684680137e+00F, 1.74708343430e+00F, 
	1.74732003519e+00F, 1.74755660404e+00F, 1.74779314087e+00F, 
	1.74802964570e+00F, 1.74826611853e+00F, 1.74850255938e+00F, 
	1.74873896826e+00F, 1.74897534518e+00F, 1.74921169017e+00F, 
	1.74944800322e+00F, 1.74968428436e+00F, 1.74992053359e+00F, 
	1.75015675093e+00F, 1.75039293640e+00F, 1.75062909000e+00F, 
	1.75086521175e+00F, 1.75110130165e+00F, 1.75133735974e+00F, 
	1.75157338601e+00F, 1.75180938048e+00F, 1.75204534316e+00F, 
	1.75228127406e+00F, 1.75251717321e+00F, 1.75275304060e+00F, 
	1.75298887626e+00F, 1.75322468020e+00F, 1.75346045242e+00F, 
	1.75369619295e+00F, 1.75393190179e+00F, 1.75416757896e+00F, 
	1.75440322447e+00F, 1.75463883833e+00F, 1.75487442056e+00F, 
	1.75510997117e+00F, 1.75534549017e+00F, 1.75558097757e+00F, 
	1.75581643339e+00F, 1.75605185764e+00F, 1.75628725033e+00F, 
	1.75652261148e+00F, 1.75675794109e+00F, 1.75699323918e+00F, 
	1.75722850577e+00F, 1.75746374086e+00F, 1.75769894447e+00F, 
	1.75793411662e+00F, 1.75816925730e+00F, 1.75840436654e+00F, 
	1.75863944435e+00F, 1.75887449074e+00F, 1.75910950573e+00F, 
	1.75934448932e+00F, 1.75957944153e+00F, 1.75981436237e+00F, 
	1.76004925186e+00F, 1.76028411000e+00F, 1.76051893681e+00F, 
	1.76075373230e+00F, 1.76098849649e+00F, 1.76122322939e+00F, 
	1.76145793100e+00F, 1.76169260135e+00F, 1.76192724044e+00F, 
	1.76216184829e+00F, 1.76239642490e+00F, 1.76263097030e+00F, 
	1.76286548449e+00F, 1.76309996749e+00F, 1.76333441931e+00F, 
	1.76356883996e+00F, 1.76380322946e+00F, 1.76403758781e+00F, 
	1.76427191503e+00F, 1.76450621113e+00F, 1.76474047612e+00F, 
	1.76497471002e+00F, 1.76520891284e+00F, 1.76544308459e+00F, 
	1.76567722528e+00F, 1.76591133493e+00F, 1.76614541355e+00F, 
	1.76637946114e+00F, 1.76661347773e+00F, 1.76684746333e+00F, 
	1.76708141794e+00F, 1.76731534158e+00F, 1.76754923426e+00F, 
	1.76778309599e+00F, 1.76801692680e+00F, 1.76825072668e+00F, 
	1.76848449565e+00F, 1.76871823372e+00F, 1.76895194091e+00F, 
	1.76918561723e+00F, 1.76941926269e+00F, 1.76965287730e+00F, 
	1.76988646107e+00F, 1.77012001402e+00F, 1.77035353616e+00F, 
	1.77058702750e+00F, 1.77082048805e+00F, 1.77105391783e+00F, 
	1.77128731684e+00F, 1.77152068511e+00F, 1.77175402264e+00F, 
	1.77198732944e+00F, 1.77222060552e+00F, }; 


// End of File
