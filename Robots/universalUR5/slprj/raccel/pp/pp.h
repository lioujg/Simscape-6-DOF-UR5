#ifndef RTW_HEADER_pp_h_
#define RTW_HEADER_pp_h_
#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef pp_COMMON_INCLUDES_
#define pp_COMMON_INCLUDES_
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "coder_posix_time.h"
#include "nesl_rtw.h"
#include "pp_43e6ab1_1_gateway.h"
#endif
#include "pp_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#define MODEL_NAME pp
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (75) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (42)   
#elif NCSTATES != 42
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T alhmufu0yv [ 6 ] ; } l4jutbn5rh ; typedef struct {
a3umz4zmr0 ajal1iwi1z ; real_T aqlkdng0y4 ; uint32_T lhjucr5zrp ; uint32_T
kuoviqlwy5 [ 2 ] ; uint32_T h2pnsauhxt [ 625 ] ; uint32_T h04ewpy4nc ;
uint32_T mjpcafci0c ; uint32_T j1qqjbtj53 [ 2 ] ; boolean_T kikz1keduf ;
boolean_T ixcfunz3ep ; boolean_T an5olz5vaz ; boolean_T gc2t2mxxcd ;
boolean_T cbi103hnwr ; boolean_T jfjlhhuyaj ; boolean_T ag2pn0fjxu ;
boolean_T ksjivjyfnw ; } nblp1l3k1r ; typedef struct { real_T jeolgcmssj [ 16
] ; } oioqpqodvo ; typedef struct { real_T eyc0ugbpip [ 9 ] ; } at2pac1xxo ;
typedef struct { real_T e5ryewx4xp [ 6 ] ; real_T ocwp35u3pk [ 6 ] ; real_T
jodlsffaav [ 3 ] ; real_T cjjpsdh0ci ; real_T e1iv3qcjfw ; real_T f21sygsmjw
; real_T itk1tzd05y [ 4 ] ; real_T cgdw5usgs2 [ 4 ] ; real_T fodbt3qoit [ 4 ]
; real_T arfjjmxolk [ 4 ] ; real_T hnth4pq521 [ 4 ] ; real_T lktiyc0abo [ 4 ]
; real_T lqhmzc4iyx [ 3 ] ; real_T gms5jrejo1 ; real_T o3esw0pawl ; real_T
g1ivuzn5or ; real_T ar4x41ndqa ; real_T golkvscg5k ; real_T gge2baxpst [ 4 ]
; real_T pyqiljkwsr [ 4 ] ; real_T hwb0fhnhyj [ 4 ] ; real_T kay4eihbv3 [ 4 ]
; real_T n12tcfek0v [ 4 ] ; real_T j3iozjgadg [ 4 ] ; real_T pcwdl5jswd [ 18
] ; real_T kxvph4adkr [ 40 ] ; real_T mz0hxgwqhl ; real_T f1wefakszv ; real_T
l5krbabg4d ; real_T dgxu5zatl2 ; real_T mbaykyotfu [ 6 ] ; real_T etinqsqgwm
; real_T oybfikvjov ; real_T ezct1usiup ; real_T aqna2gz1ds ; real_T
at5fedp10d ; real_T leiklejyk1 ; real_T l5ehte0yu5 ; real_T komus0gcso ;
real_T axvx5onbcx ; real_T kayk4zho1z ; real_T o34qpbtn0y ; real_T fhugj1l3qe
; real_T cxs1ehjvbx ; real_T enhmwan3ns ; real_T moduzw1lx4 ; real_T
n44n3mb43k ; real_T kdz4sa51a2 ; real_T fuszcwwkvv ; real_T ijkfpvfmzk ;
real_T jddyf4dq55 ; real_T g5i5pwgazj ; real_T ad2m20gzqt ; real_T ky052i5er3
; real_T flst3qrajz ; real_T en5e3b0kmw ; real_T ajdgrxcuuj ; real_T
lc0n30aw03 ; real_T nlljfedtl4 [ 6 ] ; real_T ha4lwepn1f [ 6 ] ; real_T
a53vj1gwki [ 6 ] ; real_T n5plh5my25 [ 6 ] ; real_T ka2qvllgio [ 9 ] ; real_T
emkev14wx5 [ 6 ] ; real_T dnumjapkrr [ 16 ] ; real_T n1x3q5r3km [ 16 ] ;
real_T bqwy3enhc1 [ 16 ] ; real_T d2gmderclu [ 6 ] ; real_T anfyf3f0se [ 96 ]
; real_T oqf350egiy [ 9 ] ; real_T lw2nui0kqj [ 9 ] ; oioqpqodvo fcodrholju ;
l4jutbn5rh g25aonyhee ; oioqpqodvo flhn5odxwk ; l4jutbn5rh e12xzvaqlra ; } B
; typedef struct { real_T meaqqr1ua3 ; real_T ieis3wdkcc ; real_T nsbswzebrn
; real_T ftmzzvbzax ; real_T lajwkf5yel ; real_T kf54lrgsgh ; real_T
jb4linf121 [ 6 ] ; real_T jwb0edvt43 ; real_T j4ijkjeaiu ; real_T ipny03bssk
; real_T lcdwdtjwnt ; real_T c1tuvnswoj ; real_T bmfwcfe3zy ; real_T
lccx42ungl ; real_T csttssg2jj ; real_T bafnhq4yd3 ; real_T ls50tk5yor ;
real_T l4isjnnapb ; real_T cm2ish3fp4 ; real_T lwjbyb5hax ; real_T iyyt53kmyv
; real_T domwprwtea ; real_T hw4jmko5ut ; real_T dlylyzqh44 ; real_T
d1vruvafzv ; real_T g2tsjufkz5 [ 6 ] ; real_T p4axc0cn0o ; real_T jwqmhs0s0n
; real_T pabqpgk5jq ; real_T enkp2q4jgz ; real_T ondxfnv25y ; real_T
mcdurxpqfs ; real_T dnzas3pxcw ; real_T oghejnwob3 ; real_T l1vruekg2n ;
real_T la42o3xgh0 ; real_T mbg4rkv5jx ; real_T cvogulxpog ; real_T jxqq0kd055
; real_T d1ymyg1puf ; real_T pniui21m2m ; real_T hom4bzatts ; real_T
jx1pyei5iz ; real_T goe0ybllxx ; real_T f32pecj5j3 ; real_T fbdsqnrbvi ;
real_T gqp5ng5ipd ; real_T ikqao11oir ; real_T mhqnkldn3f ; real_T d0njjfa3vf
; real_T hocn5gpqnf ; real_T lpz0yfj0uv ; real_T obx514d20e [ 6 ] ; real_T
fjgxwmabrc [ 3 ] ; real_T oc1xjxz5rw ; real_T enz403h0md [ 160 ] ; real_T
lvvl3bpreb [ 16 ] ; real_T ocqk3jofvr [ 16 ] ; real_T kso5hmoa3x [ 9 ] ;
real_T pvpfr5em5t [ 3 ] ; real_T of0mgcawwf ; real_T bth2mqorax ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } factggsf10 ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } hir5izsswk ; void
* ppxvh3soys ; void * pwa0n2fnbt ; void * a5nq0aeena ; void * f3zl1211hn ;
void * npaociskuu ; void * jp125spiju ; void * lcth0eskrc ; void * f4dhncxa4g
; void * oabwfal33d ; void * lpdqo4n2bg ; struct { void * LoggedData ; }
odp05jnrxo ; struct { void * LoggedData ; } lqcwuodejz ; struct { void *
LoggedData ; } izvboaabvt ; struct { void * LoggedData ; } ckhvlill0z ;
struct { void * LoggedData ; } d1vdfetdkf ; struct { void * LoggedData ; }
idvsek3cff ; struct { void * LoggedData ; } ovuzirfyo4 ; struct { void *
LoggedData ; } hydekeb4jx ; struct { void * LoggedData ; } etxlw4dum2 ;
struct { void * LoggedData ; } flmct1jknr ; struct { void * LoggedData [ 3 ]
; } c1rfz10d3e ; struct { void * LoggedData [ 2 ] ; } b0hh4aryn5 ; struct {
void * LoggedData [ 2 ] ; } gkzxlfkqk2 ; struct { void * LoggedData [ 2 ] ; }
duq1e514gn ; struct { void * LoggedData [ 2 ] ; } mwua52dad4 ; struct { void
* LoggedData ; } myyziyxqcr ; struct { void * LoggedData ; } db43vuu0b2 ;
struct { void * LoggedData ; } ctiklbjevu ; struct { void * LoggedData ; }
myntgnrjzd ; struct { void * LoggedData ; } nwspghshwe ; struct { void *
LoggedData ; } krkz03kcrk ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } gjmmdatpmk ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } j2ilej2aih ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } mx04nd152z ; struct { void * LoggedData ; } p0uyfooi5b
; int_T cbdib2svjf [ 119 ] ; int_T isi3qqu4qf ; struct { int_T PrevIndex ; }
gfnv1aupmz ; int_T d0jyhdhshq [ 79 ] ; int_T g50wjgttgc ; struct { int_T
PrevIndex ; } fq2wjlgbnm ; int_T fkrpan2ou1 ; int_T ce5lqmurvv ; int_T
hk4x31s2wo [ 3 ] ; int_T pgqbeye23i ; struct { int_T PrevIndex ; } hdj2esbagy
; int_T iwgjwpwckw [ 4 ] ; int_T apqtcucrxr ; struct { int_T PrevIndex ; }
cg2bvqjvra ; int_T nwblnammfm [ 8 ] ; int_T ed5n0ctaot ; struct { int_T
PrevIndex ; } pxh3rjh5u4 ; boolean_T nkznjpj2u5 ; boolean_T aza3hrpxtf ;
boolean_T afqg540hpl ; boolean_T poimg20uht ; at2pac1xxo fcodrholju ;
nblp1l3k1r g25aonyhee ; at2pac1xxo flhn5odxwk ; nblp1l3k1r e12xzvaqlra ; } DW
; typedef struct { real_T lpairqjonl [ 2 ] ; real_T fh5i13vgil [ 2 ] ; real_T
fg3lujycqi [ 2 ] ; real_T h52fy5njki [ 2 ] ; real_T nljb50mtnx [ 2 ] ; real_T
kpgc53iylb [ 2 ] ; real_T jwl1hig4sv [ 2 ] ; real_T pjflr3aosk [ 2 ] ; real_T
gasvzlyrg1 [ 2 ] ; real_T pwmx2sn23r [ 2 ] ; real_T egdystg2ir [ 2 ] ; real_T
ifhvvpi2pj [ 2 ] ; real_T iwaxtr5iwx [ 18 ] ; } X ; typedef struct { real_T
lpairqjonl [ 2 ] ; real_T fh5i13vgil [ 2 ] ; real_T fg3lujycqi [ 2 ] ; real_T
h52fy5njki [ 2 ] ; real_T nljb50mtnx [ 2 ] ; real_T kpgc53iylb [ 2 ] ; real_T
jwl1hig4sv [ 2 ] ; real_T pjflr3aosk [ 2 ] ; real_T gasvzlyrg1 [ 2 ] ; real_T
pwmx2sn23r [ 2 ] ; real_T egdystg2ir [ 2 ] ; real_T ifhvvpi2pj [ 2 ] ; real_T
iwaxtr5iwx [ 18 ] ; } XDot ; typedef struct { boolean_T lpairqjonl [ 2 ] ;
boolean_T fh5i13vgil [ 2 ] ; boolean_T fg3lujycqi [ 2 ] ; boolean_T
h52fy5njki [ 2 ] ; boolean_T nljb50mtnx [ 2 ] ; boolean_T kpgc53iylb [ 2 ] ;
boolean_T jwl1hig4sv [ 2 ] ; boolean_T pjflr3aosk [ 2 ] ; boolean_T
gasvzlyrg1 [ 2 ] ; boolean_T pwmx2sn23r [ 2 ] ; boolean_T egdystg2ir [ 2 ] ;
boolean_T ifhvvpi2pj [ 2 ] ; boolean_T iwaxtr5iwx [ 18 ] ; } XDis ; typedef
struct { real_T lpairqjonl [ 2 ] ; real_T fh5i13vgil [ 2 ] ; real_T
fg3lujycqi [ 2 ] ; real_T h52fy5njki [ 2 ] ; real_T nljb50mtnx [ 2 ] ; real_T
kpgc53iylb [ 2 ] ; real_T jwl1hig4sv [ 2 ] ; real_T pjflr3aosk [ 2 ] ; real_T
gasvzlyrg1 [ 2 ] ; real_T pwmx2sn23r [ 2 ] ; real_T egdystg2ir [ 2 ] ; real_T
ifhvvpi2pj [ 2 ] ; real_T iwaxtr5iwx [ 18 ] ; } CStateAbsTol ; typedef struct
{ real_T lpairqjonl [ 2 ] ; real_T fh5i13vgil [ 2 ] ; real_T fg3lujycqi [ 2 ]
; real_T h52fy5njki [ 2 ] ; real_T nljb50mtnx [ 2 ] ; real_T kpgc53iylb [ 2 ]
; real_T jwl1hig4sv [ 2 ] ; real_T pjflr3aosk [ 2 ] ; real_T gasvzlyrg1 [ 2 ]
; real_T pwmx2sn23r [ 2 ] ; real_T egdystg2ir [ 2 ] ; real_T ifhvvpi2pj [ 2 ]
; real_T iwaxtr5iwx [ 18 ] ; } CXPtMin ; typedef struct { real_T lpairqjonl [
2 ] ; real_T fh5i13vgil [ 2 ] ; real_T fg3lujycqi [ 2 ] ; real_T h52fy5njki [
2 ] ; real_T nljb50mtnx [ 2 ] ; real_T kpgc53iylb [ 2 ] ; real_T jwl1hig4sv [
2 ] ; real_T pjflr3aosk [ 2 ] ; real_T gasvzlyrg1 [ 2 ] ; real_T pwmx2sn23r [
2 ] ; real_T egdystg2ir [ 2 ] ; real_T ifhvvpi2pj [ 2 ] ; real_T iwaxtr5iwx [
18 ] ; } CXPtMax ; typedef struct { real_T hph4zhges4 ; real_T kmrldlvgmz ;
real_T fefpspdcey ; real_T b2jclwx2th ; real_T mxpcqnj2cd ; } ZCV ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
FromWs_Time0 [ 240 ] ; real_T FromWs_Data0 [ 1440 ] ; real_T
FromWs_Time0_mwegrphi2o [ 160 ] ; real_T FromWs_Data0_bwp1rplazj [ 960 ] ;
real_T DiscreteTimeIntegrator1_gainval ; real_T DiscreteTimeIntegrator1_IC ;
real_T DiscreteTimeIntegrator3_gainval ; real_T DiscreteTimeIntegrator3_IC ;
real_T DiscreteTimeIntegrator5_gainval ; real_T DiscreteTimeIntegrator5_IC ;
real_T DiscreteTimeIntegrator_gainval ; real_T DiscreteTimeIntegrator_IC ;
real_T DiscreteTimeIntegrator2_gainval ; real_T DiscreteTimeIntegrator2_IC ;
real_T DiscreteTimeIntegrator4_gainval ; real_T DiscreteTimeIntegrator4_IC ;
real_T Delay_InitialCondition ; real_T
DiscreteTimeIntegrator1_gainval_oqjikpnyqd ; real_T
DiscreteTimeIntegrator1_IC_cgmsovkfs2 ; real_T
DiscreteTimeIntegrator3_gainval_jbyzgv51qt ; real_T
DiscreteTimeIntegrator3_IC_iotuu4egg5 ; real_T
DiscreteTimeIntegrator5_gainval_mzosb4boys ; real_T
DiscreteTimeIntegrator5_IC_ndnh2qpnoo ; real_T
DiscreteTimeIntegrator_gainval_f1m0x5aaah ; real_T
DiscreteTimeIntegrator_IC_bany3i5ckr ; real_T
DiscreteTimeIntegrator2_gainval_m5icpofl44 ; real_T
DiscreteTimeIntegrator2_IC_aj2g4mbo2m ; real_T
DiscreteTimeIntegrator4_gainval_gg2tu1ivfs ; real_T
DiscreteTimeIntegrator4_IC_dzcpbao03e ; real_T
Delay_InitialCondition_h32mlgftaf ; real_T
DiscreteTimeIntegrator_gainval_bqrugbnomn ; real_T
DiscreteTimeIntegrator_IC_aorocmjnnc ; real_T Bx_Gain ; real_T
DiscreteTimeIntegrator2_gainval_pc04oat5qt ; real_T
DiscreteTimeIntegrator2_IC_h4ggyv4v21 ; real_T By_Gain ; real_T
DiscreteTimeIntegrator4_gainval_evjywzf5xi ; real_T
DiscreteTimeIntegrator4_IC_bu1dngwxgl ; real_T Bz_Gain ; real_T Kx_Gain ;
real_T Ky_Gain ; real_T Kz_Gain ; real_T Mx_Gain ; real_T My_Gain ; real_T
Mz_Gain ; real_T Bx_Gain_dheugbfk0n ; real_T By_Gain_cppco4mjvy ; real_T
Bz_Gain_oi02ukprz0 ; real_T DiscreteTimeIntegrator1_gainval_ewt1b41uct ;
real_T DiscreteTimeIntegrator1_IC_mmztbewik4 ; real_T
DiscreteTimeIntegrator3_gainval_enrtoduzvs ; real_T
DiscreteTimeIntegrator3_IC_bfgbvvrang ; real_T
DiscreteTimeIntegrator5_gainval_hcdzw0pxjl ; real_T
DiscreteTimeIntegrator5_IC_dwq35bos2m ; real_T Kx_Gain_oord1bn5tk ; real_T
Ky_Gain_mrgiolqcuy ; real_T Kz_Gain_k51k0wreuu ; real_T Mx_Gain_lkbxzy4zcx ;
real_T My_Gain_hrp3lvoreh ; real_T Mz_Gain_mdbt5ypr1k ; real_T
DiscreteTimeIntegrator_gainval_arhh4ywx41 ; real_T
DiscreteTimeIntegrator_IC_ho0ck4cozt ; real_T Bx_Gain_nwa0gs3mlk ; real_T
DiscreteTimeIntegrator2_gainval_mru0uvxpda ; real_T
DiscreteTimeIntegrator2_IC_ly22xqd5qq ; real_T By_Gain_khzacun3xg ; real_T
DiscreteTimeIntegrator4_gainval_ka5z4lhm2t ; real_T
DiscreteTimeIntegrator4_IC_ghkub0qpne ; real_T Bz_Gain_h3x1lv12d0 ; real_T
Kx_Gain_jnwygpt15o ; real_T Ky_Gain_oq5c1cqtk1 ; real_T Kz_Gain_p2xgpr45i5 ;
real_T Mx_Gain_js3woskvp0 ; real_T My_Gain_hdpbuksf2w ; real_T
Mz_Gain_hxseeguaop ; real_T Bx_Gain_n2c2zc5fut ; real_T By_Gain_gzq4wqubv2 ;
real_T Bz_Gain_e0agfihwsa ; real_T DiscreteTimeIntegrator1_gainval_k0tywldiut
; real_T DiscreteTimeIntegrator1_IC_lfcgd1m32e ; real_T
DiscreteTimeIntegrator3_gainval_e0sgkyvmac ; real_T
DiscreteTimeIntegrator3_IC_mepeuuspom ; real_T
DiscreteTimeIntegrator5_gainval_gpu3xgwyyp ; real_T
DiscreteTimeIntegrator5_IC_jzt432kxca ; real_T Kx_Gain_cmgxch1a1l ; real_T
Ky_Gain_mqjlhklks4 ; real_T Kz_Gain_asqeevkcou ; real_T Mx_Gain_awidn5sofk ;
real_T My_Gain_pjfuxtoldg ; real_T Mz_Gain_cvkeec532r ; real_T
FromWs_Time0_dgntxkplur [ 8 ] ; real_T FromWs_Data0_n4fvl010iy [ 24 ] ;
real_T FromWs_Time0_dzcgme01l0 [ 10 ] ; real_T FromWs_Data0_gnhlpqyxpe [ 60 ]
; real_T FromWs_Time0_fpralrmcvh [ 18 ] ; real_T FromWs_Data0_bqye40vj0v [
108 ] ; real_T Constant_Value [ 3 ] ; real_T Bias_Value [ 3 ] ; real_T
Constant_Value_gzdzpzihxe [ 6 ] ; real_T Bias_Value_faygct0s2b [ 3 ] ; real_T
Constant_Value_f1t4kl0x5v [ 6 ] ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_pp_GetDWork ( ) ; extern void
mr_pp_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_pp_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * pp_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
