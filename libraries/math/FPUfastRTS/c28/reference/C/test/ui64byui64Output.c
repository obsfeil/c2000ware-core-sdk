//#############################################################################
//! \file ui64byui64Output.c
//! \brief  FID Ouput Vector (256) 
//! \author Vishal Coelho 
//! \date   11-Apr-2016
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

const uint64_t test_quotient[256] = {
                       1UL,                    0UL,                    1UL,                    0UL, 
                       2UL,                    1UL,                    0UL,                    3UL, 
                       0UL,                    4UL,                    2UL,                    0UL, 
                       0UL,                    1UL,                    0UL,                   10UL, 
                       1UL,                   35UL,                    0UL,                   36UL, 
                       0UL,                    1UL,                    0UL,                    0UL, 
                       0UL,                    0UL,                    0UL,                    1UL, 
                       5UL,                    3UL,                    1UL,                    2UL, 
                       0UL,                    5UL,                    0UL,                    1UL, 
                       0UL,                    0UL,                    3UL,                   35UL, 
                       0UL,                    0UL,                    1UL,                    5UL, 
                       0UL,                    3UL,                    0UL,                    2UL, 
                       1UL,                    0UL,                    1UL,                    0UL, 
                       0UL,                    0UL,                    0UL,                    2UL, 
                       8UL,                    0UL,                    0UL,                    1UL, 
                       2UL,                    4UL,                    1UL,                    2UL, 
                       0UL,                    1UL,                    0UL,                    0UL, 
                       2UL,                    1UL,                    0UL,                    1UL, 
                       0UL,                    0UL,                    0UL,                    1UL, 
                       0UL,                    0UL,                    1UL,                    0UL, 
                       0UL,                    0UL,                    4UL,                    9UL, 
                       0UL,                    0UL,                    1UL,                    0UL, 
                      13UL,                    0UL,                    0UL,                    0UL, 
                       2UL,                   34UL,                    0UL,                   30UL, 
                       0UL,                    1UL,                    3UL,                    0UL, 
                       3UL,                    0UL,                    8UL,                    2UL, 
                       0UL,                    0UL,                    0UL,                    0UL, 
                       1UL,                    0UL,                    1UL,                    2UL, 
                       0UL,                    0UL,                    0UL,                   11UL, 
                       6UL,                    1UL,                    0UL,                    0UL, 
                       0UL,                    4UL,                    0UL,                    5UL, 
                       0UL,                    0UL,                    0UL,                    0UL, 
                       0UL,                    0UL,                    0UL,                    0UL, 
                       0UL,                    0UL,                    0UL,                    2UL, 
                       1UL,                   15UL,                    2UL,                    2UL, 
                       0UL,                    2UL,                    0UL,                    1UL, 
                       0UL,                    0UL,                    1UL,                    1UL, 
                       1UL,                    0UL,                    8UL,                    0UL, 
                       1UL,                    0UL,                    0UL,                    1UL, 
                       0UL,                    0UL,                    1UL,                    2UL, 
                       0UL,                    0UL,                    0UL,                    0UL, 
                       1UL,                    1UL,                    1UL,                    1UL, 
                       3UL,                    1UL,                    0UL,                    0UL, 
                       4UL,                    4UL,                    3UL,                    0UL, 
                       0UL,                   62UL,                    6UL,                    0UL, 
                      10UL,                    0UL,                    1UL,                    8UL, 
                       1UL,                    0UL,                    0UL,                    0UL, 
                       1UL,                   15UL,                    0UL,                    0UL, 
                       0UL,                    0UL,                    0UL,                   27UL, 
                       0UL,                    0UL,                    0UL,                    1UL, 
                       0UL,                    1UL,                    1UL,                    0UL, 
                       0UL,                    0UL,                    0UL,                    5UL, 
                       0UL,                    0UL,                    3UL,                    0UL, 
                       1UL,                    2UL,                    0UL,                    0UL, 
                       0UL,                   43UL,                    1UL,                    0UL, 
                       0UL,                    2UL,                    0UL,                    1UL, 
                       0UL,                    1UL,                    3UL,                    0UL, 
                       0UL,                    8UL,                    1UL,                    0UL, 
                       0UL,                    2UL,                    1UL,                    1UL, 
                       0UL,                    0UL,                    0UL,                    0UL, 
                       1UL,                    0UL,                    2UL,                    1UL, 
                       0UL,                    1UL,                    0UL,                    0UL, 
                       0UL,                    0UL,                    8UL,                    1UL, 
                       4UL,                    0UL,                    2UL,                    0UL, 
}; 

const uint64_t test_remainder[256] = {
     3575383953570678784UL,  6310440372118376448UL,  6559823860097296384UL,  4944271375626672128UL, 
     4268378189584719872UL,  1516672091750711296UL,   331466585975791616UL,  1059874654857906176UL, 
      290578774601392128UL,  2408817445288972288UL,    44249246818248704UL,  7965416016203442176UL, 
    11646221179793405952UL,  1642102591726213120UL,  4194996960591271936UL,   117518014537066496UL, 
      852305980315328512UL,   404539835858432000UL,  5505894484057030656UL,    22920550988730368UL, 
     6154709732534435840UL,  2169757774550155264UL, 10057888469326571520UL,  1986449131173607424UL, 
     2530069003985068032UL,  1741879531428558848UL,  5734790524953978880UL,   560235247331887104UL, 
      153547230666287104UL,   427277598267742208UL,  1346279032974383104UL,  1927284915712432128UL, 
     4051216271857993728UL,   125916823747401728UL,  6511808590544109568UL,  3641787950202142720UL, 
     4796534469369794560UL, 15563905928535310336UL,   961965740799244288UL,    85664488788713472UL, 
     6336895194630658048UL,   171073593675851776UL,  1545840981385351168UL,  1145835963390633984UL, 
      447182992108464128UL,   850816663671328768UL,  5094697435879110656UL,  2291711677750552576UL, 
     5208049191112163328UL,   455291510590117888UL,  1778670954749765632UL,  7773562684635787264UL, 
     1475945366987096064UL,  1463819409094193152UL,  1335106145982746624UL,  2152561747064084480UL, 
      269692171391875072UL,  7218339323458467840UL,  5784624174813630464UL,   840155547193399296UL, 
     2619517026329169920UL,   170209751490338816UL,     6745282083698688UL,  4837208851480772608UL, 
      117624007636287488UL,  6796441035723497472UL,   331344868354516992UL,   542638275841644544UL, 
     3320717058551511040UL,  4213686499435532288UL,  9676951288824125440UL,  2288330436651040768UL, 
     1211443767442788352UL,  4243500513022164992UL,  2159012825887121408UL,   521762545431652352UL, 
     1300799663982161920UL,  1107241019036749824UL,  1730028413076869120UL,  6346745620127770624UL, 
     2370652844925026304UL, 11753078531234967552UL,  1965960645855756288UL,    49344464235950080UL, 
     4962674645252380672UL,  8005513916071063552UL,   425530696450889728UL, 11218246095943563264UL, 
      533334804896329728UL, 17360672968787904512UL,  2425097294962575360UL,  4717251690073014272UL, 
     1522580592510316544UL,   145095841762074624UL,  6289440340622417920UL,     1941426196903936UL, 
     4380762520659030016UL,   109993114517542912UL,  4160026439090259968UL, 17544791482953058304UL, 
     1707155696318490624UL,  9299572606324340736UL,   696865289687044096UL,  2769472072524822528UL, 
    14468941452564645888UL,   533444652222742528UL,   967370032237438976UL,  5966027225969965056UL, 
     2846963200099622912UL, 11625687224214360064UL,  1576614705402454016UL,   957286780329394176UL, 
    11375668626196289536UL,  5694827505264646144UL,  1569421433946281984UL,   936506351304206336UL, 
      855450684343152640UL,  1898304764641204224UL,  3100346163773478912UL,  6269619480830775296UL, 
     1244161199883347968UL,  1136651179683661824UL,  4506273467859302400UL,   156050310071955456UL, 
     5515838494036295680UL,  7725774864745226240UL,  1029922189272240128UL,   569198635858032640UL, 
     3441800593674735616UL,  4997327179289759744UL,  1221973050446669824UL,  6151872795055771648UL, 
      920595327550840832UL,  1868811987423778816UL,  1325763357073651712UL,  3880016971078688768UL, 
     1737151823874207744UL,   445479187018784768UL,  1305554851072970752UL,  3777881384780400640UL, 
    13694773855626530816UL,    88484215284287488UL, 11047684108470255616UL,  5567654985387988992UL, 
     7214826060507742208UL,  4118672503984824320UL,   104699298409181184UL,  1472367190096756736UL, 
     5133352904581087232UL,   636079766121250816UL,   317619973697159168UL,  9635240776953337856UL, 
     3443025743033923584UL,  8256388777634168832UL,  6392515407036465152UL,  5013920822158553088UL, 
     6644755622654818304UL, 10267580949878028288UL,  6828117061691899904UL,  2633464707860119552UL, 
     4501507433179293696UL,  8035737684824010752UL, 15284102477714542592UL,  2816878409581555712UL, 
     1719555711141269504UL,  2640573764818491392UL,  1221308733244545024UL,  3147652060905095168UL, 
     3648919428775307264UL,  1900249666619893760UL, 14576867154281832448UL,  6468958477243062272UL, 
     1404415422726373376UL,   430011690076051456UL,   344950042805182464UL,  1450280295359526912UL, 
     1031159562166407168UL,   109783231578232832UL,  1232670975547373568UL,  1502920180525334528UL, 
      897724361394388992UL, 10047399903596840960UL,  5166965161443837952UL,   959353645279238144UL, 
      554575125255950336UL,  1969202135409924096UL,  1116275665141846016UL, 11471716661373044736UL, 
     4674224647199649792UL,   198593649032060928UL,  7783959551522316288UL,  6748237738625867776UL, 
     1515560907460446208UL,  1287025427576184832UL,  2230019868461410304UL,   358612136323295232UL, 
     4038660755713667072UL,  4377042244865689600UL,   159280650504181760UL,  5946472636375359488UL, 
    10349254054332506112UL,  1303262185588697088UL,  5553904809406455808UL, 15211798259873327104UL, 
     7256851504949981184UL,  2507717723512952832UL,  3610824892672571392UL,   174658794767704064UL, 
    12352584110369501184UL,  1104030555094429696UL,    17953368933115904UL,  9061703694335090688UL, 
     5103351545153777664UL,   366465210261972992UL,  8956519710486777856UL,  1325120169144346624UL, 
    14525770668942206976UL,   112200392912502784UL,   619366406876631040UL,  1486210947144286208UL, 
     1457380601702737920UL,  5387358313930754048UL,  3776331537726164992UL,  2886974222346070016UL, 
     6267134027928358912UL,  2706654324555827200UL,  1560728332636622848UL,  1169944847355746304UL, 
    11298137355917318144UL,   824675508942911488UL,  3015815828208973824UL,  3711952235561035776UL, 
    14530381262892855296UL,   489384379719720960UL,  4320597033436997632UL,  1457530895768272896UL, 
    13130494038923208704UL,  3964196357104146432UL,   284958998207928320UL,  3874622381336911872UL, 
     3979171906874656768UL,  2000698395248340992UL,  2397932039450753024UL,  5261953483774986240UL, 
     6156144359899838464UL,  3361720125339512832UL,    53437669131130880UL,  5735245130354378752UL, 
     8950770218942443520UL,  4836098220525725696UL,  1315418505722292224UL,  2403753835522555904UL, 
      876606928096387072UL,  4893515457325516800UL,   887905727952025600UL,  1185106531589150720UL, 
}; 


// End of File
