//#############################################################################
//
// FILE:   empty_sysconfig_main.c
//
// TITLE:  Empty Pinmux Example
//
// Empty SysCfg & Driverlib Example
//
// This example is an empty project setup for SysConfig and Driverlib 
// development.
//
//#############################################################################
//
//
// $Copyright:
// Copyright (C) 2022 Texas Instruments Incorporated - http://www.ti.com/
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


//
// Included Files
//
#include "driverlib.h"
#include "device.h"
#include "board.h"
#include "fpu.h"
#include "dsp.h"
#include "c2000ware_libraries.h"

float test_input[533] = {
    11.73525203635F, 13.38124076568F, 10.05466394101F,  5.26632496464F,
     2.04209681707F, -1.83163666450F, -1.20494165191F, -4.37017185269F,
    -4.58525653763F, -4.61674849725F, -4.67047549382F, -3.50305225266F,
     3.95038975909F,  3.27015745622F, -0.00592641862F, -2.30665015693F,
    -1.36666061418F, -0.69684144313F,  3.50499100917F,  2.03720603666F,
     1.46722879891F, -0.41790742900F, -2.83185633847F, -3.53782972589F,
     3.12833790716F,  2.75988398522F,  0.39712092180F, -1.10638767102F,
    -0.06151617681F, -0.14641012085F,  2.74264790663F,  0.01184239132F,
    -1.15632040287F, -2.64501455044F, -3.77625775723F, -2.80893004431F,
     5.26188231775F,  5.49560884143F,  2.74625053801F,  0.08750394654F,
    -0.28724504613F, -1.50690901382F,  0.88437915666F, -1.68772260751F,
    -2.32776301185F, -3.34596766034F, -4.40897062456F, -3.86538799064F,
     3.49950138566F,  3.15582546795F,  0.37783296758F, -1.52485026130F,
    -0.41716938441F,  0.23712042584F,  4.41215105081F,  3.08270479299F,
     2.87138117312F,  1.43325138093F, -0.73237540554F, -1.70775790017F,
     3.98363641379F,  2.00894602944F, -2.22439399817F, -5.29650667273F,
    -4.94739308152F, -4.50439065323F,  0.10200036073F, -0.17373633002F,
     1.10679213753F,  1.27045081964F,  0.44106040509F,  0.25268664173F,
     6.10726944179F,  3.83922355564F, -0.81366223000F, -4.10116423377F,
    -3.60642715526F, -2.76964584980F,  2.13516992082F,  1.65826286752F,
     2.00228311222F,  0.60515302496F, -1.92250525699F, -3.24136702699F,
     2.68010978102F,  1.92060310830F, -0.10529977541F, -0.49244307749F,
     2.08921367886F,  3.28749351374F,  6.47686424274F,  2.60383025657F,
    -1.08922251398F, -5.85096420898F, -9.97825680352F, -10.67961673995F,
    -2.28075981582F,  0.28631213934F,  1.19225315179F,  2.37582040839F,
     4.86546783028F,  4.77232675095F,  6.46944876711F,  1.97597001678F,
    -0.81411225174F, -3.23448174513F, -4.40220047769F, -2.75986795487F,
     6.22674558776F,  7.06165921115F,  4.18248091620F,  0.54822449676F,
    -1.41536840866F, -4.34123273907F, -3.19100201572F, -6.07446021304F,
    -5.90914287132F, -5.15816987417F, -3.93041063204F, -1.16615491092F,
     7.78602880861F,  8.01802701946F,  4.70046086797F,  1.31747709329F,
     0.38505903430F, -1.08791871179F,  1.31867275994F, -1.09117177294F,
    -1.52911253718F, -2.34308911280F, -3.18254077194F, -2.38773238850F,
     5.19155649573F,  4.87233855853F,  1.73963940853F, -1.02184639907F,
    -1.24022851482F, -2.14104852772F,  0.64103735523F, -1.49994544742F,
    -1.64667504330F, -2.08994695591F, -2.54719854210F, -1.52074862260F,
     5.97852332843F,  5.21161037410F,  1.36692990953F, -2.13513412840F,
    -2.85130368181F, -3.81731686375F, -0.63792117811F, -2.04940419179F,
    -1.34950643361F, -1.01979175403F, -0.86142539433F,  0.65767125059F,
     8.61282179678F,  8.29779045228F,  4.79982450811F,  1.30353832591F,
    -0.02362224275F, -2.38024759813F, -1.28377976215F, -5.08846694904F,
    -6.50280349181F, -7.40975562473F, -7.23242553570F, -4.44150862846F,
     5.64172839553F,  7.66990056331F,  6.09690133732F,  3.72764170301F,
     2.73186670905F,  0.24607631982F,  1.21558567138F, -2.38773549815F,
    -3.27734680190F, -3.69585193425F, -3.61058900667F, -1.92829535612F,
     5.98092775223F,  5.23223201430F,  1.14393597389F, -2.53066428433F,
    -2.99084645936F, -3.09716627728F,  1.39787725183F,  1.28464293370F,
     2.61899986488F,  2.35921207304F,  0.49721027951F, -1.12589323794F,
     3.36793966125F,  0.34793157754F, -4.10617744123F, -6.26824492355F,
    -4.12271422270F, -1.72906154472F,  4.06055777346F,  3.50190037637F,
     2.90439489751F,  0.15628110545F, -3.54121930844F, -5.37186609386F,
     0.86921761106F,  1.08594261059F,  0.28207667610F,  0.92269113669F,
     4.06674259686F,  5.35558625536F,  8.37491506026F,  4.34311812522F,
     0.65529694695F, -4.00838517369F, -8.21046312265F, -9.46668357865F,
    -2.25140183381F, -1.34497311896F, -2.12420782109F, -2.05422522691F,
     0.37914287681F,  1.42552147165F,  5.14419832662F,  2.87564852498F,
     1.72520009615F, -0.22019745239F, -2.20141718988F, -2.26677872406F,
     4.87604729680F,  4.54323717830F,  1.70368975933F, -0.65061501099F,
    -0.56710316142F, -1.45498569856F,  0.96867795782F, -1.83621698933F,
    -2.73675775781F, -3.71850266887F, -4.21609403276F, -2.59739282050F,
     6.02749601990F,  6.58809088483F,  3.81072302677F,  0.69358074526F,
    -0.53027349632F, -2.79660446455F, -1.32445756119F, -4.32253025101F,
    -4.62440557818F, -4.48870431122F, -3.80505551273F, -1.37115487455F,
     7.49504106953F,  7.83070427511F,  4.72652745860F,  1.61181978698F,
     0.98184614395F, -0.17463452297F,  2.49602201187F,  0.16586888603F,
    -0.53804141579F, -2.06924607292F, -4.03413914981F, -4.53677679658F,
     1.95764222800F,  1.16577017369F, -1.58532938500F, -3.15950449430F,
    -1.74514592896F, -1.12170829972F,  2.54910703370F,  0.39317659551F,
    -0.54468846269F, -2.06384293190F, -3.22783943913F, -2.01642768164F,
     6.69173810088F,  7.79658299758F,  5.74455503721F,  3.12652570816F,
     1.82459287029F, -1.22530550845F, -1.07199805029F, -5.50667779638F,
    -6.86016031045F, -7.01184359549F, -5.76467140531F, -2.17752426637F,
     7.91072249321F,  8.95968770314F,  5.66624482486F,  1.42999223745F,
    -0.87702331069F, -3.60442928188F, -1.69883942392F, -3.53048850980F,
    -2.46016394574F, -1.41605254748F, -0.81899415920F,  0.36124365498F,
     7.06793356555F,  4.93852157606F, -0.21236212656F, -4.35340235899F,
    -4.69212083000F, -4.31046898825F,  0.76619876655F,  1.16182171352F,
     2.94207658163F,  3.19944894883F,  2.04490972657F,  1.27939188179F,
     6.52252603576F,  3.74097338986F, -1.34640426685F, -5.11952950420F,
    -5.28273478645F, -5.26009295812F, -1.11570820727F, -1.95555543483F,
    -1.25833186777F, -1.47662759687F, -2.21247104677F, -1.63327768800F,
     5.66662380946F,  5.27627499206F,  2.48061886182F,  0.50052672046F,
     1.32377112825F,  1.33922077276F,  4.43785443244F,  1.63491606307F,
    -0.24352847755F, -3.17719891350F, -6.20107741613F, -6.95683765280F,
     0.28088100729F,  1.08215127990F,  0.33928309378F,  0.60576363507F,
     3.14266493476F,  3.81203442125F,  6.37822626551F,  2.18245248376F,
    -1.29930642143F, -5.33914629895F, -8.50348587993F, -8.40454610835F,
     0.26150663932F,  2.38078929629F,  2.21125397662F,  2.02113979829F,
     3.28597153429F,  2.50853625322F,  4.24579290041F,  0.42294560209F,
    -1.39632535983F, -2.97465349800F, -3.77716847010F, -2.36515175137F,
     5.96162729096F,  6.09370304507F,  2.91352935897F, -0.31457755186F,
    -1.15277669551F, -2.55818716487F, -0.05959007318F, -2.37409095963F,
    -2.82629422555F, -3.89921451726F, -5.27735894565F, -5.13677974442F,
     2.03945867661F,  2.01581980602F,  0.19588427886F, -0.25146893301F,
     2.40029553217F,  4.13414668716F,  8.43189323942F,  6.04787343285F,
     3.78470981703F, -0.13774026927F, -4.43933427087F, -6.47489861557F,
    -0.36722223673F, -0.54658019525F, -2.19670603363F, -2.79232678218F,
    -0.95619471390F, -0.55909399672F,  2.48013522733F, -0.30074301442F,
    -1.50713098664F, -2.83152804940F, -3.51779636649F, -1.90439496713F,
     6.79550323697F,  7.36363164642F,  4.42832470789F,  0.99380139979F,
    -0.60297166386F, -3.15009507212F, -1.74361476522F, -4.54226212385F,
    -4.41372435111F, -3.71416776818F, -2.46248554643F,  0.40585609006F,
     9.43611980907F,  9.53715712835F,  5.70364709930F,  1.34985066625F,
    -0.90348614785F, -3.76623084181F, -2.43596869908F, -5.25616817315F,
    -5.25386597175F, -4.85002481000F, -4.02487868161F, -1.60925449539F,
     7.06286066069F,  7.00564956873F,  3.29979777268F, -0.56515671948F,
    -1.90910652609F, -3.43389206091F, -0.43704351654F, -1.51344252983F,
    -0.08116909323F,  0.99894646776F,  1.41217345041F,  2.25950668090F,
     8.49621493281F,  5.74408910601F, -0.16943368122F, -5.13360232470F,
    -6.21947755623F, -6.37144529836F, -1.54598549527F, -1.15788826201F,
     0.73439154713F,  1.09279751251F, -0.01316443721F, -0.67988730877F,
     4.93115297793F,  3.00918156631F, -0.65148225698F, -2.61507629816F,
    -1.03470970413F,  0.08138820429F,  4.17459775772F,  1.96385919619F,
     0.24282065945F, -2.76753942515F, -5.81512480089F, -6.34868534685F,
     1.33823606698F,  2.59246917016F,  2.00785653313F,  1.94697514051F,
     3.72537743309F,  3.51843012777F,  5.53297936757F,  1.46362573453F,
    -1.15197864908F, -3.89800663142F, -5.93433859747F, -5.50802210829F,
     2.29679969592F,  2.43212443208F, -0.29911622288F, -2.78504698597F,
    -2.72700396124F, -3.14637478263F,  0.44637813232F, -0.61436809492F,
     0.34959522378F,  0.73702347694F,  0.60187372333F,  1.41208501291F,
     8.34468303036F,  6.97474422529F,  2.77279874740F, -0.73808511829F,
    -1.25482701263F, -2.14177816813F,  0.63015187608F, -1.89839394610F,
    -2.97537162516F, -4.73885852390F, -6.45122012809F, -6.02391293356F,
     2.00608420821F,  3.02552152523F,  1.89421983782F,  1.32128431748F,
     2.88406374852F,  2.82359062256F,  5.20607427302F,  1.47135263078F,
    -1.06243843536F, -4.02881570501F, -6.41310583172F, -6.12341631418F,
     2.10499702022F,  3.39670891034F,  2.41571998868F,  1.80727503208F,
     3.20129886435F,  2.93752052202F,  5.15158447271F,  1.28693018479F,
     1.00000000000F, -1.58911634842F,  1.00000000000F,  1.00000000000F,
    1.80768968822F,  -0.91729359227F,  1.00000000000F, -1.12938486120F,
     1.00000000000F,  1.00000000000F, 1.70313897897F,  -0.76411432132F,
     1.00000000000F,  1.00000000000F,  0.00000000000F,  1.00000000000F,
    0.82953774579F,  0.00000000000F,  0.15692115684F,  0.07003708026F,
     0.14488515596F, };

const float test_golden[512] = {
     0.01868640889F,  0.07030061348F,  0.16126293937F,  0.31326365486F,
     0.54508244160F,  0.86355774629F,  1.26858868302F,  1.74490682108F,
     2.26350985099F,  2.78703304458F,  3.26184811850F,  3.63015138285F,
     3.84517289067F,  3.86161941621F,  3.64540325596F,  3.19498249119F,
     2.53313868262F,  1.70213408472F,  0.76832467584F, -0.19064043147F,
    -1.09243808672F, -1.85528111526F, -2.41779536511F, -2.73905419878F,
    -2.79435411717F, -2.59338871949F, -2.17570563468F, -1.59035299248F,
    -0.90054653455F, -0.18059793948F,  0.50022511412F,  1.07877686911F,
     1.50601635349F,  1.75535311457F,  1.81363249167F,  1.68799324986F,
     1.41228802165F,  1.02631329433F,  0.57346818278F,  0.11091993326F,
    -0.30726151795F, -0.63982151463F, -0.85418045752F, -0.93535012593F,
    -0.88498263604F, -0.71646214828F, -0.46350301718F, -0.16916189981F,
     0.12788778735F,  0.38217201583F,  0.54978675841F,  0.60912234599F,
     0.55316559586F,  0.38651950946F,  0.13313696220F, -0.17246699568F,
    -0.48751792199F, -0.76226416273F, -0.95696194750F, -1.04051629344F,
    -0.98653861068F, -0.79333311221F, -0.48226401970F, -0.08078838558F,
     0.36968591789F,  0.81444998035F,  1.20033437848F,  1.47667593612F,
     1.60415773935F,  1.56454501155F,  1.35306314007F,  0.98616483198F,
     0.50805888247F, -0.03082666050F, -0.57764701117F, -1.06875115669F,
    -1.44816419180F, -1.67831995108F, -1.73603205680F, -1.62052840595F,
    -1.35075975555F, -0.95820916224F, -0.49308389341F, -0.01122220079F,
     0.44108747450F,  0.81650767907F,  1.07466473280F,  1.20163702874F,
     1.20031918786F,  1.08506257369F,  0.88691224396F,  0.64257429849F,
     0.39051246586F,  0.16908604557F,  0.00030358289F, -0.10662169869F,
    -0.14777570377F, -0.14000951163F, -0.11449639394F, -0.09554760871F,
    -0.10578349161F, -0.16511859191F, -0.27832333711F, -0.43917706381F,
    -0.62887022572F, -0.81456492113F, -0.96501391479F, -1.04911623939F,
    -1.03291874943F, -0.90125457182F, -0.65818193872F, -0.31231380040F,
     0.11290315962F,  0.57735959961F,  1.03670845770F,  1.44122745303F,
     1.74325600113F,  1.90669264741F,  1.90069593948F,  1.71049511443F,
     1.34846784087F,  0.83802362822F,  0.21512238070F, -0.45921950055F,
    -1.11547004357F, -1.68712544810F, -2.11026002259F, -2.33733595720F,
    -2.34145397560F, -2.11602641536F, -1.68657777628F, -1.10114163079F,
    -0.41604288578F,  0.29500709418F,  0.95246133505F,  1.49535243137F,
     1.87727498452F,  2.06670188601F,  2.05743214235F,  1.86188327259F,
     1.51027065997F,  1.05026742933F,  0.53044941752F,  0.00154427795F,
    -0.48035951214F, -0.87526984879F, -1.15996821525F, -1.31422666024F,
    -1.33263436047F, -1.22843903600F, -1.02326737358F, -0.75017284953F,
    -0.44757021527F, -0.15040102680F,  0.10362345647F,  0.28548314340F,
     0.38696724437F,  0.40577740129F,  0.34829042184F,  0.24327186728F,
     0.12654255696F,  0.03074878487F, -0.01264059636F,  0.01472484506F,
     0.11601735673F,  0.28195179486F,  0.48133940270F,  0.67266472280F,
     0.81950776459F,  0.88151505400F,  0.82460366493F,  0.64250325404F,
     0.34843475321F, -0.02998529091F, -0.44628647926F, -0.84773563901F,
    -1.18118314569F, -1.39685512803F, -1.46621408521F, -1.37953259626F,
    -1.13899064450F, -0.77421921998F, -0.33545504462F,  0.12850742962F,
     0.56647261286F,  0.92764815964F,  1.17628936411F,  1.29004661641F,
     1.26414671788F,  1.11521476656F,  0.86752310798F,  0.55550701010F,
     0.22684800114F, -0.08011688094F, -0.33871754382F, -0.52185041771F,
    -0.61518055234F, -0.62189786593F, -0.55293419944F, -0.43028205590F,
    -0.28123296774F, -0.13010408540F, -0.00539642332F,  0.07048547162F,
     0.09218566183F,  0.05575830491F, -0.03846612546F, -0.17093798568F,
    -0.31586636987F, -0.44832579938F, -0.53906508727F, -0.56408068768F,
    -0.50600312185F, -0.35296904757F, -0.11197885447F,  0.19702169685F,
     0.55028910069F,  0.90582160091F,  1.21041317827F,  1.42137240269F,
     1.50206406099F,  1.42390709141F,  1.17996073230F,  0.78181491604F,
     0.26178243830F, -0.32582725496F, -0.92143546096F, -1.46080109364F,
    -1.87483067217F, -2.11445072602F, -2.15429468862F, -1.98087613367F,
    -1.60494572657F, -1.06437749138F, -0.41166431714F,  0.28612300617F,
     0.95686022816F,  1.53554613908F,  1.96087734456F,  2.18872149532F,
     2.20530966537F,  2.01248876985F,  1.62984254313F,  1.10718120632F,
     0.50762656755F, -0.10437507529F, -0.66289152489F, -1.11435345114F,
    -1.42164667113F, -1.56359649802F, -1.54676275556F, -1.39619826382F,
    -1.14205841136F, -0.82998537998F, -0.51122279029F, -0.22011833950F,
     0.01981179147F,  0.19413083693F,  0.30594728916F,  0.36745653523F,
     0.39781468375F,  0.42222337468F,  0.45584297499F,  0.50680869419F,
     0.58260138899F,  0.67299998374F,  0.75464087652F,  0.81021021067F,
     0.82141838345F,  0.76859207402F,  0.64243135427F,  0.44018039733F,
     0.16868794716F, -0.15162606617F, -0.49912587206F, -0.84608090474F,
    -1.15277742489F, -1.38752854878F, -1.52728975575F, -1.54518795114F,
    -1.42483091195F, -1.16741120333F, -0.78493374804F, -0.30641954349F,
     0.22590828198F,  0.76452338391F,  1.25093534232F,  1.62921688393F,
     1.86142326142F,  1.91681530029F,  1.77903949611F,  1.46398966826F,
     1.00779127507F,  0.45855057951F, -0.12141476385F, -0.66927558329F,
    -1.12752816355F, -1.44682315394F, -1.60219695476F, -1.58871739784F,
    -1.41275013585F, -1.10613416067F, -0.71870107135F, -0.29643572398F,
     0.11371447576F,  0.46520358451F,  0.72503832359F,  0.87103382927F,
     0.89566106483F,  0.81043503462F,  0.63349816988F,  0.39385297957F,
     0.13600973006F, -0.10171838640F, -0.28968076341F, -0.39601674865F,
    -0.40189767048F, -0.30859906952F, -0.12965455613F,  0.10486191608F,
     0.35447718857F,  0.57835954283F,  0.73102082482F,  0.77598676201F,
     0.69996688539F,  0.49957618796F,  0.18517747501F, -0.20484804697F,
    -0.61935241954F, -1.00505231817F, -1.30551892838F, -1.47485145451F,
    -1.48233345868F, -1.31312405665F, -0.98162076216F, -0.52371607337F,
     0.01565048647F,  0.57213576937F,  1.07309768537F,  1.46245415427F,
     1.69779166661F,  1.75204625605F,  1.62500629576F,  1.33687302023F,
     0.92667673550F,  0.45022433306F, -0.03871391566F, -0.48933730940F,
    -0.85204059688F, -1.10002520032F, -1.22860519652F, -1.23865131709F,
    -1.14472232146F, -0.97502796227F, -0.75792880634F, -0.52318124442F,
    -0.29599378751F, -0.09036648671F,  0.08074597083F,  0.21193350401F,
     0.31242686379F,  0.38718160772F,  0.43753879261F,  0.47530228632F,
     0.51026817108F,  0.54483747579F,  0.58185702227F,  0.61829850812F,
     0.64740598462F,  0.66333915188F,  0.65101569617F,  0.59458990398F,
     0.48815509978F,  0.32145128592F,  0.08537750011F, -0.20969955664F,
    -0.54357233272F, -0.89067905291F, -1.21355703698F, -1.47256485979F,
    -1.62884092275F, -1.64582698513F, -1.50586611989F, -1.20760838248F,
    -0.75985320748F, -0.19838086717F,  0.41951656535F,  1.03605542334F,
     1.58877573954F,  2.01387668531F,  2.26227270127F,  2.30006436612F,
     2.11523183768F,  1.72392529832F,  1.15866037188F,  0.47180902996F,
    -0.26165426733F, -0.96855704820F, -1.58308126058F, -2.03900870173F,
    -2.28786537185F, -2.30853559334F, -2.10150056731F, -1.69463297272F,
    -1.13782367770F, -0.49275202015F,  0.16414245597F,  0.75783996018F,
     1.23243160478F,  1.54196025416F,  1.65838627008F,  1.58934842346F,
     1.36525804115F,  1.02962532621F,  0.63972383631F,  0.25163338242F,
    -0.08613360652F, -0.33501656309F, -0.48118748513F, -0.52897783307F,
    -0.48961747846F, -0.39315122600F, -0.27952528270F, -0.17654770009F,
    -0.10589339579F, -0.08422165369F, -0.11344059431F, -0.18728659567F,
    -0.29115345433F, -0.40067700658F, -0.49598571049F, -0.55789001132F,
    -0.56216249370F, -0.49879420611F, -0.37094373902F, -0.17994798304F,
     0.06358217791F,  0.33627364366F,  0.61234113289F,  0.86037705346F,
     1.04901272029F,  1.15505766050F,  1.15622786233F,  1.04126053376F,
     0.82048183550F,  0.50936693814F,  0.13003661207F, -0.27576592680F,
    -0.66206744842F, -0.98829988428F, -1.21627465776F, -1.32103765954F,
    -1.29222399913F, -1.13138514855F, -0.86241714669F, -0.52180887279F,
    -0.14551695076F,  0.21981503437F,  0.52562353296F,  0.74282707280F,
     0.85494870443F,  0.85598251746F,  0.75890772648F,  0.58754690748F,
     0.37474089527F,  0.16139095402F, -0.02028309013F, -0.14510288935F,
    -0.19054245965F, -0.15602191086F, -0.06036255906F,  0.07614578876F,
     0.22461581901F,  0.34836087253F,  0.41701425043F,  0.40578446899F,
     0.30171643783F,  0.11035185714F, -0.15492348651F, -0.46752509993F,
    -0.78248644539F, -1.05807184220F, -1.25847591635F, -1.34348904620F,
    -1.28465707341F, -1.07375543113F, -0.71685727165F, -0.24089982658F,
     0.31015301722F,  0.88354083651F,  1.41264702565F,  1.83139588376F,
     2.09081647396F,  2.14965893309F,  1.98312594990F,  1.60227407676F,
     1.04328780174F,  0.35999817385F, -0.37388406908F, -1.07938975619F,
    -1.67997930138F, -2.10696629799F, -2.31870713556F, -2.29904221425F,
    -2.05062180640F, -1.60991928723F, -1.03910708908F, -0.40216095001F,
     0.23338195449F,  0.80114067531F,  1.25190014057F,  1.55254724133F,
};

#define TEST_SIZE       (512U)
#define NUM_SOS         (3U)    // Number of Second Order Stages (biquad)
#define FILTER_ORDER    (NUM_SOS<<1)

uint16_t pass = 0U, fail = 0U;
float32u_t gold, err;
float32_t in, out;
float tolerance = 2.0e-5;
float coeffs_B[NUM_SOS*3U];
float coeffs_A[NUM_SOS*3U];
float scaleFactors[NUM_SOS];
float delayLine[NUM_SOS*4U];
float test_output[TEST_SIZE];
float test_error[TEST_SIZE];

float32_t *denCoeffs = coeffs_A;
float32_t *numCoeffs = coeffs_B;
float32_t *delayBuff = delayLine;
float32_t *inBuff = &in;
float32_t *outBuff = &out;
float32_t *biquadPtr = scaleFactors;

//
// Main
//
void main(void)
{
    Device_init();
    Device_initGPIO();
    Interrupt_initModule();
    Interrupt_initVectorTable();
	Board_init();
    C2000Ware_libraries_init();

    uint16_t i;
    float *p_cb, *p_ca;

    p_cb = &test_input[TEST_SIZE];
    p_ca = p_cb + 3UL;

    for(i = 0U; i < NUM_SOS; i++)
    {
        memcpy(&coeffs_B[3U*i], p_cb, 3U*sizeof(float));
        memcpy(&coeffs_A[3U*i], p_ca, 3U*sizeof(float));
        p_cb += 6UL;
        p_ca += 6UL;
    }
    memcpy(scaleFactors, &test_input[TEST_SIZE+(6U*NUM_SOS)],
            NUM_SOS*sizeof(float));

    myIIR0_handle->init(myIIR0_handle);

    for(i = 0U; i < TEST_SIZE; i++)
    {
        out  = FLT_MAX;
        in   = test_input[i];

        // Call the calculation routine
        myIIR0_handle->calc(myIIR0_handle);

        test_output[i] = out;
        gold.f32 = test_golden[i];
        err.f32 = fabsf(out - gold.f32);

        if(err.f32 < tolerance)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
    while(1);
}

//
// End of File
//