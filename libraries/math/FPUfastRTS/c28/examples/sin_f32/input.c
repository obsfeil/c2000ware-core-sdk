//#############################################################################
//! \file input.c
//! \brief  Sine Input Vector (512) 
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

const float32_t test_input[512] = {
    -3.141592653590F, -3.129320807287F, -3.117048960984F, -3.104777114681F, 
    -3.092505268377F, -3.080233422074F, -3.067961575771F, -3.055689729468F, 
    -3.043417883165F, -3.031146036862F, -3.018874190559F, -3.006602344256F, 
    -2.994330497953F, -2.982058651650F, -2.969786805347F, -2.957514959044F, 
    -2.945243112740F, -2.932971266437F, -2.920699420134F, -2.908427573831F, 
    -2.896155727528F, -2.883883881225F, -2.871612034922F, -2.859340188619F, 
    -2.847068342316F, -2.834796496013F, -2.822524649710F, -2.810252803406F, 
    -2.797980957103F, -2.785709110800F, -2.773437264497F, -2.761165418194F, 
    -2.748893571891F, -2.736621725588F, -2.724349879285F, -2.712078032982F, 
    -2.699806186679F, -2.687534340376F, -2.675262494073F, -2.662990647769F, 
    -2.650718801466F, -2.638446955163F, -2.626175108860F, -2.613903262557F, 
    -2.601631416254F, -2.589359569951F, -2.577087723648F, -2.564815877345F, 
    -2.552544031042F, -2.540272184739F, -2.528000338436F, -2.515728492132F, 
    -2.503456645829F, -2.491184799526F, -2.478912953223F, -2.466641106920F, 
    -2.454369260617F, -2.442097414314F, -2.429825568011F, -2.417553721708F, 
    -2.405281875405F, -2.393010029102F, -2.380738182799F, -2.368466336495F, 
    -2.356194490192F, -2.343922643889F, -2.331650797586F, -2.319378951283F, 
    -2.307107104980F, -2.294835258677F, -2.282563412374F, -2.270291566071F, 
    -2.258019719768F, -2.245747873465F, -2.233476027161F, -2.221204180858F, 
    -2.208932334555F, -2.196660488252F, -2.184388641949F, -2.172116795646F, 
    -2.159844949343F, -2.147573103040F, -2.135301256737F, -2.123029410434F, 
    -2.110757564131F, -2.098485717828F, -2.086213871524F, -2.073942025221F, 
    -2.061670178918F, -2.049398332615F, -2.037126486312F, -2.024854640009F, 
    -2.012582793706F, -2.000310947403F, -1.988039101100F, -1.975767254797F, 
    -1.963495408494F, -1.951223562191F, -1.938951715887F, -1.926679869584F, 
    -1.914408023281F, -1.902136176978F, -1.889864330675F, -1.877592484372F, 
    -1.865320638069F, -1.853048791766F, -1.840776945463F, -1.828505099160F, 
    -1.816233252857F, -1.803961406554F, -1.791689560250F, -1.779417713947F, 
    -1.767145867644F, -1.754874021341F, -1.742602175038F, -1.730330328735F, 
    -1.718058482432F, -1.705786636129F, -1.693514789826F, -1.681242943523F, 
    -1.668971097220F, -1.656699250916F, -1.644427404613F, -1.632155558310F, 
    -1.619883712007F, -1.607611865704F, -1.595340019401F, -1.583068173098F, 
    -1.570796326795F, -1.558524480492F, -1.546252634189F, -1.533980787886F, 
    -1.521708941583F, -1.509437095279F, -1.497165248976F, -1.484893402673F, 
    -1.472621556370F, -1.460349710067F, -1.448077863764F, -1.435806017461F, 
    -1.423534171158F, -1.411262324855F, -1.398990478552F, -1.386718632249F, 
    -1.374446785946F, -1.362174939642F, -1.349903093339F, -1.337631247036F, 
    -1.325359400733F, -1.313087554430F, -1.300815708127F, -1.288543861824F, 
    -1.276272015521F, -1.264000169218F, -1.251728322915F, -1.239456476612F, 
    -1.227184630309F, -1.214912784005F, -1.202640937702F, -1.190369091399F, 
    -1.178097245096F, -1.165825398793F, -1.153553552490F, -1.141281706187F, 
    -1.129009859884F, -1.116738013581F, -1.104466167278F, -1.092194320975F, 
    -1.079922474671F, -1.067650628368F, -1.055378782065F, -1.043106935762F, 
    -1.030835089459F, -1.018563243156F, -1.006291396853F, -0.994019550550F, 
    -0.981747704247F, -0.969475857944F, -0.957204011641F, -0.944932165338F, 
    -0.932660319034F, -0.920388472731F, -0.908116626428F, -0.895844780125F, 
    -0.883572933822F, -0.871301087519F, -0.859029241216F, -0.846757394913F, 
    -0.834485548610F, -0.822213702307F, -0.809941856004F, -0.797670009701F, 
    -0.785398163397F, -0.773126317094F, -0.760854470791F, -0.748582624488F, 
    -0.736310778185F, -0.724038931882F, -0.711767085579F, -0.699495239276F, 
    -0.687223392973F, -0.674951546670F, -0.662679700367F, -0.650407854064F, 
    -0.638136007760F, -0.625864161457F, -0.613592315154F, -0.601320468851F, 
    -0.589048622548F, -0.576776776245F, -0.564504929942F, -0.552233083639F, 
    -0.539961237336F, -0.527689391033F, -0.515417544730F, -0.503145698426F, 
    -0.490873852123F, -0.478602005820F, -0.466330159517F, -0.454058313214F, 
    -0.441786466911F, -0.429514620608F, -0.417242774305F, -0.404970928002F, 
    -0.392699081699F, -0.380427235396F, -0.368155389093F, -0.355883542789F, 
    -0.343611696486F, -0.331339850183F, -0.319068003880F, -0.306796157577F, 
    -0.294524311274F, -0.282252464971F, -0.269980618668F, -0.257708772365F, 
    -0.245436926062F, -0.233165079759F, -0.220893233456F, -0.208621387152F, 
    -0.196349540849F, -0.184077694546F, -0.171805848243F, -0.159534001940F, 
    -0.147262155637F, -0.134990309334F, -0.122718463031F, -0.110446616728F, 
    -0.098174770425F, -0.085902924122F, -0.073631077819F, -0.061359231515F, 
    -0.049087385212F, -0.036815538909F, -0.024543692606F, -0.012271846303F, 
    -0.000000000000F,  0.012271846303F,  0.024543692606F,  0.036815538909F, 
     0.049087385212F,  0.061359231515F,  0.073631077819F,  0.085902924122F, 
     0.098174770425F,  0.110446616728F,  0.122718463031F,  0.134990309334F, 
     0.147262155637F,  0.159534001940F,  0.171805848243F,  0.184077694546F, 
     0.196349540849F,  0.208621387152F,  0.220893233456F,  0.233165079759F, 
     0.245436926062F,  0.257708772365F,  0.269980618668F,  0.282252464971F, 
     0.294524311274F,  0.306796157577F,  0.319068003880F,  0.331339850183F, 
     0.343611696486F,  0.355883542789F,  0.368155389093F,  0.380427235396F, 
     0.392699081699F,  0.404970928002F,  0.417242774305F,  0.429514620608F, 
     0.441786466911F,  0.454058313214F,  0.466330159517F,  0.478602005820F, 
     0.490873852123F,  0.503145698426F,  0.515417544730F,  0.527689391033F, 
     0.539961237336F,  0.552233083639F,  0.564504929942F,  0.576776776245F, 
     0.589048622548F,  0.601320468851F,  0.613592315154F,  0.625864161457F, 
     0.638136007760F,  0.650407854064F,  0.662679700367F,  0.674951546670F, 
     0.687223392973F,  0.699495239276F,  0.711767085579F,  0.724038931882F, 
     0.736310778185F,  0.748582624488F,  0.760854470791F,  0.773126317094F, 
     0.785398163397F,  0.797670009701F,  0.809941856004F,  0.822213702307F, 
     0.834485548610F,  0.846757394913F,  0.859029241216F,  0.871301087519F, 
     0.883572933822F,  0.895844780125F,  0.908116626428F,  0.920388472731F, 
     0.932660319034F,  0.944932165338F,  0.957204011641F,  0.969475857944F, 
     0.981747704247F,  0.994019550550F,  1.006291396853F,  1.018563243156F, 
     1.030835089459F,  1.043106935762F,  1.055378782065F,  1.067650628368F, 
     1.079922474671F,  1.092194320975F,  1.104466167278F,  1.116738013581F, 
     1.129009859884F,  1.141281706187F,  1.153553552490F,  1.165825398793F, 
     1.178097245096F,  1.190369091399F,  1.202640937702F,  1.214912784005F, 
     1.227184630309F,  1.239456476612F,  1.251728322915F,  1.264000169218F, 
     1.276272015521F,  1.288543861824F,  1.300815708127F,  1.313087554430F, 
     1.325359400733F,  1.337631247036F,  1.349903093339F,  1.362174939642F, 
     1.374446785946F,  1.386718632249F,  1.398990478552F,  1.411262324855F, 
     1.423534171158F,  1.435806017461F,  1.448077863764F,  1.460349710067F, 
     1.472621556370F,  1.484893402673F,  1.497165248976F,  1.509437095279F, 
     1.521708941583F,  1.533980787886F,  1.546252634189F,  1.558524480492F, 
     1.570796326795F,  1.583068173098F,  1.595340019401F,  1.607611865704F, 
     1.619883712007F,  1.632155558310F,  1.644427404613F,  1.656699250916F, 
     1.668971097220F,  1.681242943523F,  1.693514789826F,  1.705786636129F, 
     1.718058482432F,  1.730330328735F,  1.742602175038F,  1.754874021341F, 
     1.767145867644F,  1.779417713947F,  1.791689560250F,  1.803961406554F, 
     1.816233252857F,  1.828505099160F,  1.840776945463F,  1.853048791766F, 
     1.865320638069F,  1.877592484372F,  1.889864330675F,  1.902136176978F, 
     1.914408023281F,  1.926679869584F,  1.938951715887F,  1.951223562191F, 
     1.963495408494F,  1.975767254797F,  1.988039101100F,  2.000310947403F, 
     2.012582793706F,  2.024854640009F,  2.037126486312F,  2.049398332615F, 
     2.061670178918F,  2.073942025221F,  2.086213871524F,  2.098485717828F, 
     2.110757564131F,  2.123029410434F,  2.135301256737F,  2.147573103040F, 
     2.159844949343F,  2.172116795646F,  2.184388641949F,  2.196660488252F, 
     2.208932334555F,  2.221204180858F,  2.233476027161F,  2.245747873465F, 
     2.258019719768F,  2.270291566071F,  2.282563412374F,  2.294835258677F, 
     2.307107104980F,  2.319378951283F,  2.331650797586F,  2.343922643889F, 
     2.356194490192F,  2.368466336495F,  2.380738182799F,  2.393010029102F, 
     2.405281875405F,  2.417553721708F,  2.429825568011F,  2.442097414314F, 
     2.454369260617F,  2.466641106920F,  2.478912953223F,  2.491184799526F, 
     2.503456645829F,  2.515728492132F,  2.528000338436F,  2.540272184739F, 
     2.552544031042F,  2.564815877345F,  2.577087723648F,  2.589359569951F, 
     2.601631416254F,  2.613903262557F,  2.626175108860F,  2.638446955163F, 
     2.650718801466F,  2.662990647769F,  2.675262494073F,  2.687534340376F, 
     2.699806186679F,  2.712078032982F,  2.724349879285F,  2.736621725588F, 
     2.748893571891F,  2.761165418194F,  2.773437264497F,  2.785709110800F, 
     2.797980957103F,  2.810252803406F,  2.822524649710F,  2.834796496013F, 
     2.847068342316F,  2.859340188619F,  2.871612034922F,  2.883883881225F, 
     2.896155727528F,  2.908427573831F,  2.920699420134F,  2.932971266437F, 
     2.945243112740F,  2.957514959043F,  2.969786805347F,  2.982058651650F, 
     2.994330497953F,  3.006602344256F,  3.018874190559F,  3.031146036862F, 
     3.043417883165F,  3.055689729468F,  3.067961575771F,  3.080233422074F, 
     3.092505268377F,  3.104777114681F,  3.117048960984F,  3.129320807287F, 
}; 


// End of File
