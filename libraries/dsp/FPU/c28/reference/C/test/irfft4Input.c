//#############################################################################
//! \file irfft4Input.c
//! \brief  Input Vector (1024) 
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


float test_input[2048] = {
	 4.07184464483F,  0.00000000000F,  4.07310936721F, -0.08992233135F, 
	 4.07690807566F, -0.18000328269F,  4.08325444120F, -0.27040257225F, 
	 4.09217140649F, -0.36128213184F,  4.10369142592F, -0.45280725677F, 
	 4.11785680855F, -0.54514780883F,  4.13472017130F, -0.63847949241F, 
	 4.15434501229F, -0.73298522561F,  4.17680641681F, -0.82885663131F, 
	 4.20219191189F, -0.92629567655F,  4.23060248961F, -1.02551649299F, 
	 4.26215382342F, -1.12674741730F,  4.29697770825F, -1.23023329714F, 
	 4.33522376136F, -1.33623811787F,  4.37706143036F, -1.44504801618F, 
	 4.42268236507F, -1.55697476161F,  4.47230322380F, -1.67235980500F, 
	 4.52616900172F, -1.79157901626F,  4.58455699112F, -1.91504826403F, 
	 4.64778151140F, -2.04323002787F,  4.71619958354F, -2.17664128430F, 
	 4.79021777133F, -2.31586297304F,  4.87030047514F, -2.46155143672F, 
	 4.95698004733F, -2.61445234225F,  5.05086921163F, -2.77541774684F, 
	 5.15267642112F, -2.94542718144F,  5.26322499917F, -3.12561391264F, 
	 5.38347719825F, -3.31729794353F,  5.51456472002F, -3.52202787561F, 
	 5.65782782150F, -3.74163455424F,  5.81486597303F, -3.97830057608F, 
	 5.98760426752F, -4.23465143564F,  6.17838162568F, -4.51387662593F, 
	 6.39006965064F, -4.81989287414F,  6.62623535524F, -5.15756770660F, 
	 6.89136794168F, -5.53303111082F,  7.19120117779F, -5.95411870326F, 
	 7.53318202663F, -6.43101611593F,  7.92716939683F, -6.97722002381F, 
	 8.38650677736F, -7.61101367277F,  8.92972526417F, -8.35780994406F, 
	 9.58335652036F, -9.25402196803F, 10.38680303523F, -10.35376520036F, 
	11.40126564544F, -11.74114364598F, 12.72730883668F, -13.55442473968F, 
	14.54269123269F, -16.03810659539F, 17.19423602443F, -19.66936453367F, 
	21.46195281791F, -25.52158096952F, 29.54348201895F, -36.61931376496F, 
	50.96073967626F, -66.06809175928F, 285.66575264916F, -389.07797153023F, 
	-66.14722313468F, 95.18955008905F, -26.93661997110F, 41.26431497798F, 
	-15.64791872913F, 25.77574312489F, -10.23058010282F, 18.37436633360F, 
	-7.00879414645F, 14.00143319580F, -4.84109140265F, 11.08649702350F, 
	-3.25674826531F,  8.98241353106F, -2.02570521124F,  7.37340334080F, 
	-1.02169834406F,  6.08669263364F, -0.16915993792F,  5.01945793222F, 
	 0.58041432637F,  4.10633612215F,  1.26012109290F,  3.30342973815F, 
	 1.89388989491F,  2.57977929822F,  2.50007077200F,  1.91250558791F, 
	 3.09364398599F,  1.28387370644F,  3.68768954545F,  0.67941087825F, 
	 4.29446236400F,  0.08661630443F,  4.92628068957F, -0.50600143826F, 
	 5.59637296650F, -1.10972677169F,  6.31980961222F, -1.73640263999F, 
	 7.11466122799F, -2.39927266557F,  8.00357785823F, -3.11403350641F, 
	 9.01609567682F, -3.90028960659F, 10.19219701399F, -4.78372634152F, 
	11.58808763440F, -5.79956967957F, 13.28607063579F, -6.99843026585F, 
	15.41243804934F, -8.45681222298F, 18.17224551975F, -10.29742857706F, 
	21.92312243797F, -12.73214909681F, 27.35114835437F, -16.16403011475F, 
	35.96306285202F, -21.47223358889F, 51.84361037836F, -31.02780477518F, 
	91.31930387008F, -54.27499059568F, 366.55796738812F, -213.73586037804F, 
	-183.21581061937F, 102.98662202444F, -72.87075060732F, 38.38221238146F, 
	-44.91631056639F, 21.01537317641F, -31.76116451537F, 11.61802618256F, 
	-23.56363707736F,  3.94805727849F, -16.91058920739F, -5.59618642713F, 
	-7.97633347077F, -26.83467157132F, 124.87740208196F, -472.49438932947F, 
	-29.78193767475F, 59.46185060618F, -20.84624507354F, 33.18554728903F, 
	-17.30965390592F, 24.52081487584F, -15.16914585729F, 20.03375364732F, 
	-13.64825481382F, 17.21624791577F, -12.47758221261F, 15.24723950099F, 
	-11.53323652737F, 13.77494976264F, -10.74775563721F, 12.62189106890F, 
	-10.08009105960F, 11.68800727061F, -9.50326238361F, 10.91217158858F, 
	-8.99851530743F, 10.25469511101F, -8.55225390649F,  9.68855007176F, 
	-8.15429558668F,  9.19461278299F, -7.79681396661F,  8.75892111666F, 
	-7.47366535926F,  8.37101146357F, -7.17994164856F,  8.02286689309F, 
	-6.91166320095F,  7.70822774710F, -6.66556186386F,  7.42212577459F, 
	-6.43892387583F,  7.16056089108F, -6.22947376744F,  6.92027165750F, 
	-6.03528700220F,  6.69856895599F, -5.85472320188F,  6.49321326639F, 
	-5.68637439258F,  6.30232264225F, -5.52902439425F,  6.12430270061F, 
	-5.38161659954F,  5.95779265848F, -5.24322815216F,  5.80162324171F, 
	-5.11304906527F,  5.65478349747F, -4.99036519443F,  5.51639436666F, 
	-4.87454424794F,  5.38568744735F, -4.76502421198F,  5.26198778594F, 
	-4.66130371183F,  5.14469982383F, -4.56293393684F,  5.03329583816F, 
	-4.46951183777F,  4.92730637029F, -4.38067436597F,  4.82631225061F, 
	-4.29609357091F,  4.72993791475F, -4.21547240910F,  4.63784577124F, 
	-4.13854114561F,  4.54973143102F, -4.06505425189F,  4.46531964723F, 
	-3.99478772096F,  4.38436084392F, -3.92753673559F,  4.30662813539F, 
	-3.86311363583F,  4.23191475649F, -3.80134614182F,  4.16003183859F, 
	-3.74207579484F,  4.09080647785F, -3.68515658577F,  4.02408005131F, 
	-3.63045374507F,  3.95970674439F, -3.57784267225F,  3.89755225906F, 
	-3.52720798635F,  3.83749267721F, -3.47844268173F,  3.77941345757F, 
	-3.43144737556F,  3.72320854826F, -3.38612963568F,  3.66877959943F, 
	-3.34240337875F,  3.61603526298F, -3.30018833045F,  3.56489056827F, 
	-3.25940954006F,  3.51526636432F, -3.21999694336F,  3.46708882015F, 
	-3.18188496812F,  3.42028897650F, -3.14501217750F,  3.37480234253F, 
	-3.10932094705F,  3.33056853258F, -3.07475717178F,  3.28753093810F, 
	-3.04126999992F,  3.24563643106F, -3.00881159071F,  3.20483509507F, 
	-2.97733689356F,  3.16507998151F, -2.94680344657F,  3.12632688774F, 
	-2.91717119230F,  3.08853415516F, -2.88840230914F,  3.05166248506F, 
	-2.86046105681F,  3.01567477049F, -2.83331363448F,  2.98053594239F, 
	-2.80692805049F,  2.94621282875F, -2.78127400242F,  2.91267402538F, 
	-2.75632276668F,  2.87988977728F, -2.73204709663F,  2.84783186953F, 
	-2.70842112860F,  2.81647352685F, -2.68542029495F,  2.78578932101F, 
	-2.66302124372F,  2.75575508541F, -2.64120176413F,  2.72634783615F, 
	-2.61994071759F,  2.69754569898F, -2.59921797365F,  2.66932784179F, 
	-2.57901435046F,  2.64167441189F, -2.55931155951F,  2.61456647792F, 
	-2.54009215414F,  2.58798597588F, -2.52133948157F,  2.56191565893F, 
	-2.50303763825F,  2.53633905072F, -2.48517142818F,  2.51124040190F, 
	-2.46772632391F,  2.48660464957F, -2.45068843026F,  2.46241737952F, 
	-2.43404445022F,  2.43866479086F, -2.41778165316F,  2.41533366306F, 
	-2.40188784498F,  2.39241132508F, -2.38635134018F,  2.36988562648F, 
	-2.37116093563F,  2.34774491036F, -2.35630588599F,  2.32597798803F, 
	-2.34177588056F,  2.30457411514F, -2.32756102158F,  2.28352296941F, 
	-2.31365180381F,  2.26281462961F, -2.30003909530F,  2.24243955583F, 
	-2.28671411928F,  2.22238857094F, -2.27366843708F,  2.20265284307F, 
	-2.26089393211F,  2.18322386920F, -2.24838279465F,  2.16409345964F, 
	-2.23612750750F,  2.14525372335F, -2.22412083252F,  2.12669705421F, 
	-2.21235579782F,  2.10841611791F, -2.20082568566F,  2.09040383965F, 
	-2.18952402106F,  2.07265339255F, -2.17844456094F,  2.05515818653F, 
	-2.16758128391F,  2.03791185798F, -2.15692838054F,  2.02090825984F, 
	-2.14648024420F,  2.00414145225F, -2.13623146229F,  1.98760569370F, 
	-2.12617680797F,  1.97129543260F, -2.11631123235F,  1.95520529933F, 
	-2.10662985697F,  1.93933009865F, -2.09712796675F,  1.92366480248F, 
	-2.08780100322F,  1.90820454314F, -2.07864455817F,  1.89294460677F, 
	-2.06965436747F,  1.87788042718F, -2.06082630536F,  1.86300758001F, 
	-2.05215637884F,  1.84832177707F, -2.04364072250F,  1.83381886103F, 
	-2.03527559342F,  1.81949480037F, -2.02705736645F,  1.80534568451F, 
	-2.01898252964F,  1.79136771918F, -2.01104767987F,  1.77755722207F, 
	-2.00324951875F,  1.76391061857F, -1.99558484861F,  1.75042443780F, 
	-1.98805056873F,  1.73709530875F, -1.98064367177F,  1.72391995665F, 
	-1.97336124024F,  1.71089519943F, -1.96620044327F,  1.69801794444F, 
	-1.95915853343F,  1.68528518518F, -1.95223284368F,  1.67269399829F, 
	-1.94542078453F,  1.66024154060F, -1.93871984123F,  1.64792504633F, 
	-1.93212757114F,  1.63574182439F, -1.92564160121F,  1.62368925585F, 
	-1.91925962552F,  1.61176479144F, -1.91297940294F,  1.59996594916F, 
	-1.90679875496F,  1.58829031208F, -1.90071556347F,  1.57673552613F, 
	-1.89472776874F,  1.56529929798F, -1.88883336746F,  1.55397939310F, 
	-1.88303041083F,  1.54277363381F, -1.87731700272F,  1.53167989740F, 
	-1.87169129799F,  1.52069611443F, -1.86615150074F,  1.50982026693F, 
	-1.86069586275F,  1.49905038685F, -1.85532268190F,  1.48838455443F, 
	-1.85003030070F,  1.47782089670F, -1.84481710485F,  1.46735758603F, 
	-1.83968152186F,  1.45699283869F, -1.83462201973F,  1.44672491356F, 
	-1.82963710569F,  1.43655211077F, -1.82472532494F,  1.42647277050F, 
	-1.81988525948F,  1.41648527172F, -1.81511552700F,  1.40658803106F, 
	-1.81041477973F,  1.39677950170F, -1.80578170344F,  1.38705817225F, 
	-1.80121501638F,  1.37742256576F, -1.79671346833F,  1.36787123865F, 
	-1.79227583962F,  1.35840277981F, -1.78790094024F,  1.34901580962F, 
	-1.78358760898F,  1.33970897906F, -1.77933471251F,  1.33048096885F, 
	-1.77514114466F,  1.32133048858F, -1.77100582554F,  1.31225627594F, 
	-1.76692770083F,  1.30325709587F, -1.76290574102F,  1.29433173990F, 
	-1.75893894071F,  1.28547902531F, -1.75502631792F,  1.27669779449F, 
	-1.75116691341F,  1.26798691425F, -1.74735979005F,  1.25934527513F, 
	-1.74360403223F,  1.25077179076F, -1.73989874519F,  1.24226539729F, 
	-1.73624305451F,  1.23382505272F, -1.73263610551F,  1.22544973638F, 
	-1.72907706271F,  1.21713844833F, -1.72556510933F,  1.20889020883F, 
	-1.72209944675F,  1.20070405782F, -1.71867929403F,  1.19257905440F, 
	-1.71530388747F,  1.18451427633F, -1.71197248007F,  1.17650881957F, 
	-1.70868434117F,  1.16856179780F, -1.70543875596F,  1.16067234199F, 
	-1.70223502510F,  1.15283959994F, -1.69907246428F,  1.14506273588F, 
	-1.69595040385F,  1.13734093003F, -1.69286818843F,  1.12967337823F, 
	-1.68982517656F,  1.12205929157F, -1.68682074032F,  1.11449789596F, 
	-1.68385426499F,  1.10698843182F, -1.68092514871F,  1.09953015370F, 
	-1.67803280218F,  1.09212232995F, -1.67517664831F,  1.08476424237F, 
	-1.67235612193F,  1.07745518594F, -1.66957066949F,  1.07019446842F, 
	-1.66681974878F,  1.06298141014F, -1.66410282863F,  1.05581534362F, 
	-1.66141938867F,  1.04869561336F, -1.65876891902F,  1.04162157549F, 
	-1.65615092009F,  1.03459259756F, -1.65356490227F,  1.02760805825F, 
	-1.65101038574F,  1.02066734709F, -1.64848690021F,  1.01376986426F, 
	-1.64599398471F,  1.00691502030F, -1.64353118734F,  1.00010223593F, 
	-1.64109806506F,  0.99333094176F, -1.63869418353F,  0.98660057811F, 
	-1.63631911682F,  0.97991059478F, -1.63397244730F,  0.97326045082F, 
	-1.63165376539F,  0.96664961437F, -1.62936266940F,  0.96007756242F, 
	-1.62709876532F,  0.95354378062F, -1.62486166668F,  0.94704776312F, 
	-1.62265099437F,  0.94058901234F, -1.62046637644F,  0.93416703884F, 
	-1.61830744798F,  0.92778136110F, -1.61617385094F,  0.92143150539F, 
	-1.61406523396F,  0.91511700556F, -1.61198125226F,  0.90883740291F, 
	-1.60992156748F,  0.90259224605F, -1.60788584751F,  0.89638109068F, 
	-1.60587376637F,  0.89020349950F, -1.60388500410F,  0.88405904205F, 
	-1.60191924660F,  0.87794729455F, -1.59997618549F,  0.87186783978F, 
	-1.59805551803F,  0.86582026695F, -1.59615694696F,  0.85980417153F, 
	-1.59428018040F,  0.85381915516F, -1.59242493173F,  0.84786482552F, 
	-1.59059091948F,  0.84194079618F, -1.58877786721F,  0.83604668652F, 
	-1.58698550341F,  0.83018212158F, -1.58521356143F,  0.82434673195F, 
	-1.58346177931F,  0.81854015369F, -1.58172989973F,  0.81276202818F, 
	-1.58001766992F,  0.80701200203F, -1.57832484154F,  0.80128972700F, 
	-1.57665117057F,  0.79559485986F, -1.57499641730F,  0.78992706232F, 
	-1.57336034614F,  0.78428600090F, -1.57174272563F,  0.77867134689F, 
	-1.57014332828F,  0.77308277621F, -1.56856193055F,  0.76751996933F, 
	-1.56699831271F,  0.76198261120F, -1.56545225884F,  0.75647039115F, 
	-1.56392355669F,  0.75098300280F, -1.56241199761F,  0.74552014400F, 
	-1.56091737654F,  0.74008151674F, -1.55943949185F,  0.73466682703F, 
	-1.55797814537F,  0.72927578492F, -1.55653314223F,  0.72390810431F, 
	-1.55510429086F,  0.71856350298F, -1.55369140290F,  0.71324170244F, 
	-1.55229429315F,  0.70794242790F, -1.55091277947F,  0.70266540819F, 
	-1.54954668280F,  0.69741037570F, -1.54819582703F,  0.69217706632F, 
	-1.54686003896F,  0.68696521934F, -1.54553914828F,  0.68177457743F, 
	-1.54423298746F,  0.67660488655F, -1.54294139175F,  0.67145589592F, 
	-1.54166419909F,  0.66632735793F, -1.54040125009F,  0.66121902807F, 
	-1.53915238796F,  0.65613066494F, -1.53791745847F,  0.65106203013F, 
	-1.53669630989F,  0.64601288819F, -1.53548879298F,  0.64098300656F, 
	-1.53429476089F,  0.63597215556F, -1.53311406918F,  0.63098010829F, 
	-1.53194657572F,  0.62600664062F, -1.53079214069F,  0.62105153110F, 
	-1.52965062650F,  0.61611456096F, -1.52852189778F,  0.61119551401F, 
	-1.52740582135F,  0.60629417665F, -1.52630226613F,  0.60141033778F, 
	-1.52521110318F,  0.59654378878F, -1.52413220557F,  0.59169432344F, 
	-1.52306544844F,  0.58686173797F, -1.52201070888F,  0.58204583091F, 
	-1.52096786596F,  0.57724640308F, -1.51993680067F,  0.57246325761F, 
	-1.51891739586F,  0.56769619981F, -1.51790953628F,  0.56294503722F, 
	-1.51691310846F,  0.55820957949F, -1.51592800075F,  0.55348963840F, 
	-1.51495410326F,  0.54878502781F, -1.51399130783F,  0.54409556361F, 
	-1.51303950801F,  0.53942106370F, -1.51209859900F,  0.53476134794F, 
	-1.51116847770F,  0.53011623814F, -1.51024904259F,  0.52548555800F, 
	-1.50934019375F,  0.52086913311F, -1.50844183284F,  0.51626679089F, 
	-1.50755386308F,  0.51167836055F, -1.50667618916F,  0.50710367311F, 
	-1.50580871732F,  0.50254256131F, -1.50495135524F,  0.49799485962F, 
	-1.50410401204F,  0.49346040420F, -1.50326659830F,  0.48893903286F, 
	-1.50243902596F,  0.48443058504F, -1.50162120836F,  0.47993490180F, 
	-1.50081306021F,  0.47545182577F, -1.50001449754F,  0.47098120112F, 
	-1.49922543771F,  0.46652287355F, -1.49844579936F,  0.46207669028F, 
	-1.49767550243F,  0.45764249996F, -1.49691446809F,  0.45322015272F, 
	-1.49616261877F,  0.44880950010F, -1.49541987812F,  0.44441039506F, 
	-1.49468617097F,  0.44002269192F, -1.49396142336F,  0.43564624634F, 
	-1.49324556249F,  0.43128091534F, -1.49253851670F,  0.42692655723F, 
	-1.49184021546F,  0.42258303161F, -1.49115058938F,  0.41825019934F, 
	-1.49046957014F,  0.41392792252F, -1.48979709053F,  0.40961606449F, 
	-1.48913308439F,  0.40531448978F, -1.48847748663F,  0.40102306409F, 
	-1.48783023318F,  0.39674165429F, -1.48719126101F,  0.39247012841F, 
	-1.48656050809F,  0.38820835556F, -1.48593791339F,  0.38395620599F, 
	-1.48532341687F,  0.37971355101F, -1.48471695945F,  0.37548026302F, 
	-1.48411848301F,  0.37125621544F, -1.48352793037F,  0.36704128273F, 
	-1.48294524527F,  0.36283534038F, -1.48237037240F,  0.35863826483F, 
	-1.48180325732F,  0.35444993355F, -1.48124384651F,  0.35027022494F, 
	-1.48069208732F,  0.34609901833F, -1.48014792797F,  0.34193619401F, 
	-1.47961131755F,  0.33778163316F, -1.47908220599F,  0.33363521787F, 
	-1.47856054406F,  0.32949683109F, -1.47804628335F,  0.32536635664F, 
	-1.47753937630F,  0.32124367920F, -1.47703977612F,  0.31712868428F, 
	-1.47654743683F,  0.31302125819F, -1.47606231325F,  0.30892128808F, 
	-1.47558436097F,  0.30482866184F, -1.47511353634F,  0.30074326819F, 
	-1.47464979648F,  0.29666499657F, -1.47419309927F,  0.29259373719F, 
	-1.47374340331F,  0.28852938097F, -1.47330066796F,  0.28447181959F, 
	-1.47286485329F,  0.28042094539F, -1.47243592009F,  0.27637665144F, 
	-1.47201382987F,  0.27233883148F, -1.47159854482F,  0.26830737991F, 
	-1.47119002785F,  0.26428219178F, -1.47078824253F,  0.26026316282F, 
	-1.47039315315F,  0.25625018934F, -1.47000472463F,  0.25224316830F, 
	-1.46962292257F,  0.24824199727F, -1.46924771324F,  0.24424657438F, 
	-1.46887906355F,  0.24025679838F, -1.46851694107F,  0.23627256858F, 
	-1.46816131398F,  0.23229378483F, -1.46781215111F,  0.22832034755F, 
	-1.46746942194F,  0.22435215769F, -1.46713309652F,  0.22038911673F, 
	-1.46680314556F,  0.21643112665F, -1.46647954036F,  0.21247808994F, 
	-1.46616225281F,  0.20852990960F, -1.46585125543F,  0.20458648908F, 
	-1.46554652131F,  0.20064773234F, -1.46524802414F,  0.19671354376F, 
	-1.46495573817F,  0.19278382819F, -1.46466963825F,  0.18885849094F, 
	-1.46438969980F,  0.18493743772F, -1.46411589881F,  0.18102057467F, 
	-1.46384821180F,  0.17710780834F, -1.46358661591F,  0.17319904569F, 
	-1.46333108878F,  0.16929419405F, -1.46308160862F,  0.16539316116F, 
	-1.46283815420F,  0.16149585510F, -1.46260070480F,  0.15760218433F, 
	-1.46236924028F,  0.15371205766F, -1.46214374100F,  0.14982538424F, 
	-1.46192418787F,  0.14594207356F, -1.46171056232F,  0.14206203542F, 
	-1.46150284629F,  0.13818517995F, -1.46130102227F,  0.13431141758F, 
	-1.46110507324F,  0.13044065903F, -1.46091498272F,  0.12657281533F, 
	-1.46073073472F,  0.12270779776F, -1.46055231376F,  0.11884551790F, 
	-1.46037970488F,  0.11498588756F, -1.46021289360F,  0.11112881882F, 
	-1.46005186596F,  0.10727422401F, -1.45989660849F,  0.10342201569F, 
	-1.45974710821F,  0.09957210664F, -1.45960335263F,  0.09572440987F, 
	-1.45946532977F,  0.09187883859F, -1.45933302812F,  0.08803530622F, 
	-1.45920643665F,  0.08419372635F, -1.45908554482F,  0.08035401280F, 
	-1.45897034259F,  0.07651607952F, -1.45886082038F,  0.07267984065F, 
	-1.45875696908F,  0.06884521050F, -1.45865878008F,  0.06501210351F, 
	-1.45856624523F,  0.06118043427F, -1.45847935686F,  0.05735011751F, 
	-1.45839810777F,  0.05352106810F, -1.45832249122F,  0.04969320099F, 
	-1.45825250096F,  0.04586643129F, -1.45818813119F,  0.04204067417F, 
	-1.45812937659F,  0.03821584492F, -1.45807623229F,  0.03439185892F, 
	-1.45802869391F,  0.03056863161F, -1.45798675752F,  0.02674607852F, 
	-1.45795041965F,  0.02292411522F, -1.45791967730F,  0.01910265737F, 
	-1.45789452792F,  0.01528162065F, -1.45787496945F,  0.01146092078F, 
	-1.45786100027F,  0.00764047352F, -1.45785261922F,  0.00382019466F, 
	-1.45784982561F,  0.00000000000F, -1.45785261922F, -0.00382019466F, 
	-1.45786100027F, -0.00764047352F, -1.45787496945F, -0.01146092078F, 
	-1.45789452792F, -0.01528162065F, -1.45791967730F, -0.01910265737F, 
	-1.45795041965F, -0.02292411522F, -1.45798675752F, -0.02674607852F, 
	-1.45802869391F, -0.03056863161F, -1.45807623229F, -0.03439185892F, 
	-1.45812937659F, -0.03821584492F, -1.45818813119F, -0.04204067417F, 
	-1.45825250096F, -0.04586643129F, -1.45832249122F, -0.04969320099F, 
	-1.45839810777F, -0.05352106810F, -1.45847935686F, -0.05735011751F, 
	-1.45856624523F, -0.06118043427F, -1.45865878008F, -0.06501210351F, 
	-1.45875696908F, -0.06884521050F, -1.45886082038F, -0.07267984065F, 
	-1.45897034259F, -0.07651607952F, -1.45908554482F, -0.08035401280F, 
	-1.45920643665F, -0.08419372635F, -1.45933302812F, -0.08803530622F, 
	-1.45946532977F, -0.09187883859F, -1.45960335263F, -0.09572440987F, 
	-1.45974710821F, -0.09957210664F, -1.45989660849F, -0.10342201569F, 
	-1.46005186596F, -0.10727422401F, -1.46021289360F, -0.11112881882F, 
	-1.46037970488F, -0.11498588756F, -1.46055231376F, -0.11884551790F, 
	-1.46073073472F, -0.12270779776F, -1.46091498272F, -0.12657281533F, 
	-1.46110507324F, -0.13044065903F, -1.46130102227F, -0.13431141758F, 
	-1.46150284629F, -0.13818517995F, -1.46171056232F, -0.14206203542F, 
	-1.46192418787F, -0.14594207356F, -1.46214374100F, -0.14982538424F, 
	-1.46236924028F, -0.15371205766F, -1.46260070480F, -0.15760218433F, 
	-1.46283815420F, -0.16149585510F, -1.46308160862F, -0.16539316116F, 
	-1.46333108878F, -0.16929419405F, -1.46358661591F, -0.17319904569F, 
	-1.46384821180F, -0.17710780834F, -1.46411589881F, -0.18102057467F, 
	-1.46438969980F, -0.18493743772F, -1.46466963825F, -0.18885849094F, 
	-1.46495573817F, -0.19278382819F, -1.46524802414F, -0.19671354376F, 
	-1.46554652131F, -0.20064773234F, -1.46585125543F, -0.20458648908F, 
	-1.46616225281F, -0.20852990960F, -1.46647954036F, -0.21247808994F, 
	-1.46680314556F, -0.21643112665F, -1.46713309652F, -0.22038911673F, 
	-1.46746942194F, -0.22435215769F, -1.46781215111F, -0.22832034755F, 
	-1.46816131398F, -0.23229378483F, -1.46851694107F, -0.23627256858F, 
	-1.46887906355F, -0.24025679838F, -1.46924771324F, -0.24424657438F, 
	-1.46962292257F, -0.24824199727F, -1.47000472463F, -0.25224316830F, 
	-1.47039315315F, -0.25625018934F, -1.47078824253F, -0.26026316282F, 
	-1.47119002785F, -0.26428219178F, -1.47159854482F, -0.26830737991F, 
	-1.47201382987F, -0.27233883148F, -1.47243592009F, -0.27637665144F, 
	-1.47286485329F, -0.28042094539F, -1.47330066796F, -0.28447181959F, 
	-1.47374340331F, -0.28852938097F, -1.47419309927F, -0.29259373719F, 
	-1.47464979648F, -0.29666499657F, -1.47511353634F, -0.30074326819F, 
	-1.47558436097F, -0.30482866184F, -1.47606231325F, -0.30892128808F, 
	-1.47654743683F, -0.31302125819F, -1.47703977612F, -0.31712868428F, 
	-1.47753937630F, -0.32124367920F, -1.47804628335F, -0.32536635664F, 
	-1.47856054406F, -0.32949683109F, -1.47908220599F, -0.33363521787F, 
	-1.47961131755F, -0.33778163316F, -1.48014792797F, -0.34193619401F, 
	-1.48069208732F, -0.34609901833F, -1.48124384651F, -0.35027022494F, 
	-1.48180325732F, -0.35444993355F, -1.48237037240F, -0.35863826483F, 
	-1.48294524527F, -0.36283534038F, -1.48352793037F, -0.36704128273F, 
	-1.48411848301F, -0.37125621544F, -1.48471695945F, -0.37548026302F, 
	-1.48532341687F, -0.37971355101F, -1.48593791339F, -0.38395620599F, 
	-1.48656050809F, -0.38820835556F, -1.48719126101F, -0.39247012841F, 
	-1.48783023318F, -0.39674165429F, -1.48847748663F, -0.40102306409F, 
	-1.48913308439F, -0.40531448978F, -1.48979709053F, -0.40961606449F, 
	-1.49046957014F, -0.41392792252F, -1.49115058938F, -0.41825019934F, 
	-1.49184021546F, -0.42258303161F, -1.49253851670F, -0.42692655723F, 
	-1.49324556249F, -0.43128091534F, -1.49396142336F, -0.43564624634F, 
	-1.49468617097F, -0.44002269192F, -1.49541987812F, -0.44441039506F, 
	-1.49616261877F, -0.44880950010F, -1.49691446809F, -0.45322015272F, 
	-1.49767550243F, -0.45764249996F, -1.49844579936F, -0.46207669028F, 
	-1.49922543771F, -0.46652287355F, -1.50001449754F, -0.47098120112F, 
	-1.50081306021F, -0.47545182577F, -1.50162120836F, -0.47993490180F, 
	-1.50243902596F, -0.48443058504F, -1.50326659830F, -0.48893903286F, 
	-1.50410401204F, -0.49346040420F, -1.50495135524F, -0.49799485962F, 
	-1.50580871732F, -0.50254256131F, -1.50667618916F, -0.50710367311F, 
	-1.50755386308F, -0.51167836055F, -1.50844183284F, -0.51626679089F, 
	-1.50934019375F, -0.52086913311F, -1.51024904259F, -0.52548555800F, 
	-1.51116847770F, -0.53011623814F, -1.51209859900F, -0.53476134794F, 
	-1.51303950801F, -0.53942106370F, -1.51399130783F, -0.54409556361F, 
	-1.51495410326F, -0.54878502781F, -1.51592800075F, -0.55348963840F, 
	-1.51691310846F, -0.55820957949F, -1.51790953628F, -0.56294503722F, 
	-1.51891739586F, -0.56769619981F, -1.51993680067F, -0.57246325761F, 
	-1.52096786596F, -0.57724640308F, -1.52201070888F, -0.58204583091F, 
	-1.52306544844F, -0.58686173797F, -1.52413220557F, -0.59169432344F, 
	-1.52521110318F, -0.59654378878F, -1.52630226613F, -0.60141033778F, 
	-1.52740582135F, -0.60629417665F, -1.52852189778F, -0.61119551401F, 
	-1.52965062650F, -0.61611456096F, -1.53079214069F, -0.62105153110F, 
	-1.53194657572F, -0.62600664062F, -1.53311406918F, -0.63098010829F, 
	-1.53429476089F, -0.63597215556F, -1.53548879298F, -0.64098300656F, 
	-1.53669630989F, -0.64601288819F, -1.53791745847F, -0.65106203013F, 
	-1.53915238796F, -0.65613066494F, -1.54040125009F, -0.66121902807F, 
	-1.54166419909F, -0.66632735793F, -1.54294139175F, -0.67145589592F, 
	-1.54423298746F, -0.67660488655F, -1.54553914828F, -0.68177457743F, 
	-1.54686003896F, -0.68696521934F, -1.54819582703F, -0.69217706632F, 
	-1.54954668280F, -0.69741037570F, -1.55091277947F, -0.70266540819F, 
	-1.55229429315F, -0.70794242790F, -1.55369140290F, -0.71324170244F, 
	-1.55510429086F, -0.71856350298F, -1.55653314223F, -0.72390810431F, 
	-1.55797814537F, -0.72927578492F, -1.55943949185F, -0.73466682703F, 
	-1.56091737654F, -0.74008151674F, -1.56241199761F, -0.74552014400F, 
	-1.56392355669F, -0.75098300280F, -1.56545225884F, -0.75647039115F, 
	-1.56699831271F, -0.76198261120F, -1.56856193055F, -0.76751996933F, 
	-1.57014332828F, -0.77308277621F, -1.57174272563F, -0.77867134689F, 
	-1.57336034614F, -0.78428600090F, -1.57499641730F, -0.78992706232F, 
	-1.57665117057F, -0.79559485986F, -1.57832484154F, -0.80128972700F, 
	-1.58001766992F, -0.80701200203F, -1.58172989973F, -0.81276202818F, 
	-1.58346177931F, -0.81854015369F, -1.58521356143F, -0.82434673195F, 
	-1.58698550341F, -0.83018212158F, -1.58877786721F, -0.83604668652F, 
	-1.59059091948F, -0.84194079618F, -1.59242493173F, -0.84786482552F, 
	-1.59428018040F, -0.85381915516F, -1.59615694696F, -0.85980417153F, 
	-1.59805551803F, -0.86582026695F, -1.59997618549F, -0.87186783978F, 
	-1.60191924660F, -0.87794729455F, -1.60388500410F, -0.88405904205F, 
	-1.60587376637F, -0.89020349950F, -1.60788584751F, -0.89638109068F, 
	-1.60992156748F, -0.90259224605F, -1.61198125226F, -0.90883740291F, 
	-1.61406523396F, -0.91511700556F, -1.61617385094F, -0.92143150539F, 
	-1.61830744798F, -0.92778136110F, -1.62046637644F, -0.93416703884F, 
	-1.62265099437F, -0.94058901234F, -1.62486166668F, -0.94704776312F, 
	-1.62709876532F, -0.95354378062F, -1.62936266940F, -0.96007756242F, 
	-1.63165376539F, -0.96664961437F, -1.63397244730F, -0.97326045082F, 
	-1.63631911682F, -0.97991059478F, -1.63869418353F, -0.98660057811F, 
	-1.64109806506F, -0.99333094176F, -1.64353118734F, -1.00010223593F, 
	-1.64599398471F, -1.00691502030F, -1.64848690021F, -1.01376986426F, 
	-1.65101038574F, -1.02066734709F, -1.65356490227F, -1.02760805825F, 
	-1.65615092009F, -1.03459259756F, -1.65876891902F, -1.04162157549F, 
	-1.66141938867F, -1.04869561336F, -1.66410282863F, -1.05581534362F, 
	-1.66681974878F, -1.06298141014F, -1.66957066949F, -1.07019446842F, 
	-1.67235612193F, -1.07745518594F, -1.67517664831F, -1.08476424237F, 
	-1.67803280218F, -1.09212232995F, -1.68092514871F, -1.09953015370F, 
	-1.68385426499F, -1.10698843182F, -1.68682074032F, -1.11449789596F, 
	-1.68982517656F, -1.12205929157F, -1.69286818843F, -1.12967337823F, 
	-1.69595040385F, -1.13734093003F, -1.69907246428F, -1.14506273588F, 
	-1.70223502510F, -1.15283959994F, -1.70543875596F, -1.16067234199F, 
	-1.70868434117F, -1.16856179780F, -1.71197248007F, -1.17650881957F, 
	-1.71530388747F, -1.18451427633F, -1.71867929403F, -1.19257905440F, 
	-1.72209944675F, -1.20070405782F, -1.72556510933F, -1.20889020883F, 
	-1.72907706271F, -1.21713844833F, -1.73263610551F, -1.22544973638F, 
	-1.73624305451F, -1.23382505272F, -1.73989874519F, -1.24226539729F, 
	-1.74360403223F, -1.25077179076F, -1.74735979005F, -1.25934527513F, 
	-1.75116691341F, -1.26798691425F, -1.75502631792F, -1.27669779449F, 
	-1.75893894071F, -1.28547902531F, -1.76290574102F, -1.29433173990F, 
	-1.76692770083F, -1.30325709587F, -1.77100582554F, -1.31225627594F, 
	-1.77514114466F, -1.32133048858F, -1.77933471251F, -1.33048096885F, 
	-1.78358760898F, -1.33970897906F, -1.78790094024F, -1.34901580962F, 
	-1.79227583962F, -1.35840277981F, -1.79671346833F, -1.36787123865F, 
	-1.80121501638F, -1.37742256576F, -1.80578170344F, -1.38705817225F, 
	-1.81041477973F, -1.39677950170F, -1.81511552700F, -1.40658803106F, 
	-1.81988525948F, -1.41648527172F, -1.82472532494F, -1.42647277050F, 
	-1.82963710569F, -1.43655211077F, -1.83462201973F, -1.44672491356F, 
	-1.83968152186F, -1.45699283869F, -1.84481710485F, -1.46735758603F, 
	-1.85003030070F, -1.47782089670F, -1.85532268190F, -1.48838455443F, 
	-1.86069586275F, -1.49905038685F, -1.86615150074F, -1.50982026693F, 
	-1.87169129799F, -1.52069611443F, -1.87731700272F, -1.53167989740F, 
	-1.88303041083F, -1.54277363381F, -1.88883336746F, -1.55397939310F, 
	-1.89472776874F, -1.56529929798F, -1.90071556347F, -1.57673552613F, 
	-1.90679875496F, -1.58829031208F, -1.91297940294F, -1.59996594916F, 
	-1.91925962552F, -1.61176479144F, -1.92564160121F, -1.62368925585F, 
	-1.93212757114F, -1.63574182439F, -1.93871984123F, -1.64792504633F, 
	-1.94542078453F, -1.66024154060F, -1.95223284368F, -1.67269399829F, 
	-1.95915853343F, -1.68528518518F, -1.96620044327F, -1.69801794444F, 
	-1.97336124024F, -1.71089519943F, -1.98064367177F, -1.72391995665F, 
	-1.98805056873F, -1.73709530875F, -1.99558484861F, -1.75042443780F, 
	-2.00324951875F, -1.76391061857F, -2.01104767987F, -1.77755722207F, 
	-2.01898252964F, -1.79136771918F, -2.02705736645F, -1.80534568451F, 
	-2.03527559342F, -1.81949480037F, -2.04364072250F, -1.83381886103F, 
	-2.05215637884F, -1.84832177707F, -2.06082630536F, -1.86300758001F, 
	-2.06965436747F, -1.87788042718F, -2.07864455817F, -1.89294460677F, 
	-2.08780100322F, -1.90820454314F, -2.09712796675F, -1.92366480248F, 
	-2.10662985697F, -1.93933009865F, -2.11631123235F, -1.95520529933F, 
	-2.12617680797F, -1.97129543260F, -2.13623146229F, -1.98760569370F, 
	-2.14648024420F, -2.00414145225F, -2.15692838054F, -2.02090825984F, 
	-2.16758128391F, -2.03791185798F, -2.17844456094F, -2.05515818653F, 
	-2.18952402106F, -2.07265339255F, -2.20082568566F, -2.09040383965F, 
	-2.21235579782F, -2.10841611791F, -2.22412083252F, -2.12669705421F, 
	-2.23612750750F, -2.14525372335F, -2.24838279465F, -2.16409345964F, 
	-2.26089393211F, -2.18322386920F, -2.27366843708F, -2.20265284307F, 
	-2.28671411928F, -2.22238857094F, -2.30003909530F, -2.24243955583F, 
	-2.31365180381F, -2.26281462961F, -2.32756102158F, -2.28352296941F, 
	-2.34177588056F, -2.30457411514F, -2.35630588599F, -2.32597798803F, 
	-2.37116093563F, -2.34774491036F, -2.38635134018F, -2.36988562648F, 
	-2.40188784498F, -2.39241132508F, -2.41778165316F, -2.41533366306F, 
	-2.43404445022F, -2.43866479086F, -2.45068843026F, -2.46241737952F, 
	-2.46772632391F, -2.48660464957F, -2.48517142818F, -2.51124040190F, 
	-2.50303763825F, -2.53633905072F, -2.52133948157F, -2.56191565893F, 
	-2.54009215414F, -2.58798597588F, -2.55931155951F, -2.61456647792F, 
	-2.57901435046F, -2.64167441189F, -2.59921797365F, -2.66932784179F, 
	-2.61994071759F, -2.69754569898F, -2.64120176413F, -2.72634783615F, 
	-2.66302124372F, -2.75575508541F, -2.68542029495F, -2.78578932101F, 
	-2.70842112860F, -2.81647352685F, -2.73204709663F, -2.84783186953F, 
	-2.75632276668F, -2.87988977728F, -2.78127400242F, -2.91267402538F, 
	-2.80692805049F, -2.94621282875F, -2.83331363448F, -2.98053594239F, 
	-2.86046105681F, -3.01567477049F, -2.88840230914F, -3.05166248506F, 
	-2.91717119230F, -3.08853415516F, -2.94680344657F, -3.12632688774F, 
	-2.97733689356F, -3.16507998151F, -3.00881159071F, -3.20483509507F, 
	-3.04126999992F, -3.24563643106F, -3.07475717178F, -3.28753093810F, 
	-3.10932094705F, -3.33056853258F, -3.14501217750F, -3.37480234253F, 
	-3.18188496812F, -3.42028897650F, -3.21999694336F, -3.46708882015F, 
	-3.25940954006F, -3.51526636432F, -3.30018833045F, -3.56489056827F, 
	-3.34240337875F, -3.61603526298F, -3.38612963568F, -3.66877959943F, 
	-3.43144737556F, -3.72320854826F, -3.47844268173F, -3.77941345757F, 
	-3.52720798635F, -3.83749267721F, -3.57784267225F, -3.89755225906F, 
	-3.63045374507F, -3.95970674439F, -3.68515658577F, -4.02408005131F, 
	-3.74207579484F, -4.09080647785F, -3.80134614182F, -4.16003183859F, 
	-3.86311363583F, -4.23191475649F, -3.92753673559F, -4.30662813539F, 
	-3.99478772096F, -4.38436084392F, -4.06505425189F, -4.46531964723F, 
	-4.13854114561F, -4.54973143102F, -4.21547240910F, -4.63784577124F, 
	-4.29609357091F, -4.72993791475F, -4.38067436597F, -4.82631225061F, 
	-4.46951183777F, -4.92730637029F, -4.56293393684F, -5.03329583816F, 
	-4.66130371183F, -5.14469982383F, -4.76502421198F, -5.26198778594F, 
	-4.87454424794F, -5.38568744735F, -4.99036519443F, -5.51639436666F, 
	-5.11304906527F, -5.65478349747F, -5.24322815216F, -5.80162324171F, 
	-5.38161659954F, -5.95779265848F, -5.52902439425F, -6.12430270061F, 
	-5.68637439258F, -6.30232264225F, -5.85472320188F, -6.49321326639F, 
	-6.03528700220F, -6.69856895599F, -6.22947376744F, -6.92027165750F, 
	-6.43892387583F, -7.16056089108F, -6.66556186386F, -7.42212577459F, 
	-6.91166320095F, -7.70822774710F, -7.17994164856F, -8.02286689309F, 
	-7.47366535926F, -8.37101146357F, -7.79681396661F, -8.75892111666F, 
	-8.15429558668F, -9.19461278299F, -8.55225390649F, -9.68855007176F, 
	-8.99851530743F, -10.25469511101F, -9.50326238361F, -10.91217158858F, 
	-10.08009105960F, -11.68800727061F, -10.74775563721F, -12.62189106890F, 
	-11.53323652737F, -13.77494976264F, -12.47758221261F, -15.24723950099F, 
	-13.64825481382F, -17.21624791577F, -15.16914585729F, -20.03375364732F, 
	-17.30965390592F, -24.52081487584F, -20.84624507354F, -33.18554728903F, 
	-29.78193767475F, -59.46185060618F, 124.87740208196F, 472.49438932947F, 
	-7.97633347077F, 26.83467157132F, -16.91058920739F,  5.59618642713F, 
	-23.56363707736F, -3.94805727849F, -31.76116451537F, -11.61802618256F, 
	-44.91631056639F, -21.01537317641F, -72.87075060732F, -38.38221238146F, 
	-183.21581061937F, -102.98662202444F, 366.55796738812F, 213.73586037804F, 
	91.31930387008F, 54.27499059568F, 51.84361037836F, 31.02780477518F, 
	35.96306285202F, 21.47223358889F, 27.35114835437F, 16.16403011475F, 
	21.92312243797F, 12.73214909681F, 18.17224551975F, 10.29742857706F, 
	15.41243804934F,  8.45681222298F, 13.28607063579F,  6.99843026585F, 
	11.58808763440F,  5.79956967957F, 10.19219701399F,  4.78372634152F, 
	 9.01609567682F,  3.90028960659F,  8.00357785823F,  3.11403350641F, 
	 7.11466122799F,  2.39927266557F,  6.31980961222F,  1.73640263999F, 
	 5.59637296650F,  1.10972677169F,  4.92628068957F,  0.50600143826F, 
	 4.29446236400F, -0.08661630443F,  3.68768954545F, -0.67941087825F, 
	 3.09364398599F, -1.28387370644F,  2.50007077200F, -1.91250558791F, 
	 1.89388989491F, -2.57977929822F,  1.26012109290F, -3.30342973815F, 
	 0.58041432637F, -4.10633612215F, -0.16915993792F, -5.01945793222F, 
	-1.02169834406F, -6.08669263364F, -2.02570521124F, -7.37340334080F, 
	-3.25674826531F, -8.98241353106F, -4.84109140265F, -11.08649702350F, 
	-7.00879414645F, -14.00143319580F, -10.23058010282F, -18.37436633360F, 
	-15.64791872913F, -25.77574312489F, -26.93661997110F, -41.26431497798F, 
	-66.14722313468F, -95.18955008905F, 285.66575264916F, 389.07797153023F, 
	50.96073967626F, 66.06809175928F, 29.54348201895F, 36.61931376496F, 
	21.46195281791F, 25.52158096952F, 17.19423602443F, 19.66936453367F, 
	14.54269123269F, 16.03810659539F, 12.72730883668F, 13.55442473968F, 
	11.40126564544F, 11.74114364598F, 10.38680303523F, 10.35376520036F, 
	 9.58335652036F,  9.25402196803F,  8.92972526417F,  8.35780994406F, 
	 8.38650677736F,  7.61101367277F,  7.92716939683F,  6.97722002381F, 
	 7.53318202663F,  6.43101611593F,  7.19120117779F,  5.95411870326F, 
	 6.89136794168F,  5.53303111082F,  6.62623535524F,  5.15756770660F, 
	 6.39006965064F,  4.81989287414F,  6.17838162568F,  4.51387662593F, 
	 5.98760426752F,  4.23465143564F,  5.81486597303F,  3.97830057608F, 
	 5.65782782150F,  3.74163455424F,  5.51456472002F,  3.52202787561F, 
	 5.38347719825F,  3.31729794353F,  5.26322499917F,  3.12561391264F, 
	 5.15267642112F,  2.94542718144F,  5.05086921163F,  2.77541774684F, 
	 4.95698004733F,  2.61445234225F,  4.87030047514F,  2.46155143672F, 
	 4.79021777133F,  2.31586297304F,  4.71619958354F,  2.17664128430F, 
	 4.64778151140F,  2.04323002787F,  4.58455699112F,  1.91504826403F, 
	 4.52616900172F,  1.79157901626F,  4.47230322380F,  1.67235980500F, 
	 4.42268236507F,  1.55697476161F,  4.37706143036F,  1.44504801618F, 
	 4.33522376136F,  1.33623811787F,  4.29697770825F,  1.23023329714F, 
	 4.26215382342F,  1.12674741730F,  4.23060248961F,  1.02551649299F, 
	 4.20219191189F,  0.92629567655F,  4.17680641681F,  0.82885663131F, 
	 4.15434501229F,  0.73298522561F,  4.13472017130F,  0.63847949241F, 
	 4.11785680855F,  0.54514780883F,  4.10369142592F,  0.45280725677F, 
	 4.09217140649F,  0.36128213184F,  4.08325444120F,  0.27040257225F, 
	 4.07690807566F,  0.18000328269F,  4.07310936721F,  0.08992233135F, 
}; 


// End of File
