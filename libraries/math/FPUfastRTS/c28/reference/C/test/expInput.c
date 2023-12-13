//#############################################################################
//! \file expInput.c
//! \brief  Exp Input Vector (512) 
//! \author Vishal Coelho 
//! \date   19-Jan-2017
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
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
    -3.141592653590L, -3.129320807287L, -3.117048960984L, -3.104777114681L, 
    -3.092505268377L, -3.080233422074L, -3.067961575771L, -3.055689729468L, 
    -3.043417883165L, -3.031146036862L, -3.018874190559L, -3.006602344256L, 
    -2.994330497953L, -2.982058651650L, -2.969786805347L, -2.957514959044L, 
    -2.945243112740L, -2.932971266437L, -2.920699420134L, -2.908427573831L, 
    -2.896155727528L, -2.883883881225L, -2.871612034922L, -2.859340188619L, 
    -2.847068342316L, -2.834796496013L, -2.822524649710L, -2.810252803406L, 
    -2.797980957103L, -2.785709110800L, -2.773437264497L, -2.761165418194L, 
    -2.748893571891L, -2.736621725588L, -2.724349879285L, -2.712078032982L, 
    -2.699806186679L, -2.687534340376L, -2.675262494073L, -2.662990647769L, 
    -2.650718801466L, -2.638446955163L, -2.626175108860L, -2.613903262557L, 
    -2.601631416254L, -2.589359569951L, -2.577087723648L, -2.564815877345L, 
    -2.552544031042L, -2.540272184739L, -2.528000338436L, -2.515728492132L, 
    -2.503456645829L, -2.491184799526L, -2.478912953223L, -2.466641106920L, 
    -2.454369260617L, -2.442097414314L, -2.429825568011L, -2.417553721708L, 
    -2.405281875405L, -2.393010029102L, -2.380738182799L, -2.368466336495L, 
    -2.356194490192L, -2.343922643889L, -2.331650797586L, -2.319378951283L, 
    -2.307107104980L, -2.294835258677L, -2.282563412374L, -2.270291566071L, 
    -2.258019719768L, -2.245747873465L, -2.233476027161L, -2.221204180858L, 
    -2.208932334555L, -2.196660488252L, -2.184388641949L, -2.172116795646L, 
    -2.159844949343L, -2.147573103040L, -2.135301256737L, -2.123029410434L, 
    -2.110757564131L, -2.098485717828L, -2.086213871524L, -2.073942025221L, 
    -2.061670178918L, -2.049398332615L, -2.037126486312L, -2.024854640009L, 
    -2.012582793706L, -2.000310947403L, -1.988039101100L, -1.975767254797L, 
    -1.963495408494L, -1.951223562191L, -1.938951715887L, -1.926679869584L, 
    -1.914408023281L, -1.902136176978L, -1.889864330675L, -1.877592484372L, 
    -1.865320638069L, -1.853048791766L, -1.840776945463L, -1.828505099160L, 
    -1.816233252857L, -1.803961406554L, -1.791689560250L, -1.779417713947L, 
    -1.767145867644L, -1.754874021341L, -1.742602175038L, -1.730330328735L, 
    -1.718058482432L, -1.705786636129L, -1.693514789826L, -1.681242943523L, 
    -1.668971097220L, -1.656699250916L, -1.644427404613L, -1.632155558310L, 
    -1.619883712007L, -1.607611865704L, -1.595340019401L, -1.583068173098L, 
    -1.570796326795L, -1.558524480492L, -1.546252634189L, -1.533980787886L, 
    -1.521708941583L, -1.509437095279L, -1.497165248976L, -1.484893402673L, 
    -1.472621556370L, -1.460349710067L, -1.448077863764L, -1.435806017461L, 
    -1.423534171158L, -1.411262324855L, -1.398990478552L, -1.386718632249L, 
    -1.374446785946L, -1.362174939642L, -1.349903093339L, -1.337631247036L, 
    -1.325359400733L, -1.313087554430L, -1.300815708127L, -1.288543861824L, 
    -1.276272015521L, -1.264000169218L, -1.251728322915L, -1.239456476612L, 
    -1.227184630309L, -1.214912784005L, -1.202640937702L, -1.190369091399L, 
    -1.178097245096L, -1.165825398793L, -1.153553552490L, -1.141281706187L, 
    -1.129009859884L, -1.116738013581L, -1.104466167278L, -1.092194320975L, 
    -1.079922474671L, -1.067650628368L, -1.055378782065L, -1.043106935762L, 
    -1.030835089459L, -1.018563243156L, -1.006291396853L, -0.994019550550L, 
    -0.981747704247L, -0.969475857944L, -0.957204011641L, -0.944932165338L, 
    -0.932660319034L, -0.920388472731L, -0.908116626428L, -0.895844780125L, 
    -0.883572933822L, -0.871301087519L, -0.859029241216L, -0.846757394913L, 
    -0.834485548610L, -0.822213702307L, -0.809941856004L, -0.797670009701L, 
    -0.785398163397L, -0.773126317094L, -0.760854470791L, -0.748582624488L, 
    -0.736310778185L, -0.724038931882L, -0.711767085579L, -0.699495239276L, 
    -0.687223392973L, -0.674951546670L, -0.662679700367L, -0.650407854064L, 
    -0.638136007760L, -0.625864161457L, -0.613592315154L, -0.601320468851L, 
    -0.589048622548L, -0.576776776245L, -0.564504929942L, -0.552233083639L, 
    -0.539961237336L, -0.527689391033L, -0.515417544730L, -0.503145698426L, 
    -0.490873852123L, -0.478602005820L, -0.466330159517L, -0.454058313214L, 
    -0.441786466911L, -0.429514620608L, -0.417242774305L, -0.404970928002L, 
    -0.392699081699L, -0.380427235396L, -0.368155389093L, -0.355883542789L, 
    -0.343611696486L, -0.331339850183L, -0.319068003880L, -0.306796157577L, 
    -0.294524311274L, -0.282252464971L, -0.269980618668L, -0.257708772365L, 
    -0.245436926062L, -0.233165079759L, -0.220893233456L, -0.208621387152L, 
    -0.196349540849L, -0.184077694546L, -0.171805848243L, -0.159534001940L, 
    -0.147262155637L, -0.134990309334L, -0.122718463031L, -0.110446616728L, 
    -0.098174770425L, -0.085902924122L, -0.073631077819L, -0.061359231515L, 
    -0.049087385212L, -0.036815538909L, -0.024543692606L, -0.012271846303L, 
    -0.000000000000L,  0.012271846303L,  0.024543692606L,  0.036815538909L, 
     0.049087385212L,  0.061359231515L,  0.073631077819L,  0.085902924122L, 
     0.098174770425L,  0.110446616728L,  0.122718463031L,  0.134990309334L, 
     0.147262155637L,  0.159534001940L,  0.171805848243L,  0.184077694546L, 
     0.196349540849L,  0.208621387152L,  0.220893233456L,  0.233165079759L, 
     0.245436926062L,  0.257708772365L,  0.269980618668L,  0.282252464971L, 
     0.294524311274L,  0.306796157577L,  0.319068003880L,  0.331339850183L, 
     0.343611696486L,  0.355883542789L,  0.368155389093L,  0.380427235396L, 
     0.392699081699L,  0.404970928002L,  0.417242774305L,  0.429514620608L, 
     0.441786466911L,  0.454058313214L,  0.466330159517L,  0.478602005820L, 
     0.490873852123L,  0.503145698426L,  0.515417544730L,  0.527689391033L, 
     0.539961237336L,  0.552233083639L,  0.564504929942L,  0.576776776245L, 
     0.589048622548L,  0.601320468851L,  0.613592315154L,  0.625864161457L, 
     0.638136007760L,  0.650407854064L,  0.662679700367L,  0.674951546670L, 
     0.687223392973L,  0.699495239276L,  0.711767085579L,  0.724038931882L, 
     0.736310778185L,  0.748582624488L,  0.760854470791L,  0.773126317094L, 
     0.785398163397L,  0.797670009701L,  0.809941856004L,  0.822213702307L, 
     0.834485548610L,  0.846757394913L,  0.859029241216L,  0.871301087519L, 
     0.883572933822L,  0.895844780125L,  0.908116626428L,  0.920388472731L, 
     0.932660319034L,  0.944932165338L,  0.957204011641L,  0.969475857944L, 
     0.981747704247L,  0.994019550550L,  1.006291396853L,  1.018563243156L, 
     1.030835089459L,  1.043106935762L,  1.055378782065L,  1.067650628368L, 
     1.079922474671L,  1.092194320975L,  1.104466167278L,  1.116738013581L, 
     1.129009859884L,  1.141281706187L,  1.153553552490L,  1.165825398793L, 
     1.178097245096L,  1.190369091399L,  1.202640937702L,  1.214912784005L, 
     1.227184630309L,  1.239456476612L,  1.251728322915L,  1.264000169218L, 
     1.276272015521L,  1.288543861824L,  1.300815708127L,  1.313087554430L, 
     1.325359400733L,  1.337631247036L,  1.349903093339L,  1.362174939642L, 
     1.374446785946L,  1.386718632249L,  1.398990478552L,  1.411262324855L, 
     1.423534171158L,  1.435806017461L,  1.448077863764L,  1.460349710067L, 
     1.472621556370L,  1.484893402673L,  1.497165248976L,  1.509437095279L, 
     1.521708941583L,  1.533980787886L,  1.546252634189L,  1.558524480492L, 
     1.570796326795L,  1.583068173098L,  1.595340019401L,  1.607611865704L, 
     1.619883712007L,  1.632155558310L,  1.644427404613L,  1.656699250916L, 
     1.668971097220L,  1.681242943523L,  1.693514789826L,  1.705786636129L, 
     1.718058482432L,  1.730330328735L,  1.742602175038L,  1.754874021341L, 
     1.767145867644L,  1.779417713947L,  1.791689560250L,  1.803961406554L, 
     1.816233252857L,  1.828505099160L,  1.840776945463L,  1.853048791766L, 
     1.865320638069L,  1.877592484372L,  1.889864330675L,  1.902136176978L, 
     1.914408023281L,  1.926679869584L,  1.938951715887L,  1.951223562191L, 
     1.963495408494L,  1.975767254797L,  1.988039101100L,  2.000310947403L, 
     2.012582793706L,  2.024854640009L,  2.037126486312L,  2.049398332615L, 
     2.061670178918L,  2.073942025221L,  2.086213871524L,  2.098485717828L, 
     2.110757564131L,  2.123029410434L,  2.135301256737L,  2.147573103040L, 
     2.159844949343L,  2.172116795646L,  2.184388641949L,  2.196660488252L, 
     2.208932334555L,  2.221204180858L,  2.233476027161L,  2.245747873465L, 
     2.258019719768L,  2.270291566071L,  2.282563412374L,  2.294835258677L, 
     2.307107104980L,  2.319378951283L,  2.331650797586L,  2.343922643889L, 
     2.356194490192L,  2.368466336495L,  2.380738182799L,  2.393010029102L, 
     2.405281875405L,  2.417553721708L,  2.429825568011L,  2.442097414314L, 
     2.454369260617L,  2.466641106920L,  2.478912953223L,  2.491184799526L, 
     2.503456645829L,  2.515728492132L,  2.528000338436L,  2.540272184739L, 
     2.552544031042L,  2.564815877345L,  2.577087723648L,  2.589359569951L, 
     2.601631416254L,  2.613903262557L,  2.626175108860L,  2.638446955163L, 
     2.650718801466L,  2.662990647769L,  2.675262494073L,  2.687534340376L, 
     2.699806186679L,  2.712078032982L,  2.724349879285L,  2.736621725588L, 
     2.748893571891L,  2.761165418194L,  2.773437264497L,  2.785709110800L, 
     2.797980957103L,  2.810252803406L,  2.822524649710L,  2.834796496013L, 
     2.847068342316L,  2.859340188619L,  2.871612034922L,  2.883883881225L, 
     2.896155727528L,  2.908427573831L,  2.920699420134L,  2.932971266437L, 
     2.945243112740L,  2.957514959043L,  2.969786805347L,  2.982058651650L, 
     2.994330497953L,  3.006602344256L,  3.018874190559L,  3.031146036862L, 
     3.043417883165L,  3.055689729468L,  3.067961575771L,  3.080233422074L, 
     3.092505268377L,  3.104777114681L,  3.117048960984L,  3.129320807287L, 
}; 


// End of File
