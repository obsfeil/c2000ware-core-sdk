//#############################################################################
//! \file cfft2Output.c
//! \brief  Ouput Vector (512) 
//! \author Vishal Coelho 
//! \date   27-Jan-2016
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


const double test_golden[2048] = {
	117.619584943462, 127.242033175182, 122.152715752133, 133.687099634118, 
	127.120532885294, 140.738781568502, 132.589267225241, 148.487804903146, 
	138.639351712989, 157.043990157556, 145.369451897035, 166.541571131583, 
	152.901954792613, 177.146402471586, 161.390572562403, 189.065890930191, 
	171.031079335451, 202.562936929641, 182.076802762112, 217.975921074026, 
	194.861530540112, 235.748048327442, 209.834346665073, 256.471625868494, 
	227.614365086097, 280.957027188816, 249.080078287504, 310.344180780178, 
	275.522012629059, 346.290987314120, 308.918374109699, 391.309393734066, 
	352.468137771088, 449.406424011788, 411.716548644928, 527.416619098102, 
	497.225186173212, 638.108021871189, 632.033708613183, 808.694263606146, 
	878.469654713117, 1110.778971519350, 1490.034930848489, 1826.421831229780, 
	6509.054287883688, 7312.371922633241, -1738.099865227832, -1244.246461125538, 
	685.737268288577, 3063.037015212825, -1558.192774163421, -3158.638164269519, 
	-791.110574975655, -1438.688477457563, -555.545775080599, -974.053939551695, 
	-431.414209454572, -746.111402200683, -352.875108348188, -608.128626224547, 
	-298.181549489710, -514.854617875921, -257.720390452005, -447.304740657774, 
	-226.499162968640, -396.004915948199, -201.640992361091, -355.662278582961, 
	-181.361753398661, -323.074055362930, -164.492370897649, -296.182869784439, 
	-150.233103890763, -273.604144280813, -138.017555117918, -254.370601080814, 
	-127.432936739502, -237.785411348240, -118.171079420787, -223.333493743650, 
	-109.997138343705, -210.625685143494, -102.728936307431, -199.362359701892, 
	-96.222938943556, -189.309006234690, -90.364497167049, -180.279405702513, 
	-85.060911417360, -172.123779647563, -80.236407258215, -164.720272892233, 
	-75.828433523534, -157.968723093854, -71.784893158676, -151.786030251529, 
	-68.062043165326, -146.102665725603, -64.622882029699, -140.860006007058, 
	-61.435897336733, -136.008272204096, -58.474082949829, -131.504920348102, 
	-55.714160322112, -127.313371350652, -53.135956071054, -123.401999742202, 
	-50.721900375484, -119.743321628209, -48.456619661756, -116.313337484126, 
	-46.326603509118, -113.090996371375, -44.319930447030, -110.057756160060, 
	-42.426040834142, -107.197220252240, -40.635547642280, -104.494835704852, 
	-38.940077959112, -101.937640967313, -37.332139540330, -99.514053966867, 
	-35.805007908011, -97.213693202878, -34.352630394507, -95.027225999173, 
	-32.969544235194, -92.946239220284, -31.650806366156, -90.963128662933, 
	-30.391933019651, -89.071004047590, -29.188847557445, -87.263607100709, 
	-28.037835259780, -85.535240669414, -26.935504010991, -83.880707172353, 
	-25.878750003170, -82.295254982207, -24.864727725900, -80.774531571890, 
	-23.890823629616, -79.314542449056, -22.954632948230, -77.911615061087, 
	-22.053939247378, -76.562366982289, -21.186696331392, -75.263677801814, 
	-20.351012197482, -74.012664219431, -19.545134771809, -72.806657929897, 
	-18.767439200691, -71.643185938172, -18.016416502615, -70.519952999267, 
	-17.290663413982, -69.434825919814, -16.588873284559, -68.385819495012, 
	-15.909827898165, -67.371083885511, -15.252390110662, -66.388893265060, 
	-14.615497211535, -65.437635592088, -13.998154927385, -64.515803377467, 
	-13.399431996058, -63.621985337037, -12.818455249027, -62.754858831501, 
	-12.254405147329, -61.913183008369, -11.706511722971, -61.095792571014, 
	-11.174050883478, -60.301592108939, -10.656341042221, -59.529550931137, 
	-10.152740041495, -58.778698351204, -9.662642339095, -58.048119378785, 
	-9.185476432426, -57.336950777048, -8.720702497072, -56.644377450427, 
	-8.267810219270, -55.969629130778, -7.826316803966, -55.311977333578, 
	-7.395765142075, -54.670732558831, -6.975722122286, -54.045241714022, 
	-6.565777074295, -53.434885738846, -6.165540331665, -52.839077413495, 
	-5.774641903733, -52.257259334179, -5.392730247025, -51.688902041160, 
	-5.019471127584, -51.133502286079, -4.654546566463, -50.590581426601, 
	-4.297653861367, -50.059683937628, -3.948504678108, -49.540376029287, 
	-3.606824206130, -49.032244362886, -3.272350372886, -48.534894856817, 
	-2.944833112339, -48.047951575144, -2.624033683298, -47.571055692269, 
	-2.309724033641, -47.103864527660, -2.001686206899, -46.646050645192, 
	-1.699711787910, -46.197301012076, -1.403601384594, -45.757316212862, 
	-1.113164143124, -45.325809714323, -0.828217294014, -44.902507177437, 
	-0.548585726837, -44.487145812971, -0.274101591498, -44.079473777481, 
	-0.004603924144, -43.679249606805,  0.260061704052, -43.286241684349, 
	 0.520043516843, -42.900227741708,  0.775483843086, -42.520994389346, 
	 1.026519408515, -42.148336675243,  1.273281610371, -41.782057669586, 
	 1.515896776056, -41.421968073726,  1.754486406879, -41.067885851763, 
	 1.989167407892, -40.719635883247,  2.220052304735, -40.377049635584, 
	 2.447249448334, -40.039964854881,  2.670863208244, -39.708225273994, 
	 2.890994155363, -39.381680336704,  3.107739234691, -39.060184936971, 
	 3.321191928767, -38.743599172318,  3.531442412364, -38.431788110463, 
	 3.738577698974, -38.124621568367,  3.942681779604, -37.821973902943, 
	 4.143835754338, -37.523723812708,  4.342117957105, -37.229754149713, 
	 4.537604074057, -36.939951741145,  4.730367255940, -36.654207220012, 
	 4.920478224811, -36.372414864385,  5.108005375425, -36.094472444691, 
	 5.293014871602, -35.820281078597,  5.475570737874, -35.549745093031, 
	 5.655734946654, -35.282771892960,  5.833567501214, -35.019271836514, 
	 6.009126514672, -34.759158116118,  6.182468285238, -34.502346645292, 
	 6.353647367905, -34.248755950803,  6.522716642796, -33.998307069879, 
	 6.689727380328, -33.750923452206,  6.854729303391, -33.506530866457, 
	 7.017770646671, -33.265057311099,  7.178898213302, -33.026432929258, 
	 7.338157428951, -32.790589927429,  7.495592393501, -32.557462497824, 
	 7.651245930444, -32.326986744168,  7.805159634096, -32.099100610777, 
	 7.957373914756, -31.873743814733,  8.107928041909, -31.650857781008, 
	 8.256860185566, -31.430385580391,  8.404207455850, -31.212271870070, 
	 8.550005940897, -30.996462836733,  8.694290743158, -30.782906142083, 
	 8.837096014201, -30.571550870623,  8.978454988054, -30.362347479622, 
	 9.118400013183, -30.155247751140,  9.256962583165, -29.950204746020, 
	 9.394173366110, -29.747172759762,  9.530062232906, -29.546107280168, 
	 9.664658284321, -29.346964946690,  9.797989877045, -29.149703511409, 
	 9.930084648690, -28.954281801538, 10.060969541818, -28.760659683420, 
	10.190670827035, -28.568798027913, 10.319214125188, -28.378658677126, 
	10.446624428711, -28.190204412433, 10.572926122165, -28.003398923710, 
	10.698143001992, -27.818206779739, 10.822298295527, -27.634593399723, 
	10.945414679310, -27.452525025879, 11.067514296705, -27.271968697036, 
	11.188618774884, -27.092892223218, 11.308749241180, -26.915264161154, 
	11.427926338852, -26.739053790683, 11.546170242277, -26.564231092011, 
	11.663500671604, -26.390766723781, 11.779936906879, -26.218632001934, 
	11.895497801679, -26.047798879313, 12.010201796259, -25.878239925985, 
	12.124066930251, -25.709928310252, 12.237110854915, -25.542837780322, 
	12.349350844972, -25.376942646606, 12.460803810033, -25.212217764634, 
	12.571486305645, -25.048638518533, 12.681414543959, -24.886180805080, 
	12.790604404040, -24.724821018277, 12.899071441849, -24.564536034449, 
	13.006830899876, -24.405303197823, 13.113897716475, -24.247100306594, 
	13.220286534887, -24.089905599431, 13.326011711974, -23.933697742429, 
	13.431087326676, -23.778455816475, 13.535527188197, -23.624159305018, 
	13.639344843931, -23.470788082226, 13.742553587149, -23.318322401509, 
	13.845166464434, -23.166742884414, 13.947196282900, -23.016030509841, 
	14.048655617183, -22.866166603613, 14.149556816219, -22.717132828344, 
	14.249912009826, -22.568911173626, 14.349733115083, -22.421483946499, 
	14.449031842520, -22.274833762216, 14.547819702133, -22.128943535266, 
	14.646108009215, -21.983796470672, 14.743907890030, -21.839376055528, 
	14.841230287311, -22.695666050792, 14.938085965619, -21.552650483298, 
	15.034485516537, -21.410313638007, 15.130439363727, -21.268640050462, 
	15.225957767849, -21.127614499460, 15.321050831340, -20.987221999919, 
	15.415728503074, -20.847447795940, 15.510000582883, -20.708277354055, 
	15.603876725975, -20.569696356657, 15.697366447226, -20.431690695594, 
	15.790479125363, -20.294246465939, 15.883224007043, -20.157349959915, 
	15.975610210828, -20.020987660971, 16.067646731057, -19.885146238013, 
	16.159342441631, -19.749812539773, 16.250706099699, -19.614973589319, 
	16.341746349255, -19.480616578692, 16.432471724658, -19.346728863676, 
	16.522890654062, -19.213297958689, 16.613011462770, -19.080311531790, 
	16.702842376513, -18.947757399803, 16.792391524654, -18.815623523547, 
	16.881666943323, -18.683898003175, 16.970676578485, -18.552569073610, 
	17.059428288944, -18.421625100080, 17.147929849280, -18.291054573752, 
	17.236188952728, -18.160846107442, 17.324213214005, -18.030988431431, 
	17.412010172074, -17.901470389343, 17.499587292858, -17.772280934120, 
	17.586951971904, -17.643409124062, 17.674111536994, -17.514844118949, 
	17.761073250719, -17.386575176223, 17.847844312993, -17.258591647247, 
	17.934431863539, -17.130882973625, 18.020842984326, -17.003438683581, 
	18.107084701966, -16.876248388399, 18.193163990078, -16.749301778922, 
	18.279087771614, -16.622588622097, 18.364862921151, -16.496098757582, 
	18.450496267152, -16.369822094393, 18.535994594192, -16.243748607597, 
	18.621364645163, -16.117868335057, 18.706613123441, -15.992171374211, 
	18.791746695037, -15.866647878894, 18.876771990717, -15.741288056193, 
	18.961695608098, -15.616082163345, 19.046524113732, -15.491020504658, 
	19.131264045155, -15.366093428471, 19.215921912929, -15.241291324138, 
	19.300504202663, -15.116604619039, 19.385017377016, -14.992023775620, 
	19.469467877684, -14.867539288446, 19.553862127379, -14.743141681290, 
	19.638206531792, -14.618821504224, 19.722507481544, -14.494569330739, 
	19.806771354131, -14.370375754874, 19.891004515856, -14.246231388364, 
	19.975213323759, -14.122126857791, 20.059404127534, -13.998052801751, 
	20.143583271453, -13.873999868028, 20.227757096269, -13.749958710769, 
	20.311931941137, -13.625919987673, 20.396114145518, -13.501874357169, 
	20.480310051087, -13.377812475607, 20.564526003653, -13.253724994440, 
	20.648768355064, -13.129602557405, 20.733043465129, -13.005435797697, 
	20.817357703544, -12.881215335145, 20.901717451815, -12.756931773363, 
	20.986129105199, -12.632575696911, 21.070599074649, -12.508137668425, 
	21.155133788772, -12.383608225744, 21.239739695791, -12.258977879019, 
	21.324423265532, -12.134237107801, 21.409190991412, -12.009376358114, 
	21.494049392450, -11.884386039501, 21.579005015296, -11.759256522051, 
	22.664064436269, -11.633978133397, 21.749234263425, -11.508541155691, 
	21.834521138639, -11.382935822542, 21.919931739711, -11.257152315928, 
	22.005472782496, -11.131180763073, 22.091151023056, -11.005011233289, 
	22.176973259847, -10.878633734774, 22.262946335923, -10.752038211378, 
	22.349077141176, -10.625214539321, 22.435372614607, -10.498152523865, 
	22.521839746631, -10.370841895945, 22.608485581409, -10.243272308743, 
	22.695317219227, -10.115433334210, 22.782341818906, -9.987314459544, 
	22.869566600251, -9.858905083592, 22.956998846550, -9.730194513210, 
	23.044645907105, -9.601171959549, 23.132515199816, -9.471826534276, 
	23.220614213812, -9.342147245731, 23.308950512128, -9.212122995011, 
	23.397531734439, -9.081742571977, 23.486365599838, -8.950994651182, 
	23.575459909686, -8.819867787721, 23.664822550503, -8.688350412999, 
	23.754461496930, -8.556430830401, 23.844384814756, -8.424097210883, 
	23.934600664000, -8.291337588455, 24.025117302073, -8.158139855576, 
	24.115943087006, -8.024491758440, 24.207086480749, -7.890380892155, 
	24.298556052554, -7.755794695809, 24.390360482431, -7.620720447428, 
	24.482508564690, -7.485145258807, 24.575009211571, -7.349056070211, 
	24.667871456960, -7.212439644963, 24.761104460199, -7.075282563878, 
	24.854717509992, -6.937571219572, 24.948720028417, -6.799291810616, 
	25.043121575031, -6.660430335540, 25.137931851092, -6.520972586690, 
	25.233160703893, -6.380904143909, 25.328818131205, -6.240210368055, 
	25.424914285852, -6.098876394345, 25.521459480399, -5.956887125515, 
	25.618464191985, -5.814227224788, 25.715939067277, -5.670881108650, 
	25.813894927577, -5.526832939422, 25.912342774064, -5.382066617610, 
	26.011293793201, -5.236565774052, 26.110759362285, -5.090313761820, 
	26.210751055173, -4.943293647895, 26.311280648172, -4.795488204587, 
	26.412360126106, -4.646879900708, 26.514001688573, -4.497450892468, 
	26.616217756379, -4.347183014104, 26.719020978191, -4.196057768210, 
	26.822424237375, -4.044056315780, 26.926440659067, -3.891159465930, 
	27.031083617452, -3.737347665302, 27.136366743287, -3.582600987129, 
	27.242303931659, -3.426899119948, 27.348909349994, -3.270221355959, 
	27.456197446331, -3.112546578989, 27.564182957863, -2.953853252079, 
	27.672880919767, -2.794119404647, 27.782306674324, -2.633322619233, 
	27.892475880347, -2.471440017795, 28.003404522927, -2.308448247544, 
	28.115108923518, -2.144323466296, 28.227605750358, -1.979041327322, 
	28.340912029264, -1.812576963676, 28.455045154790, -1.644904971974, 
	28.570022901791, -1.475999395610, 28.685863437384, -1.305833707373, 
	28.802585333345, -1.134380791452, 28.920207578947, -0.961612924794, 
	29.038749594260, -0.787501757787, 29.158231243945, -0.612018294243, 
	29.278672851543, -0.435132870652, 29.400095214300, -0.256815134665, 
	29.522519618540, -0.077034022780, 29.645967855618,  0.104242262798, 
	29.770462238471,  0.287046278187, 29.896025618803,  0.471411362745, 
	30.022681404924,  0.657371664963, 30.150453580283,  0.844962169334, 
	30.279366722714,  1.034218724277, 30.409446024440,  1.225178071144, 
	30.540717312869,  1.417877874367, 30.673207072204,  1.612356752802, 
	30.806942465930,  1.808654312320, 30.941951360198,  2.006811179706, 
	31.078262348165,  2.206869037936, 31.215904775318,  2.408870662879, 
	31.354908765856,  2.612859961519, 31.495305250149,  2.818882011746, 
	31.637125993358,  3.026983103814, 31.780403625252,  3.237210783531, 
	31.925171671290,  3.449613897277, 32.071464585032,  3.664242638939, 
	32.219317781944,  3.881148598861, 32.368767674671,  4.100384814908, 
	32.519851709845,  4.322005825753, 32.672608406519,  4.546067726504, 
	32.827077396304,  4.772628226790, 32.983299465297,  5.001746711436, 
	33.141316597903,  5.233484303858, 33.301172022639,  5.467903932332, 
	33.462910260041,  5.705070399283, 33.626577172774,  5.945050453753, 
	33.792220018071,  6.187912867236, 33.959887502634,  6.433728513047, 
	34.129629840122,  6.682570449423, 34.301498811374,  6.934514006577, 
	34.475547827530,  7.189636877909, 34.651831996196,  7.448019215614, 
	34.830408190842,  7.709743730941, 35.011335123619,  7.974895799371, 
	35.194673421772,  8.243563570981, 35.380485707891,  8.515838086326, 
	35.568836684205,  8.791813398132, 35.759793221156,  9.071586699170, 
	35.953424450534,  9.355258456658, 36.149801863420,  9.642932553609, 
	36.348999413250,  9.934716437518, 36.551093624307, 10.230721276869, 
	36.756163705976, 10.531062125921, 36.964291673135, 10.835858098300, 
	37.175562473052, 11.145232549957, 37.390064119219, 11.459313272072, 
	37.607887832556, 11.778232694559, 37.829128190481, 12.102128100848, 
	38.053883284338, 12.431141854673, 38.282254885762, 12.765421639684, 
	38.514348622553, 13.105120712706, 38.750274164728, 13.450398171578, 
	38.990145421414, 13.801419238569, 39.234080749354, 14.158355560410, 
	39.482203173817, 14.521385526133, 39.734640622790, 14.890694603914, 
	39.991526175383, 15.266475698308, 40.252998325486, 15.648929529290, 
	40.519201261752, 16.038265034707, 40.790285165127, 16.434699797815, 
	41.066406525204, 16.838460501765, 41.347728476816, 17.249783413048, 
	41.634421158392, 17.668914896040, 41.926662093737, 18.096111961058, 
	42.224636599041, 18.531642848451, 42.528538217087, 18.975787651569, 
	42.838569180804, 19.428838981624, 43.154940908496, 19.891102677796, 
	43.477874533315, 20.362898566199, 43.807601469773, 20.844561271696, 
	44.144364020331, 21.336441086885, 44.488416025449, 21.838904903031, 
	44.840023560743, 22.352337208146, 45.199465685291, 22.877141157941, 
	45.567035245535, 23.413739725945, 45.943039739637, 23.962576939685, 
	46.327802247679, 24.524119210559, 46.721662433626, 25.098856765784, 
	47.124977625594, 25.687305191672, 47.538123981679, 26.290007098495, 
	47.961497749325, 26.907533918226, 48.395516627141, 27.540487847741, 
	48.840621239010, 28.189503951372, 49.297276731441, 28.855252438287, 
	49.765974506372, 29.538441131899, 50.247234103002, 30.239818150466, 
	50.741605243847, 30.960174820258, 51.249670061959, 31.700348845198, 
	51.772045528347, 32.461227759711, 52.309386100879, 33.243752694745, 
	52.862386618639, 34.048922490652, 53.431785468677, 34.877798194760, 
	54.018368055569, 35.731507986312, 54.622970608078, 36.611252576912, 
	55.246484361821, 37.518311140949, 55.889860161962, 38.454047837690, 
	56.554113536010, 39.419918995107, 57.240330293730, 40.417481035134, 
	57.949672719187, 41.448399231236, 58.683386429324, 42.514457402100, 
	59.442807984318, 43.617568660375, 60.229373347672, 44.759787352938, 
	61.044627308862, 45.943322349750, 61.890233998815, 47.170551862493, 
	62.767988649048, 48.444040002541, 63.679830769575, 49.766555321304, 
	64.627858949458, 51.141091615607, 65.614347518056, 52.570891327791, 
	66.641765345831, 54.059471926279, 67.712797112377, 55.610655719330, 
	68.830367428006, 57.228603635064, 69.997668265952, 58.917853597703, 
	71.218190247920, 60.683364246930, 72.495758429905, 62.530564889481, 
	73.834573362366, 64.465412745308, 75.239258354982, 66.494458762949, 
	76.714914068620, 68.624923539994, 78.267181795564, 70.864785207583, 
	79.902317086033, 73.222881539633, 81.627275750945, 75.709029049563, 
	83.449814739476, 78.334162468592, 85.378610983889, 81.110498798185, 
	87.423402061870, 84.051731145619, 89.595153499953, 87.173258854225, 
	91.906258801066, 90.492462121130, 94.370779921298, 94.029031481689, 
	97.004738079659, 97.805365406182, 99.826467646897, 101.847053044066, 
	102.857049690160, 106.183464207754, 106.120846928019, 110.848475500559, 
	109.646168923228, 115.881370768319, 113.466106112823, 121.327966822696, 
	173.276951060510, 181.089830123627, 189.649768042114, 199.069188947665, 
	209.484330411619, 221.061919967733, 234.008238504604, 248.581632517866, 
	265.110115831537, 284.016661962186, 305.856434254100, 331.373124915083, 
	361.586988593788, 397.937678467155, 442.526640258138, 498.551505350353, 
	571.139144243223, 669.088040940028, 808.959043055547, 1026.378595262401, 
	1416.170490379378, 2357.121295296745, 9789.717608671457, 2137.554770649966, 
	3138.858288882086, 3522.067542543018, 1641.852757407762, 1121.343919306686, 
	861.858714995203, 703.094067764407, 594.968498329319, 516.237668782173, 
	456.203643432004, 408.845626376496, 370.498219758862, 338.794971092069, 
	312.136529858792, 289.401534575997, 269.779641960074, 252.670246446270, 
	237.618496093992, 224.273459911695, 212.359962847287, 201.659134354744, 
	191.994672247213, 183.222949849079, 175.225765247397, 167.904942944872, 
	161.178257379728, 154.976314881122, 149.240140677745, 143.919291453871, 
	138.970364412946, 134.355808835939, 130.042970791417, 126.003319264773, 
	122.211814702840, 118.646390277230, 115.287523048539, 112.117877348673, 
	109.122006568073, 106.286102476190, 103.597783458122, 101.045914791838, 
	98.620455445464, 96.312326935742, 94.113300625983, 92.015900506155, 
	90.013319027959, 88.099343993359, 86.268294838330, 84.514966932144, 
	82.834582739364, 81.222748877485, 79.675418255932, 78.188856608176, 
	76.759612833315, 75.384492650473, 74.060535142025, 72.784991822590, 
	71.555307921988, 70.369105613583, 69.224168956065, 68.118430347795, 
	67.049958319326, 66.016946512324, 65.017703712474, 64.050644820586, 
	63.114282660446, 62.207220534279, 61.328145447416, 60.475821932992, 
	59.649086415569, 58.846842059595, 58.068054054706, 57.311745295261, 
	56.576992416164, 55.862922151158, 55.168707983384, 54.493567061208, 
	53.836757355109, 53.197575033931, 52.575352041008, 51.969453852603, 
	51.379277402870, 50.804249161078, 50.243823348222, 49.697480281361, 
	49.164724835147, 48.645085010977, 48.138110605080, 47.643371967652, 
	47.160458845857, 46.688979304164, 46.228558716039, 45.778838821563, 
	45.339476845996, 44.910144674738, 44.490528080528, 44.080325999045, 
	43.679249849438, 43.287022896542, 42.903379651839, 42.528065310448, 
	42.160835221633, 41.801454390534, 41.449697008982, 41.105346013449, 
	40.768192668314, 40.438036172769, 40.114683289819, 39.797947995938, 
	39.487651150058, 39.183620180647, 38.885688789746, 38.593696672894, 
	38.307489253962, 38.026917433972, 37.751837353052, 37.482110164737, 
	37.217601821867, 36.958182873400, 36.703728271495, 36.454117188268, 
	36.209232841648, 35.968962329833, 35.733196473832, 35.501829667651, 
	35.274759735690, 35.051887796949, 34.833118135668, 34.618358078048, 
	34.407517874729, 34.200510588698, 33.997251988359, 33.797660445477, 
	33.601656837735, 33.409164455681, 33.220108913816, 33.034418065626, 
	32.852021922348, 32.672852575286, 32.496844121484, 32.323932592618, 
	32.154055886907, 31.987153703930, 31.823167482187, 31.662040339274, 
	31.503717014553, 31.348143814182, 31.195268558416, 31.045040531045, 
	30.897410430892, 30.752330325257, 30.609753605233, 30.469634942790, 
	30.331930249568, 30.196596637275, 30.063592379642, 29.932876875857, 
	29.804410615400, 29.678155144237, 29.554073032301, 29.432127842205, 
	29.312284099138, 29.194507261891, 29.078763694959, 28.965020641688, 
	28.853246198401, 28.743409289486, 28.635479643388, 28.529427769476, 
	28.425224935742, 28.322843147313, 28.222255125722, 28.123434288925, 
	28.026354732023, 27.930991208671, 27.837319113135, 27.745314462980, 
	27.654953882364, 27.566214585905, 27.479074363122, 27.393511563390, 
	27.309505081434, 27.227034343301, 27.146079292826, 27.066620378547, 
	26.988638541068, 26.912115200848, 26.837032246401, 26.763372022898, 
	26.691117321139, 26.620251366905, 26.550757810664, 26.482620717610, 
	26.415824558047, 26.350354198083, 26.286194890635, 26.223332266732, 
	26.161752327105, 26.101441434058, 26.042386303604, 25.984573997863, 
	25.927991917711, 25.872627795674, 25.818469689052, 25.765505973276, 
	25.713725335486, 25.663116768319, 25.613669563908, 25.565373308074, 
	25.518217874728, 25.472193420443, 25.427290379224, 25.383499457448, 
	25.340811628980, 25.299218130454, 25.258710456720, 25.219280356448, 
	25.180919827884, 25.143621114760, 25.107376702347, 25.072179313649, 
	25.038021905740, 25.004897666231, 24.972800009870, 24.941722575268, 
	24.911659221760, 24.882604026371, 24.854551280919, 24.827495489220, 
	24.801431364419, 24.776353826422, 24.752257999445, 24.729139209670, 
	24.706992982996, 24.685815042906, 24.665601308427, 24.646347892187, 
	24.628051098582, 24.610707422020, 24.594313545274, 24.578866337924, 
	24.564362854886, 24.550800335034, 24.538176199912, 24.526488052533, 
	24.515733676262, 24.505911033789, 24.497018266182, 24.489053692030, 
	24.482015806662, 24.475903281455, 24.470714963219, 24.466449873666, 
	24.463107208963, 24.460686339356, 24.459186808886, 24.458608335175, 
	24.458950809302, 24.460214295745, 24.462399032417, 24.465505430773, 
	24.469534075999, 24.474485727283, 24.480361318160, 24.487161956947, 
	24.494888927249, 24.503543688554, 24.513127876906, 24.523643305660, 
	24.535091966323, 24.547476029474, 24.560797845774, 24.575059947059, 
	24.590265047518, 24.606416044958, 24.623516022164, 24.641568248340, 
	24.660576180644, 24.680543465821, 24.701473941920, 24.723371640112, 
	24.746240786609, 24.770085804668, 24.794911316712, 24.820722146542, 
	24.847523321655, 24.875320075675, 24.904117850882, 24.933922300862, 
	24.964739293265, 24.996574912678, 25.029435463622, 25.063327473663, 
	25.098257696656, 25.134233116106, 25.171260948671, 25.209348647790, 
	25.248503907451, 25.288734666103, 25.330049110707, 25.372455680945, 
	25.415963073568, 25.460580246918, 25.506316425597, 25.553181105310, 
	25.601184057882, 25.650335336442, 25.700645280797, 25.752124522990, 
	25.804783993053, 25.858634924958, 25.913688862768, 25.969957667014, 
	26.027453521277, 26.086188939001, 26.146176770541, 26.207430210453, 
	26.269962805027, 26.333788460083, 26.398921449034, 26.465376421222, 
	26.533168410542, 26.602312844355, 26.672825552715, 26.744722777909, 
	26.818021184322, 26.892737868648, 26.968890370446, 27.046496683067, 
	27.125575264959, 27.206145051358, 27.288225466399, 27.371836435635, 
	27.456998399009, 27.543732324273, 27.632059720880, 27.722002654378, 
	27.813583761303, 27.906826264611, 28.001753989657, 28.098391380758, 
	28.196763518343, 28.296896136730, 28.398815642553, 28.502549133858, 
	28.608124419904, 28.715570041696, 28.824915293278, 28.936190243819, 
	29.049425760532, 29.164653532450, 29.281906095110, 29.401216856166, 
	29.522620121997, 29.646151125326, 29.771846053916, 29.899742080377, 
	30.029877393148, 30.162291228692, 30.297023904968, 30.434116856242, 
	30.573612669281, 30.715555121023, 30.859989217765, 31.006961235953, 
	31.156518764649, 31.308710749761, 31.463587540102, 31.621200935388, 
	31.781604236262, 31.944852296434, 32.111001577055, 32.280110203436, 
	32.452238024215, 32.627446673118, 32.805799633420, 32.987362305278, 
	33.172202076047, 33.360388393765, 33.551992843960, 33.747089229956, 
	33.945753656862, 34.148064619450, 34.354103094132, 34.563952635241, 
	34.777699475889, 34.995432633618, 35.217244021140, 35.443228562431, 
	35.673484314509, 35.908112595195, 36.147218117221, 36.390909129051, 
	36.639297562797, 36.892499189678, 37.150633783438, 37.413825292236, 
	37.682202019499, 37.955896814300, 38.235047271849, 38.519795944723, 
	38.810290565524, 39.106684281677, 39.409135903155, 39.717810163970, 
	40.032877998329, 40.354516832411, 40.682910892833, 41.018251532892, 
	41.360737577825, 41.710575690367, 42.067980758020, 42.433176303563, 
	42.806394920425, 43.187878734713, 43.577879895813, 43.976661097640, 
	44.384496132803, 44.801670482132, 45.228481942222, 45.665241293894, 
	46.112273014715, 46.569916039002, 47.038524569043, 47.518468941606, 
	48.010136554191, 48.513932855871, 49.030282408055, 49.559630020987, 
	50.102441972369, 50.659207315118, 51.230439281955, 51.816676795296, 
	52.418486091777, 53.036462471690, 53.671232184690, 54.323454464314, 
	54.993823725205, 55.683071938422, 56.391971201908, 57.121336525098, 
	57.872028848758, 58.644958323586, 59.441087873821, 60.261437075189, 
	61.107086380035, 61.979181726449, 62.878939572745, 63.807652403808, 
	64.766694761758, 65.757529860095, 66.781716848326, 67.840918802939, 
	68.936911530940, 70.071593284018, 71.246995495198, 72.465294665849, 
	73.728825549462, 75.040095800402, 76.401802281169, 77.816849251561, 
	79.288368698156, 80.819743103960, 82.414631007043, 84.076995755192, 
	85.811137933004, 87.621732020748, 89.513867943987, 91.493098292880, 
	93.565492135266, 95.737696524017, 98.017007014219, 100.411448769477, 
	102.929870161318, 105.582051167500, 108.378829374948, 111.332247018321, 
	114.455723271965, 117.764257008775, 121.274666508083, 125.005874221757, 
	128.979246809526, 133.219003390427, 137.752708547383, 142.611871373382, 
	147.832678194381, 153.456895164466, 159.532988596985, 166.117526979351, 
	 0.824675448244,  0.830452051671,  0.836195475919,  0.841900869101, 
	 0.847562384922,  0.853172914163,  0.858723724208,  0.864203967624, 
	 0.869600000739,  0.874894420616,  0.880064674609,  0.885081003532, 
	 0.889903313510,  0.894476263737,  0.898721258444,  0.902522800203, 
	 0.905703957724,  0.907979268043,  0.908856483498,  0.907408059144, 
	 0.901654011645,  0.886482065417,  0.843454032351, -2.520297596229, 
	 1.350552977890, -2.029078895314, -2.073549833545, -2.089124424189, 
	-2.095044818954, -2.096577593142, -2.095748935593, -2.093504107387, 
	-2.090343328604, -2.086556079349, -2.082321493390, -2.077756357584, 
	-2.072940063287, -2.067928463772, -2.062761995080, -2.057470651921, 
	-2.052077153355, -2.046599022601, -2.041049992017, -2.035440975590, 
	-2.029780756664, -2.024076483672, -2.018334033612, -2.012558282682, 
	-2.006753310610, -2.000922556897, -1.995068941654, -1.989194960081, 
	-1.983302757039, -1.977394186449, -1.971470859011, -1.965534180816, 
	-1.959585384844, -1.953625556803, -1.947655656485, -1.941676535501, 
	-1.935688952113, -1.929693583676, -1.923691037154, -1.917681858031, 
	-1.911666537904, -1.905645520976, -1.899619209636, -1.893587969263, 
	-1.887552132388, -1.881512002305, -1.875467856213, -1.869419947967, 
	-1.863368510483, -1.857313757852, -1.851255887208, -1.845195080375, 
	-1.839131505319, -1.833065317452, -1.826996660777, -1.820925668922, 
	-1.814852466053, -1.808777167700, -1.802699881496, -1.796620707838, 
	-1.790539740486, -1.784457067106, -1.778372769752, -1.772286925314, 
	-1.766199605912, -1.760110879266, -1.754020809024, -1.747929455063, 
	-1.741836873768, -1.735743118279, -1.729648238722, -1.723552282423, 
	-1.717455294098, -1.711357316032, -1.705258388241, -1.699158548624, 
	-1.693057833100, -1.686956275736, -1.680853908865, -1.674750763197, 
	-1.668646867917, -1.662542250780, -1.656436938197, -1.650330955317, 
	-1.644224326100, -1.638117073387, -1.632009218966, -1.625900783631, 
	-1.619791787237, -1.613682248756, -1.607572186322, -1.601461617279, 
	-1.595350558224, -1.589239025044, -1.583127032958, -1.577014596550, 
	-1.570901729799, -1.564788446115, -1.558674758366, -1.552560678903, 
	-1.546446219590, -1.540331391823, -1.534216206557, -1.528100674327, 
	-1.521984805265, -1.515868609122, -1.509752095285, -1.503635272794, 
	-1.497518150357, -1.491400736369, -1.485283038919, -1.479165065813, 
	-1.473046824577, -1.466928322478, -1.460809566529, -1.454690563503, 
	-1.448571319943, -1.442451842172, -1.436332136300, -1.430212208238, 
	-1.424092063700, -1.417971708215, -1.411851147136, -1.405730385641, 
	-1.399609428748, -1.393488281314, -1.387366948048, -1.381245433511, 
	-1.375123742126, -1.369001878181, -1.362879845834, -1.356757649122, 
	-1.350635291960, -1.344512778148, -1.338390111377, -1.332267295231, 
	-1.326144333190, -1.320021228637, -1.313897984859, -1.307774605051, 
	-1.301651092320, -1.295527449688, -1.289403680095, -1.283279786399, 
	-1.277155771384, -1.271031637761, -1.264907388165, -1.258783025168, 
	-1.252658551270, -1.246533968910, -1.240409280464, -1.234284488249, 
	-1.228159594520, -1.222034601482, -1.215909511279, -1.209784326008, 
	-1.203659047713, -1.197533678388, -1.191408219981, -1.185282674392, 
	-1.179157043480, -1.173031329056, -1.166905532894, -1.160779656723, 
	-1.154653702237, -1.148527671090, -1.142401564898, -1.136275385243, 
	-1.130149133673, -1.124022811701, -1.117896420808, -1.111769962443, 
	-1.105643438027, -1.099516848947, -1.093390196565, -1.087263482214, 
	-1.081136707200, -1.075009872801, -1.068882980273, -1.062756030844, 
	-1.056629025721, -1.050501966085, -1.044374853096, -1.038247687892, 
	-1.032120471589, -1.025993205283, -1.019865890051, -1.013738526947, 
	-1.007611117011, -1.001483661260, -0.995356160697, -0.989228616305, 
	-0.983101029052, -0.976973399888, -0.970845729749, -0.964718019554, 
	-0.958590270209, -0.952462482604, -0.946334657615, -0.940206796105, 
	-0.934078898923, -0.927950966906, -0.921823000879, -0.915695001653, 
	-0.909566970028, -0.903438906793, -0.897310812727, -0.891182688597, 
	-0.885054535159, -0.878926353159, -0.872798143336, -0.866669906416, 
	-0.860541643117, -0.854413354150, -0.848285040214, -0.842156702003, 
	-0.836028340201, -0.829899955484, -0.823771548522, -0.817643119976, 
	-0.811514670501, -0.805386200745, -0.799257711350, -0.793129202950, 
	-0.787000676175, -0.780872131648, -0.774743569987, -0.768614991802, 
	-0.762486397702, -0.756357788287, -0.750229164156, -0.744100525899, 
	-0.737971874106, -0.731843209360, -0.725714532240, -0.719585843323, 
	-0.713457143181, -0.707328432382, -0.701199711493, -0.695070981074, 
	-0.688942241686, -0.682813493886, -0.676684738228, -0.670555975263, 
	-0.664427205541, -0.658298429610, -0.652169648014, -0.646040861299, 
	-0.639912070005, -0.633783274675, -0.627654475848, -0.621525674063, 
	-0.615396869857, -0.609268063767, -0.603139256330, -0.597010448082, 
	-0.590881639559, -0.584752831297, -0.578624023830, -0.572495217697, 
	-0.566366413432, -0.560237611573, -0.554108812657, -0.547980017224, 
	-0.541851225813, -0.535722438965, -0.529593657222, -0.523464881127, 
	-0.517336111228, -0.511207348070, -0.505078592204, -0.498949844181, 
	-0.492821104556, -0.486692373884, -0.480563652725, -0.474434941642, 
	-0.468306241200, -0.462177551967, -0.456048874517, -0.449920209424, 
	-0.443791557267, -0.437662918632, -0.431534294105, -0.425405684279, 
	-0.419277089751, -0.413148511122, -0.407019948999, -0.400891403994, 
	-0.394762876724, -0.388634367812, -0.382505877887, -0.376377407584, 
	-0.370248957545, -0.364120528416, -0.357992120853, -0.351863735517, 
	-0.345735373077, -0.339607034210, -0.333478719600, -0.327350429938, 
	-0.321222165927, -0.315093928274, -0.308965717698, -0.302837534925, 
	-0.296709380694, -0.290581255750, -0.284453160849, -0.278325096759, 
	-0.272197064257, -0.266069064131, -0.259941097183, -0.253813164222, 
	-0.247685266074, -0.241557403574, -0.235429577572, -0.229301788930, 
	-0.223174038524, -0.217046327244, -0.210918655995, -0.204791025695, 
	-0.198663437280, -0.192535891699, -0.186408389921, -0.180280932929, 
	-0.174153521722, -0.168026157321, -0.161898840761, -0.155771573100, 
	-0.149644355411, -0.143517188791, -0.137390074355, -0.131263013240, 
	-0.125136006606, -0.119009055635, -0.112882161530, -0.106755325520, 
	-0.100628548860, -0.094501832828, -0.088375178730, -0.082248587896, 
	-0.076122061688, -0.069995601493, -0.063869208731, -0.057742884849, 
	-0.051616631328, -0.045490449681, -0.039364341454, -0.033238308227, 
	-0.027112351616, -0.020986473276, -0.014860674897, -0.008734958208, 
	-0.002609324981,  0.003516222972,  0.009641683795,  0.015767055588, 
	 0.021892336406,  0.028017524255,  0.034142617092,  0.040267612824, 
	 0.046392509305,  0.052517304334,  0.058641995656,  0.064766580957, 
	 0.070891057861,  0.077015423933,  0.083139676672,  0.089263813511, 
	 0.095387831814,  0.101511728873,  0.107635501908,  0.113759148060, 
	 0.119882664393,  0.126006047887,  0.132129295438,  0.138252403852, 
	 0.144375369846,  0.150498190039,  0.156620860954,  0.162743379009, 
	 0.168865740517,  0.174987941681,  0.181109978588,  0.187231847206, 
	 0.193353543380,  0.199475062825,  0.205596401122,  0.211717553714, 
	 0.217838515896,  0.223959282816,  0.230079849460,  0.236200210653, 
	 0.242320361049,  0.248440295123,  0.254560007165,  0.260679491272, 
	 0.266798741338,  0.272917751047,  0.279036513861,  0.285155023013, 
	 0.291273271498,  0.297391252057,  0.303508957168,  0.309626379037, 
	 0.315743509579,  0.321860340410,  0.327976862831,  0.334093067809, 
	 0.340208945969,  0.346324487570,  0.352439682489,  0.358554520203, 
	 0.364668989771,  0.370783079806,  0.376896778460,  0.383010073393, 
	 0.389122951754,  0.395235400148,  0.401347404610,  0.407458950574, 
	 0.413570022840,  0.419680605539,  0.425790682093,  0.431900235181, 
	 0.438009246689,  0.444117697671,  0.450225568295,  0.456332837794, 
	 0.462439484409,  0.468545485328,  0.474650816622,  0.480755453177, 
	 0.486859368616,  0.492962535223,  0.499064923853,  0.505166503840, 
	 0.511267242896,  0.517367107003,  0.523466060295,  0.529564064929, 
	 0.535661080949,  0.541757066133,  0.547851975836,  0.553945762806, 
	 0.560038376996,  0.566129765350,  0.572219871577,  0.578308635899, 
	 0.584395994776,  0.590481880603,  0.596566221385,  0.602648940369, 
	 0.608729955647,  0.614809179716,  0.620886518987,  0.626961873253, 
	 0.633035135089,  0.639106189192,  0.645174911641,  0.651241169081, 
	 0.657304817805,  0.663365702732,  0.669423656252,  0.675478496944, 
	 0.681530028113,  0.687578036157,  0.693622288702,  0.699662532500, 
	 0.705698491026,  0.711729861742,  0.717756312965,  0.723777480268, 
	 0.729792962339,  0.735802316192,  0.741805051612,  0.747800624688, 
	 0.753788430254,  0.759767793018,  0.765737957094,  0.771698073614, 
	 0.777647185978,  0.783584212193,  0.789507923644,  0.795416919375, 
	 0.801309594778,  0.807184103190,  0.813038308460,  0.818869725913, 
}; 


// End of File
