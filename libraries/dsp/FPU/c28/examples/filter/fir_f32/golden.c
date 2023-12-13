//#############################################################################
//! \file   golden.c
//! \brief  Ouput Vector (1024) 
//! \author Vishal Coelho 
//! \date   16-Sep-2016
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

const float test_golden[512] = {
     0.00402598192F, -0.00144481604F, -0.01262123375F, -0.02972191886F,
    -0.04710516766F, -0.06620499481F, -0.07720189497F, -0.07382175907F,
    -0.04641268422F,  0.00229934146F,  0.07255872742F,  0.15249384875F,
     0.22838662769F,  0.27418459076F,  0.27228131149F,  0.20395402994F,
     0.06546027185F, -0.13823304942F, -0.37352707379F, -0.59530250533F,
    -0.74304025165F, -0.76046621636F, -0.58823919831F, -0.19230983252F,
     0.43221287360F,  1.24187385081F,  2.16417278150F,  3.09117467311F,
     3.90114531045F,  4.46222868199F,  4.66946501012F,  4.45011577448F,
     3.78857617343F,  2.72092554361F,  1.34915184636F, -0.18562350769F,
    -1.71195899483F, -3.06222926996F, -4.07898761824F, -4.65211901021F,
    -4.72514874820F, -4.31246605544F, -3.47687125583F, -2.33271152757F,
    -1.02010491927F,  0.30343508430F,  1.50216774225F,  2.46460655120F,
     3.12219228114F,  3.43939660015F,  3.42897025924F,  3.13109494957F,
     2.61264179854F,  1.94222636304F,  1.19556143318F,  0.43251205694F,
    -0.29633984915F, -0.96085836719F, -1.52493299311F, -1.98311986735F,
    -2.31509997074F, -2.51508869295F, -2.56338980253F, -2.45570058754F,
    -2.17883590524F, -1.73977668938F, -1.14145171092F, -0.41330312418F,
     0.41280913728F,  1.27497314724F,  2.10979597107F,  2.82950410310F,
     3.35585408674F,  3.60286108609F,  3.51513534133F,  3.05285243580F,
     2.22927098439F,  1.09003288338F, -0.26019936464F, -1.69146610646F,
    -3.03398232324F, -4.12351490968F, -4.79844056996F, -4.95211390576F,
    -4.52648676956F, -3.55074466263F, -2.11611968512F, -0.39394925917F,
     1.41160219453F,  3.06652645353F,  4.36802893524F,  5.14913675264F,
     5.32884297522F,  4.89591388258F,  3.93273590248F,  2.57319007441F,
     1.00586787089F, -0.58150003648F, -2.00408314290F, -3.13030603771F,
    -3.86808626616F, -4.19438478901F, -4.12275587208F, -3.71865405304F,
    -3.05636773414F, -2.22915810660F, -1.30972218364F, -0.37102461228F,
     0.54157190816F,  1.38113939192F,  2.12204616355F,  2.72853124536F,
     3.17876578417F,  3.43783082526F,  3.48742333516F,  3.30377941581F,
     2.88990395046F,  2.25181019462F,  1.42547560264F,  0.44839171133F,
    -0.61457291790F, -1.69950725911F, -2.72002374182F, -3.59949028624F,
    -4.24931586915F, -4.60115584136F, -4.58714099877F, -4.17630466015F,
    -3.35724850274F, -2.17241991095F, -0.69478581282F,  0.94669499134F,
     2.60209271673F,  4.08853773549F,  5.23785352170F,  5.89379458741F,
     5.96301565513F,  5.40675695999F,  4.27661022076F,  2.68514470937F,
     0.81962067919F, -1.10849159144F, -2.86814208735F, -4.26900864458F,
    -5.16179697322F, -5.48168854162F, -5.22659687596F, -4.47853055956F,
    -3.36075018570F, -2.04097714810F, -0.67787660585F,  0.57604584234F,
     1.61902107132F,  2.38196424145F,  2.85523263565F,  3.05422714872F,
     3.03419986342F,  2.84846614938F,  2.56033795561F,  2.20498339869F,
     1.81206190217F,  1.38071052689F,  0.91193320593F,  0.38915227402F,
    -0.18575250189F, -0.81090622917F, -1.45297198948F, -2.07475895718F,
    -2.61262223950F, -3.01001226092F, -3.19920270145F, -3.13847593971F,
    -2.79521624569F, -2.18064075143F, -1.32658134800F, -0.31068971673F,
     0.77773393590F,  1.82158253559F,  2.71532683695F,  3.35176354970F,
     3.66317608572F,  3.60588385197F,  3.19242383307F,  2.46329833400F,
     1.50828623343F,  0.43051138676F, -0.63952913133F, -1.58695762839F,
    -2.30170734935F, -2.71883679686F, -2.80070703061F, -2.56770954705F,
    -2.06872577814F, -1.39923515635F, -0.66059103130F,  0.03000472031F,
     0.58408706436F,  0.92967263980F,  1.04715879475F,  0.94518586265F,
     0.68459291806F,  0.34177232391F,  0.01901824806F, -0.20246054486F,
    -0.25348689983F, -0.11611273462F,  0.19755157517F,  0.62000550842F,
     1.06576485730F,  1.42293173742F,  1.60260380218F,  1.53294211138F,
     1.20104017013F,  0.63151094677F, -0.09150535281F, -0.86505815145F,
    -1.56001074248F, -2.07040731518F, -2.30801890906F, -2.24459256343F,
    -1.88990907380F, -1.31348881642F, -0.60497632145F,  0.11668342962F,
     0.75098878507F,  1.20848887699F,  1.45066904085F,  1.46673318502F,
     1.29628120260F,  0.99243757932F,  0.63518843194F,  0.28963808033F,
     0.02017344861F, -0.14483754709F, -0.18903268106F, -0.13266190363F,
     0.00038016477F,  0.16245522878F,  0.31504311591F,  0.40759630261F,
     0.41126709835F,  0.29829766237F,  0.07254152067F, -0.25662835288F,
    -0.64760641701F, -1.05507122493F, -1.40804697626F, -1.64595137624F,
    -1.70294187163F, -1.54610514924F, -1.15822775506F, -0.57119091716F,
     0.15999883108F,  0.93603342230F,  1.65267940363F,  2.19175529600F,
     2.46862436432F,  2.42356918468F,  2.06032566514F,  1.42204052579F,
     0.61206381212F, -0.24864176472F, -1.01830586606F, -1.58757854422F,
    -1.87392193159F, -1.86051322207F, -1.57136078737F, -1.09092684774F,
    -0.52097682337F,  0.01498648324F,  0.42235087503F,  0.62787529777F,
     0.61801202380F,  0.41332967119F,  0.08712448229F, -0.27686805625F,
    -0.57632416359F, -0.73665750978F, -0.70088126218F, -0.46658028642F,
    -0.05937099925F,  0.44810496975F,  0.97582622992F,  1.42448501874F,
     1.71851355390F,  1.79345665712F,  1.63181731029F,  1.23832785895F,
     0.66405147336F, -0.02687830245F, -0.73979798159F, -1.38860056788F,
    -1.88187719064F, -2.16189090900F, -2.18672206667F, -1.96167262429F,
    -1.51160122388F, -0.90316763752F, -0.21030851831F,  0.46959355564F,
     1.05636046081F,  1.47355530573F,  1.68483337647F,  1.67137977667F,
     1.45956693328F,  1.09114341901F,  0.64243346008F,  0.18512417165F,
    -0.20066058296F, -0.46577628193F, -0.57439996204F, -0.53566193896F,
    -0.37551736920F, -0.15669215600F,  0.05973070563F,  0.20145919007F,
     0.22610335190F,  0.10498165607F, -0.14504179584F, -0.48936069315F,
    -0.85434489149F, -1.16514464469F, -1.33468258553F, -1.30818499483F,
    -1.05024628997F, -0.57937120187F,  0.05783362710F,  0.76519779239F,
     1.43695205230F,  1.95031650485F,  2.21449372040F,  2.16325898879F,
     1.79479696284F,  1.14818831626F,  0.32358817931F, -0.55992227173F,
    -1.35806456070F, -1.95169250258F, -2.24233935498F, -2.19557223030F,
    -1.82014769879F, -1.19053043795F, -0.40744422034F,  0.39374873986F,
     1.09269254052F,  1.57952408572F,  1.79820778533F,  1.72671819684F,
     1.40237806924F,  0.88631711339F,  0.27647090629F, -0.33616335477F,
    -0.85667581167F, -1.22556525569F, -1.39874136909F, -1.37549853903F,
    -1.16783031468F, -0.82156695198F, -0.38341719870F,  0.07882940185F,
     0.51147955482F,  0.85601506698F,  1.08142561936F,  1.16009332876F,
     1.09678675565F,  0.90285497760F,  0.62130177665F,  0.29408439953F,
    -0.01910744893F, -0.27671621797F, -0.43715257152F, -0.49308514766F,
    -0.44834419025F, -0.34373273059F, -0.22348321506F, -0.15050483848F,
    -0.16462768298F, -0.29570774619F, -0.52780576603F, -0.82400329123F,
    -1.10459592377F, -1.28726556558F, -1.28054131800F, -1.03319386711F,
    -0.52460422125F,  0.20040556945F,  1.06055043327F,  1.92256418669F,
     2.64836384404F,  3.09427468014F,  3.16453106764F,  2.80531259633F,
     2.04280448714F,  0.95522461872F, -0.31310124054F, -1.60033792089F,
    -2.72636835436F, -3.54663171556F, -3.94865840130F, -3.89404694142F,
    -3.39473175473F, -2.53243620401F, -1.41734658769F, -0.19666816163F,
     0.99283732305F,  2.01719476338F,  2.78615371605F,  3.23343500693F,
     3.34558652751F,  3.13319700477F,  2.65243319033F,  1.96938850957F,
     1.17634915391F,  0.35374056404F, -0.41299897075F, -1.06792991584F,
    -1.56209813351F, -1.88253511831F, -2.02533352681F, -2.01930382796F,
    -1.89172817468F, -1.68634907685F, -1.42919544781F, -1.15090001809F,
    -0.85667261735F, -0.55217812606F, -0.21950585694F,  0.14873188018F,
     0.56742023359F,  1.02405803618F,  1.50045447077F,  1.94463991109F,
     2.30200704155F,  2.49770412004F,  2.47644153789F,  2.18973732926F,
     1.63551486659F,  0.83863567400F, -0.12217081499F, -1.14820506256F,
    -2.10606970384F, -2.87160241987F, -3.32370509497F, -3.39175561153F,
    -3.04327107832F, -2.31683950188F, -1.29292343441F, -0.11082613198F,
     1.07613690055F,  2.09781269081F,  2.82008120976F,  3.14043369568F,
     3.02994023338F,  2.51115474784F,  1.67913757805F,  0.65961564771F,
    -0.38506897891F, -1.30743563139F, -1.97257753397F, -2.30477446144F,
    -2.27085286137F, -1.90744534142F, -1.28618445342F, -0.52588449108F,
     0.25482630593F,  0.93270077662F,  1.42501417762F,  1.67337698250F,
     1.67392046310F,  1.44701926829F,  1.05515387862F,  0.56297046008F,
     0.05049419347F, -0.42534005963F, -0.81115192495F, -1.08651622872F,
    -1.23530297405F, -1.26916753535F, -1.19714949240F, -1.04864358617F,
    -0.84125976260F, -0.60304727401F, -0.34357421682F, -0.08121328695F,
     0.18343553921F,  0.44064124127F,  0.69730503102F,  0.94695582178F,
     1.19310434493F,  1.41933311312F,  1.61399991621F,  1.74213481723F,
     1.77348026463F,  1.65971685362F,  1.36881929554F,  0.86845759799F,
     0.16461568443F, -0.71586784156F, -1.69444388872F, -2.67073486964F,
    -3.50555273319F, -4.06548134374F, -4.22026195255F, -3.89555953424F,
    -3.06599798502F, -1.79167137177F, -0.18948054336F,  1.55278441173F,
     3.22704801279F,  4.60960888792F,  5.52171520656F,  5.83161410036F,
};

// End of File
