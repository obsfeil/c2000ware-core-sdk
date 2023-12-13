#include "fpu.h"
#include "dsp_examples_setup.h"
#include "driverlib.h"
#include "device.h"
#include "board.h"
#include "c2000ware_libraries.h"

#define TEST_SIZE_VEC   (64U)

float test_input[130] = {
    1.125541798361F, -2.052159867208F, -0.656497261735F, -0.685257998008F,
    -0.832920102136F,  2.082120331303F,  3.066081352433F,  1.906094688038F,
    -2.904472363724F, -2.761641029122F,  2.420081969933F, -0.632982095493F,
    2.596757723074F,  0.168865823368F,  1.860978162734F, -0.522764360647F,
    -2.521365114703F,  0.985579762252F, -1.496207478720F,  0.804080330174F,
    -1.034483484073F, -1.307002572444F,  1.129264023384F, -0.429448362856F,
    -2.283603987309F, -3.044284173343F,  1.390013368633F,  3.041462080758F,
    -2.470788093372F, -2.091242556589F,  0.966085914025F, -2.474215675752F,
    -0.036606235707F, -0.801673246622F,  1.753333687350F, -1.896778017650F,
    1.351117811506F, -0.064794481300F,  2.536651094294F, -1.008492626689F,
    2.456238535457F,  2.837677900566F, -1.041984270427F,  2.641024096838F,
    1.248756893589F, -2.810613315736F, -1.898716856941F,  1.494506490946F,
    -2.949698228501F, -1.450665427766F,  1.533563806602F, -0.484838130014F,
    0.000140966971F,  0.300781743155F, -0.126152907751F,  2.781798514554F,
    2.542944819714F, -0.516829035186F,  0.690312511118F,  3.035108159920F,
    0.739319730211F, -1.247495349066F,  2.258442613615F,  1.263540748369F,
    1.919446663704F,  1.045137828288F,  0.482055499655F,  0.245838830279F,
    -1.992256881409F,  1.244733693668F, -1.634055370062F,  1.046325738726F,
    2.428526098953F, -2.022353433370F, -2.961427640131F, -2.337254458161F,
    -0.063451447323F,  3.135814603466F, -2.086475279162F, -2.066407283710F,
    3.007639224657F, -2.936755657030F,  1.336398779371F,  0.384529638356F,
    0.002963301960F,  2.399337984943F, -0.181657100285F,  1.062959787788F,
    -2.766996260783F, -1.945065147247F,  1.143363194469F, -0.823621631786F,
    -2.874989953878F, -0.246766213959F, -2.692687560146F,  3.026220496919F,
    0.136029972074F, -2.158871355790F, -2.533819976840F,  2.233815670058F,
    1.998986319111F,  0.909582411063F,  1.995207223290F, -0.777404630466F,
    1.397629178494F, -1.941983696889F, -2.199960307358F, -0.450799740346F,
    1.002829380022F, -0.112958721978F,  0.116835469570F, -2.383767537046F,
    2.971786773162F,  0.562392112719F,  0.936141157905F, -1.720413547503F,
    1.887032658351F, -0.724959422492F, -0.290297557685F,  0.521418820776F,
    -0.424796710068F, -1.559448124614F,  2.044006859493F, -1.316700139197F,
    -2.617136339275F,  0.735703724424F, -2.304854535250F, -1.474783538796F,
    8.212372427893F, -3.141592653590F
};
const float test_golden[128] = {
    9.337914226254F, -5.193752520798F,  7.555875166158F, -3.826850651598F,
    7.379452325757F, -1.059472322286F, 11.278453780326F, -1.235497965552F,
    5.307900064169F, -5.903233682711F, 10.632454397827F, -3.774574749083F,
    10.809130150967F, -2.972726830222F, 10.073350590627F, -3.664357014237F,
    5.691007313190F, -2.156012891338F,  6.716164949174F, -2.337512323416F,
    7.177888943820F, -4.448595226034F,  9.341636451277F, -3.571041016446F,
    5.928768440584F, -6.185876826933F,  9.602385796526F, -0.100130572832F,
    5.741584334521F, -5.232835210179F,  9.178458341918F, -5.615808329341F,
    8.175766192186F, -3.943265900212F,  9.965706115243F, -5.038370671240F,
    9.563490239399F, -3.206387134890F, 10.749023522187F, -4.150085280279F,
    10.668610963350F, -0.303914753024F,  7.170388157466F, -0.500568556752F,
    9.461129321482F, -5.952205969325F,  6.313655570952F, -1.647086162644F,
    5.262674199392F, -4.592258081356F,  9.745936234495F, -3.626430783604F,
    8.212513394864F, -2.840810910435F,  8.086219520142F, -0.359794139036F,
    10.755317247607F, -3.658421688776F,  8.902684939011F, -0.106484493670F,
    8.951692158104F, -4.389088002655F, 10.470815041508F, -1.878051905221F,
    10.131819091597F, -2.096454825301F,  8.694427927548F, -2.895753823311F,
    6.220115546484F, -1.896858959922F,  6.578317057831F, -2.095266914863F,
    10.640898526846F, -5.163946086960F,  5.250944787762F, -5.478847111750F,
    8.148920980570F, -0.005778050124F,  6.125897148731F, -5.207999937300F,
    11.220011652550F, -6.078348310620F,  9.548771207264F, -2.757063015234F,
    8.215335729853F, -0.742254668647F,  8.030715327608F, -2.078632865802F,
    5.445376167110F, -5.086657800836F,  9.355735622362F, -3.965214285375F,
    5.337382474015F, -3.388358867548F,  5.519684867747F, -0.115372156670F,
    8.348402399967F, -5.300464009380F,  5.678552451053F, -0.907776983532F,
    10.211358747004F, -2.232010242527F, 10.207579651183F, -3.918997284056F,
    9.610001606388F, -5.083576350478F,  6.012412120535F, -3.592392393936F,
    9.215201807915F, -3.254551375568F,  8.329207897463F, -5.525360190636F,
    11.184159201055F, -2.579200540871F,  9.148513585798F, -4.862006201093F,
    10.099405086244F, -3.866552076081F,  7.922074870208F, -2.620173832814F,
    7.787575717825F, -4.701040778204F, 10.256379287386F, -4.458292792787F,
    5.595236088618F, -2.405888929166F,  5.907517892643F, -4.616376192386F,
};

float test_input_sub[130] = {
                            -2.028793199495F, -1.294505486107F,  1.022953222804F,  1.547632909909F,
                            -1.062932771739F, -3.076645765089F,  2.503762246355F, -2.837189043422F,
                            -2.399201646743F,  1.055048107910F,  3.068820353905F,  0.650108515769F,
                             0.251214937225F,  0.164006629568F,  1.300100488888F,  1.443307029997F,
                             3.138398408457F,  1.302212053796F, -1.332981879566F,  1.767944157643F,
                            -0.537070727722F, -1.332179951605F, -0.220917162181F,  1.209714148026F,
                             1.658491237307F,  0.356067074406F,  1.999334941950F, -0.650179035650F,
                            -2.511882144771F, -2.754607079297F, -2.022450825969F,  1.760394782897F,
                            -0.881939849250F, -1.020490679037F, -2.785306584388F,  0.677741483660F,
                             0.137511743186F,  1.515843899130F, -1.031391310468F, -2.483031631624F,
                            -2.037831587405F, -2.338046264778F, -1.828741981572F,  0.311269672514F,
                             2.545654889088F, -0.092806362957F,  1.102015268448F,  2.453431050263F,
                            -0.198120143072F,  1.878422831267F,  2.589504706754F,  1.472408453947F,
                            -2.488068655159F, -2.819064900979F,  1.542811482518F, -2.683640813182F,
                             1.484512205570F, -2.585358219680F,  0.388686798411F,  1.874593765785F,
                            -1.984267006411F,  2.783502233512F,  0.610796928134F,  1.154318985256F,
                            -1.257032964378F, -2.311690966921F, -2.298873412685F,  1.399419555120F,
                            -1.805777822906F, -2.448221285422F,  2.481491732323F, -2.403363291251F,
                            -2.692641390130F,  0.884156786036F, -1.618004669290F, -1.075592010638F,
                            -2.803843846268F,  0.966429440441F, -0.366171114785F,  1.565339148528F,
                            -3.058131843582F,  0.522671365644F,  2.495626860576F,  1.508167596461F,
                            -1.905952795052F, -1.666131633115F, -2.554928394590F,  1.476281773796F,
                            -1.210349466186F,  2.956857738405F, -0.276097822051F,  2.305491017895F,
                            -2.502785013377F, -2.599765122580F,  3.112625458130F, -0.839203489920F,
                            -1.054991841821F, -0.821848150795F, -1.273307508866F,  1.162568180837F,
                            -2.751751030614F,  0.615385444405F, -1.267670511470F,  1.818127279118F,
                            -2.850359067012F, -0.831561238319F,  0.034106024936F, -1.847081433877F,
                             1.642587290168F, -2.597050676370F,  0.823537093271F,  1.708611192441F,
                            -2.576786754195F, -1.849301522261F, -2.633519064674F, -0.702010046196F,
                             1.741953665799F,  0.325334111221F,  2.545536672334F, -1.703036944447F,
                             0.212195431137F,  0.891839220584F, -2.455756512268F, -0.097512696121F,
                             2.047117428627F, -2.187519081218F, -1.017262034421F,  1.771430790090F,
                            -0.661791219504F, -3.141592653590F, };
const float test_golden_sub[128] = {
                                    -1.367001979991F,  1.847087167483F,  1.684744442308F,  4.689225563499F,
                                    -0.401141552235F,  0.064946888501F,  3.165553465860F,  0.304403610168F,
                                    -1.737410427238F,  4.196640761500F,  3.730611573409F,  3.791701169359F,
                                     0.913006156730F,  3.305599283158F,  1.961891708393F,  4.584899683586F,
                                     3.800189627962F,  4.443804707385F, -0.671190660062F,  4.909536811233F,
                                     0.124720491783F,  1.809412701985F,  0.440874057324F,  4.351306801616F,
                                     2.320282456811F,  3.497659727996F,  2.661126161454F,  2.491413617940F,
                                    -1.850090925266F,  0.386985574293F, -1.360659606464F,  4.901987436486F,
                                    -0.220148629746F,  2.121101974553F, -2.123515364883F,  3.819334137250F,
                                     0.799302962691F,  4.657436552720F, -0.369600090964F,  0.658561021966F,
                                    -1.376040367901F,  0.803546388812F, -1.166950762068F,  3.452862326104F,
                                     3.207446108593F,  3.048786290632F,  1.763806487953F,  5.595023703852F,
                                     0.463671076432F,  5.020015484857F,  3.251295926258F,  4.614001107537F,
                                    -1.826277435655F,  0.322527752611F,  2.204602702023F,  0.457951840408F,
                                     2.146303425074F,  0.556234433910F,  1.050478017915F,  5.016186419375F,
                                    -1.322475786907F,  5.925094887101F,  1.272588147638F,  4.295911638846F,
                                    -0.595241744873F,  0.829901686668F, -1.637082193180F,  4.541012208710F,
                                    -1.143986603401F,  0.693371368168F,  3.143282951827F,  0.738229362339F,
                                    -2.030850170625F,  4.025749439626F, -0.956213449786F,  2.066000642952F,
                                    -2.142052626763F,  4.108022094031F,  0.295620104719F,  4.706931802118F,
                                    -2.396340624077F,  3.664264019234F,  3.157418080080F,  4.649760250051F,
                                    -1.244161575548F,  1.475461020474F, -1.893137175086F,  4.617874427385F,
                                    -0.548558246681F,  6.098450391994F,  0.385693397454F,  5.447083671485F,
                                    -1.840993793872F,  0.541827531010F,  3.774416677635F,  2.302389163669F,
                                    -0.393200622317F,  2.319744502795F, -0.611516289362F,  4.304160834427F,
                                    -2.089959811109F,  3.756978097995F, -0.605879291965F,  4.959719932708F,
                                    -2.188567847508F,  2.310031415271F,  0.695897244440F,  1.294511219713F,
                                     2.304378509672F,  0.544541977220F,  1.485328312775F,  4.850203846031F,
                                    -1.914995534691F,  1.292291131329F, -1.971727845170F,  2.439582607394F,
                                     2.403744885303F,  3.466926764811F,  3.207327891838F,  1.438555709143F,
                                     0.873986650642F,  4.033431874174F, -1.793965292763F,  3.044079957469F,
                                     2.708908648132F,  0.954073572371F, -0.355470814917F,  4.913023443680F,
                                };
float *test_scalar = &test_input[2U*TEST_SIZE_VEC];
float32_t test_output[2U*TEST_SIZE_VEC];
float32_t *test_scalar_sub = &test_input_sub[2U*TEST_SIZE_VEC];
float32_t test_output_sub[2U*TEST_SIZE_VEC];
uint16_t pass = 0U, fail = 0U, pass_sub = 0U, fail_sub = 0U;
float tolerance = 1.0e-6;

void main(void)
{
    //
    // CPU initialization
    //
    Device_init();
    Device_initGPIO();
    Interrupt_initModule();
    Interrupt_initVectorTable();
    Board_init();
    C2000Ware_libraries_init();

    //
    // Variable initialization
    //
    uint16_t i_v;
    complex_float c, c_sub;
    float32u_t out, gold, err;
    float32u_t out_sub, gold_sub, err_sub;

    //
    // Run vector subtraction function
    //
    c_sub.dat[0] = test_scalar_sub[0];
    c_sub.dat[1] = test_scalar_sub[1];
    sub_SP_CSxCV((complex_float *)test_output_sub, (const complex_float *)test_input_sub, c_sub, TEST_SIZE_VEC);

    //
    // Verify results
    //
    for(i_v = 0U; i_v < 2U*TEST_SIZE_VEC; i_v++)
    {
        out_sub.f32  = test_output_sub[i_v];
        gold_sub.f32 = test_golden_sub[i_v];
        err_sub.f32  = fabsf(out_sub.f32 - gold_sub.f32);
        if(err_sub.f32 < tolerance)
        {
            pass_sub++;
        }
        else
        {
            fail_sub++;
        }
    }

    //
    // Run vector addition function
    //
    c.dat[0] = test_scalar[0];
    c.dat[1] = test_scalar[1];
    add_SP_CSxCV((complex_float *)test_output, (const complex_float *)test_input, c, TEST_SIZE_VEC);

    //
    // Verify results
    //
    for(i_v = 0U; i_v < 2U*TEST_SIZE_VEC; i_v++)
    {
        out.f32  = test_output[i_v];
        gold.f32 = test_golden[i_v];
        err.f32  = fabsf(out.f32 - gold.f32);
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
