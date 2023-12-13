//#############################################################################
//! \file golden.c
//! \brief  Square Root Ouput Vector (512) 
//! \author Vishal Coelho 
//! \date   21-Sep-2016
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
//
//#############################################################################
//
//
// $Copyright: Copyright (C) 2023 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//#############################################################################

#include "fastrts.h"

const float32_t test_golden[512] = {
    1.648721270700e+00F, 1.648971985030e+00F, 1.649222661247e+00F, 
    1.649473299367e+00F, 1.649723899409e+00F, 1.649974461389e+00F, 
    1.650224985325e+00F, 1.650475471234e+00F, 1.650725919134e+00F, 
    1.650976329042e+00F, 1.651226700975e+00F, 1.651477034950e+00F, 
    1.651727330985e+00F, 1.651977589097e+00F, 1.652227809303e+00F, 
    1.652477991620e+00F, 1.652728136066e+00F, 1.652978242658e+00F, 
    1.653228311412e+00F, 1.653478342347e+00F, 1.653728335479e+00F, 
    1.653978290825e+00F, 1.654228208403e+00F, 1.654478088230e+00F, 
    1.654727930322e+00F, 1.654977734697e+00F, 1.655227501372e+00F, 
    1.655477230364e+00F, 1.655726921690e+00F, 1.655976575367e+00F, 
    1.656226191412e+00F, 1.656475769842e+00F, 1.656725310675e+00F, 
    1.656974813926e+00F, 1.657224279613e+00F, 1.657473707754e+00F, 
    1.657723098364e+00F, 1.657972451462e+00F, 1.658221767063e+00F, 
    1.658471045185e+00F, 1.658720285845e+00F, 1.658969489059e+00F, 
    1.659218654844e+00F, 1.659467783218e+00F, 1.659716874197e+00F, 
    1.659965927798e+00F, 1.660214944037e+00F, 1.660463922932e+00F, 
    1.660712864500e+00F, 1.660961768756e+00F, 1.661210635719e+00F, 
    1.661459465404e+00F, 1.661708257829e+00F, 1.661957013010e+00F, 
    1.662205730963e+00F, 1.662454411706e+00F, 1.662703055256e+00F, 
    1.662951661629e+00F, 1.663200230841e+00F, 1.663448762909e+00F, 
    1.663697257850e+00F, 1.663945715681e+00F, 1.664194136419e+00F, 
    1.664442520078e+00F, 1.664690866678e+00F, 1.664939176233e+00F, 
    1.665187448761e+00F, 1.665435684278e+00F, 1.665683882801e+00F, 
    1.665932044345e+00F, 1.666180168929e+00F, 1.666428256568e+00F, 
    1.666676307278e+00F, 1.666924321077e+00F, 1.667172297981e+00F, 
    1.667420238005e+00F, 1.667668141167e+00F, 1.667916007484e+00F, 
    1.668163836970e+00F, 1.668411629644e+00F, 1.668659385521e+00F, 
    1.668907104617e+00F, 1.669154786949e+00F, 1.669402432534e+00F, 
    1.669650041388e+00F, 1.669897613527e+00F, 1.670145148967e+00F, 
    1.670392647725e+00F, 1.670640109817e+00F, 1.670887535259e+00F, 
    1.671134924068e+00F, 1.671382276260e+00F, 1.671629591850e+00F, 
    1.671876870857e+00F, 1.672124113294e+00F, 1.672371319180e+00F, 
    1.672618488530e+00F, 1.672865621359e+00F, 1.673112717686e+00F, 
    1.673359777525e+00F, 1.673606800892e+00F, 1.673853787805e+00F, 
    1.674100738278e+00F, 1.674347652329e+00F, 1.674594529972e+00F, 
    1.674841371226e+00F, 1.675088176104e+00F, 1.675334944624e+00F, 
    1.675581676802e+00F, 1.675828372653e+00F, 1.676075032194e+00F, 
    1.676321655441e+00F, 1.676568242410e+00F, 1.676814793116e+00F, 
    1.677061307576e+00F, 1.677307785805e+00F, 1.677554227820e+00F, 
    1.677800633637e+00F, 1.678047003271e+00F, 1.678293336739e+00F, 
    1.678539634057e+00F, 1.678785895239e+00F, 1.679032120303e+00F, 
    1.679278309264e+00F, 1.679524462138e+00F, 1.679770578941e+00F, 
    1.680016659689e+00F, 1.680262704397e+00F, 1.680508713081e+00F, 
    1.680754685758e+00F, 1.681000622443e+00F, 1.681246523151e+00F, 
    1.681492387899e+00F, 1.681738216703e+00F, 1.681984009577e+00F, 
    1.682229766539e+00F, 1.682475487603e+00F, 1.682721172785e+00F, 
    1.682966822102e+00F, 1.683212435568e+00F, 1.683458013200e+00F, 
    1.683703555012e+00F, 1.683949061022e+00F, 1.684194531244e+00F, 
    1.684439965694e+00F, 1.684685364388e+00F, 1.684930727341e+00F, 
    1.685176054569e+00F, 1.685421346088e+00F, 1.685666601913e+00F, 
    1.685911822059e+00F, 1.686157006543e+00F, 1.686402155380e+00F, 
    1.686647268585e+00F, 1.686892346174e+00F, 1.687137388162e+00F, 
    1.687382394566e+00F, 1.687627365400e+00F, 1.687872300680e+00F, 
    1.688117200421e+00F, 1.688362064639e+00F, 1.688606893350e+00F, 
    1.688851686568e+00F, 1.689096444309e+00F, 1.689341166589e+00F, 
    1.689585853424e+00F, 1.689830504827e+00F, 1.690075120816e+00F, 
    1.690319701404e+00F, 1.690564246608e+00F, 1.690808756443e+00F, 
    1.691053230925e+00F, 1.691297670068e+00F, 1.691542073888e+00F, 
    1.691786442400e+00F, 1.692030775619e+00F, 1.692275073562e+00F, 
    1.692519336242e+00F, 1.692763563676e+00F, 1.693007755878e+00F, 
    1.693251912864e+00F, 1.693496034650e+00F, 1.693740121249e+00F, 
    1.693984172678e+00F, 1.694228188952e+00F, 1.694472170086e+00F, 
    1.694716116095e+00F, 1.694960026994e+00F, 1.695203902798e+00F, 
    1.695447743523e+00F, 1.695691549184e+00F, 1.695935319795e+00F, 
    1.696179055372e+00F, 1.696422755930e+00F, 1.696666421485e+00F, 
    1.696910052050e+00F, 1.697153647642e+00F, 1.697397208275e+00F, 
    1.697640733964e+00F, 1.697884224725e+00F, 1.698127680572e+00F, 
    1.698371101521e+00F, 1.698614487586e+00F, 1.698857838782e+00F, 
    1.699101155125e+00F, 1.699344436629e+00F, 1.699587683310e+00F, 
    1.699830895181e+00F, 1.700074072259e+00F, 1.700317214558e+00F, 
    1.700560322094e+00F, 1.700803394880e+00F, 1.701046432932e+00F, 
    1.701289436264e+00F, 1.701532404893e+00F, 1.701775338832e+00F, 
    1.702018238096e+00F, 1.702261102700e+00F, 1.702503932660e+00F, 
    1.702746727989e+00F, 1.702989488703e+00F, 1.703232214816e+00F, 
    1.703474906344e+00F, 1.703717563300e+00F, 1.703960185701e+00F, 
    1.704202773560e+00F, 1.704445326892e+00F, 1.704687845712e+00F, 
    1.704930330036e+00F, 1.705172779876e+00F, 1.705415195249e+00F, 
    1.705657576169e+00F, 1.705899922650e+00F, 1.706142234707e+00F, 
    1.706384512356e+00F, 1.706626755610e+00F, 1.706868964484e+00F, 
    1.707111138993e+00F, 1.707353279151e+00F, 1.707595384974e+00F, 
    1.707837456475e+00F, 1.708079493670e+00F, 1.708321496572e+00F, 
    1.708563465197e+00F, 1.708805399559e+00F, 1.709047299672e+00F, 
    1.709289165551e+00F, 1.709530997211e+00F, 1.709772794667e+00F, 
    1.710014557931e+00F, 1.710256287020e+00F, 1.710497981948e+00F, 
    1.710739642729e+00F, 1.710981269377e+00F, 1.711222861907e+00F, 
    1.711464420334e+00F, 1.711705944672e+00F, 1.711947434935e+00F, 
    1.712188891138e+00F, 1.712430313295e+00F, 1.712671701420e+00F, 
    1.712913055529e+00F, 1.713154375635e+00F, 1.713395661752e+00F, 
    1.713636913896e+00F, 1.713878132080e+00F, 1.714119316319e+00F, 
    1.714360466627e+00F, 1.714601583018e+00F, 1.714842665507e+00F, 
    1.715083714108e+00F, 1.715324728835e+00F, 1.715565709703e+00F, 
    1.715806656726e+00F, 1.716047569918e+00F, 1.716288449293e+00F, 
    1.716529294865e+00F, 1.716770106650e+00F, 1.717010884660e+00F, 
    1.717251628911e+00F, 1.717492339416e+00F, 1.717733016190e+00F, 
    1.717973659246e+00F, 1.718214268599e+00F, 1.718454844264e+00F, 
    1.718695386254e+00F, 1.718935894583e+00F, 1.719176369265e+00F, 
    1.719416810315e+00F, 1.719657217747e+00F, 1.719897591575e+00F, 
    1.720137931813e+00F, 1.720378238474e+00F, 1.720618511574e+00F, 
    1.720858751126e+00F, 1.721098957144e+00F, 1.721339129642e+00F, 
    1.721579268635e+00F, 1.721819374136e+00F, 1.722059446159e+00F, 
    1.722299484718e+00F, 1.722539489827e+00F, 1.722779461501e+00F, 
    1.723019399753e+00F, 1.723259304597e+00F, 1.723499176047e+00F, 
    1.723739014118e+00F, 1.723978818822e+00F, 1.724218590174e+00F, 
    1.724458328188e+00F, 1.724698032878e+00F, 1.724937704257e+00F, 
    1.725177342340e+00F, 1.725416947140e+00F, 1.725656518672e+00F, 
    1.725896056948e+00F, 1.726135561984e+00F, 1.726375033792e+00F, 
    1.726614472387e+00F, 1.726853877782e+00F, 1.727093249991e+00F, 
    1.727332589029e+00F, 1.727571894908e+00F, 1.727811167643e+00F, 
    1.728050407247e+00F, 1.728289613734e+00F, 1.728528787119e+00F, 
    1.728767927413e+00F, 1.729007034632e+00F, 1.729246108790e+00F, 
    1.729485149898e+00F, 1.729724157973e+00F, 1.729963133026e+00F, 
    1.730202075072e+00F, 1.730440984125e+00F, 1.730679860198e+00F, 
    1.730918703305e+00F, 1.731157513459e+00F, 1.731396290675e+00F, 
    1.731635034965e+00F, 1.731873746343e+00F, 1.732112424823e+00F, 
    1.732351070419e+00F, 1.732589683144e+00F, 1.732828263012e+00F, 
    1.733066810036e+00F, 1.733305324230e+00F, 1.733543805607e+00F, 
    1.733782254182e+00F, 1.734020669966e+00F, 1.734259052975e+00F, 
    1.734497403221e+00F, 1.734735720718e+00F, 1.734974005480e+00F, 
    1.735212257520e+00F, 1.735450476851e+00F, 1.735688663487e+00F, 
    1.735926817442e+00F, 1.736164938728e+00F, 1.736403027360e+00F, 
    1.736641083350e+00F, 1.736879106713e+00F, 1.737117097461e+00F, 
    1.737355055608e+00F, 1.737592981167e+00F, 1.737830874152e+00F, 
    1.738068734576e+00F, 1.738306562453e+00F, 1.738544357795e+00F, 
    1.738782120617e+00F, 1.739019850931e+00F, 1.739257548751e+00F, 
    1.739495214090e+00F, 1.739732846962e+00F, 1.739970447379e+00F, 
    1.740208015356e+00F, 1.740445550905e+00F, 1.740683054039e+00F, 
    1.740920524773e+00F, 1.741157963118e+00F, 1.741395369089e+00F, 
    1.741632742699e+00F, 1.741870083960e+00F, 1.742107392887e+00F, 
    1.742344669492e+00F, 1.742581913788e+00F, 1.742819125790e+00F, 
    1.743056305509e+00F, 1.743293452959e+00F, 1.743530568153e+00F, 
    1.743767651105e+00F, 1.744004701827e+00F, 1.744241720333e+00F, 
    1.744478706636e+00F, 1.744715660748e+00F, 1.744952582684e+00F, 
    1.745189472456e+00F, 1.745426330077e+00F, 1.745663155561e+00F, 
    1.745899948920e+00F, 1.746136710167e+00F, 1.746373439316e+00F, 
    1.746610136379e+00F, 1.746846801371e+00F, 1.747083434302e+00F, 
    1.747320035188e+00F, 1.747556604040e+00F, 1.747793140872e+00F, 
    1.748029645697e+00F, 1.748266118527e+00F, 1.748502559376e+00F, 
    1.748738968257e+00F, 1.748975345183e+00F, 1.749211690166e+00F, 
    1.749448003219e+00F, 1.749684284356e+00F, 1.749920533589e+00F, 
    1.750156750932e+00F, 1.750392936397e+00F, 1.750629089997e+00F, 
    1.750865211745e+00F, 1.751101301654e+00F, 1.751337359737e+00F, 
    1.751573386006e+00F, 1.751809380475e+00F, 1.752045343156e+00F, 
    1.752281274063e+00F, 1.752517173207e+00F, 1.752753040603e+00F, 
    1.752988876262e+00F, 1.753224680197e+00F, 1.753460452422e+00F, 
    1.753696192949e+00F, 1.753931901791e+00F, 1.754167578960e+00F, 
    1.754403224470e+00F, 1.754638838332e+00F, 1.754874420561e+00F, 
    1.755109971169e+00F, 1.755345490167e+00F, 1.755580977570e+00F, 
    1.755816433390e+00F, 1.756051857639e+00F, 1.756287250330e+00F, 
    1.756522611476e+00F, 1.756757941090e+00F, 1.756993239184e+00F, 
    1.757228505771e+00F, 1.757463740863e+00F, 1.757698944474e+00F, 
    1.757934116615e+00F, 1.758169257300e+00F, 1.758404366541e+00F, 
    1.758639444350e+00F, 1.758874490741e+00F, 1.759109505726e+00F, 
    1.759344489317e+00F, 1.759579441528e+00F, 1.759814362369e+00F, 
    1.760049251856e+00F, 1.760284109998e+00F, 1.760518936810e+00F, 
    1.760753732304e+00F, 1.760988496492e+00F, 1.761223229387e+00F, 
    1.761457931002e+00F, 1.761692601348e+00F, 1.761927240439e+00F, 
    1.762161848286e+00F, 1.762396424903e+00F, 1.762630970301e+00F, 
    1.762865484494e+00F, 1.763099967494e+00F, 1.763334419312e+00F, 
    1.763568839963e+00F, 1.763803229457e+00F, 1.764037587808e+00F, 
    1.764271915027e+00F, 1.764506211128e+00F, 1.764740476122e+00F, 
    1.764974710023e+00F, 1.765208912841e+00F, 1.765443084591e+00F, 
    1.765677225284e+00F, 1.765911334932e+00F, 1.766145413548e+00F, 
    1.766379461144e+00F, 1.766613477733e+00F, 1.766847463326e+00F, 
    1.767081417937e+00F, 1.767315341577e+00F, 1.767549234259e+00F, 
    1.767783095994e+00F, 1.768016926796e+00F, 1.768250726677e+00F, 
    1.768484495649e+00F, 1.768718233723e+00F, 1.768951940913e+00F, 
    1.769185617230e+00F, 1.769419262688e+00F, 1.769652877297e+00F, 
    1.769886461071e+00F, 1.770120014021e+00F, 1.770353536159e+00F, 
    1.770587027499e+00F, 1.770820488051e+00F, 1.771053917829e+00F, 
    1.771287316844e+00F, 1.771520685109e+00F, 1.771754022635e+00F, 
    1.771987329435e+00F, 1.772220605521e+00F, }; 

// End of File
