#include "rt_logging_mmi.h"
#include "pp_capi.h"
#include <math.h>
#include "pp.h"
#include "pp_private.h"
#include "pp_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 5 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.3 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void pklwprvumn ( aiqe041hfp * * pEmxArray , int32_T
numDimensions ) ; static void nonxxy2aaj ( gmphnpqbau * * pEmxArray , int32_T
numDimensions ) ; static void bffihwlolx ( gmphnpqbau * * pEmxArray , int32_T
numDimensions ) ; static void gcymgoawvt ( iuu1xhv34c * pStruct ) ; static
void mbyisy0srk ( mpugqnqx0d * * pEmxArray , int32_T numDimensions ) ; static
void lt0afzb3w0aj ( nnaoaxiu0k * pStruct ) ; static void lt0afzb3w0a (
p4befnw0fh * pStruct ) ; static void ijhprofas3 ( p4befnw0fh pMatrix [ 10 ] )
; static void lt0afzb3w0 ( n31brccd3l * pStruct ) ; static void lt0afzb3w0ajx
( bkb4oam1gt * pStruct ) ; static void lt0afzb3w0ajxvi ( mjxrc5f0p2 * pStruct
) ; static void ijhprofas30 ( mjxrc5f0p2 pMatrix [ 10 ] ) ; static void
lt0afzb3w0ajxv ( bgzkddb0t0 * pStruct ) ; static void ijhprofas30j (
nnaoaxiu0k pMatrix [ 11 ] ) ; static void kxnikqa5rt ( iuu1xhv34c pMatrix [
10 ] ) ; static void oh5wtc5vzi ( p1rn1vqdri * pStruct ) ; static void
dlri1bj0a1 ( a3umz4zmr0 * pStruct ) ; static void erzqjcuyqu ( aiqe041hfp *
emxArray , int32_T oldNumel ) ; static void fqvnblve2d ( gmphnpqbau *
emxArray , int32_T oldNumel ) ; static void pzzfddv2ss ( gmphnpqbau *
emxArray , int32_T oldNumel ) ; static void gekls3w3q1 ( mpugqnqx0d *
emxArray , int32_T oldNumel ) ; static void lhqarjzgep ( mpugqnqx0d * *
pEmxArray ) ; static nnaoaxiu0k * jcl5zhq44w ( nnaoaxiu0k * obj , real_T
maxElements ) ; static void n3y5ukwimu ( aiqe041hfp * * pEmxArray ) ; static
p4befnw0fh * kx0xummk5s ( p4befnw0fh * obj ) ; static p4befnw0fh *
kx0xummk5s0 ( p4befnw0fh * obj ) ; static p4befnw0fh * kx0xummk5s0w (
p4befnw0fh * obj ) ; static p4befnw0fh * kx0xummk5s0wv ( p4befnw0fh * obj ) ;
static p4befnw0fh * kx0xummk5s0wvo ( p4befnw0fh * obj ) ; static p4befnw0fh *
kx0xummk5s0wvom ( p4befnw0fh * obj ) ; static p4befnw0fh * i5x4ndinqb (
p4befnw0fh * obj ) ; static p4befnw0fh * kcowoadhlc ( p4befnw0fh * obj ) ;
static p4befnw0fh * pfu1w2tn2p ( p4befnw0fh * obj ) ; static n31brccd3l *
fg132zcyjk ( n31brccd3l * obj ) ; static void degn13zh3co ( uint32_T mt [ 625
] , uint32_T u [ 2 ] ) ; static boolean_T l4pwv5u2nn ( const uint32_T mt [
625 ] ) ; static real_T odltdnn0ynit ( uint32_T state [ 625 ] ) ; static void
kpzcr4m3le ( real_T r [ 5 ] , nblp1l3k1r * localDW ) ; static mjxrc5f0p2 *
gf4nntrlna ( mjxrc5f0p2 * obj ) ; static mjxrc5f0p2 * cadc1xbmi1 ( mjxrc5f0p2
* obj ) ; static mjxrc5f0p2 * aounx3gniz ( mjxrc5f0p2 * obj ) ; static
mjxrc5f0p2 * mjqa0tkv1p ( mjxrc5f0p2 * obj ) ; static mjxrc5f0p2 * c4jc1zccqt
( mjxrc5f0p2 * obj ) ; static mjxrc5f0p2 * epy22qqksb ( mjxrc5f0p2 * obj ) ;
static mjxrc5f0p2 * j30ynkppsf ( mjxrc5f0p2 * obj ) ; static mjxrc5f0p2 *
e3lqg3jwwt ( mjxrc5f0p2 * obj ) ; static void mwusr4xyjp ( bgzkddb0t0 * obj ,
mjxrc5f0p2 * iobj_0 , nblp1l3k1r * localDW ) ; static boolean_T iwsovvg252 (
const aiqe041hfp * a , const aiqe041hfp * b ) ; static real_T kgp0kxhejg (
bgzkddb0t0 * obj , const aiqe041hfp * bodyname ) ; static iuu1xhv34c *
axi3tqwpm3 ( const iuu1xhv34c * obj , iuu1xhv34c * iobj_0 ) ; static void
lj1gie5tpj ( bgzkddb0t0 * obj , p4befnw0fh * bodyin , const aiqe041hfp *
parentName , nnaoaxiu0k * iobj_0 , iuu1xhv34c * iobj_1 , mjxrc5f0p2 * iobj_2
) ; static void l5awc5seit ( p1rn1vqdri * obj , n31brccd3l * rigidbodytree ,
bgzkddb0t0 * iobj_0 , nnaoaxiu0k * iobj_1 , iuu1xhv34c * iobj_2 , mjxrc5f0p2
* iobj_3 , nblp1l3k1r * localDW ) ; static void ekk3jsv0jl ( a3umz4zmr0 * obj
, nblp1l3k1r * localDW ) ; static void kjfnwyvwvk ( bgzkddb0t0 * obj ,
gmphnpqbau * limits ) ; static void pjcqxll5fb ( const boolean_T x [ 6 ] ,
int32_T i_data [ ] , int32_T * i_size ) ; static void hlzq4q20jr ( real_T *
tstart_tv_sec , real_T * tstart_tv_nsec , nblp1l3k1r * localDW ) ; static
void pyvcyjnsbr ( bgzkddb0t0 * obj , mjxrc5f0p2 * body , gmphnpqbau * indices
) ; static void g41mplts0w ( gmphnpqbau * * pEmxArray ) ; static void
h2sq52n2mg ( bgzkddb0t0 * obj , mjxrc5f0p2 * body1 , mjxrc5f0p2 * body2 ,
gmphnpqbau * indices ) ; static void hloxgsbgze ( const real_T A [ 36 ] ,
const gmphnpqbau * B_p , gmphnpqbau * C ) ; static void lgn1dnuopl ( const
iuu1xhv34c * obj , real_T ax [ 3 ] ) ; static void cwhfrdau3r ( real_T
varargin_1 , real_T varargin_2 , real_T varargin_3 , real_T varargin_4 ,
real_T varargin_5 , real_T varargin_6 , real_T varargin_7 , real_T varargin_8
, real_T varargin_9 , real_T y [ 9 ] ) ; static void iuuo3fie31 ( bgzkddb0t0
* obj , const real_T qv [ 6 ] , const aiqe041hfp * body1Name , real_T T_data
[ ] , int32_T T_size [ 2 ] , gmphnpqbau * Jac ) ; static creal_T jljucs33ij (
const creal_T x ) ; static real_T cuejmghwmi ( int32_T n , const real_T x [ 9
] , int32_T ix0 ) ; static real_T cuejmghwmip ( const real_T x [ 3 ] ,
int32_T ix0 ) ; static real_T bcgfpbxcdf ( int32_T n , const real_T x [ 9 ] ,
int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 ) ; static void jrtl1otyi3 (
int32_T n , real_T a , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 ,
real_T b_y [ 9 ] ) ; static void jrtl1otyi32zf ( int32_T n , real_T a , const
real_T x [ 9 ] , int32_T ix0 , real_T y [ 3 ] , int32_T iy0 ) ; static void
khy54hscnw ( real_T a , real_T b , real_T * b_a , real_T * b_b , real_T * c ,
real_T * s ) ; static void jrtl1otyi32z ( int32_T n , real_T a , const real_T
x [ 3 ] , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 , real_T b_y [ 9 ]
) ; static void h5lqcabgsc ( const real_T x [ 9 ] , int32_T ix0 , int32_T iy0
, real_T c , real_T s , real_T b_x [ 9 ] ) ; static void hsewtwtvu0 ( const
real_T x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T b_x [ 9 ] ) ; static void
l5iojt0h0r ( const real_T A [ 9 ] , real_T U [ 9 ] , real_T s [ 3 ] , real_T
V [ 9 ] ) ; static void g13mbhvrln ( const real_T Td [ 16 ] , const real_T
T_data [ ] , const int32_T T_size [ 2 ] , real_T errorvec [ 6 ] ) ; static
void hloxgsbgzep ( const real_T A [ 6 ] , const gmphnpqbau * B_e , gmphnpqbau
* C ) ; static void em3tin04ml ( ikljpirxgg * * pEmxArray , int32_T
numDimensions ) ; static real_T iendijjns1b ( const real_T x [ 6 ] ) ; static
void nd0r0ie50r ( ikljpirxgg * * pEmxArray ) ; static real_T h5dznsjt0b (
real_T tstart_tv_sec , real_T tstart_tv_nsec , nblp1l3k1r * localDW ) ;
static void dc3epolyb3 ( ikljpirxgg * emxArray , int32_T oldNumel ) ; static
void hrl1vrbs3x ( const real_T A [ 36 ] , const gmphnpqbau * B_i , real_T
Y_data [ ] , int32_T * Y_size ) ; static void br25apk0ss ( pfxij5ag5q * obj ,
real_T xSol [ 6 ] , exuekx0jci * exitFlag , real_T * en , real_T * iter ,
nblp1l3k1r * localDW ) ; static void kpzcr4m3lem ( real_T varargin_1 ,
gmphnpqbau * r , nblp1l3k1r * localDW ) ; static boolean_T pa2rdwbqrp ( const
ikljpirxgg * x ) ; static real_T odltdnn0ynite ( uint32_T state [ 625 ] ) ;
static void lvurcv3f1k ( const real_T varargin_1 [ 2 ] , gmphnpqbau * r ,
nblp1l3k1r * localDW ) ; static void kvsdoegvof ( pfxij5ag5q * obj , const
real_T seed [ 6 ] , real_T xSol [ 6 ] , real_T * solutionInfo_Iterations ,
real_T * solutionInfo_RRAttempts , real_T * solutionInfo_Error , real_T *
solutionInfo_ExitFlag , char_T solutionInfo_Status_data [ ] , int32_T
solutionInfo_Status_size [ 2 ] , nblp1l3k1r * localDW ) ; static void
bfzihfdpfs ( dxvn12zbi1 * * pEmxArray , int32_T numDimensions ) ; static void
nq01dghsb3 ( dxvn12zbi1 * emxArray , int32_T oldNumel ) ; static void
i5gxvk04ju ( dxvn12zbi1 * * pEmxArray ) ; static void mxugkksoeo0 (
p1rn1vqdri * obj , real_T initialGuess [ 6 ] , real_T *
solutionInfo_Iterations , real_T * solutionInfo_NumRandomRestarts , real_T *
solutionInfo_PoseErrorNorm , real_T * solutionInfo_ExitFlag , char_T
solutionInfo_Status_data [ ] , int32_T solutionInfo_Status_size [ 2 ] ,
nblp1l3k1r * localDW ) ; static void k4gvakoiat ( p1rn1vqdri * obj , const
real_T tform [ 16 ] , const real_T weights [ 6 ] , const real_T initialGuess
[ 6 ] , real_T QSol [ 6 ] , nblp1l3k1r * localDW ) ; static void hzxjl1owjk (
dpzy5ojkdn * * pEmxArray , int32_T numDimensions ) ; static void ms4rksu5e2 (
dpzy5ojkdn * emxArray , int32_T oldNumel ) ; static void h05qxjqn4o (
dpzy5ojkdn * * pEmxArray ) ; static void gcmqxzug2j ( iuu1xhv34c * pStruct )
; static void mkn3i2o0h0l ( nnaoaxiu0k * pStruct ) ; static void mkn3i2o0h0 (
p4befnw0fh * pStruct ) ; static void kq4eqmmhir ( p4befnw0fh pMatrix [ 10 ] )
; static void mkn3i2o0h0lq ( n31brccd3l * pStruct ) ; static void
mkn3i2o0h0lq0 ( bkb4oam1gt * pStruct ) ; static void mkn3i2o0h0lq0i (
mjxrc5f0p2 * pStruct ) ; static void kq4eqmmhird ( mjxrc5f0p2 pMatrix [ 10 ]
) ; static void mkn3i2o0h0lq0iv ( bgzkddb0t0 * pStruct ) ; static void
kq4eqmmhird4 ( nnaoaxiu0k pMatrix [ 11 ] ) ; static void i4xgixpys2 (
iuu1xhv34c pMatrix [ 10 ] ) ; static void fjcxkve2r0 ( p1rn1vqdri * pStruct )
; static void cckzosyg3e ( a3umz4zmr0 * pStruct ) ; static void k5iyj53mdw (
real_T * x ) ; static void id2zjcvn4o ( real_T * x ) ; static void i213kpnt2j
( const real_T q [ 4 ] , real_T R [ 9 ] ) ; static void h0tx2wzbqd ( const
real_T A [ 9 ] , uint8_T m , real_T F [ 9 ] ) ; static void lz54wyaa0l (
real_T A [ 9 ] , real_T F [ 9 ] ) ; int32_T div_s32_floor ( int32_T numerator
, int32_T denominator ) { int32_T quotient ; uint32_T absDenominator ;
uint32_T absNumerator ; uint32_T tempAbsQuotient ; boolean_T
quotientNeedsNegation ; if ( denominator == 0 ) { quotient = numerator >= 0 ?
MAX_int32_T : MIN_int32_T ; } else { absNumerator = numerator < 0 ? ~ (
uint32_T ) numerator + 1U : ( uint32_T ) numerator ; absDenominator =
denominator < 0 ? ~ ( uint32_T ) denominator + 1U : ( uint32_T ) denominator
; quotientNeedsNegation = ( ( numerator < 0 ) != ( denominator < 0 ) ) ;
tempAbsQuotient = absNumerator / absDenominator ; if ( quotientNeedsNegation
) { absNumerator %= absDenominator ; if ( absNumerator > 0U ) {
tempAbsQuotient ++ ; } } quotient = quotientNeedsNegation ? - ( int32_T )
tempAbsQuotient : ( int32_T ) tempAbsQuotient ; } return quotient ; } static
void pklwprvumn ( aiqe041hfp * * pEmxArray , int32_T numDimensions ) {
aiqe041hfp * emxArray ; int32_T i ; * pEmxArray = ( aiqe041hfp * ) malloc (
sizeof ( aiqe041hfp ) ) ; emxArray = * pEmxArray ; emxArray -> data = (
char_T * ) NULL ; emxArray -> numDimensions = numDimensions ; emxArray ->
size = ( int32_T * ) malloc ( sizeof ( int32_T ) * numDimensions ) ; emxArray
-> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i <
numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
nonxxy2aaj ( gmphnpqbau * * pEmxArray , int32_T numDimensions ) { gmphnpqbau
* emxArray ; int32_T i ; * pEmxArray = ( gmphnpqbau * ) malloc ( sizeof (
gmphnpqbau ) ) ; emxArray = * pEmxArray ; emxArray -> data = ( real_T * )
NULL ; emxArray -> numDimensions = numDimensions ; emxArray -> size = (
int32_T * ) malloc ( sizeof ( int32_T ) * numDimensions ) ; emxArray ->
allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i <
numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
bffihwlolx ( gmphnpqbau * * pEmxArray , int32_T numDimensions ) { gmphnpqbau
* emxArray ; int32_T i ; * pEmxArray = ( gmphnpqbau * ) malloc ( sizeof (
gmphnpqbau ) ) ; emxArray = * pEmxArray ; emxArray -> data = ( real_T * )
NULL ; emxArray -> numDimensions = numDimensions ; emxArray -> size = (
int32_T * ) malloc ( sizeof ( int32_T ) * numDimensions ) ; emxArray ->
allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i <
numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
gcymgoawvt ( iuu1xhv34c * pStruct ) { pklwprvumn ( & pStruct -> Type , 2 ) ;
nonxxy2aaj ( & pStruct -> MotionSubspace , 2 ) ; pklwprvumn ( & pStruct ->
NameInternal , 2 ) ; nonxxy2aaj ( & pStruct -> PositionLimitsInternal , 2 ) ;
bffihwlolx ( & pStruct -> HomePositionInternal , 1 ) ; } static void
mbyisy0srk ( mpugqnqx0d * * pEmxArray , int32_T numDimensions ) { mpugqnqx0d
* emxArray ; int32_T i ; * pEmxArray = ( mpugqnqx0d * ) malloc ( sizeof (
mpugqnqx0d ) ) ; emxArray = * pEmxArray ; emxArray -> data = ( bgo4jcdvyx * *
) NULL ; emxArray -> numDimensions = numDimensions ; emxArray -> size = (
int32_T * ) malloc ( sizeof ( int32_T ) * numDimensions ) ; emxArray ->
allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i <
numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
lt0afzb3w0aj ( nnaoaxiu0k * pStruct ) { mbyisy0srk ( & pStruct ->
CollisionGeometries , 2 ) ; } static void lt0afzb3w0a ( p4befnw0fh * pStruct
) { pklwprvumn ( & pStruct -> NameInternal , 2 ) ; gcymgoawvt ( & pStruct ->
JointInternal ) ; lt0afzb3w0aj ( & pStruct -> CollisionsInternal ) ; } static
void ijhprofas3 ( p4befnw0fh pMatrix [ 10 ] ) { int32_T i ; for ( i = 0 ; i <
10 ; i ++ ) { lt0afzb3w0a ( & pMatrix [ i ] ) ; } } static void lt0afzb3w0 (
n31brccd3l * pStruct ) { lt0afzb3w0a ( & pStruct -> Base ) ; ijhprofas3 (
pStruct -> _pobj0 ) ; } static void lt0afzb3w0ajx ( bkb4oam1gt * pStruct ) {
nonxxy2aaj ( & pStruct -> Limits , 2 ) ; pklwprvumn ( & pStruct -> BodyName ,
2 ) ; bffihwlolx ( & pStruct -> ErrTemp , 1 ) ; bffihwlolx ( & pStruct ->
GradTemp , 1 ) ; } static void lt0afzb3w0ajxvi ( mjxrc5f0p2 * pStruct ) {
pklwprvumn ( & pStruct -> NameInternal , 2 ) ; lt0afzb3w0aj ( & pStruct ->
_pobj0 ) ; gcymgoawvt ( & pStruct -> _pobj1 ) ; } static void ijhprofas30 (
mjxrc5f0p2 pMatrix [ 10 ] ) { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) {
lt0afzb3w0ajxvi ( & pMatrix [ i ] ) ; } } static void lt0afzb3w0ajxv (
bgzkddb0t0 * pStruct ) { lt0afzb3w0ajxvi ( & pStruct -> Base ) ; ijhprofas30
( pStruct -> _pobj0 ) ; } static void ijhprofas30j ( nnaoaxiu0k pMatrix [ 11
] ) { int32_T i ; for ( i = 0 ; i < 11 ; i ++ ) { lt0afzb3w0aj ( & pMatrix [
i ] ) ; } } static void kxnikqa5rt ( iuu1xhv34c pMatrix [ 10 ] ) { int32_T i
; for ( i = 0 ; i < 10 ; i ++ ) { gcymgoawvt ( & pMatrix [ i ] ) ; } } static
void oh5wtc5vzi ( p1rn1vqdri * pStruct ) { nonxxy2aaj ( & pStruct -> Limits ,
2 ) ; lt0afzb3w0ajx ( & pStruct -> _pobj0 ) ; lt0afzb3w0ajxv ( & pStruct ->
_pobj1 ) ; ijhprofas30j ( pStruct -> _pobj2 ) ; kxnikqa5rt ( pStruct ->
_pobj3 ) ; ijhprofas30 ( pStruct -> _pobj4 ) ; } static void dlri1bj0a1 (
a3umz4zmr0 * pStruct ) { lt0afzb3w0 ( & pStruct -> TreeInternal ) ;
oh5wtc5vzi ( & pStruct -> IKInternal ) ; } static void erzqjcuyqu (
aiqe041hfp * emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ;
void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for (
i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size
[ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i = emxArray ->
allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i >
1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( (
uint32_T ) i , sizeof ( char_T ) ) ; if ( emxArray -> data != NULL ) { memcpy
( newData , emxArray -> data , sizeof ( char_T ) * oldNumel ) ; if ( emxArray
-> canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = (
char_T * ) newData ; emxArray -> allocatedSize = i ; emxArray -> canFreeData
= true ; } } static void fqvnblve2d ( gmphnpqbau * emxArray , int32_T
oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel <
0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray ->
numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel
> emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 )
{ i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T
; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( real_T
) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data ,
sizeof ( real_T ) * oldNumel ) ; if ( emxArray -> canFreeData ) { free (
emxArray -> data ) ; } } emxArray -> data = ( real_T * ) newData ; emxArray
-> allocatedSize = i ; emxArray -> canFreeData = true ; } } static void
pzzfddv2ss ( gmphnpqbau * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
calloc ( ( uint32_T ) i , sizeof ( real_T ) ) ; if ( emxArray -> data != NULL
) { memcpy ( newData , emxArray -> data , sizeof ( real_T ) * oldNumel ) ; if
( emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray ->
data = ( real_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void gekls3w3q1 ( mpugqnqx0d * emxArray ,
int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if (
oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray
-> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if (
newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if (
i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i =
MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( bgo4jcdvyx * ) ) ; if ( emxArray -> data != NULL ) { memcpy (
newData , ( void * ) emxArray -> data , sizeof ( bgo4jcdvyx * ) * oldNumel )
; if ( emxArray -> canFreeData ) { free ( ( void * ) emxArray -> data ) ; } }
emxArray -> data = ( bgo4jcdvyx * * ) newData ; emxArray -> allocatedSize = i
; emxArray -> canFreeData = true ; } } static void lhqarjzgep ( mpugqnqx0d *
* pEmxArray ) { if ( * pEmxArray != ( mpugqnqx0d * ) NULL ) { if ( ( ( *
pEmxArray ) -> data != ( bgo4jcdvyx * * ) NULL ) && ( * pEmxArray ) ->
canFreeData ) { free ( ( void * ) ( * pEmxArray ) -> data ) ; } free ( ( *
pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( mpugqnqx0d * )
NULL ; } } static nnaoaxiu0k * jcl5zhq44w ( nnaoaxiu0k * obj , real_T
maxElements ) { bgo4jcdvyx * obj_p ; mpugqnqx0d * e ; nnaoaxiu0k * b_obj ;
real_T c ; int32_T b_i ; int32_T d ; mbyisy0srk ( & e , 2 ) ; obj -> Size =
0.0 ; b_obj = obj ; obj -> MaxElements = maxElements ; b_i = e -> size [ 0 ]
* e -> size [ 1 ] ; e -> size [ 1 ] = ( int32_T ) obj -> MaxElements ;
gekls3w3q1 ( e , b_i ) ; b_i = obj -> CollisionGeometries -> size [ 0 ] * obj
-> CollisionGeometries -> size [ 1 ] ; obj -> CollisionGeometries -> size [ 0
] = 1 ; obj -> CollisionGeometries -> size [ 1 ] = e -> size [ 1 ] ;
gekls3w3q1 ( obj -> CollisionGeometries , b_i ) ; obj_p = & obj -> _pobj0 ; c
= obj -> MaxElements ; d = ( int32_T ) c - 1 ; lhqarjzgep ( & e ) ; for ( b_i
= 0 ; b_i <= d ; b_i ++ ) { obj -> CollisionGeometries -> data [ b_i ] =
obj_p ; } return b_obj ; } static void n3y5ukwimu ( aiqe041hfp * * pEmxArray
) { if ( * pEmxArray != ( aiqe041hfp * ) NULL ) { if ( ( ( * pEmxArray ) ->
data != ( char_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( *
pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( aiqe041hfp * ) NULL ; } } static p4befnw0fh *
kx0xummk5s ( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ; p4befnw0fh
* b_obj ; real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ;
char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp
[ 6 ] ; boolean_T b_bool ; static const real_T tmp_p [ 36 ] = { 0.0 , 0.0 ,
0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static const
int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0
, 0 , 1 } ; static const char_T tmp_i [ 26 ] = { 'b' , 'a' , 's' , 'e' , '_'
, 'l' , 'i' , 'n' , 'k' , '-' , 'b' , 'a' , 's' , 'e' , '_' , 'f' , 'i' , 'x'
, 'e' , 'd' , '_' , 'j' , 'o' , 'i' , 'n' , 't' } ; static const char_T tmp_m
[ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = {
'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [
9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const
real_T tmp_f [ 16 ] = { - 1.0 , 2.0682310711021444E-13 , - 0.0 , 0.0 , -
2.0682310711021444E-13 , - 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 } ; static const real_T tmp_c [ 16 ] = { 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 }
; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] *
obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ;
obj -> NameInternal -> size [ 1 ] = 4 ; erzqjcuyqu ( obj -> NameInternal ,
b_kstr ) ; obj -> NameInternal -> data [ 0 ] = 'b' ; obj -> NameInternal ->
data [ 1 ] = 'a' ; obj -> NameInternal -> data [ 2 ] = 's' ; obj ->
NameInternal -> data [ 3 ] = 'e' ; obj -> ParentIndex = 1.0 ; obj ->
MassInternal = 0.0 ; obj -> CenterOfMassInternal [ 0 ] = 0.0 ; obj ->
CenterOfMassInternal [ 1 ] = 0.0 ; obj -> CenterOfMassInternal [ 2 ] = 0.0 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = 0.0 ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj ->
SpatialInertia [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> JointInternal .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
JointInternal . NameInternal -> size [ 0 ] * obj -> JointInternal .
NameInternal -> size [ 1 ] ; obj -> JointInternal . NameInternal -> size [ 0
] = 1 ; obj -> JointInternal . NameInternal -> size [ 1 ] = 26 ; erzqjcuyqu (
obj -> JointInternal . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
26 ; b_kstr ++ ) { obj -> JointInternal . NameInternal -> data [ b_kstr ] =
tmp_i [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 5 ; erzqjcuyqu ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; }
pklwprvumn ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_g [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> JointInternal . VelocityNumber = 0.0 ; obj
-> JointInternal . PositionNumber = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_f [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = 0.0 ; } obj -> JointInternal . InTree = true ; b_kstr = obj
-> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal .
PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr = obj
-> JointInternal . HomePositionInternal -> size [ 0 ] ; obj -> JointInternal
. HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal
. HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh * kx0xummk5s0
( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ; p4befnw0fh * b_obj ;
real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9
] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 13 ] = { 's' , 'h' , 'o' , 'u'
, 'l' , 'd' , 'e' , 'r' , '_' , 'l' , 'i' , 'n' , 'k' } ; static const real_T
tmp_e [ 9 ] = { 0.010267495893 , 0.0 , 0.0 , 0.0 , 0.010267495893 , 0.0 , 0.0
, 0.0 , 0.00666 } ; static const real_T tmp_i [ 36 ] = { 0.010267495893 , 0.0
, 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.010267495893 , 0.0 , 0.0 , 0.0 , - 0.0 ,
0.0 , 0.0 , 0.00666 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 3.7 , 0.0 , 0.0
, - 0.0 , 0.0 , 0.0 , 0.0 , 3.7 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 3.7 }
; static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0
, 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g [ 18 ] = { 's' , 'h' ,
'o' , 'u' , 'l' , 'd' , 'e' , 'r' , '_' , 'p' , 'a' , 'n' , '_' , 'j' , 'o' ,
'i' , 'n' , 't' } ; static const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o'
, 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f [ 9 ] = { 'p' , 'r' ,
'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_c [ 16 ]
= { 1.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 0.0 , 0.089159 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0
, 1.0 } ; static const real_T tmp_b [ 36 ] = { 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj
-> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 13 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 13
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> ParentIndex = 1.0 ; obj -> MassInternal = 3.7 ; obj ->
CenterOfMassInternal [ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ;
obj -> CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ;
b_kstr ++ ) { obj -> InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] =
tmp_i [ b_kstr ] ; } obj -> JointInternal . InTree = false ; for ( b_kstr = 0
; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . JointToParentTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ]
; } b_kstr = obj -> JointInternal . NameInternal -> size [ 0 ] * obj ->
JointInternal . NameInternal -> size [ 1 ] ; obj -> JointInternal .
NameInternal -> size [ 0 ] = 1 ; obj -> JointInternal . NameInternal -> size
[ 1 ] = 18 ; erzqjcuyqu ( obj -> JointInternal . NameInternal , b_kstr ) ;
for ( b_kstr = 0 ; b_kstr < 18 ; b_kstr ++ ) { obj -> JointInternal .
NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 8 ; erzqjcuyqu ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_j [ b_kstr ] ; } pklwprvumn ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
n3y5ukwimu ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [
1 ] = 3.1415926535897931 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ;
poslim_data [ 1 ] = 0.5 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj ->
JointInternal . VelocityNumber = 0.0 ; obj -> JointInternal . PositionNumber
= 0.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] * obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal . InTree = true ;
b_kstr = obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = - 6.28318530718 ; obj -> JointInternal
. PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 6.28318530718 ; obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; b_kstr =
obj -> JointInternal . HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
JointInternal . HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh *
kx0xummk5s0w ( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ;
p4befnw0fh * b_obj ; real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T
loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ;
int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 14 ] = {
'u' , 'p' , 'p' , 'e' , 'r' , '_' , 'a' , 'r' , 'm' , '_' , 'l' , 'i' , 'n' ,
'k' } ; static const real_T tmp_e [ 9 ] = { 0.88490187591000014 , 0.0 , 0.0 ,
0.0 , 0.88490187591000014 , 0.0 , 0.0 , 0.0 , 0.0151074 } ; static const
real_T tmp_i [ 36 ] = { 0.88490187591000014 , 0.0 , 0.0 , 0.0 , -
2.3500400000000004 , 0.0 , 0.0 , 0.88490187591000014 , 0.0 ,
2.3500400000000004 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0151074 , - 0.0 , 0.0 , 0.0
, 0.0 , 2.3500400000000004 , - 0.0 , 8.393 , 0.0 , 0.0 , - 2.3500400000000004
, 0.0 , 0.0 , 0.0 , 8.393 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 8.393 } ;
static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g [ 19 ] = { 's' , 'h' ,
'o' , 'u' , 'l' , 'd' , 'e' , 'r' , '_' , 'l' , 'i' , 'f' , 't' , '_' , 'j' ,
'o' , 'i' , 'n' , 't' } ; static const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v'
, 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f [ 9 ] = { 'p' ,
'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_c [
16 ] = { 1.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.13585 , 0.0 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0
, 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0
, 0.0 , 1.0 } ; static const real_T tmp_b [ 36 ] = { 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr =
obj -> NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj
-> NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 14 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> ParentIndex = 3.0 ; obj -> MassInternal = 8.393 ; obj ->
CenterOfMassInternal [ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ;
obj -> CenterOfMassInternal [ 2 ] = 0.28 ; for ( b_kstr = 0 ; b_kstr < 9 ;
b_kstr ++ ) { obj -> InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] =
tmp_i [ b_kstr ] ; } obj -> JointInternal . InTree = false ; for ( b_kstr = 0
; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . JointToParentTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ]
; } b_kstr = obj -> JointInternal . NameInternal -> size [ 0 ] * obj ->
JointInternal . NameInternal -> size [ 1 ] ; obj -> JointInternal .
NameInternal -> size [ 0 ] = 1 ; obj -> JointInternal . NameInternal -> size
[ 1 ] = 19 ; erzqjcuyqu ( obj -> JointInternal . NameInternal , b_kstr ) ;
for ( b_kstr = 0 ; b_kstr < 19 ; b_kstr ++ ) { obj -> JointInternal .
NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 8 ; erzqjcuyqu ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_j [ b_kstr ] ; } pklwprvumn ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
n3y5ukwimu ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [
1 ] = 3.1415926535897931 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ;
poslim_data [ 1 ] = 0.5 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj ->
JointInternal . VelocityNumber = 0.0 ; obj -> JointInternal . PositionNumber
= 0.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] * obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal . InTree = true ;
b_kstr = obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = - 6.28318530718 ; obj -> JointInternal
. PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 6.28318530718 ; obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr =
obj -> JointInternal . HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
JointInternal . HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh *
kx0xummk5s0wv ( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ;
p4befnw0fh * b_obj ; real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T
loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ;
int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 12 ] = {
'f' , 'o' , 'r' , 'e' , 'a' , 'r' , 'm' , '_' , 'l' , 'i' , 'n' , 'k' } ;
static const real_T tmp_e [ 9 ] = { 0.19163081355599998 , 0.0 , 0.0 , 0.0 ,
0.19163081355599998 , 0.0 , 0.0 , 0.0 , 0.004095 } ; static const real_T
tmp_i [ 36 ] = { 0.19163081355599998 , 0.0 , 0.0 , 0.0 , - 0.56875 , 0.0 ,
0.0 , 0.19163081355599998 , 0.0 , 0.56875 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.004095 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.56875 , - 0.0 , 2.275 , 0.0 , 0.0 , -
0.56875 , 0.0 , 0.0 , 0.0 , 2.275 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 ,
2.275 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g [ 11 ] = { 'e'
, 'l' , 'b' , 'o' , 'w' , '_' , 'j' , 'o' , 'i' , 'n' , 't' } ; static const
char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ;
static const char_T tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' ,
'i' , 'c' } ; static const real_T tmp_c [ 16 ] = { 4.8965888601467475E-12 ,
0.0 , - 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
4.8965888601467475E-12 , 0.0 , 0.0 , - 0.1197 , 0.425 , 1.0 } ; static const
real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T tmp_b [ 36 ]
= { 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; int32_T
exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] * obj ->
NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ; obj ->
NameInternal -> size [ 1 ] = 12 ; erzqjcuyqu ( obj -> NameInternal , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 12 ; b_kstr ++ ) { obj -> NameInternal -> data
[ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 4.0 ; obj ->
MassInternal = 2.275 ; obj -> CenterOfMassInternal [ 0 ] = 0.0 ; obj ->
CenterOfMassInternal [ 1 ] = 0.0 ; obj -> CenterOfMassInternal [ 2 ] = 0.25 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj
-> SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; } obj -> JointInternal .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = obj ->
JointInternal . NameInternal -> size [ 0 ] * obj -> JointInternal .
NameInternal -> size [ 1 ] ; obj -> JointInternal . NameInternal -> size [ 0
] = 1 ; obj -> JointInternal . NameInternal -> size [ 1 ] = 11 ; erzqjcuyqu (
obj -> JointInternal . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
11 ; b_kstr ++ ) { obj -> JointInternal . NameInternal -> data [ b_kstr ] =
tmp_g [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; erzqjcuyqu ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; }
pklwprvumn ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_j [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_f [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> JointInternal . VelocityNumber = 0.0 ; obj
-> JointInternal . PositionNumber = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal . InTree = true ;
b_kstr = obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = - 3.14159265359 ; obj -> JointInternal
. PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 3.14159265359 ; obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr =
obj -> JointInternal . HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
JointInternal . HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh *
kx0xummk5s0wvo ( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ;
p4befnw0fh * b_obj ; real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T
loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ;
int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 12 ] = {
'w' , 'r' , 'i' , 's' , 't' , '_' , '1' , '_' , 'l' , 'i' , 'n' , 'k' } ;
static const real_T tmp_e [ 9 ] = { 0.111172755531 , 0.0 , 0.0 , 0.0 ,
0.111172755531 , 0.0 , 0.0 , 0.0 , 0.21942 } ; static const real_T tmp_i [ 36
] = { 0.111172755531 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.111172755531 ,
0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.21942 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, - 0.0 , 1.219 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 1.219 , 0.0 , 0.0 , -
0.0 , 0.0 , 0.0 , 0.0 , 1.219 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0
, 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const
char_T tmp_g [ 13 ] = { 'w' , 'r' , 'i' , 's' , 't' , '_' , '1' , '_' , 'j' ,
'o' , 'i' , 'n' , 't' } ; static const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v'
, 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f [ 9 ] = { 'p' ,
'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_c [
16 ] = { 4.8965888601467475E-12 , 0.0 , - 1.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 4.8965888601467475E-12 , 0.0 , 0.0 , 0.0 , 0.39225 , 1.0 } ;
static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const real_T
tmp_b [ 36 ] = { 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 }
; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] *
obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ;
obj -> NameInternal -> size [ 1 ] = 12 ; erzqjcuyqu ( obj -> NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 12 ; b_kstr ++ ) { obj -> NameInternal
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 5.0 ; obj ->
MassInternal = 1.219 ; obj -> CenterOfMassInternal [ 0 ] = 0.0 ; obj ->
CenterOfMassInternal [ 1 ] = 0.0 ; obj -> CenterOfMassInternal [ 2 ] = 0.0 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj
-> SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; } obj -> JointInternal .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = obj ->
JointInternal . NameInternal -> size [ 0 ] * obj -> JointInternal .
NameInternal -> size [ 1 ] ; obj -> JointInternal . NameInternal -> size [ 0
] = 1 ; obj -> JointInternal . NameInternal -> size [ 1 ] = 13 ; erzqjcuyqu (
obj -> JointInternal . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
13 ; b_kstr ++ ) { obj -> JointInternal . NameInternal -> data [ b_kstr ] =
tmp_g [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 8 ; erzqjcuyqu ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_j [ b_kstr ] ; }
pklwprvumn ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_j [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_f [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> JointInternal . VelocityNumber = 0.0 ; obj
-> JointInternal . PositionNumber = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal . InTree = true ;
b_kstr = obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = - 6.28318530718 ; obj -> JointInternal
. PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 6.28318530718 ; obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr =
obj -> JointInternal . HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
JointInternal . HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh *
kx0xummk5s0wvom ( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ;
p4befnw0fh * b_obj ; real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T
loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ;
int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T tmp_p [ 12 ] = {
'w' , 'r' , 'i' , 's' , 't' , '_' , '2' , '_' , 'l' , 'i' , 'n' , 'k' } ;
static const real_T tmp_e [ 9 ] = { 0.111172755531 , 0.0 , 0.0 , 0.0 ,
0.111172755531 , 0.0 , 0.0 , 0.0 , 0.21942 } ; static const real_T tmp_i [ 36
] = { 0.111172755531 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.111172755531 ,
0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.21942 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, - 0.0 , 1.219 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 1.219 , 0.0 , 0.0 , -
0.0 , 0.0 , 0.0 , 0.0 , 1.219 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0
, 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const
char_T tmp_g [ 13 ] = { 'w' , 'r' , 'i' , 's' , 't' , '_' , '2' , '_' , 'j' ,
'o' , 'i' , 'n' , 't' } ; static const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v'
, 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f [ 9 ] = { 'p' ,
'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const real_T tmp_c [
16 ] = { 4.8965888601467475E-12 , 1.0 , - 0.0 , 0.0 , - 1.0 ,
4.8965888601467475E-12 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.093 ,
0.0 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ;
static const real_T tmp_b [ 36 ] = { 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 12 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 12
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> ParentIndex = 6.0 ; obj -> MassInternal = 1.219 ; obj ->
CenterOfMassInternal [ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ;
obj -> CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ;
b_kstr ++ ) { obj -> InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] =
tmp_i [ b_kstr ] ; } obj -> JointInternal . InTree = false ; for ( b_kstr = 0
; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . JointToParentTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ]
; } b_kstr = obj -> JointInternal . NameInternal -> size [ 0 ] * obj ->
JointInternal . NameInternal -> size [ 1 ] ; obj -> JointInternal .
NameInternal -> size [ 0 ] = 1 ; obj -> JointInternal . NameInternal -> size
[ 1 ] = 13 ; erzqjcuyqu ( obj -> JointInternal . NameInternal , b_kstr ) ;
for ( b_kstr = 0 ; b_kstr < 13 ; b_kstr ++ ) { obj -> JointInternal .
NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 8 ; erzqjcuyqu ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_j [ b_kstr ] ; } pklwprvumn ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
n3y5ukwimu ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [
1 ] = 3.1415926535897931 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ;
poslim_data [ 1 ] = 0.5 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj ->
JointInternal . VelocityNumber = 0.0 ; obj -> JointInternal . PositionNumber
= 0.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] * obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal . InTree = true ;
b_kstr = obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = - 6.28318530718 ; obj -> JointInternal
. PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 6.28318530718 ; obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; b_kstr =
obj -> JointInternal . HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
JointInternal . HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh * i5x4ndinqb
( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ; p4befnw0fh * b_obj ;
real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9
] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 12 ] = { 'w' , 'r' , 'i' , 's'
, 't' , '_' , '3' , '_' , 'l' , 'i' , 'n' , 'k' } ; static const real_T tmp_e
[ 9 ] = { 0.0171364731454 , 0.0 , 0.0 , 0.0 , 0.0171364731454 , 0.0 , 0.0 ,
0.0 , 0.033822 } ; static const real_T tmp_i [ 36 ] = { 0.0171364731454 , 0.0
, 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0171364731454 , 0.0 , 0.0 , 0.0 , - 0.0 ,
0.0 , 0.0 , 0.033822 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.1879 , 0.0 ,
0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.1879 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0
, 0.1879 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g [ 13 ] = {
'w' , 'r' , 'i' , 's' , 't' , '_' , '3' , '_' , 'j' , 'o' , 'i' , 'n' , 't' }
; static const char_T tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't'
, 'e' } ; static const char_T tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' ,
'a' , 't' , 'i' , 'c' } ; static const real_T tmp_c [ 16 ] = { 1.0 , 0.0 , -
0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.09465 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0
, 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ;
static const real_T tmp_b [ 36 ] = { 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 12 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 12
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> ParentIndex = 7.0 ; obj -> MassInternal = 0.1879 ; obj ->
CenterOfMassInternal [ 0 ] = 0.0 ; obj -> CenterOfMassInternal [ 1 ] = 0.0 ;
obj -> CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ;
b_kstr ++ ) { obj -> InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; } for (
b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> SpatialInertia [ b_kstr ] =
tmp_i [ b_kstr ] ; } obj -> JointInternal . InTree = false ; for ( b_kstr = 0
; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal . JointToParentTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> JointInternal . ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ]
; } b_kstr = obj -> JointInternal . NameInternal -> size [ 0 ] * obj ->
JointInternal . NameInternal -> size [ 1 ] ; obj -> JointInternal .
NameInternal -> size [ 0 ] = 1 ; obj -> JointInternal . NameInternal -> size
[ 1 ] = 13 ; erzqjcuyqu ( obj -> JointInternal . NameInternal , b_kstr ) ;
for ( b_kstr = 0 ; b_kstr < 13 ; b_kstr ++ ) { obj -> JointInternal .
NameInternal -> data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr = obj ->
JointInternal . Type -> size [ 0 ] * obj -> JointInternal . Type -> size [ 1
] ; obj -> JointInternal . Type -> size [ 0 ] = 1 ; obj -> JointInternal .
Type -> size [ 1 ] = 8 ; erzqjcuyqu ( obj -> JointInternal . Type , b_kstr )
; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { obj -> JointInternal . Type
-> data [ b_kstr ] = tmp_j [ b_kstr ] ; } pklwprvumn ( & switch_expression ,
2 ) ; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj -> JointInternal . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression ,
b_kstr ) ; loop_ub = obj -> JointInternal . Type -> size [ 1 ] - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr =
0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_j [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_f [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
n3y5ukwimu ( & switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [
1 ] = 3.1415926535897931 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case
1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ]
= 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ;
poslim_data [ 1 ] = 0.5 ; obj -> JointInternal . VelocityNumber = 1.0 ; obj
-> JointInternal . PositionNumber = 1.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ;
default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [
b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj ->
JointInternal . VelocityNumber = 0.0 ; obj -> JointInternal . PositionNumber
= 0.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> JointInternal .
MotionSubspace -> size [ 0 ] * obj -> JointInternal . MotionSubspace -> size
[ 1 ] ; obj -> JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj ->
JointInternal . MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj ->
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> JointInternal . MotionSubspace -> data [ b_kstr ] =
msubspace_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] * obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = tmp_b [ b_kstr ] ; } obj -> JointInternal . InTree = true ;
b_kstr = obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = - 6.28318530718 ; obj -> JointInternal
. PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 6.28318530718 ; obj -> JointInternal
. JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [
1 ] = 1.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr =
obj -> JointInternal . HomePositionInternal -> size [ 0 ] ; obj ->
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
JointInternal . HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh * kcowoadhlc
( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ; p4befnw0fh * b_obj ;
real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9
] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 7 ] = { 'e' , 'e' , '_' , 'l'
, 'i' , 'n' , 'k' } ; static const real_T tmp_e [ 36 ] = { 0.0 , 0.0 , 0.0 ,
0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , -
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static const int8_T
tmp_i [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
1 } ; static const char_T tmp_m [ 14 ] = { 'e' , 'e' , '_' , 'f' , 'i' , 'x'
, 'e' , 'd' , '_' , 'j' , 'o' , 'i' , 'n' , 't' } ; static const char_T tmp_g
[ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_j [ 8 ] = {
'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_f [
9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const
real_T tmp_c [ 16 ] = { 4.8965888601467475E-12 , 1.0 , - 0.0 , 0.0 , - 1.0 ,
4.8965888601467475E-12 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0823 ,
0.0 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ;
int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal -> size [ 0 ] *
obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size [ 0 ] = 1 ;
obj -> NameInternal -> size [ 1 ] = 7 ; erzqjcuyqu ( obj -> NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 7 ; b_kstr ++ ) { obj -> NameInternal
-> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex = 8.0 ; obj ->
MassInternal = 0.0 ; obj -> CenterOfMassInternal [ 0 ] = 0.0 ; obj ->
CenterOfMassInternal [ 1 ] = 0.0 ; obj -> CenterOfMassInternal [ 2 ] = 0.0 ;
for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [ b_kstr
] = 0.0 ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj ->
SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; } obj -> JointInternal .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj ->
JointInternal . NameInternal -> size [ 0 ] * obj -> JointInternal .
NameInternal -> size [ 1 ] ; obj -> JointInternal . NameInternal -> size [ 0
] = 1 ; obj -> JointInternal . NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu (
obj -> JointInternal . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
14 ; b_kstr ++ ) { obj -> JointInternal . NameInternal -> data [ b_kstr ] =
tmp_m [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 5 ; erzqjcuyqu ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_g [ b_kstr ] ; }
pklwprvumn ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_j [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_f [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> JointInternal . VelocityNumber = 0.0 ; obj
-> JointInternal . PositionNumber = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = 0.0 ; } obj -> JointInternal . InTree = true ; b_kstr = obj
-> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal .
PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr = obj
-> JointInternal . HomePositionInternal -> size [ 0 ] ; obj -> JointInternal
. HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal
. HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static p4befnw0fh * pfu1w2tn2p
( p4befnw0fh * obj ) { aiqe041hfp * switch_expression ; p4befnw0fh * b_obj ;
real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9
] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const char_T tmp_p [ 5 ] = { 't' , 'o' , 'o' , 'l'
, '0' } ; static const real_T tmp_e [ 36 ] = { 0.0 , 0.0 , 0.0 , 0.0 , - 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static const int8_T tmp_i [ 16
] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ;
static const char_T tmp_m [ 30 ] = { 'w' , 'r' , 'i' , 's' , 't' , '_' , '3'
, '_' , 'l' , 'i' , 'n' , 'k' , '-' , 't' , 'o' , 'o' , 'l' , '0' , '_' , 'f'
, 'i' , 'x' , 'e' , 'd' , '_' , 'j' , 'o' , 'i' , 'n' , 't' } ; static const
char_T tmp_g [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T
tmp_j [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static
const char_T tmp_f [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' ,
'c' } ; static const real_T tmp_c [ 16 ] = { 1.0 , 0.0 , - 0.0 , 0.0 , - 0.0
, 4.8965888601467475E-12 , - 1.0 , 0.0 , 0.0 , 1.0 , 4.8965888601467475E-12 ,
0.0 , 0.0 , 0.0823 , 0.0 , 1.0 } ; static const real_T tmp_k [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal ->
size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal -> size
[ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 5 ; erzqjcuyqu ( obj ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj
-> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> ParentIndex
= 8.0 ; obj -> MassInternal = 0.0 ; obj -> CenterOfMassInternal [ 0 ] = 0.0 ;
obj -> CenterOfMassInternal [ 1 ] = 0.0 ; obj -> CenterOfMassInternal [ 2 ] =
0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj -> InertiaInternal [
b_kstr ] = 0.0 ; } for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj ->
SpatialInertia [ b_kstr ] = tmp_e [ b_kstr ] ; } obj -> JointInternal .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj ->
JointInternal . NameInternal -> size [ 0 ] * obj -> JointInternal .
NameInternal -> size [ 1 ] ; obj -> JointInternal . NameInternal -> size [ 0
] = 1 ; obj -> JointInternal . NameInternal -> size [ 1 ] = 30 ; erzqjcuyqu (
obj -> JointInternal . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
30 ; b_kstr ++ ) { obj -> JointInternal . NameInternal -> data [ b_kstr ] =
tmp_m [ b_kstr ] ; } b_kstr = obj -> JointInternal . Type -> size [ 0 ] * obj
-> JointInternal . Type -> size [ 1 ] ; obj -> JointInternal . Type -> size [
0 ] = 1 ; obj -> JointInternal . Type -> size [ 1 ] = 5 ; erzqjcuyqu ( obj ->
JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ )
{ obj -> JointInternal . Type -> data [ b_kstr ] = tmp_g [ b_kstr ] ; }
pklwprvumn ( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [
0 ] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> JointInternal . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> JointInternal .
Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> JointInternal . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_j [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_f [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj ->
JointInternal . VelocityNumber = 1.0 ; obj -> JointInternal . PositionNumber
= 1.0 ; obj -> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj ->
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> JointInternal . VelocityNumber = 0.0 ; obj
-> JointInternal . PositionNumber = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; break ; }
b_kstr = obj -> JointInternal . MotionSubspace -> size [ 0 ] * obj ->
JointInternal . MotionSubspace -> size [ 1 ] ; obj -> JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> JointInternal . MotionSubspace ->
size [ 1 ] = 1 ; fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr
) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal .
MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; } b_kstr =
obj -> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr
++ ) { obj -> JointInternal . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> JointInternal .
HomePositionInternal -> size [ 0 ] ; obj -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal .
HomePositionInternal , b_kstr ) ; obj -> JointInternal . HomePositionInternal
-> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_c [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_k [ b_kstr ] ; } b_kstr = obj ->
JointInternal . MotionSubspace -> size [ 0 ] * obj -> JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> JointInternal . MotionSubspace -> size
[ 0 ] = 6 ; obj -> JointInternal . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 6 ; b_kstr ++ ) { obj -> JointInternal . MotionSubspace ->
data [ b_kstr ] = 0.0 ; } obj -> JointInternal . InTree = true ; b_kstr = obj
-> JointInternal . PositionLimitsInternal -> size [ 0 ] * obj ->
JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> JointInternal .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> JointInternal
. PositionLimitsInternal , b_kstr ) ; obj -> JointInternal .
PositionLimitsInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal .
PositionLimitsInternal -> data [ obj -> JointInternal .
PositionLimitsInternal -> size [ 0 ] ] = 0.0 ; obj -> JointInternal .
JointAxisInternal [ 0 ] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 1
] = 0.0 ; obj -> JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr = obj
-> JointInternal . HomePositionInternal -> size [ 0 ] ; obj -> JointInternal
. HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj -> JointInternal
. HomePositionInternal , b_kstr ) ; obj -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; jcl5zhq44w ( & obj ->
CollisionsInternal , 0.0 ) ; return b_obj ; } static n31brccd3l * fg132zcyjk
( n31brccd3l * obj ) { aiqe041hfp * switch_expression ; n31brccd3l * b_obj ;
p4befnw0fh * obj_p ; real_T poslim_data [ 12 ] ; int32_T b_kstr ; int32_T
loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ;
int8_T b_I [ 9 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const char_T
tmp_p [ 9 ] = { 'b' , 'a' , 's' , 'e' , '_' , 'l' , 'i' , 'n' , 'k' } ;
static const real_T tmp_e [ 9 ] = { 0.00443333156 , 0.0 , 0.0 , 0.0 ,
0.00443333156 , 0.0 , 0.0 , 0.0 , 0.0072 } ; static const real_T tmp_i [ 36 ]
= { 0.00443333156 , 0.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.00443333156 , 0.0
, 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0072 , - 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , -
0.0 , 4.0 , 0.0 , 0.0 , - 0.0 , 0.0 , 0.0 , 0.0 , 4.0 , 0.0 , 0.0 , - 0.0 ,
0.0 , 0.0 , 0.0 , 4.0 } ; static const int8_T tmp_m [ 16 ] = { 1 , 0 , 0 , 0
, 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_g
[ 11 ] = { 'w' , 'o' , 'r' , 'l' , 'd' , '_' , 'j' , 'o' , 'i' , 'n' , 't' }
; static const char_T tmp_j [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static
const char_T tmp_f [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_c [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; static const real_T tmp_k [ 16 ] = { 1.0 , 0.0 , - 0.0 , 0.0
, 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ;
static const real_T tmp_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0
, 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; static const char_T
tmp_n [ 5 ] = { 'w' , 'o' , 'r' , 'l' , 'd' } ; static const char_T tmp_l [ 9
] = { 'w' , 'o' , 'r' , 'l' , 'd' , '_' , 'j' , 'n' , 't' } ; int32_T exitg1
; b_obj = obj ; obj_p = & obj -> _pobj0 [ 0 ] ; b_kstr = obj -> _pobj0 [ 0 ]
. NameInternal -> size [ 0 ] * obj -> _pobj0 [ 0 ] . NameInternal -> size [ 1
] ; obj -> _pobj0 [ 0 ] . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj0 [ 0
] . NameInternal -> size [ 1 ] = 9 ; erzqjcuyqu ( obj -> _pobj0 [ 0 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj
-> _pobj0 [ 0 ] . NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj
-> _pobj0 [ 0 ] . ParentIndex = 0.0 ; obj -> _pobj0 [ 0 ] . MassInternal =
4.0 ; obj -> _pobj0 [ 0 ] . CenterOfMassInternal [ 0 ] = 0.0 ; obj -> _pobj0
[ 0 ] . CenterOfMassInternal [ 1 ] = 0.0 ; obj -> _pobj0 [ 0 ] .
CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++
) { obj -> _pobj0 [ 0 ] . InertiaInternal [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> _pobj0 [ 0 ] .
SpatialInertia [ b_kstr ] = tmp_i [ b_kstr ] ; } obj_p -> JointInternal .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p ->
JointInternal . JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p -> JointInternal .
ChildToJointTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = obj_p ->
JointInternal . NameInternal -> size [ 0 ] * obj_p -> JointInternal .
NameInternal -> size [ 1 ] ; obj_p -> JointInternal . NameInternal -> size [
0 ] = 1 ; obj_p -> JointInternal . NameInternal -> size [ 1 ] = 11 ;
erzqjcuyqu ( obj_p -> JointInternal . NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 11 ; b_kstr ++ ) { obj_p -> JointInternal . NameInternal ->
data [ b_kstr ] = tmp_g [ b_kstr ] ; } b_kstr = obj_p -> JointInternal . Type
-> size [ 0 ] * obj_p -> JointInternal . Type -> size [ 1 ] ; obj_p ->
JointInternal . Type -> size [ 0 ] = 1 ; obj_p -> JointInternal . Type ->
size [ 1 ] = 5 ; erzqjcuyqu ( obj_p -> JointInternal . Type , b_kstr ) ; for
( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj_p -> JointInternal . Type ->
data [ b_kstr ] = tmp_j [ b_kstr ] ; } pklwprvumn ( & switch_expression , 2 )
; b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ]
; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj_p -> JointInternal . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression
, b_kstr ) ; loop_ub = obj_p -> JointInternal . Type -> size [ 1 ] - 1 ; for
( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [
b_kstr ] = obj_p -> JointInternal . Type -> data [ b_kstr ] ; } for ( b_kstr
= 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_f [ b_kstr ] ; } b_bool =
false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ;
do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [
b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } }
else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool
) { b_kstr = 0 ; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [
b_kstr ] = tmp_c [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) {
} else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } }
switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ;
tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6
; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [
0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj_p
-> JointInternal . VelocityNumber = 1.0 ; obj_p -> JointInternal .
PositionNumber = 1.0 ; obj_p -> JointInternal . JointAxisInternal [ 0 ] = 0.0
; obj_p -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj_p ->
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj_p -> JointInternal . VelocityNumber = 1.0 ; obj_p -> JointInternal .
PositionNumber = 1.0 ; obj_p -> JointInternal . JointAxisInternal [ 0 ] = 0.0
; obj_p -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj_p ->
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; default : for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; }
poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj_p -> JointInternal .
VelocityNumber = 0.0 ; obj_p -> JointInternal . PositionNumber = 0.0 ; obj_p
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj_p -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj_p -> JointInternal . JointAxisInternal [
2 ] = 0.0 ; break ; } b_kstr = obj_p -> JointInternal . MotionSubspace ->
size [ 0 ] * obj_p -> JointInternal . MotionSubspace -> size [ 1 ] ; obj_p ->
JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj_p -> JointInternal .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj_p -> JointInternal .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
obj_p -> JointInternal . MotionSubspace -> data [ b_kstr ] = msubspace_data [
b_kstr ] ; } b_kstr = obj_p -> JointInternal . PositionLimitsInternal -> size
[ 0 ] * obj_p -> JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj_p
-> JointInternal . PositionLimitsInternal -> size [ 0 ] = 1 ; obj_p ->
JointInternal . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj_p
-> JointInternal . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 2 ; b_kstr ++ ) { obj_p -> JointInternal . PositionLimitsInternal ->
data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr = obj_p -> JointInternal
. HomePositionInternal -> size [ 0 ] ; obj_p -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj_p -> JointInternal
. HomePositionInternal , b_kstr ) ; obj_p -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; for ( b_kstr = 0 ; b_kstr < 16 ;
b_kstr ++ ) { obj -> _pobj0 [ 0 ] . JointInternal . JointToParentTransform [
b_kstr ] = tmp_k [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj0 [ 0 ] . JointInternal . ChildToJointTransform [ b_kstr ] =
tmp_b [ b_kstr ] ; } b_kstr = obj -> _pobj0 [ 0 ] . JointInternal .
MotionSubspace -> size [ 0 ] * obj -> _pobj0 [ 0 ] . JointInternal .
MotionSubspace -> size [ 1 ] ; obj -> _pobj0 [ 0 ] . JointInternal .
MotionSubspace -> size [ 0 ] = 6 ; obj -> _pobj0 [ 0 ] . JointInternal .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj -> _pobj0 [ 0 ] .
JointInternal . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ;
b_kstr ++ ) { obj -> _pobj0 [ 0 ] . JointInternal . MotionSubspace -> data [
b_kstr ] = 0.0 ; } obj -> _pobj0 [ 0 ] . JointInternal . InTree = true ;
b_kstr = obj -> _pobj0 [ 0 ] . JointInternal . PositionLimitsInternal -> size
[ 0 ] * obj -> _pobj0 [ 0 ] . JointInternal . PositionLimitsInternal -> size
[ 1 ] ; obj -> _pobj0 [ 0 ] . JointInternal . PositionLimitsInternal -> size
[ 0 ] = 1 ; obj -> _pobj0 [ 0 ] . JointInternal . PositionLimitsInternal ->
size [ 1 ] = 2 ; fqvnblve2d ( obj -> _pobj0 [ 0 ] . JointInternal .
PositionLimitsInternal , b_kstr ) ; obj -> _pobj0 [ 0 ] . JointInternal .
PositionLimitsInternal -> data [ 0 ] = 0.0 ; obj -> _pobj0 [ 0 ] .
JointInternal . PositionLimitsInternal -> data [ obj -> _pobj0 [ 0 ] .
JointInternal . PositionLimitsInternal -> size [ 0 ] ] = 0.0 ; obj -> _pobj0
[ 0 ] . JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj0 [ 0 ] .
JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj0 [ 0 ] .
JointInternal . JointAxisInternal [ 2 ] = 0.0 ; b_kstr = obj -> _pobj0 [ 0 ]
. JointInternal . HomePositionInternal -> size [ 0 ] ; obj -> _pobj0 [ 0 ] .
JointInternal . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
_pobj0 [ 0 ] . JointInternal . HomePositionInternal , b_kstr ) ; obj ->
_pobj0 [ 0 ] . JointInternal . HomePositionInternal -> data [ 0 ] = 0.0 ;
jcl5zhq44w ( & obj -> _pobj0 [ 0 ] . CollisionsInternal , 0.0 ) ; obj ->
Bodies [ 0 ] = & obj -> _pobj0 [ 0 ] ; obj -> Bodies [ 0 ] -> Index = 1.0 ;
obj -> Bodies [ 1 ] = kx0xummk5s ( & obj -> _pobj0 [ 1 ] ) ; obj -> Bodies [
1 ] -> Index = 2.0 ; obj -> Bodies [ 2 ] = kx0xummk5s0 ( & obj -> _pobj0 [ 2
] ) ; obj -> Bodies [ 2 ] -> Index = 3.0 ; obj -> Bodies [ 3 ] = kx0xummk5s0w
( & obj -> _pobj0 [ 3 ] ) ; obj -> Bodies [ 3 ] -> Index = 4.0 ; obj ->
Bodies [ 4 ] = kx0xummk5s0wv ( & obj -> _pobj0 [ 4 ] ) ; obj -> Bodies [ 4 ]
-> Index = 5.0 ; obj -> Bodies [ 5 ] = kx0xummk5s0wvo ( & obj -> _pobj0 [ 5 ]
) ; obj -> Bodies [ 5 ] -> Index = 6.0 ; obj -> Bodies [ 6 ] =
kx0xummk5s0wvom ( & obj -> _pobj0 [ 6 ] ) ; obj -> Bodies [ 6 ] -> Index =
7.0 ; obj -> Bodies [ 7 ] = i5x4ndinqb ( & obj -> _pobj0 [ 7 ] ) ; obj ->
Bodies [ 7 ] -> Index = 8.0 ; obj -> Bodies [ 8 ] = kcowoadhlc ( & obj ->
_pobj0 [ 8 ] ) ; obj -> Bodies [ 8 ] -> Index = 9.0 ; obj -> Bodies [ 9 ] =
pfu1w2tn2p ( & obj -> _pobj0 [ 9 ] ) ; obj -> Bodies [ 9 ] -> Index = 10.0 ;
obj -> NumBodies = 10.0 ; obj -> Gravity [ 0 ] = 0.0 ; obj -> Gravity [ 1 ] =
0.0 ; obj -> Gravity [ 2 ] = 0.0 ; obj_p = & obj -> Base ; b_kstr = obj ->
Base . NameInternal -> size [ 0 ] * obj -> Base . NameInternal -> size [ 1 ]
; obj -> Base . NameInternal -> size [ 0 ] = 1 ; obj -> Base . NameInternal
-> size [ 1 ] = 5 ; erzqjcuyqu ( obj -> Base . NameInternal , b_kstr ) ; for
( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> Base . NameInternal -> data
[ b_kstr ] = tmp_n [ b_kstr ] ; } obj_p -> JointInternal . InTree = false ;
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p -> JointInternal .
JointToParentTransform [ b_kstr ] = tmp_m [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj_p -> JointInternal . ChildToJointTransform [
b_kstr ] = tmp_m [ b_kstr ] ; } b_kstr = obj_p -> JointInternal .
NameInternal -> size [ 0 ] * obj_p -> JointInternal . NameInternal -> size [
1 ] ; obj_p -> JointInternal . NameInternal -> size [ 0 ] = 1 ; obj_p ->
JointInternal . NameInternal -> size [ 1 ] = 9 ; erzqjcuyqu ( obj_p ->
JointInternal . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 9 ;
b_kstr ++ ) { obj_p -> JointInternal . NameInternal -> data [ b_kstr ] =
tmp_l [ b_kstr ] ; } b_kstr = obj_p -> JointInternal . Type -> size [ 0 ] *
obj_p -> JointInternal . Type -> size [ 1 ] ; obj_p -> JointInternal . Type
-> size [ 0 ] = 1 ; obj_p -> JointInternal . Type -> size [ 1 ] = 5 ;
erzqjcuyqu ( obj_p -> JointInternal . Type , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 5 ; b_kstr ++ ) { obj_p -> JointInternal . Type -> data [ b_kstr ] =
tmp_j [ b_kstr ] ; } b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj_p -> JointInternal . Type -> size [ 1 ]
; erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj_p ->
JointInternal . Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub
; b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj_p -> JointInternal
. Type -> data [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size
[ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 )
{ if ( switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) {
exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr
= 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_c [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj_p ->
JointInternal . VelocityNumber = 1.0 ; obj_p -> JointInternal .
PositionNumber = 1.0 ; obj_p -> JointInternal . JointAxisInternal [ 0 ] = 0.0
; obj_p -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj_p ->
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] =
0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ]
= 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ]
= tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj_p -> JointInternal . VelocityNumber = 1.0 ; obj_p -> JointInternal .
PositionNumber = 1.0 ; obj_p -> JointInternal . JointAxisInternal [ 0 ] = 0.0
; obj_p -> JointInternal . JointAxisInternal [ 1 ] = 0.0 ; obj_p ->
JointInternal . JointAxisInternal [ 2 ] = 1.0 ; break ; default : for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; }
poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ] = 0.0 ; obj_p -> JointInternal .
VelocityNumber = 0.0 ; obj_p -> JointInternal . PositionNumber = 0.0 ; obj_p
-> JointInternal . JointAxisInternal [ 0 ] = 0.0 ; obj_p -> JointInternal .
JointAxisInternal [ 1 ] = 0.0 ; obj_p -> JointInternal . JointAxisInternal [
2 ] = 0.0 ; break ; } b_kstr = obj_p -> JointInternal . MotionSubspace ->
size [ 0 ] * obj_p -> JointInternal . MotionSubspace -> size [ 1 ] ; obj_p ->
JointInternal . MotionSubspace -> size [ 0 ] = 6 ; obj_p -> JointInternal .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj_p -> JointInternal .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
obj_p -> JointInternal . MotionSubspace -> data [ b_kstr ] = msubspace_data [
b_kstr ] ; } b_kstr = obj_p -> JointInternal . PositionLimitsInternal -> size
[ 0 ] * obj_p -> JointInternal . PositionLimitsInternal -> size [ 1 ] ; obj_p
-> JointInternal . PositionLimitsInternal -> size [ 0 ] = 1 ; obj_p ->
JointInternal . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj_p
-> JointInternal . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 2 ; b_kstr ++ ) { obj_p -> JointInternal . PositionLimitsInternal ->
data [ b_kstr ] = poslim_data [ b_kstr ] ; } b_kstr = obj_p -> JointInternal
. HomePositionInternal -> size [ 0 ] ; obj_p -> JointInternal .
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj_p -> JointInternal
. HomePositionInternal , b_kstr ) ; obj_p -> JointInternal .
HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> Base . Index = - 1.0 ; obj
-> Base . ParentIndex = - 1.0 ; obj -> Base . MassInternal = 1.0 ; obj ->
Base . CenterOfMassInternal [ 0 ] = 0.0 ; obj -> Base . CenterOfMassInternal
[ 1 ] = 0.0 ; obj -> Base . CenterOfMassInternal [ 2 ] = 0.0 ; for ( b_kstr =
0 ; b_kstr < 9 ; b_kstr ++ ) { b_I [ b_kstr ] = 0 ; } b_I [ 0 ] = 1 ; b_I [ 4
] = 1 ; b_I [ 8 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { obj ->
Base . InertiaInternal [ b_kstr ] = b_I [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 36 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } for ( b_kstr =
0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr + 6 * b_kstr ] = 1 ; }
for ( b_kstr = 0 ; b_kstr < 36 ; b_kstr ++ ) { obj -> Base . SpatialInertia [
b_kstr ] = msubspace_data [ b_kstr ] ; } jcl5zhq44w ( & obj -> Base .
CollisionsInternal , 0.0 ) ; return b_obj ; } static void degn13zh3co (
uint32_T mt [ 625 ] , uint32_T u [ 2 ] ) { int32_T b_j ; int32_T b_kk ;
uint32_T mti ; uint32_T y ; for ( b_j = 0 ; b_j < 2 ; b_j ++ ) { mti = mt [
624 ] + 1U ; if ( mt [ 624 ] + 1U >= 625U ) { for ( b_kk = 0 ; b_kk < 227 ;
b_kk ++ ) { y = ( mt [ b_kk + 1 ] & 2147483647U ) | ( mt [ b_kk ] &
2147483648U ) ; if ( ( y & 1U ) == 0U ) { y >>= 1U ; } else { y = y >> 1U ^
2567483615U ; } mt [ b_kk ] = mt [ b_kk + 397 ] ^ y ; } for ( b_kk = 0 ; b_kk
< 396 ; b_kk ++ ) { y = ( mt [ b_kk + 227 ] & 2147483648U ) | ( mt [ b_kk +
228 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U ) { y >>= 1U ; } else { y = y
>> 1U ^ 2567483615U ; } mt [ b_kk + 227 ] = mt [ b_kk ] ^ y ; } y = ( mt [
623 ] & 2147483648U ) | ( mt [ 0 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U )
{ y >>= 1U ; } else { y = y >> 1U ^ 2567483615U ; } mt [ 623 ] = mt [ 396 ] ^
y ; mti = 1U ; } y = mt [ ( int32_T ) mti - 1 ] ; mt [ 624 ] = mti ; y ^= y
>> 11U ; y ^= y << 7U & 2636928640U ; y ^= y << 15U & 4022730752U ; u [ b_j ]
= y >> 18U ^ y ; } } static boolean_T l4pwv5u2nn ( const uint32_T mt [ 625 ]
) { int32_T k ; boolean_T exitg1 ; boolean_T isvalid ; if ( ( mt [ 624 ] >=
1U ) && ( mt [ 624 ] < 625U ) ) { isvalid = false ; k = 0 ; exitg1 = false ;
while ( ( ! exitg1 ) && ( k + 1 < 625 ) ) { if ( mt [ k ] == 0U ) { k ++ ; }
else { isvalid = true ; exitg1 = true ; } } } else { isvalid = false ; }
return isvalid ; } static real_T odltdnn0ynit ( uint32_T state [ 625 ] ) {
real_T r ; int32_T exitg1 ; uint32_T b_u [ 2 ] ; do { exitg1 = 0 ;
degn13zh3co ( state , b_u ) ; r = ( ( real_T ) ( b_u [ 0 ] >> 5U ) *
6.7108864E+7 + ( real_T ) ( b_u [ 1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if
( r == 0.0 ) { if ( ! l4pwv5u2nn ( state ) ) { state [ 0 ] = 5489U ; state [
624 ] = 624U ; } } else { exitg1 = 1 ; } } while ( exitg1 == 0 ) ; return r ;
} static void kpzcr4m3le ( real_T r [ 5 ] , nblp1l3k1r * localDW ) { int32_T
b_k ; for ( b_k = 0 ; b_k < 5 ; b_k ++ ) { r [ b_k ] = odltdnn0ynit ( localDW
-> h2pnsauhxt ) ; } } static mjxrc5f0p2 * gf4nntrlna ( mjxrc5f0p2 * obj ) {
aiqe041hfp * switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12
] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ;
int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static
const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' ,
'y' , '\x03' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] =
{ 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x03' , '_' , 'j' ,
'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd'
} ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' ,
't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm'
, 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * cadc1xbmi1 ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x04' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd'
, 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x04' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * aounx3gniz ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x05' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd'
, 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x05' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * mjqa0tkv1p ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x06' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd'
, 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x06' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * c4jc1zccqt ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x07' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd'
, 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x07' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * epy22qqksb ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x08' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd'
, 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x08' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * j30ynkppsf ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'	' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd' ,
'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '	' , '_' , 'j' , 'n' , 't' }
; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static
const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' }
; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't'
, 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj -> NameInternal
-> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj -> NameInternal ->
size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ; erzqjcuyqu ( obj ->
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) { obj
-> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj -> _pobj1 .
InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1
. JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 . ChildToJointTransform [ b_kstr ]
= tmp_e [ b_kstr ] ; } b_kstr = obj -> _pobj1 . NameInternal -> size [ 0 ] *
obj -> _pobj1 . NameInternal -> size [ 1 ] ; obj -> _pobj1 . NameInternal ->
size [ 0 ] = 1 ; obj -> _pobj1 . NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu
( obj -> _pobj1 . NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ;
b_kstr ++ ) { obj -> _pobj1 . NameInternal -> data [ b_kstr ] = tmp_i [
b_kstr ] ; } b_kstr = obj -> _pobj1 . Type -> size [ 0 ] * obj -> _pobj1 .
Type -> size [ 1 ] ; obj -> _pobj1 . Type -> size [ 0 ] = 1 ; obj -> _pobj1 .
Type -> size [ 1 ] = 5 ; erzqjcuyqu ( obj -> _pobj1 . Type , b_kstr ) ; for (
b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj -> _pobj1 . Type -> data [ b_kstr
] = tmp_m [ b_kstr ] ; } pklwprvumn ( & switch_expression , 2 ) ; b_kstr =
switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ] ;
switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] = obj
-> _pobj1 . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression , b_kstr ) ;
loop_ub = obj -> _pobj1 . Type -> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr
<= loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ] = obj ->
_pobj1 . Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr
++ ) { b [ b_kstr ] = tmp_g [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } n3y5ukwimu ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 .
PositionNumber = 1.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj ->
_pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [
2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ;
tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( b_kstr = 0 ; b_kstr < 6
; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [
0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj -> _pobj1 . VelocityNumber = 1.0
; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 . JointAxisInternal [
0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr <
6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj ->
_pobj1 . PositionNumber = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj -> _pobj1 .
MotionSubspace -> size [ 0 ] * obj -> _pobj1 . MotionSubspace -> size [ 1 ] ;
obj -> _pobj1 . MotionSubspace -> size [ 0 ] = 6 ; obj -> _pobj1 .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj -> _pobj1 .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { obj
-> _pobj1 . MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr ] ; }
b_kstr = obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1
. PositionLimitsInternal -> size [ 1 ] ; obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj -> _pobj1 .
PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++
) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] = poslim_data [
b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal -> size [ 0 ] ;
obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj ->
_pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1 .
HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static mjxrc5f0p2 * e3lqg3jwwt ( mjxrc5f0p2 * obj ) { aiqe041hfp *
switch_expression ; mjxrc5f0p2 * b_obj ; real_T poslim_data [ 12 ] ; int32_T
b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ; char_T b [ 8 ] ; int8_T
msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const
char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x0a' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_i [ 14 ] = { 'd'
, 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x0a' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_j [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; int32_T exitg1 ; b_obj = obj ; b_kstr = obj ->
NameInternal -> size [ 0 ] * obj -> NameInternal -> size [ 1 ] ; obj ->
NameInternal -> size [ 0 ] = 1 ; obj -> NameInternal -> size [ 1 ] = 10 ;
erzqjcuyqu ( obj -> NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> NameInternal -> data [ b_kstr ] = tmp_p [ b_kstr ] ; }
obj -> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ )
{ obj -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj ->
_pobj1 . NameInternal -> size [ 0 ] * obj -> _pobj1 . NameInternal -> size [
1 ] ; obj -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj -> _pobj1 . NameInternal ,
b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj -> _pobj1
. Type -> size [ 0 ] * obj -> _pobj1 . Type -> size [ 1 ] ; obj -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu
( obj -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++
) { obj -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn
( & switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj -> _pobj1 . Type -> data [ b_kstr
] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] = tmp_g [
b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } n3y5ukwimu ( & switch_expression ) ; switch (
b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ]
= 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr
++ ) { msubspace_data [ b_kstr ] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = -
3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj -> _pobj1 .
VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ; obj -> _pobj1 .
JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 1 ] = 0.0
; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ]
= 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5
] = 1 ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr
] = tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ;
obj -> _pobj1 . VelocityNumber = 1.0 ; obj -> _pobj1 . PositionNumber = 1.0 ;
obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 1.0
; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj -> _pobj1 . VelocityNumber = 0.0 ; obj -> _pobj1 . PositionNumber
= 0.0 ; obj -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj -> _pobj1 . JointAxisInternal [ 2 ] = 0.0
; break ; } b_kstr = obj -> _pobj1 . MotionSubspace -> size [ 0 ] * obj ->
_pobj1 . MotionSubspace -> size [ 1 ] ; obj -> _pobj1 . MotionSubspace ->
size [ 0 ] = 6 ; obj -> _pobj1 . MotionSubspace -> size [ 1 ] = 1 ;
fqvnblve2d ( obj -> _pobj1 . MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ;
b_kstr < 6 ; b_kstr ++ ) { obj -> _pobj1 . MotionSubspace -> data [ b_kstr ]
= msubspace_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] * obj -> _pobj1 . PositionLimitsInternal
-> size [ 1 ] ; obj -> _pobj1 . PositionLimitsInternal -> size [ 0 ] = 1 ;
obj -> _pobj1 . PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj
-> _pobj1 . PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2
; b_kstr ++ ) { obj -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = obj -> _pobj1 . HomePositionInternal ->
size [ 0 ] ; obj -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( obj -> _pobj1 . HomePositionInternal , b_kstr ) ; obj -> _pobj1
. HomePositionInternal -> data [ 0 ] = 0.0 ; obj -> JointInternal = & obj ->
_pobj1 ; obj -> Index = - 1.0 ; obj -> ParentIndex = - 1.0 ; obj ->
CollisionsInternal = jcl5zhq44w ( & obj -> _pobj0 , 0.0 ) ; return b_obj ; }
static void mwusr4xyjp ( bgzkddb0t0 * obj , mjxrc5f0p2 * iobj_0 , nblp1l3k1r
* localDW ) { aiqe041hfp * switch_expression ; mjxrc5f0p2 * obj_p ; real_T
poslim_data [ 12 ] ; int32_T b_kstr ; int32_T loop_ub ; char_T b_p [ 9 ] ;
char_T b [ 8 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T
b_bool ; static const char_T tmp_p [ 10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' ,
'b' , 'o' , 'd' , 'y' , '\x01' } ; static const int8_T tmp_e [ 16 ] = { 1 , 0
, 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const
char_T tmp_i [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' ,
'\x01' , '_' , 'j' , 'n' , 't' } ; static const char_T tmp_m [ 5 ] = { 'f' ,
'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_g [ 8 ] = { 'r' , 'e' , 'v'
, 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_j [ 9 ] = { 'p' ,
'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; static const char_T tmp_f [
10 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o' , 'd' , 'y' , '\x02' } ;
static const char_T tmp_c [ 14 ] = { 'd' , 'u' , 'm' , 'm' , 'y' , 'b' , 'o'
, 'd' , 'y' , '\x02' , '_' , 'j' , 'n' , 't' } ; real_T unusedExpr [ 5 ] ;
int32_T exitg1 ; obj_p = & iobj_0 [ 0 ] ; b_kstr = iobj_0 [ 0 ] .
NameInternal -> size [ 0 ] * iobj_0 [ 0 ] . NameInternal -> size [ 1 ] ;
iobj_0 [ 0 ] . NameInternal -> size [ 0 ] = 1 ; iobj_0 [ 0 ] . NameInternal
-> size [ 1 ] = 10 ; erzqjcuyqu ( iobj_0 [ 0 ] . NameInternal , b_kstr ) ;
for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) { iobj_0 [ 0 ] . NameInternal ->
data [ b_kstr ] = tmp_p [ b_kstr ] ; } obj_p -> _pobj1 . InTree = false ; for
( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p -> _pobj1 .
JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { obj_p -> _pobj1 . ChildToJointTransform [ b_kstr
] = tmp_e [ b_kstr ] ; } b_kstr = obj_p -> _pobj1 . NameInternal -> size [ 0
] * obj_p -> _pobj1 . NameInternal -> size [ 1 ] ; obj_p -> _pobj1 .
NameInternal -> size [ 0 ] = 1 ; obj_p -> _pobj1 . NameInternal -> size [ 1 ]
= 14 ; erzqjcuyqu ( obj_p -> _pobj1 . NameInternal , b_kstr ) ; for ( b_kstr
= 0 ; b_kstr < 14 ; b_kstr ++ ) { obj_p -> _pobj1 . NameInternal -> data [
b_kstr ] = tmp_i [ b_kstr ] ; } b_kstr = obj_p -> _pobj1 . Type -> size [ 0 ]
* obj_p -> _pobj1 . Type -> size [ 1 ] ; obj_p -> _pobj1 . Type -> size [ 0 ]
= 1 ; obj_p -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu ( obj_p -> _pobj1
. Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { obj_p ->
_pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr ] ; } pklwprvumn ( &
switch_expression , 2 ) ; b_kstr = switch_expression -> size [ 0 ] *
switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj_p -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , b_kstr ) ; loop_ub = obj_p -> _pobj1 . Type
-> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
switch_expression -> data [ b_kstr ] = obj_p -> _pobj1 . Type -> data [
b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [ b_kstr ] =
tmp_g [ b_kstr ] ; } b_bool = false ; if ( switch_expression -> size [ 1 ] !=
8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ;
} else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0 ; } else { for ( b_kstr = 0 ;
b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_j [ b_kstr ] ; } if (
switch_expression -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 1
; } else { b_kstr = - 1 ; } } switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ;
tmp [ 1 ] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0
; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] =
tmp [ b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1
] = 3.1415926535897931 ; obj_p -> _pobj1 . VelocityNumber = 1.0 ; obj_p ->
_pobj1 . PositionNumber = 1.0 ; obj_p -> _pobj1 . JointAxisInternal [ 0 ] =
0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj_p ->
_pobj1 . VelocityNumber = 1.0 ; obj_p -> _pobj1 . PositionNumber = 1.0 ;
obj_p -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 2 ] =
1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj_p -> _pobj1 . VelocityNumber = 0.0 ; obj_p -> _pobj1 .
PositionNumber = 0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ;
obj_p -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj_p -> _pobj1 .
MotionSubspace -> size [ 0 ] * obj_p -> _pobj1 . MotionSubspace -> size [ 1 ]
; obj_p -> _pobj1 . MotionSubspace -> size [ 0 ] = 6 ; obj_p -> _pobj1 .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj_p -> _pobj1 .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
obj_p -> _pobj1 . MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr
] ; } b_kstr = obj_p -> _pobj1 . PositionLimitsInternal -> size [ 0 ] * obj_p
-> _pobj1 . PositionLimitsInternal -> size [ 1 ] ; obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj_p -> _pobj1 .
PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++
) { obj_p -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] = poslim_data
[ b_kstr ] ; } b_kstr = obj_p -> _pobj1 . HomePositionInternal -> size [ 0 ]
; obj_p -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss (
obj_p -> _pobj1 . HomePositionInternal , b_kstr ) ; obj_p -> _pobj1 .
HomePositionInternal -> data [ 0 ] = 0.0 ; iobj_0 [ 0 ] . JointInternal = &
obj_p -> _pobj1 ; iobj_0 [ 0 ] . Index = - 1.0 ; iobj_0 [ 0 ] . ParentIndex =
- 1.0 ; iobj_0 [ 0 ] . CollisionsInternal = jcl5zhq44w ( & iobj_0 [ 0 ] .
_pobj0 , 0.0 ) ; obj -> Bodies [ 0 ] = & iobj_0 [ 0 ] ; obj_p = & iobj_0 [ 1
] ; b_kstr = iobj_0 [ 1 ] . NameInternal -> size [ 0 ] * iobj_0 [ 1 ] .
NameInternal -> size [ 1 ] ; iobj_0 [ 1 ] . NameInternal -> size [ 0 ] = 1 ;
iobj_0 [ 1 ] . NameInternal -> size [ 1 ] = 10 ; erzqjcuyqu ( iobj_0 [ 1 ] .
NameInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) {
iobj_0 [ 1 ] . NameInternal -> data [ b_kstr ] = tmp_f [ b_kstr ] ; } obj_p
-> _pobj1 . InTree = false ; for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) {
obj_p -> _pobj1 . JointToParentTransform [ b_kstr ] = tmp_e [ b_kstr ] ; }
for ( b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { obj_p -> _pobj1 .
ChildToJointTransform [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr = obj_p ->
_pobj1 . NameInternal -> size [ 0 ] * obj_p -> _pobj1 . NameInternal -> size
[ 1 ] ; obj_p -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj_p -> _pobj1 .
NameInternal -> size [ 1 ] = 14 ; erzqjcuyqu ( obj_p -> _pobj1 . NameInternal
, b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 14 ; b_kstr ++ ) { obj_p -> _pobj1 .
NameInternal -> data [ b_kstr ] = tmp_c [ b_kstr ] ; } b_kstr = obj_p ->
_pobj1 . Type -> size [ 0 ] * obj_p -> _pobj1 . Type -> size [ 1 ] ; obj_p ->
_pobj1 . Type -> size [ 0 ] = 1 ; obj_p -> _pobj1 . Type -> size [ 1 ] = 5 ;
erzqjcuyqu ( obj_p -> _pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr <
5 ; b_kstr ++ ) { obj_p -> _pobj1 . Type -> data [ b_kstr ] = tmp_m [ b_kstr
] ; } b_kstr = switch_expression -> size [ 0 ] * switch_expression -> size [
1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
obj_p -> _pobj1 . Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression ,
b_kstr ) ; loop_ub = obj_p -> _pobj1 . Type -> size [ 1 ] - 1 ; for ( b_kstr
= 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { switch_expression -> data [ b_kstr ]
= obj_p -> _pobj1 . Type -> data [ b_kstr ] ; } b_bool = false ; if (
switch_expression -> size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression -> data [ b_kstr - 1 ] !=
b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { b_kstr = 0
; } else { for ( b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] =
tmp_j [ b_kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { b_kstr = 1 ; } else { b_kstr = - 1 ; } } n3y5ukwimu ( &
switch_expression ) ; switch ( b_kstr ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ]
= 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; obj_p -> _pobj1 . VelocityNumber = 1.0 ; obj_p -> _pobj1
. PositionNumber = 1.0 ; obj_p -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ;
obj_p -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; obj_p ->
_pobj1 . VelocityNumber = 1.0 ; obj_p -> _pobj1 . PositionNumber = 1.0 ;
obj_p -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 2 ] =
1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; obj_p -> _pobj1 . VelocityNumber = 0.0 ; obj_p -> _pobj1 .
PositionNumber = 0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ;
obj_p -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = obj_p -> _pobj1 .
MotionSubspace -> size [ 0 ] * obj_p -> _pobj1 . MotionSubspace -> size [ 1 ]
; obj_p -> _pobj1 . MotionSubspace -> size [ 0 ] = 6 ; obj_p -> _pobj1 .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj_p -> _pobj1 .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
obj_p -> _pobj1 . MotionSubspace -> data [ b_kstr ] = msubspace_data [ b_kstr
] ; } b_kstr = obj_p -> _pobj1 . PositionLimitsInternal -> size [ 0 ] * obj_p
-> _pobj1 . PositionLimitsInternal -> size [ 1 ] ; obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj_p -> _pobj1 .
PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++
) { obj_p -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] = poslim_data
[ b_kstr ] ; } b_kstr = obj_p -> _pobj1 . HomePositionInternal -> size [ 0 ]
; obj_p -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss (
obj_p -> _pobj1 . HomePositionInternal , b_kstr ) ; obj_p -> _pobj1 .
HomePositionInternal -> data [ 0 ] = 0.0 ; iobj_0 [ 1 ] . JointInternal = &
obj_p -> _pobj1 ; iobj_0 [ 1 ] . Index = - 1.0 ; iobj_0 [ 1 ] . ParentIndex =
- 1.0 ; iobj_0 [ 1 ] . CollisionsInternal = jcl5zhq44w ( & iobj_0 [ 1 ] .
_pobj0 , 0.0 ) ; obj -> Bodies [ 1 ] = & iobj_0 [ 1 ] ; obj -> Bodies [ 2 ] =
gf4nntrlna ( & iobj_0 [ 2 ] ) ; obj -> Bodies [ 3 ] = cadc1xbmi1 ( & iobj_0 [
3 ] ) ; obj -> Bodies [ 4 ] = aounx3gniz ( & iobj_0 [ 4 ] ) ; obj -> Bodies [
5 ] = mjqa0tkv1p ( & iobj_0 [ 5 ] ) ; obj -> Bodies [ 6 ] = c4jc1zccqt ( &
iobj_0 [ 6 ] ) ; obj -> Bodies [ 7 ] = epy22qqksb ( & iobj_0 [ 7 ] ) ; obj ->
Bodies [ 8 ] = j30ynkppsf ( & iobj_0 [ 8 ] ) ; obj -> Bodies [ 9 ] =
e3lqg3jwwt ( & iobj_0 [ 9 ] ) ; obj -> NumBodies = 0.0 ; obj ->
NumNonFixedBodies = 0.0 ; obj -> PositionNumber = 0.0 ; obj -> VelocityNumber
= 0.0 ; kpzcr4m3le ( unusedExpr , localDW ) ; for ( b_kstr = 0 ; b_kstr < 10
; b_kstr ++ ) { obj -> PositionDoFMap [ b_kstr ] = 0.0 ; } for ( b_kstr = 0 ;
b_kstr < 10 ; b_kstr ++ ) { obj -> PositionDoFMap [ b_kstr + 10 ] = - 1.0 ; }
for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) { obj -> VelocityDoFMap [ b_kstr
] = 0.0 ; } for ( b_kstr = 0 ; b_kstr < 10 ; b_kstr ++ ) { obj ->
VelocityDoFMap [ b_kstr + 10 ] = - 1.0 ; } } static boolean_T iwsovvg252 (
const aiqe041hfp * a , const aiqe041hfp * b ) { int32_T b_kstr ; int32_T
exitg1 ; boolean_T b_bool ; boolean_T d ; b_bool = false ; d = ( a -> size [
1 ] == 0 ) ; if ( d && ( b -> size [ 1 ] == 0 ) ) { b_bool = true ; } else if
( a -> size [ 1 ] != b -> size [ 1 ] ) { } else { b_kstr = 1 ; do { exitg1 =
0 ; if ( b_kstr - 1 <= b -> size [ 1 ] - 1 ) { if ( a -> data [ b_kstr - 1 ]
!= b -> data [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else {
b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } return b_bool ; }
static real_T kgp0kxhejg ( bgzkddb0t0 * obj , const aiqe041hfp * bodyname ) {
aiqe041hfp * bname ; mjxrc5f0p2 * obj_p ; real_T b ; real_T bid ; int32_T b_i
; int32_T i ; int32_T loop_ub ; boolean_T exitg1 ; pklwprvumn ( & bname , 2 )
; bid = - 1.0 ; i = bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size
[ 0 ] = 1 ; bname -> size [ 1 ] = obj -> Base . NameInternal -> size [ 1 ] ;
erzqjcuyqu ( bname , i ) ; loop_ub = obj -> Base . NameInternal -> size [ 1 ]
- 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) { bname -> data [ i ] = obj -> Base
. NameInternal -> data [ i ] ; } if ( iwsovvg252 ( bname , bodyname ) ) { bid
= 0.0 ; } else { b = obj -> NumBodies ; b_i = 0 ; exitg1 = false ; while ( (
! exitg1 ) && ( b_i <= ( int32_T ) b - 1 ) ) { obj_p = obj -> Bodies [ b_i ]
; i = bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ;
bname -> size [ 1 ] = obj_p -> NameInternal -> size [ 1 ] ; erzqjcuyqu (
bname , i ) ; loop_ub = obj_p -> NameInternal -> size [ 1 ] - 1 ; for ( i = 0
; i <= loop_ub ; i ++ ) { bname -> data [ i ] = obj_p -> NameInternal -> data
[ i ] ; } if ( iwsovvg252 ( bname , bodyname ) ) { bid = ( real_T ) b_i + 1.0
; exitg1 = true ; } else { b_i ++ ; } } } n3y5ukwimu ( & bname ) ; return bid
; } static iuu1xhv34c * axi3tqwpm3 ( const iuu1xhv34c * obj , iuu1xhv34c *
iobj_0 ) { aiqe041hfp * switch_expression ; iuu1xhv34c * newjoint ; real_T
poslim_data [ 12 ] ; int32_T loop_ub ; int32_T minnanb ; int32_T nmatched ;
char_T b_p [ 9 ] ; char_T b_vstr [ 9 ] ; char_T partial_match_data [ 9 ] ;
char_T b [ 8 ] ; char_T vstr [ 8 ] ; char_T b_e [ 5 ] ; char_T c_vstr [ 5 ] ;
int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ;
boolean_T matched ; static const int8_T tmp_p [ 16 ] = { 1 , 0 , 0 , 0 , 0 ,
1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_e [ 8 ]
= { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T
tmp_i [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ;
static const char_T tmp_m [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; static
const char_T tmp_g [ 128 ] = { '\x00' , '\x01' , '\x02' , '\x03' , '\x04' ,
'\x05' , '\x06' , '\x07' , '\x08' , '	' , '\x0a' , '\x0b' , '\x0c' , '\x0d' ,
'\x0e' , '\x0f' , '\x10' , '\x11' , '\x12' , '\x13' , '\x14' , '\x15' ,
'\x16' , '\x17' , '\x18' , '\x19' , '\x1a' , '\x1b' , '\x1c' , '\x1d' ,
'\x1e' , '\x1f' , ' ' , '!' , '\"' , '#' , '$' , '%' , '&' , '\'' , '(' , ')'
, '*' , '+' , ',' , '-' , '.' , '/' , '0' , '1' , '2' , '3' , '4' , '5' , '6'
, '7' , '8' , '9' , ':' , ';' , '<' , '=' , '>' , '?' , '@' , 'a' , 'b' , 'c'
, 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p'
, 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' , '[' , '\\' ,
']' , '^' , '_' , '`' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' ,
'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' ,
'w' , 'x' , 'y' , 'z' , '{' , '|' , '}' , '~' , '\x7f' } ; int32_T exitg1 ;
int32_T partial_match_size_idx_1 ; boolean_T guard1 = false ; boolean_T
guard11 = false ; boolean_T guard2 = false ; boolean_T guard3 = false ;
iobj_0 -> InTree = false ; for ( minnanb = 0 ; minnanb < 16 ; minnanb ++ ) {
iobj_0 -> JointToParentTransform [ minnanb ] = tmp_p [ minnanb ] ; } for (
minnanb = 0 ; minnanb < 16 ; minnanb ++ ) { iobj_0 -> ChildToJointTransform [
minnanb ] = tmp_p [ minnanb ] ; } newjoint = iobj_0 ; minnanb = iobj_0 ->
NameInternal -> size [ 0 ] * iobj_0 -> NameInternal -> size [ 1 ] ; iobj_0 ->
NameInternal -> size [ 0 ] = 1 ; iobj_0 -> NameInternal -> size [ 1 ] = obj
-> NameInternal -> size [ 1 ] ; erzqjcuyqu ( iobj_0 -> NameInternal , minnanb
) ; loop_ub = obj -> NameInternal -> size [ 1 ] - 1 ; for ( minnanb = 0 ;
minnanb <= loop_ub ; minnanb ++ ) { iobj_0 -> NameInternal -> data [ minnanb
] = obj -> NameInternal -> data [ minnanb ] ; } partial_match_size_idx_1 = 0
; nmatched = 0 ; matched = false ; for ( minnanb = 0 ; minnanb < 8 ; minnanb
++ ) { vstr [ minnanb ] = tmp_e [ minnanb ] ; } guard1 = false ; guard2 =
false ; guard3 = false ; if ( obj -> Type -> size [ 1 ] <= 8 ) { loop_ub =
obj -> Type -> size [ 1 ] ; for ( minnanb = 0 ; minnanb < 8 ; minnanb ++ ) {
b [ minnanb ] = tmp_e [ minnanb ] ; } b_bool = false ; minnanb = obj -> Type
-> size [ 1 ] ; minnanb = muIntScalarMin_sint32 ( minnanb , 8 ) ; guard11 =
false ; if ( loop_ub <= minnanb ) { minnanb = muIntScalarMin_sint32 ( minnanb
, loop_ub ) - 1 ; guard11 = true ; } else if ( obj -> Type -> size [ 1 ] == 8
) { minnanb = 7 ; guard11 = true ; } if ( guard11 ) { loop_ub = 1 ; do {
exitg1 = 0 ; if ( loop_ub - 1 <= minnanb ) { if ( tmp_g [ ( uint8_T ) obj ->
Type -> data [ loop_ub - 1 ] & 127 ] != tmp_g [ ( int32_T ) b [ loop_ub - 1 ]
] ) { exitg1 = 1 ; } else { loop_ub ++ ; } } else { b_bool = true ; exitg1 =
1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { if ( obj -> Type -> size [
1 ] == 8 ) { nmatched = 1 ; partial_match_size_idx_1 = 8 ; for ( minnanb = 0
; minnanb < 8 ; minnanb ++ ) { b_p [ minnanb ] = vstr [ minnanb ] ; } } else
{ partial_match_size_idx_1 = 8 ; for ( minnanb = 0 ; minnanb < 8 ; minnanb ++
) { partial_match_data [ minnanb ] = vstr [ minnanb ] ; } matched = true ;
nmatched = 1 ; guard3 = true ; } } else { guard3 = true ; } } else { guard3 =
true ; } if ( guard3 ) { for ( minnanb = 0 ; minnanb < 9 ; minnanb ++ ) {
b_vstr [ minnanb ] = tmp_i [ minnanb ] ; } if ( obj -> Type -> size [ 1 ] <=
9 ) { loop_ub = obj -> Type -> size [ 1 ] ; for ( minnanb = 0 ; minnanb < 9 ;
minnanb ++ ) { b_p [ minnanb ] = tmp_i [ minnanb ] ; } b_bool = false ;
minnanb = obj -> Type -> size [ 1 ] ; minnanb = muIntScalarMin_sint32 (
minnanb , 9 ) ; guard11 = false ; if ( loop_ub <= minnanb ) { minnanb =
muIntScalarMin_sint32 ( minnanb , loop_ub ) - 1 ; guard11 = true ; } else if
( obj -> Type -> size [ 1 ] == 9 ) { minnanb = 8 ; guard11 = true ; } if (
guard11 ) { loop_ub = 1 ; do { exitg1 = 0 ; if ( loop_ub - 1 <= minnanb ) {
if ( tmp_g [ ( uint8_T ) obj -> Type -> data [ loop_ub - 1 ] & 127 ] != tmp_g
[ ( int32_T ) b_p [ loop_ub - 1 ] ] ) { exitg1 = 1 ; } else { loop_ub ++ ; }
} else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if (
b_bool ) { if ( obj -> Type -> size [ 1 ] == 9 ) { nmatched = 1 ;
partial_match_size_idx_1 = 9 ; for ( minnanb = 0 ; minnanb < 9 ; minnanb ++ )
{ b_p [ minnanb ] = b_vstr [ minnanb ] ; } } else { if ( ! matched ) {
partial_match_size_idx_1 = 9 ; for ( minnanb = 0 ; minnanb < 9 ; minnanb ++ )
{ partial_match_data [ minnanb ] = b_vstr [ minnanb ] ; } } matched = true ;
nmatched ++ ; guard2 = true ; } } else { guard2 = true ; } } else { guard2 =
true ; } } if ( guard2 ) { for ( minnanb = 0 ; minnanb < 5 ; minnanb ++ ) {
c_vstr [ minnanb ] = tmp_m [ minnanb ] ; } if ( obj -> Type -> size [ 1 ] <=
5 ) { loop_ub = obj -> Type -> size [ 1 ] ; for ( minnanb = 0 ; minnanb < 5 ;
minnanb ++ ) { b_e [ minnanb ] = tmp_m [ minnanb ] ; } b_bool = false ;
minnanb = obj -> Type -> size [ 1 ] ; minnanb = muIntScalarMin_sint32 (
minnanb , 5 ) ; guard11 = false ; if ( loop_ub <= minnanb ) { minnanb =
muIntScalarMin_sint32 ( minnanb , loop_ub ) - 1 ; guard11 = true ; } else if
( obj -> Type -> size [ 1 ] == 5 ) { minnanb = 4 ; guard11 = true ; } if (
guard11 ) { loop_ub = 1 ; do { exitg1 = 0 ; if ( loop_ub - 1 <= minnanb ) {
if ( tmp_g [ ( uint8_T ) obj -> Type -> data [ loop_ub - 1 ] & 127 ] != tmp_g
[ ( int32_T ) b_e [ loop_ub - 1 ] ] ) { exitg1 = 1 ; } else { loop_ub ++ ; }
} else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if (
b_bool ) { if ( obj -> Type -> size [ 1 ] == 5 ) { nmatched = 1 ;
partial_match_size_idx_1 = 5 ; for ( minnanb = 0 ; minnanb < 5 ; minnanb ++ )
{ b_p [ minnanb ] = c_vstr [ minnanb ] ; } } else { if ( ! matched ) {
partial_match_size_idx_1 = 5 ; for ( minnanb = 0 ; minnanb < 5 ; minnanb ++ )
{ partial_match_data [ minnanb ] = c_vstr [ minnanb ] ; } } nmatched ++ ;
guard1 = true ; } } else { guard1 = true ; } } else { guard1 = true ; } } if
( guard1 ) { if ( nmatched == 0 ) { partial_match_size_idx_1 = 0 ; } else {
loop_ub = partial_match_size_idx_1 - 1 ; if ( 0 <= loop_ub ) { memcpy ( & b_p
[ 0 ] , & partial_match_data [ 0 ] , ( loop_ub + 1 ) * sizeof ( char_T ) ) ;
} } } if ( ( nmatched == 0 ) || ( ( obj -> Type -> size [ 1 ] == 0 ) != (
partial_match_size_idx_1 == 0 ) ) ) { partial_match_size_idx_1 = 0 ; } else {
loop_ub = partial_match_size_idx_1 - 1 ; if ( 0 <= loop_ub ) { memcpy ( &
partial_match_data [ 0 ] , & b_p [ 0 ] , ( loop_ub + 1 ) * sizeof ( char_T )
) ; } } minnanb = iobj_0 -> Type -> size [ 0 ] * iobj_0 -> Type -> size [ 1 ]
; iobj_0 -> Type -> size [ 0 ] = 1 ; iobj_0 -> Type -> size [ 1 ] =
partial_match_size_idx_1 ; erzqjcuyqu ( iobj_0 -> Type , minnanb ) ; loop_ub
= partial_match_size_idx_1 - 1 ; for ( minnanb = 0 ; minnanb <= loop_ub ;
minnanb ++ ) { iobj_0 -> Type -> data [ minnanb ] = partial_match_data [
minnanb ] ; } pklwprvumn ( & switch_expression , 2 ) ; minnanb =
switch_expression -> size [ 0 ] * switch_expression -> size [ 1 ] ;
switch_expression -> size [ 0 ] = 1 ; switch_expression -> size [ 1 ] =
iobj_0 -> Type -> size [ 1 ] ; erzqjcuyqu ( switch_expression , minnanb ) ;
loop_ub = iobj_0 -> Type -> size [ 1 ] - 1 ; for ( minnanb = 0 ; minnanb <=
loop_ub ; minnanb ++ ) { switch_expression -> data [ minnanb ] = iobj_0 ->
Type -> data [ minnanb ] ; } for ( minnanb = 0 ; minnanb < 8 ; minnanb ++ ) {
b [ minnanb ] = tmp_e [ minnanb ] ; } b_bool = false ; if ( switch_expression
-> size [ 1 ] != 8 ) { } else { loop_ub = 1 ; do { exitg1 = 0 ; if ( loop_ub
- 1 < 8 ) { if ( switch_expression -> data [ loop_ub - 1 ] != b [ loop_ub - 1
] ) { exitg1 = 1 ; } else { loop_ub ++ ; } } else { b_bool = true ; exitg1 =
1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { nmatched = 0 ; } else { for
( minnanb = 0 ; minnanb < 9 ; minnanb ++ ) { b_p [ minnanb ] = tmp_i [
minnanb ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { } else { loop_ub
= 1 ; do { exitg1 = 0 ; if ( loop_ub - 1 < 9 ) { if ( switch_expression ->
data [ loop_ub - 1 ] != b_p [ loop_ub - 1 ] ) { exitg1 = 1 ; } else { loop_ub
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { nmatched = 1 ; } else { nmatched = - 1 ; } } n3y5ukwimu ( &
switch_expression ) ; switch ( nmatched ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1
] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
minnanb = 0 ; minnanb < 6 ; minnanb ++ ) { msubspace_data [ minnanb ] = tmp [
minnanb ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_0 -> VelocityNumber = 1.0 ; iobj_0 ->
PositionNumber = 1.0 ; iobj_0 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_0 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_0 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] =
0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( minnanb = 0 ; minnanb < 6 ; minnanb
++ ) { msubspace_data [ minnanb ] = tmp [ minnanb ] ; } poslim_data [ 0 ] = -
0.5 ; poslim_data [ 1 ] = 0.5 ; iobj_0 -> VelocityNumber = 1.0 ; iobj_0 ->
PositionNumber = 1.0 ; iobj_0 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_0 ->
JointAxisInternal [ 1 ] = 0.0 ; iobj_0 -> JointAxisInternal [ 2 ] = 1.0 ;
break ; default : for ( minnanb = 0 ; minnanb < 6 ; minnanb ++ ) {
msubspace_data [ minnanb ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1
] = 0.0 ; iobj_0 -> VelocityNumber = 0.0 ; iobj_0 -> PositionNumber = 0.0 ;
iobj_0 -> JointAxisInternal [ 0 ] = 0.0 ; iobj_0 -> JointAxisInternal [ 1 ] =
0.0 ; iobj_0 -> JointAxisInternal [ 2 ] = 0.0 ; break ; } minnanb = iobj_0 ->
MotionSubspace -> size [ 0 ] * iobj_0 -> MotionSubspace -> size [ 1 ] ;
iobj_0 -> MotionSubspace -> size [ 0 ] = 6 ; iobj_0 -> MotionSubspace -> size
[ 1 ] = 1 ; fqvnblve2d ( iobj_0 -> MotionSubspace , minnanb ) ; for ( minnanb
= 0 ; minnanb < 6 ; minnanb ++ ) { iobj_0 -> MotionSubspace -> data [ minnanb
] = msubspace_data [ minnanb ] ; } minnanb = iobj_0 -> PositionLimitsInternal
-> size [ 0 ] * iobj_0 -> PositionLimitsInternal -> size [ 1 ] ; iobj_0 ->
PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_0 -> PositionLimitsInternal
-> size [ 1 ] = 2 ; fqvnblve2d ( iobj_0 -> PositionLimitsInternal , minnanb )
; for ( minnanb = 0 ; minnanb < 2 ; minnanb ++ ) { iobj_0 ->
PositionLimitsInternal -> data [ minnanb ] = poslim_data [ minnanb ] ; }
minnanb = iobj_0 -> HomePositionInternal -> size [ 0 ] ; iobj_0 ->
HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( iobj_0 ->
HomePositionInternal , minnanb ) ; iobj_0 -> HomePositionInternal -> data [ 0
] = 0.0 ; if ( ( obj -> NameInternal -> size [ 1 ] != 0 ) && ( ! iobj_0 ->
InTree ) ) { minnanb = iobj_0 -> NameInternal -> size [ 0 ] * iobj_0 ->
NameInternal -> size [ 1 ] ; iobj_0 -> NameInternal -> size [ 0 ] = 1 ;
iobj_0 -> NameInternal -> size [ 1 ] = obj -> NameInternal -> size [ 1 ] ;
erzqjcuyqu ( iobj_0 -> NameInternal , minnanb ) ; loop_ub = obj ->
NameInternal -> size [ 1 ] - 1 ; for ( minnanb = 0 ; minnanb <= loop_ub ;
minnanb ++ ) { iobj_0 -> NameInternal -> data [ minnanb ] = obj ->
NameInternal -> data [ minnanb ] ; } } minnanb = iobj_0 ->
PositionLimitsInternal -> size [ 0 ] * iobj_0 -> PositionLimitsInternal ->
size [ 1 ] ; iobj_0 -> PositionLimitsInternal -> size [ 0 ] = obj ->
PositionLimitsInternal -> size [ 0 ] ; iobj_0 -> PositionLimitsInternal ->
size [ 1 ] = 2 ; fqvnblve2d ( iobj_0 -> PositionLimitsInternal , minnanb ) ;
loop_ub = obj -> PositionLimitsInternal -> size [ 0 ] << 1 ; for ( minnanb =
0 ; minnanb < loop_ub ; minnanb ++ ) { iobj_0 -> PositionLimitsInternal ->
data [ minnanb ] = obj -> PositionLimitsInternal -> data [ minnanb ] ; }
minnanb = iobj_0 -> HomePositionInternal -> size [ 0 ] ; iobj_0 ->
HomePositionInternal -> size [ 0 ] = obj -> HomePositionInternal -> size [ 0
] ; pzzfddv2ss ( iobj_0 -> HomePositionInternal , minnanb ) ; loop_ub = obj
-> HomePositionInternal -> size [ 0 ] ; for ( minnanb = 0 ; minnanb < loop_ub
; minnanb ++ ) { iobj_0 -> HomePositionInternal -> data [ minnanb ] = obj ->
HomePositionInternal -> data [ minnanb ] ; } iobj_0 -> JointAxisInternal [ 0
] = obj -> JointAxisInternal [ 0 ] ; iobj_0 -> JointAxisInternal [ 1 ] = obj
-> JointAxisInternal [ 1 ] ; iobj_0 -> JointAxisInternal [ 2 ] = obj ->
JointAxisInternal [ 2 ] ; minnanb = iobj_0 -> MotionSubspace -> size [ 0 ] *
iobj_0 -> MotionSubspace -> size [ 1 ] ; iobj_0 -> MotionSubspace -> size [ 0
] = 6 ; iobj_0 -> MotionSubspace -> size [ 1 ] = obj -> MotionSubspace ->
size [ 1 ] ; fqvnblve2d ( iobj_0 -> MotionSubspace , minnanb ) ; loop_ub = 6
* obj -> MotionSubspace -> size [ 1 ] ; for ( minnanb = 0 ; minnanb < loop_ub
; minnanb ++ ) { iobj_0 -> MotionSubspace -> data [ minnanb ] = obj ->
MotionSubspace -> data [ minnanb ] ; } for ( minnanb = 0 ; minnanb < 16 ;
minnanb ++ ) { iobj_0 -> JointToParentTransform [ minnanb ] = obj ->
JointToParentTransform [ minnanb ] ; } for ( minnanb = 0 ; minnanb < 16 ;
minnanb ++ ) { iobj_0 -> ChildToJointTransform [ minnanb ] = obj ->
ChildToJointTransform [ minnanb ] ; } return newjoint ; } static void
lj1gie5tpj ( bgzkddb0t0 * obj , p4befnw0fh * bodyin , const aiqe041hfp *
parentName , nnaoaxiu0k * iobj_0 , iuu1xhv34c * iobj_1 , mjxrc5f0p2 * iobj_2
) { aiqe041hfp * bname ; bgo4jcdvyx * obj_p ; iuu1xhv34c * jnt ; nnaoaxiu0k *
newObj ; real_T poslim_data [ 12 ] ; real_T b_index ; real_T b_index_p ;
real_T pid ; int32_T b_kstr ; int32_T loop_ub ; char_T b_e [ 9 ] ; char_T b_p
[ 8 ] ; char_T b [ 5 ] ; int8_T msubspace_data [ 36 ] ; int8_T tmp [ 6 ] ;
boolean_T b_bool ; static const int8_T tmp_p [ 16 ] = { 1 , 0 , 0 , 0 , 0 , 1
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ; static const char_T tmp_e [ 5 ] =
{ 'f' , 'i' , 'x' , 'e' , 'd' } ; static const char_T tmp_i [ 8 ] = { 'r' ,
'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_m [ 9 ] =
{ 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ;
pklwprvumn ( & bname , 2 ) ; b_kstr = bname -> size [ 0 ] * bname -> size [ 1
] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = bodyin -> NameInternal ->
size [ 1 ] ; erzqjcuyqu ( bname , b_kstr ) ; loop_ub = bodyin -> NameInternal
-> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
bname -> data [ b_kstr ] = bodyin -> NameInternal -> data [ b_kstr ] ; }
kgp0kxhejg ( obj , bname ) ; pid = kgp0kxhejg ( obj , parentName ) ; b_index
= obj -> NumBodies + 1.0 ; b_kstr = bname -> size [ 0 ] * bname -> size [ 1 ]
; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = bodyin -> NameInternal ->
size [ 1 ] ; erzqjcuyqu ( bname , b_kstr ) ; loop_ub = bodyin -> NameInternal
-> size [ 1 ] - 1 ; for ( b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) {
bname -> data [ b_kstr ] = bodyin -> NameInternal -> data [ b_kstr ] ; }
b_kstr = iobj_2 -> NameInternal -> size [ 0 ] * iobj_2 -> NameInternal ->
size [ 1 ] ; iobj_2 -> NameInternal -> size [ 0 ] = 1 ; iobj_2 ->
NameInternal -> size [ 1 ] = bname -> size [ 1 ] ; erzqjcuyqu ( iobj_2 ->
NameInternal , b_kstr ) ; loop_ub = bname -> size [ 1 ] - 1 ; for ( b_kstr =
0 ; b_kstr <= loop_ub ; b_kstr ++ ) { iobj_2 -> NameInternal -> data [ b_kstr
] = bname -> data [ b_kstr ] ; } iobj_2 -> _pobj1 . InTree = false ; for (
b_kstr = 0 ; b_kstr < 16 ; b_kstr ++ ) { iobj_2 -> _pobj1 .
JointToParentTransform [ b_kstr ] = tmp_p [ b_kstr ] ; } for ( b_kstr = 0 ;
b_kstr < 16 ; b_kstr ++ ) { iobj_2 -> _pobj1 . ChildToJointTransform [ b_kstr
] = tmp_p [ b_kstr ] ; } b_kstr = iobj_2 -> _pobj1 . NameInternal -> size [ 0
] * iobj_2 -> _pobj1 . NameInternal -> size [ 1 ] ; iobj_2 -> _pobj1 .
NameInternal -> size [ 0 ] = 1 ; iobj_2 -> _pobj1 . NameInternal -> size [ 1
] = bname -> size [ 1 ] + 4 ; erzqjcuyqu ( iobj_2 -> _pobj1 . NameInternal ,
b_kstr ) ; loop_ub = bname -> size [ 1 ] ; for ( b_kstr = 0 ; b_kstr <
loop_ub ; b_kstr ++ ) { iobj_2 -> _pobj1 . NameInternal -> data [ b_kstr ] =
bname -> data [ b_kstr ] ; } iobj_2 -> _pobj1 . NameInternal -> data [ bname
-> size [ 1 ] ] = '_' ; iobj_2 -> _pobj1 . NameInternal -> data [ bname ->
size [ 1 ] + 1 ] = 'j' ; iobj_2 -> _pobj1 . NameInternal -> data [ bname ->
size [ 1 ] + 2 ] = 'n' ; iobj_2 -> _pobj1 . NameInternal -> data [ bname ->
size [ 1 ] + 3 ] = 't' ; b_kstr = iobj_2 -> _pobj1 . Type -> size [ 0 ] *
iobj_2 -> _pobj1 . Type -> size [ 1 ] ; iobj_2 -> _pobj1 . Type -> size [ 0 ]
= 1 ; iobj_2 -> _pobj1 . Type -> size [ 1 ] = 5 ; erzqjcuyqu ( iobj_2 ->
_pobj1 . Type , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) {
iobj_2 -> _pobj1 . Type -> data [ b_kstr ] = tmp_e [ b_kstr ] ; } b_kstr =
bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname
-> size [ 1 ] = iobj_2 -> _pobj1 . Type -> size [ 1 ] ; erzqjcuyqu ( bname ,
b_kstr ) ; loop_ub = iobj_2 -> _pobj1 . Type -> size [ 1 ] - 1 ; for ( b_kstr
= 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { bname -> data [ b_kstr ] = iobj_2 ->
_pobj1 . Type -> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr
++ ) { b_p [ b_kstr ] = tmp_i [ b_kstr ] ; } b_bool = false ; if ( bname ->
size [ 1 ] != 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 <
8 ) { if ( bname -> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { b_index_p = 0.0 ; } else { for ( b_kstr = 0
; b_kstr < 9 ; b_kstr ++ ) { b_e [ b_kstr ] = tmp_m [ b_kstr ] ; } if ( bname
-> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr -
1 < 9 ) { if ( bname -> data [ b_kstr - 1 ] != b_e [ b_kstr - 1 ] ) { exitg1
= 1 ; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while
( exitg1 == 0 ) ; } if ( b_bool ) { b_index_p = 1.0 ; } else { b_index_p = -
1.0 ; } } switch ( ( int32_T ) b_index_p ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1
] = 0 ; tmp [ 2 ] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 3.1415926535897931 ; poslim_data [ 1 ] =
3.1415926535897931 ; iobj_2 -> _pobj1 . VelocityNumber = 1.0 ; iobj_2 ->
_pobj1 . PositionNumber = 1.0 ; iobj_2 -> _pobj1 . JointAxisInternal [ 0 ] =
0.0 ; iobj_2 -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; iobj_2 -> _pobj1 .
JointAxisInternal [ 2 ] = 1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] =
0 ; tmp [ 2 ] = 0 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for (
b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) { msubspace_data [ b_kstr ] = tmp [
b_kstr ] ; } poslim_data [ 0 ] = - 0.5 ; poslim_data [ 1 ] = 0.5 ; iobj_2 ->
_pobj1 . VelocityNumber = 1.0 ; iobj_2 -> _pobj1 . PositionNumber = 1.0 ;
iobj_2 -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; iobj_2 -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; iobj_2 -> _pobj1 . JointAxisInternal [ 2 ] =
1.0 ; break ; default : for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
msubspace_data [ b_kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ; poslim_data [ 1 ]
= 0.0 ; iobj_2 -> _pobj1 . VelocityNumber = 0.0 ; iobj_2 -> _pobj1 .
PositionNumber = 0.0 ; iobj_2 -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ;
iobj_2 -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; iobj_2 -> _pobj1 .
JointAxisInternal [ 2 ] = 0.0 ; break ; } b_kstr = iobj_2 -> _pobj1 .
MotionSubspace -> size [ 0 ] * iobj_2 -> _pobj1 . MotionSubspace -> size [ 1
] ; iobj_2 -> _pobj1 . MotionSubspace -> size [ 0 ] = 6 ; iobj_2 -> _pobj1 .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( iobj_2 -> _pobj1 .
MotionSubspace , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 6 ; b_kstr ++ ) {
iobj_2 -> _pobj1 . MotionSubspace -> data [ b_kstr ] = msubspace_data [
b_kstr ] ; } b_kstr = iobj_2 -> _pobj1 . PositionLimitsInternal -> size [ 0 ]
* iobj_2 -> _pobj1 . PositionLimitsInternal -> size [ 1 ] ; iobj_2 -> _pobj1
. PositionLimitsInternal -> size [ 0 ] = 1 ; iobj_2 -> _pobj1 .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( iobj_2 -> _pobj1 .
PositionLimitsInternal , b_kstr ) ; for ( b_kstr = 0 ; b_kstr < 2 ; b_kstr ++
) { iobj_2 -> _pobj1 . PositionLimitsInternal -> data [ b_kstr ] =
poslim_data [ b_kstr ] ; } b_kstr = iobj_2 -> _pobj1 . HomePositionInternal
-> size [ 0 ] ; iobj_2 -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ;
pzzfddv2ss ( iobj_2 -> _pobj1 . HomePositionInternal , b_kstr ) ; iobj_2 ->
_pobj1 . HomePositionInternal -> data [ 0 ] = 0.0 ; iobj_2 -> JointInternal =
& iobj_2 -> _pobj1 ; iobj_2 -> Index = - 1.0 ; iobj_2 -> ParentIndex = - 1.0
; iobj_2 -> CollisionsInternal = jcl5zhq44w ( & iobj_2 -> _pobj0 , 0.0 ) ;
iobj_2 -> JointInternal = axi3tqwpm3 ( & bodyin -> JointInternal , iobj_1 ) ;
newObj = jcl5zhq44w ( iobj_0 , bodyin -> CollisionsInternal . MaxElements ) ;
newObj -> Size = bodyin -> CollisionsInternal . Size ; b_index_p = bodyin ->
CollisionsInternal . Size ; loop_ub = ( int32_T ) b_index_p - 1 ; for (
b_kstr = 0 ; b_kstr <= loop_ub ; b_kstr ++ ) { obj_p = bodyin ->
CollisionsInternal . CollisionGeometries -> data [ b_kstr ] ; newObj ->
CollisionGeometries -> data [ b_kstr ] = obj_p ; } iobj_2 ->
CollisionsInternal = newObj ; obj -> Bodies [ ( int32_T ) b_index - 1 ] =
iobj_2 ; iobj_2 -> Index = b_index ; iobj_2 -> ParentIndex = pid ; iobj_2 ->
JointInternal -> InTree = true ; obj -> NumBodies ++ ; jnt = iobj_2 ->
JointInternal ; b_kstr = bname -> size [ 0 ] * bname -> size [ 1 ] ; bname ->
size [ 0 ] = 1 ; bname -> size [ 1 ] = jnt -> Type -> size [ 1 ] ; erzqjcuyqu
( bname , b_kstr ) ; loop_ub = jnt -> Type -> size [ 1 ] - 1 ; for ( b_kstr =
0 ; b_kstr <= loop_ub ; b_kstr ++ ) { bname -> data [ b_kstr ] = jnt -> Type
-> data [ b_kstr ] ; } for ( b_kstr = 0 ; b_kstr < 5 ; b_kstr ++ ) { b [
b_kstr ] = tmp_e [ b_kstr ] ; } b_bool = false ; if ( bname -> size [ 1 ] !=
5 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 5 ) { if (
bname -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else {
b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 )
; } n3y5ukwimu ( & bname ) ; if ( ! b_bool ) { obj -> NumNonFixedBodies ++ ;
jnt = iobj_2 -> JointInternal ; loop_ub = ( int32_T ) iobj_2 -> Index - 1 ;
obj -> PositionDoFMap [ loop_ub ] = obj -> PositionNumber + 1.0 ; obj ->
PositionDoFMap [ loop_ub + 10 ] = obj -> PositionNumber + jnt ->
PositionNumber ; jnt = iobj_2 -> JointInternal ; loop_ub = ( int32_T ) iobj_2
-> Index - 1 ; obj -> VelocityDoFMap [ loop_ub ] = obj -> VelocityNumber +
1.0 ; obj -> VelocityDoFMap [ loop_ub + 10 ] = obj -> VelocityNumber + jnt ->
VelocityNumber ; } else { loop_ub = ( int32_T ) iobj_2 -> Index - 1 ; obj ->
PositionDoFMap [ loop_ub ] = 0.0 ; obj -> PositionDoFMap [ loop_ub + 10 ] = -
1.0 ; loop_ub = ( int32_T ) iobj_2 -> Index - 1 ; obj -> VelocityDoFMap [
loop_ub ] = 0.0 ; obj -> VelocityDoFMap [ loop_ub + 10 ] = - 1.0 ; } jnt =
iobj_2 -> JointInternal ; obj -> PositionNumber += jnt -> PositionNumber ;
jnt = iobj_2 -> JointInternal ; obj -> VelocityNumber += jnt ->
VelocityNumber ; } static void l5awc5seit ( p1rn1vqdri * obj , n31brccd3l *
rigidbodytree , bgzkddb0t0 * iobj_0 , nnaoaxiu0k * iobj_1 , iuu1xhv34c *
iobj_2 , mjxrc5f0p2 * iobj_3 , nblp1l3k1r * localDW ) { aiqe041hfp * bname ;
aiqe041hfp * switch_expression ; bgo4jcdvyx * obj_e ; mjxrc5f0p2 * obj_p ;
nnaoaxiu0k * newObj ; p4befnw0fh * body ; p4befnw0fh * parent ; real_T
poslim_data [ 12 ] ; real_T b ; real_T bid ; int32_T b_kstr ; int32_T kstr ;
int32_T loop_ub ; char_T b_e [ 9 ] ; char_T b_p [ 8 ] ; int8_T msubspace_data
[ 36 ] ; int8_T tmp [ 6 ] ; boolean_T b_bool ; static const int8_T tmp_p [ 16
] = { 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ;
static const char_T tmp_e [ 8 ] = { 'b' , 'a' , 's' , 'e' , '_' , 'j' , 'n' ,
't' } ; static const char_T tmp_i [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ;
static const char_T tmp_m [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' , 'u' , 't' ,
'e' } ; static const char_T tmp_g [ 9 ] = { 'p' , 'r' , 'i' , 's' , 'm' , 'a'
, 't' , 'i' , 'c' } ; real_T unusedExpr [ 5 ] ; int32_T exitg1 ; boolean_T
exitg2 ; obj_p = & iobj_0 -> Base ; kstr = iobj_0 -> Base . NameInternal ->
size [ 0 ] * iobj_0 -> Base . NameInternal -> size [ 1 ] ; iobj_0 -> Base .
NameInternal -> size [ 0 ] = 1 ; iobj_0 -> Base . NameInternal -> size [ 1 ]
= 4 ; erzqjcuyqu ( iobj_0 -> Base . NameInternal , kstr ) ; iobj_0 -> Base .
NameInternal -> data [ 0 ] = 'b' ; iobj_0 -> Base . NameInternal -> data [ 1
] = 'a' ; iobj_0 -> Base . NameInternal -> data [ 2 ] = 's' ; iobj_0 -> Base
. NameInternal -> data [ 3 ] = 'e' ; obj_p -> _pobj1 . InTree = false ; for (
kstr = 0 ; kstr < 16 ; kstr ++ ) { obj_p -> _pobj1 . JointToParentTransform [
kstr ] = tmp_p [ kstr ] ; } for ( kstr = 0 ; kstr < 16 ; kstr ++ ) { obj_p ->
_pobj1 . ChildToJointTransform [ kstr ] = tmp_p [ kstr ] ; } kstr = obj_p ->
_pobj1 . NameInternal -> size [ 0 ] * obj_p -> _pobj1 . NameInternal -> size
[ 1 ] ; obj_p -> _pobj1 . NameInternal -> size [ 0 ] = 1 ; obj_p -> _pobj1 .
NameInternal -> size [ 1 ] = 8 ; erzqjcuyqu ( obj_p -> _pobj1 . NameInternal
, kstr ) ; for ( kstr = 0 ; kstr < 8 ; kstr ++ ) { obj_p -> _pobj1 .
NameInternal -> data [ kstr ] = tmp_e [ kstr ] ; } kstr = obj_p -> _pobj1 .
Type -> size [ 0 ] * obj_p -> _pobj1 . Type -> size [ 1 ] ; obj_p -> _pobj1 .
Type -> size [ 0 ] = 1 ; obj_p -> _pobj1 . Type -> size [ 1 ] = 5 ;
erzqjcuyqu ( obj_p -> _pobj1 . Type , kstr ) ; for ( kstr = 0 ; kstr < 5 ;
kstr ++ ) { obj_p -> _pobj1 . Type -> data [ kstr ] = tmp_i [ kstr ] ; }
pklwprvumn ( & switch_expression , 2 ) ; kstr = switch_expression -> size [ 0
] * switch_expression -> size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ;
switch_expression -> size [ 1 ] = obj_p -> _pobj1 . Type -> size [ 1 ] ;
erzqjcuyqu ( switch_expression , kstr ) ; loop_ub = obj_p -> _pobj1 . Type ->
size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr ++ ) {
switch_expression -> data [ kstr ] = obj_p -> _pobj1 . Type -> data [ kstr ]
; } for ( kstr = 0 ; kstr < 8 ; kstr ++ ) { b_p [ kstr ] = tmp_m [ kstr ] ; }
b_bool = false ; if ( switch_expression -> size [ 1 ] != 8 ) { } else {
b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if ( switch_expression
-> data [ b_kstr - 1 ] != b_p [ b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr
++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if
( b_bool ) { bid = 0.0 ; } else { for ( kstr = 0 ; kstr < 9 ; kstr ++ ) { b_e
[ kstr ] = tmp_g [ kstr ] ; } if ( switch_expression -> size [ 1 ] != 9 ) { }
else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 9 ) { if (
switch_expression -> data [ b_kstr - 1 ] != b_e [ b_kstr - 1 ] ) { exitg1 = 1
; } else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { bid = 1.0 ; } else { bid = - 1.0 ; } }
switch ( ( int32_T ) bid ) { case 0 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2
] = 1 ; tmp [ 3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 0 ; for ( kstr = 0 ; kstr
< 6 ; kstr ++ ) { msubspace_data [ kstr ] = tmp [ kstr ] ; } poslim_data [ 0
] = - 3.1415926535897931 ; poslim_data [ 1 ] = 3.1415926535897931 ; obj_p ->
_pobj1 . VelocityNumber = 1.0 ; obj_p -> _pobj1 . PositionNumber = 1.0 ;
obj_p -> _pobj1 . JointAxisInternal [ 0 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 2 ] =
1.0 ; break ; case 1 : tmp [ 0 ] = 0 ; tmp [ 1 ] = 0 ; tmp [ 2 ] = 0 ; tmp [
3 ] = 0 ; tmp [ 4 ] = 0 ; tmp [ 5 ] = 1 ; for ( kstr = 0 ; kstr < 6 ; kstr ++
) { msubspace_data [ kstr ] = tmp [ kstr ] ; } poslim_data [ 0 ] = - 0.5 ;
poslim_data [ 1 ] = 0.5 ; obj_p -> _pobj1 . VelocityNumber = 1.0 ; obj_p ->
_pobj1 . PositionNumber = 1.0 ; obj_p -> _pobj1 . JointAxisInternal [ 0 ] =
0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 2 ] = 1.0 ; break ; default : for ( kstr = 0 ; kstr < 6 ;
kstr ++ ) { msubspace_data [ kstr ] = 0 ; } poslim_data [ 0 ] = 0.0 ;
poslim_data [ 1 ] = 0.0 ; obj_p -> _pobj1 . VelocityNumber = 0.0 ; obj_p ->
_pobj1 . PositionNumber = 0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 0 ] =
0.0 ; obj_p -> _pobj1 . JointAxisInternal [ 1 ] = 0.0 ; obj_p -> _pobj1 .
JointAxisInternal [ 2 ] = 0.0 ; break ; } kstr = obj_p -> _pobj1 .
MotionSubspace -> size [ 0 ] * obj_p -> _pobj1 . MotionSubspace -> size [ 1 ]
; obj_p -> _pobj1 . MotionSubspace -> size [ 0 ] = 6 ; obj_p -> _pobj1 .
MotionSubspace -> size [ 1 ] = 1 ; fqvnblve2d ( obj_p -> _pobj1 .
MotionSubspace , kstr ) ; for ( kstr = 0 ; kstr < 6 ; kstr ++ ) { obj_p ->
_pobj1 . MotionSubspace -> data [ kstr ] = msubspace_data [ kstr ] ; } kstr =
obj_p -> _pobj1 . PositionLimitsInternal -> size [ 0 ] * obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 1 ] ; obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 0 ] = 1 ; obj_p -> _pobj1 .
PositionLimitsInternal -> size [ 1 ] = 2 ; fqvnblve2d ( obj_p -> _pobj1 .
PositionLimitsInternal , kstr ) ; for ( kstr = 0 ; kstr < 2 ; kstr ++ ) {
obj_p -> _pobj1 . PositionLimitsInternal -> data [ kstr ] = poslim_data [
kstr ] ; } kstr = obj_p -> _pobj1 . HomePositionInternal -> size [ 0 ] ;
obj_p -> _pobj1 . HomePositionInternal -> size [ 0 ] = 1 ; pzzfddv2ss ( obj_p
-> _pobj1 . HomePositionInternal , kstr ) ; obj_p -> _pobj1 .
HomePositionInternal -> data [ 0 ] = 0.0 ; iobj_0 -> Base . JointInternal = &
obj_p -> _pobj1 ; iobj_0 -> Base . Index = - 1.0 ; iobj_0 -> Base .
ParentIndex = - 1.0 ; iobj_0 -> Base . CollisionsInternal = jcl5zhq44w ( &
iobj_0 -> Base . _pobj0 , 0.0 ) ; iobj_0 -> Base . Index = 0.0 ; kpzcr4m3le (
unusedExpr , localDW ) ; mwusr4xyjp ( iobj_0 , & iobj_0 -> _pobj0 [ 0 ] ,
localDW ) ; kstr = switch_expression -> size [ 0 ] * switch_expression ->
size [ 1 ] ; switch_expression -> size [ 0 ] = 1 ; switch_expression -> size
[ 1 ] = rigidbodytree -> Base . NameInternal -> size [ 1 ] ; erzqjcuyqu (
switch_expression , kstr ) ; loop_ub = rigidbodytree -> Base . NameInternal
-> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr ++ ) {
switch_expression -> data [ kstr ] = rigidbodytree -> Base . NameInternal ->
data [ kstr ] ; } pklwprvumn ( & bname , 2 ) ; bid = - 1.0 ; kstr = bname ->
size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [
1 ] = iobj_0 -> Base . NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname , kstr
) ; loop_ub = iobj_0 -> Base . NameInternal -> size [ 1 ] - 1 ; for ( kstr =
0 ; kstr <= loop_ub ; kstr ++ ) { bname -> data [ kstr ] = iobj_0 -> Base .
NameInternal -> data [ kstr ] ; } if ( iwsovvg252 ( bname , switch_expression
) ) { bid = 0.0 ; } else { b = iobj_0 -> NumBodies ; b_kstr = 0 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( b_kstr <= ( int32_T ) b - 1 ) ) { obj_p =
iobj_0 -> Bodies [ b_kstr ] ; kstr = bname -> size [ 0 ] * bname -> size [ 1
] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = obj_p -> NameInternal ->
size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub = obj_p -> NameInternal ->
size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr ++ ) { bname -> data
[ kstr ] = obj_p -> NameInternal -> data [ kstr ] ; } if ( iwsovvg252 ( bname
, switch_expression ) ) { bid = ( real_T ) b_kstr + 1.0 ; exitg2 = true ; }
else { b_kstr ++ ; } } } if ( ( ! ( bid == 0.0 ) ) && ( bid < 0.0 ) ) { kstr
= iobj_0 -> Base . NameInternal -> size [ 0 ] * iobj_0 -> Base . NameInternal
-> size [ 1 ] ; iobj_0 -> Base . NameInternal -> size [ 0 ] = 1 ; iobj_0 ->
Base . NameInternal -> size [ 1 ] = switch_expression -> size [ 1 ] ;
erzqjcuyqu ( iobj_0 -> Base . NameInternal , kstr ) ; loop_ub =
switch_expression -> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr
++ ) { iobj_0 -> Base . NameInternal -> data [ kstr ] = switch_expression ->
data [ kstr ] ; } } n3y5ukwimu ( & switch_expression ) ; newObj = jcl5zhq44w
( & ( & iobj_1 [ 0 ] ) [ 0 ] , rigidbodytree -> Base . CollisionsInternal .
MaxElements ) ; newObj -> Size = rigidbodytree -> Base . CollisionsInternal .
Size ; b = rigidbodytree -> Base . CollisionsInternal . Size ; kstr = (
int32_T ) b - 1 ; for ( b_kstr = 0 ; b_kstr <= kstr ; b_kstr ++ ) { obj_e =
rigidbodytree -> Base . CollisionsInternal . CollisionGeometries -> data [
b_kstr ] ; newObj -> CollisionGeometries -> data [ b_kstr ] = obj_e ; }
iobj_0 -> Base . CollisionsInternal = newObj ; if ( 1.0 <= rigidbodytree ->
NumBodies ) { body = rigidbodytree -> Bodies [ 0 ] ; bid = body ->
ParentIndex ; if ( bid > 0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T
) bid - 1 ] ; } else { parent = & rigidbodytree -> Base ; } kstr = bname ->
size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [
1 ] = parent -> NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ;
loop_ub = parent -> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <=
loop_ub ; kstr ++ ) { bname -> data [ kstr ] = parent -> NameInternal -> data
[ kstr ] ; } lj1gie5tpj ( iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 1 ]
, & ( & iobj_2 [ 0 ] ) [ 0 ] , & ( & iobj_3 [ 0 ] ) [ 0 ] ) ; } if ( 2.0 <=
rigidbodytree -> NumBodies ) { body = rigidbodytree -> Bodies [ 1 ] ; bid =
body -> ParentIndex ; if ( bid > 0.0 ) { parent = rigidbodytree -> Bodies [ (
int32_T ) bid - 1 ] ; } else { parent = & rigidbodytree -> Base ; } kstr =
bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname
-> size [ 1 ] = parent -> NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname ,
kstr ) ; loop_ub = parent -> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0
; kstr <= loop_ub ; kstr ++ ) { bname -> data [ kstr ] = parent ->
NameInternal -> data [ kstr ] ; } lj1gie5tpj ( iobj_0 , body , bname , & ( &
iobj_1 [ 0 ] ) [ 2 ] , & ( & iobj_2 [ 0 ] ) [ 1 ] , & ( & iobj_3 [ 0 ] ) [ 1
] ) ; } if ( 3.0 <= rigidbodytree -> NumBodies ) { body = rigidbodytree ->
Bodies [ 2 ] ; bid = body -> ParentIndex ; if ( bid > 0.0 ) { parent =
rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else { parent = &
rigidbodytree -> Base ; } kstr = bname -> size [ 0 ] * bname -> size [ 1 ] ;
bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent -> NameInternal ->
size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub = parent -> NameInternal
-> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr ++ ) { bname ->
data [ kstr ] = parent -> NameInternal -> data [ kstr ] ; } lj1gie5tpj (
iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 3 ] , & ( & iobj_2 [ 0 ] ) [ 2
] , & ( & iobj_3 [ 0 ] ) [ 2 ] ) ; } if ( 4.0 <= rigidbodytree -> NumBodies )
{ body = rigidbodytree -> Bodies [ 3 ] ; bid = body -> ParentIndex ; if ( bid
> 0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } kstr = bname -> size [ 0 ] * bname ->
size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub = parent
-> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr
++ ) { bname -> data [ kstr ] = parent -> NameInternal -> data [ kstr ] ; }
lj1gie5tpj ( iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 4 ] , & ( &
iobj_2 [ 0 ] ) [ 3 ] , & ( & iobj_3 [ 0 ] ) [ 3 ] ) ; } if ( 5.0 <=
rigidbodytree -> NumBodies ) { body = rigidbodytree -> Bodies [ 4 ] ; bid =
body -> ParentIndex ; if ( bid > 0.0 ) { parent = rigidbodytree -> Bodies [ (
int32_T ) bid - 1 ] ; } else { parent = & rigidbodytree -> Base ; } kstr =
bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname
-> size [ 1 ] = parent -> NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname ,
kstr ) ; loop_ub = parent -> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0
; kstr <= loop_ub ; kstr ++ ) { bname -> data [ kstr ] = parent ->
NameInternal -> data [ kstr ] ; } lj1gie5tpj ( iobj_0 , body , bname , & ( &
iobj_1 [ 0 ] ) [ 5 ] , & ( & iobj_2 [ 0 ] ) [ 4 ] , & ( & iobj_3 [ 0 ] ) [ 4
] ) ; } if ( 6.0 <= rigidbodytree -> NumBodies ) { body = rigidbodytree ->
Bodies [ 5 ] ; bid = body -> ParentIndex ; if ( bid > 0.0 ) { parent =
rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else { parent = &
rigidbodytree -> Base ; } kstr = bname -> size [ 0 ] * bname -> size [ 1 ] ;
bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent -> NameInternal ->
size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub = parent -> NameInternal
-> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr ++ ) { bname ->
data [ kstr ] = parent -> NameInternal -> data [ kstr ] ; } lj1gie5tpj (
iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 6 ] , & ( & iobj_2 [ 0 ] ) [ 5
] , & ( & iobj_3 [ 0 ] ) [ 5 ] ) ; } if ( 7.0 <= rigidbodytree -> NumBodies )
{ body = rigidbodytree -> Bodies [ 6 ] ; bid = body -> ParentIndex ; if ( bid
> 0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else {
parent = & rigidbodytree -> Base ; } kstr = bname -> size [ 0 ] * bname ->
size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent ->
NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub = parent
-> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr
++ ) { bname -> data [ kstr ] = parent -> NameInternal -> data [ kstr ] ; }
lj1gie5tpj ( iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 7 ] , & ( &
iobj_2 [ 0 ] ) [ 6 ] , & ( & iobj_3 [ 0 ] ) [ 6 ] ) ; } if ( 8.0 <=
rigidbodytree -> NumBodies ) { body = rigidbodytree -> Bodies [ 7 ] ; bid =
body -> ParentIndex ; if ( bid > 0.0 ) { parent = rigidbodytree -> Bodies [ (
int32_T ) bid - 1 ] ; } else { parent = & rigidbodytree -> Base ; } kstr =
bname -> size [ 0 ] * bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname
-> size [ 1 ] = parent -> NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname ,
kstr ) ; loop_ub = parent -> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0
; kstr <= loop_ub ; kstr ++ ) { bname -> data [ kstr ] = parent ->
NameInternal -> data [ kstr ] ; } lj1gie5tpj ( iobj_0 , body , bname , & ( &
iobj_1 [ 0 ] ) [ 8 ] , & ( & iobj_2 [ 0 ] ) [ 7 ] , & ( & iobj_3 [ 0 ] ) [ 7
] ) ; } if ( 9.0 <= rigidbodytree -> NumBodies ) { body = rigidbodytree ->
Bodies [ 8 ] ; bid = body -> ParentIndex ; if ( bid > 0.0 ) { parent =
rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; } else { parent = &
rigidbodytree -> Base ; } kstr = bname -> size [ 0 ] * bname -> size [ 1 ] ;
bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent -> NameInternal ->
size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub = parent -> NameInternal
-> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ; kstr ++ ) { bname ->
data [ kstr ] = parent -> NameInternal -> data [ kstr ] ; } lj1gie5tpj (
iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 9 ] , & ( & iobj_2 [ 0 ] ) [ 8
] , & ( & iobj_3 [ 0 ] ) [ 8 ] ) ; } if ( 10.0 <= rigidbodytree -> NumBodies
) { body = rigidbodytree -> Bodies [ 9 ] ; bid = body -> ParentIndex ; if (
bid > 0.0 ) { parent = rigidbodytree -> Bodies [ ( int32_T ) bid - 1 ] ; }
else { parent = & rigidbodytree -> Base ; } kstr = bname -> size [ 0 ] *
bname -> size [ 1 ] ; bname -> size [ 0 ] = 1 ; bname -> size [ 1 ] = parent
-> NameInternal -> size [ 1 ] ; erzqjcuyqu ( bname , kstr ) ; loop_ub =
parent -> NameInternal -> size [ 1 ] - 1 ; for ( kstr = 0 ; kstr <= loop_ub ;
kstr ++ ) { bname -> data [ kstr ] = parent -> NameInternal -> data [ kstr ]
; } lj1gie5tpj ( iobj_0 , body , bname , & ( & iobj_1 [ 0 ] ) [ 10 ] , & ( &
iobj_2 [ 0 ] ) [ 9 ] , & ( & iobj_3 [ 0 ] ) [ 9 ] ) ; } n3y5ukwimu ( & bname
) ; obj -> RigidBodyTreeInternal = iobj_0 ; } static void ekk3jsv0jl (
a3umz4zmr0 * obj , nblp1l3k1r * localDW ) { bgzkddb0t0 * iobj_0 ; iuu1xhv34c
* iobj_2 ; mjxrc5f0p2 * iobj_3 ; nnaoaxiu0k * iobj_1 ; p1rn1vqdri * obj_p ;
pfxij5ag5q * iobj_4 ; real_T params_DampingBias ; real_T
params_ErrorChangeTolerance ; int32_T ret ; char_T b [ 18 ] ; char_T
switch_expression [ 18 ] ; boolean_T params_UseErrorDamping ; static const
i2euuevope tmp = { 0.0 , 0.0 } ; static const char_T tmp_p [ 18 ] = { 'L' ,
'e' , 'v' , 'e' , 'n' , 'b' , 'e' , 'r' , 'g' , 'M' , 'a' , 'r' , 'q' , 'u' ,
'a' , 'r' , 'd' , 't' } ; obj -> isInitialized = 1 ; fg132zcyjk ( & obj ->
TreeInternal ) ; obj_p = & obj -> IKInternal ; obj -> IKInternal .
isInitialized = 0 ; iobj_0 = & obj -> IKInternal . _pobj1 ; iobj_1 = & obj ->
IKInternal . _pobj2 [ 0 ] ; iobj_2 = & obj -> IKInternal . _pobj3 [ 0 ] ;
iobj_3 = & obj -> IKInternal . _pobj4 [ 0 ] ; iobj_4 = & obj -> IKInternal .
_pobj5 ; l5awc5seit ( & obj -> IKInternal , & obj -> TreeInternal , iobj_0 ,
& ( & ( & iobj_1 [ 0 ] ) [ 0 ] ) [ 0 ] , & ( & ( & iobj_2 [ 0 ] ) [ 0 ] ) [ 0
] , & ( & ( & iobj_3 [ 0 ] ) [ 0 ] ) [ 0 ] , localDW ) ; iobj_4 ->
MaxNumIteration = 1500.0 ; iobj_4 -> MaxTime = 10.0 ; iobj_4 ->
SolutionTolerance = 1.0E-6 ; iobj_4 -> ConstraintsOn = true ; iobj_4 ->
RandomRestart = true ; iobj_4 -> StepTolerance = 1.0E-12 ; iobj_4 ->
GradientTolerance = 5.0E-9 ; iobj_4 -> ErrorChangeTolerance = 1.0E-12 ;
iobj_4 -> DampingBias = 0.0025 ; iobj_4 -> UseErrorDamping = true ; for ( ret
= 0 ; ret < 18 ; ret ++ ) { iobj_4 -> Name [ ret ] = tmp_p [ ret ] ; } iobj_4
-> TimeObj . StartTime = tmp ; iobj_4 -> TimeObjInternal . StartTime = tmp ;
obj_p -> Solver = iobj_4 ; iobj_4 = obj_p -> Solver ;
params_ErrorChangeTolerance = iobj_4 -> ErrorChangeTolerance ;
params_DampingBias = iobj_4 -> DampingBias ; params_UseErrorDamping = iobj_4
-> UseErrorDamping ; for ( ret = 0 ; ret < 18 ; ret ++ ) { switch_expression
[ ret ] = obj_p -> Solver -> Name [ ret ] ; } for ( ret = 0 ; ret < 18 ; ret
++ ) { b [ ret ] = tmp_p [ ret ] ; } ret = memcmp ( & switch_expression [ 0 ]
, & b [ 0 ] , 18 ) ; if ( ret == 0 ) { params_ErrorChangeTolerance = 1.0E-12
; params_DampingBias = 0.0025 ; params_UseErrorDamping = true ; } iobj_4 =
obj_p -> Solver ; iobj_4 -> MaxNumIteration = 1500.0 ; iobj_4 -> MaxTime =
10.0 ; iobj_4 -> GradientTolerance = 1.0E-7 ; iobj_4 -> SolutionTolerance =
1.0E-6 ; iobj_4 -> ConstraintsOn = true ; iobj_4 -> RandomRestart = false ;
iobj_4 -> StepTolerance = 1.0E-14 ; iobj_4 -> ErrorChangeTolerance =
params_ErrorChangeTolerance ; iobj_4 -> DampingBias = params_DampingBias ;
iobj_4 -> UseErrorDamping = params_UseErrorDamping ; obj_p ->
matlabCodegenIsDeleted = false ; } static void kjfnwyvwvk ( bgzkddb0t0 * obj
, gmphnpqbau * limits ) { aiqe041hfp * a ; iuu1xhv34c * obj_p ; mjxrc5f0p2 *
body ; real_T k ; real_T pnum ; int32_T b_kstr ; int32_T c ; int32_T i ;
int32_T limits_p ; int32_T loop_ub ; char_T b [ 5 ] ; boolean_T b_bool ;
static const char_T tmp [ 5 ] = { 'f' , 'i' , 'x' , 'e' , 'd' } ; int32_T
exitg1 ; int32_T i_p ; i_p = limits -> size [ 0 ] * limits -> size [ 1 ] ;
limits -> size [ 0 ] = ( int32_T ) obj -> PositionNumber ; limits -> size [ 1
] = 2 ; fqvnblve2d ( limits , i_p ) ; loop_ub = ( ( int32_T ) obj ->
PositionNumber << 1 ) - 1 ; for ( i_p = 0 ; i_p <= loop_ub ; i_p ++ ) {
limits -> data [ i_p ] = 0.0 ; } k = 1.0 ; pnum = obj -> NumBodies ; c = (
int32_T ) pnum - 1 ; if ( 0 <= ( int32_T ) pnum - 1 ) { for ( i_p = 0 ; i_p <
5 ; i_p ++ ) { b [ i_p ] = tmp [ i_p ] ; } } pklwprvumn ( & a , 2 ) ; for (
limits_p = 0 ; limits_p <= c ; limits_p ++ ) { body = obj -> Bodies [
limits_p ] ; i_p = a -> size [ 0 ] * a -> size [ 1 ] ; a -> size [ 0 ] = 1 ;
a -> size [ 1 ] = body -> JointInternal -> Type -> size [ 1 ] ; erzqjcuyqu (
a , i_p ) ; loop_ub = body -> JointInternal -> Type -> size [ 1 ] - 1 ; for (
i_p = 0 ; i_p <= loop_ub ; i_p ++ ) { a -> data [ i_p ] = body ->
JointInternal -> Type -> data [ i_p ] ; } b_bool = false ; if ( a -> size [ 1
] != 5 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 5 ) { if
( a -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; } else {
b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1 == 0 )
; } if ( ! b_bool ) { pnum = body -> JointInternal -> PositionNumber ; if ( k
> ( k + pnum ) - 1.0 ) { b_kstr = 0 ; } else { b_kstr = ( int32_T ) k - 1 ; }
obj_p = body -> JointInternal ; loop_ub = obj_p -> PositionLimitsInternal ->
size [ 0 ] ; for ( i_p = 0 ; i_p < 2 ; i_p ++ ) { for ( i = 0 ; i < loop_ub ;
i ++ ) { limits -> data [ ( b_kstr + i ) + limits -> size [ 0 ] * i_p ] =
obj_p -> PositionLimitsInternal -> data [ i + obj_p -> PositionLimitsInternal
-> size [ 0 ] * i_p ] ; } } k += pnum ; } } n3y5ukwimu ( & a ) ; } static
void pjcqxll5fb ( const boolean_T x [ 6 ] , int32_T i_data [ ] , int32_T *
i_size ) { int32_T b_ii ; int32_T idx ; boolean_T exitg1 ; idx = 0 ; b_ii = 1
; exitg1 = false ; while ( ( ! exitg1 ) && ( b_ii - 1 < 6 ) ) { if ( x [ b_ii
- 1 ] ) { idx ++ ; i_data [ idx - 1 ] = b_ii ; if ( idx >= 6 ) { exitg1 =
true ; } else { b_ii ++ ; } } else { b_ii ++ ; } } if ( 1 > idx ) { idx = 0 ;
} * i_size = idx ; } static void hlzq4q20jr ( real_T * tstart_tv_sec , real_T
* tstart_tv_nsec , nblp1l3k1r * localDW ) { coderTimespec b_timespec ; if ( !
localDW -> cbi103hnwr ) { localDW -> cbi103hnwr = true ;
coderInitTimeFunctions ( & localDW -> aqlkdng0y4 ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , localDW -> aqlkdng0y4 ) ; *
tstart_tv_sec = b_timespec . tv_sec ; * tstart_tv_nsec = b_timespec . tv_nsec
; } static void pyvcyjnsbr ( bgzkddb0t0 * obj , mjxrc5f0p2 * body ,
gmphnpqbau * indices ) { real_T i ; int32_T i_p ; int32_T loop_ub ; i_p =
indices -> size [ 0 ] * indices -> size [ 1 ] ; indices -> size [ 0 ] = 1 ;
indices -> size [ 1 ] = ( int32_T ) ( obj -> NumBodies + 1.0 ) ; fqvnblve2d (
indices , i_p ) ; loop_ub = ( int32_T ) ( obj -> NumBodies + 1.0 ) - 1 ; for
( i_p = 0 ; i_p <= loop_ub ; i_p ++ ) { indices -> data [ i_p ] = 0.0 ; } i =
2.0 ; indices -> data [ 0 ] = body -> Index ; while ( body -> ParentIndex >
0.0 ) { body = obj -> Bodies [ ( int32_T ) body -> ParentIndex - 1 ] ;
indices -> data [ ( int32_T ) i - 1 ] = body -> Index ; i ++ ; } if ( body ->
Index > 0.0 ) { indices -> data [ ( int32_T ) i - 1 ] = body -> ParentIndex ;
i ++ ; } loop_ub = ( int32_T ) ( i - 1.0 ) ; for ( i_p = 0 ; i_p < loop_ub ;
i_p ++ ) { } i_p = indices -> size [ 0 ] * indices -> size [ 1 ] ; indices ->
size [ 0 ] = 1 ; indices -> size [ 1 ] = ( int32_T ) ( i - 1.0 ) ; fqvnblve2d
( indices , i_p ) ; } static void g41mplts0w ( gmphnpqbau * * pEmxArray ) {
if ( * pEmxArray != ( gmphnpqbau * ) NULL ) { if ( ( ( * pEmxArray ) -> data
!= ( real_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( *
pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( gmphnpqbau * ) NULL ; } } static void
h2sq52n2mg ( bgzkddb0t0 * obj , mjxrc5f0p2 * body1 , mjxrc5f0p2 * body2 ,
gmphnpqbau * indices ) { gmphnpqbau * ancestorIndices1 ; gmphnpqbau *
ancestorIndices2 ; int32_T b_i ; int32_T d ; int32_T g ; int32_T h ; int32_T
j ; int32_T minPathLength ; boolean_T exitg1 ; nonxxy2aaj ( &
ancestorIndices1 , 2 ) ; nonxxy2aaj ( & ancestorIndices2 , 2 ) ; pyvcyjnsbr (
obj , body1 , ancestorIndices1 ) ; pyvcyjnsbr ( obj , body2 ,
ancestorIndices2 ) ; minPathLength = ( int32_T ) muDoubleScalarMin (
ancestorIndices1 -> size [ 1 ] , ancestorIndices2 -> size [ 1 ] ) ; b_i = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( b_i <= minPathLength - 2 ) ) { if
( ancestorIndices1 -> data [ ( ancestorIndices1 -> size [ 1 ] - b_i ) - 2 ]
!= ancestorIndices2 -> data [ ( ancestorIndices2 -> size [ 1 ] - b_i ) - 2 ]
) { minPathLength = b_i + 1 ; exitg1 = true ; } else { b_i ++ ; } } d =
ancestorIndices1 -> size [ 1 ] - minPathLength ; if ( 1 > d ) { b_i = - 1 ; }
else { b_i = d - 1 ; } d = ancestorIndices2 -> size [ 1 ] - minPathLength ;
if ( 1 > d ) { j = 0 ; h = 1 ; g = - 1 ; } else { j = d - 1 ; h = - 1 ; g = 0
; } d = indices -> size [ 0 ] * indices -> size [ 1 ] ; indices -> size [ 0 ]
= 1 ; indices -> size [ 1 ] = ( div_s32_floor ( g - j , h ) + b_i ) + 3 ;
fqvnblve2d ( indices , d ) ; for ( d = 0 ; d <= b_i ; d ++ ) { indices ->
data [ d ] = ancestorIndices1 -> data [ d ] ; } indices -> data [ b_i + 1 ] =
ancestorIndices1 -> data [ ancestorIndices1 -> size [ 1 ] - minPathLength ] ;
minPathLength = div_s32_floor ( g - j , h ) ; g41mplts0w ( & ancestorIndices1
) ; for ( d = 0 ; d <= minPathLength ; d ++ ) { indices -> data [ ( d + b_i )
+ 2 ] = ancestorIndices2 -> data [ h * d + j ] ; } g41mplts0w ( &
ancestorIndices2 ) ; } static void hloxgsbgze ( const real_T A [ 36 ] , const
gmphnpqbau * B_p , gmphnpqbau * C ) { real_T s ; int32_T b_i ; int32_T b_j ;
int32_T b_k ; int32_T boffset ; int32_T coffset ; int32_T n ; n = B_p -> size
[ 1 ] - 1 ; b_j = C -> size [ 0 ] * C -> size [ 1 ] ; C -> size [ 0 ] = 6 ; C
-> size [ 1 ] = B_p -> size [ 1 ] ; fqvnblve2d ( C , b_j ) ; for ( b_j = 0 ;
b_j <= n ; b_j ++ ) { coffset = b_j * 6 - 1 ; boffset = b_j * 6 - 1 ; for (
b_i = 0 ; b_i < 6 ; b_i ++ ) { s = 0.0 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) {
s += A [ b_k * 6 + b_i ] * B_p -> data [ ( boffset + b_k ) + 1 ] ; } C ->
data [ ( coffset + b_i ) + 1 ] = s ; } } } static void lgn1dnuopl ( const
iuu1xhv34c * obj , real_T ax [ 3 ] ) { int32_T b_kstr ; char_T b_p [ 9 ] ;
char_T b [ 8 ] ; boolean_T b_bool ; static const char_T tmp [ 8 ] = { 'r' ,
'e' , 'v' , 'o' , 'l' , 'u' , 't' , 'e' } ; static const char_T tmp_p [ 9 ] =
{ 'p' , 'r' , 'i' , 's' , 'm' , 'a' , 't' , 'i' , 'c' } ; int32_T exitg1 ;
boolean_T guard1 = false ; for ( b_kstr = 0 ; b_kstr < 8 ; b_kstr ++ ) { b [
b_kstr ] = tmp [ b_kstr ] ; } b_bool = false ; if ( obj -> Type -> size [ 1 ]
!= 8 ) { } else { b_kstr = 1 ; do { exitg1 = 0 ; if ( b_kstr - 1 < 8 ) { if (
obj -> Type -> data [ b_kstr - 1 ] != b [ b_kstr - 1 ] ) { exitg1 = 1 ; }
else { b_kstr ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while ( exitg1
== 0 ) ; } guard1 = false ; if ( b_bool ) { guard1 = true ; } else { for (
b_kstr = 0 ; b_kstr < 9 ; b_kstr ++ ) { b_p [ b_kstr ] = tmp_p [ b_kstr ] ; }
if ( obj -> Type -> size [ 1 ] != 9 ) { } else { b_kstr = 1 ; do { exitg1 = 0
; if ( b_kstr - 1 < 9 ) { if ( obj -> Type -> data [ b_kstr - 1 ] != b_p [
b_kstr - 1 ] ) { exitg1 = 1 ; } else { b_kstr ++ ; } } else { b_bool = true ;
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { guard1 = true ; }
else { ax [ 0 ] = ( rtNaN ) ; ax [ 1 ] = ( rtNaN ) ; ax [ 2 ] = ( rtNaN ) ; }
} if ( guard1 ) { ax [ 0 ] = obj -> JointAxisInternal [ 0 ] ; ax [ 1 ] = obj
-> JointAxisInternal [ 1 ] ; ax [ 2 ] = obj -> JointAxisInternal [ 2 ] ; } }
static void cwhfrdau3r ( real_T varargin_1 , real_T varargin_2 , real_T
varargin_3 , real_T varargin_4 , real_T varargin_5 , real_T varargin_6 ,
real_T varargin_7 , real_T varargin_8 , real_T varargin_9 , real_T y [ 9 ] )
{ y [ 0 ] = varargin_1 ; y [ 1 ] = varargin_2 ; y [ 2 ] = varargin_3 ; y [ 3
] = varargin_4 ; y [ 4 ] = varargin_5 ; y [ 5 ] = varargin_6 ; y [ 6 ] =
varargin_7 ; y [ 7 ] = varargin_8 ; y [ 8 ] = varargin_9 ; } static void
iuuo3fie31 ( bgzkddb0t0 * obj , const real_T qv [ 6 ] , const aiqe041hfp *
body1Name , real_T T_data [ ] , int32_T T_size [ 2 ] , gmphnpqbau * Jac ) {
aiqe041hfp * body2Name ; gmphnpqbau * b ; gmphnpqbau * kinematicPathIndices ;
gmphnpqbau * tmp ; iuu1xhv34c * joint ; mjxrc5f0p2 * body1 ; mjxrc5f0p2 *
body2 ; real_T Tj_e [ 36 ] ; real_T T1 [ 16 ] ; real_T T1j [ 16 ] ; real_T
Tc2p [ 16 ] ; real_T Tj [ 16 ] ; real_T Tj_p [ 16 ] ; real_T b_e [ 16 ] ;
real_T R [ 9 ] ; real_T tempR [ 9 ] ; real_T result_data [ 4 ] ; real_T v [ 3
] ; real_T axang_idx_2 ; real_T bid1 ; real_T bid2 ; real_T qidx_idx_1 ;
int32_T Jac_p ; int32_T c ; int32_T f ; int32_T g ; int32_T i ; int32_T
loop_ub ; char_T b_i [ 8 ] ; char_T b_p [ 5 ] ; boolean_T b_bool ; boolean_T
nextBodyIsParent ; static const char_T tmp_p [ 5 ] = { 'f' , 'i' , 'x' , 'e'
, 'd' } ; static const char_T tmp_e [ 8 ] = { 'r' , 'e' , 'v' , 'o' , 'l' ,
'u' , 't' , 'e' } ; gmphnpqbau * Jac_e ; int32_T exitg1 ; pklwprvumn ( &
body2Name , 2 ) ; i = body2Name -> size [ 0 ] * body2Name -> size [ 1 ] ;
body2Name -> size [ 0 ] = 1 ; body2Name -> size [ 1 ] = obj -> Base .
NameInternal -> size [ 1 ] ; erzqjcuyqu ( body2Name , i ) ; loop_ub = obj ->
Base . NameInternal -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) {
body2Name -> data [ i ] = obj -> Base . NameInternal -> data [ i ] ; } bid1 =
kgp0kxhejg ( obj , body1Name ) ; bid2 = kgp0kxhejg ( obj , body2Name ) ; if (
bid1 == 0.0 ) { body1 = & obj -> Base ; } else { body1 = obj -> Bodies [ (
int32_T ) bid1 - 1 ] ; } if ( bid2 == 0.0 ) { body2 = & obj -> Base ; } else
{ body2 = obj -> Bodies [ ( int32_T ) bid2 - 1 ] ; } nonxxy2aaj ( &
kinematicPathIndices , 2 ) ; h2sq52n2mg ( obj , body1 , body2 ,
kinematicPathIndices ) ; memset ( & T1 [ 0 ] , 0 , sizeof ( real_T ) << 4U )
; T1 [ 0 ] = 1.0 ; T1 [ 5 ] = 1.0 ; T1 [ 10 ] = 1.0 ; T1 [ 15 ] = 1.0 ; i =
Jac -> size [ 0 ] * Jac -> size [ 1 ] ; Jac -> size [ 0 ] = 6 ; Jac -> size [
1 ] = ( int32_T ) obj -> PositionNumber ; fqvnblve2d ( Jac , i ) ; loop_ub =
6 * ( int32_T ) obj -> PositionNumber - 1 ; for ( i = 0 ; i <= loop_ub ; i ++
) { Jac -> data [ i ] = 0.0 ; } c = kinematicPathIndices -> size [ 1 ] - 2 ;
if ( 0 <= kinematicPathIndices -> size [ 1 ] - 2 ) { for ( i = 0 ; i < 5 ; i
++ ) { b_p [ i ] = tmp_p [ i ] ; } } nonxxy2aaj ( & b , 2 ) ; nonxxy2aaj ( &
tmp , 2 ) ; for ( Jac_p = 0 ; Jac_p <= c ; Jac_p ++ ) { if (
kinematicPathIndices -> data [ Jac_p ] != 0.0 ) { body1 = obj -> Bodies [ (
int32_T ) kinematicPathIndices -> data [ Jac_p ] - 1 ] ; } else { body1 = &
obj -> Base ; } if ( kinematicPathIndices -> data [ Jac_p + 1 ] != 0.0 ) {
body2 = obj -> Bodies [ ( int32_T ) kinematicPathIndices -> data [ Jac_p + 1
] - 1 ] ; } else { body2 = & obj -> Base ; } nextBodyIsParent = ( body2 ->
Index == body1 -> ParentIndex ) ; if ( nextBodyIsParent ) { body2 = body1 ;
bid1 = 1.0 ; } else { bid1 = - 1.0 ; } joint = body2 -> JointInternal ; i =
body2Name -> size [ 0 ] * body2Name -> size [ 1 ] ; body2Name -> size [ 0 ] =
1 ; body2Name -> size [ 1 ] = joint -> Type -> size [ 1 ] ; erzqjcuyqu (
body2Name , i ) ; loop_ub = joint -> Type -> size [ 1 ] - 1 ; for ( i = 0 ; i
<= loop_ub ; i ++ ) { body2Name -> data [ i ] = joint -> Type -> data [ i ] ;
} b_bool = false ; if ( body2Name -> size [ 1 ] != 5 ) { } else { i = 1 ; do
{ exitg1 = 0 ; if ( i - 1 < 5 ) { if ( body2Name -> data [ i - 1 ] != b_p [ i
- 1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool = true ; exitg1 = 1
; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { for ( i = 0 ; i < 16 ; i ++ )
{ Tj [ i ] = joint -> JointToParentTransform [ i ] ; } i = body2Name -> size
[ 0 ] * body2Name -> size [ 1 ] ; body2Name -> size [ 0 ] = 1 ; body2Name ->
size [ 1 ] = joint -> Type -> size [ 1 ] ; erzqjcuyqu ( body2Name , i ) ;
loop_ub = joint -> Type -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i ++
) { body2Name -> data [ i ] = joint -> Type -> data [ i ] ; } b_bool = false
; if ( body2Name -> size [ 1 ] != 5 ) { } else { i = 1 ; do { exitg1 = 0 ; if
( i - 1 < 5 ) { if ( body2Name -> data [ i - 1 ] != b_p [ i - 1 ] ) { exitg1
= 1 ; } else { i ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { bid2 = 0.0 ; } else { for ( i = 0 ; i < 8 ;
i ++ ) { b_i [ i ] = tmp_e [ i ] ; } if ( body2Name -> size [ 1 ] != 8 ) { }
else { i = 1 ; do { exitg1 = 0 ; if ( i - 1 < 8 ) { if ( body2Name -> data [
i - 1 ] != b_i [ i - 1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { bid2 = 1.0
; } else { bid2 = - 1.0 ; } } switch ( ( int32_T ) bid2 ) { case 0 : memset (
& T1j [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; T1j [ 0 ] = 1.0 ; T1j [ 5 ] =
1.0 ; T1j [ 10 ] = 1.0 ; T1j [ 15 ] = 1.0 ; break ; case 1 : lgn1dnuopl (
joint , v ) ; bid1 = v [ 0 ] ; qidx_idx_1 = v [ 1 ] ; axang_idx_2 = v [ 2 ] ;
bid2 = 1.0 / muDoubleScalarSqrt ( ( bid1 * bid1 + qidx_idx_1 * qidx_idx_1 ) +
axang_idx_2 * axang_idx_2 ) ; v [ 0 ] = bid1 * bid2 ; v [ 1 ] = qidx_idx_1 *
bid2 ; v [ 2 ] = axang_idx_2 * bid2 ; cwhfrdau3r ( v [ 0 ] * v [ 0 ] * 0.0 +
1.0 , v [ 0 ] * v [ 1 ] * 0.0 - v [ 2 ] * 0.0 , v [ 0 ] * v [ 2 ] * 0.0 + v [
1 ] * 0.0 , v [ 0 ] * v [ 1 ] * 0.0 + v [ 2 ] * 0.0 , v [ 1 ] * v [ 1 ] * 0.0
+ 1.0 , v [ 1 ] * v [ 2 ] * 0.0 - v [ 0 ] * 0.0 , v [ 0 ] * v [ 2 ] * 0.0 - v
[ 1 ] * 0.0 , v [ 1 ] * v [ 2 ] * 0.0 + v [ 0 ] * 0.0 , v [ 2 ] * v [ 2 ] *
0.0 + 1.0 , tempR ) ; for ( g = 0 ; g < 3 ; g ++ ) { R [ g ] = tempR [ g * 3
] ; R [ g + 3 ] = tempR [ g * 3 + 1 ] ; R [ g + 6 ] = tempR [ g * 3 + 2 ] ; }
memset ( & T1j [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i < 3 ;
i ++ ) { T1j [ i << 2 ] = R [ 3 * i ] ; T1j [ ( i << 2 ) + 1 ] = R [ 3 * i +
1 ] ; T1j [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; } T1j [ 15 ] = 1.0 ; break ;
default : lgn1dnuopl ( joint , v ) ; memset ( & tempR [ 0 ] , 0 , 9U * sizeof
( real_T ) ) ; tempR [ 0 ] = 1.0 ; tempR [ 4 ] = 1.0 ; tempR [ 8 ] = 1.0 ;
for ( i = 0 ; i < 3 ; i ++ ) { T1j [ i << 2 ] = tempR [ 3 * i ] ; T1j [ ( i
<< 2 ) + 1 ] = tempR [ 3 * i + 1 ] ; T1j [ ( i << 2 ) + 2 ] = tempR [ 3 * i +
2 ] ; T1j [ i + 12 ] = v [ i ] * 0.0 ; } T1j [ 3 ] = 0.0 ; T1j [ 7 ] = 0.0 ;
T1j [ 11 ] = 0.0 ; T1j [ 15 ] = 1.0 ; break ; } for ( i = 0 ; i < 16 ; i ++ )
{ b_e [ i ] = joint -> ChildToJointTransform [ i ] ; } for ( i = 0 ; i < 4 ;
i ++ ) { for ( f = 0 ; f < 4 ; f ++ ) { Tj_p [ i + ( f << 2 ) ] = 0.0 ; Tj_p
[ i + ( f << 2 ) ] += T1j [ f << 2 ] * Tj [ i ] ; Tj_p [ i + ( f << 2 ) ] +=
T1j [ ( f << 2 ) + 1 ] * Tj [ i + 4 ] ; Tj_p [ i + ( f << 2 ) ] += T1j [ ( f
<< 2 ) + 2 ] * Tj [ i + 8 ] ; Tj_p [ i + ( f << 2 ) ] += T1j [ ( f << 2 ) + 3
] * Tj [ i + 12 ] ; } for ( f = 0 ; f < 4 ; f ++ ) { Tc2p [ i + ( f << 2 ) ]
= 0.0 ; Tc2p [ i + ( f << 2 ) ] += b_e [ f << 2 ] * Tj_p [ i ] ; Tc2p [ i + (
f << 2 ) ] += b_e [ ( f << 2 ) + 1 ] * Tj_p [ i + 4 ] ; Tc2p [ i + ( f << 2 )
] += b_e [ ( f << 2 ) + 2 ] * Tj_p [ i + 8 ] ; Tc2p [ i + ( f << 2 ) ] += b_e
[ ( f << 2 ) + 3 ] * Tj_p [ i + 12 ] ; } } } else { i = ( int32_T ) body2 ->
Index ; bid2 = obj -> PositionDoFMap [ i - 1 ] ; qidx_idx_1 = obj ->
PositionDoFMap [ i + 9 ] ; if ( bid2 > qidx_idx_1 ) { g = 0 ; f = 0 ; } else
{ g = ( int32_T ) bid2 - 1 ; f = ( int32_T ) qidx_idx_1 ; } for ( i = 0 ; i <
16 ; i ++ ) { Tj [ i ] = joint -> JointToParentTransform [ i ] ; } i =
body2Name -> size [ 0 ] * body2Name -> size [ 1 ] ; body2Name -> size [ 0 ] =
1 ; body2Name -> size [ 1 ] = joint -> Type -> size [ 1 ] ; erzqjcuyqu (
body2Name , i ) ; loop_ub = joint -> Type -> size [ 1 ] - 1 ; for ( i = 0 ; i
<= loop_ub ; i ++ ) { body2Name -> data [ i ] = joint -> Type -> data [ i ] ;
} if ( body2Name -> size [ 1 ] != 5 ) { } else { i = 1 ; do { exitg1 = 0 ; if
( i - 1 < 5 ) { if ( body2Name -> data [ i - 1 ] != b_p [ i - 1 ] ) { exitg1
= 1 ; } else { i ++ ; } } else { b_bool = true ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } if ( b_bool ) { bid2 = 0.0 ; } else { for ( i = 0 ; i < 8 ;
i ++ ) { b_i [ i ] = tmp_e [ i ] ; } if ( body2Name -> size [ 1 ] != 8 ) { }
else { i = 1 ; do { exitg1 = 0 ; if ( i - 1 < 8 ) { if ( body2Name -> data [
i - 1 ] != b_i [ i - 1 ] ) { exitg1 = 1 ; } else { i ++ ; } } else { b_bool =
true ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } if ( b_bool ) { bid2 = 1.0
; } else { bid2 = - 1.0 ; } } switch ( ( int32_T ) bid2 ) { case 0 : memset (
& T1j [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; T1j [ 0 ] = 1.0 ; T1j [ 5 ] =
1.0 ; T1j [ 10 ] = 1.0 ; T1j [ 15 ] = 1.0 ; break ; case 1 : lgn1dnuopl (
joint , v ) ; result_data [ 0 ] = v [ 0 ] ; result_data [ 1 ] = v [ 1 ] ;
result_data [ 2 ] = v [ 2 ] ; if ( 0 <= ( f - g != 0 ) - 1 ) { result_data [
3 ] = qv [ g ] ; } bid2 = result_data [ 0 ] ; v [ 0 ] = bid2 * bid2 ; bid2 =
result_data [ 1 ] ; v [ 1 ] = bid2 * bid2 ; bid2 = result_data [ 2 ] ; bid2 =
1.0 / muDoubleScalarSqrt ( ( v [ 0 ] + v [ 1 ] ) + bid2 * bid2 ) ; v [ 0 ] =
result_data [ 0 ] * bid2 ; v [ 1 ] = result_data [ 1 ] * bid2 ; v [ 2 ] =
result_data [ 2 ] * bid2 ; qidx_idx_1 = result_data [ 3 ] ; bid2 =
muDoubleScalarCos ( qidx_idx_1 ) ; qidx_idx_1 = muDoubleScalarSin (
qidx_idx_1 ) ; cwhfrdau3r ( v [ 0 ] * v [ 0 ] * ( 1.0 - bid2 ) + bid2 , v [ 0
] * v [ 1 ] * ( 1.0 - bid2 ) - v [ 2 ] * qidx_idx_1 , v [ 0 ] * v [ 2 ] * (
1.0 - bid2 ) + v [ 1 ] * qidx_idx_1 , v [ 0 ] * v [ 1 ] * ( 1.0 - bid2 ) + v
[ 2 ] * qidx_idx_1 , v [ 1 ] * v [ 1 ] * ( 1.0 - bid2 ) + bid2 , v [ 1 ] * v
[ 2 ] * ( 1.0 - bid2 ) - v [ 0 ] * qidx_idx_1 , v [ 0 ] * v [ 2 ] * ( 1.0 -
bid2 ) - v [ 1 ] * qidx_idx_1 , v [ 1 ] * v [ 2 ] * ( 1.0 - bid2 ) + v [ 0 ]
* qidx_idx_1 , v [ 2 ] * v [ 2 ] * ( 1.0 - bid2 ) + bid2 , tempR ) ; for ( g
= 0 ; g < 3 ; g ++ ) { R [ g ] = tempR [ g * 3 ] ; R [ g + 3 ] = tempR [ g *
3 + 1 ] ; R [ g + 6 ] = tempR [ g * 3 + 2 ] ; } memset ( & T1j [ 0 ] , 0 ,
sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i < 3 ; i ++ ) { T1j [ i << 2 ] = R
[ 3 * i ] ; T1j [ ( i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; T1j [ ( i << 2 ) + 2 ]
= R [ 3 * i + 2 ] ; } T1j [ 15 ] = 1.0 ; break ; default : lgn1dnuopl ( joint
, v ) ; memset ( & tempR [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; tempR [ 0 ] =
1.0 ; tempR [ 4 ] = 1.0 ; tempR [ 8 ] = 1.0 ; bid2 = qv [ g ] ; for ( i = 0 ;
i < 3 ; i ++ ) { T1j [ i << 2 ] = tempR [ 3 * i ] ; T1j [ ( i << 2 ) + 1 ] =
tempR [ 3 * i + 1 ] ; T1j [ ( i << 2 ) + 2 ] = tempR [ 3 * i + 2 ] ; T1j [ i
+ 12 ] = v [ i ] * bid2 ; } T1j [ 3 ] = 0.0 ; T1j [ 7 ] = 0.0 ; T1j [ 11 ] =
0.0 ; T1j [ 15 ] = 1.0 ; break ; } for ( i = 0 ; i < 16 ; i ++ ) { b_e [ i ]
= joint -> ChildToJointTransform [ i ] ; } for ( i = 0 ; i < 4 ; i ++ ) { for
( f = 0 ; f < 4 ; f ++ ) { Tj_p [ i + ( f << 2 ) ] = 0.0 ; Tj_p [ i + ( f <<
2 ) ] += T1j [ f << 2 ] * Tj [ i ] ; Tj_p [ i + ( f << 2 ) ] += T1j [ ( f <<
2 ) + 1 ] * Tj [ i + 4 ] ; Tj_p [ i + ( f << 2 ) ] += T1j [ ( f << 2 ) + 2 ]
* Tj [ i + 8 ] ; Tj_p [ i + ( f << 2 ) ] += T1j [ ( f << 2 ) + 3 ] * Tj [ i +
12 ] ; } for ( f = 0 ; f < 4 ; f ++ ) { Tc2p [ i + ( f << 2 ) ] = 0.0 ; Tc2p
[ i + ( f << 2 ) ] += b_e [ f << 2 ] * Tj_p [ i ] ; Tc2p [ i + ( f << 2 ) ]
+= b_e [ ( f << 2 ) + 1 ] * Tj_p [ i + 4 ] ; Tc2p [ i + ( f << 2 ) ] += b_e [
( f << 2 ) + 2 ] * Tj_p [ i + 8 ] ; Tc2p [ i + ( f << 2 ) ] += b_e [ ( f << 2
) + 3 ] * Tj_p [ i + 12 ] ; } } i = ( int32_T ) body2 -> Index ; bid2 = obj
-> VelocityDoFMap [ i - 1 ] ; qidx_idx_1 = obj -> VelocityDoFMap [ i + 9 ] ;
if ( nextBodyIsParent ) { for ( i = 0 ; i < 16 ; i ++ ) { Tj [ i ] = joint ->
ChildToJointTransform [ i ] ; } } else { for ( i = 0 ; i < 16 ; i ++ ) { T1j
[ i ] = joint -> JointToParentTransform [ i ] ; } for ( i = 0 ; i < 3 ; i ++
) { R [ 3 * i ] = T1j [ i ] ; R [ 3 * i + 1 ] = T1j [ i + 4 ] ; R [ 3 * i + 2
] = T1j [ i + 8 ] ; } for ( i = 0 ; i < 9 ; i ++ ) { tempR [ i ] = - R [ i ]
; } for ( i = 0 ; i < 3 ; i ++ ) { Tj [ i << 2 ] = R [ 3 * i ] ; Tj [ ( i <<
2 ) + 1 ] = R [ 3 * i + 1 ] ; Tj [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ] ; Tj [
i + 12 ] = tempR [ i + 6 ] * T1j [ 14 ] + ( tempR [ i + 3 ] * T1j [ 13 ] +
tempR [ i ] * T1j [ 12 ] ) ; } Tj [ 3 ] = 0.0 ; Tj [ 7 ] = 0.0 ; Tj [ 11 ] =
0.0 ; Tj [ 15 ] = 1.0 ; } for ( i = 0 ; i < 4 ; i ++ ) { for ( f = 0 ; f < 4
; f ++ ) { T1j [ i + ( f << 2 ) ] = 0.0 ; T1j [ i + ( f << 2 ) ] += T1 [ f <<
2 ] * Tj [ i ] ; T1j [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 1 ] * Tj [ i + 4
] ; T1j [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 2 ] * Tj [ i + 8 ] ; T1j [ i
+ ( f << 2 ) ] += T1 [ ( f << 2 ) + 3 ] * Tj [ i + 12 ] ; } } for ( i = 0 ; i
< 3 ; i ++ ) { R [ 3 * i ] = T1j [ i ] ; R [ 3 * i + 1 ] = T1j [ i + 4 ] ; R
[ 3 * i + 2 ] = T1j [ i + 8 ] ; } for ( i = 0 ; i < 9 ; i ++ ) { tempR [ i ]
= - R [ i ] ; } for ( i = 0 ; i < 3 ; i ++ ) { Tj [ i << 2 ] = R [ 3 * i ] ;
Tj [ ( i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; Tj [ ( i << 2 ) + 2 ] = R [ 3 * i +
2 ] ; Tj [ i + 12 ] = tempR [ i + 6 ] * T1j [ 14 ] + ( tempR [ i + 3 ] * T1j
[ 13 ] + tempR [ i ] * T1j [ 12 ] ) ; } Tj [ 3 ] = 0.0 ; Tj [ 7 ] = 0.0 ; Tj
[ 11 ] = 0.0 ; Tj [ 15 ] = 1.0 ; i = b -> size [ 0 ] * b -> size [ 1 ] ; b ->
size [ 0 ] = 6 ; b -> size [ 1 ] = joint -> MotionSubspace -> size [ 1 ] ;
fqvnblve2d ( b , i ) ; loop_ub = 6 * joint -> MotionSubspace -> size [ 1 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { b -> data [ i ] = joint ->
MotionSubspace -> data [ i ] ; } if ( bid2 > qidx_idx_1 ) { g = 0 ; } else {
g = ( int32_T ) bid2 - 1 ; } R [ 0 ] = 0.0 ; R [ 3 ] = - Tj [ 14 ] ; R [ 6 ]
= Tj [ 13 ] ; R [ 1 ] = Tj [ 14 ] ; R [ 4 ] = 0.0 ; R [ 7 ] = - Tj [ 12 ] ; R
[ 2 ] = - Tj [ 13 ] ; R [ 5 ] = Tj [ 12 ] ; R [ 8 ] = 0.0 ; for ( i = 0 ; i <
3 ; i ++ ) { for ( f = 0 ; f < 3 ; f ++ ) { tempR [ i + 3 * f ] = 0.0 ; tempR
[ i + 3 * f ] += Tj [ f << 2 ] * R [ i ] ; tempR [ i + 3 * f ] += Tj [ ( f <<
2 ) + 1 ] * R [ i + 3 ] ; tempR [ i + 3 * f ] += Tj [ ( f << 2 ) + 2 ] * R [
i + 6 ] ; Tj_e [ f + 6 * i ] = Tj [ ( i << 2 ) + f ] ; Tj_e [ f + 6 * ( i + 3
) ] = 0.0 ; } } for ( i = 0 ; i < 3 ; i ++ ) { Tj_e [ 6 * i + 3 ] = tempR [ 3
* i ] ; Tj_e [ 6 * ( i + 3 ) + 3 ] = Tj [ i << 2 ] ; Tj_e [ 6 * i + 4 ] =
tempR [ 3 * i + 1 ] ; Tj_e [ 6 * ( i + 3 ) + 4 ] = Tj [ ( i << 2 ) + 1 ] ;
Tj_e [ 6 * i + 5 ] = tempR [ 3 * i + 2 ] ; Tj_e [ 6 * ( i + 3 ) + 5 ] = Tj [
( i << 2 ) + 2 ] ; } hloxgsbgze ( Tj_e , b , tmp ) ; loop_ub = tmp -> size [
1 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { for ( f = 0 ; f < 6 ; f ++ ) { Jac
-> data [ f + 6 * ( g + i ) ] = tmp -> data [ f + 6 * i ] * bid1 ; } } } if (
nextBodyIsParent ) { for ( i = 0 ; i < 4 ; i ++ ) { for ( f = 0 ; f < 4 ; f
++ ) { Tj [ i + ( f << 2 ) ] = 0.0 ; Tj [ i + ( f << 2 ) ] += T1 [ f << 2 ] *
Tc2p [ i ] ; Tj [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 1 ] * Tc2p [ i + 4 ]
; Tj [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 2 ] * Tc2p [ i + 8 ] ; Tj [ i +
( f << 2 ) ] += T1 [ ( f << 2 ) + 3 ] * Tc2p [ i + 12 ] ; } } memcpy ( & T1 [
0 ] , & Tj [ 0 ] , sizeof ( real_T ) << 4U ) ; } else { for ( i = 0 ; i < 3 ;
i ++ ) { R [ 3 * i ] = Tc2p [ i ] ; R [ 3 * i + 1 ] = Tc2p [ i + 4 ] ; R [ 3
* i + 2 ] = Tc2p [ i + 8 ] ; } for ( i = 0 ; i < 9 ; i ++ ) { tempR [ i ] = -
R [ i ] ; } for ( i = 0 ; i < 3 ; i ++ ) { Tj [ i << 2 ] = R [ 3 * i ] ; Tj [
( i << 2 ) + 1 ] = R [ 3 * i + 1 ] ; Tj [ ( i << 2 ) + 2 ] = R [ 3 * i + 2 ]
; Tj [ i + 12 ] = tempR [ i + 6 ] * Tc2p [ 14 ] + ( tempR [ i + 3 ] * Tc2p [
13 ] + tempR [ i ] * Tc2p [ 12 ] ) ; } Tj [ 3 ] = 0.0 ; Tj [ 7 ] = 0.0 ; Tj [
11 ] = 0.0 ; Tj [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( f = 0 ; f
< 4 ; f ++ ) { Tc2p [ i + ( f << 2 ) ] = 0.0 ; Tc2p [ i + ( f << 2 ) ] += T1
[ f << 2 ] * Tj [ i ] ; Tc2p [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 1 ] * Tj
[ i + 4 ] ; Tc2p [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 2 ] * Tj [ i + 8 ] ;
Tc2p [ i + ( f << 2 ) ] += T1 [ ( f << 2 ) + 3 ] * Tj [ i + 12 ] ; } } memcpy
( & T1 [ 0 ] , & Tc2p [ 0 ] , sizeof ( real_T ) << 4U ) ; } } g41mplts0w ( &
tmp ) ; g41mplts0w ( & b ) ; n3y5ukwimu ( & body2Name ) ; g41mplts0w ( &
kinematicPathIndices ) ; for ( i = 0 ; i < 3 ; i ++ ) { bid1 = T1 [ i << 2 ]
; Tj_e [ 6 * i ] = bid1 ; Tj_e [ 6 * ( i + 3 ) ] = 0.0 ; Tj_e [ 6 * i + 3 ] =
0.0 ; Tj_e [ 6 * ( i + 3 ) + 3 ] = bid1 ; bid1 = T1 [ ( i << 2 ) + 1 ] ; Tj_e
[ 6 * i + 1 ] = bid1 ; Tj_e [ 6 * ( i + 3 ) + 1 ] = 0.0 ; Tj_e [ 6 * i + 4 ]
= 0.0 ; Tj_e [ 6 * ( i + 3 ) + 4 ] = bid1 ; bid1 = T1 [ ( i << 2 ) + 2 ] ;
Tj_e [ 6 * i + 2 ] = bid1 ; Tj_e [ 6 * ( i + 3 ) + 2 ] = 0.0 ; Tj_e [ 6 * i +
5 ] = 0.0 ; Tj_e [ 6 * ( i + 3 ) + 5 ] = bid1 ; } nonxxy2aaj ( & Jac_e , 2 )
; i = Jac_e -> size [ 0 ] * Jac_e -> size [ 1 ] ; Jac_e -> size [ 0 ] = 6 ;
Jac_e -> size [ 1 ] = Jac -> size [ 1 ] ; fqvnblve2d ( Jac_e , i ) ; loop_ub
= Jac -> size [ 0 ] * Jac -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i
++ ) { Jac_e -> data [ i ] = Jac -> data [ i ] ; } hloxgsbgze ( Tj_e , Jac_e
, Jac ) ; T_size [ 0 ] = 4 ; T_size [ 1 ] = 4 ; g41mplts0w ( & Jac_e ) ;
memcpy ( & T_data [ 0 ] , & T1 [ 0 ] , sizeof ( real_T ) << 4U ) ; } static
creal_T jljucs33ij ( const creal_T x ) { creal_T b_x ; real_T absxr ; real_T
xr ; xr = x . re ; if ( x . im == 0.0 ) { if ( x . re < 0.0 ) { absxr = 0.0 ;
xr = muDoubleScalarSqrt ( - x . re ) ; } else { absxr = muDoubleScalarSqrt (
x . re ) ; xr = 0.0 ; } } else if ( x . re == 0.0 ) { if ( x . im < 0.0 ) {
absxr = muDoubleScalarSqrt ( - x . im / 2.0 ) ; xr = - absxr ; } else { absxr
= muDoubleScalarSqrt ( x . im / 2.0 ) ; xr = absxr ; } } else if (
muDoubleScalarIsNaN ( x . re ) ) { absxr = x . re ; } else if (
muDoubleScalarIsNaN ( x . im ) ) { absxr = x . im ; xr = x . im ; } else if (
muDoubleScalarIsInf ( x . im ) ) { absxr = muDoubleScalarAbs ( x . im ) ; xr
= x . im ; } else if ( muDoubleScalarIsInf ( x . re ) ) { if ( x . re < 0.0 )
{ absxr = 0.0 ; xr = x . im * - x . re ; } else { absxr = x . re ; xr = 0.0 ;
} } else { absxr = muDoubleScalarAbs ( x . re ) ; xr = muDoubleScalarAbs ( x
. im ) ; if ( ( absxr > 4.4942328371557893E+307 ) || ( xr >
4.4942328371557893E+307 ) ) { absxr *= 0.5 ; xr *= 0.5 ; xr =
muDoubleScalarHypot ( absxr , xr ) ; if ( xr > absxr ) { absxr =
muDoubleScalarSqrt ( absxr / xr + 1.0 ) * muDoubleScalarSqrt ( xr ) ; } else
{ absxr = muDoubleScalarSqrt ( xr ) * 1.4142135623730951 ; } } else { absxr =
muDoubleScalarSqrt ( ( muDoubleScalarHypot ( absxr , xr ) + absxr ) * 0.5 ) ;
} if ( x . re > 0.0 ) { xr = x . im / absxr * 0.5 ; } else { if ( x . im <
0.0 ) { xr = - absxr ; } else { xr = absxr ; } absxr = x . im / xr * 0.5 ; }
} b_x . re = absxr ; b_x . im = xr ; return b_x ; } static real_T cuejmghwmi
( int32_T n , const real_T x [ 9 ] , int32_T ix0 ) { real_T absxk ; real_T
scale ; real_T t ; real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
real_T cuejmghwmip ( const real_T x [ 3 ] , int32_T ix0 ) { real_T absxk ;
real_T scale ; real_T t ; real_T y ; int32_T k ; y = 0.0 ; scale =
3.3121686421112381E-170 ; for ( k = ix0 ; k <= ix0 + 1 ; k ++ ) { absxk =
muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t = scale / absxk
; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t *
t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static real_T bcgfpbxcdf
( int32_T n , const real_T x [ 9 ] , int32_T ix0 , const real_T y [ 9 ] ,
int32_T iy0 ) { real_T d ; int32_T k ; d = 0.0 ; for ( k = 0 ; k < n ; k ++ )
{ d += x [ ( ix0 + k ) - 1 ] * y [ ( iy0 + k ) - 1 ] ; } return d ; } static
void jrtl1otyi3 ( int32_T n , real_T a , int32_T ix0 , const real_T y [ 9 ] ,
int32_T iy0 , real_T b_y [ 9 ] ) { int32_T k ; memcpy ( & b_y [ 0 ] , & y [ 0
] , 9U * sizeof ( real_T ) ) ; if ( ! ( a == 0.0 ) ) { for ( k = 0 ; k < n ;
k ++ ) { b_y [ ( iy0 + k ) - 1 ] += b_y [ ( ix0 + k ) - 1 ] * a ; } } }
static void jrtl1otyi32zf ( int32_T n , real_T a , const real_T x [ 9 ] ,
int32_T ix0 , real_T y [ 3 ] , int32_T iy0 ) { int32_T k ; if ( ! ( a == 0.0
) ) { for ( k = 0 ; k < n ; k ++ ) { y [ ( iy0 + k ) - 1 ] += x [ ( ix0 + k )
- 1 ] * a ; } } } static void khy54hscnw ( real_T a , real_T b , real_T * b_a
, real_T * b_b , real_T * c , real_T * s ) { real_T absa ; real_T absb ;
real_T ads ; real_T bds ; real_T roe ; real_T scale ; roe = b ; absa =
muDoubleScalarAbs ( a ) ; absb = muDoubleScalarAbs ( b ) ; if ( absa > absb )
{ roe = a ; } scale = absa + absb ; if ( scale == 0.0 ) { * s = 0.0 ; * c =
1.0 ; * b_a = 0.0 ; * b_b = 0.0 ; } else { ads = absa / scale ; bds = absb /
scale ; * b_a = muDoubleScalarSqrt ( ads * ads + bds * bds ) * scale ; if (
roe < 0.0 ) { * b_a = - * b_a ; } * c = a / * b_a ; * s = b / * b_a ; if (
absa > absb ) { * b_b = * s ; } else if ( * c != 0.0 ) { * b_b = 1.0 / * c ;
} else { * b_b = 1.0 ; } } } static void jrtl1otyi32z ( int32_T n , real_T a
, const real_T x [ 3 ] , int32_T ix0 , const real_T y [ 9 ] , int32_T iy0 ,
real_T b_y [ 9 ] ) { int32_T k ; memcpy ( & b_y [ 0 ] , & y [ 0 ] , 9U *
sizeof ( real_T ) ) ; if ( ! ( a == 0.0 ) ) { for ( k = 0 ; k < n ; k ++ ) {
b_y [ ( iy0 + k ) - 1 ] += x [ ( ix0 + k ) - 1 ] * a ; } } } static void
h5lqcabgsc ( const real_T x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T c ,
real_T s , real_T b_x [ 9 ] ) { real_T temp ; memcpy ( & b_x [ 0 ] , & x [ 0
] , 9U * sizeof ( real_T ) ) ; temp = b_x [ ix0 - 1 ] * c + b_x [ iy0 - 1 ] *
s ; b_x [ iy0 - 1 ] = b_x [ iy0 - 1 ] * c - b_x [ ix0 - 1 ] * s ; b_x [ ix0 -
1 ] = temp ; temp = b_x [ ix0 ] * c + b_x [ iy0 ] * s ; b_x [ iy0 ] = b_x [
iy0 ] * c - b_x [ ix0 ] * s ; b_x [ ix0 ] = temp ; temp = b_x [ ix0 + 1 ] * c
+ b_x [ iy0 + 1 ] * s ; b_x [ iy0 + 1 ] = b_x [ iy0 + 1 ] * c - b_x [ ix0 + 1
] * s ; b_x [ ix0 + 1 ] = temp ; } static void hsewtwtvu0 ( const real_T x [
9 ] , int32_T ix0 , int32_T iy0 , real_T b_x [ 9 ] ) { real_T temp ; memcpy (
& b_x [ 0 ] , & x [ 0 ] , 9U * sizeof ( real_T ) ) ; temp = b_x [ ix0 - 1 ] ;
b_x [ ix0 - 1 ] = b_x [ iy0 - 1 ] ; b_x [ iy0 - 1 ] = temp ; temp = b_x [ ix0
] ; b_x [ ix0 ] = b_x [ iy0 ] ; b_x [ iy0 ] = temp ; temp = b_x [ ix0 + 1 ] ;
b_x [ ix0 + 1 ] = b_x [ iy0 + 1 ] ; b_x [ iy0 + 1 ] = temp ; } static void
l5iojt0h0r ( const real_T A [ 9 ] , real_T U [ 9 ] , real_T s [ 3 ] , real_T
V [ 9 ] ) { real_T A_e [ 9 ] ; real_T A_p [ 9 ] ; real_T e [ 3 ] ; real_T s_p
[ 3 ] ; real_T work [ 3 ] ; real_T emm1 ; real_T nrm ; real_T rt ; real_T
shift ; real_T smm1 ; real_T sqds ; real_T ztest ; real_T ztest0 ; int32_T b
; int32_T colqp1 ; int32_T m ; int32_T qjj ; int32_T qp1 ; int32_T qq ;
boolean_T apply_transform ; boolean_T exitg1 ; s_p [ 0 ] = 0.0 ; e [ 0 ] =
0.0 ; work [ 0 ] = 0.0 ; s_p [ 1 ] = 0.0 ; e [ 1 ] = 0.0 ; work [ 1 ] = 0.0 ;
s_p [ 2 ] = 0.0 ; e [ 2 ] = 0.0 ; work [ 2 ] = 0.0 ; for ( m = 0 ; m < 9 ; m
++ ) { A_p [ m ] = A [ m ] ; U [ m ] = 0.0 ; V [ m ] = 0.0 ; } for ( m = 0 ;
m < 2 ; m ++ ) { colqp1 = m + 1 ; qp1 = m + 2 ; qq = ( m * 3 + m ) + 1 ;
apply_transform = false ; nrm = cuejmghwmi ( 3 - m , A_p , qq ) ; if ( nrm >
0.0 ) { apply_transform = true ; if ( A_p [ qq - 1 ] < 0.0 ) { s_p [ m ] = -
nrm ; } else { s_p [ m ] = nrm ; } if ( muDoubleScalarAbs ( s_p [ m ] ) >=
1.0020841800044864E-292 ) { nrm = 1.0 / s_p [ m ] ; b = ( qq - m ) - 1 ; for
( qjj = qq ; qjj <= b + 3 ; qjj ++ ) { A_p [ qjj - 1 ] *= nrm ; } } else { b
= ( qq - m ) - 1 ; for ( qjj = qq ; qjj <= b + 3 ; qjj ++ ) { A_p [ qjj - 1 ]
/= s_p [ m ] ; } } A_p [ qq - 1 ] ++ ; s_p [ m ] = - s_p [ m ] ; } else { s_p
[ m ] = 0.0 ; } for ( b = qp1 ; b < 4 ; b ++ ) { qjj = ( ( b - 1 ) * 3 + m )
+ 1 ; if ( apply_transform ) { memcpy ( & A_e [ 0 ] , & A_p [ 0 ] , 9U *
sizeof ( real_T ) ) ; jrtl1otyi3 ( 3 - m , - ( bcgfpbxcdf ( 3 - m , A_p , qq
, A_p , qjj ) / A_p [ m * 3 + m ] ) , qq , A_e , qjj , A_p ) ; } e [ b - 1 ]
= A_p [ qjj - 1 ] ; } if ( colqp1 <= 3 ) { memcpy ( & U [ ( m * 3 + colqp1 )
+ - 1 ] , & A_p [ ( m * 3 + colqp1 ) + - 1 ] , ( 4 - colqp1 ) * sizeof (
real_T ) ) ; } if ( m + 1 <= 1 ) { nrm = cuejmghwmip ( e , 2 ) ; if ( nrm ==
0.0 ) { e [ 0 ] = 0.0 ; } else { if ( e [ 1 ] < 0.0 ) { rt = - nrm ; e [ 0 ]
= - nrm ; } else { rt = nrm ; e [ 0 ] = nrm ; } if ( muDoubleScalarAbs ( rt )
>= 1.0020841800044864E-292 ) { nrm = 1.0 / rt ; for ( qjj = qp1 ; qjj < 4 ;
qjj ++ ) { e [ qjj - 1 ] *= nrm ; } } else { for ( qjj = qp1 ; qjj < 4 ; qjj
++ ) { e [ qjj - 1 ] /= rt ; } } e [ 1 ] ++ ; e [ 0 ] = - e [ 0 ] ; for ( qq
= qp1 ; qq < 4 ; qq ++ ) { work [ qq - 1 ] = 0.0 ; } for ( qq = qp1 ; qq < 4
; qq ++ ) { jrtl1otyi32zf ( 2 , e [ qq - 1 ] , A_p , 3 * ( qq - 1 ) + 2 ,
work , 2 ) ; } for ( qq = qp1 ; qq < 4 ; qq ++ ) { memcpy ( & A_e [ 0 ] , &
A_p [ 0 ] , 9U * sizeof ( real_T ) ) ; jrtl1otyi32z ( 2 , - e [ qq - 1 ] / e
[ 1 ] , work , 2 , A_e , ( qq - 1 ) * 3 + 2 , A_p ) ; } } for ( colqp1 = qp1
; colqp1 < 4 ; colqp1 ++ ) { V [ colqp1 - 1 ] = e [ colqp1 - 1 ] ; } } } m =
2 ; s_p [ 2 ] = A_p [ 8 ] ; e [ 1 ] = A_p [ 7 ] ; e [ 2 ] = 0.0 ; U [ 6 ] =
0.0 ; U [ 7 ] = 0.0 ; U [ 8 ] = 1.0 ; for ( colqp1 = 1 ; colqp1 >= 0 ; colqp1
-- ) { qq = 3 * colqp1 + colqp1 ; if ( s_p [ colqp1 ] != 0.0 ) { for ( b =
colqp1 + 2 ; b < 4 ; b ++ ) { qjj = ( ( b - 1 ) * 3 + colqp1 ) + 1 ; memcpy (
& A_p [ 0 ] , & U [ 0 ] , 9U * sizeof ( real_T ) ) ; jrtl1otyi3 ( 3 - colqp1
, - ( bcgfpbxcdf ( 3 - colqp1 , U , qq + 1 , U , qjj ) / U [ qq ] ) , qq + 1
, A_p , qjj , U ) ; } for ( qp1 = colqp1 + 1 ; qp1 < 4 ; qp1 ++ ) { U [ ( qp1
+ 3 * colqp1 ) - 1 ] = - U [ ( 3 * colqp1 + qp1 ) - 1 ] ; } U [ qq ] ++ ; if
( 0 <= colqp1 - 1 ) { U [ 3 * colqp1 ] = 0.0 ; } } else { U [ 3 * colqp1 ] =
0.0 ; U [ 3 * colqp1 + 1 ] = 0.0 ; U [ 3 * colqp1 + 2 ] = 0.0 ; U [ qq ] =
1.0 ; } } for ( colqp1 = 2 ; colqp1 >= 0 ; colqp1 -- ) { if ( ( colqp1 + 1 <=
1 ) && ( e [ 0 ] != 0.0 ) ) { memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof
( real_T ) ) ; jrtl1otyi3 ( 2 , - ( bcgfpbxcdf ( 2 , V , 2 , V , 5 ) / V [ 1
] ) , 2 , A_p , 5 , V ) ; memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof (
real_T ) ) ; jrtl1otyi3 ( 2 , - ( bcgfpbxcdf ( 2 , V , 2 , V , 8 ) / V [ 1 ]
) , 2 , A_p , 8 , V ) ; } V [ 3 * colqp1 ] = 0.0 ; V [ 3 * colqp1 + 1 ] = 0.0
; V [ 3 * colqp1 + 2 ] = 0.0 ; V [ colqp1 + 3 * colqp1 ] = 1.0 ; } for ( qp1
= 0 ; qp1 < 3 ; qp1 ++ ) { smm1 = e [ qp1 ] ; if ( s_p [ qp1 ] != 0.0 ) { rt
= muDoubleScalarAbs ( s_p [ qp1 ] ) ; nrm = s_p [ qp1 ] / rt ; s_p [ qp1 ] =
rt ; if ( qp1 + 1 < 3 ) { smm1 /= nrm ; } qq = 3 * qp1 ; for ( qjj = qq + 1 ;
qjj <= qq + 3 ; qjj ++ ) { U [ qjj - 1 ] *= nrm ; } } if ( ( qp1 + 1 < 3 ) &&
( smm1 != 0.0 ) ) { rt = muDoubleScalarAbs ( smm1 ) ; nrm = rt / smm1 ; smm1
= rt ; s_p [ qp1 + 1 ] *= nrm ; colqp1 = ( qp1 + 1 ) * 3 ; for ( qjj = colqp1
+ 1 ; qjj <= colqp1 + 3 ; qjj ++ ) { V [ qjj - 1 ] *= nrm ; } } e [ qp1 ] =
smm1 ; } rt = 0.0 ; nrm = muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( 0.0 , muDoubleScalarMax ( muDoubleScalarAbs ( s_p [ 0 ] )
, muDoubleScalarAbs ( e [ 0 ] ) ) ) , muDoubleScalarMax ( muDoubleScalarAbs (
s_p [ 1 ] ) , muDoubleScalarAbs ( e [ 1 ] ) ) ) , muDoubleScalarMax (
muDoubleScalarAbs ( s_p [ 2 ] ) , muDoubleScalarAbs ( e [ 2 ] ) ) ) ; while (
( m + 1 > 0 ) && ( ! ( rt >= 75.0 ) ) ) { colqp1 = m ; qp1 = m ; exitg1 =
false ; while ( ( ! exitg1 ) && ( qp1 > - 1 ) ) { colqp1 = qp1 ; if ( qp1 ==
0 ) { exitg1 = true ; } else { ztest0 = muDoubleScalarAbs ( e [ qp1 - 1 ] ) ;
if ( ( ztest0 <= ( muDoubleScalarAbs ( s_p [ qp1 - 1 ] ) + muDoubleScalarAbs
( s_p [ qp1 ] ) ) * 2.2204460492503131E-16 ) || ( ztest0 <=
1.0020841800044864E-292 ) || ( ( rt > 20.0 ) && ( ztest0 <=
2.2204460492503131E-16 * nrm ) ) ) { e [ qp1 - 1 ] = 0.0 ; exitg1 = true ; }
else { qp1 -- ; } } } if ( colqp1 == m ) { ztest0 = 4.0 ; } else { qp1 = m +
1 ; qq = m + 1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( qq >= colqp1 ) )
{ qp1 = qq ; if ( qq == colqp1 ) { exitg1 = true ; } else { ztest0 = 0.0 ; if
( qq < m + 1 ) { ztest0 = muDoubleScalarAbs ( e [ qq - 1 ] ) ; } if ( qq >
colqp1 + 1 ) { ztest0 += muDoubleScalarAbs ( e [ qq - 2 ] ) ; } ztest =
muDoubleScalarAbs ( s_p [ qq - 1 ] ) ; if ( ( ztest <= 2.2204460492503131E-16
* ztest0 ) || ( ztest <= 1.0020841800044864E-292 ) ) { s_p [ qq - 1 ] = 0.0 ;
exitg1 = true ; } else { qq -- ; } } } if ( qp1 == colqp1 ) { ztest0 = 3.0 ;
} else if ( m + 1 == qp1 ) { ztest0 = 1.0 ; } else { ztest0 = 2.0 ; colqp1 =
qp1 ; } } switch ( ( int32_T ) ztest0 ) { case 1 : ztest0 = e [ m - 1 ] ; e [
m - 1 ] = 0.0 ; for ( qq = m ; qq >= colqp1 + 1 ; qq -- ) { smm1 = e [ 0 ] ;
khy54hscnw ( s_p [ qq - 1 ] , ztest0 , & s_p [ qq - 1 ] , & ztest0 , & ztest
, & sqds ) ; if ( qq > colqp1 + 1 ) { ztest0 = - sqds * e [ 0 ] ; smm1 = e [
0 ] * ztest ; } memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof ( real_T ) ) ;
h5lqcabgsc ( A_p , ( qq - 1 ) * 3 + 1 , 3 * m + 1 , ztest , sqds , V ) ; e [
0 ] = smm1 ; } break ; case 2 : ztest0 = e [ colqp1 - 1 ] ; e [ colqp1 - 1 ]
= 0.0 ; for ( qp1 = colqp1 + 1 ; qp1 <= m + 1 ; qp1 ++ ) { khy54hscnw ( s_p [
qp1 - 1 ] , ztest0 , & s_p [ qp1 - 1 ] , & ztest , & sqds , & smm1 ) ; ztest0
= e [ qp1 - 1 ] * - smm1 ; e [ qp1 - 1 ] *= sqds ; memcpy ( & A_p [ 0 ] , & U
[ 0 ] , 9U * sizeof ( real_T ) ) ; h5lqcabgsc ( A_p , ( qp1 - 1 ) * 3 + 1 , (
colqp1 - 1 ) * 3 + 1 , sqds , smm1 , U ) ; } break ; case 3 : ztest =
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( muDoubleScalarAbs ( s_p [ m ] ) , muDoubleScalarAbs ( s_p [ m - 1 ] ) ) ,
muDoubleScalarAbs ( e [ m - 1 ] ) ) , muDoubleScalarAbs ( s_p [ colqp1 ] ) )
, muDoubleScalarAbs ( e [ colqp1 ] ) ) ; ztest0 = s_p [ m ] / ztest ; smm1 =
s_p [ m - 1 ] / ztest ; emm1 = e [ m - 1 ] / ztest ; sqds = s_p [ colqp1 ] /
ztest ; smm1 = ( ( smm1 + ztest0 ) * ( smm1 - ztest0 ) + emm1 * emm1 ) / 2.0
; emm1 *= ztest0 ; emm1 *= emm1 ; if ( ( smm1 != 0.0 ) || ( emm1 != 0.0 ) ) {
shift = muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if ( smm1 < 0.0 ) { shift
= - shift ; } shift = emm1 / ( smm1 + shift ) ; } else { shift = 0.0 ; }
ztest0 = ( sqds + ztest0 ) * ( sqds - ztest0 ) + shift ; ztest = e [ colqp1 ]
/ ztest * sqds ; for ( qq = colqp1 + 1 ; qq <= m ; qq ++ ) { khy54hscnw (
ztest0 , ztest , & sqds , & smm1 , & emm1 , & shift ) ; if ( qq > colqp1 + 1
) { e [ 0 ] = sqds ; } ztest0 = s_p [ qq - 1 ] * emm1 + e [ qq - 1 ] * shift
; e [ qq - 1 ] = e [ qq - 1 ] * emm1 - s_p [ qq - 1 ] * shift ; ztest = shift
* s_p [ qq ] ; s_p [ qq ] *= emm1 ; memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U *
sizeof ( real_T ) ) ; h5lqcabgsc ( A_p , ( qq - 1 ) * 3 + 1 , 3 * qq + 1 ,
emm1 , shift , V ) ; khy54hscnw ( ztest0 , ztest , & s_p [ qq - 1 ] , & sqds
, & smm1 , & emm1 ) ; ztest0 = e [ qq - 1 ] * smm1 + emm1 * s_p [ qq ] ; s_p
[ qq ] = e [ qq - 1 ] * - emm1 + smm1 * s_p [ qq ] ; ztest = emm1 * e [ qq ]
; e [ qq ] *= smm1 ; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 9U * sizeof ( real_T
) ) ; h5lqcabgsc ( A_p , ( qq - 1 ) * 3 + 1 , 3 * qq + 1 , smm1 , emm1 , U )
; } e [ m - 1 ] = ztest0 ; rt ++ ; break ; default : if ( s_p [ colqp1 ] <
0.0 ) { s_p [ colqp1 ] = - s_p [ colqp1 ] ; qq = 3 * colqp1 ; for ( qjj = qq
+ 1 ; qjj <= qq + 3 ; qjj ++ ) { V [ qjj - 1 ] = - V [ qjj - 1 ] ; } } qp1 =
colqp1 + 1 ; while ( ( colqp1 + 1 < 3 ) && ( s_p [ colqp1 ] < s_p [ qp1 ] ) )
{ rt = s_p [ colqp1 ] ; s_p [ colqp1 ] = s_p [ qp1 ] ; s_p [ qp1 ] = rt ;
memcpy ( & A_p [ 0 ] , & V [ 0 ] , 9U * sizeof ( real_T ) ) ; hsewtwtvu0 (
A_p , 3 * colqp1 + 1 , ( colqp1 + 1 ) * 3 + 1 , V ) ; memcpy ( & A_p [ 0 ] ,
& U [ 0 ] , 9U * sizeof ( real_T ) ) ; hsewtwtvu0 ( A_p , 3 * colqp1 + 1 , (
colqp1 + 1 ) * 3 + 1 , U ) ; colqp1 = qp1 ; qp1 ++ ; } rt = 0.0 ; m -- ;
break ; } } s [ 0 ] = s_p [ 0 ] ; s [ 1 ] = s_p [ 1 ] ; s [ 2 ] = s_p [ 2 ] ;
} static void g13mbhvrln ( const real_T Td [ 16 ] , const real_T T_data [ ] ,
const int32_T T_size [ 2 ] , real_T errorvec [ 6 ] ) { creal_T tmp ; creal_T
u ; creal_T u_p ; creal_T v_p ; real_T T [ 9 ] ; real_T V [ 9 ] ; real_T b_U
[ 9 ] ; real_T y [ 9 ] ; real_T b_s [ 3 ] ; real_T v [ 3 ] ; real_T
vspecial_data [ 3 ] ; real_T q ; real_T t4 ; int32_T b_i ; int32_T iy ;
int32_T loop_ub ; boolean_T e ; boolean_T exitg1 ; boolean_T x ; boolean_T
xneg ; for ( iy = 0 ; iy < 3 ; iy ++ ) { T [ 3 * iy ] = T_data [ iy ] ; T [ 3
* iy + 1 ] = T_data [ iy + T_size [ 0 ] ] ; T [ 3 * iy + 2 ] = T_data [ iy +
( T_size [ 0 ] << 1 ) ] ; for ( loop_ub = 0 ; loop_ub < 3 ; loop_ub ++ ) { y
[ loop_ub + 3 * iy ] = 0.0 ; y [ loop_ub + 3 * iy ] += T [ 3 * iy ] * Td [
loop_ub ] ; y [ loop_ub + 3 * iy ] += T [ 3 * iy + 1 ] * Td [ loop_ub + 4 ] ;
y [ loop_ub + 3 * iy ] += T [ 3 * iy + 2 ] * Td [ loop_ub + 8 ] ; } } u . re
= ( ( ( y [ 0 ] + y [ 4 ] ) + y [ 8 ] ) - 1.0 ) * 0.5 ; if ( ! (
muDoubleScalarAbs ( u . re ) > 1.0 ) ) { v_p . re = muDoubleScalarAcos ( u .
re ) ; } else { u_p . re = u . re + 1.0 ; u_p . im = 0.0 ; tmp . re = 1.0 - u
. re ; tmp . im = 0.0 ; v_p . re = 2.0 * muDoubleScalarAtan2 ( ( jljucs33ij (
tmp ) ) . re , ( jljucs33ij ( u_p ) ) . re ) ; } t4 = 2.0 * muDoubleScalarSin
( v_p . re ) ; v [ 0 ] = ( y [ 5 ] - y [ 7 ] ) / t4 ; v [ 1 ] = ( y [ 6 ] - y
[ 2 ] ) / t4 ; v [ 2 ] = ( y [ 1 ] - y [ 3 ] ) / t4 ; if (
muDoubleScalarIsNaN ( v_p . re ) || muDoubleScalarIsInf ( v_p . re ) ) { t4 =
( rtNaN ) ; } else if ( v_p . re == 0.0 ) { t4 = 0.0 ; } else { t4 =
muDoubleScalarRem ( v_p . re , 3.1415926535897931 ) ; xneg = ( t4 == 0.0 ) ;
if ( ! xneg ) { q = muDoubleScalarAbs ( v_p . re / 3.1415926535897931 ) ;
xneg = ! ( muDoubleScalarAbs ( q - muDoubleScalarFloor ( q + 0.5 ) ) >
2.2204460492503131E-16 * q ) ; } if ( xneg ) { t4 = 0.0 ; } else if ( v_p .
re < 0.0 ) { t4 += 3.1415926535897931 ; } } xneg = ( t4 == 0.0 ) ; e = true ;
iy = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( iy < 3 ) ) { if ( ! ( v [
iy ] == 0.0 ) ) { e = false ; exitg1 = true ; } else { iy ++ ; } } if ( xneg
|| e ) { loop_ub = 3 * ( xneg || e ) - 1 ; if ( 0 <= loop_ub ) { memset ( &
vspecial_data [ 0 ] , 0 , ( loop_ub + 1 ) * sizeof ( real_T ) ) ; } loop_ub =
( xneg || e ) - 1 ; for ( b_i = 0 ; b_i <= loop_ub ; b_i ++ ) { memset ( & T
[ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; T [ 0 ] = 1.0 ; T [ 4 ] = 1.0 ; T [ 8
] = 1.0 ; for ( iy = 0 ; iy < 9 ; iy ++ ) { T [ iy ] -= y [ iy ] ; } x = true
; for ( iy = 0 ; iy < 9 ; iy ++ ) { if ( x ) { t4 = T [ iy ] ; if ( ( !
muDoubleScalarIsInf ( t4 ) ) && ( ! muDoubleScalarIsNaN ( t4 ) ) ) { } else {
x = false ; } } else { x = false ; } } if ( x ) { l5iojt0h0r ( T , b_U , b_s
, V ) ; } else { for ( iy = 0 ; iy < 9 ; iy ++ ) { V [ iy ] = ( rtNaN ) ; } }
vspecial_data [ 0 ] = V [ 6 ] ; vspecial_data [ 1 ] = V [ 7 ] ; vspecial_data
[ 2 ] = V [ 8 ] ; } loop_ub = 0 ; if ( xneg || e ) { for ( b_i = 0 ; b_i < 1
; b_i ++ ) { loop_ub ++ ; } } if ( 0 <= loop_ub - 1 ) { v [ 0 ] =
vspecial_data [ 0 ] ; v [ 1 ] = vspecial_data [ 1 ] ; v [ 2 ] = vspecial_data
[ 2 ] ; } } t4 = 1.0 / muDoubleScalarSqrt ( ( v [ 0 ] * v [ 0 ] + v [ 1 ] * v
[ 1 ] ) + v [ 2 ] * v [ 2 ] ) ; v [ 0 ] *= t4 ; v [ 1 ] *= t4 ; errorvec [ 0
] = v_p . re * v [ 0 ] ; errorvec [ 3 ] = Td [ 12 ] - T_data [ T_size [ 0 ] *
3 ] ; errorvec [ 1 ] = v_p . re * v [ 1 ] ; errorvec [ 4 ] = Td [ 13 ] -
T_data [ 1 + T_size [ 0 ] * 3 ] ; errorvec [ 2 ] = v [ 2 ] * t4 * v_p . re ;
errorvec [ 5 ] = Td [ 14 ] - T_data [ 2 + T_size [ 0 ] * 3 ] ; } static void
hloxgsbgzep ( const real_T A [ 6 ] , const gmphnpqbau * B_e , gmphnpqbau * C
) { real_T s ; int32_T b_j ; int32_T b_k ; int32_T boffset ; int32_T n ; n =
B_e -> size [ 1 ] - 1 ; b_j = C -> size [ 0 ] * C -> size [ 1 ] ; C -> size [
0 ] = 1 ; C -> size [ 1 ] = B_e -> size [ 1 ] ; fqvnblve2d ( C , b_j ) ; for
( b_j = 0 ; b_j <= n ; b_j ++ ) { boffset = b_j * 6 - 1 ; s = 0.0 ; for ( b_k
= 0 ; b_k < 6 ; b_k ++ ) { s += B_e -> data [ ( boffset + b_k ) + 1 ] * A [
b_k ] ; } C -> data [ b_j ] = s ; } } static void em3tin04ml ( ikljpirxgg * *
pEmxArray , int32_T numDimensions ) { ikljpirxgg * emxArray ; int32_T i ; *
pEmxArray = ( ikljpirxgg * ) malloc ( sizeof ( ikljpirxgg ) ) ; emxArray = *
pEmxArray ; emxArray -> data = ( boolean_T * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * numDimensions ) ; emxArray -> allocatedSize = 0 ;
emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) {
emxArray -> size [ i ] = 0 ; } } static real_T iendijjns1b ( const real_T x [
6 ] ) { real_T absxk ; real_T scale ; real_T t ; real_T y ; int32_T b_k ; y =
0.0 ; scale = 3.3121686421112381E-170 ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) {
absxk = muDoubleScalarAbs ( x [ b_k ] ) ; if ( absxk > scale ) { t = scale /
absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y
+= t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static void
nd0r0ie50r ( ikljpirxgg * * pEmxArray ) { if ( * pEmxArray != ( ikljpirxgg *
) NULL ) { if ( ( ( * pEmxArray ) -> data != ( boolean_T * ) NULL ) && ( *
pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( (
* pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( ikljpirxgg *
) NULL ; } } static real_T h5dznsjt0b ( real_T tstart_tv_sec , real_T
tstart_tv_nsec , nblp1l3k1r * localDW ) { coderTimespec b_timespec ; if ( !
localDW -> cbi103hnwr ) { localDW -> cbi103hnwr = true ;
coderInitTimeFunctions ( & localDW -> aqlkdng0y4 ) ; }
coderTimeClockGettimeMonotonic ( & b_timespec , localDW -> aqlkdng0y4 ) ;
return ( b_timespec . tv_nsec - tstart_tv_nsec ) / 1.0E+9 + ( b_timespec .
tv_sec - tstart_tv_sec ) ; } static void dc3epolyb3 ( ikljpirxgg * emxArray ,
int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData ; if (
oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray
-> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; } if (
newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ; if (
i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i =
MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( boolean_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( boolean_T ) * oldNumel ) ; if ( emxArray ->
canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = (
boolean_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void hrl1vrbs3x ( const real_T A [ 36 ] ,
const gmphnpqbau * B_i , real_T Y_data [ ] , int32_T * Y_size ) { real_T c_A
[ 36 ] ; real_T s ; real_T smax ; int32_T c ; int32_T c_e ; int32_T c_p ;
int32_T ijA ; int32_T iy ; int32_T jA ; int32_T jj ; int32_T jp1j ; int32_T
kAcol ; int8_T b_ipiv [ 6 ] ; int8_T b_ipiv_p ; memcpy ( & c_A [ 0 ] , & A [
0 ] , 36U * sizeof ( real_T ) ) ; for ( kAcol = 0 ; kAcol < 6 ; kAcol ++ ) {
b_ipiv [ kAcol ] = ( int8_T ) ( kAcol + 1 ) ; } for ( kAcol = 0 ; kAcol < 5 ;
kAcol ++ ) { c = kAcol * 7 + 2 ; jj = kAcol * 7 ; c_p = 6 - kAcol ; iy = 1 ;
smax = muDoubleScalarAbs ( c_A [ jj ] ) ; for ( jA = 2 ; jA <= c_p ; jA ++ )
{ s = muDoubleScalarAbs ( c_A [ ( c + jA ) - 3 ] ) ; if ( s > smax ) { iy =
jA ; smax = s ; } } if ( c_A [ ( c + iy ) - 3 ] != 0.0 ) { if ( iy - 1 != 0 )
{ b_ipiv [ kAcol ] = ( int8_T ) ( kAcol + iy ) ; iy = ( kAcol + iy ) - 1 ;
for ( jA = 0 ; jA < 6 ; jA ++ ) { smax = c_A [ jA * 6 + kAcol ] ; c_A [ kAcol
+ jA * 6 ] = c_A [ jA * 6 + iy ] ; c_A [ iy + jA * 6 ] = smax ; } } iy = c -
kAcol ; for ( jA = c ; jA <= iy + 4 ; jA ++ ) { c_A [ jA - 1 ] /= c_A [ jj ]
; } } c_p = 5 - kAcol ; jA = jj ; jj += 6 ; for ( jp1j = 0 ; jp1j < c_p ;
jp1j ++ ) { smax = c_A [ jp1j * 6 + jj ] ; if ( c_A [ jp1j * 6 + jj ] != 0.0
) { iy = jA + 8 ; c_e = jA - kAcol ; for ( ijA = iy ; ijA <= c_e + 12 ; ijA
++ ) { c_A [ ijA - 1 ] += c_A [ ( ( c + ijA ) - jA ) - 9 ] * - smax ; } } jA
+= 6 ; } } * Y_size = B_i -> size [ 0 ] ; iy = B_i -> size [ 0 ] ; for (
kAcol = 0 ; kAcol < iy ; kAcol ++ ) { Y_data [ kAcol ] = B_i -> data [ kAcol
] ; } for ( c = 0 ; c < 5 ; c ++ ) { b_ipiv_p = b_ipiv [ c ] ; if ( c + 1 !=
b_ipiv_p ) { smax = Y_data [ c ] ; Y_data [ c ] = Y_data [ b_ipiv_p - 1 ] ;
Y_data [ b_ipiv_p - 1 ] = smax ; } } for ( c = 0 ; c < 6 ; c ++ ) { kAcol = 6
* c - 1 ; if ( Y_data [ c ] != 0.0 ) { for ( jA = c + 2 ; jA < 7 ; jA ++ ) {
Y_data [ jA - 1 ] -= c_A [ jA + kAcol ] * Y_data [ c ] ; } } } for ( jA = 5 ;
jA >= 0 ; jA -- ) { kAcol = 6 * jA ; if ( Y_data [ jA ] != 0.0 ) { Y_data [
jA ] /= c_A [ jA + kAcol ] ; iy = jA - 1 ; for ( c = 0 ; c <= iy ; c ++ ) {
Y_data [ c ] -= c_A [ c + kAcol ] * Y_data [ jA ] ; } } } } static void
br25apk0ss ( pfxij5ag5q * obj , real_T xSol [ 6 ] , exuekx0jci * exitFlag ,
real_T * en , real_T * iter , nblp1l3k1r * localDW ) { aiqe041hfp * bodyName
; bgzkddb0t0 * treeInternal ; bkb4oam1gt * args ; gmphnpqbau * H0 ;
gmphnpqbau * J ; gmphnpqbau * J_p ; gmphnpqbau * b ; gmphnpqbau * ev ;
gmphnpqbau * evprev ; gmphnpqbau * grad ; gmphnpqbau * tmp ; gmphnpqbau * y ;
ikljpirxgg * x_p ; real_T a [ 36 ] ; real_T weightMatrix [ 36 ] ; real_T
T_data [ 16 ] ; real_T Td [ 16 ] ; real_T e [ 6 ] ; real_T e_p [ 6 ] ; real_T
step_data [ 6 ] ; real_T xprev [ 6 ] ; real_T absxk ; real_T cc ; real_T cost
; real_T d ; real_T scale ; real_T t ; int32_T J_e ; int32_T aoffset ;
int32_T b_i ; int32_T boffset ; int32_T coffset ; int32_T i ; int32_T loop_ub
; int32_T m ; boolean_T x [ 6 ] ; boolean_T flag ; static const int8_T tmp_p
[ 36 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 }
; int32_T T_size [ 2 ] ; int32_T exitg1 ; int32_T step_size ; boolean_T
exitg2 ; boolean_T guard1 = false ; boolean_T guard2 = false ; for ( i = 0 ;
i < 6 ; i ++ ) { xSol [ i ] = obj -> SeedInternal [ i ] ; } hlzq4q20jr ( &
obj -> TimeObjInternal . StartTime . tv_sec , & obj -> TimeObjInternal .
StartTime . tv_nsec , localDW ) ; for ( i = 0 ; i < 6 ; i ++ ) { xprev [ i ]
= xSol [ i ] ; } pklwprvumn ( & bodyName , 2 ) ; args = obj -> ExtraArgs ;
treeInternal = args -> Robot ; J_e = bodyName -> size [ 0 ] * bodyName ->
size [ 1 ] ; bodyName -> size [ 0 ] = 1 ; bodyName -> size [ 1 ] = args ->
BodyName -> size [ 1 ] ; erzqjcuyqu ( bodyName , J_e ) ; loop_ub = args ->
BodyName -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) { bodyName
-> data [ i ] = args -> BodyName -> data [ i ] ; } for ( i = 0 ; i < 16 ; i
++ ) { Td [ i ] = args -> Tform [ i ] ; } for ( i = 0 ; i < 36 ; i ++ ) {
weightMatrix [ i ] = args -> WeightMatrix [ i ] ; } nonxxy2aaj ( & J , 2 ) ;
iuuo3fie31 ( treeInternal , xSol , bodyName , T_data , T_size , J ) ;
g13mbhvrln ( Td , T_data , T_size , e ) ; J_e = args -> ErrTemp -> size [ 0 ]
; args -> ErrTemp -> size [ 0 ] = 6 ; pzzfddv2ss ( args -> ErrTemp , J_e ) ;
for ( i = 0 ; i < 6 ; i ++ ) { args -> ErrTemp -> data [ i ] = e [ i ] ; }
scale = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { e_p [ i ] = 0.0 ; for ( loop_ub
= 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p [ i ] += weightMatrix [ 6 * i +
loop_ub ] * ( 0.5 * e [ loop_ub ] ) ; } scale += e_p [ i ] * e [ i ] ; } args
-> CostTemp = scale ; for ( i = 0 ; i < 6 ; i ++ ) { e_p [ i ] = 0.0 ; for (
loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p [ i ] += weightMatrix [ 6 * i
+ loop_ub ] * e [ loop_ub ] ; } } nonxxy2aaj ( & J_p , 2 ) ; J_e = J_p ->
size [ 0 ] * J_p -> size [ 1 ] ; J_p -> size [ 0 ] = 6 ; J_p -> size [ 1 ] =
J -> size [ 1 ] ; fqvnblve2d ( J_p , J_e ) ; loop_ub = 6 * J -> size [ 1 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { J_p -> data [ i ] = - J -> data [ i ] ;
} nonxxy2aaj ( & tmp , 2 ) ; hloxgsbgzep ( e_p , J_p , tmp ) ; J_e = args ->
GradTemp -> size [ 0 ] ; args -> GradTemp -> size [ 0 ] = tmp -> size [ 1 ] ;
pzzfddv2ss ( args -> GradTemp , J_e ) ; loop_ub = tmp -> size [ 1 ] ; for ( i
= 0 ; i < loop_ub ; i ++ ) { args -> GradTemp -> data [ i ] = tmp -> data [ i
] ; } bffihwlolx ( & evprev , 1 ) ; obj -> ExtraArgs = args ; args = obj ->
ExtraArgs ; J_e = evprev -> size [ 0 ] ; evprev -> size [ 0 ] = args ->
ErrTemp -> size [ 0 ] ; pzzfddv2ss ( evprev , J_e ) ; loop_ub = args ->
ErrTemp -> size [ 0 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { evprev -> data [
i ] = args -> ErrTemp -> data [ i ] ; } d = obj -> MaxNumIterationInternal ;
b_i = 0 ; bffihwlolx ( & grad , 1 ) ; nonxxy2aaj ( & H0 , 2 ) ; bffihwlolx (
& ev , 1 ) ; nonxxy2aaj ( & y , 2 ) ; bffihwlolx ( & b , 1 ) ; em3tin04ml ( &
x_p , 1 ) ; do { exitg1 = 0 ; if ( b_i <= ( int32_T ) d - 1 ) { args = obj ->
ExtraArgs ; treeInternal = args -> Robot ; J_e = bodyName -> size [ 0 ] *
bodyName -> size [ 1 ] ; bodyName -> size [ 0 ] = 1 ; bodyName -> size [ 1 ]
= args -> BodyName -> size [ 1 ] ; erzqjcuyqu ( bodyName , J_e ) ; loop_ub =
args -> BodyName -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) {
bodyName -> data [ i ] = args -> BodyName -> data [ i ] ; } for ( i = 0 ; i <
16 ; i ++ ) { Td [ i ] = args -> Tform [ i ] ; } for ( i = 0 ; i < 36 ; i ++
) { weightMatrix [ i ] = args -> WeightMatrix [ i ] ; } iuuo3fie31 (
treeInternal , xSol , bodyName , T_data , T_size , J ) ; J_e = J_p -> size [
0 ] * J_p -> size [ 1 ] ; J_p -> size [ 0 ] = 6 ; J_p -> size [ 1 ] = J ->
size [ 1 ] ; fqvnblve2d ( J_p , J_e ) ; loop_ub = 6 * J -> size [ 1 ] ; for (
i = 0 ; i < loop_ub ; i ++ ) { J_p -> data [ i ] = - J -> data [ i ] ; }
g13mbhvrln ( Td , T_data , T_size , e ) ; J_e = args -> ErrTemp -> size [ 0 ]
; args -> ErrTemp -> size [ 0 ] = 6 ; pzzfddv2ss ( args -> ErrTemp , J_e ) ;
for ( i = 0 ; i < 6 ; i ++ ) { args -> ErrTemp -> data [ i ] = e [ i ] ; }
scale = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { e_p [ i ] = 0.0 ; for ( loop_ub
= 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p [ i ] += weightMatrix [ 6 * i +
loop_ub ] * ( 0.5 * e [ loop_ub ] ) ; } scale += e_p [ i ] * e [ i ] ; } args
-> CostTemp = scale ; for ( i = 0 ; i < 6 ; i ++ ) { e_p [ i ] = 0.0 ; for (
loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p [ i ] += weightMatrix [ 6 * i
+ loop_ub ] * e [ loop_ub ] ; } } hloxgsbgzep ( e_p , J_p , tmp ) ; J_e =
args -> GradTemp -> size [ 0 ] ; args -> GradTemp -> size [ 0 ] = tmp -> size
[ 1 ] ; pzzfddv2ss ( args -> GradTemp , J_e ) ; loop_ub = tmp -> size [ 1 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { args -> GradTemp -> data [ i ] = tmp ->
data [ i ] ; } cost = args -> CostTemp ; obj -> ExtraArgs = args ; args = obj
-> ExtraArgs ; J_e = grad -> size [ 0 ] ; grad -> size [ 0 ] = args ->
GradTemp -> size [ 0 ] ; pzzfddv2ss ( grad , J_e ) ; loop_ub = args ->
GradTemp -> size [ 0 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { grad -> data [
i ] = args -> GradTemp -> data [ i ] ; } args = obj -> ExtraArgs ; for ( i =
0 ; i < 36 ; i ++ ) { a [ i ] = args -> WeightMatrix [ i ] ; } J_e = b ->
size [ 0 ] ; b -> size [ 0 ] = args -> ErrTemp -> size [ 0 ] ; pzzfddv2ss ( b
, J_e ) ; loop_ub = args -> ErrTemp -> size [ 0 ] ; for ( i = 0 ; i < loop_ub
; i ++ ) { b -> data [ i ] = args -> ErrTemp -> data [ i ] ; } J_e = ev ->
size [ 0 ] ; ev -> size [ 0 ] = args -> ErrTemp -> size [ 0 ] ; pzzfddv2ss (
ev , J_e ) ; loop_ub = args -> ErrTemp -> size [ 0 ] ; for ( i = 0 ; i <
loop_ub ; i ++ ) { ev -> data [ i ] = args -> ErrTemp -> data [ i ] ; } for (
i = 0 ; i < 6 ; i ++ ) { e [ i ] = 0.0 ; for ( loop_ub = 0 ; loop_ub < 6 ;
loop_ub ++ ) { e [ i ] += a [ 6 * loop_ub + i ] * b -> data [ loop_ub ] ; } }
* en = iendijjns1b ( e ) ; * iter = ( real_T ) b_i + 1.0 ; if ( grad -> size
[ 0 ] == 0 ) { cc = 0.0 ; } else { cc = 0.0 ; if ( grad -> size [ 0 ] == 1 )
{ cc = muDoubleScalarAbs ( grad -> data [ 0 ] ) ; } else { scale =
3.3121686421112381E-170 ; i = grad -> size [ 0 ] - 1 ; for ( loop_ub = 0 ;
loop_ub <= i ; loop_ub ++ ) { absxk = muDoubleScalarAbs ( grad -> data [
loop_ub ] ) ; if ( absxk > scale ) { t = scale / absxk ; cc = cc * t * t +
1.0 ; scale = absxk ; } else { t = absxk / scale ; cc += t * t ; } } cc =
scale * muDoubleScalarSqrt ( cc ) ; } } flag = ( cc < obj ->
GradientTolerance ) ; if ( flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound ; exitg1 = 1 ; }
else { guard1 = false ; guard2 = false ; if ( ( real_T ) b_i + 1.0 > 1.0 ) {
for ( loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { cc = xSol [ loop_ub ] -
xprev [ loop_ub ] ; e [ loop_ub ] = muDoubleScalarAbs ( cc ) ; xprev [
loop_ub ] = cc ; } for ( i = 0 ; i < 6 ; i ++ ) { x [ i ] = ( e [ i ] < obj
-> StepTolerance ) ; } flag = true ; loop_ub = 0 ; exitg2 = false ; while ( (
! exitg2 ) && ( loop_ub < 6 ) ) { if ( ! x [ loop_ub ] ) { flag = false ;
exitg2 = true ; } else { loop_ub ++ ; } } if ( flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum ; exitg1 = 1 ;
} else { guard2 = true ; } } else { guard2 = true ; } if ( guard2 ) { if ( (
real_T ) b_i + 1.0 > 1.0 ) { J_e = evprev -> size [ 0 ] ; evprev -> size [ 0
] = ev -> size [ 0 ] ; pzzfddv2ss ( evprev , J_e ) ; loop_ub = ev -> size [ 0
] ; for ( i = 0 ; i < loop_ub ; i ++ ) { evprev -> data [ i ] = ev -> data [
i ] - evprev -> data [ i ] ; } i = evprev -> size [ 0 ] - 1 ; J_e = b -> size
[ 0 ] ; b -> size [ 0 ] = evprev -> size [ 0 ] ; pzzfddv2ss ( b , J_e ) ; for
( loop_ub = 0 ; loop_ub <= i ; loop_ub ++ ) { b -> data [ loop_ub ] =
muDoubleScalarAbs ( evprev -> data [ loop_ub ] ) ; } J_e = x_p -> size [ 0 ]
; x_p -> size [ 0 ] = b -> size [ 0 ] ; dc3epolyb3 ( x_p , J_e ) ; loop_ub =
b -> size [ 0 ] ; for ( i = 0 ; i < loop_ub ; i ++ ) { x_p -> data [ i ] = (
b -> data [ i ] < obj -> ErrorChangeTolerance ) ; } flag = true ; loop_ub = 0
; exitg2 = false ; while ( ( ! exitg2 ) && ( loop_ub + 1 <= x_p -> size [ 0 ]
) ) { if ( ! x_p -> data [ loop_ub ] ) { flag = false ; exitg2 = true ; }
else { loop_ub ++ ; } } if ( flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_ChangeInErrorBelowMinimum ; exitg1
= 1 ; } else { guard1 = true ; } } else { guard1 = true ; } } if ( guard1 ) {
cc = h5dznsjt0b ( obj -> TimeObjInternal . StartTime . tv_sec , obj ->
TimeObjInternal . StartTime . tv_nsec , localDW ) ; flag = ( cc > obj ->
MaxTimeInternal ) ; if ( flag ) { * exitFlag =
robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded ; exitg1 = 1 ; }
else { J_e = evprev -> size [ 0 ] ; evprev -> size [ 0 ] = ev -> size [ 0 ] ;
pzzfddv2ss ( evprev , J_e ) ; loop_ub = ev -> size [ 0 ] ; for ( i = 0 ; i <
loop_ub ; i ++ ) { evprev -> data [ i ] = ev -> data [ i ] ; } for ( i = 0 ;
i < 6 ; i ++ ) { xprev [ i ] = xSol [ i ] ; } flag = obj -> UseErrorDamping ;
cc = ( real_T ) flag * cost ; scale = cc + obj -> DampingBias ; m = J_p ->
size [ 1 ] ; J_e = y -> size [ 0 ] * y -> size [ 1 ] ; y -> size [ 0 ] = J_p
-> size [ 1 ] ; y -> size [ 1 ] = 6 ; fqvnblve2d ( y , J_e ) ; for ( i = 0 ;
i < 6 ; i ++ ) { coffset = i * m - 1 ; boffset = i * 6 - 1 ; for ( J_e = 0 ;
J_e < m ; J_e ++ ) { aoffset = J_e * 6 - 1 ; absxk = 0.0 ; for ( loop_ub = 0
; loop_ub < 6 ; loop_ub ++ ) { absxk += J_p -> data [ ( loop_ub + aoffset ) +
1 ] * weightMatrix [ ( loop_ub + boffset ) + 1 ] ; } y -> data [ ( coffset +
J_e ) + 1 ] = absxk ; } } m = y -> size [ 0 ] ; aoffset = J_p -> size [ 1 ] -
1 ; J_e = H0 -> size [ 0 ] * H0 -> size [ 1 ] ; H0 -> size [ 0 ] = y -> size
[ 0 ] ; H0 -> size [ 1 ] = J_p -> size [ 1 ] ; fqvnblve2d ( H0 , J_e ) ; for
( i = 0 ; i <= aoffset ; i ++ ) { coffset = i * m - 1 ; boffset = i * 6 - 1 ;
for ( J_e = 0 ; J_e < m ; J_e ++ ) { absxk = 0.0 ; for ( loop_ub = 0 ;
loop_ub < 6 ; loop_ub ++ ) { absxk += y -> data [ loop_ub * y -> size [ 0 ] +
J_e ] * J_p -> data [ ( boffset + loop_ub ) + 1 ] ; } H0 -> data [ ( coffset
+ J_e ) + 1 ] = absxk ; } } for ( i = 0 ; i < 36 ; i ++ ) { weightMatrix [ i
] = - ( H0 -> data [ i ] + scale * ( real_T ) tmp_p [ i ] ) ; } hrl1vrbs3x (
weightMatrix , grad , step_data , & step_size ) ; args = obj -> ExtraArgs ;
treeInternal = args -> Robot ; J_e = bodyName -> size [ 0 ] * bodyName ->
size [ 1 ] ; bodyName -> size [ 0 ] = 1 ; bodyName -> size [ 1 ] = args ->
BodyName -> size [ 1 ] ; erzqjcuyqu ( bodyName , J_e ) ; loop_ub = args ->
BodyName -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) { bodyName
-> data [ i ] = args -> BodyName -> data [ i ] ; } for ( i = 0 ; i < 16 ; i
++ ) { Td [ i ] = args -> Tform [ i ] ; } for ( i = 0 ; i < 36 ; i ++ ) {
weightMatrix [ i ] = args -> WeightMatrix [ i ] ; } for ( i = 0 ; i < 6 ; i
++ ) { e [ i ] = xSol [ i ] + step_data [ i ] ; } iuuo3fie31 ( treeInternal ,
e , bodyName , T_data , T_size , J ) ; g13mbhvrln ( Td , T_data , T_size , e
) ; J_e = args -> ErrTemp -> size [ 0 ] ; args -> ErrTemp -> size [ 0 ] = 6 ;
pzzfddv2ss ( args -> ErrTemp , J_e ) ; for ( i = 0 ; i < 6 ; i ++ ) { args ->
ErrTemp -> data [ i ] = e [ i ] ; } scale = 0.0 ; for ( i = 0 ; i < 6 ; i ++
) { e_p [ i ] = 0.0 ; for ( loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p [
i ] += weightMatrix [ 6 * i + loop_ub ] * ( 0.5 * e [ loop_ub ] ) ; } scale
+= e_p [ i ] * e [ i ] ; } args -> CostTemp = scale ; for ( i = 0 ; i < 6 ; i
++ ) { e_p [ i ] = 0.0 ; for ( loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p
[ i ] += weightMatrix [ 6 * i + loop_ub ] * e [ loop_ub ] ; } } J_e = J_p ->
size [ 0 ] * J_p -> size [ 1 ] ; J_p -> size [ 0 ] = 6 ; J_p -> size [ 1 ] =
J -> size [ 1 ] ; fqvnblve2d ( J_p , J_e ) ; loop_ub = 6 * J -> size [ 1 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { J_p -> data [ i ] = - J -> data [ i ] ;
} hloxgsbgzep ( e_p , J_p , tmp ) ; J_e = args -> GradTemp -> size [ 0 ] ;
args -> GradTemp -> size [ 0 ] = tmp -> size [ 1 ] ; pzzfddv2ss ( args ->
GradTemp , J_e ) ; loop_ub = tmp -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ;
i ++ ) { args -> GradTemp -> data [ i ] = tmp -> data [ i ] ; } scale = args
-> CostTemp ; absxk = 1.0 ; while ( scale > cost ) { absxk *= 2.5 ; scale =
absxk * obj -> DampingBias + cc ; for ( i = 0 ; i < 36 ; i ++ ) {
weightMatrix [ i ] = - ( H0 -> data [ i ] + scale * ( real_T ) tmp_p [ i ] )
; } hrl1vrbs3x ( weightMatrix , grad , step_data , & step_size ) ; args = obj
-> ExtraArgs ; treeInternal = args -> Robot ; J_e = bodyName -> size [ 0 ] *
bodyName -> size [ 1 ] ; bodyName -> size [ 0 ] = 1 ; bodyName -> size [ 1 ]
= args -> BodyName -> size [ 1 ] ; erzqjcuyqu ( bodyName , J_e ) ; loop_ub =
args -> BodyName -> size [ 1 ] - 1 ; for ( i = 0 ; i <= loop_ub ; i ++ ) {
bodyName -> data [ i ] = args -> BodyName -> data [ i ] ; } for ( i = 0 ; i <
16 ; i ++ ) { Td [ i ] = args -> Tform [ i ] ; } for ( i = 0 ; i < 36 ; i ++
) { weightMatrix [ i ] = args -> WeightMatrix [ i ] ; } for ( i = 0 ; i < 6 ;
i ++ ) { e [ i ] = xSol [ i ] + step_data [ i ] ; } iuuo3fie31 ( treeInternal
, e , bodyName , T_data , T_size , J ) ; g13mbhvrln ( Td , T_data , T_size ,
e ) ; J_e = args -> ErrTemp -> size [ 0 ] ; args -> ErrTemp -> size [ 0 ] = 6
; pzzfddv2ss ( args -> ErrTemp , J_e ) ; for ( i = 0 ; i < 6 ; i ++ ) { args
-> ErrTemp -> data [ i ] = e [ i ] ; } scale = 0.0 ; for ( i = 0 ; i < 6 ; i
++ ) { e_p [ i ] = 0.0 ; for ( loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p
[ i ] += weightMatrix [ 6 * i + loop_ub ] * ( 0.5 * e [ loop_ub ] ) ; } scale
+= e_p [ i ] * e [ i ] ; } args -> CostTemp = scale ; for ( i = 0 ; i < 6 ; i
++ ) { e_p [ i ] = 0.0 ; for ( loop_ub = 0 ; loop_ub < 6 ; loop_ub ++ ) { e_p
[ i ] += weightMatrix [ 6 * i + loop_ub ] * e [ loop_ub ] ; } } J_e = J_p ->
size [ 0 ] * J_p -> size [ 1 ] ; J_p -> size [ 0 ] = 6 ; J_p -> size [ 1 ] =
J -> size [ 1 ] ; fqvnblve2d ( J_p , J_e ) ; loop_ub = 6 * J -> size [ 1 ] ;
for ( i = 0 ; i < loop_ub ; i ++ ) { J_p -> data [ i ] = - J -> data [ i ] ;
} hloxgsbgzep ( e_p , J_p , tmp ) ; J_e = args -> GradTemp -> size [ 0 ] ;
args -> GradTemp -> size [ 0 ] = tmp -> size [ 1 ] ; pzzfddv2ss ( args ->
GradTemp , J_e ) ; loop_ub = tmp -> size [ 1 ] ; for ( i = 0 ; i < loop_ub ;
i ++ ) { args -> GradTemp -> data [ i ] = tmp -> data [ i ] ; } scale = args
-> CostTemp ; } for ( i = 0 ; i < 6 ; i ++ ) { xSol [ i ] += step_data [ i ]
; } if ( obj -> ConstraintsOn ) { args = obj -> ExtraArgs ; loop_ub = args ->
Limits -> size [ 0 ] ; J_e = grad -> size [ 0 ] ; grad -> size [ 0 ] =
loop_ub ; pzzfddv2ss ( grad , J_e ) ; for ( i = 0 ; i < loop_ub ; i ++ ) {
grad -> data [ i ] = args -> Limits -> data [ i ] ; } for ( loop_ub = 0 ;
loop_ub < 6 ; loop_ub ++ ) { e [ loop_ub ] = muDoubleScalarMax ( grad -> data
[ loop_ub ] , xSol [ loop_ub ] ) ; } loop_ub = args -> Limits -> size [ 0 ] ;
J_e = grad -> size [ 0 ] ; grad -> size [ 0 ] = loop_ub ; pzzfddv2ss ( grad ,
J_e ) ; for ( i = 0 ; i < loop_ub ; i ++ ) { grad -> data [ i ] = args ->
Limits -> data [ i + args -> Limits -> size [ 0 ] ] ; } for ( loop_ub = 0 ;
loop_ub < 6 ; loop_ub ++ ) { xSol [ loop_ub ] = muDoubleScalarMin ( grad ->
data [ loop_ub ] , e [ loop_ub ] ) ; } } b_i ++ ; } } } } else { args = obj
-> ExtraArgs ; for ( i = 0 ; i < 36 ; i ++ ) { a [ i ] = args -> WeightMatrix
[ i ] ; } J_e = b -> size [ 0 ] ; b -> size [ 0 ] = args -> ErrTemp -> size [
0 ] ; pzzfddv2ss ( b , J_e ) ; loop_ub = args -> ErrTemp -> size [ 0 ] ; for
( i = 0 ; i < loop_ub ; i ++ ) { b -> data [ i ] = args -> ErrTemp -> data [
i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { e [ i ] = 0.0 ; for ( loop_ub = 0 ;
loop_ub < 6 ; loop_ub ++ ) { e [ i ] += a [ 6 * loop_ub + i ] * b -> data [
loop_ub ] ; } } * en = iendijjns1b ( e ) ; * iter = obj ->
MaxNumIterationInternal ; * exitFlag =
robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded ; exitg1 = 1
; } } while ( exitg1 == 0 ) ; g41mplts0w ( & J_p ) ; g41mplts0w ( & tmp ) ;
nd0r0ie50r ( & x_p ) ; g41mplts0w ( & b ) ; g41mplts0w ( & J ) ; n3y5ukwimu (
& bodyName ) ; g41mplts0w ( & y ) ; g41mplts0w ( & ev ) ; g41mplts0w ( & H0 )
; g41mplts0w ( & grad ) ; g41mplts0w ( & evprev ) ; } static void kpzcr4m3lem
( real_T varargin_1 , gmphnpqbau * r , nblp1l3k1r * localDW ) { int32_T b_k ;
int32_T d ; b_k = r -> size [ 0 ] ; r -> size [ 0 ] = ( int32_T ) varargin_1
; pzzfddv2ss ( r , b_k ) ; d = ( int32_T ) varargin_1 - 1 ; for ( b_k = 0 ;
b_k <= d ; b_k ++ ) { r -> data [ b_k ] = odltdnn0ynit ( localDW ->
h2pnsauhxt ) ; } } static boolean_T pa2rdwbqrp ( const ikljpirxgg * x ) {
int32_T ix ; boolean_T exitg1 ; boolean_T y ; y = false ; ix = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( ix + 1 <= x -> size [ 0 ] ) ) { if ( ! x ->
data [ ix ] ) { ix ++ ; } else { y = true ; exitg1 = true ; } } return y ; }
static real_T odltdnn0ynite ( uint32_T state [ 625 ] ) { real_T xi [ 257 ] ;
real_T d_u ; real_T r ; real_T x ; int32_T i ; uint32_T u32 [ 2 ] ; static
const real_T tmp [ 257 ] = { 1.0 , 0.977101701267673 , 0.959879091800108 ,
0.9451989534423 , 0.932060075959231 , 0.919991505039348 , 0.908726440052131 ,
0.898095921898344 , 0.887984660755834 , 0.878309655808918 , 0.869008688036857
, 0.860033621196332 , 0.851346258458678 , 0.842915653112205 ,
0.834716292986884 , 0.826726833946222 , 0.818929191603703 , 0.811307874312656
, 0.803849483170964 , 0.796542330422959 , 0.789376143566025 ,
0.782341832654803 , 0.775431304981187 , 0.768637315798486 , 0.761953346836795
, 0.755373506507096 , 0.748892447219157 , 0.742505296340151 ,
0.736207598126863 , 0.729995264561476 , 0.72386453346863 , 0.717811932630722
, 0.711834248878248 , 0.705928501332754 , 0.700091918136512 ,
0.694321916126117 , 0.688616083004672 , 0.682972161644995 , 0.677388036218774
, 0.671861719897082 , 0.66639134390875 , 0.660975147776663 ,
0.655611470579697 , 0.650298743110817 , 0.645035480820822 , 0.639820277453057
, 0.634651799287624 , 0.629528779924837 , 0.624450015547027 ,
0.619414360605834 , 0.614420723888914 , 0.609468064925773 , 0.604555390697468
, 0.599681752619125 , 0.594846243767987 , 0.590047996332826 ,
0.585286179263371 , 0.580559996100791 , 0.575868682972354 , 0.571211506735253
, 0.566587763256165 , 0.561996775814525 , 0.557437893618766 ,
0.552910490425833 , 0.548413963255266 , 0.543947731190026 , 0.539511234256952
, 0.535103932380458 , 0.530725304403662 , 0.526374847171684 ,
0.522052074672322 , 0.517756517229756 , 0.513487720747327 , 0.509245245995748
, 0.505028667943468 , 0.500837575126149 , 0.49667156905249 ,
0.492530263643869 , 0.488413284705458 , 0.484320269426683 , 0.480250865909047
, 0.476204732719506 , 0.47218153846773 , 0.468180961405694 ,
0.464202689048174 , 0.460246417812843 , 0.456311852678716 , 0.452398706861849
, 0.448506701507203 , 0.444635565395739 , 0.440785034665804 ,
0.436954852547985 , 0.433144769112652 , 0.429354541029442 , 0.425583931338022
, 0.421832709229496 , 0.418100649837848 , 0.414387534040891 ,
0.410693148270188 , 0.407017284329473 , 0.403359739221114 , 0.399720314980197
, 0.396098818515832 , 0.392495061459315 , 0.388908860018789 ,
0.385340034840077 , 0.381788410873393 , 0.378253817245619 , 0.374736087137891
, 0.371235057668239 , 0.367750569779032 , 0.364282468129004 ,
0.360830600989648 , 0.357394820145781 , 0.353974980800077 , 0.350570941481406
, 0.347182563956794 , 0.343809713146851 , 0.340452257044522 ,
0.337110066637006 , 0.333783015830718 , 0.330470981379163 , 0.327173842813601
, 0.323891482376391 , 0.320623784956905 , 0.317370638029914 ,
0.314131931596337 , 0.310907558126286 , 0.307697412504292 , 0.30450139197665
, 0.301319396100803 , 0.298151326696685 , 0.294997087799962 ,
0.291856585617095 , 0.288729728482183 , 0.285616426815502 , 0.282516593083708
, 0.279430141761638 , 0.276356989295668 , 0.273297054068577 ,
0.270250256365875 , 0.267216518343561 , 0.264195763997261 , 0.261187919132721
, 0.258192911337619 , 0.255210669954662 , 0.252241126055942 ,
0.249284212418529 , 0.246339863501264 , 0.24340801542275 , 0.240488605940501
, 0.237581574431238 , 0.23468686187233 , 0.231804410824339 ,
0.228934165414681 , 0.226076071322381 , 0.223230075763918 , 0.220396127480152
, 0.217574176724331 , 0.214764175251174 , 0.211966076307031 ,
0.209179834621125 , 0.206405406397881 , 0.203642749310335 , 0.200891822494657
, 0.198152586545776 , 0.195425003514135 , 0.192709036903589 ,
0.190004651670465 , 0.187311814223801 , 0.1846304924268 , 0.181960655599523 ,
0.179302274522848 , 0.176655321443735 , 0.174019770081839 , 0.171395595637506
, 0.168782774801212 , 0.166181285764482 , 0.163591108232366 ,
0.161012223437511 , 0.158444614155925 , 0.15588826472448 , 0.153343161060263
, 0.150809290681846 , 0.148286642732575 , 0.145775208005994 ,
0.143274978973514 , 0.140785949814445 , 0.138308116448551 , 0.135841476571254
, 0.133386029691669 , 0.130941777173644 , 0.12850872228 , 0.126086870220186 ,
0.123676228201597 , 0.12127680548479 , 0.11888861344291 , 0.116511665625611 ,
0.114145977827839 , 0.111791568163838 , 0.109448457146812 , 0.107116667774684
, 0.104796225622487 , 0.102487158941935 , 0.10018949876881 ,
0.0979032790388625 , 0.095628536713009 , 0.093365311912691 ,
0.0911136480663738 , 0.0888735920682759 , 0.0866451944505581 ,
0.0844285095703535 , 0.082223595813203 , 0.0800305158146631 ,
0.0778493367020961 , 0.0756801303589272 , 0.0735229737139814 ,
0.0713779490588905 , 0.0692451443970068 , 0.0671246538277886 ,
0.065016577971243 , 0.0629210244377582 , 0.06083810834954 ,
0.0587679529209339 , 0.0567106901062031 , 0.0546664613248891 ,
0.0526354182767924 , 0.0506177238609479 , 0.0486135532158687 ,
0.0466230949019305 , 0.0446465522512946 , 0.0426841449164746 ,
0.0407361106559411 , 0.0388027074045262 , 0.0368842156885674 ,
0.0349809414617162 , 0.0330932194585786 , 0.0312214171919203 ,
0.0293659397581334 , 0.0275272356696031 , 0.0257058040085489 ,
0.0239022033057959 , 0.0221170627073089 , 0.0203510962300445 ,
0.0186051212757247 , 0.0168800831525432 , 0.0151770883079353 ,
0.0134974506017399 , 0.0118427578579079 , 0.0102149714397015 ,
0.00861658276939875 , 0.00705087547137324 , 0.00552240329925101 ,
0.00403797259336304 , 0.00260907274610216 , 0.0012602859304986 ,
0.000477467764609386 } ; const real_T * fitab ; int32_T exitg1 ; xi [ 0 ] =
0.0 ; xi [ 1 ] = 0.215241895984875 ; xi [ 2 ] = 0.286174591792068 ; xi [ 3 ]
= 0.335737519214422 ; xi [ 4 ] = 0.375121332878378 ; xi [ 5 ] =
0.408389134611989 ; xi [ 6 ] = 0.43751840220787 ; xi [ 7 ] = 0.46363433679088
; xi [ 8 ] = 0.487443966139235 ; xi [ 9 ] = 0.50942332960209 ; xi [ 10 ] =
0.529909720661557 ; xi [ 11 ] = 0.549151702327164 ; xi [ 12 ] =
0.567338257053817 ; xi [ 13 ] = 0.584616766106378 ; xi [ 14 ] =
0.601104617755991 ; xi [ 15 ] = 0.61689699000775 ; xi [ 16 ] =
0.63207223638606 ; xi [ 17 ] = 0.646695714894993 ; xi [ 18 ] =
0.660822574244419 ; xi [ 19 ] = 0.674499822837293 ; xi [ 20 ] =
0.687767892795788 ; xi [ 21 ] = 0.700661841106814 ; xi [ 22 ] =
0.713212285190975 ; xi [ 23 ] = 0.725446140909999 ; xi [ 24 ] =
0.737387211434295 ; xi [ 25 ] = 0.749056662017815 ; xi [ 26 ] =
0.760473406430107 ; xi [ 27 ] = 0.771654424224568 ; xi [ 28 ] =
0.782615023307232 ; xi [ 29 ] = 0.793369058840623 ; xi [ 30 ] =
0.80392911698997 ; xi [ 31 ] = 0.814306670135215 ; xi [ 32 ] =
0.824512208752291 ; xi [ 33 ] = 0.834555354086381 ; xi [ 34 ] =
0.844444954909153 ; xi [ 35 ] = 0.854189171008163 ; xi [ 36 ] =
0.863795545553308 ; xi [ 37 ] = 0.87327106808886 ; xi [ 38 ] =
0.882622229585165 ; xi [ 39 ] = 0.891855070732941 ; xi [ 40 ] =
0.900975224461221 ; xi [ 41 ] = 0.909987953496718 ; xi [ 42 ] =
0.91889818364959 ; xi [ 43 ] = 0.927710533401999 ; xi [ 44 ] =
0.936429340286575 ; xi [ 45 ] = 0.945058684468165 ; xi [ 46 ] =
0.953602409881086 ; xi [ 47 ] = 0.96206414322304 ; xi [ 48 ] =
0.970447311064224 ; xi [ 49 ] = 0.978755155294224 ; xi [ 50 ] =
0.986990747099062 ; xi [ 51 ] = 0.99515699963509 ; xi [ 52 ] =
1.00325667954467 ; xi [ 53 ] = 1.01129241744 ; xi [ 54 ] = 1.01926671746548 ;
xi [ 55 ] = 1.02718196603564 ; xi [ 56 ] = 1.03504043983344 ; xi [ 57 ] =
1.04284431314415 ; xi [ 58 ] = 1.05059566459093 ; xi [ 59 ] =
1.05829648333067 ; xi [ 60 ] = 1.06594867476212 ; xi [ 61 ] =
1.07355406579244 ; xi [ 62 ] = 1.0811144097034 ; xi [ 63 ] = 1.08863139065398
; xi [ 64 ] = 1.09610662785202 ; xi [ 65 ] = 1.10354167942464 ; xi [ 66 ] =
1.11093804601357 ; xi [ 67 ] = 1.11829717411934 ; xi [ 68 ] =
1.12562045921553 ; xi [ 69 ] = 1.13290924865253 ; xi [ 70 ] =
1.14016484436815 ; xi [ 71 ] = 1.14738850542085 ; xi [ 72 ] =
1.15458145035993 ; xi [ 73 ] = 1.16174485944561 ; xi [ 74 ] =
1.16887987673083 ; xi [ 75 ] = 1.17598761201545 ; xi [ 76 ] =
1.18306914268269 ; xi [ 77 ] = 1.19012551542669 ; xi [ 78 ] =
1.19715774787944 ; xi [ 79 ] = 1.20416683014438 ; xi [ 80 ] = 1.2111537262437
; xi [ 81 ] = 1.21811937548548 ; xi [ 82 ] = 1.22506469375653 ; xi [ 83 ] =
1.23199057474614 ; xi [ 84 ] = 1.23889789110569 ; xi [ 85 ] =
1.24578749554863 ; xi [ 86 ] = 1.2526602218949 ; xi [ 87 ] = 1.25951688606371
; xi [ 88 ] = 1.26635828701823 ; xi [ 89 ] = 1.27318520766536 ; xi [ 90 ] =
1.27999841571382 ; xi [ 91 ] = 1.28679866449324 ; xi [ 92 ] =
1.29358669373695 ; xi [ 93 ] = 1.30036323033084 ; xi [ 94 ] =
1.30712898903073 ; xi [ 95 ] = 1.31388467315022 ; xi [ 96 ] =
1.32063097522106 ; xi [ 97 ] = 1.32736857762793 ; xi [ 98 ] =
1.33409815321936 ; xi [ 99 ] = 1.3408203658964 ; xi [ 100 ] =
1.34753587118059 ; xi [ 101 ] = 1.35424531676263 ; xi [ 102 ] =
1.36094934303328 ; xi [ 103 ] = 1.36764858359748 ; xi [ 104 ] =
1.37434366577317 ; xi [ 105 ] = 1.38103521107586 ; xi [ 106 ] =
1.38772383568998 ; xi [ 107 ] = 1.39441015092814 ; xi [ 108 ] =
1.40109476367925 ; xi [ 109 ] = 1.4077782768464 ; xi [ 110 ] =
1.41446128977547 ; xi [ 111 ] = 1.42114439867531 ; xi [ 112 ] =
1.42782819703026 ; xi [ 113 ] = 1.43451327600589 ; xi [ 114 ] =
1.44120022484872 ; xi [ 115 ] = 1.44788963128058 ; xi [ 116 ] =
1.45458208188841 ; xi [ 117 ] = 1.46127816251028 ; xi [ 118 ] =
1.46797845861808 ; xi [ 119 ] = 1.47468355569786 ; xi [ 120 ] =
1.48139403962819 ; xi [ 121 ] = 1.48811049705745 ; xi [ 122 ] =
1.49483351578049 ; xi [ 123 ] = 1.50156368511546 ; xi [ 124 ] =
1.50830159628131 ; xi [ 125 ] = 1.51504784277671 ; xi [ 126 ] =
1.521803020761 ; xi [ 127 ] = 1.52856772943771 ; xi [ 128 ] =
1.53534257144151 ; xi [ 129 ] = 1.542128153229 ; xi [ 130 ] =
1.54892508547417 ; xi [ 131 ] = 1.55573398346918 ; xi [ 132 ] =
1.56255546753104 ; xi [ 133 ] = 1.56939016341512 ; xi [ 134 ] =
1.57623870273591 ; xi [ 135 ] = 1.58310172339603 ; xi [ 136 ] =
1.58997987002419 ; xi [ 137 ] = 1.59687379442279 ; xi [ 138 ] =
1.60378415602609 ; xi [ 139 ] = 1.61071162236983 ; xi [ 140 ] =
1.61765686957301 ; xi [ 141 ] = 1.62462058283303 ; xi [ 142 ] =
1.63160345693487 ; xi [ 143 ] = 1.63860619677555 ; xi [ 144 ] =
1.64562951790478 ; xi [ 145 ] = 1.65267414708306 ; xi [ 146 ] =
1.65974082285818 ; xi [ 147 ] = 1.66683029616166 ; xi [ 148 ] =
1.67394333092612 ; xi [ 149 ] = 1.68108070472517 ; xi [ 150 ] =
1.68824320943719 ; xi [ 151 ] = 1.69543165193456 ; xi [ 152 ] =
1.70264685479992 ; xi [ 153 ] = 1.7098896570713 ; xi [ 154 ] =
1.71716091501782 ; xi [ 155 ] = 1.72446150294804 ; xi [ 156 ] =
1.73179231405296 ; xi [ 157 ] = 1.73915426128591 ; xi [ 158 ] =
1.74654827828172 ; xi [ 159 ] = 1.75397532031767 ; xi [ 160 ] =
1.76143636531891 ; xi [ 161 ] = 1.76893241491127 ; xi [ 162 ] =
1.77646449552452 ; xi [ 163 ] = 1.78403365954944 ; xi [ 164 ] =
1.79164098655216 ; xi [ 165 ] = 1.79928758454972 ; xi [ 166 ] =
1.80697459135082 ; xi [ 167 ] = 1.81470317596628 ; xi [ 168 ] =
1.82247454009388 ; xi [ 169 ] = 1.83028991968276 ; xi [ 170 ] =
1.83815058658281 ; xi [ 171 ] = 1.84605785028518 ; xi [ 172 ] =
1.8540130597602 ; xi [ 173 ] = 1.86201760539967 ; xi [ 174 ] =
1.87007292107127 ; xi [ 175 ] = 1.878180486293 ; xi [ 176 ] =
1.88634182853678 ; xi [ 177 ] = 1.8945585256707 ; xi [ 178 ] =
1.90283220855043 ; xi [ 179 ] = 1.91116456377125 ; xi [ 180 ] =
1.91955733659319 ; xi [ 181 ] = 1.92801233405266 ; xi [ 182 ] =
1.93653142827569 ; xi [ 183 ] = 1.94511656000868 ; xi [ 184 ] =
1.95376974238465 ; xi [ 185 ] = 1.96249306494436 ; xi [ 186 ] =
1.97128869793366 ; xi [ 187 ] = 1.98015889690048 ; xi [ 188 ] =
1.98910600761744 ; xi [ 189 ] = 1.99813247135842 ; xi [ 190 ] =
2.00724083056053 ; xi [ 191 ] = 2.0164337349062 ; xi [ 192 ] =
2.02571394786385 ; xi [ 193 ] = 2.03508435372962 ; xi [ 194 ] =
2.04454796521753 ; xi [ 195 ] = 2.05410793165065 ; xi [ 196 ] =
2.06376754781173 ; xi [ 197 ] = 2.07353026351874 ; xi [ 198 ] =
2.0833996939983 ; xi [ 199 ] = 2.09337963113879 ; xi [ 200 ] =
2.10347405571488 ; xi [ 201 ] = 2.11368715068665 ; xi [ 202 ] =
2.12402331568952 ; xi [ 203 ] = 2.13448718284602 ; xi [ 204 ] =
2.14508363404789 ; xi [ 205 ] = 2.15581781987674 ; xi [ 206 ] =
2.16669518035431 ; xi [ 207 ] = 2.17772146774029 ; xi [ 208 ] =
2.18890277162636 ; xi [ 209 ] = 2.20024554661128 ; xi [ 210 ] =
2.21175664288416 ; xi [ 211 ] = 2.22344334009251 ; xi [ 212 ] =
2.23531338492992 ; xi [ 213 ] = 2.24737503294739 ; xi [ 214 ] =
2.25963709517379 ; xi [ 215 ] = 2.27210899022838 ; xi [ 216 ] =
2.28480080272449 ; xi [ 217 ] = 2.29772334890286 ; xi [ 218 ] =
2.31088825060137 ; xi [ 219 ] = 2.32430801887113 ; xi [ 220 ] =
2.33799614879653 ; xi [ 221 ] = 2.35196722737914 ; xi [ 222 ] =
2.36623705671729 ; xi [ 223 ] = 2.38082279517208 ; xi [ 224 ] =
2.39574311978193 ; xi [ 225 ] = 2.41101841390112 ; xi [ 226 ] =
2.42667098493715 ; xi [ 227 ] = 2.44272531820036 ; xi [ 228 ] =
2.4592083743347 ; xi [ 229 ] = 2.47614993967052 ; xi [ 230 ] =
2.49358304127105 ; xi [ 231 ] = 2.51154444162669 ; xi [ 232 ] =
2.53007523215985 ; xi [ 233 ] = 2.54922155032478 ; xi [ 234 ] =
2.56903545268184 ; xi [ 235 ] = 2.58957598670829 ; xi [ 236 ] =
2.61091051848882 ; xi [ 237 ] = 2.63311639363158 ; xi [ 238 ] =
2.65628303757674 ; xi [ 239 ] = 2.68051464328574 ; xi [ 240 ] =
2.70593365612306 ; xi [ 241 ] = 2.73268535904401 ; xi [ 242 ] =
2.76094400527999 ; xi [ 243 ] = 2.79092117400193 ; xi [ 244 ] =
2.82287739682644 ; xi [ 245 ] = 2.85713873087322 ; xi [ 246 ] =
2.89412105361341 ; xi [ 247 ] = 2.93436686720889 ; xi [ 248 ] =
2.97860327988184 ; xi [ 249 ] = 3.02783779176959 ; xi [ 250 ] =
3.08352613200214 ; xi [ 251 ] = 3.147889289518 ; xi [ 252 ] = 3.2245750520478
; xi [ 253 ] = 3.32024473383983 ; xi [ 254 ] = 3.44927829856143 ; xi [ 255 ]
= 3.65415288536101 ; xi [ 256 ] = 3.91075795952492 ; fitab = & tmp [ 0 ] ; do
{ exitg1 = 0 ; degn13zh3co ( state , u32 ) ; i = ( int32_T ) ( ( u32 [ 1 ] >>
24U ) + 1U ) ; r = ( ( ( real_T ) ( u32 [ 0 ] >> 3U ) * 1.6777216E+7 + (
real_T ) ( ( int32_T ) u32 [ 1 ] & 16777215 ) ) * 2.2204460492503131E-16 -
1.0 ) * xi [ i ] ; if ( muDoubleScalarAbs ( r ) <= xi [ i - 1 ] ) { exitg1 =
1 ; } else if ( i < 256 ) { x = odltdnn0ynit ( state ) ; if ( ( fitab [ i - 1
] - fitab [ i ] ) * x + fitab [ i ] < muDoubleScalarExp ( - 0.5 * r * r ) ) {
exitg1 = 1 ; } } else { do { x = odltdnn0ynit ( state ) ; x =
muDoubleScalarLog ( x ) * 0.273661237329758 ; d_u = odltdnn0ynit ( state ) ;
} while ( ! ( - 2.0 * muDoubleScalarLog ( d_u ) > x * x ) ) ; if ( r < 0.0 )
{ r = x - 3.65415288536101 ; } else { r = 3.65415288536101 - x ; } exitg1 = 1
; } } while ( exitg1 == 0 ) ; return r ; } static void lvurcv3f1k ( const
real_T varargin_1 [ 2 ] , gmphnpqbau * r , nblp1l3k1r * localDW ) { int32_T
b_k ; int32_T d ; b_k = r -> size [ 0 ] * r -> size [ 1 ] ; r -> size [ 0 ] =
( int32_T ) varargin_1 [ 0 ] ; r -> size [ 1 ] = 1 ; fqvnblve2d ( r , b_k ) ;
d = ( int32_T ) varargin_1 [ 0 ] - 1 ; for ( b_k = 0 ; b_k <= d ; b_k ++ ) {
r -> data [ b_k ] = odltdnn0ynite ( localDW -> h2pnsauhxt ) ; } } static void
kvsdoegvof ( pfxij5ag5q * obj , const real_T seed [ 6 ] , real_T xSol [ 6 ] ,
real_T * solutionInfo_Iterations , real_T * solutionInfo_RRAttempts , real_T
* solutionInfo_Error , real_T * solutionInfo_ExitFlag , char_T
solutionInfo_Status_data [ ] , int32_T solutionInfo_Status_size [ 2 ] ,
nblp1l3k1r * localDW ) { bgzkddb0t0 * obj_p ; bkb4oam1gt * args ; gmphnpqbau
* e ; gmphnpqbau * lb ; gmphnpqbau * newseed ; gmphnpqbau * qi ; gmphnpqbau *
rn ; gmphnpqbau * ub ; ikljpirxgg * b ; ikljpirxgg * tmp ; ikljpirxgg * tmp_p
; iuu1xhv34c * obj_e ; real_T c_xSol [ 6 ] ; real_T ub_p [ 2 ] ; real_T err ;
real_T iter ; real_T lb_p ; real_T tol ; exuekx0jci exitFlag ; exuekx0jci
exitFlagPrev ; int32_T c ; int32_T i ; int32_T loop_ub ; int32_T nx ; int32_T
tmp_e ; boolean_T y ; static const char_T tmp_i [ 14 ] = { 'b' , 'e' , 's' ,
't' , ' ' , 'a' , 'v' , 'a' , 'i' , 'l' , 'a' , 'b' , 'l' , 'e' } ; static
const char_T tmp_m [ 7 ] = { 's' , 'u' , 'c' , 'c' , 'e' , 's' , 's' } ;
boolean_T exitg1 ; boolean_T exitg2 ; boolean_T guard1 = false ; boolean_T
guard2 = false ; boolean_T guard3 = false ; obj -> MaxNumIterationInternal =
obj -> MaxNumIteration ; obj -> MaxTimeInternal = obj -> MaxTime ; for ( i =
0 ; i < 6 ; i ++ ) { obj -> SeedInternal [ i ] = seed [ i ] ; } tol = obj ->
SolutionTolerance ; hlzq4q20jr ( & obj -> TimeObj . StartTime . tv_sec , &
obj -> TimeObj . StartTime . tv_nsec , localDW ) ; br25apk0ss ( obj , xSol ,
& exitFlag , & err , & iter , localDW ) ; * solutionInfo_RRAttempts = 0.0 ; *
solutionInfo_Iterations = iter ; * solutionInfo_Error = err ; exitFlagPrev =
exitFlag ; bffihwlolx ( & newseed , 1 ) ; nonxxy2aaj ( & qi , 2 ) ;
bffihwlolx ( & ub , 1 ) ; bffihwlolx ( & lb , 1 ) ; bffihwlolx ( & rn , 1 ) ;
nonxxy2aaj ( & e , 2 ) ; em3tin04ml ( & b , 1 ) ; em3tin04ml ( & tmp , 1 ) ;
em3tin04ml ( & tmp_p , 1 ) ; exitg1 = false ; while ( ( ! exitg1 ) && ( obj
-> RandomRestart && ( err > tol ) ) ) { obj -> MaxNumIterationInternal -=
iter ; err = h5dznsjt0b ( obj -> TimeObj . StartTime . tv_sec , obj ->
TimeObj . StartTime . tv_nsec , localDW ) ; obj -> MaxTimeInternal = obj ->
MaxTime - err ; if ( obj -> MaxNumIterationInternal <= 0.0 ) { exitFlag =
robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded ; } if ( (
exitFlag == robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded
) || ( exitFlag ==
robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded ) ) {
exitFlagPrev = exitFlag ; exitg1 = true ; } else { args = obj -> ExtraArgs ;
obj_p = args -> Robot ; tmp_e = newseed -> size [ 0 ] ; newseed -> size [ 0 ]
= ( int32_T ) obj_p -> PositionNumber ; pzzfddv2ss ( newseed , tmp_e ) ;
loop_ub = ( int32_T ) obj_p -> PositionNumber ; for ( nx = 0 ; nx < loop_ub ;
nx ++ ) { newseed -> data [ nx ] = 0.0 ; } err = obj_p -> NumBodies ; c = (
int32_T ) err - 1 ; for ( i = 0 ; i <= c ; i ++ ) { err = obj_p ->
PositionDoFMap [ i ] ; iter = obj_p -> PositionDoFMap [ i + 10 ] ; if ( err
<= iter ) { obj_e = obj_p -> Bodies [ i ] -> JointInternal ; if ( ( int32_T )
obj_e -> PositionNumber == 0 ) { tmp_e = qi -> size [ 0 ] * qi -> size [ 1 ]
; qi -> size [ 0 ] = 1 ; qi -> size [ 1 ] = 1 ; fqvnblve2d ( qi , tmp_e ) ;
qi -> data [ 0 ] = ( rtNaN ) ; } else { loop_ub = obj_e ->
PositionLimitsInternal -> size [ 0 ] ; tmp_e = ub -> size [ 0 ] ; ub -> size
[ 0 ] = loop_ub ; pzzfddv2ss ( ub , tmp_e ) ; for ( nx = 0 ; nx < loop_ub ;
nx ++ ) { ub -> data [ nx ] = obj_e -> PositionLimitsInternal -> data [ nx +
obj_e -> PositionLimitsInternal -> size [ 0 ] ] ; } loop_ub = obj_e ->
PositionLimitsInternal -> size [ 0 ] ; tmp_e = lb -> size [ 0 ] ; lb -> size
[ 0 ] = loop_ub ; pzzfddv2ss ( lb , tmp_e ) ; for ( nx = 0 ; nx < loop_ub ;
nx ++ ) { lb -> data [ nx ] = obj_e -> PositionLimitsInternal -> data [ nx ]
; } tmp_e = b -> size [ 0 ] ; b -> size [ 0 ] = lb -> size [ 0 ] ; dc3epolyb3
( b , tmp_e ) ; loop_ub = lb -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx
++ ) { b -> data [ nx ] = muDoubleScalarIsInf ( lb -> data [ nx ] ) ; } tmp_e
= tmp -> size [ 0 ] ; tmp -> size [ 0 ] = lb -> size [ 0 ] ; dc3epolyb3 ( tmp
, tmp_e ) ; loop_ub = lb -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++
) { tmp -> data [ nx ] = muDoubleScalarIsNaN ( lb -> data [ nx ] ) ; }
loop_ub = b -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ ) { b -> data
[ nx ] = ( ( ! b -> data [ nx ] ) && ( ! tmp -> data [ nx ] ) ) ; } y = true
; loop_ub = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( loop_ub + 1 <= b
-> size [ 0 ] ) ) { if ( ! b -> data [ loop_ub ] ) { y = false ; exitg2 =
true ; } else { loop_ub ++ ; } } guard1 = false ; guard2 = false ; guard3 =
false ; if ( y ) { tmp_e = b -> size [ 0 ] ; b -> size [ 0 ] = ub -> size [ 0
] ; dc3epolyb3 ( b , tmp_e ) ; loop_ub = ub -> size [ 0 ] ; for ( nx = 0 ; nx
< loop_ub ; nx ++ ) { b -> data [ nx ] = muDoubleScalarIsInf ( ub -> data [
nx ] ) ; } tmp_e = tmp -> size [ 0 ] ; tmp -> size [ 0 ] = ub -> size [ 0 ] ;
dc3epolyb3 ( tmp , tmp_e ) ; loop_ub = ub -> size [ 0 ] ; for ( nx = 0 ; nx <
loop_ub ; nx ++ ) { tmp -> data [ nx ] = muDoubleScalarIsNaN ( ub -> data [
nx ] ) ; } loop_ub = b -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ )
{ b -> data [ nx ] = ( ( ! b -> data [ nx ] ) && ( ! tmp -> data [ nx ] ) ) ;
} loop_ub = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( loop_ub + 1 <= b
-> size [ 0 ] ) ) { if ( ! b -> data [ loop_ub ] ) { y = false ; exitg2 =
true ; } else { loop_ub ++ ; } } if ( y ) { kpzcr4m3lem ( obj_e ->
PositionNumber , rn , localDW ) ; tmp_e = qi -> size [ 0 ] * qi -> size [ 1 ]
; qi -> size [ 0 ] = lb -> size [ 0 ] ; qi -> size [ 1 ] = 1 ; fqvnblve2d (
qi , tmp_e ) ; loop_ub = lb -> size [ 0 ] - 1 ; for ( nx = 0 ; nx <= loop_ub
; nx ++ ) { lb_p = lb -> data [ nx ] ; qi -> data [ nx ] = ( ub -> data [ nx
] - lb_p ) * rn -> data [ nx ] + lb_p ; } } else { guard3 = true ; } } else {
guard3 = true ; } if ( guard3 ) { tmp_e = b -> size [ 0 ] ; b -> size [ 0 ] =
lb -> size [ 0 ] ; dc3epolyb3 ( b , tmp_e ) ; loop_ub = lb -> size [ 0 ] ;
for ( nx = 0 ; nx < loop_ub ; nx ++ ) { b -> data [ nx ] =
muDoubleScalarIsInf ( lb -> data [ nx ] ) ; } tmp_e = tmp -> size [ 0 ] ; tmp
-> size [ 0 ] = lb -> size [ 0 ] ; dc3epolyb3 ( tmp , tmp_e ) ; loop_ub = lb
-> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ ) { tmp -> data [ nx ] =
muDoubleScalarIsNaN ( lb -> data [ nx ] ) ; } loop_ub = b -> size [ 0 ] ; for
( nx = 0 ; nx < loop_ub ; nx ++ ) { b -> data [ nx ] = ( ( ! b -> data [ nx ]
) && ( ! tmp -> data [ nx ] ) ) ; } y = true ; loop_ub = 0 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( loop_ub + 1 <= b -> size [ 0 ] ) ) { if ( ! b ->
data [ loop_ub ] ) { y = false ; exitg2 = true ; } else { loop_ub ++ ; } } if
( y ) { tmp_e = tmp -> size [ 0 ] ; tmp -> size [ 0 ] = ub -> size [ 0 ] ;
dc3epolyb3 ( tmp , tmp_e ) ; loop_ub = ub -> size [ 0 ] ; for ( nx = 0 ; nx <
loop_ub ; nx ++ ) { tmp -> data [ nx ] = muDoubleScalarIsInf ( ub -> data [
nx ] ) ; } tmp_e = b -> size [ 0 ] ; b -> size [ 0 ] = ub -> size [ 0 ] ;
dc3epolyb3 ( b , tmp_e ) ; loop_ub = ub -> size [ 0 ] ; for ( nx = 0 ; nx <
loop_ub ; nx ++ ) { b -> data [ nx ] = muDoubleScalarIsNaN ( ub -> data [ nx
] ) ; } tmp_e = tmp_p -> size [ 0 ] ; tmp_p -> size [ 0 ] = tmp -> size [ 0 ]
; dc3epolyb3 ( tmp_p , tmp_e ) ; loop_ub = tmp -> size [ 0 ] ; for ( nx = 0 ;
nx < loop_ub ; nx ++ ) { tmp_p -> data [ nx ] = ( tmp -> data [ nx ] || b ->
data [ nx ] ) ; } if ( pa2rdwbqrp ( tmp_p ) ) { ub_p [ 0 ] = lb -> size [ 0 ]
; ub_p [ 1 ] = 1.0 ; lvurcv3f1k ( ub_p , qi , localDW ) ; nx = qi -> size [ 0
] - 1 ; tmp_e = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 0 ] = qi ->
size [ 0 ] ; e -> size [ 1 ] = 1 ; fqvnblve2d ( e , tmp_e ) ; for ( loop_ub =
0 ; loop_ub <= nx ; loop_ub ++ ) { e -> data [ loop_ub ] = muDoubleScalarAbs
( qi -> data [ loop_ub ] ) ; } tmp_e = qi -> size [ 0 ] * qi -> size [ 1 ] ;
qi -> size [ 0 ] = lb -> size [ 0 ] ; qi -> size [ 1 ] = 1 ; fqvnblve2d ( qi
, tmp_e ) ; loop_ub = lb -> size [ 0 ] - 1 ; for ( nx = 0 ; nx <= loop_ub ;
nx ++ ) { qi -> data [ nx ] = lb -> data [ nx ] + e -> data [ nx ] ; } } else
{ guard2 = true ; } } else { guard2 = true ; } } if ( guard2 ) { tmp_e = tmp
-> size [ 0 ] ; tmp -> size [ 0 ] = lb -> size [ 0 ] ; dc3epolyb3 ( tmp ,
tmp_e ) ; loop_ub = lb -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ )
{ tmp -> data [ nx ] = muDoubleScalarIsInf ( lb -> data [ nx ] ) ; } tmp_e =
b -> size [ 0 ] ; b -> size [ 0 ] = lb -> size [ 0 ] ; dc3epolyb3 ( b , tmp_e
) ; loop_ub = lb -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ ) { b ->
data [ nx ] = muDoubleScalarIsNaN ( lb -> data [ nx ] ) ; } tmp_e = tmp_p ->
size [ 0 ] ; tmp_p -> size [ 0 ] = tmp -> size [ 0 ] ; dc3epolyb3 ( tmp_p ,
tmp_e ) ; loop_ub = tmp -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ; nx ++ )
{ tmp_p -> data [ nx ] = ( tmp -> data [ nx ] || b -> data [ nx ] ) ; } if (
pa2rdwbqrp ( tmp_p ) ) { tmp_e = b -> size [ 0 ] ; b -> size [ 0 ] = ub ->
size [ 0 ] ; dc3epolyb3 ( b , tmp_e ) ; loop_ub = ub -> size [ 0 ] ; for ( nx
= 0 ; nx < loop_ub ; nx ++ ) { b -> data [ nx ] = muDoubleScalarIsInf ( ub ->
data [ nx ] ) ; } tmp_e = tmp -> size [ 0 ] ; tmp -> size [ 0 ] = ub -> size
[ 0 ] ; dc3epolyb3 ( tmp , tmp_e ) ; loop_ub = ub -> size [ 0 ] ; for ( nx =
0 ; nx < loop_ub ; nx ++ ) { tmp -> data [ nx ] = muDoubleScalarIsNaN ( ub ->
data [ nx ] ) ; } loop_ub = b -> size [ 0 ] ; for ( nx = 0 ; nx < loop_ub ;
nx ++ ) { b -> data [ nx ] = ( ( ! b -> data [ nx ] ) && ( ! tmp -> data [ nx
] ) ) ; } y = true ; loop_ub = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && (
loop_ub + 1 <= b -> size [ 0 ] ) ) { if ( ! b -> data [ loop_ub ] ) { y =
false ; exitg2 = true ; } else { loop_ub ++ ; } } if ( y ) { ub_p [ 0 ] = ub
-> size [ 0 ] ; ub_p [ 1 ] = 1.0 ; lvurcv3f1k ( ub_p , qi , localDW ) ; nx =
qi -> size [ 0 ] - 1 ; tmp_e = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size
[ 0 ] = qi -> size [ 0 ] ; e -> size [ 1 ] = 1 ; fqvnblve2d ( e , tmp_e ) ;
for ( loop_ub = 0 ; loop_ub <= nx ; loop_ub ++ ) { e -> data [ loop_ub ] =
muDoubleScalarAbs ( qi -> data [ loop_ub ] ) ; } tmp_e = qi -> size [ 0 ] *
qi -> size [ 1 ] ; qi -> size [ 0 ] = ub -> size [ 0 ] ; qi -> size [ 1 ] = 1
; fqvnblve2d ( qi , tmp_e ) ; loop_ub = ub -> size [ 0 ] - 1 ; for ( nx = 0 ;
nx <= loop_ub ; nx ++ ) { qi -> data [ nx ] = ub -> data [ nx ] - e -> data [
nx ] ; } } else { guard1 = true ; } } else { guard1 = true ; } } if ( guard1
) { ub_p [ 0 ] = ub -> size [ 0 ] ; ub_p [ 1 ] = 1.0 ; lvurcv3f1k ( ub_p , qi
, localDW ) ; } } if ( err > iter ) { loop_ub = 0 ; nx = 0 ; } else { loop_ub
= ( int32_T ) err - 1 ; nx = ( int32_T ) iter ; } tmp_e = nx - loop_ub ; for
( nx = 0 ; nx < tmp_e ; nx ++ ) { newseed -> data [ loop_ub + nx ] = qi ->
data [ nx ] ; } } } for ( nx = 0 ; nx < 6 ; nx ++ ) { obj -> SeedInternal [
nx ] = newseed -> data [ nx ] ; } br25apk0ss ( obj , c_xSol , & exitFlag , &
err , & iter , localDW ) ; if ( err < * solutionInfo_Error ) { for ( i = 0 ;
i < 6 ; i ++ ) { xSol [ i ] = c_xSol [ i ] ; } * solutionInfo_Error = err ;
exitFlagPrev = exitFlag ; } ( * solutionInfo_RRAttempts ) ++ ; *
solutionInfo_Iterations += iter ; } } nd0r0ie50r ( & tmp_p ) ; nd0r0ie50r ( &
tmp ) ; nd0r0ie50r ( & b ) ; g41mplts0w ( & e ) ; g41mplts0w ( & rn ) ;
g41mplts0w ( & lb ) ; g41mplts0w ( & ub ) ; g41mplts0w ( & qi ) ; g41mplts0w
( & newseed ) ; * solutionInfo_ExitFlag = exitFlagPrev ; if ( *
solutionInfo_Error < tol ) { solutionInfo_Status_size [ 0 ] = 1 ;
solutionInfo_Status_size [ 1 ] = 7 ; for ( nx = 0 ; nx < 7 ; nx ++ ) {
solutionInfo_Status_data [ nx ] = tmp_m [ nx ] ; } } else {
solutionInfo_Status_size [ 0 ] = 1 ; solutionInfo_Status_size [ 1 ] = 14 ;
for ( nx = 0 ; nx < 14 ; nx ++ ) { solutionInfo_Status_data [ nx ] = tmp_i [
nx ] ; } } } static void bfzihfdpfs ( dxvn12zbi1 * * pEmxArray , int32_T
numDimensions ) { dxvn12zbi1 * emxArray ; int32_T i ; * pEmxArray = (
dxvn12zbi1 * ) malloc ( sizeof ( dxvn12zbi1 ) ) ; emxArray = * pEmxArray ;
emxArray -> data = ( int32_T * ) NULL ; emxArray -> numDimensions =
numDimensions ; emxArray -> size = ( int32_T * ) malloc ( sizeof ( int32_T )
* numDimensions ) ; emxArray -> allocatedSize = 0 ; emxArray -> canFreeData =
true ; for ( i = 0 ; i < numDimensions ; i ++ ) { emxArray -> size [ i ] = 0
; } } static void nq01dghsb3 ( dxvn12zbi1 * emxArray , int32_T oldNumel ) {
int32_T i ; int32_T newNumel ; void * newData ; if ( oldNumel < 0 ) {
oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i < emxArray -> numDimensions ;
i ++ ) { newNumel *= emxArray -> size [ i ] ; } if ( newNumel > emxArray ->
allocatedSize ) { i = emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; }
while ( i < newNumel ) { if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i
<<= 1 ; } } newData = calloc ( ( uint32_T ) i , sizeof ( int32_T ) ) ; if (
emxArray -> data != NULL ) { memcpy ( newData , emxArray -> data , sizeof (
int32_T ) * oldNumel ) ; if ( emxArray -> canFreeData ) { free ( emxArray ->
data ) ; } } emxArray -> data = ( int32_T * ) newData ; emxArray ->
allocatedSize = i ; emxArray -> canFreeData = true ; } } static void
i5gxvk04ju ( dxvn12zbi1 * * pEmxArray ) { if ( * pEmxArray != ( dxvn12zbi1 *
) NULL ) { if ( ( ( * pEmxArray ) -> data != ( int32_T * ) NULL ) && ( *
pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; } free ( (
* pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = ( dxvn12zbi1 *
) NULL ; } } static void mxugkksoeo0 ( p1rn1vqdri * obj , real_T initialGuess
[ 6 ] , real_T * solutionInfo_Iterations , real_T *
solutionInfo_NumRandomRestarts , real_T * solutionInfo_PoseErrorNorm , real_T
* solutionInfo_ExitFlag , char_T solutionInfo_Status_data [ ] , int32_T
solutionInfo_Status_size [ 2 ] , nblp1l3k1r * localDW ) { aiqe041hfp *
endEffectorName ; bgzkddb0t0 * obj_p ; dxvn12zbi1 * h ; gmphnpqbau *
bodyIndices ; gmphnpqbau * e ; gmphnpqbau * limits ; gmphnpqbau *
positionIndices ; gmphnpqbau * y ; mjxrc5f0p2 * body ; real_T qvSolRaw [ 6 ]
; real_T apnd ; real_T bid ; real_T cdiff ; real_T ndbl ; real_T numPositions
; int32_T indicesUpperBoundViolation_data [ 6 ] ; int32_T tmp_data [ 6 ] ;
int32_T b_k ; int32_T c ; int32_T indicesUpperBoundViolation ; int32_T
indicesUpperBoundViolation_size_idx_0 ; int32_T loop_ub ; int32_T nm1d2 ;
int32_T tmp_size ; boolean_T lbOK [ 6 ] ; boolean_T ubOK [ 6 ] ; boolean_T
ubOK_p [ 6 ] ; boolean_T exitg1 ; boolean_T guard1 = false ; boolean_T y_p ;
nonxxy2aaj ( & limits , 2 ) ; obj_p = obj -> RigidBodyTreeInternal ;
kjfnwyvwvk ( obj_p , limits ) ; for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { ubOK [
b_k ] = ( initialGuess [ b_k ] <= limits -> data [ b_k + limits -> size [ 0 ]
] + 4.4408920985006262E-16 ) ; lbOK [ b_k ] = ( initialGuess [ b_k ] >=
limits -> data [ b_k ] - 4.4408920985006262E-16 ) ; } y_p = true ; b_k = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 6 ) ) { if ( ! ubOK [ b_k ]
) { y_p = false ; exitg1 = true ; } else { b_k ++ ; } } guard1 = false ; if (
y_p ) { b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 6 ) ) { if
( ! lbOK [ b_k ] ) { y_p = false ; exitg1 = true ; } else { b_k ++ ; } } if (
y_p ) { } else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) {
for ( b_k = 0 ; b_k < 6 ; b_k ++ ) { ubOK_p [ b_k ] = ! ubOK [ b_k ] ; }
pjcqxll5fb ( ubOK_p , tmp_data , & tmp_size ) ;
indicesUpperBoundViolation_size_idx_0 = tmp_size ; loop_ub = tmp_size ; if (
0 <= loop_ub - 1 ) { memcpy ( & indicesUpperBoundViolation_data [ 0 ] , &
tmp_data [ 0 ] , loop_ub * sizeof ( int32_T ) ) ; } for ( b_k = 0 ; b_k <
indicesUpperBoundViolation_size_idx_0 ; b_k ++ ) { indicesUpperBoundViolation
= indicesUpperBoundViolation_data [ b_k ] ; initialGuess [
indicesUpperBoundViolation - 1 ] = limits -> data [ (
indicesUpperBoundViolation + limits -> size [ 0 ] ) - 1 ] ; } for ( b_k = 0 ;
b_k < 6 ; b_k ++ ) { ubOK [ b_k ] = ! lbOK [ b_k ] ; } pjcqxll5fb ( ubOK ,
tmp_data , & tmp_size ) ; indicesUpperBoundViolation_size_idx_0 = tmp_size ;
loop_ub = tmp_size ; if ( 0 <= loop_ub - 1 ) { memcpy ( &
indicesUpperBoundViolation_data [ 0 ] , & tmp_data [ 0 ] , loop_ub * sizeof (
int32_T ) ) ; } for ( b_k = 0 ; b_k < indicesUpperBoundViolation_size_idx_0 ;
b_k ++ ) { indicesUpperBoundViolation = indicesUpperBoundViolation_data [ b_k
] ; initialGuess [ indicesUpperBoundViolation - 1 ] = limits -> data [
indicesUpperBoundViolation - 1 ] ; } } pklwprvumn ( & endEffectorName , 2 ) ;
kvsdoegvof ( obj -> Solver , initialGuess , qvSolRaw ,
solutionInfo_Iterations , solutionInfo_NumRandomRestarts ,
solutionInfo_PoseErrorNorm , solutionInfo_ExitFlag , solutionInfo_Status_data
, solutionInfo_Status_size , localDW ) ; obj_p = obj -> RigidBodyTreeInternal
; nm1d2 = endEffectorName -> size [ 0 ] * endEffectorName -> size [ 1 ] ;
endEffectorName -> size [ 0 ] = 1 ; endEffectorName -> size [ 1 ] = obj ->
Solver -> ExtraArgs -> BodyName -> size [ 1 ] ; erzqjcuyqu ( endEffectorName
, nm1d2 ) ; loop_ub = obj -> Solver -> ExtraArgs -> BodyName -> size [ 1 ] -
1 ; for ( b_k = 0 ; b_k <= loop_ub ; b_k ++ ) { endEffectorName -> data [ b_k
] = obj -> Solver -> ExtraArgs -> BodyName -> data [ b_k ] ; } bffihwlolx ( &
bodyIndices , 1 ) ; nm1d2 = bodyIndices -> size [ 0 ] ; bodyIndices -> size [
0 ] = ( int32_T ) obj_p -> NumBodies ; pzzfddv2ss ( bodyIndices , nm1d2 ) ;
loop_ub = ( int32_T ) obj_p -> NumBodies ; for ( b_k = 0 ; b_k < loop_ub ;
b_k ++ ) { bodyIndices -> data [ b_k ] = 0.0 ; } bid = kgp0kxhejg ( obj_p ,
endEffectorName ) ; n3y5ukwimu ( & endEffectorName ) ; if ( bid == 0.0 ) {
nm1d2 = bodyIndices -> size [ 0 ] ; bodyIndices -> size [ 0 ] = 1 ;
pzzfddv2ss ( bodyIndices , nm1d2 ) ; bodyIndices -> data [ 0 ] = 0.0 ; } else
{ body = obj_p -> Bodies [ ( int32_T ) bid - 1 ] ; bid = 1.0 ; while ( body
-> ParentIndex != 0.0 ) { bodyIndices -> data [ ( int32_T ) bid - 1 ] = body
-> Index ; body = obj_p -> Bodies [ ( int32_T ) body -> ParentIndex - 1 ] ;
bid ++ ; } if ( 1.0 > bid - 1.0 ) { indicesUpperBoundViolation_size_idx_0 = -
1 ; } else { indicesUpperBoundViolation_size_idx_0 = ( int32_T ) ( bid - 1.0
) - 1 ; } nm1d2 = bodyIndices -> size [ 0 ] ; bodyIndices -> size [ 0 ] =
indicesUpperBoundViolation_size_idx_0 + 3 ; pzzfddv2ss ( bodyIndices , nm1d2
) ; bodyIndices -> data [ indicesUpperBoundViolation_size_idx_0 + 1 ] = body
-> Index ; bodyIndices -> data [ indicesUpperBoundViolation_size_idx_0 + 2 ]
= 0.0 ; } obj_p = obj -> RigidBodyTreeInternal ; b_k = bodyIndices -> size [
0 ] - 1 ; indicesUpperBoundViolation_size_idx_0 = 0 ; for (
indicesUpperBoundViolation = 0 ; indicesUpperBoundViolation <= b_k ;
indicesUpperBoundViolation ++ ) { if ( bodyIndices -> data [
indicesUpperBoundViolation ] != 0.0 ) { indicesUpperBoundViolation_size_idx_0
++ ; } } bfzihfdpfs ( & h , 1 ) ; nm1d2 = h -> size [ 0 ] ; h -> size [ 0 ] =
indicesUpperBoundViolation_size_idx_0 ; nq01dghsb3 ( h , nm1d2 ) ;
indicesUpperBoundViolation_size_idx_0 = 0 ; for ( indicesUpperBoundViolation
= 0 ; indicesUpperBoundViolation <= b_k ; indicesUpperBoundViolation ++ ) {
if ( bodyIndices -> data [ indicesUpperBoundViolation ] != 0.0 ) { h -> data
[ indicesUpperBoundViolation_size_idx_0 ] = indicesUpperBoundViolation + 1 ;
indicesUpperBoundViolation_size_idx_0 ++ ; } } nm1d2 = limits -> size [ 0 ] *
limits -> size [ 1 ] ; limits -> size [ 0 ] = h -> size [ 0 ] ; limits ->
size [ 1 ] = 2 ; fqvnblve2d ( limits , nm1d2 ) ; loop_ub = h -> size [ 0 ] ;
for ( b_k = 0 ; b_k < 2 ; b_k ++ ) { for ( indicesUpperBoundViolation = 0 ;
indicesUpperBoundViolation < loop_ub ; indicesUpperBoundViolation ++ ) {
limits -> data [ indicesUpperBoundViolation + limits -> size [ 0 ] * b_k ] =
obj_p -> PositionDoFMap [ ( ( int32_T ) bodyIndices -> data [ h -> data [
indicesUpperBoundViolation ] - 1 ] + 10 * b_k ) - 1 ] ; } } i5gxvk04ju ( & h
) ; g41mplts0w ( & bodyIndices ) ; nonxxy2aaj ( & positionIndices , 2 ) ;
nm1d2 = positionIndices -> size [ 0 ] * positionIndices -> size [ 1 ] ;
positionIndices -> size [ 0 ] = 1 ; positionIndices -> size [ 1 ] = ( int32_T
) obj_p -> PositionNumber ; fqvnblve2d ( positionIndices , nm1d2 ) ; loop_ub
= ( int32_T ) obj_p -> PositionNumber - 1 ; for ( b_k = 0 ; b_k <= loop_ub ;
b_k ++ ) { positionIndices -> data [ b_k ] = 0.0 ; } bid = 0.0 ;
indicesUpperBoundViolation_size_idx_0 = limits -> size [ 0 ] - 1 ; nonxxy2aaj
( & e , 2 ) ; nonxxy2aaj ( & y , 2 ) ; for ( indicesUpperBoundViolation = 0 ;
indicesUpperBoundViolation <= indicesUpperBoundViolation_size_idx_0 ;
indicesUpperBoundViolation ++ ) { numPositions = ( limits -> data [
indicesUpperBoundViolation + limits -> size [ 0 ] ] - limits -> data [
indicesUpperBoundViolation ] ) + 1.0 ; if ( numPositions > 0.0 ) { if (
numPositions < 1.0 ) { y -> size [ 0 ] = 1 ; y -> size [ 1 ] = 0 ; } else if
( muDoubleScalarIsInf ( numPositions ) && ( 1.0 == numPositions ) ) { nm1d2 =
y -> size [ 0 ] * y -> size [ 1 ] ; y -> size [ 0 ] = 1 ; y -> size [ 1 ] = 1
; fqvnblve2d ( y , nm1d2 ) ; y -> data [ 0 ] = ( rtNaN ) ; } else { nm1d2 = y
-> size [ 0 ] * y -> size [ 1 ] ; y -> size [ 0 ] = 1 ; y -> size [ 1 ] = (
int32_T ) muDoubleScalarFloor ( numPositions - 1.0 ) + 1 ; fqvnblve2d ( y ,
nm1d2 ) ; loop_ub = ( int32_T ) muDoubleScalarFloor ( numPositions - 1.0 ) ;
for ( b_k = 0 ; b_k <= loop_ub ; b_k ++ ) { y -> data [ b_k ] = ( real_T )
b_k + 1.0 ; } } if ( muDoubleScalarIsNaN ( limits -> data [
indicesUpperBoundViolation ] ) || muDoubleScalarIsNaN ( limits -> data [
indicesUpperBoundViolation + limits -> size [ 0 ] ] ) ) { nm1d2 = e -> size [
0 ] * e -> size [ 1 ] ; e -> size [ 0 ] = 1 ; e -> size [ 1 ] = 1 ;
fqvnblve2d ( e , nm1d2 ) ; e -> data [ 0 ] = ( rtNaN ) ; } else if ( limits
-> data [ indicesUpperBoundViolation + limits -> size [ 0 ] ] < limits ->
data [ indicesUpperBoundViolation ] ) { e -> size [ 0 ] = 1 ; e -> size [ 1 ]
= 0 ; } else if ( ( muDoubleScalarIsInf ( limits -> data [
indicesUpperBoundViolation ] ) || muDoubleScalarIsInf ( limits -> data [
indicesUpperBoundViolation + limits -> size [ 0 ] ] ) ) && ( limits -> data [
indicesUpperBoundViolation ] == limits -> data [ indicesUpperBoundViolation +
limits -> size [ 0 ] ] ) ) { nm1d2 = e -> size [ 0 ] * e -> size [ 1 ] ; e ->
size [ 0 ] = 1 ; e -> size [ 1 ] = 1 ; fqvnblve2d ( e , nm1d2 ) ; e -> data [
0 ] = ( rtNaN ) ; } else if ( muDoubleScalarFloor ( limits -> data [
indicesUpperBoundViolation ] ) == limits -> data [ indicesUpperBoundViolation
] ) { nm1d2 = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 0 ] = 1 ; e ->
size [ 1 ] = ( int32_T ) muDoubleScalarFloor ( limits -> data [
indicesUpperBoundViolation + limits -> size [ 0 ] ] - limits -> data [
indicesUpperBoundViolation ] ) + 1 ; fqvnblve2d ( e , nm1d2 ) ; loop_ub = (
int32_T ) muDoubleScalarFloor ( limits -> data [ indicesUpperBoundViolation +
limits -> size [ 0 ] ] - limits -> data [ indicesUpperBoundViolation ] ) ;
for ( b_k = 0 ; b_k <= loop_ub ; b_k ++ ) { e -> data [ b_k ] = limits ->
data [ indicesUpperBoundViolation ] + ( real_T ) b_k ; } } else { ndbl =
muDoubleScalarFloor ( ( limits -> data [ indicesUpperBoundViolation + limits
-> size [ 0 ] ] - limits -> data [ indicesUpperBoundViolation ] ) + 0.5 ) ;
apnd = limits -> data [ indicesUpperBoundViolation ] + ndbl ; cdiff = apnd -
limits -> data [ indicesUpperBoundViolation + limits -> size [ 0 ] ] ; if (
muDoubleScalarAbs ( cdiff ) < 4.4408920985006262E-16 * muDoubleScalarMax (
muDoubleScalarAbs ( limits -> data [ indicesUpperBoundViolation ] ) ,
muDoubleScalarAbs ( limits -> data [ indicesUpperBoundViolation + limits ->
size [ 0 ] ] ) ) ) { ndbl ++ ; apnd = limits -> data [
indicesUpperBoundViolation + limits -> size [ 0 ] ] ; } else if ( cdiff > 0.0
) { apnd = ( ndbl - 1.0 ) + limits -> data [ indicesUpperBoundViolation ] ; }
else { ndbl ++ ; } if ( ndbl >= 0.0 ) { loop_ub = ( int32_T ) ndbl ; } else {
loop_ub = 0 ; } nm1d2 = e -> size [ 0 ] * e -> size [ 1 ] ; e -> size [ 0 ] =
1 ; e -> size [ 1 ] = loop_ub ; fqvnblve2d ( e , nm1d2 ) ; if ( loop_ub > 0 )
{ e -> data [ 0 ] = limits -> data [ indicesUpperBoundViolation ] ; if (
loop_ub > 1 ) { e -> data [ loop_ub - 1 ] = apnd ; nm1d2 = ( loop_ub - 1 ) /
2 ; c = nm1d2 - 2 ; for ( b_k = 0 ; b_k <= c ; b_k ++ ) { e -> data [ b_k + 1
] = ( real_T ) ( b_k + 1 ) + limits -> data [ indicesUpperBoundViolation ] ;
e -> data [ ( loop_ub - b_k ) - 2 ] = apnd - ( real_T ) ( b_k + 1 ) ; } if (
nm1d2 << 1 == loop_ub - 1 ) { e -> data [ nm1d2 ] = ( limits -> data [
indicesUpperBoundViolation ] + apnd ) / 2.0 ; } else { e -> data [ nm1d2 ] =
limits -> data [ indicesUpperBoundViolation ] + ( real_T ) nm1d2 ; e -> data
[ nm1d2 + 1 ] = apnd - ( real_T ) nm1d2 ; } } } } loop_ub = e -> size [ 1 ] -
1 ; for ( b_k = 0 ; b_k <= loop_ub ; b_k ++ ) { positionIndices -> data [ (
int32_T ) ( bid + y -> data [ b_k ] ) - 1 ] = e -> data [ b_k ] ; } bid +=
numPositions ; } } g41mplts0w ( & y ) ; g41mplts0w ( & e ) ; g41mplts0w ( &
limits ) ; if ( 1.0 > bid ) { positionIndices -> size [ 1 ] = 0 ; } else {
nm1d2 = positionIndices -> size [ 0 ] * positionIndices -> size [ 1 ] ;
positionIndices -> size [ 1 ] = ( int32_T ) bid ; fqvnblve2d (
positionIndices , nm1d2 ) ; } loop_ub = positionIndices -> size [ 1 ] ; for (
b_k = 0 ; b_k < loop_ub ; b_k ++ ) { bid = positionIndices -> data [ b_k ] ;
initialGuess [ ( int32_T ) bid - 1 ] = qvSolRaw [ ( int32_T ) bid - 1 ] ; }
g41mplts0w ( & positionIndices ) ; } static void k4gvakoiat ( p1rn1vqdri *
obj , const real_T tform [ 16 ] , const real_T weights [ 6 ] , const real_T
initialGuess [ 6 ] , real_T QSol [ 6 ] , nblp1l3k1r * localDW ) { bkb4oam1gt
* args ; real_T weightMatrix [ 36 ] ; real_T expl_temp ; real_T expl_temp_e ;
real_T expl_temp_i ; real_T expl_temp_p ; int32_T i ; char_T expl_temp_data [
14 ] ; static const char_T tmp [ 7 ] = { 'e' , 'e' , '_' , 'l' , 'i' , 'n' ,
'k' } ; int32_T expl_temp_size [ 2 ] ; memset ( & weightMatrix [ 0 ] , 0 ,
36U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 6 ; i ++ ) { weightMatrix [ i +
6 * i ] = weights [ i ] ; } args = obj -> Solver -> ExtraArgs ; for ( i = 0 ;
i < 36 ; i ++ ) { args -> WeightMatrix [ i ] = weightMatrix [ i ] ; } i =
args -> BodyName -> size [ 0 ] * args -> BodyName -> size [ 1 ] ; args ->
BodyName -> size [ 0 ] = 1 ; args -> BodyName -> size [ 1 ] = 7 ; erzqjcuyqu
( args -> BodyName , i ) ; for ( i = 0 ; i < 7 ; i ++ ) { args -> BodyName ->
data [ i ] = tmp [ i ] ; } for ( i = 0 ; i < 16 ; i ++ ) { args -> Tform [ i
] = tform [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { QSol [ i ] = initialGuess
[ i ] ; } mxugkksoeo0 ( obj , QSol , & expl_temp , & expl_temp_p , &
expl_temp_e , & expl_temp_i , expl_temp_data , expl_temp_size , localDW ) ; }
static void hzxjl1owjk ( dpzy5ojkdn * * pEmxArray , int32_T numDimensions ) {
dpzy5ojkdn * emxArray ; int32_T i ; * pEmxArray = ( dpzy5ojkdn * ) malloc (
sizeof ( dpzy5ojkdn ) ) ; emxArray = * pEmxArray ; emxArray -> data = (
int8_T * ) NULL ; emxArray -> numDimensions = numDimensions ; emxArray ->
size = ( int32_T * ) malloc ( sizeof ( int32_T ) * numDimensions ) ; emxArray
-> allocatedSize = 0 ; emxArray -> canFreeData = true ; for ( i = 0 ; i <
numDimensions ; i ++ ) { emxArray -> size [ i ] = 0 ; } } static void
ms4rksu5e2 ( dpzy5ojkdn * emxArray , int32_T oldNumel ) { int32_T i ; int32_T
newNumel ; void * newData ; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel =
1 ; for ( i = 0 ; i < emxArray -> numDimensions ; i ++ ) { newNumel *=
emxArray -> size [ i ] ; } if ( newNumel > emxArray -> allocatedSize ) { i =
emxArray -> allocatedSize ; if ( i < 16 ) { i = 16 ; } while ( i < newNumel )
{ if ( i > 1073741823 ) { i = MAX_int32_T ; } else { i <<= 1 ; } } newData =
calloc ( ( uint32_T ) i , sizeof ( int8_T ) ) ; if ( emxArray -> data != NULL
) { memcpy ( newData , emxArray -> data , sizeof ( int8_T ) * oldNumel ) ; if
( emxArray -> canFreeData ) { free ( emxArray -> data ) ; } } emxArray ->
data = ( int8_T * ) newData ; emxArray -> allocatedSize = i ; emxArray ->
canFreeData = true ; } } static void h05qxjqn4o ( dpzy5ojkdn * * pEmxArray )
{ if ( * pEmxArray != ( dpzy5ojkdn * ) NULL ) { if ( ( ( * pEmxArray ) ->
data != ( int8_T * ) NULL ) && ( * pEmxArray ) -> canFreeData ) { free ( ( *
pEmxArray ) -> data ) ; } free ( ( * pEmxArray ) -> size ) ; free ( *
pEmxArray ) ; * pEmxArray = ( dpzy5ojkdn * ) NULL ; } } static void
gcmqxzug2j ( iuu1xhv34c * pStruct ) { n3y5ukwimu ( & pStruct -> Type ) ;
g41mplts0w ( & pStruct -> MotionSubspace ) ; n3y5ukwimu ( & pStruct ->
NameInternal ) ; g41mplts0w ( & pStruct -> PositionLimitsInternal ) ;
g41mplts0w ( & pStruct -> HomePositionInternal ) ; } static void mkn3i2o0h0l
( nnaoaxiu0k * pStruct ) { lhqarjzgep ( & pStruct -> CollisionGeometries ) ;
} static void mkn3i2o0h0 ( p4befnw0fh * pStruct ) { n3y5ukwimu ( & pStruct ->
NameInternal ) ; gcmqxzug2j ( & pStruct -> JointInternal ) ; mkn3i2o0h0l ( &
pStruct -> CollisionsInternal ) ; } static void kq4eqmmhir ( p4befnw0fh
pMatrix [ 10 ] ) { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { mkn3i2o0h0 ( &
pMatrix [ i ] ) ; } } static void mkn3i2o0h0lq ( n31brccd3l * pStruct ) {
mkn3i2o0h0 ( & pStruct -> Base ) ; kq4eqmmhir ( pStruct -> _pobj0 ) ; }
static void mkn3i2o0h0lq0 ( bkb4oam1gt * pStruct ) { g41mplts0w ( & pStruct
-> Limits ) ; n3y5ukwimu ( & pStruct -> BodyName ) ; g41mplts0w ( & pStruct
-> ErrTemp ) ; g41mplts0w ( & pStruct -> GradTemp ) ; } static void
mkn3i2o0h0lq0i ( mjxrc5f0p2 * pStruct ) { n3y5ukwimu ( & pStruct ->
NameInternal ) ; mkn3i2o0h0l ( & pStruct -> _pobj0 ) ; gcmqxzug2j ( & pStruct
-> _pobj1 ) ; } static void kq4eqmmhird ( mjxrc5f0p2 pMatrix [ 10 ] ) {
int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { mkn3i2o0h0lq0i ( & pMatrix [ i ]
) ; } } static void mkn3i2o0h0lq0iv ( bgzkddb0t0 * pStruct ) { mkn3i2o0h0lq0i
( & pStruct -> Base ) ; kq4eqmmhird ( pStruct -> _pobj0 ) ; } static void
kq4eqmmhird4 ( nnaoaxiu0k pMatrix [ 11 ] ) { int32_T i ; for ( i = 0 ; i < 11
; i ++ ) { mkn3i2o0h0l ( & pMatrix [ i ] ) ; } } static void i4xgixpys2 (
iuu1xhv34c pMatrix [ 10 ] ) { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) {
gcmqxzug2j ( & pMatrix [ i ] ) ; } } static void fjcxkve2r0 ( p1rn1vqdri *
pStruct ) { g41mplts0w ( & pStruct -> Limits ) ; mkn3i2o0h0lq0 ( & pStruct ->
_pobj0 ) ; mkn3i2o0h0lq0iv ( & pStruct -> _pobj1 ) ; kq4eqmmhird4 ( pStruct
-> _pobj2 ) ; i4xgixpys2 ( pStruct -> _pobj3 ) ; kq4eqmmhird ( pStruct ->
_pobj4 ) ; } static void cckzosyg3e ( a3umz4zmr0 * pStruct ) { mkn3i2o0h0lq (
& pStruct -> TreeInternal ) ; fjcxkve2r0 ( & pStruct -> IKInternal ) ; } void
gtzl2i5aq1 ( nblp1l3k1r * localDW ) { static const uint32_T tmp [ 625 ] = {
5489U , 1301868182U , 2938499221U , 2950281878U , 1875628136U , 751856242U ,
944701696U , 2243192071U , 694061057U , 219885934U , 2066767472U ,
3182869408U , 485472502U , 2336857883U , 1071588843U , 3418470598U ,
951210697U , 3693558366U , 2923482051U , 1793174584U , 2982310801U ,
1586906132U , 1951078751U , 1808158765U , 1733897588U , 431328322U ,
4202539044U , 530658942U , 1714810322U , 3025256284U , 3342585396U ,
1937033938U , 2640572511U , 1654299090U , 3692403553U , 4233871309U ,
3497650794U , 862629010U , 2943236032U , 2426458545U , 1603307207U ,
1133453895U , 3099196360U , 2208657629U , 2747653927U , 931059398U ,
761573964U , 3157853227U , 785880413U , 730313442U , 124945756U , 2937117055U
, 3295982469U , 1724353043U , 3021675344U , 3884886417U , 4010150098U ,
4056961966U , 699635835U , 2681338818U , 1339167484U , 720757518U ,
2800161476U , 2376097373U , 1532957371U , 3902664099U , 1238982754U ,
3725394514U , 3449176889U , 3570962471U , 4287636090U , 4087307012U ,
3603343627U , 202242161U , 2995682783U , 1620962684U , 3704723357U ,
371613603U , 2814834333U , 2111005706U , 624778151U , 2094172212U ,
4284947003U , 1211977835U , 991917094U , 1570449747U , 2962370480U ,
1259410321U , 170182696U , 146300961U , 2836829791U , 619452428U ,
2723670296U , 1881399711U , 1161269684U , 1675188680U , 4132175277U ,
780088327U , 3409462821U , 1036518241U , 1834958505U , 3048448173U ,
161811569U , 618488316U , 44795092U , 3918322701U , 1924681712U , 3239478144U
, 383254043U , 4042306580U , 2146983041U , 3992780527U , 3518029708U ,
3545545436U , 3901231469U , 1896136409U , 2028528556U , 2339662006U ,
501326714U , 2060962201U , 2502746480U , 561575027U , 581893337U ,
3393774360U , 1778912547U , 3626131687U , 2175155826U , 319853231U ,
986875531U , 819755096U , 2915734330U , 2688355739U , 3482074849U , 2736559U
, 2296975761U , 1029741190U , 2876812646U , 690154749U , 579200347U ,
4027461746U , 1285330465U , 2701024045U , 4117700889U , 759495121U ,
3332270341U , 2313004527U , 2277067795U , 4131855432U , 2722057515U ,
1264804546U , 3848622725U , 2211267957U , 4100593547U , 959123777U ,
2130745407U , 3194437393U , 486673947U , 1377371204U , 17472727U , 352317554U
, 3955548058U , 159652094U , 1232063192U , 3835177280U , 49423123U ,
3083993636U , 733092U , 2120519771U , 2573409834U , 1112952433U , 3239502554U
, 761045320U , 1087580692U , 2540165110U , 641058802U , 1792435497U ,
2261799288U , 1579184083U , 627146892U , 2165744623U , 2200142389U ,
2167590760U , 2381418376U , 1793358889U , 3081659520U , 1663384067U ,
2009658756U , 2689600308U , 739136266U , 2304581039U , 3529067263U ,
591360555U , 525209271U , 3131882996U , 294230224U , 2076220115U ,
3113580446U , 1245621585U , 1386885462U , 3203270426U , 123512128U ,
12350217U , 354956375U , 4282398238U , 3356876605U , 3888857667U , 157639694U
, 2616064085U , 1563068963U , 2762125883U , 4045394511U , 4180452559U ,
3294769488U , 1684529556U , 1002945951U , 3181438866U , 22506664U ,
691783457U , 2685221343U , 171579916U , 3878728600U , 2475806724U ,
2030324028U , 3331164912U , 1708711359U , 1970023127U , 2859691344U ,
2588476477U , 2748146879U , 136111222U , 2967685492U , 909517429U ,
2835297809U , 3206906216U , 3186870716U , 341264097U , 2542035121U ,
3353277068U , 548223577U , 3170936588U , 1678403446U , 297435620U ,
2337555430U , 466603495U , 1132321815U , 1208589219U , 696392160U ,
894244439U , 2562678859U , 470224582U , 3306867480U , 201364898U ,
2075966438U , 1767227936U , 2929737987U , 3674877796U , 2654196643U ,
3692734598U , 3528895099U , 2796780123U , 3048728353U , 842329300U ,
191554730U , 2922459673U , 3489020079U , 3979110629U , 1022523848U ,
2202932467U , 3583655201U , 3565113719U , 587085778U , 4176046313U ,
3013713762U , 950944241U , 396426791U , 3784844662U , 3477431613U ,
3594592395U , 2782043838U , 3392093507U , 3106564952U , 2829419931U ,
1358665591U , 2206918825U , 3170783123U , 31522386U , 2988194168U ,
1782249537U , 1105080928U , 843500134U , 1225290080U , 1521001832U ,
3605886097U , 2802786495U , 2728923319U , 3996284304U , 903417639U ,
1171249804U , 1020374987U , 2824535874U , 423621996U , 1988534473U ,
2493544470U , 1008604435U , 1756003503U , 1488867287U , 1386808992U ,
732088248U , 1780630732U , 2482101014U , 976561178U , 1543448953U ,
2602866064U , 2021139923U , 1952599828U , 2360242564U , 2117959962U ,
2753061860U , 2388623612U , 4138193781U , 2962920654U , 2284970429U ,
766920861U , 3457264692U , 2879611383U , 815055854U , 2332929068U ,
1254853997U , 3740375268U , 3799380844U , 4091048725U , 2006331129U ,
1982546212U , 686850534U , 1907447564U , 2682801776U , 2780821066U ,
998290361U , 1342433871U , 4195430425U , 607905174U , 3902331779U ,
2454067926U , 1708133115U , 1170874362U , 2008609376U , 3260320415U ,
2211196135U , 433538229U , 2728786374U , 2189520818U , 262554063U ,
1182318347U , 3710237267U , 1221022450U , 715966018U , 2417068910U ,
2591870721U , 2870691989U , 3418190842U , 4238214053U , 1540704231U ,
1575580968U , 2095917976U , 4078310857U , 2313532447U , 2110690783U ,
4056346629U , 4061784526U , 1123218514U , 551538993U , 597148360U ,
4120175196U , 3581618160U , 3181170517U , 422862282U , 3227524138U ,
1713114790U , 662317149U , 1230418732U , 928171837U , 1324564878U ,
1928816105U , 1786535431U , 2878099422U , 3290185549U , 539474248U ,
1657512683U , 552370646U , 1671741683U , 3655312128U , 1552739510U ,
2605208763U , 1441755014U , 181878989U , 3124053868U , 1447103986U ,
3183906156U , 1728556020U , 3502241336U , 3055466967U , 1013272474U ,
818402132U , 1715099063U , 2900113506U , 397254517U , 4194863039U ,
1009068739U , 232864647U , 2540223708U , 2608288560U , 2415367765U ,
478404847U , 3455100648U , 3182600021U , 2115988978U , 434269567U ,
4117179324U , 3461774077U , 887256537U , 3545801025U , 286388911U ,
3451742129U , 1981164769U , 786667016U , 3310123729U , 3097811076U ,
2224235657U , 2959658883U , 3370969234U , 2514770915U , 3345656436U ,
2677010851U , 2206236470U , 271648054U , 2342188545U , 4292848611U ,
3646533909U , 3754009956U , 3803931226U , 4160647125U , 1477814055U ,
4043852216U , 1876372354U , 3133294443U , 3871104810U , 3177020907U ,
2074304428U , 3479393793U , 759562891U , 164128153U , 1839069216U ,
2114162633U , 3989947309U , 3611054956U , 1333547922U , 835429831U ,
494987340U , 171987910U , 1252001001U , 370809172U , 3508925425U ,
2535703112U , 1276855041U , 1922855120U , 835673414U , 3030664304U ,
613287117U , 171219893U , 3423096126U , 3376881639U , 2287770315U ,
1658692645U , 1262815245U , 3957234326U , 1168096164U , 2968737525U ,
2655813712U , 2132313144U , 3976047964U , 326516571U , 353088456U ,
3679188938U , 3205649712U , 2654036126U , 1249024881U , 880166166U ,
691800469U , 2229503665U , 1673458056U , 4032208375U , 1851778863U ,
2563757330U , 376742205U , 1794655231U , 340247333U , 1505873033U ,
396524441U , 879666767U , 3335579166U , 3260764261U , 3335999539U ,
506221798U , 4214658741U , 975887814U , 2080536343U , 3360539560U ,
571586418U , 138896374U , 4234352651U , 2737620262U , 3928362291U ,
1516365296U , 38056726U , 3599462320U , 3585007266U , 3850961033U ,
471667319U , 1536883193U , 2310166751U , 1861637689U , 2530999841U ,
4139843801U , 2710569485U , 827578615U , 2012334720U , 2907369459U ,
3029312804U , 2820112398U , 1965028045U , 35518606U , 2478379033U ,
643747771U , 1924139484U , 4123405127U , 3811735531U , 3429660832U ,
3285177704U , 1948416081U , 1311525291U , 1183517742U , 1739192232U ,
3979815115U , 2567840007U , 4116821529U , 213304419U , 4125718577U ,
1473064925U , 2442436592U , 1893310111U , 4195361916U , 3747569474U ,
828465101U , 2991227658U , 750582866U , 1205170309U , 1409813056U ,
678418130U , 1171531016U , 3821236156U , 354504587U , 4202874632U ,
3882511497U , 1893248677U , 1903078632U , 26340130U , 2069166240U ,
3657122492U , 3725758099U , 831344905U , 811453383U , 3447711422U ,
2434543565U , 4166886888U , 3358210805U , 4142984013U , 2988152326U ,
3527824853U , 982082992U , 2809155763U , 190157081U , 3340214818U ,
2365432395U , 2548636180U , 2894533366U , 3474657421U , 2372634704U ,
2845748389U , 43024175U , 2774226648U , 1987702864U , 3186502468U ,
453610222U , 4204736567U , 1392892630U , 2471323686U , 2470534280U ,
3541393095U , 4269885866U , 3909911300U , 759132955U , 1482612480U ,
667715263U , 1795580598U , 2337923983U , 3390586366U , 581426223U ,
1515718634U , 476374295U , 705213300U , 363062054U , 2084697697U ,
2407503428U , 2292957699U , 2426213835U , 2199989172U , 1987356470U ,
4026755612U , 2147252133U , 270400031U , 1367820199U , 2369854699U ,
2844269403U , 79981964U , 624U } ; dlri1bj0a1 ( & localDW -> ajal1iwi1z ) ;
localDW -> ajal1iwi1z . IKInternal . matlabCodegenIsDeleted = true ; localDW
-> ajal1iwi1z . matlabCodegenIsDeleted = true ; localDW -> mjpcafci0c = 7U ;
localDW -> jfjlhhuyaj = true ; localDW -> lhjucr5zrp = 1144108930U ; localDW
-> ixcfunz3ep = true ; localDW -> kuoviqlwy5 [ 0 ] = 362436069U ; localDW ->
kuoviqlwy5 [ 1 ] = 521288629U ; localDW -> ksjivjyfnw = true ; memcpy ( &
localDW -> h2pnsauhxt [ 0 ] , & tmp [ 0 ] , 625U * sizeof ( uint32_T ) ) ;
localDW -> ag2pn0fjxu = true ; localDW -> h04ewpy4nc = 0U ; localDW ->
gc2t2mxxcd = true ; localDW -> j1qqjbtj53 [ 0 ] = 362436069U ; localDW ->
j1qqjbtj53 [ 1 ] = 521288629U ; localDW -> an5olz5vaz = true ; localDW ->
ajal1iwi1z . isInitialized = 0 ; localDW -> ajal1iwi1z .
matlabCodegenIsDeleted = false ; localDW -> kikz1keduf = true ; ekk3jsv0jl (
& localDW -> ajal1iwi1z , localDW ) ; } void e12xzvaqlr ( const real_T
mqv242vug5 [ 16 ] , const real_T ag1boeklhp [ 6 ] , const real_T dxbyy3woac [
6 ] , l4jutbn5rh * localB , nblp1l3k1r * localDW ) { dpzy5ojkdn * b_gradTmp ;
gmphnpqbau * tmp ; p1rn1vqdri * obj ; real_T u0 [ 16 ] ; real_T u1 [ 6 ] ;
real_T u2 [ 6 ] ; int32_T b_k ; int32_T i ; int8_T b_I [ 16 ] ; for ( i = 0 ;
i < 16 ; i ++ ) { u0 [ i ] = mqv242vug5 [ i ] ; } for ( i = 0 ; i < 6 ; i ++
) { u1 [ i ] = ag1boeklhp [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { u2 [ i ] =
dxbyy3woac [ i ] ; } obj = & localDW -> ajal1iwi1z . IKInternal ; if (
localDW -> ajal1iwi1z . IKInternal . isInitialized != 1 ) { localDW ->
ajal1iwi1z . IKInternal . isSetupComplete = false ; localDW -> ajal1iwi1z .
IKInternal . isInitialized = 1 ; kjfnwyvwvk ( localDW -> ajal1iwi1z .
IKInternal . RigidBodyTreeInternal , localDW -> ajal1iwi1z . IKInternal .
Limits ) ; localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs = & obj
-> _pobj0 ; for ( i = 0 ; i < 36 ; i ++ ) { localDW -> ajal1iwi1z .
IKInternal . Solver -> ExtraArgs -> WeightMatrix [ i ] = 0.0 ; } bffihwlolx (
& tmp , 1 ) ; localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs ->
Robot = localDW -> ajal1iwi1z . IKInternal . RigidBodyTreeInternal ; b_k =
localDW -> ajal1iwi1z . IKInternal . Limits -> size [ 0 ] << 1 ; i = localDW
-> ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> Limits -> size [ 0 ] *
localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> Limits -> size [
1 ] ; localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> Limits ->
size [ 0 ] = localDW -> ajal1iwi1z . IKInternal . Limits -> size [ 0 ] ;
localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> Limits -> size [
1 ] = 2 ; fqvnblve2d ( localDW -> ajal1iwi1z . IKInternal . Solver ->
ExtraArgs -> Limits , i ) ; i = tmp -> size [ 0 ] ; tmp -> size [ 0 ] = b_k ;
pzzfddv2ss ( tmp , i ) ; for ( i = 0 ; i < b_k ; i ++ ) { tmp -> data [ i ] =
localDW -> ajal1iwi1z . IKInternal . Limits -> data [ i ] ; } b_k = tmp ->
size [ 0 ] ; for ( i = 0 ; i < b_k ; i ++ ) { localDW -> ajal1iwi1z .
IKInternal . Solver -> ExtraArgs -> Limits -> data [ i ] = tmp -> data [ i ]
; } g41mplts0w ( & tmp ) ; for ( i = 0 ; i < 16 ; i ++ ) { b_I [ i ] = 0 ; }
b_I [ 0 ] = 1 ; b_I [ 5 ] = 1 ; b_I [ 10 ] = 1 ; b_I [ 15 ] = 1 ; for ( i = 0
; i < 16 ; i ++ ) { localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs
-> Tform [ i ] = b_I [ i ] ; } localDW -> ajal1iwi1z . IKInternal . Solver ->
ExtraArgs -> BodyName -> size [ 0 ] = 1 ; localDW -> ajal1iwi1z . IKInternal
. Solver -> ExtraArgs -> BodyName -> size [ 1 ] = 0 ; i = localDW ->
ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> ErrTemp -> size [ 0 ] ;
localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> ErrTemp -> size [
0 ] = 6 ; pzzfddv2ss ( localDW -> ajal1iwi1z . IKInternal . Solver ->
ExtraArgs -> ErrTemp , i ) ; for ( i = 0 ; i < 6 ; i ++ ) { localDW ->
ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> ErrTemp -> data [ i ] = 0.0
; } hzxjl1owjk ( & b_gradTmp , 1 ) ; localDW -> ajal1iwi1z . IKInternal .
Solver -> ExtraArgs -> CostTemp = 0.0 ; i = b_gradTmp -> size [ 0 ] ;
b_gradTmp -> size [ 0 ] = ( int32_T ) localDW -> ajal1iwi1z . IKInternal .
RigidBodyTreeInternal -> PositionNumber ; ms4rksu5e2 ( b_gradTmp , i ) ; b_k
= ( int32_T ) localDW -> ajal1iwi1z . IKInternal . RigidBodyTreeInternal ->
PositionNumber ; for ( i = 0 ; i < b_k ; i ++ ) { b_gradTmp -> data [ i ] = 0
; } i = localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> GradTemp
-> size [ 0 ] ; localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs ->
GradTemp -> size [ 0 ] = b_gradTmp -> size [ 0 ] ; pzzfddv2ss ( localDW ->
ajal1iwi1z . IKInternal . Solver -> ExtraArgs -> GradTemp , i ) ; b_k =
b_gradTmp -> size [ 0 ] ; h05qxjqn4o ( & b_gradTmp ) ; for ( i = 0 ; i < b_k
; i ++ ) { localDW -> ajal1iwi1z . IKInternal . Solver -> ExtraArgs ->
GradTemp -> data [ i ] = 0.0 ; } localDW -> ajal1iwi1z . IKInternal .
isSetupComplete = true ; } k4gvakoiat ( & localDW -> ajal1iwi1z . IKInternal
, u0 , u1 , u2 , localB -> alhmufu0yv , localDW ) ; } void pyu1p0gkum (
nblp1l3k1r * localDW ) { p1rn1vqdri * obj ; if ( ! localDW -> ajal1iwi1z .
matlabCodegenIsDeleted ) { localDW -> ajal1iwi1z . matlabCodegenIsDeleted =
true ; } obj = & localDW -> ajal1iwi1z . IKInternal ; if ( ! obj ->
matlabCodegenIsDeleted ) { obj -> matlabCodegenIsDeleted = true ; if ( obj ->
isInitialized == 1 ) { obj -> isInitialized = 2 ; } } cckzosyg3e ( & localDW
-> ajal1iwi1z ) ; } static void k5iyj53mdw ( real_T * x ) { real_T absx ;
real_T b_x ; int8_T n ; if ( muDoubleScalarIsInf ( * x ) ||
muDoubleScalarIsNaN ( * x ) ) { * x = ( rtNaN ) ; } else { b_x =
muDoubleScalarRem ( * x , 360.0 ) ; absx = muDoubleScalarAbs ( b_x ) ; if (
absx > 180.0 ) { if ( b_x > 0.0 ) { b_x -= 360.0 ; } else { b_x += 360.0 ; }
absx = muDoubleScalarAbs ( b_x ) ; } if ( absx <= 45.0 ) { b_x *=
0.017453292519943295 ; * x = muDoubleScalarCos ( b_x ) ; } else { if ( absx
<= 135.0 ) { if ( b_x > 0.0 ) { b_x = ( b_x - 90.0 ) * 0.017453292519943295 ;
n = 1 ; } else { b_x = ( b_x + 90.0 ) * 0.017453292519943295 ; n = - 1 ; } }
else if ( b_x > 0.0 ) { b_x = ( b_x - 180.0 ) * 0.017453292519943295 ; n = 2
; } else { b_x = ( b_x + 180.0 ) * 0.017453292519943295 ; n = - 2 ; } if ( n
== 1 ) { * x = - muDoubleScalarSin ( b_x ) ; } else if ( n == - 1 ) { * x =
muDoubleScalarSin ( b_x ) ; } else { * x = - muDoubleScalarCos ( b_x ) ; } }
} } static void id2zjcvn4o ( real_T * x ) { real_T absx ; real_T c_x ; int8_T
n ; if ( muDoubleScalarIsInf ( * x ) || muDoubleScalarIsNaN ( * x ) ) { * x =
( rtNaN ) ; } else { c_x = muDoubleScalarRem ( * x , 360.0 ) ; absx =
muDoubleScalarAbs ( c_x ) ; if ( absx > 180.0 ) { if ( c_x > 0.0 ) { c_x -=
360.0 ; } else { c_x += 360.0 ; } absx = muDoubleScalarAbs ( c_x ) ; } if (
absx <= 45.0 ) { c_x *= 0.017453292519943295 ; * x = muDoubleScalarSin ( c_x
) ; } else { if ( absx <= 135.0 ) { if ( c_x > 0.0 ) { c_x = ( c_x - 90.0 ) *
0.017453292519943295 ; n = 1 ; } else { c_x = ( c_x + 90.0 ) *
0.017453292519943295 ; n = - 1 ; } } else if ( c_x > 0.0 ) { c_x = ( c_x -
180.0 ) * 0.017453292519943295 ; n = 2 ; } else { c_x = ( c_x + 180.0 ) *
0.017453292519943295 ; n = - 2 ; } if ( n == 1 ) { * x = muDoubleScalarCos (
c_x ) ; } else if ( n == - 1 ) { * x = - muDoubleScalarCos ( c_x ) ; } else {
* x = - muDoubleScalarSin ( c_x ) ; } } } } void izdy54u2i4 ( at2pac1xxo *
localDW ) { int32_T i ; static const int8_T tmp [ 9 ] = { 1 , 0 , 0 , 0 , - 1
, 0 , 0 , 0 , - 1 } ; for ( i = 0 ; i < 9 ; i ++ ) { localDW -> eyc0ugbpip [
i ] = tmp [ i ] ; } } void pcpgrvhkl5 ( const real_T a2w3ged0pt [ 3 ] ,
real_T dqh2gtxivb , real_T a4g4ofym0l , real_T gi1nvah2lu , oioqpqodvo *
localB , at2pac1xxo * localDW ) { real_T d [ 9 ] ; real_T d_p [ 9 ] ; real_T
j [ 9 ] ; real_T n [ 9 ] ; real_T g ; real_T l ; real_T o ; int32_T i ;
int32_T i_p ; static const int8_T c [ 3 ] = { 0 , 0 , 1 } ; d [ 4 ] =
dqh2gtxivb ; k5iyj53mdw ( & d [ 4 ] ) ; g = dqh2gtxivb ; id2zjcvn4o ( & g ) ;
d [ 5 ] = dqh2gtxivb ; id2zjcvn4o ( & d [ 5 ] ) ; d [ 8 ] = dqh2gtxivb ;
k5iyj53mdw ( & d [ 8 ] ) ; j [ 0 ] = a4g4ofym0l ; k5iyj53mdw ( & j [ 0 ] ) ;
j [ 6 ] = a4g4ofym0l ; id2zjcvn4o ( & j [ 6 ] ) ; l = a4g4ofym0l ; id2zjcvn4o
( & l ) ; j [ 8 ] = a4g4ofym0l ; k5iyj53mdw ( & j [ 8 ] ) ; n [ 0 ] =
gi1nvah2lu ; k5iyj53mdw ( & n [ 0 ] ) ; o = gi1nvah2lu ; id2zjcvn4o ( & o ) ;
n [ 1 ] = gi1nvah2lu ; id2zjcvn4o ( & n [ 1 ] ) ; n [ 4 ] = gi1nvah2lu ;
k5iyj53mdw ( & n [ 4 ] ) ; d [ 1 ] = 0.0 ; d [ 7 ] = - g ; d [ 2 ] = 0.0 ; j
[ 3 ] = 0.0 ; d [ 0 ] = 1.0 ; j [ 1 ] = 0.0 ; d [ 3 ] = 0.0 ; j [ 4 ] = 1.0 ;
d [ 6 ] = 0.0 ; j [ 7 ] = 0.0 ; j [ 2 ] = - l ; j [ 5 ] = 0.0 ; n [ 3 ] = - o
; n [ 6 ] = 0.0 ; n [ 7 ] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { for ( i_p =
0 ; i_p < 3 ; i_p ++ ) { d_p [ i + 3 * i_p ] = 0.0 ; d_p [ i + 3 * i_p ] += j
[ 3 * i_p ] * d [ i ] ; d_p [ i + 3 * i_p ] += j [ 3 * i_p + 1 ] * d [ i + 3
] ; d_p [ i + 3 * i_p ] += j [ 3 * i_p + 2 ] * d [ i + 6 ] ; } n [ 3 * i + 2
] = c [ i ] ; } for ( i = 0 ; i < 3 ; i ++ ) { for ( i_p = 0 ; i_p < 3 ; i_p
++ ) { d [ i + 3 * i_p ] = 0.0 ; d [ i + 3 * i_p ] += n [ 3 * i_p ] * d_p [ i
] ; d [ i + 3 * i_p ] += n [ 3 * i_p + 1 ] * d_p [ i + 3 ] ; d [ i + 3 * i_p
] += n [ 3 * i_p + 2 ] * d_p [ i + 6 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ )
{ j [ i + 3 * i_p ] = 0.0 ; j [ i + 3 * i_p ] += localDW -> eyc0ugbpip [ 3 *
i_p ] * d [ i ] ; j [ i + 3 * i_p ] += localDW -> eyc0ugbpip [ 3 * i_p + 1 ]
* d [ i + 3 ] ; j [ i + 3 * i_p ] += localDW -> eyc0ugbpip [ 3 * i_p + 2 ] *
d [ i + 6 ] ; } } memcpy ( & localDW -> eyc0ugbpip [ 0 ] , & j [ 0 ] , 9U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 3 ; i ++ ) { localB -> jeolgcmssj [ i
<< 2 ] = localDW -> eyc0ugbpip [ 3 * i ] ; localB -> jeolgcmssj [ ( i << 2 )
+ 1 ] = localDW -> eyc0ugbpip [ 3 * i + 1 ] ; localB -> jeolgcmssj [ ( i << 2
) + 2 ] = localDW -> eyc0ugbpip [ 3 * i + 2 ] ; localB -> jeolgcmssj [ i + 12
] = a2w3ged0pt [ i ] ; } localB -> jeolgcmssj [ 3 ] = 0.0 ; localB ->
jeolgcmssj [ 7 ] = 0.0 ; localB -> jeolgcmssj [ 11 ] = 0.0 ; localB ->
jeolgcmssj [ 15 ] = 1.0 ; } static void i213kpnt2j ( const real_T q [ 4 ] ,
real_T R [ 9 ] ) { real_T tempR [ 9 ] ; real_T b_q_idx_0 ; real_T b_q_idx_1 ;
real_T b_q_idx_2 ; real_T b_q_idx_3 ; int32_T c_k ; b_q_idx_3 = 1.0 /
muDoubleScalarSqrt ( ( ( q [ 0 ] * q [ 0 ] + q [ 1 ] * q [ 1 ] ) + q [ 2 ] *
q [ 2 ] ) + q [ 3 ] * q [ 3 ] ) ; b_q_idx_0 = q [ 0 ] * b_q_idx_3 ; b_q_idx_1
= q [ 1 ] * b_q_idx_3 ; b_q_idx_2 = q [ 2 ] * b_q_idx_3 ; b_q_idx_3 *= q [ 3
] ; tempR [ 0 ] = 1.0 - ( b_q_idx_2 * b_q_idx_2 + b_q_idx_3 * b_q_idx_3 ) *
2.0 ; tempR [ 1 ] = ( b_q_idx_1 * b_q_idx_2 - b_q_idx_0 * b_q_idx_3 ) * 2.0 ;
tempR [ 2 ] = ( b_q_idx_1 * b_q_idx_3 + b_q_idx_0 * b_q_idx_2 ) * 2.0 ; tempR
[ 3 ] = ( b_q_idx_1 * b_q_idx_2 + b_q_idx_0 * b_q_idx_3 ) * 2.0 ; tempR [ 4 ]
= 1.0 - ( b_q_idx_1 * b_q_idx_1 + b_q_idx_3 * b_q_idx_3 ) * 2.0 ; tempR [ 5 ]
= ( b_q_idx_2 * b_q_idx_3 - b_q_idx_0 * b_q_idx_1 ) * 2.0 ; tempR [ 6 ] = (
b_q_idx_1 * b_q_idx_3 - b_q_idx_0 * b_q_idx_2 ) * 2.0 ; tempR [ 7 ] = (
b_q_idx_2 * b_q_idx_3 + b_q_idx_0 * b_q_idx_1 ) * 2.0 ; tempR [ 8 ] = 1.0 - (
b_q_idx_1 * b_q_idx_1 + b_q_idx_2 * b_q_idx_2 ) * 2.0 ; for ( c_k = 0 ; c_k <
3 ; c_k ++ ) { R [ ( int8_T ) ( c_k + 1 ) - 1 ] = tempR [ ( ( int8_T ) ( c_k
+ 1 ) - 1 ) * 3 ] ; R [ ( int8_T ) ( c_k + 1 ) + 2 ] = tempR [ ( ( int8_T ) (
c_k + 1 ) - 1 ) * 3 + 1 ] ; R [ ( int8_T ) ( c_k + 1 ) + 5 ] = tempR [ ( (
int8_T ) ( c_k + 1 ) - 1 ) * 3 + 2 ] ; } } static void h0tx2wzbqd ( const
real_T A [ 9 ] , uint8_T m , real_T F [ 9 ] ) { real_T A2 [ 9 ] ; real_T A3 [
9 ] ; real_T A4 [ 9 ] ; real_T A4_p [ 9 ] ; real_T U [ 9 ] ; real_T V [ 9 ] ;
real_T A3_p ; real_T A4_e ; real_T d ; int32_T r1 ; int32_T r2 ; int32_T r3 ;
int32_T rtemp ; for ( r1 = 0 ; r1 < 3 ; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2
++ ) { A2 [ r2 + 3 * r1 ] = 0.0 ; A2 [ r2 + 3 * r1 ] += A [ 3 * r1 ] * A [ r2
] ; A2 [ r2 + 3 * r1 ] += A [ 3 * r1 + 1 ] * A [ r2 + 3 ] ; A2 [ r2 + 3 * r1
] += A [ 3 * r1 + 2 ] * A [ r2 + 6 ] ; } } if ( m == 3 ) { memcpy ( & U [ 0 ]
, & A2 [ 0 ] , 9U * sizeof ( real_T ) ) ; U [ 0 ] += 60.0 ; U [ 4 ] += 60.0 ;
U [ 8 ] += 60.0 ; for ( r1 = 0 ; r1 < 3 ; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ;
r2 ++ ) { A4_p [ r2 + 3 * r1 ] = 0.0 ; A4_p [ r2 + 3 * r1 ] += U [ 3 * r1 ] *
A [ r2 ] ; A4_p [ r2 + 3 * r1 ] += U [ 3 * r1 + 1 ] * A [ r2 + 3 ] ; A4_p [
r2 + 3 * r1 ] += U [ 3 * r1 + 2 ] * A [ r2 + 6 ] ; } } for ( r1 = 0 ; r1 < 9
; r1 ++ ) { U [ r1 ] = A4_p [ r1 ] ; V [ r1 ] = 12.0 * A2 [ r1 ] ; } d =
120.0 ; } else { for ( r1 = 0 ; r1 < 3 ; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2
++ ) { A3 [ r2 + 3 * r1 ] = 0.0 ; A3 [ r2 + 3 * r1 ] += A2 [ 3 * r1 ] * A2 [
r2 ] ; A3 [ r2 + 3 * r1 ] += A2 [ 3 * r1 + 1 ] * A2 [ r2 + 3 ] ; A3 [ r2 + 3
* r1 ] += A2 [ 3 * r1 + 2 ] * A2 [ r2 + 6 ] ; } } if ( m == 5 ) { for ( r1 =
0 ; r1 < 9 ; r1 ++ ) { U [ r1 ] = 420.0 * A2 [ r1 ] + A3 [ r1 ] ; } U [ 0 ]
+= 15120.0 ; U [ 4 ] += 15120.0 ; U [ 8 ] += 15120.0 ; for ( r1 = 0 ; r1 < 3
; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { A4_p [ r2 + 3 * r1 ] = 0.0 ;
A4_p [ r2 + 3 * r1 ] += U [ 3 * r1 ] * A [ r2 ] ; A4_p [ r2 + 3 * r1 ] += U [
3 * r1 + 1 ] * A [ r2 + 3 ] ; A4_p [ r2 + 3 * r1 ] += U [ 3 * r1 + 2 ] * A [
r2 + 6 ] ; } } for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { U [ r1 ] = A4_p [ r1 ] ; V [
r1 ] = 30.0 * A3 [ r1 ] + 3360.0 * A2 [ r1 ] ; } d = 30240.0 ; } else { for (
r1 = 0 ; r1 < 3 ; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { A4 [ r2 + 3 *
r1 ] = 0.0 ; A4 [ r2 + 3 * r1 ] += A2 [ 3 * r1 ] * A3 [ r2 ] ; A4 [ r2 + 3 *
r1 ] += A2 [ 3 * r1 + 1 ] * A3 [ r2 + 3 ] ; A4 [ r2 + 3 * r1 ] += A2 [ 3 * r1
+ 2 ] * A3 [ r2 + 6 ] ; } } if ( m == 7 ) { for ( r1 = 0 ; r1 < 9 ; r1 ++ ) {
U [ r1 ] = ( 1512.0 * A3 [ r1 ] + A4 [ r1 ] ) + 277200.0 * A2 [ r1 ] ; } U [
0 ] += 8.64864E+6 ; U [ 4 ] += 8.64864E+6 ; U [ 8 ] += 8.64864E+6 ; for ( r1
= 0 ; r1 < 3 ; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { A4_p [ r2 + 3 * r1
] = 0.0 ; A4_p [ r2 + 3 * r1 ] += U [ 3 * r1 ] * A [ r2 ] ; A4_p [ r2 + 3 *
r1 ] += U [ 3 * r1 + 1 ] * A [ r2 + 3 ] ; A4_p [ r2 + 3 * r1 ] += U [ 3 * r1
+ 2 ] * A [ r2 + 6 ] ; } } for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { U [ r1 ] = A4_p
[ r1 ] ; V [ r1 ] = ( 56.0 * A4 [ r1 ] + 25200.0 * A3 [ r1 ] ) + 1.99584E+6 *
A2 [ r1 ] ; } d = 1.729728E+7 ; } else if ( m == 9 ) { for ( r1 = 0 ; r1 < 3
; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { V [ r2 + 3 * r1 ] = 0.0 ; V [
r2 + 3 * r1 ] += A2 [ 3 * r1 ] * A4 [ r2 ] ; V [ r2 + 3 * r1 ] += A2 [ 3 * r1
+ 1 ] * A4 [ r2 + 3 ] ; V [ r2 + 3 * r1 ] += A2 [ 3 * r1 + 2 ] * A4 [ r2 + 6
] ; } } for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { U [ r1 ] = ( ( 3960.0 * A4 [ r1 ] +
V [ r1 ] ) + 2.16216E+6 * A3 [ r1 ] ) + 3.027024E+8 * A2 [ r1 ] ; } U [ 0 ]
+= 8.8216128E+9 ; U [ 4 ] += 8.8216128E+9 ; U [ 8 ] += 8.8216128E+9 ; for (
r1 = 0 ; r1 < 3 ; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { A4_p [ r2 + 3 *
r1 ] = 0.0 ; A4_p [ r2 + 3 * r1 ] += U [ 3 * r1 ] * A [ r2 ] ; A4_p [ r2 + 3
* r1 ] += U [ 3 * r1 + 1 ] * A [ r2 + 3 ] ; A4_p [ r2 + 3 * r1 ] += U [ 3 *
r1 + 2 ] * A [ r2 + 6 ] ; } } for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { U [ r1 ] =
A4_p [ r1 ] ; V [ r1 ] = ( ( 90.0 * V [ r1 ] + 110880.0 * A4 [ r1 ] ) +
3.027024E+7 * A3 [ r1 ] ) + 2.0756736E+9 * A2 [ r1 ] ; } d = 1.76432256E+10 ;
} else { for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { d = A2 [ r1 ] ; A3_p = A3 [ r1 ] ;
A4_e = A4 [ r1 ] ; U [ r1 ] = ( 3.352212864E+10 * A4_e + 1.05594705216E+13 *
A3_p ) + 1.1873537964288E+15 * d ; V [ r1 ] = ( 16380.0 * A3_p + A4_e ) +
4.08408E+7 * d ; } U [ 0 ] += 3.238237626624E+16 ; U [ 4 ] +=
3.238237626624E+16 ; U [ 8 ] += 3.238237626624E+16 ; for ( r1 = 0 ; r1 < 3 ;
r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { A4_p [ r1 + 3 * r2 ] = ( ( V [ 3
* r2 + 1 ] * A4 [ r1 + 3 ] + V [ 3 * r2 ] * A4 [ r1 ] ) + V [ 3 * r2 + 2 ] *
A4 [ r1 + 6 ] ) + U [ 3 * r2 + r1 ] ; } } for ( r1 = 0 ; r1 < 3 ; r1 ++ ) {
for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { U [ r2 + 3 * r1 ] = 0.0 ; U [ r2 + 3 * r1 ]
+= A4_p [ 3 * r1 ] * A [ r2 ] ; U [ r2 + 3 * r1 ] += A4_p [ 3 * r1 + 1 ] * A
[ r2 + 3 ] ; U [ r2 + 3 * r1 ] += A4_p [ 3 * r1 + 2 ] * A [ r2 + 6 ] ; } }
for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { A4_p [ r1 ] = ( 182.0 * A4 [ r1 ] +
960960.0 * A3 [ r1 ] ) + 1.32324192E+9 * A2 [ r1 ] ; } for ( r1 = 0 ; r1 < 3
; r1 ++ ) { for ( r2 = 0 ; r2 < 3 ; r2 ++ ) { V [ r1 + 3 * r2 ] = ( ( ( (
A4_p [ 3 * r2 + 1 ] * A4 [ r1 + 3 ] + A4_p [ 3 * r2 ] * A4 [ r1 ] ) + A4_p [
3 * r2 + 2 ] * A4 [ r1 + 6 ] ) + A4 [ 3 * r2 + r1 ] * 6.704425728E+11 ) + A3
[ 3 * r2 + r1 ] * 1.29060195264E+14 ) + A2 [ 3 * r2 + r1 ] *
7.7717703038976E+15 ; } } d = 6.476475253248E+16 ; } } } V [ 0 ] += d ; V [ 4
] += d ; V [ 8 ] += d ; for ( r1 = 0 ; r1 < 9 ; r1 ++ ) { d = U [ r1 ] ; A3_p
= V [ r1 ] - d ; d *= 2.0 ; V [ r1 ] = A3_p ; U [ r1 ] = d ; } r1 = 0 ; r2 =
1 ; r3 = 2 ; d = muDoubleScalarAbs ( V [ 0 ] ) ; A3_p = muDoubleScalarAbs ( V
[ 1 ] ) ; if ( A3_p > muDoubleScalarAbs ( V [ 0 ] ) ) { d = A3_p ; r1 = 1 ;
r2 = 0 ; } if ( muDoubleScalarAbs ( V [ 2 ] ) > d ) { r1 = 2 ; r2 = 1 ; r3 =
0 ; } V [ r2 ] /= V [ r1 ] ; V [ r3 ] /= V [ r1 ] ; V [ r2 + 3 ] -= V [ r1 +
3 ] * V [ r2 ] ; V [ r3 + 3 ] -= V [ r1 + 3 ] * V [ r3 ] ; V [ r2 + 6 ] -= V
[ r1 + 6 ] * V [ r2 ] ; V [ r3 + 6 ] -= V [ r1 + 6 ] * V [ r3 ] ; if (
muDoubleScalarAbs ( V [ r3 + 3 ] ) > muDoubleScalarAbs ( V [ r2 + 3 ] ) ) {
rtemp = r2 ; r2 = r3 ; r3 = rtemp ; } V [ r3 + 3 ] /= V [ r2 + 3 ] ; V [ r3 +
6 ] -= V [ r3 + 3 ] * V [ r2 + 6 ] ; F [ 0 ] = U [ r1 ] ; F [ 1 ] = U [ r2 ]
- F [ 0 ] * V [ r2 ] ; F [ 2 ] = ( U [ r3 ] - F [ 0 ] * V [ r3 ] ) - V [ r3 +
3 ] * F [ 1 ] ; F [ 2 ] /= V [ r3 + 6 ] ; F [ 0 ] -= V [ r1 + 6 ] * F [ 2 ] ;
F [ 1 ] -= V [ r2 + 6 ] * F [ 2 ] ; F [ 1 ] /= V [ r2 + 3 ] ; F [ 0 ] -= V [
r1 + 3 ] * F [ 1 ] ; F [ 0 ] /= V [ r1 ] ; F [ 3 ] = U [ r1 + 3 ] ; F [ 4 ] =
U [ r2 + 3 ] - F [ 3 ] * V [ r2 ] ; F [ 5 ] = ( U [ r3 + 3 ] - F [ 3 ] * V [
r3 ] ) - V [ r3 + 3 ] * F [ 4 ] ; F [ 5 ] /= V [ r3 + 6 ] ; F [ 3 ] -= V [ r1
+ 6 ] * F [ 5 ] ; F [ 4 ] -= V [ r2 + 6 ] * F [ 5 ] ; F [ 4 ] /= V [ r2 + 3 ]
; F [ 3 ] -= V [ r1 + 3 ] * F [ 4 ] ; F [ 3 ] /= V [ r1 ] ; F [ 6 ] = U [ r1
+ 6 ] ; F [ 7 ] = U [ r2 + 6 ] - F [ 6 ] * V [ r2 ] ; F [ 8 ] = ( U [ r3 + 6
] - F [ 6 ] * V [ r3 ] ) - V [ r3 + 3 ] * F [ 7 ] ; F [ 8 ] /= V [ r3 + 6 ] ;
F [ 6 ] -= V [ r1 + 6 ] * F [ 8 ] ; F [ 7 ] -= V [ r2 + 6 ] * F [ 8 ] ; F [ 7
] /= V [ r2 + 3 ] ; F [ 6 ] -= V [ r1 + 3 ] * F [ 7 ] ; F [ 6 ] /= V [ r1 ] ;
F [ 0 ] ++ ; F [ 4 ] ++ ; F [ 8 ] ++ ; } static void lz54wyaa0l ( real_T A [
9 ] , real_T F [ 9 ] ) { real_T F_p [ 9 ] ; real_T b_s ; real_T normA ;
int32_T b_j ; int32_T e ; int32_T i ; static const real_T theta [ 5 ] = {
0.01495585217958292 , 0.253939833006323 , 0.95041789961629319 ,
2.097847961257068 , 5.3719203511481517 } ; static const uint8_T b [ 5 ] = {
3U , 5U , 7U , 9U , 13U } ; boolean_T exitg1 ; normA = 0.0 ; b_j = 0 ; exitg1
= false ; while ( ( ! exitg1 ) && ( b_j < 3 ) ) { b_s = ( muDoubleScalarAbs (
A [ 3 * b_j + 1 ] ) + muDoubleScalarAbs ( A [ 3 * b_j ] ) ) +
muDoubleScalarAbs ( A [ 3 * b_j + 2 ] ) ; if ( muDoubleScalarIsNaN ( b_s ) )
{ normA = ( rtNaN ) ; exitg1 = true ; } else { if ( b_s > normA ) { normA =
b_s ; } b_j ++ ; } } if ( normA <= 5.3719203511481517 ) { b_j = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( b_j < 5 ) ) { if ( normA <= theta [ b_j ] )
{ h0tx2wzbqd ( A , b [ b_j ] , F ) ; exitg1 = true ; } else { b_j ++ ; } } }
else { b_s = normA / 5.3719203511481517 ; if ( ( ! muDoubleScalarIsInf ( b_s
) ) && ( ! muDoubleScalarIsNaN ( b_s ) ) ) { b_s = frexp ( b_s , & e ) ; }
else { e = 0 ; } normA = e ; if ( b_s == 0.5 ) { normA = ( real_T ) e - 1.0 ;
} b_s = muDoubleScalarPower ( 2.0 , normA ) ; for ( e = 0 ; e < 9 ; e ++ ) {
A [ e ] /= b_s ; } h0tx2wzbqd ( A , 13 , F ) ; for ( b_j = 0 ; b_j < (
int32_T ) normA ; b_j ++ ) { for ( e = 0 ; e < 3 ; e ++ ) { for ( i = 0 ; i <
3 ; i ++ ) { F_p [ e + 3 * i ] = 0.0 ; F_p [ e + 3 * i ] += F [ 3 * i ] * F [
e ] ; F_p [ e + 3 * i ] += F [ 3 * i + 1 ] * F [ e + 3 ] ; F_p [ e + 3 * i ]
+= F [ 3 * i + 2 ] * F [ e + 6 ] ; } } memcpy ( & F [ 0 ] , & F_p [ 0 ] , 9U
* sizeof ( real_T ) ) ; } } } void MdlInitialize ( void ) { int32_T i ;
static const int8_T tmp [ 9 ] = { 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 } ; rtDW
. meaqqr1ua3 = rtP . DiscreteTimeIntegrator1_IC ; rtDW . ieis3wdkcc = rtP .
DiscreteTimeIntegrator3_IC ; rtDW . nsbswzebrn = rtP .
DiscreteTimeIntegrator5_IC ; rtDW . ftmzzvbzax = rtP .
DiscreteTimeIntegrator_IC ; rtDW . lajwkf5yel = rtP .
DiscreteTimeIntegrator2_IC ; rtDW . kf54lrgsgh = rtP .
DiscreteTimeIntegrator4_IC ; rtDW . lwjbyb5hax = rtP .
DiscreteTimeIntegrator1_IC_cgmsovkfs2 ; rtDW . iyyt53kmyv = rtP .
DiscreteTimeIntegrator3_IC_iotuu4egg5 ; rtDW . domwprwtea = rtP .
DiscreteTimeIntegrator5_IC_ndnh2qpnoo ; rtDW . hw4jmko5ut = rtP .
DiscreteTimeIntegrator_IC_bany3i5ckr ; rtDW . dlylyzqh44 = rtP .
DiscreteTimeIntegrator2_IC_aj2g4mbo2m ; rtDW . d1vruvafzv = rtP .
DiscreteTimeIntegrator4_IC_dzcpbao03e ; for ( i = 0 ; i < 6 ; i ++ ) { rtDW .
jb4linf121 [ i ] = rtP . Delay_InitialCondition ; rtDW . g2tsjufkz5 [ i ] =
rtP . Delay_InitialCondition_h32mlgftaf ; } rtDW . jxqq0kd055 = rtP .
DiscreteTimeIntegrator_IC_aorocmjnnc ; rtDW . d1ymyg1puf = rtP .
DiscreteTimeIntegrator2_IC_h4ggyv4v21 ; rtDW . pniui21m2m = rtP .
DiscreteTimeIntegrator4_IC_bu1dngwxgl ; rtDW . hom4bzatts = rtP .
DiscreteTimeIntegrator1_IC_mmztbewik4 ; rtDW . jx1pyei5iz = rtP .
DiscreteTimeIntegrator3_IC_bfgbvvrang ; rtDW . goe0ybllxx = rtP .
DiscreteTimeIntegrator5_IC_dwq35bos2m ; rtDW . f32pecj5j3 = rtP .
DiscreteTimeIntegrator_IC_ho0ck4cozt ; rtDW . fbdsqnrbvi = rtP .
DiscreteTimeIntegrator2_IC_ly22xqd5qq ; rtDW . gqp5ng5ipd = rtP .
DiscreteTimeIntegrator4_IC_ghkub0qpne ; rtDW . ikqao11oir = rtP .
DiscreteTimeIntegrator1_IC_lfcgd1m32e ; rtDW . mhqnkldn3f = rtP .
DiscreteTimeIntegrator3_IC_mepeuuspom ; rtDW . d0njjfa3vf = rtP .
DiscreteTimeIntegrator5_IC_jzt432kxca ; izdy54u2i4 ( & rtDW . flhn5odxwk ) ;
izdy54u2i4 ( & rtDW . fcodrholju ) ; for ( i = 0 ; i < 9 ; i ++ ) { rtDW .
kso5hmoa3x [ i ] = tmp [ i ] ; } rtDW . afqg540hpl = false ; rtDW .
poimg20uht = false ; rtDW . oc1xjxz5rw = 1.0 ; rtDW . fjgxwmabrc [ 0 ] = 0.0
; rtDW . fjgxwmabrc [ 1 ] = 0.0 ; rtDW . fjgxwmabrc [ 2 ] = 0.0 ; memset ( &
rtDW . enz403h0md [ 0 ] , 0 , 160U * sizeof ( real_T ) ) ; rtDW . of0mgcawwf
= 0.0 ; rtDW . bth2mqorax = 1.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtDW .
obx514d20e [ i ] = 0.0 ; } } void MdlStart ( void ) { CXPtMax *
_rtXPerturbMax ; CXPtMin * _rtXPerturbMin ; NeModelParameters modelParameters
; NeModelParameters modelParameters_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; real_T tmp_m [ 48 ] ; real_T time ; real_T tmp_e ; int32_T tmp_i ;
int_T tmp_g [ 13 ] ; boolean_T tmp_p ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { static int_T
rt_ToWksWidths [ ] = { 16 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 }
; static int_T rt_ToWksDimensions [ ] = { 16 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "pp/To Workspace" ; rtDW . idvsek3cff .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "debug"
, 1 , 0 , 1 , 0.0005 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW
. idvsek3cff . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 6 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 6 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "pp/To Workspace1" ; rtDW . ovuzirfyo4 .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "debug1"
, 1 , 0 , 1 , 0.0005 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW
. ovuzirfyo4 . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 96 } ; static int_T rt_ToWksNumDimensions [ ] = { 2 }
; static int_T rt_ToWksDimensions [ ] = { 6 , 16 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) , ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ;
static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "pp/To Workspace2" ; rtDW . hydekeb4jx .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "debug2"
, 1 , 0 , 1 , 0.0005 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW
. hydekeb4jx . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 9 } ; static int_T rt_ToWksNumDimensions [ ] = { 2 } ;
static int_T rt_ToWksDimensions [ ] = { 3 , 3 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) , ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ;
static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "pp/To Workspace3" ; rtDW . etxlw4dum2 .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "debug3"
, 1 , 0 , 1 , 0.0005 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW
. etxlw4dum2 . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 9 } ; static int_T rt_ToWksNumDimensions [ ] = { 2 } ;
static int_T rt_ToWksDimensions [ ] = { 3 , 3 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) , ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ;
static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "pp/To Workspace4" ; rtDW . flmct1jknr .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "debug4"
, 1 , 0 , 1 , 0.0005 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW
. flmct1jknr . LoggedData == ( NULL ) ) return ; } { FWksInfo * fromwksInfo ;
if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == (
NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 6 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0 ; fromwksInfo -> nDataPoints = 240 ; fromwksInfo ->
time = ( double * ) rtP . FromWs_Time0 ; rtDW . factggsf10 . TimePtr =
fromwksInfo -> time ; rtDW . factggsf10 . DataPtr = fromwksInfo -> data ;
rtDW . factggsf10 . RSimInfoPtr = fromwksInfo ; } rtDW . gfnv1aupmz .
PrevIndex = 0 ; { int_T * zcTimeIndices = & rtDW . cbdib2svjf [ 0 ] ; const
double * timePoints = ( double * ) rtDW . factggsf10 . TimePtr ; boolean_T
justHadZcTime = false ; int_T zcIdx = 0 ; int_T i ; for ( i = 0 ; i < 240 - 1
; i ++ ) { if ( ! justHadZcTime && timePoints [ i ] == timePoints [ i + 1 ] )
{ zcTimeIndices [ zcIdx ++ ] = i ; justHadZcTime = true ; } else {
justHadZcTime = false ; } } rtDW . isi3qqu4qf = 0 ; } } { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 6 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0_bwp1rplazj ; fromwksInfo -> nDataPoints = 160 ;
fromwksInfo -> time = ( double * ) rtP . FromWs_Time0_mwegrphi2o ; rtDW .
hir5izsswk . TimePtr = fromwksInfo -> time ; rtDW . hir5izsswk . DataPtr =
fromwksInfo -> data ; rtDW . hir5izsswk . RSimInfoPtr = fromwksInfo ; } rtDW
. fq2wjlgbnm . PrevIndex = 0 ; { int_T * zcTimeIndices = & rtDW . d0jyhdhshq
[ 0 ] ; const double * timePoints = ( double * ) rtDW . hir5izsswk . TimePtr
; boolean_T justHadZcTime = false ; int_T zcIdx = 0 ; int_T i ; for ( i = 0 ;
i < 160 - 1 ; i ++ ) { if ( ! justHadZcTime && timePoints [ i ] == timePoints
[ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ; justHadZcTime = true ; } else
{ justHadZcTime = false ; } } rtDW . g50wjgttgc = 0 ; } } gtzl2i5aq1 ( & rtDW
. e12xzvaqlra ) ; gtzl2i5aq1 ( & rtDW . g25aonyhee ) ; tmp =
nesl_lease_simulator ( "pp/Solver Configuration_1" , 0 , 0 ) ; rtDW .
ppxvh3soys = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . ppxvh3soys ) ;
if ( tmp_p ) { pp_43e6ab1_1_gateway ( ) ; tmp = nesl_lease_simulator (
"pp/Solver Configuration_1" , 0 , 0 ) ; rtDW . ppxvh3soys = ( void * ) tmp ;
} slsaSaveRawMemoryForSimTargetOP ( rtS , "pp/Solver Configuration_100" , (
void * * ) ( & rtDW . ppxvh3soys ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . pwa0n2fnbt = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
a5nq0aeena = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = true ; modelParameters . mIsUsingODEN
= false ; modelParameters . mFixedStepSize = 0.001 ; modelParameters .
mStartTime = 0.0 ; modelParameters . mLoadInitialState = false ;
modelParameters . mUseSimState = false ; modelParameters . mLinTrimCompile =
false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.83339224E+8 ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . a5nq0aeena ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ppxvh3soys
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . pwa0n2fnbt ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 18 ;
simulationData -> mData -> mContStates . mX = & rtX . iwaxtr5iwx [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hocn5gpqnf ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fkrpan2ou1 ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ; tmp_m [ 0
] = rtB . itk1tzd05y [ 0 ] ; tmp_m [ 1 ] = rtB . itk1tzd05y [ 1 ] ; tmp_m [ 2
] = rtB . itk1tzd05y [ 2 ] ; tmp_m [ 3 ] = rtB . itk1tzd05y [ 3 ] ; tmp_g [ 1
] = 4 ; tmp_m [ 4 ] = rtB . cgdw5usgs2 [ 0 ] ; tmp_m [ 5 ] = rtB . cgdw5usgs2
[ 1 ] ; tmp_m [ 6 ] = rtB . cgdw5usgs2 [ 2 ] ; tmp_m [ 7 ] = rtB . cgdw5usgs2
[ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . fodbt3qoit [ 0 ] ; tmp_m [ 9 ]
= rtB . fodbt3qoit [ 1 ] ; tmp_m [ 10 ] = rtB . fodbt3qoit [ 2 ] ; tmp_m [ 11
] = rtB . fodbt3qoit [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB .
arfjjmxolk [ 0 ] ; tmp_m [ 13 ] = rtB . arfjjmxolk [ 1 ] ; tmp_m [ 14 ] = rtB
. arfjjmxolk [ 2 ] ; tmp_m [ 15 ] = rtB . arfjjmxolk [ 3 ] ; tmp_g [ 4 ] = 16
; tmp_m [ 16 ] = rtB . hnth4pq521 [ 0 ] ; tmp_m [ 17 ] = rtB . hnth4pq521 [ 1
] ; tmp_m [ 18 ] = rtB . hnth4pq521 [ 2 ] ; tmp_m [ 19 ] = rtB . hnth4pq521 [
3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = rtB . lktiyc0abo [ 0 ] ; tmp_m [ 21 ]
= rtB . lktiyc0abo [ 1 ] ; tmp_m [ 22 ] = rtB . lktiyc0abo [ 2 ] ; tmp_m [ 23
] = rtB . lktiyc0abo [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] = rtB .
gge2baxpst [ 0 ] ; tmp_m [ 25 ] = rtB . gge2baxpst [ 1 ] ; tmp_m [ 26 ] = rtB
. gge2baxpst [ 2 ] ; tmp_m [ 27 ] = rtB . gge2baxpst [ 3 ] ; tmp_g [ 7 ] = 28
; tmp_m [ 28 ] = rtB . pyqiljkwsr [ 0 ] ; tmp_m [ 29 ] = rtB . pyqiljkwsr [ 1
] ; tmp_m [ 30 ] = rtB . pyqiljkwsr [ 2 ] ; tmp_m [ 31 ] = rtB . pyqiljkwsr [
3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] = rtB . hwb0fhnhyj [ 0 ] ; tmp_m [ 33 ]
= rtB . hwb0fhnhyj [ 1 ] ; tmp_m [ 34 ] = rtB . hwb0fhnhyj [ 2 ] ; tmp_m [ 35
] = rtB . hwb0fhnhyj [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] = rtB .
kay4eihbv3 [ 0 ] ; tmp_m [ 37 ] = rtB . kay4eihbv3 [ 1 ] ; tmp_m [ 38 ] = rtB
. kay4eihbv3 [ 2 ] ; tmp_m [ 39 ] = rtB . kay4eihbv3 [ 3 ] ; tmp_g [ 10 ] =
40 ; tmp_m [ 40 ] = rtB . n12tcfek0v [ 0 ] ; tmp_m [ 41 ] = rtB . n12tcfek0v
[ 1 ] ; tmp_m [ 42 ] = rtB . n12tcfek0v [ 2 ] ; tmp_m [ 43 ] = rtB .
n12tcfek0v [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = rtB . j3iozjgadg [ 0 ]
; tmp_m [ 45 ] = rtB . j3iozjgadg [ 1 ] ; tmp_m [ 46 ] = rtB . j3iozjgadg [ 2
] ; tmp_m [ 47 ] = rtB . j3iozjgadg [ 3 ] ; tmp_g [ 12 ] = 48 ;
simulationData -> mData -> mInputValues . mN = 48 ; simulationData -> mData
-> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 18 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> iwaxtr5iwx
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 18 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> iwaxtr5iwx [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . a5nq0aeena ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. ppxvh3soys , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus (
rtS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"pp/Solver Configuration_1" , 1 , 0 ) ; rtDW . jp125spiju = ( void * ) tmp ;
tmp_p = pointer_is_null ( rtDW . jp125spiju ) ; if ( tmp_p ) {
pp_43e6ab1_1_gateway ( ) ; tmp = nesl_lease_simulator (
"pp/Solver Configuration_1" , 1 , 0 ) ; rtDW . jp125spiju = ( void * ) tmp ;
} slsaSaveRawMemoryForSimTargetOP ( rtS , "pp/Solver Configuration_110" , (
void * * ) ( & rtDW . jp125spiju ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . lcth0eskrc = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
f4dhncxa4g = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 5.83339224E+8 ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( rtS ) ; val =
( tmp_p && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p .
mLoadInitialState = val ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW
. f4dhncxa4g ; diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
rtDW . jp125spiju , & modelParameters_p , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS
, msg_e ) ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo *
) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS
, "from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 3 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0_n4fvl010iy ; fromwksInfo -> nDataPoints = 8 ;
fromwksInfo -> time = ( double * ) rtP . FromWs_Time0_dgntxkplur ; rtDW .
gjmmdatpmk . TimePtr = fromwksInfo -> time ; rtDW . gjmmdatpmk . DataPtr =
fromwksInfo -> data ; rtDW . gjmmdatpmk . RSimInfoPtr = fromwksInfo ; } rtDW
. hdj2esbagy . PrevIndex = 0 ; { int_T * zcTimeIndices = & rtDW . hk4x31s2wo
[ 0 ] ; const double * timePoints = ( double * ) rtDW . gjmmdatpmk . TimePtr
; boolean_T justHadZcTime = false ; int_T zcIdx = 0 ; int_T i ; for ( i = 0 ;
i < 8 - 1 ; i ++ ) { if ( ! justHadZcTime && timePoints [ i ] == timePoints [
i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ; justHadZcTime = true ; } else {
justHadZcTime = false ; } } rtDW . pgqbeye23i = 0 ; } } { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 6 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0_gnhlpqyxpe ; fromwksInfo -> nDataPoints = 10 ;
fromwksInfo -> time = ( double * ) rtP . FromWs_Time0_dzcgme01l0 ; rtDW .
j2ilej2aih . TimePtr = fromwksInfo -> time ; rtDW . j2ilej2aih . DataPtr =
fromwksInfo -> data ; rtDW . j2ilej2aih . RSimInfoPtr = fromwksInfo ; } rtDW
. cg2bvqjvra . PrevIndex = 0 ; { int_T * zcTimeIndices = & rtDW . iwgjwpwckw
[ 0 ] ; const double * timePoints = ( double * ) rtDW . j2ilej2aih . TimePtr
; boolean_T justHadZcTime = false ; int_T zcIdx = 0 ; int_T i ; for ( i = 0 ;
i < 10 - 1 ; i ++ ) { if ( ! justHadZcTime && timePoints [ i ] == timePoints
[ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ; justHadZcTime = true ; } else
{ justHadZcTime = false ; } } rtDW . apqtcucrxr = 0 ; } } { FWksInfo *
fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof (
FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 6 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0_bqye40vj0v ; fromwksInfo -> nDataPoints = 18 ;
fromwksInfo -> time = ( double * ) rtP . FromWs_Time0_fpralrmcvh ; rtDW .
mx04nd152z . TimePtr = fromwksInfo -> time ; rtDW . mx04nd152z . DataPtr =
fromwksInfo -> data ; rtDW . mx04nd152z . RSimInfoPtr = fromwksInfo ; } rtDW
. pxh3rjh5u4 . PrevIndex = 0 ; { int_T * zcTimeIndices = & rtDW . nwblnammfm
[ 0 ] ; const double * timePoints = ( double * ) rtDW . mx04nd152z . TimePtr
; boolean_T justHadZcTime = false ; int_T zcIdx = 0 ; int_T i ; for ( i = 0 ;
i < 18 - 1 ; i ++ ) { if ( ! justHadZcTime && timePoints [ i ] == timePoints
[ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ; justHadZcTime = true ; } else
{ justHadZcTime = false ; } } rtDW . ed5n0ctaot = 0 ; } } MdlInitialize ( ) ;
} void MdlOutputs ( int_T tid ) { real_T pirnryq3pa [ 6 ] ; real_T lu1cdrstg2
[ 6 ] ; real_T dyxx1pp3kp [ 3 ] ; real_T hln3i0rh4z [ 6 ] ; real_T j3z4qcoslp
[ 6 ] ; NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_p ; real_T y_o_cl_integral [ 96 ]
; real_T tmp_e [ 66 ] ; real_T tmp [ 48 ] ; real_T wrench_rotation [ 36 ] ;
real_T b_y_p [ 18 ] ; real_T d_y [ 18 ] ; real_T tmp_d [ 18 ] ; real_T tmp_l
[ 18 ] ; real_T c_a [ 16 ] ; real_T d_a [ 16 ] ; real_T mat_sum [ 16 ] ;
real_T dxe44gcpd2 [ 12 ] ; real_T i3cwcxzojw [ 12 ] ; real_T I_p [ 9 ] ;
real_T b_output [ 9 ] ; real_T c_y [ 9 ] ; real_T dt_p [ 9 ] ; real_T output
[ 9 ] ; real_T tmp_b [ 9 ] ; real_T tmp_c [ 9 ] ; real_T tmp_f [ 9 ] ; real_T
tmp_g [ 9 ] ; real_T tmp_j [ 9 ] ; real_T tmp_k [ 9 ] ; real_T tmp_n [ 9 ] ;
real_T hpzn0awww5 [ 6 ] ; real_T s [ 6 ] ; real_T wrench_1 [ 6 ] ; real_T
wrench_2 [ 6 ] ; real_T tmp_m [ 4 ] ; real_T a [ 3 ] ; real_T ad [ 3 ] ;
real_T ald [ 3 ] ; real_T alpha_r [ 3 ] ; real_T b_y [ 3 ] ; real_T v [ 3 ] ;
real_T v_t [ 3 ] ; real_T vd [ 3 ] ; real_T w [ 3 ] ; real_T wd [ 3 ] ;
real_T we [ 3 ] ; real_T x_t [ 3 ] ; real_T c01pxzotzo ; real_T dt ; real_T
gkxvxufpfw ; real_T jq3k1seksm ; real_T moha0odwbw ; real_T n3odybx5hp ;
real_T ocx5tbb4mc ; real_T output_idx_0 ; real_T output_idx_1 ; real_T
output_idx_2 ; real_T time ; real_T time_p ; real_T v_t_p ; int32_T b_xj ;
int32_T i ; int32_T xoffset ; int_T tmp_i [ 14 ] ; int_T tmp_p [ 13 ] ;
boolean_T first_output ; static const int8_T b_b [ 9 ] = { 1 , 0 , 0 , 0 , 1
, 0 , 0 , 0 , 1 } ; static const real_T b [ 9 ] = { 0.0133333 , 0.0 , 0.0 ,
0.0 , 0.113333 , 0.0 , 0.0 , 0.0 , 0.113333 } ; static const real_T G [ 3 ] =
{ 0.0 , 0.0 , - 9.80665 } ; static const int8_T c_a_p [ 256 ] = { 2 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static const real_T d_a_p [ 256 ] = { - 0.05 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 }
; static const int8_T b_a [ 36 ] = { - 1 , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 ,
0 , 0 , 0 , 0 , 0 , - 20 , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 , 0 , 0 , 0 , 0 ,
0 , - 1 , 0 , 0 , 0 , 0 , 0 , 0 , - 1 } ; { real_T * pDataValues = ( real_T *
) rtDW . factggsf10 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
factggsf10 . TimePtr ; int_T currTimeIndex = rtDW . gfnv1aupmz . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . factggsf10 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . gfnv1aupmz . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB . e5ryewx4xp [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB . e5ryewx4xp
[ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . cbdib2svjf [ 0 ] ; int_T * zcTimeIndicesIdx = & rtDW
. isi3qqu4qf ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
numZcTimes = 119 ; if ( * zcTimeIndicesIdx < numZcTimes ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [ zcIdx ] ) { while ( *
zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t > pTimeValues [ zcIdx ] ) ) { (
* zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; } }
} else { if ( t >= pTimeValues [ zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) <
pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) {
TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 = pTimeValues [ zcIdx - 1 ] ;
TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } }
} { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { d1 = pDataValues
[ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 =
d1 ; } ( & rtB . e5ryewx4xp [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T *
pDataValues = ( real_T * ) rtDW . hir5izsswk . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . hir5izsswk . TimePtr ; int_T currTimeIndex = rtDW .
fq2wjlgbnm . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . hir5izsswk .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . fq2wjlgbnm . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB . ocwp35u3pk [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } }
} else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & rtB .
ocwp35u3pk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ;
pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1
) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . d0jyhdhshq [ 0 ] ; int_T *
zcTimeIndicesIdx = & rtDW . g50wjgttgc ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 79 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ;
++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex +
1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB . ocwp35u3pk [ 0 ] ) [ elIdx ]
= ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ;
} } } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { ocx5tbb4mc = rtDW .
meaqqr1ua3 ; c01pxzotzo = rtDW . ieis3wdkcc ; gkxvxufpfw = rtDW . nsbswzebrn
; rtB . jodlsffaav [ 0 ] = rtDW . meaqqr1ua3 + rtP . Bias_Value [ 0 ] ; rtB .
jodlsffaav [ 1 ] = rtDW . ieis3wdkcc + rtP . Bias_Value [ 1 ] ; rtB .
jodlsffaav [ 2 ] = rtDW . nsbswzebrn + rtP . Bias_Value [ 2 ] ; rtB .
cjjpsdh0ci = rtDW . ftmzzvbzax ; rtB . e1iv3qcjfw = rtDW . lajwkf5yel ; rtB .
f21sygsmjw = rtDW . kf54lrgsgh ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
pcpgrvhkl5 ( rtB . jodlsffaav , rtB . cjjpsdh0ci , rtB . e1iv3qcjfw , rtB .
f21sygsmjw , & rtB . flhn5odxwk , & rtDW . flhn5odxwk ) ; for ( i = 0 ; i < 6
; i ++ ) { pirnryq3pa [ i ] = rtDW . jb4linf121 [ i ] ; } e12xzvaqlr ( rtB .
flhn5odxwk . jeolgcmssj , rtP . Constant_Value_gzdzpzihxe , pirnryq3pa , &
rtB . e12xzvaqlra , & rtDW . e12xzvaqlra ) ; } if ( ssIsMajorTimeStep ( rtS )
) { rtDW . jwb0edvt43 = rtB . e12xzvaqlra . alhmufu0yv [ 2 ] ; } if ( rtDW .
j4ijkjeaiu == 0.0 ) { rtDW . j4ijkjeaiu = 1.0 ; rtX . lpairqjonl [ 0 ] = rtDW
. jwb0edvt43 ; rtX . lpairqjonl [ 1 ] = 0.0 ; } rtB . itk1tzd05y [ 0 ] = rtX
. lpairqjonl [ 0 ] ; rtB . itk1tzd05y [ 1 ] = rtX . lpairqjonl [ 1 ] ; rtB .
itk1tzd05y [ 2 ] = ( ( rtDW . jwb0edvt43 - rtX . lpairqjonl [ 0 ] ) * 1000.0
- 2.0 * rtX . lpairqjonl [ 1 ] ) * 1000.0 ; rtB . itk1tzd05y [ 3 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . ipny03bssk = rtB . e12xzvaqlra .
alhmufu0yv [ 1 ] ; } if ( rtDW . lcdwdtjwnt == 0.0 ) { rtDW . lcdwdtjwnt =
1.0 ; rtX . fh5i13vgil [ 0 ] = rtDW . ipny03bssk ; rtX . fh5i13vgil [ 1 ] =
0.0 ; } rtB . cgdw5usgs2 [ 0 ] = rtX . fh5i13vgil [ 0 ] ; rtB . cgdw5usgs2 [
1 ] = rtX . fh5i13vgil [ 1 ] ; rtB . cgdw5usgs2 [ 2 ] = ( ( rtDW . ipny03bssk
- rtX . fh5i13vgil [ 0 ] ) * 1000.0 - 2.0 * rtX . fh5i13vgil [ 1 ] ) * 1000.0
; rtB . cgdw5usgs2 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
c1tuvnswoj = rtB . e12xzvaqlra . alhmufu0yv [ 0 ] ; } if ( rtDW . bmfwcfe3zy
== 0.0 ) { rtDW . bmfwcfe3zy = 1.0 ; rtX . fg3lujycqi [ 0 ] = rtDW .
c1tuvnswoj ; rtX . fg3lujycqi [ 1 ] = 0.0 ; } rtB . fodbt3qoit [ 0 ] = rtX .
fg3lujycqi [ 0 ] ; rtB . fodbt3qoit [ 1 ] = rtX . fg3lujycqi [ 1 ] ; rtB .
fodbt3qoit [ 2 ] = ( ( rtDW . c1tuvnswoj - rtX . fg3lujycqi [ 0 ] ) * 1000.0
- 2.0 * rtX . fg3lujycqi [ 1 ] ) * 1000.0 ; rtB . fodbt3qoit [ 3 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . lccx42ungl = rtB . e12xzvaqlra .
alhmufu0yv [ 3 ] ; } if ( rtDW . csttssg2jj == 0.0 ) { rtDW . csttssg2jj =
1.0 ; rtX . h52fy5njki [ 0 ] = rtDW . lccx42ungl ; rtX . h52fy5njki [ 1 ] =
0.0 ; } rtB . arfjjmxolk [ 0 ] = rtX . h52fy5njki [ 0 ] ; rtB . arfjjmxolk [
1 ] = rtX . h52fy5njki [ 1 ] ; rtB . arfjjmxolk [ 2 ] = ( ( rtDW . lccx42ungl
- rtX . h52fy5njki [ 0 ] ) * 1000.0 - 2.0 * rtX . h52fy5njki [ 1 ] ) * 1000.0
; rtB . arfjjmxolk [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
bafnhq4yd3 = rtB . e12xzvaqlra . alhmufu0yv [ 4 ] ; } if ( rtDW . ls50tk5yor
== 0.0 ) { rtDW . ls50tk5yor = 1.0 ; rtX . nljb50mtnx [ 0 ] = rtDW .
bafnhq4yd3 ; rtX . nljb50mtnx [ 1 ] = 0.0 ; } rtB . hnth4pq521 [ 0 ] = rtX .
nljb50mtnx [ 0 ] ; rtB . hnth4pq521 [ 1 ] = rtX . nljb50mtnx [ 1 ] ; rtB .
hnth4pq521 [ 2 ] = ( ( rtDW . bafnhq4yd3 - rtX . nljb50mtnx [ 0 ] ) * 1000.0
- 2.0 * rtX . nljb50mtnx [ 1 ] ) * 1000.0 ; rtB . hnth4pq521 [ 3 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . l4isjnnapb = rtB . e12xzvaqlra .
alhmufu0yv [ 5 ] ; } if ( rtDW . cm2ish3fp4 == 0.0 ) { rtDW . cm2ish3fp4 =
1.0 ; rtX . kpgc53iylb [ 0 ] = rtDW . l4isjnnapb ; rtX . kpgc53iylb [ 1 ] =
0.0 ; } rtB . lktiyc0abo [ 0 ] = rtX . kpgc53iylb [ 0 ] ; rtB . lktiyc0abo [
1 ] = rtX . kpgc53iylb [ 1 ] ; rtB . lktiyc0abo [ 2 ] = ( ( rtDW . l4isjnnapb
- rtX . kpgc53iylb [ 0 ] ) * 1000.0 - 2.0 * rtX . kpgc53iylb [ 1 ] ) * 1000.0
; rtB . lktiyc0abo [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
n3odybx5hp = rtDW . lwjbyb5hax ; jq3k1seksm = rtDW . iyyt53kmyv ; moha0odwbw
= rtDW . domwprwtea ; rtB . lqhmzc4iyx [ 0 ] = - rtDW . lwjbyb5hax + rtP .
Bias_Value_faygct0s2b [ 0 ] ; rtB . lqhmzc4iyx [ 1 ] = - rtDW . iyyt53kmyv +
rtP . Bias_Value_faygct0s2b [ 1 ] ; rtB . lqhmzc4iyx [ 2 ] = rtDW .
domwprwtea + rtP . Bias_Value_faygct0s2b [ 2 ] ; rtB . gms5jrejo1 = rtDW .
hw4jmko5ut ; rtB . o3esw0pawl = - rtB . gms5jrejo1 ; rtB . g1ivuzn5or = rtDW
. dlylyzqh44 ; rtB . ar4x41ndqa = - rtB . g1ivuzn5or ; rtB . golkvscg5k =
rtDW . d1vruvafzv ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { pcpgrvhkl5 ( rtB
. lqhmzc4iyx , rtB . o3esw0pawl , rtB . ar4x41ndqa , rtB . golkvscg5k , & rtB
. fcodrholju , & rtDW . fcodrholju ) ; for ( i = 0 ; i < 6 ; i ++ ) {
lu1cdrstg2 [ i ] = rtDW . g2tsjufkz5 [ i ] ; } e12xzvaqlr ( rtB . fcodrholju
. jeolgcmssj , rtP . Constant_Value_f1t4kl0x5v , lu1cdrstg2 , & rtB .
g25aonyhee , & rtDW . g25aonyhee ) ; } if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . p4axc0cn0o = rtB . g25aonyhee . alhmufu0yv [ 2 ] ; } if ( rtDW .
jwqmhs0s0n == 0.0 ) { rtDW . jwqmhs0s0n = 1.0 ; rtX . jwl1hig4sv [ 0 ] = rtDW
. p4axc0cn0o ; rtX . jwl1hig4sv [ 1 ] = 0.0 ; } rtB . gge2baxpst [ 0 ] = rtX
. jwl1hig4sv [ 0 ] ; rtB . gge2baxpst [ 1 ] = rtX . jwl1hig4sv [ 1 ] ; rtB .
gge2baxpst [ 2 ] = ( ( rtDW . p4axc0cn0o - rtX . jwl1hig4sv [ 0 ] ) * 1000.0
- 2.0 * rtX . jwl1hig4sv [ 1 ] ) * 1000.0 ; rtB . gge2baxpst [ 3 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . pabqpgk5jq = rtB . g25aonyhee .
alhmufu0yv [ 1 ] ; } if ( rtDW . enkp2q4jgz == 0.0 ) { rtDW . enkp2q4jgz =
1.0 ; rtX . pjflr3aosk [ 0 ] = rtDW . pabqpgk5jq ; rtX . pjflr3aosk [ 1 ] =
0.0 ; } rtB . pyqiljkwsr [ 0 ] = rtX . pjflr3aosk [ 0 ] ; rtB . pyqiljkwsr [
1 ] = rtX . pjflr3aosk [ 1 ] ; rtB . pyqiljkwsr [ 2 ] = ( ( rtDW . pabqpgk5jq
- rtX . pjflr3aosk [ 0 ] ) * 1000.0 - 2.0 * rtX . pjflr3aosk [ 1 ] ) * 1000.0
; rtB . pyqiljkwsr [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ondxfnv25y = rtB . g25aonyhee . alhmufu0yv [ 0 ] ; } if ( rtDW . mcdurxpqfs
== 0.0 ) { rtDW . mcdurxpqfs = 1.0 ; rtX . gasvzlyrg1 [ 0 ] = rtDW .
ondxfnv25y ; rtX . gasvzlyrg1 [ 1 ] = 0.0 ; } rtB . hwb0fhnhyj [ 0 ] = rtX .
gasvzlyrg1 [ 0 ] ; rtB . hwb0fhnhyj [ 1 ] = rtX . gasvzlyrg1 [ 1 ] ; rtB .
hwb0fhnhyj [ 2 ] = ( ( rtDW . ondxfnv25y - rtX . gasvzlyrg1 [ 0 ] ) * 1000.0
- 2.0 * rtX . gasvzlyrg1 [ 1 ] ) * 1000.0 ; rtB . hwb0fhnhyj [ 3 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . dnzas3pxcw = rtB . g25aonyhee .
alhmufu0yv [ 3 ] ; } if ( rtDW . oghejnwob3 == 0.0 ) { rtDW . oghejnwob3 =
1.0 ; rtX . pwmx2sn23r [ 0 ] = rtDW . dnzas3pxcw ; rtX . pwmx2sn23r [ 1 ] =
0.0 ; } rtB . kay4eihbv3 [ 0 ] = rtX . pwmx2sn23r [ 0 ] ; rtB . kay4eihbv3 [
1 ] = rtX . pwmx2sn23r [ 1 ] ; rtB . kay4eihbv3 [ 2 ] = ( ( rtDW . dnzas3pxcw
- rtX . pwmx2sn23r [ 0 ] ) * 1000.0 - 2.0 * rtX . pwmx2sn23r [ 1 ] ) * 1000.0
; rtB . kay4eihbv3 [ 3 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
l1vruekg2n = rtB . g25aonyhee . alhmufu0yv [ 4 ] ; } if ( rtDW . la42o3xgh0
== 0.0 ) { rtDW . la42o3xgh0 = 1.0 ; rtX . egdystg2ir [ 0 ] = rtDW .
l1vruekg2n ; rtX . egdystg2ir [ 1 ] = 0.0 ; } rtB . n12tcfek0v [ 0 ] = rtX .
egdystg2ir [ 0 ] ; rtB . n12tcfek0v [ 1 ] = rtX . egdystg2ir [ 1 ] ; rtB .
n12tcfek0v [ 2 ] = ( ( rtDW . l1vruekg2n - rtX . egdystg2ir [ 0 ] ) * 1000.0
- 2.0 * rtX . egdystg2ir [ 1 ] ) * 1000.0 ; rtB . n12tcfek0v [ 3 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . mbg4rkv5jx = rtB . g25aonyhee .
alhmufu0yv [ 5 ] ; } if ( rtDW . cvogulxpog == 0.0 ) { rtDW . cvogulxpog =
1.0 ; rtX . ifhvvpi2pj [ 0 ] = rtDW . mbg4rkv5jx ; rtX . ifhvvpi2pj [ 1 ] =
0.0 ; } rtB . j3iozjgadg [ 0 ] = rtX . ifhvvpi2pj [ 0 ] ; rtB . j3iozjgadg [
1 ] = rtX . ifhvvpi2pj [ 1 ] ; rtB . j3iozjgadg [ 2 ] = ( ( rtDW . mbg4rkv5jx
- rtX . ifhvvpi2pj [ 0 ] ) * 1000.0 - 2.0 * rtX . ifhvvpi2pj [ 1 ] ) * 1000.0
; rtB . j3iozjgadg [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * )
rtDW . pwa0n2fnbt ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 18 ; simulationData -> mData -> mContStates . mX
= & rtX . iwaxtr5iwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . hocn5gpqnf ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . fkrpan2ou1 ; first_output = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ; tmp [ 0 ]
= rtB . itk1tzd05y [ 0 ] ; tmp [ 1 ] = rtB . itk1tzd05y [ 1 ] ; tmp [ 2 ] =
rtB . itk1tzd05y [ 2 ] ; tmp [ 3 ] = rtB . itk1tzd05y [ 3 ] ; tmp_p [ 1 ] = 4
; tmp [ 4 ] = rtB . cgdw5usgs2 [ 0 ] ; tmp [ 5 ] = rtB . cgdw5usgs2 [ 1 ] ;
tmp [ 6 ] = rtB . cgdw5usgs2 [ 2 ] ; tmp [ 7 ] = rtB . cgdw5usgs2 [ 3 ] ;
tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB . fodbt3qoit [ 0 ] ; tmp [ 9 ] = rtB .
fodbt3qoit [ 1 ] ; tmp [ 10 ] = rtB . fodbt3qoit [ 2 ] ; tmp [ 11 ] = rtB .
fodbt3qoit [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . arfjjmxolk [ 0 ] ;
tmp [ 13 ] = rtB . arfjjmxolk [ 1 ] ; tmp [ 14 ] = rtB . arfjjmxolk [ 2 ] ;
tmp [ 15 ] = rtB . arfjjmxolk [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB .
hnth4pq521 [ 0 ] ; tmp [ 17 ] = rtB . hnth4pq521 [ 1 ] ; tmp [ 18 ] = rtB .
hnth4pq521 [ 2 ] ; tmp [ 19 ] = rtB . hnth4pq521 [ 3 ] ; tmp_p [ 5 ] = 20 ;
tmp [ 20 ] = rtB . lktiyc0abo [ 0 ] ; tmp [ 21 ] = rtB . lktiyc0abo [ 1 ] ;
tmp [ 22 ] = rtB . lktiyc0abo [ 2 ] ; tmp [ 23 ] = rtB . lktiyc0abo [ 3 ] ;
tmp_p [ 6 ] = 24 ; tmp [ 24 ] = rtB . gge2baxpst [ 0 ] ; tmp [ 25 ] = rtB .
gge2baxpst [ 1 ] ; tmp [ 26 ] = rtB . gge2baxpst [ 2 ] ; tmp [ 27 ] = rtB .
gge2baxpst [ 3 ] ; tmp_p [ 7 ] = 28 ; tmp [ 28 ] = rtB . pyqiljkwsr [ 0 ] ;
tmp [ 29 ] = rtB . pyqiljkwsr [ 1 ] ; tmp [ 30 ] = rtB . pyqiljkwsr [ 2 ] ;
tmp [ 31 ] = rtB . pyqiljkwsr [ 3 ] ; tmp_p [ 8 ] = 32 ; tmp [ 32 ] = rtB .
hwb0fhnhyj [ 0 ] ; tmp [ 33 ] = rtB . hwb0fhnhyj [ 1 ] ; tmp [ 34 ] = rtB .
hwb0fhnhyj [ 2 ] ; tmp [ 35 ] = rtB . hwb0fhnhyj [ 3 ] ; tmp_p [ 9 ] = 36 ;
tmp [ 36 ] = rtB . kay4eihbv3 [ 0 ] ; tmp [ 37 ] = rtB . kay4eihbv3 [ 1 ] ;
tmp [ 38 ] = rtB . kay4eihbv3 [ 2 ] ; tmp [ 39 ] = rtB . kay4eihbv3 [ 3 ] ;
tmp_p [ 10 ] = 40 ; tmp [ 40 ] = rtB . n12tcfek0v [ 0 ] ; tmp [ 41 ] = rtB .
n12tcfek0v [ 1 ] ; tmp [ 42 ] = rtB . n12tcfek0v [ 2 ] ; tmp [ 43 ] = rtB .
n12tcfek0v [ 3 ] ; tmp_p [ 11 ] = 44 ; tmp [ 44 ] = rtB . j3iozjgadg [ 0 ] ;
tmp [ 45 ] = rtB . j3iozjgadg [ 1 ] ; tmp [ 46 ] = rtB . j3iozjgadg [ 2 ] ;
tmp [ 47 ] = rtB . j3iozjgadg [ 3 ] ; tmp_p [ 12 ] = 48 ; simulationData ->
mData -> mInputValues . mN = 48 ; simulationData -> mData -> mInputValues .
mX = & tmp [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 13 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 18 ; simulationData -> mData ->
mOutputs . mX = & rtB . pcwdl5jswd [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . a5nq0aeena ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . ppxvh3soys ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . lcth0eskrc ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . lpz0yfj0uv ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ce5lqmurvv ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
simulationData -> mData -> mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ;
tmp_i [ 0 ] = 0 ; tmp_e [ 0 ] = rtB . itk1tzd05y [ 0 ] ; tmp_e [ 1 ] = rtB .
itk1tzd05y [ 1 ] ; tmp_e [ 2 ] = rtB . itk1tzd05y [ 2 ] ; tmp_e [ 3 ] = rtB .
itk1tzd05y [ 3 ] ; tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] = rtB . cgdw5usgs2 [ 0 ] ;
tmp_e [ 5 ] = rtB . cgdw5usgs2 [ 1 ] ; tmp_e [ 6 ] = rtB . cgdw5usgs2 [ 2 ] ;
tmp_e [ 7 ] = rtB . cgdw5usgs2 [ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB .
fodbt3qoit [ 0 ] ; tmp_e [ 9 ] = rtB . fodbt3qoit [ 1 ] ; tmp_e [ 10 ] = rtB
. fodbt3qoit [ 2 ] ; tmp_e [ 11 ] = rtB . fodbt3qoit [ 3 ] ; tmp_i [ 3 ] = 12
; tmp_e [ 12 ] = rtB . arfjjmxolk [ 0 ] ; tmp_e [ 13 ] = rtB . arfjjmxolk [ 1
] ; tmp_e [ 14 ] = rtB . arfjjmxolk [ 2 ] ; tmp_e [ 15 ] = rtB . arfjjmxolk [
3 ] ; tmp_i [ 4 ] = 16 ; tmp_e [ 16 ] = rtB . hnth4pq521 [ 0 ] ; tmp_e [ 17 ]
= rtB . hnth4pq521 [ 1 ] ; tmp_e [ 18 ] = rtB . hnth4pq521 [ 2 ] ; tmp_e [ 19
] = rtB . hnth4pq521 [ 3 ] ; tmp_i [ 5 ] = 20 ; tmp_e [ 20 ] = rtB .
lktiyc0abo [ 0 ] ; tmp_e [ 21 ] = rtB . lktiyc0abo [ 1 ] ; tmp_e [ 22 ] = rtB
. lktiyc0abo [ 2 ] ; tmp_e [ 23 ] = rtB . lktiyc0abo [ 3 ] ; tmp_i [ 6 ] = 24
; tmp_e [ 24 ] = rtB . gge2baxpst [ 0 ] ; tmp_e [ 25 ] = rtB . gge2baxpst [ 1
] ; tmp_e [ 26 ] = rtB . gge2baxpst [ 2 ] ; tmp_e [ 27 ] = rtB . gge2baxpst [
3 ] ; tmp_i [ 7 ] = 28 ; tmp_e [ 28 ] = rtB . pyqiljkwsr [ 0 ] ; tmp_e [ 29 ]
= rtB . pyqiljkwsr [ 1 ] ; tmp_e [ 30 ] = rtB . pyqiljkwsr [ 2 ] ; tmp_e [ 31
] = rtB . pyqiljkwsr [ 3 ] ; tmp_i [ 8 ] = 32 ; tmp_e [ 32 ] = rtB .
hwb0fhnhyj [ 0 ] ; tmp_e [ 33 ] = rtB . hwb0fhnhyj [ 1 ] ; tmp_e [ 34 ] = rtB
. hwb0fhnhyj [ 2 ] ; tmp_e [ 35 ] = rtB . hwb0fhnhyj [ 3 ] ; tmp_i [ 9 ] = 36
; tmp_e [ 36 ] = rtB . kay4eihbv3 [ 0 ] ; tmp_e [ 37 ] = rtB . kay4eihbv3 [ 1
] ; tmp_e [ 38 ] = rtB . kay4eihbv3 [ 2 ] ; tmp_e [ 39 ] = rtB . kay4eihbv3 [
3 ] ; tmp_i [ 10 ] = 40 ; tmp_e [ 40 ] = rtB . n12tcfek0v [ 0 ] ; tmp_e [ 41
] = rtB . n12tcfek0v [ 1 ] ; tmp_e [ 42 ] = rtB . n12tcfek0v [ 2 ] ; tmp_e [
43 ] = rtB . n12tcfek0v [ 3 ] ; tmp_i [ 11 ] = 44 ; tmp_e [ 44 ] = rtB .
j3iozjgadg [ 0 ] ; tmp_e [ 45 ] = rtB . j3iozjgadg [ 1 ] ; tmp_e [ 46 ] = rtB
. j3iozjgadg [ 2 ] ; tmp_e [ 47 ] = rtB . j3iozjgadg [ 3 ] ; tmp_i [ 12 ] =
48 ; memcpy ( & tmp_e [ 48 ] , & rtB . pcwdl5jswd [ 0 ] , 18U * sizeof (
real_T ) ) ; tmp_i [ 13 ] = 66 ; simulationData -> mData -> mInputValues . mN
= 66 ; simulationData -> mData -> mInputValues . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 14 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_i [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 40 ; simulationData -> mData -> mOutputs . mX = & rtB . kxvph4adkr [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . f4dhncxa4g ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . jp125spiju ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . mz0hxgwqhl =
ssGetT ( rtS ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 6 ;
i ++ ) { i3cwcxzojw [ i ] = rtB . e5ryewx4xp [ i ] ; i3cwcxzojw [ i + 6 ] =
rtB . ocwp35u3pk [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { dxe44gcpd2 [ i ] =
rtB . kxvph4adkr [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { dxe44gcpd2 [ i + 6
] = rtB . kxvph4adkr [ i + 12 ] ; } if ( ! rtDW . afqg540hpl ) { output_idx_0
= ( rtP . Constant_Value [ 0 ] * rtP . Constant_Value [ 0 ] + rtP .
Constant_Value [ 1 ] * rtP . Constant_Value [ 1 ] ) + rtP . Constant_Value [
2 ] * rtP . Constant_Value [ 2 ] ; for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) {
dt_p [ 3 * b_xj ] = ( real_T ) b_b [ 3 * b_xj ] * output_idx_0 - rtP .
Constant_Value [ 0 ] * rtP . Constant_Value [ b_xj ] ; dt_p [ 3 * b_xj + 1 ]
= ( real_T ) b_b [ 3 * b_xj + 1 ] * output_idx_0 - rtP . Constant_Value [ 1 ]
* rtP . Constant_Value [ b_xj ] ; dt_p [ 3 * b_xj + 2 ] = ( real_T ) b_b [ 3
* b_xj + 2 ] * output_idx_0 - rtP . Constant_Value [ 2 ] * rtP .
Constant_Value [ b_xj ] ; } for ( b_xj = 0 ; b_xj < 9 ; b_xj ++ ) { I_p [
b_xj ] = 2.0 * dt_p [ b_xj ] + b [ b_xj ] ; } rtDW . ocqk3jofvr [ 0 ] = 2.0 ;
rtDW . ocqk3jofvr [ 4 ] = I_p [ 0 ] ; rtDW . ocqk3jofvr [ 5 ] = I_p [ 1 ] ;
rtDW . ocqk3jofvr [ 6 ] = I_p [ 2 ] ; rtDW . ocqk3jofvr [ 7 ] = I_p [ 4 ] ;
rtDW . ocqk3jofvr [ 8 ] = I_p [ 5 ] ; rtDW . ocqk3jofvr [ 9 ] = I_p [ 8 ] ;
rtDW . ocqk3jofvr [ 1 ] = 2.0 * rtP . Constant_Value [ 0 ] ; rtDW .
ocqk3jofvr [ 10 ] = - 0.4 - rtP . Constant_Value [ 0 ] ; rtDW . ocqk3jofvr [
13 ] = 0.4 - rtP . Constant_Value [ 0 ] ; rtDW . ocqk3jofvr [ 2 ] = 2.0 * rtP
. Constant_Value [ 1 ] ; rtDW . ocqk3jofvr [ 11 ] = 0.0 - rtP .
Constant_Value [ 1 ] ; rtDW . ocqk3jofvr [ 14 ] = 0.0 - rtP . Constant_Value
[ 1 ] ; rtDW . ocqk3jofvr [ 3 ] = 2.0 * rtP . Constant_Value [ 2 ] ; rtDW .
ocqk3jofvr [ 12 ] = 0.0 - rtP . Constant_Value [ 2 ] ; rtDW . ocqk3jofvr [ 15
] = 0.0 - rtP . Constant_Value [ 2 ] ; memcpy ( & rtDW . lvvl3bpreb [ 0 ] , &
rtDW . ocqk3jofvr [ 0 ] , sizeof ( real_T ) << 4U ) ; rtDW . lvvl3bpreb [ 0 ]
= 1.0 ; rtDW . pvpfr5em5t [ 0 ] = 0.875 + rtP . Constant_Value [ 0 ] ; rtDW .
pvpfr5em5t [ 1 ] = 0.1092 + rtP . Constant_Value [ 1 ] ; rtDW . pvpfr5em5t [
2 ] = 0.42 + rtP . Constant_Value [ 2 ] ; rtDW . afqg540hpl = true ; } memset
( & mat_sum [ 0 ] , 0 , sizeof ( real_T ) << 4U ) ; for ( i = 0 ; i < 6 ; i
++ ) { rtB . emkev14wx5 [ i ] = 0.0 ; } dt = rtB . mz0hxgwqhl - rtDW .
of0mgcawwf ; vd [ 0 ] = i3cwcxzojw [ 0 ] ; vd [ 1 ] = i3cwcxzojw [ 1 ] ; vd [
2 ] = i3cwcxzojw [ 2 ] ; ad [ 0 ] = i3cwcxzojw [ 3 ] ; ad [ 1 ] = i3cwcxzojw
[ 4 ] ; ad [ 2 ] = i3cwcxzojw [ 5 ] ; wd [ 0 ] = i3cwcxzojw [ 6 ] ; wd [ 1 ]
= i3cwcxzojw [ 7 ] ; wd [ 2 ] = i3cwcxzojw [ 8 ] ; tmp_m [ 0 ] = rtB .
kxvph4adkr [ 24 ] ; tmp_m [ 1 ] = rtB . kxvph4adkr [ 25 ] ; tmp_m [ 2 ] = rtB
. kxvph4adkr [ 26 ] ; tmp_m [ 3 ] = rtB . kxvph4adkr [ 27 ] ; i213kpnt2j (
tmp_m , rtB . ka2qvllgio ) ; w [ 0 ] = rtB . kxvph4adkr [ 28 ] ; w [ 1 ] =
rtB . kxvph4adkr [ 29 ] ; w [ 2 ] = rtB . kxvph4adkr [ 30 ] ; v [ 0 ] = rtB .
kxvph4adkr [ 34 ] ; v [ 1 ] = rtB . kxvph4adkr [ 35 ] ; v [ 2 ] = rtB .
kxvph4adkr [ 36 ] ; a [ 0 ] = rtB . kxvph4adkr [ 37 ] ; a [ 1 ] = rtB .
kxvph4adkr [ 38 ] ; a [ 2 ] = rtB . kxvph4adkr [ 39 ] ; for ( b_xj = 0 ; b_xj
< 3 ; b_xj ++ ) { wrench_rotation [ 6 * b_xj ] = rtB . ka2qvllgio [ 3 * b_xj
] ; wrench_rotation [ 6 * ( b_xj + 3 ) ] = 0.0 ; wrench_rotation [ 6 * b_xj +
3 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) + 3 ] = rtB . ka2qvllgio [ 3 *
b_xj ] ; wrench_rotation [ 6 * b_xj + 1 ] = rtB . ka2qvllgio [ 3 * b_xj + 1 ]
; wrench_rotation [ 6 * ( b_xj + 3 ) + 1 ] = 0.0 ; wrench_rotation [ 6 * b_xj
+ 4 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) + 4 ] = rtB . ka2qvllgio [ 3
* b_xj + 1 ] ; wrench_rotation [ 6 * b_xj + 2 ] = rtB . ka2qvllgio [ 3 * b_xj
+ 2 ] ; wrench_rotation [ 6 * ( b_xj + 3 ) + 2 ] = 0.0 ; wrench_rotation [ 6
* b_xj + 5 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) + 5 ] = rtB .
ka2qvllgio [ 3 * b_xj + 2 ] ; } s [ 0 ] = dxe44gcpd2 [ 0 ] ; s [ 1 ] =
dxe44gcpd2 [ 1 ] ; s [ 2 ] = dxe44gcpd2 [ 2 ] ; s [ 3 ] = dxe44gcpd2 [ 3 ] ;
s [ 4 ] = dxe44gcpd2 [ 4 ] ; s [ 5 ] = dxe44gcpd2 [ 5 ] ; hpzn0awww5 [ 0 ] =
dxe44gcpd2 [ 6 ] ; hpzn0awww5 [ 1 ] = dxe44gcpd2 [ 7 ] ; hpzn0awww5 [ 2 ] =
dxe44gcpd2 [ 8 ] ; hpzn0awww5 [ 3 ] = dxe44gcpd2 [ 9 ] ; hpzn0awww5 [ 4 ] =
dxe44gcpd2 [ 10 ] ; hpzn0awww5 [ 5 ] = dxe44gcpd2 [ 11 ] ; for ( b_xj = 0 ;
b_xj < 6 ; b_xj ++ ) { wrench_1 [ b_xj ] = 0.0 ; wrench_2 [ b_xj ] = 0.0 ;
for ( i = 0 ; i < 6 ; i ++ ) { wrench_1 [ b_xj ] += wrench_rotation [ 6 * i +
b_xj ] * s [ i ] ; wrench_2 [ b_xj ] += wrench_rotation [ 6 * i + b_xj ] *
hpzn0awww5 [ i ] ; } } for ( i = 0 ; i < 3 ; i ++ ) { for ( b_xj = 0 ; b_xj <
3 ; b_xj ++ ) { I_p [ i + 3 * b_xj ] = 0.0 ; I_p [ i + 3 * b_xj ] += rtDW .
kso5hmoa3x [ 3 * i ] * rtB . ka2qvllgio [ 3 * b_xj ] ; I_p [ i + 3 * b_xj ]
+= rtDW . kso5hmoa3x [ 3 * i + 1 ] * rtB . ka2qvllgio [ 3 * b_xj + 1 ] ; I_p
[ i + 3 * b_xj ] += rtDW . kso5hmoa3x [ 3 * i + 2 ] * rtB . ka2qvllgio [ 3 *
b_xj + 2 ] ; } we [ i ] = w [ i ] - wd [ i ] ; } for ( i = 0 ; i < 3 ; i ++ )
{ output [ 3 * i ] = ( I_p [ 3 * i ] - I_p [ i ] ) * 0.5 ; output [ 3 * i + 1
] = ( I_p [ 3 * i + 1 ] - I_p [ i + 3 ] ) * 0.5 ; output [ 3 * i + 2 ] = (
I_p [ 3 * i + 2 ] - I_p [ i + 6 ] ) * 0.5 ; v_t [ i ] = v [ i ] - vd [ i ] ;
} x_t [ 0 ] = rtB . kxvph4adkr [ 31 ] - rtDW . pvpfr5em5t [ 0 ] ; x_t [ 1 ] =
rtB . kxvph4adkr [ 32 ] - rtDW . pvpfr5em5t [ 1 ] ; x_t [ 2 ] = rtB .
kxvph4adkr [ 33 ] - rtDW . pvpfr5em5t [ 2 ] ; output_idx_0 = output [ 5 ] ;
output_idx_1 = output [ 6 ] ; output_idx_2 = output [ 1 ] ; for ( b_xj = 0 ;
b_xj < 3 ; b_xj ++ ) { s [ b_xj ] = 3.0 * x_t [ b_xj ] + v_t [ b_xj ] ;
output [ 3 * b_xj ] = ( I_p [ 3 * b_xj ] - I_p [ b_xj ] ) * 0.5 ; output [ 3
* b_xj + 1 ] = ( I_p [ 3 * b_xj + 1 ] - I_p [ b_xj + 3 ] ) * 0.5 ; output [ 3
* b_xj + 2 ] = ( I_p [ 3 * b_xj + 2 ] - I_p [ b_xj + 6 ] ) * 0.5 ; s [ b_xj +
3 ] = ( ( rtDW . kso5hmoa3x [ b_xj + 3 ] * 3.0 * output_idx_1 + 3.0 * rtDW .
kso5hmoa3x [ b_xj ] * output_idx_0 ) + rtDW . kso5hmoa3x [ b_xj + 6 ] * 3.0 *
output_idx_2 ) + we [ b_xj ] ; b_y [ b_xj ] = rtDW . kso5hmoa3x [ 3 * b_xj +
2 ] * we [ 2 ] + ( rtDW . kso5hmoa3x [ 3 * b_xj + 1 ] * we [ 1 ] + rtDW .
kso5hmoa3x [ 3 * b_xj ] * we [ 0 ] ) ; } dt_p [ 0 ] = 0.0 ; dt_p [ 3 ] = -
b_y [ 2 ] ; dt_p [ 6 ] = b_y [ 1 ] ; dt_p [ 1 ] = b_y [ 2 ] ; dt_p [ 4 ] =
0.0 ; dt_p [ 7 ] = - b_y [ 0 ] ; dt_p [ 2 ] = - b_y [ 1 ] ; dt_p [ 5 ] = b_y
[ 0 ] ; dt_p [ 8 ] = 0.0 ; for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { for ( i =
0 ; i < 3 ; i ++ ) { c_y [ i + 3 * b_xj ] = 0.0 ; c_y [ i + 3 * b_xj ] += I_p
[ 3 * b_xj ] * dt_p [ i ] ; c_y [ i + 3 * b_xj ] += I_p [ 3 * b_xj + 1 ] *
dt_p [ i + 3 ] ; c_y [ i + 3 * b_xj ] += I_p [ 3 * b_xj + 2 ] * dt_p [ i + 6
] ; } } dt_p [ 0 ] = 0.0 ; dt_p [ 3 ] = 3.0 * - i3cwcxzojw [ 8 ] ; dt_p [ 6 ]
= 3.0 * i3cwcxzojw [ 7 ] ; dt_p [ 1 ] = 3.0 * i3cwcxzojw [ 8 ] ; dt_p [ 4 ] =
0.0 ; dt_p [ 7 ] = 3.0 * - i3cwcxzojw [ 6 ] ; dt_p [ 2 ] = 3.0 * - i3cwcxzojw
[ 7 ] ; dt_p [ 5 ] = 3.0 * i3cwcxzojw [ 6 ] ; dt_p [ 8 ] = 0.0 ; alpha_r [ 0
] = output [ 5 ] ; alpha_r [ 1 ] = output [ 6 ] ; alpha_r [ 2 ] = output [ 1
] ; b_y [ 0 ] = i3cwcxzojw [ 9 ] ; b_y [ 1 ] = i3cwcxzojw [ 10 ] ; b_y [ 2 ]
= i3cwcxzojw [ 11 ] ; for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { we [ b_xj ] =
0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { b_output [ i + 3 * b_xj ] = ( c_y [ 3 *
b_xj + i ] - c_y [ 3 * i + b_xj ] ) * 0.5 ; output [ b_xj + 3 * i ] = 0.0 ;
output [ b_xj + 3 * i ] += rtDW . kso5hmoa3x [ 3 * i ] * dt_p [ b_xj ] ;
output [ b_xj + 3 * i ] += rtDW . kso5hmoa3x [ 3 * i + 1 ] * dt_p [ b_xj + 3
] ; output [ b_xj + 3 * i ] += rtDW . kso5hmoa3x [ 3 * i + 2 ] * dt_p [ b_xj
+ 6 ] ; we [ b_xj ] += output [ 3 * i + b_xj ] * alpha_r [ i ] ; } }
output_idx_0 = b_output [ 5 ] ; output_idx_1 = b_output [ 6 ] ; output_idx_2
= b_output [ 1 ] ; for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { output [ 3 * b_xj
] = ( I_p [ 3 * b_xj ] - I_p [ b_xj ] ) * 0.5 ; output [ 3 * b_xj + 1 ] = (
I_p [ 3 * b_xj + 1 ] - I_p [ b_xj + 3 ] ) * 0.5 ; output [ 3 * b_xj + 2 ] = (
I_p [ 3 * b_xj + 2 ] - I_p [ b_xj + 6 ] ) * 0.5 ; alpha_r [ b_xj ] = ( b_y [
b_xj ] - we [ b_xj ] ) - ( ( rtDW . kso5hmoa3x [ b_xj + 3 ] * 3.0 *
output_idx_1 + 3.0 * rtDW . kso5hmoa3x [ b_xj ] * output_idx_0 ) + rtDW .
kso5hmoa3x [ b_xj + 6 ] * 3.0 * output_idx_2 ) ; } output_idx_0 = output [ 5
] ; output_idx_1 = output [ 6 ] ; output_idx_2 = output [ 1 ] ; for ( i = 0 ;
i < 3 ; i ++ ) { v_t_p = ad [ i ] - 3.0 * v_t [ i ] ; ald [ i ] = v_t_p - G [
i ] ; we [ i ] = wd [ i ] - ( ( rtDW . kso5hmoa3x [ i + 3 ] * 3.0 *
output_idx_1 + 3.0 * rtDW . kso5hmoa3x [ i ] * output_idx_0 ) + rtDW .
kso5hmoa3x [ i + 6 ] * 3.0 * output_idx_2 ) ; v_t [ i ] = v_t_p ; b_y [ i ] =
rtB . ka2qvllgio [ 3 * i + 2 ] * alpha_r [ 2 ] + ( rtB . ka2qvllgio [ 3 * i +
1 ] * alpha_r [ 1 ] + rtB . ka2qvllgio [ 3 * i ] * alpha_r [ 0 ] ) ; x_t [ i
] = vd [ i ] - 3.0 * x_t [ i ] ; } dt_p [ 0 ] = - 0.0 ; dt_p [ 3 ] = alpha_r
[ 2 ] ; dt_p [ 6 ] = - alpha_r [ 1 ] ; dt_p [ 1 ] = - alpha_r [ 2 ] ; dt_p [
4 ] = - 0.0 ; dt_p [ 7 ] = alpha_r [ 0 ] ; dt_p [ 2 ] = alpha_r [ 1 ] ; dt_p
[ 5 ] = - alpha_r [ 0 ] ; dt_p [ 8 ] = - 0.0 ; output [ 0 ] = 0.0 ; output [
3 ] = - w [ 2 ] ; output [ 6 ] = w [ 1 ] ; output [ 1 ] = w [ 2 ] ; output [
4 ] = 0.0 ; output [ 7 ] = - w [ 0 ] ; output [ 2 ] = - w [ 1 ] ; output [ 5
] = w [ 0 ] ; output [ 8 ] = 0.0 ; I_p [ 0 ] = 0.0 ; I_p [ 3 ] = - we [ 2 ] ;
I_p [ 6 ] = we [ 1 ] ; I_p [ 1 ] = we [ 2 ] ; I_p [ 4 ] = 0.0 ; I_p [ 7 ] = -
we [ 0 ] ; I_p [ 2 ] = - we [ 1 ] ; I_p [ 5 ] = we [ 0 ] ; I_p [ 8 ] = 0.0 ;
tmp_j [ 0 ] = 0.0 ; tmp_j [ 3 ] = - ald [ 2 ] ; tmp_j [ 6 ] = ald [ 1 ] ;
tmp_j [ 1 ] = ald [ 2 ] ; tmp_j [ 4 ] = 0.0 ; tmp_j [ 7 ] = - ald [ 0 ] ;
tmp_j [ 2 ] = - ald [ 1 ] ; tmp_j [ 5 ] = ald [ 0 ] ; tmp_j [ 8 ] = 0.0 ;
tmp_f [ 0 ] = 0.0 ; tmp_f [ 3 ] = - w [ 2 ] ; tmp_f [ 6 ] = w [ 1 ] ; tmp_f [
1 ] = w [ 2 ] ; tmp_f [ 4 ] = 0.0 ; tmp_f [ 7 ] = - w [ 0 ] ; tmp_f [ 2 ] = -
w [ 1 ] ; tmp_f [ 5 ] = w [ 0 ] ; tmp_f [ 8 ] = 0.0 ; tmp_c [ 0 ] = 0.0 ;
tmp_c [ 3 ] = - x_t [ 2 ] ; tmp_c [ 6 ] = x_t [ 1 ] ; tmp_c [ 1 ] = x_t [ 2 ]
; tmp_c [ 4 ] = 0.0 ; tmp_c [ 7 ] = - x_t [ 0 ] ; tmp_c [ 2 ] = - x_t [ 1 ] ;
tmp_c [ 5 ] = x_t [ 0 ] ; tmp_c [ 8 ] = 0.0 ; for ( b_xj = 0 ; b_xj < 3 ;
b_xj ++ ) { vd [ b_xj ] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { c_y [ b_xj + 3
* i ] = 0.0 ; b_output [ b_xj + 3 * i ] = 0.0 ; c_y [ b_xj + 3 * i ] += I_p [
3 * i ] * output [ b_xj ] ; b_output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3
* i ] * dt_p [ b_xj ] ; c_y [ b_xj + 3 * i ] += I_p [ 3 * i + 1 ] * output [
b_xj + 3 ] ; b_output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] *
dt_p [ b_xj + 3 ] ; c_y [ b_xj + 3 * i ] += I_p [ 3 * i + 2 ] * output [ b_xj
+ 6 ] ; b_output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * dt_p [
b_xj + 6 ] ; vd [ b_xj ] += rtB . ka2qvllgio [ 3 * b_xj + i ] * we [ i ] ; }
for ( i = 0 ; i < 3 ; i ++ ) { tmp_g [ b_xj + 3 * i ] = 0.0 ; tmp_g [ b_xj +
3 * i ] += rtB . ka2qvllgio [ 3 * i ] * c_y [ b_xj ] ; tmp_g [ b_xj + 3 * i ]
+= rtB . ka2qvllgio [ 3 * i + 1 ] * c_y [ b_xj + 3 ] ; tmp_g [ b_xj + 3 * i ]
+= rtB . ka2qvllgio [ 3 * i + 2 ] * c_y [ b_xj + 6 ] ; tmp_k [ b_xj + 3 * i ]
= 0.0 ; tmp_b [ b_xj + 3 * i ] = 0.0 ; tmp_k [ b_xj + 3 * i ] += tmp_c [ 3 *
i ] * tmp_f [ b_xj ] ; tmp_b [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ] *
tmp_j [ b_xj ] ; tmp_k [ b_xj + 3 * i ] += tmp_c [ 3 * i + 1 ] * tmp_f [ b_xj
+ 3 ] ; tmp_b [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] * tmp_j [
b_xj + 3 ] ; tmp_k [ b_xj + 3 * i ] += tmp_c [ 3 * i + 2 ] * tmp_f [ b_xj + 6
] ; tmp_b [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * tmp_j [ b_xj +
6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { tmp_n [ b_xj + 3 * i ] = 0.0 ; tmp_n [
b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ] * tmp_k [ b_xj ] ; tmp_n [ b_xj
+ 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] * tmp_k [ b_xj + 3 ] ; tmp_n [
b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * tmp_k [ b_xj + 6 ] ; } }
dt_p [ 0 ] = 0.0 ; dt_p [ 3 ] = - we [ 2 ] ; dt_p [ 6 ] = we [ 1 ] ; dt_p [ 1
] = we [ 2 ] ; dt_p [ 4 ] = 0.0 ; dt_p [ 7 ] = - we [ 0 ] ; dt_p [ 2 ] = - we
[ 1 ] ; dt_p [ 5 ] = we [ 0 ] ; dt_p [ 8 ] = 0.0 ; output [ 0 ] = 0.0 ;
output [ 3 ] = - v [ 2 ] ; output [ 6 ] = v [ 1 ] ; output [ 1 ] = v [ 2 ] ;
output [ 4 ] = 0.0 ; output [ 7 ] = - v [ 0 ] ; output [ 2 ] = - v [ 1 ] ;
output [ 5 ] = v [ 0 ] ; output [ 8 ] = 0.0 ; b_y_p [ 0 ] = b_y [ 0 ] ; b_y_p
[ 3 ] = b_y [ 1 ] ; b_y_p [ 6 ] = b_y [ 2 ] ; b_y_p [ 9 ] = 0.0 ; b_y_p [ 12
] = 0.0 ; b_y_p [ 15 ] = 0.0 ; b_y_p [ 1 ] = 0.0 ; b_y_p [ 4 ] = b_y [ 0 ] ;
b_y_p [ 7 ] = 0.0 ; b_y_p [ 10 ] = b_y [ 1 ] ; b_y_p [ 13 ] = b_y [ 2 ] ;
b_y_p [ 16 ] = 0.0 ; b_y_p [ 2 ] = 0.0 ; b_y_p [ 5 ] = 0.0 ; b_y_p [ 8 ] =
b_y [ 0 ] ; b_y_p [ 11 ] = 0.0 ; b_y_p [ 14 ] = b_y [ 1 ] ; b_y_p [ 17 ] =
b_y [ 2 ] ; c_y [ 0 ] = 0.0 ; c_y [ 3 ] = - w [ 2 ] ; c_y [ 6 ] = w [ 1 ] ;
c_y [ 1 ] = w [ 2 ] ; c_y [ 4 ] = 0.0 ; c_y [ 7 ] = - w [ 0 ] ; c_y [ 2 ] = -
w [ 1 ] ; c_y [ 5 ] = w [ 0 ] ; c_y [ 8 ] = 0.0 ; d_y [ 0 ] = vd [ 0 ] ; d_y
[ 3 ] = vd [ 1 ] ; d_y [ 6 ] = vd [ 2 ] ; d_y [ 9 ] = 0.0 ; d_y [ 12 ] = 0.0
; d_y [ 15 ] = 0.0 ; d_y [ 1 ] = 0.0 ; d_y [ 4 ] = vd [ 0 ] ; d_y [ 7 ] = 0.0
; d_y [ 10 ] = vd [ 1 ] ; d_y [ 13 ] = vd [ 2 ] ; d_y [ 16 ] = 0.0 ; d_y [ 2
] = 0.0 ; d_y [ 5 ] = 0.0 ; d_y [ 8 ] = vd [ 0 ] ; d_y [ 11 ] = 0.0 ; d_y [
14 ] = vd [ 1 ] ; d_y [ 17 ] = vd [ 2 ] ; tmp_f [ 0 ] = 0.0 ; tmp_f [ 3 ] = -
wrench_1 [ 2 ] ; tmp_f [ 6 ] = wrench_1 [ 1 ] ; tmp_f [ 1 ] = wrench_1 [ 2 ]
; tmp_f [ 4 ] = 0.0 ; tmp_f [ 7 ] = - wrench_1 [ 0 ] ; tmp_f [ 2 ] = -
wrench_1 [ 1 ] ; tmp_f [ 5 ] = wrench_1 [ 0 ] ; tmp_f [ 8 ] = 0.0 ; tmp_c [ 0
] = 0.0 ; tmp_c [ 3 ] = - wrench_2 [ 2 ] ; tmp_c [ 6 ] = wrench_2 [ 1 ] ;
tmp_c [ 1 ] = wrench_2 [ 2 ] ; tmp_c [ 4 ] = 0.0 ; tmp_c [ 7 ] = - wrench_2 [
0 ] ; tmp_c [ 2 ] = - wrench_2 [ 1 ] ; tmp_c [ 5 ] = wrench_2 [ 0 ] ; tmp_c [
8 ] = 0.0 ; for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { for ( i = 0 ; i < 3 ; i
++ ) { I_p [ b_xj + 3 * i ] = 0.0 ; tmp_j [ b_xj + 3 * i ] = 0.0 ; I_p [ b_xj
+ 3 * i ] += output [ 3 * i ] * dt_p [ b_xj ] ; tmp_j [ b_xj + 3 * i ] += rtB
. ka2qvllgio [ 3 * i ] * c_y [ b_xj ] ; I_p [ b_xj + 3 * i ] += output [ 3 *
i + 1 ] * dt_p [ b_xj + 3 ] ; tmp_j [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3
* i + 1 ] * c_y [ b_xj + 3 ] ; I_p [ b_xj + 3 * i ] += output [ 3 * i + 2 ] *
dt_p [ b_xj + 6 ] ; tmp_j [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ]
* c_y [ b_xj + 6 ] ; } for ( i = 0 ; i < 6 ; i ++ ) { tmp_l [ b_xj + 3 * i ]
= 0.0 ; tmp_d [ b_xj + 3 * i ] = 0.0 ; tmp_l [ b_xj + 3 * i ] += b_y_p [ 3 *
i ] * rtB . ka2qvllgio [ b_xj ] ; tmp_d [ b_xj + 3 * i ] += d_y [ 3 * i ] *
tmp_j [ b_xj ] ; tmp_l [ b_xj + 3 * i ] += b_y_p [ 3 * i + 1 ] * rtB .
ka2qvllgio [ b_xj + 3 ] ; tmp_d [ b_xj + 3 * i ] += d_y [ 3 * i + 1 ] * tmp_j
[ b_xj + 3 ] ; tmp_l [ b_xj + 3 * i ] += b_y_p [ 3 * i + 2 ] * rtB .
ka2qvllgio [ b_xj + 6 ] ; tmp_d [ b_xj + 3 * i ] += d_y [ 3 * i + 2 ] * tmp_j
[ b_xj + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { tmp_k [ b_xj + 3 * i ] = (
tmp_b [ 3 * i + b_xj ] + tmp_n [ 3 * i + b_xj ] ) - ( ( rtB . ka2qvllgio [ 3
* i + 1 ] * I_p [ b_xj + 3 ] + rtB . ka2qvllgio [ 3 * i ] * I_p [ b_xj ] ) +
rtB . ka2qvllgio [ 3 * i + 2 ] * I_p [ b_xj + 6 ] ) ; } } for ( b_xj = 0 ;
b_xj < 3 ; b_xj ++ ) { rtB . anfyf3f0se [ b_xj ] = v_t [ b_xj ] - G [ b_xj ]
; for ( i = 0 ; i < 3 ; i ++ ) { dt_p [ b_xj + 3 * i ] = 0.0 ; output [ b_xj
+ 3 * i ] = 0.0 ; dt_p [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ] * tmp_f
[ b_xj ] ; output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ] * tmp_c [
b_xj ] ; dt_p [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] * tmp_f [
b_xj + 3 ] ; output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] *
tmp_c [ b_xj + 3 ] ; dt_p [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ]
* tmp_f [ b_xj + 6 ] ; output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i +
2 ] * tmp_c [ b_xj + 6 ] ; rtB . anfyf3f0se [ i + 6 * ( b_xj + 1 ) ] =
b_output [ 3 * b_xj + i ] - tmp_g [ 3 * b_xj + i ] ; } } for ( b_xj = 0 ;
b_xj < 12 ; b_xj ++ ) { rtB . anfyf3f0se [ 6 * ( b_xj + 4 ) ] = 0.0 ; rtB .
anfyf3f0se [ 6 * ( b_xj + 4 ) + 1 ] = 0.0 ; rtB . anfyf3f0se [ 6 * ( b_xj + 4
) + 2 ] = 0.0 ; } for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { rtB . anfyf3f0se [
b_xj + 3 ] = 0.0 ; rtB . anfyf3f0se [ 6 * ( b_xj + 1 ) + 3 ] = tmp_k [ 3 *
b_xj ] ; rtB . anfyf3f0se [ 6 * ( b_xj + 1 ) + 4 ] = tmp_k [ 3 * b_xj + 1 ] ;
rtB . anfyf3f0se [ 6 * ( b_xj + 1 ) + 5 ] = tmp_k [ 3 * b_xj + 2 ] ; } for (
b_xj = 0 ; b_xj < 6 ; b_xj ++ ) { rtB . anfyf3f0se [ 6 * ( b_xj + 4 ) + 3 ] =
tmp_l [ 3 * b_xj ] + tmp_d [ 3 * b_xj ] ; rtB . anfyf3f0se [ 6 * ( b_xj + 4 )
+ 4 ] = tmp_l [ 3 * b_xj + 1 ] + tmp_d [ 3 * b_xj + 1 ] ; rtB . anfyf3f0se [
6 * ( b_xj + 4 ) + 5 ] = tmp_l [ 3 * b_xj + 2 ] + tmp_d [ 3 * b_xj + 2 ] ; }
for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { rtB . anfyf3f0se [ 6 * ( b_xj + 10 )
+ 3 ] = dt_p [ 3 * b_xj ] ; rtB . anfyf3f0se [ 6 * ( b_xj + 13 ) + 3 ] =
output [ 3 * b_xj ] ; rtB . anfyf3f0se [ 6 * ( b_xj + 10 ) + 4 ] = dt_p [ 3 *
b_xj + 1 ] ; rtB . anfyf3f0se [ 6 * ( b_xj + 13 ) + 4 ] = output [ 3 * b_xj +
1 ] ; rtB . anfyf3f0se [ 6 * ( b_xj + 10 ) + 5 ] = dt_p [ 3 * b_xj + 2 ] ;
rtB . anfyf3f0se [ 6 * ( b_xj + 13 ) + 5 ] = output [ 3 * b_xj + 2 ] ; } if (
rtDW . poimg20uht ) { v [ 0 ] = w [ 0 ] - rtDW . fjgxwmabrc [ 0 ] ; v_t [ 0 ]
= w [ 0 ] - rtDW . fjgxwmabrc [ 0 ] ; v [ 1 ] = w [ 1 ] - rtDW . fjgxwmabrc [
1 ] ; v_t [ 1 ] = w [ 1 ] - rtDW . fjgxwmabrc [ 1 ] ; v [ 2 ] = w [ 2 ] -
rtDW . fjgxwmabrc [ 2 ] ; v_t [ 2 ] = w [ 2 ] - rtDW . fjgxwmabrc [ 2 ] ;
dt_p [ 0 ] = - 0.0 ; dt_p [ 3 ] = v [ 2 ] ; dt_p [ 6 ] = - v [ 1 ] ; dt_p [ 1
] = - v [ 2 ] ; dt_p [ 4 ] = - 0.0 ; dt_p [ 7 ] = v [ 0 ] ; dt_p [ 2 ] = v [
1 ] ; dt_p [ 5 ] = - v [ 0 ] ; dt_p [ 8 ] = - 0.0 ; output [ 0 ] = 0.0 ;
output [ 3 ] = - w [ 2 ] ; output [ 6 ] = w [ 1 ] ; output [ 1 ] = w [ 2 ] ;
output [ 4 ] = 0.0 ; output [ 7 ] = - w [ 0 ] ; output [ 2 ] = - w [ 1 ] ;
output [ 5 ] = w [ 0 ] ; output [ 8 ] = 0.0 ; I_p [ 0 ] = 0.0 ; I_p [ 3 ] = -
w [ 2 ] ; I_p [ 6 ] = w [ 1 ] ; I_p [ 1 ] = w [ 2 ] ; I_p [ 4 ] = 0.0 ; I_p [
7 ] = - w [ 0 ] ; I_p [ 2 ] = - w [ 1 ] ; I_p [ 5 ] = w [ 0 ] ; I_p [ 8 ] =
0.0 ; for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { b_y [ b_xj ] = 0.0 ; vd [ b_xj
] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { c_y [ b_xj + 3 * i ] = 0.0 ; c_y [
b_xj + 3 * i ] += I_p [ 3 * i ] * output [ b_xj ] ; c_y [ b_xj + 3 * i ] +=
I_p [ 3 * i + 1 ] * output [ b_xj + 3 ] ; c_y [ b_xj + 3 * i ] += I_p [ 3 * i
+ 2 ] * output [ b_xj + 6 ] ; b_y [ b_xj ] += rtB . ka2qvllgio [ 3 * b_xj + i
] * v_t [ i ] ; vd [ b_xj ] += rtB . ka2qvllgio [ 3 * b_xj + i ] * w [ i ] ;
} for ( i = 0 ; i < 3 ; i ++ ) { b_output [ b_xj + 3 * i ] = 0.0 ; b_output [
b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ] * c_y [ b_xj ] ; b_output [ b_xj
+ 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] * c_y [ b_xj + 3 ] ; b_output [
b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * c_y [ b_xj + 6 ] ; tmp_g [
b_xj + 3 * i ] = ( ( rtB . ka2qvllgio [ 3 * i + 1 ] * dt_p [ b_xj + 3 ] + rtB
. ka2qvllgio [ 3 * i ] * dt_p [ b_xj ] ) + rtB . ka2qvllgio [ 3 * i + 2 ] *
dt_p [ b_xj + 6 ] ) - b_output [ 3 * i + b_xj ] * dt ; } } dt_p [ 0 ] = 0.0 ;
dt_p [ 3 ] = - ( a [ 2 ] - - 9.80665 ) ; dt_p [ 6 ] = a [ 1 ] ; dt_p [ 1 ] =
a [ 2 ] - - 9.80665 ; dt_p [ 4 ] = 0.0 ; dt_p [ 7 ] = - a [ 0 ] ; dt_p [ 2 ]
= - a [ 1 ] ; dt_p [ 5 ] = a [ 0 ] ; dt_p [ 8 ] = 0.0 ; b_y_p [ 0 ] = b_y [ 0
] ; b_y_p [ 3 ] = b_y [ 1 ] ; b_y_p [ 6 ] = b_y [ 2 ] ; b_y_p [ 9 ] = 0.0 ;
b_y_p [ 12 ] = 0.0 ; b_y_p [ 15 ] = 0.0 ; b_y_p [ 1 ] = 0.0 ; b_y_p [ 4 ] =
b_y [ 0 ] ; b_y_p [ 7 ] = 0.0 ; b_y_p [ 10 ] = b_y [ 1 ] ; b_y_p [ 13 ] = b_y
[ 2 ] ; b_y_p [ 16 ] = 0.0 ; b_y_p [ 2 ] = 0.0 ; b_y_p [ 5 ] = 0.0 ; b_y_p [
8 ] = b_y [ 0 ] ; b_y_p [ 11 ] = 0.0 ; b_y_p [ 14 ] = b_y [ 1 ] ; b_y_p [ 17
] = b_y [ 2 ] ; I_p [ 0 ] = 0.0 ; I_p [ 3 ] = - w [ 2 ] ; I_p [ 6 ] = w [ 1 ]
; I_p [ 1 ] = w [ 2 ] ; I_p [ 4 ] = 0.0 ; I_p [ 7 ] = - w [ 0 ] ; I_p [ 2 ] =
- w [ 1 ] ; I_p [ 5 ] = w [ 0 ] ; I_p [ 8 ] = 0.0 ; d_y [ 0 ] = vd [ 0 ] ;
d_y [ 3 ] = vd [ 1 ] ; d_y [ 6 ] = vd [ 2 ] ; d_y [ 9 ] = 0.0 ; d_y [ 12 ] =
0.0 ; d_y [ 15 ] = 0.0 ; d_y [ 1 ] = 0.0 ; d_y [ 4 ] = vd [ 0 ] ; d_y [ 7 ] =
0.0 ; d_y [ 10 ] = vd [ 1 ] ; d_y [ 13 ] = vd [ 2 ] ; d_y [ 16 ] = 0.0 ; d_y
[ 2 ] = 0.0 ; d_y [ 5 ] = 0.0 ; d_y [ 8 ] = vd [ 0 ] ; d_y [ 11 ] = 0.0 ; d_y
[ 14 ] = vd [ 1 ] ; d_y [ 17 ] = vd [ 2 ] ; b_output [ 0 ] = 0.0 ; b_output [
3 ] = - wrench_1 [ 2 ] ; b_output [ 6 ] = wrench_1 [ 1 ] ; b_output [ 1 ] =
wrench_1 [ 2 ] ; b_output [ 4 ] = 0.0 ; b_output [ 7 ] = - wrench_1 [ 0 ] ;
b_output [ 2 ] = - wrench_1 [ 1 ] ; b_output [ 5 ] = wrench_1 [ 0 ] ;
b_output [ 8 ] = 0.0 ; tmp_f [ 0 ] = 0.0 ; tmp_f [ 3 ] = - wrench_2 [ 2 ] ;
tmp_f [ 6 ] = wrench_2 [ 1 ] ; tmp_f [ 1 ] = wrench_2 [ 2 ] ; tmp_f [ 4 ] =
0.0 ; tmp_f [ 7 ] = - wrench_2 [ 0 ] ; tmp_f [ 2 ] = - wrench_2 [ 1 ] ; tmp_f
[ 5 ] = wrench_2 [ 0 ] ; tmp_f [ 8 ] = 0.0 ; for ( b_xj = 0 ; b_xj < 3 ; b_xj
++ ) { for ( i = 0 ; i < 3 ; i ++ ) { output [ b_xj + 3 * i ] = 0.0 ; c_y [
b_xj + 3 * i ] = 0.0 ; output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ]
* dt_p [ b_xj ] ; c_y [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i ] * I_p [
b_xj ] ; output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] * dt_p [
b_xj + 3 ] ; c_y [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 1 ] * I_p [
b_xj + 3 ] ; output [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * dt_p
[ b_xj + 6 ] ; c_y [ b_xj + 3 * i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * I_p [
b_xj + 6 ] ; } for ( i = 0 ; i < 6 ; i ++ ) { tmp_l [ b_xj + 3 * i ] = 0.0 ;
tmp_l [ b_xj + 3 * i ] += d_y [ 3 * i ] * c_y [ b_xj ] ; tmp_l [ b_xj + 3 * i
] += d_y [ 3 * i + 1 ] * c_y [ b_xj + 3 ] ; tmp_l [ b_xj + 3 * i ] += d_y [ 3
* i + 2 ] * c_y [ b_xj + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { tmp_j [ b_xj
+ 3 * i ] = 0.0 ; tmp_c [ b_xj + 3 * i ] = 0.0 ; tmp_j [ b_xj + 3 * i ] +=
rtB . ka2qvllgio [ 3 * i ] * b_output [ b_xj ] ; tmp_c [ b_xj + 3 * i ] +=
rtB . ka2qvllgio [ 3 * i ] * tmp_f [ b_xj ] ; tmp_j [ b_xj + 3 * i ] += rtB .
ka2qvllgio [ 3 * i + 1 ] * b_output [ b_xj + 3 ] ; tmp_c [ b_xj + 3 * i ] +=
rtB . ka2qvllgio [ 3 * i + 1 ] * tmp_f [ b_xj + 3 ] ; tmp_j [ b_xj + 3 * i ]
+= rtB . ka2qvllgio [ 3 * i + 2 ] * b_output [ b_xj + 6 ] ; tmp_c [ b_xj + 3
* i ] += rtB . ka2qvllgio [ 3 * i + 2 ] * tmp_f [ b_xj + 6 ] ; } for ( i = 0
; i < 6 ; i ++ ) { tmp_d [ b_xj + 3 * i ] = ( ( b_y_p [ 3 * i + 1 ] * rtB .
ka2qvllgio [ b_xj + 3 ] + b_y_p [ 3 * i ] * rtB . ka2qvllgio [ b_xj ] ) +
b_y_p [ 3 * i + 2 ] * rtB . ka2qvllgio [ b_xj + 6 ] ) + tmp_l [ 3 * i + b_xj
] * dt ; } y_o_cl_integral [ b_xj ] = ( a [ b_xj ] - G [ b_xj ] ) * dt ;
y_o_cl_integral [ 6 * ( b_xj + 1 ) ] = tmp_g [ 3 * b_xj ] ; y_o_cl_integral [
6 * ( b_xj + 1 ) + 1 ] = tmp_g [ 3 * b_xj + 1 ] ; y_o_cl_integral [ 6 * (
b_xj + 1 ) + 2 ] = tmp_g [ 3 * b_xj + 2 ] ; } for ( b_xj = 0 ; b_xj < 12 ;
b_xj ++ ) { y_o_cl_integral [ 6 * ( b_xj + 4 ) ] = 0.0 ; y_o_cl_integral [ 6
* ( b_xj + 4 ) + 1 ] = 0.0 ; y_o_cl_integral [ 6 * ( b_xj + 4 ) + 2 ] = 0.0 ;
} for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { y_o_cl_integral [ b_xj + 3 ] = 0.0
; y_o_cl_integral [ 6 * ( b_xj + 1 ) + 3 ] = output [ 3 * b_xj ] * dt ;
y_o_cl_integral [ 6 * ( b_xj + 1 ) + 4 ] = output [ 3 * b_xj + 1 ] * dt ;
y_o_cl_integral [ 6 * ( b_xj + 1 ) + 5 ] = output [ 3 * b_xj + 2 ] * dt ; }
for ( b_xj = 0 ; b_xj < 6 ; b_xj ++ ) { y_o_cl_integral [ 6 * ( b_xj + 4 ) +
3 ] = tmp_d [ 3 * b_xj ] ; y_o_cl_integral [ 6 * ( b_xj + 4 ) + 4 ] = tmp_d [
3 * b_xj + 1 ] ; y_o_cl_integral [ 6 * ( b_xj + 4 ) + 5 ] = tmp_d [ 3 * b_xj
+ 2 ] ; } for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { y_o_cl_integral [ 6 * (
b_xj + 10 ) + 3 ] = tmp_j [ 3 * b_xj ] * dt ; y_o_cl_integral [ 6 * ( b_xj +
13 ) + 3 ] = tmp_c [ 3 * b_xj ] * dt ; y_o_cl_integral [ 6 * ( b_xj + 10 ) +
4 ] = tmp_j [ 3 * b_xj + 1 ] * dt ; y_o_cl_integral [ 6 * ( b_xj + 13 ) + 4 ]
= tmp_c [ 3 * b_xj + 1 ] * dt ; y_o_cl_integral [ 6 * ( b_xj + 10 ) + 5 ] =
tmp_j [ 3 * b_xj + 2 ] * dt ; y_o_cl_integral [ 6 * ( b_xj + 13 ) + 5 ] =
tmp_c [ 3 * b_xj + 2 ] * dt ; } if ( rtDW . oc1xjxz5rw > 10.0 ) { rtDW .
oc1xjxz5rw = 1.0 ; } for ( b_xj = 0 ; b_xj < 6 ; b_xj ++ ) { output_idx_1 = (
wrench_1 [ b_xj ] + wrench_2 [ b_xj ] ) * dt ; output_idx_0 = 0.0 ;
output_idx_2 = 0.0 ; for ( i = 0 ; i < 16 ; i ++ ) { v_t_p = y_o_cl_integral
[ 6 * i + b_xj ] ; output_idx_0 += v_t_p * rtDW . ocqk3jofvr [ i ] ;
output_idx_2 += v_t_p * rtDW . lvvl3bpreb [ i ] ; } rtB . emkev14wx5 [ b_xj ]
= output_idx_0 - output_idx_1 ; hpzn0awww5 [ b_xj ] = output_idx_2 -
output_idx_1 ; wrench_1 [ b_xj ] = output_idx_1 ; } for ( b_xj = 0 ; b_xj <
16 ; b_xj ++ ) { rtDW . enz403h0md [ b_xj + ( ( ( int32_T ) rtDW . oc1xjxz5rw
- 1 ) << 4 ) ] = 0.0 ; } for ( b_xj = 0 ; b_xj < 16 ; b_xj ++ ) { for ( i = 0
; i < 6 ; i ++ ) { rtDW . enz403h0md [ b_xj + ( ( ( int32_T ) rtDW .
oc1xjxz5rw - 1 ) << 4 ) ] += y_o_cl_integral [ 6 * b_xj + i ] * hpzn0awww5 [
i ] ; } } memcpy ( & mat_sum [ 0 ] , & rtDW . enz403h0md [ 0 ] , sizeof (
real_T ) << 4U ) ; for ( i = 0 ; i < 9 ; i ++ ) { xoffset = ( i + 1 ) << 4 ;
for ( b_xj = 0 ; b_xj < 16 ; b_xj ++ ) { mat_sum [ b_xj ] += rtDW .
enz403h0md [ xoffset + b_xj ] ; } } rtDW . oc1xjxz5rw ++ ; rtDW . fjgxwmabrc
[ 0 ] = w [ 0 ] ; rtDW . fjgxwmabrc [ 1 ] = w [ 1 ] ; rtDW . fjgxwmabrc [ 2 ]
= w [ 2 ] ; if ( rtDW . bth2mqorax >= 1.0 ) { rtDW . bth2mqorax = 1.0 ; }
else { rtDW . bth2mqorax ++ ; } } rtDW . of0mgcawwf = rtB . mz0hxgwqhl ; for
( b_xj = 0 ; b_xj < 16 ; b_xj ++ ) { d_a [ b_xj ] = 0.0 ; for ( i = 0 ; i < 6
; i ++ ) { y_o_cl_integral [ b_xj + ( i << 4 ) ] = 0.0 ; for ( xoffset = 0 ;
xoffset < 16 ; xoffset ++ ) { y_o_cl_integral [ b_xj + ( i << 4 ) ] += d_a_p
[ ( xoffset << 4 ) + b_xj ] * rtB . anfyf3f0se [ 6 * xoffset + i ] ; } d_a [
b_xj ] += y_o_cl_integral [ ( i << 4 ) + b_xj ] * s [ i ] ; } c_a [ b_xj ] =
0.0 ; for ( i = 0 ; i < 16 ; i ++ ) { c_a [ b_xj ] += ( real_T ) c_a_p [ ( i
<< 4 ) + b_xj ] * mat_sum [ i ] ; } } for ( b_xj = 0 ; b_xj < 16 ; b_xj ++ )
{ output_idx_0 = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { y_o_cl_integral [ b_xj
+ ( i << 4 ) ] = 0.0 ; for ( xoffset = 0 ; xoffset < 16 ; xoffset ++ ) {
y_o_cl_integral [ b_xj + ( i << 4 ) ] += d_a_p [ ( xoffset << 4 ) + b_xj ] *
rtB . anfyf3f0se [ 6 * xoffset + i ] ; } output_idx_0 += y_o_cl_integral [ (
i << 4 ) + b_xj ] * s [ i ] ; } if ( rtDW . poimg20uht ) { mat_sum [ b_xj ] =
d_a [ b_xj ] - c_a [ b_xj ] ; } else { mat_sum [ b_xj ] = output_idx_0 ; } }
rtDW . poimg20uht = true ; dt_p [ 0 ] = dt * 0.0 ; dt_p [ 3 ] = dt * -
i3cwcxzojw [ 8 ] ; dt_p [ 6 ] = dt * i3cwcxzojw [ 7 ] ; dt_p [ 1 ] = dt *
i3cwcxzojw [ 8 ] ; dt_p [ 4 ] = dt * 0.0 ; dt_p [ 7 ] = dt * - i3cwcxzojw [ 6
] ; dt_p [ 2 ] = dt * - i3cwcxzojw [ 7 ] ; dt_p [ 5 ] = dt * i3cwcxzojw [ 6 ]
; dt_p [ 8 ] = dt * 0.0 ; lz54wyaa0l ( dt_p , I_p ) ; for ( b_xj = 0 ; b_xj <
3 ; b_xj ++ ) { for ( i = 0 ; i < 3 ; i ++ ) { dt_p [ i + 3 * b_xj ] = 0.0 ;
dt_p [ i + 3 * b_xj ] += rtDW . kso5hmoa3x [ 3 * b_xj ] * I_p [ i ] ; dt_p [
i + 3 * b_xj ] += rtDW . kso5hmoa3x [ 3 * b_xj + 1 ] * I_p [ i + 3 ] ; dt_p [
i + 3 * b_xj ] += rtDW . kso5hmoa3x [ 3 * b_xj + 2 ] * I_p [ i + 6 ] ; } }
memcpy ( & rtDW . kso5hmoa3x [ 0 ] , & dt_p [ 0 ] , 9U * sizeof ( real_T ) )
; rtDW . pvpfr5em5t [ 0 ] = 0.5 * i3cwcxzojw [ 3 ] * dt * dt + ( i3cwcxzojw [
0 ] * dt + rtDW . pvpfr5em5t [ 0 ] ) ; rtDW . pvpfr5em5t [ 1 ] = 0.5 *
i3cwcxzojw [ 4 ] * dt * dt + ( i3cwcxzojw [ 1 ] * dt + rtDW . pvpfr5em5t [ 1
] ) ; rtDW . pvpfr5em5t [ 2 ] = 0.5 * i3cwcxzojw [ 5 ] * dt * dt + (
i3cwcxzojw [ 2 ] * dt + rtDW . pvpfr5em5t [ 2 ] ) ; for ( b_xj = 0 ; b_xj <
16 ; b_xj ++ ) { rtDW . lvvl3bpreb [ b_xj ] += mat_sum [ b_xj ] * dt ; } for
( i = 0 ; i < 6 ; i ++ ) { rtB . n5plh5my25 [ i ] = 0.0 ; for ( b_xj = 0 ;
b_xj < 6 ; b_xj ++ ) { rtB . n5plh5my25 [ i ] += ( real_T ) b_a [ 6 * b_xj +
i ] * s [ b_xj ] ; } rtB . n5plh5my25 [ i ] = muDoubleScalarMin (
muDoubleScalarMax ( rtB . n5plh5my25 [ i ] , - 20.0 ) , 40.0 ) ; output_idx_0
= 0.0 ; for ( b_xj = 0 ; b_xj < 16 ; b_xj ++ ) { output_idx_0 += rtB .
anfyf3f0se [ 6 * b_xj + i ] * rtDW . lvvl3bpreb [ b_xj ] ; } rtB . a53vj1gwki
[ i ] = rtB . n5plh5my25 [ i ] + output_idx_0 ; } memcpy ( & rtB . dnumjapkrr
[ 0 ] , & rtB . kxvph4adkr [ 24 ] , sizeof ( real_T ) << 4U ) ; memcpy ( &
rtB . n1x3q5r3km [ 0 ] , & rtDW . lvvl3bpreb [ 0 ] , sizeof ( real_T ) << 4U
) ; memcpy ( & rtB . bqwy3enhc1 [ 0 ] , & rtDW . lvvl3bpreb [ 0 ] , sizeof (
real_T ) << 4U ) ; for ( b_xj = 0 ; b_xj < 6 ; b_xj ++ ) { rtB . d2gmderclu [
b_xj ] = 0.0 ; for ( i = 0 ; i < 16 ; i ++ ) { rtB . d2gmderclu [ b_xj ] +=
rtB . anfyf3f0se [ 6 * i + b_xj ] * rtDW . ocqk3jofvr [ i ] ; } } memcpy ( &
rtB . oqf350egiy [ 0 ] , & rtB . ka2qvllgio [ 0 ] , 9U * sizeof ( real_T ) )
; memcpy ( & rtB . lw2nui0kqj [ 0 ] , & rtB . ka2qvllgio [ 0 ] , 9U * sizeof
( real_T ) ) ; { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . idvsek3cff .
LoggedData , & locTime , & rtB . bqwy3enhc1 [ 0 ] ) ; } } } } { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { if
( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ovuzirfyo4 . LoggedData , & locTime , & rtB .
d2gmderclu [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . hydekeb4jx .
LoggedData , & locTime , & rtB . anfyf3f0se [ 0 ] ) ; } } } } { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( ssGetLogOutput ( rtS ) ) { { if
( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . etxlw4dum2 . LoggedData , & locTime , & rtB .
oqf350egiy [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . flmct1jknr .
LoggedData , & locTime , & rtB . lw2nui0kqj [ 0 ] ) ; } } } } } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) { wrench_rotation [ 6 * b_xj ] = rtB .
ka2qvllgio [ 3 * b_xj ] ; wrench_rotation [ 6 * ( b_xj + 3 ) ] = 0.0 ;
wrench_rotation [ 6 * b_xj + 3 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) +
3 ] = rtB . ka2qvllgio [ 3 * b_xj ] ; wrench_rotation [ 6 * b_xj + 1 ] = rtB
. ka2qvllgio [ 3 * b_xj + 1 ] ; wrench_rotation [ 6 * ( b_xj + 3 ) + 1 ] =
0.0 ; wrench_rotation [ 6 * b_xj + 4 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj +
3 ) + 4 ] = rtB . ka2qvllgio [ 3 * b_xj + 1 ] ; wrench_rotation [ 6 * b_xj +
2 ] = rtB . ka2qvllgio [ 3 * b_xj + 2 ] ; wrench_rotation [ 6 * ( b_xj + 3 )
+ 2 ] = 0.0 ; wrench_rotation [ 6 * b_xj + 5 ] = 0.0 ; wrench_rotation [ 6 *
( b_xj + 3 ) + 5 ] = rtB . ka2qvllgio [ 3 * b_xj + 2 ] ; } for ( b_xj = 0 ;
b_xj < 6 ; b_xj ++ ) { wrench_1 [ b_xj ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ )
{ output_idx_1 = wrench_rotation [ 6 * i + b_xj ] * rtB . kxvph4adkr [ i ] +
wrench_1 [ b_xj ] ; wrench_1 [ b_xj ] = output_idx_1 ; } } for ( i = 0 ; i <
6 ; i ++ ) { rtB . ha4lwepn1f [ i ] = 0.5 * wrench_1 [ i ] + 0.5 * rtDW .
obx514d20e [ i ] ; rtDW . obx514d20e [ i ] = rtB . ha4lwepn1f [ i ] ; } rtB .
f1wefakszv = rtDW . jxqq0kd055 ; rtB . l5krbabg4d = rtDW . d1ymyg1puf ; rtB .
dgxu5zatl2 = rtDW . pniui21m2m ; for ( i = 0 ; i < 6 ; i ++ ) { rtB .
mbaykyotfu [ i ] = rtB . a53vj1gwki [ i ] - wrench_1 [ i ] ; } rtB .
etinqsqgwm = ( ( rtB . mbaykyotfu [ 0 ] - rtP . Kx_Gain * ocx5tbb4mc ) - rtP
. Bx_Gain * rtB . f1wefakszv ) * rtP . Mx_Gain ; rtB . oybfikvjov = ( ( rtB .
mbaykyotfu [ 1 ] - rtP . Ky_Gain * c01pxzotzo ) - rtP . By_Gain * rtB .
l5krbabg4d ) * rtP . My_Gain ; rtB . ezct1usiup = ( ( rtB . mbaykyotfu [ 2 ]
- rtP . Kz_Gain * gkxvxufpfw ) - rtP . Bz_Gain * rtB . dgxu5zatl2 ) * rtP .
Mz_Gain ; rtB . aqna2gz1ds = ( ( rtB . mbaykyotfu [ 3 ] - rtP .
Kx_Gain_oord1bn5tk * rtDW . hom4bzatts ) - rtP . Bx_Gain_dheugbfk0n * rtB .
cjjpsdh0ci ) * rtP . Mx_Gain_lkbxzy4zcx ; rtB . at5fedp10d = ( ( rtB .
mbaykyotfu [ 4 ] - rtP . Ky_Gain_mrgiolqcuy * rtDW . jx1pyei5iz ) - rtP .
By_Gain_cppco4mjvy * rtB . e1iv3qcjfw ) * rtP . My_Gain_hrp3lvoreh ; rtB .
leiklejyk1 = ( ( rtB . mbaykyotfu [ 5 ] - rtP . Kz_Gain_k51k0wreuu * rtDW .
goe0ybllxx ) - rtP . Bz_Gain_oi02ukprz0 * rtB . f21sygsmjw ) * rtP .
Mz_Gain_mdbt5ypr1k ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } for ( b_xj = 0 ; b_xj < 3 ; b_xj ++ ) {
wrench_rotation [ 6 * b_xj ] = rtB . ka2qvllgio [ 3 * b_xj ] ;
wrench_rotation [ 6 * ( b_xj + 3 ) ] = 0.0 ; wrench_rotation [ 6 * b_xj + 3 ]
= 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) + 3 ] = rtB . ka2qvllgio [ 3 *
b_xj ] ; wrench_rotation [ 6 * b_xj + 1 ] = rtB . ka2qvllgio [ 3 * b_xj + 1 ]
; wrench_rotation [ 6 * ( b_xj + 3 ) + 1 ] = 0.0 ; wrench_rotation [ 6 * b_xj
+ 4 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) + 4 ] = rtB . ka2qvllgio [ 3
* b_xj + 1 ] ; wrench_rotation [ 6 * b_xj + 2 ] = rtB . ka2qvllgio [ 3 * b_xj
+ 2 ] ; wrench_rotation [ 6 * ( b_xj + 3 ) + 2 ] = 0.0 ; wrench_rotation [ 6
* b_xj + 5 ] = 0.0 ; wrench_rotation [ 6 * ( b_xj + 3 ) + 5 ] = rtB .
ka2qvllgio [ 3 * b_xj + 2 ] ; } for ( b_xj = 0 ; b_xj < 6 ; b_xj ++ ) { rtB .
nlljfedtl4 [ b_xj ] = 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . nlljfedtl4 [
b_xj ] += wrench_rotation [ 6 * i + b_xj ] * rtB . kxvph4adkr [ i + 12 ] ; }
} if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . l5ehte0yu5 = rtDW . f32pecj5j3
; rtB . komus0gcso = rtP . Bx_Gain_nwa0gs3mlk * rtB . l5ehte0yu5 ; rtB .
axvx5onbcx = rtDW . fbdsqnrbvi ; rtB . kayk4zho1z = rtP . By_Gain_khzacun3xg
* rtB . axvx5onbcx ; rtB . o34qpbtn0y = rtDW . gqp5ng5ipd ; rtB . fhugj1l3qe
= rtP . Bz_Gain_h3x1lv12d0 * rtB . o34qpbtn0y ; rtB . cxs1ehjvbx = rtP .
Kx_Gain_jnwygpt15o * n3odybx5hp ; rtB . enhmwan3ns = rtP . Ky_Gain_oq5c1cqtk1
* jq3k1seksm ; rtB . moduzw1lx4 = rtP . Kz_Gain_p2xgpr45i5 * moha0odwbw ; }
for ( i = 0 ; i < 6 ; i ++ ) { wrench_1 [ i ] = rtB . n5plh5my25 [ i ] - rtB
. nlljfedtl4 [ i ] ; } rtB . n44n3mb43k = ( ( wrench_1 [ 0 ] - rtB .
cxs1ehjvbx ) - rtB . komus0gcso ) * rtP . Mx_Gain_js3woskvp0 ; rtB .
kdz4sa51a2 = ( ( wrench_1 [ 1 ] - rtB . enhmwan3ns ) - rtB . kayk4zho1z ) *
rtP . My_Gain_hdpbuksf2w ; rtB . fuszcwwkvv = ( ( wrench_1 [ 2 ] - rtB .
moduzw1lx4 ) - rtB . fhugj1l3qe ) * rtP . Mz_Gain_hxseeguaop ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . ijkfpvfmzk = rtP . Bx_Gain_n2c2zc5fut
* rtB . gms5jrejo1 ; rtB . jddyf4dq55 = rtP . By_Gain_gzq4wqubv2 * rtB .
g1ivuzn5or ; rtB . g5i5pwgazj = rtP . Bz_Gain_e0agfihwsa * rtB . golkvscg5k ;
rtB . ad2m20gzqt = rtP . Kx_Gain_cmgxch1a1l * rtDW . ikqao11oir ; rtB .
ky052i5er3 = rtP . Ky_Gain_mqjlhklks4 * rtDW . mhqnkldn3f ; rtB . flst3qrajz
= rtP . Kz_Gain_asqeevkcou * rtDW . d0njjfa3vf ; } rtB . en5e3b0kmw = ( (
wrench_1 [ 3 ] - rtB . ad2m20gzqt ) - rtB . ijkfpvfmzk ) * rtP .
Mx_Gain_awidn5sofk ; rtB . ajdgrxcuuj = ( ( wrench_1 [ 4 ] - rtB . ky052i5er3
) - rtB . jddyf4dq55 ) * rtP . My_Gain_pjfuxtoldg ; rtB . lc0n30aw03 = ( (
wrench_1 [ 5 ] - rtB . flst3qrajz ) - rtB . g5i5pwgazj ) * rtP .
Mz_Gain_cvkeec532r ; { real_T * pDataValues = ( real_T * ) rtDW . gjmmdatpmk
. DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . gjmmdatpmk . TimePtr ;
int_T currTimeIndex = rtDW . hdj2esbagy . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . gjmmdatpmk . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hdj2esbagy . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & dyxx1pp3kp [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & dyxx1pp3kp [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ;
} } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ;
real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . hk4x31s2wo [ 0 ] ; int_T * zcTimeIndicesIdx = & rtDW
. pgqbeye23i ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
numZcTimes = 3 ; if ( * zcTimeIndicesIdx < numZcTimes ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [ zcIdx ] ) { while ( *
zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t > pTimeValues [ zcIdx ] ) ) { (
* zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; } }
} else { if ( t >= pTimeValues [ zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) <
pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) {
TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 = pTimeValues [ zcIdx - 1 ] ;
TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } }
} { int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { d1 = pDataValues
[ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 =
d1 ; } ( & dyxx1pp3kp [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . j2ilej2aih . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . j2ilej2aih . TimePtr ; int_T currTimeIndex = rtDW . cg2bvqjvra .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . j2ilej2aih . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . cg2bvqjvra . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & hln3i0rh4z [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & hln3i0rh4z [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ;
} } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ;
real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . iwgjwpwckw [ 0 ] ; int_T * zcTimeIndicesIdx = & rtDW
. apqtcucrxr ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
numZcTimes = 4 ; if ( * zcTimeIndicesIdx < numZcTimes ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [ zcIdx ] ) { while ( *
zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t > pTimeValues [ zcIdx ] ) ) { (
* zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; } }
} else { if ( t >= pTimeValues [ zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) <
pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) {
TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 = pTimeValues [ zcIdx - 1 ] ;
TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } }
} { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { d1 = pDataValues
[ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 =
d1 ; } ( & hln3i0rh4z [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . mx04nd152z . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . mx04nd152z . TimePtr ; int_T currTimeIndex = rtDW . pxh3rjh5u4 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . mx04nd152z . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . pxh3rjh5u4 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & j3z4qcoslp [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { ( & j3z4qcoslp [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ;
} } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ;
real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . nwblnammfm [ 0 ] ; int_T * zcTimeIndicesIdx = & rtDW
. ed5n0ctaot ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
numZcTimes = 8 ; if ( * zcTimeIndicesIdx < numZcTimes ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [ zcIdx ] ) { while ( *
zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t > pTimeValues [ zcIdx ] ) ) { (
* zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; } }
} else { if ( t >= pTimeValues [ zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) <
pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) {
TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 = pTimeValues [ zcIdx - 1 ] ;
TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } }
} { int_T elIdx ; for ( elIdx = 0 ; elIdx < 6 ; ++ elIdx ) { d1 = pDataValues
[ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 =
d1 ; } ( & j3z4qcoslp [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } UNUSED_PARAMETER ( tid ) ;
} void MdlOutputsTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 48 ] ; real_T time ; int32_T i ; int_T tmp_e [
13 ] ; boolean_T tmp ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
meaqqr1ua3 += rtP . DiscreteTimeIntegrator1_gainval * rtB . f1wefakszv ; rtDW
. ieis3wdkcc += rtP . DiscreteTimeIntegrator3_gainval * rtB . l5krbabg4d ;
rtDW . nsbswzebrn += rtP . DiscreteTimeIntegrator5_gainval * rtB . dgxu5zatl2
; rtDW . ftmzzvbzax += rtP . DiscreteTimeIntegrator_gainval * rtB .
aqna2gz1ds ; rtDW . lajwkf5yel += rtP . DiscreteTimeIntegrator2_gainval * rtB
. at5fedp10d ; rtDW . kf54lrgsgh += rtP . DiscreteTimeIntegrator4_gainval *
rtB . leiklejyk1 ; rtDW . lwjbyb5hax += rtP .
DiscreteTimeIntegrator1_gainval_oqjikpnyqd * rtB . l5ehte0yu5 ; rtDW .
iyyt53kmyv += rtP . DiscreteTimeIntegrator3_gainval_jbyzgv51qt * rtB .
axvx5onbcx ; rtDW . domwprwtea += rtP .
DiscreteTimeIntegrator5_gainval_mzosb4boys * rtB . o34qpbtn0y ; rtDW .
hw4jmko5ut += rtP . DiscreteTimeIntegrator_gainval_f1m0x5aaah * rtB .
en5e3b0kmw ; rtDW . dlylyzqh44 += rtP .
DiscreteTimeIntegrator2_gainval_m5icpofl44 * rtB . ajdgrxcuuj ; rtDW .
d1vruvafzv += rtP . DiscreteTimeIntegrator4_gainval_gg2tu1ivfs * rtB .
lc0n30aw03 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i
++ ) { rtDW . jb4linf121 [ i ] = rtB . e12xzvaqlra . alhmufu0yv [ i ] ; } for
( i = 0 ; i < 6 ; i ++ ) { rtDW . g2tsjufkz5 [ i ] = rtB . g25aonyhee .
alhmufu0yv [ i ] ; } } simulationData = ( NeslSimulationData * ) rtDW .
pwa0n2fnbt ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 18 ; simulationData -> mData -> mContStates . mX = &
rtX . iwaxtr5iwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . hocn5gpqnf ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . fkrpan2ou1 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0
] = rtB . itk1tzd05y [ 0 ] ; tmp_p [ 1 ] = rtB . itk1tzd05y [ 1 ] ; tmp_p [ 2
] = rtB . itk1tzd05y [ 2 ] ; tmp_p [ 3 ] = rtB . itk1tzd05y [ 3 ] ; tmp_e [ 1
] = 4 ; tmp_p [ 4 ] = rtB . cgdw5usgs2 [ 0 ] ; tmp_p [ 5 ] = rtB . cgdw5usgs2
[ 1 ] ; tmp_p [ 6 ] = rtB . cgdw5usgs2 [ 2 ] ; tmp_p [ 7 ] = rtB . cgdw5usgs2
[ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . fodbt3qoit [ 0 ] ; tmp_p [ 9 ]
= rtB . fodbt3qoit [ 1 ] ; tmp_p [ 10 ] = rtB . fodbt3qoit [ 2 ] ; tmp_p [ 11
] = rtB . fodbt3qoit [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB .
arfjjmxolk [ 0 ] ; tmp_p [ 13 ] = rtB . arfjjmxolk [ 1 ] ; tmp_p [ 14 ] = rtB
. arfjjmxolk [ 2 ] ; tmp_p [ 15 ] = rtB . arfjjmxolk [ 3 ] ; tmp_e [ 4 ] = 16
; tmp_p [ 16 ] = rtB . hnth4pq521 [ 0 ] ; tmp_p [ 17 ] = rtB . hnth4pq521 [ 1
] ; tmp_p [ 18 ] = rtB . hnth4pq521 [ 2 ] ; tmp_p [ 19 ] = rtB . hnth4pq521 [
3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . lktiyc0abo [ 0 ] ; tmp_p [ 21 ]
= rtB . lktiyc0abo [ 1 ] ; tmp_p [ 22 ] = rtB . lktiyc0abo [ 2 ] ; tmp_p [ 23
] = rtB . lktiyc0abo [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB .
gge2baxpst [ 0 ] ; tmp_p [ 25 ] = rtB . gge2baxpst [ 1 ] ; tmp_p [ 26 ] = rtB
. gge2baxpst [ 2 ] ; tmp_p [ 27 ] = rtB . gge2baxpst [ 3 ] ; tmp_e [ 7 ] = 28
; tmp_p [ 28 ] = rtB . pyqiljkwsr [ 0 ] ; tmp_p [ 29 ] = rtB . pyqiljkwsr [ 1
] ; tmp_p [ 30 ] = rtB . pyqiljkwsr [ 2 ] ; tmp_p [ 31 ] = rtB . pyqiljkwsr [
3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . hwb0fhnhyj [ 0 ] ; tmp_p [ 33 ]
= rtB . hwb0fhnhyj [ 1 ] ; tmp_p [ 34 ] = rtB . hwb0fhnhyj [ 2 ] ; tmp_p [ 35
] = rtB . hwb0fhnhyj [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB .
kay4eihbv3 [ 0 ] ; tmp_p [ 37 ] = rtB . kay4eihbv3 [ 1 ] ; tmp_p [ 38 ] = rtB
. kay4eihbv3 [ 2 ] ; tmp_p [ 39 ] = rtB . kay4eihbv3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = rtB . n12tcfek0v [ 0 ] ; tmp_p [ 41 ] = rtB . n12tcfek0v
[ 1 ] ; tmp_p [ 42 ] = rtB . n12tcfek0v [ 2 ] ; tmp_p [ 43 ] = rtB .
n12tcfek0v [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . j3iozjgadg [ 0 ]
; tmp_p [ 45 ] = rtB . j3iozjgadg [ 1 ] ; tmp_p [ 46 ] = rtB . j3iozjgadg [ 2
] ; tmp_p [ 47 ] = rtB . j3iozjgadg [ 3 ] ; tmp_e [ 12 ] = 48 ;
simulationData -> mData -> mInputValues . mN = 48 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
a5nq0aeena ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW .
ppxvh3soys , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . jxqq0kd055 += rtP .
DiscreteTimeIntegrator_gainval_bqrugbnomn * rtB . etinqsqgwm ; rtDW .
d1ymyg1puf += rtP . DiscreteTimeIntegrator2_gainval_pc04oat5qt * rtB .
oybfikvjov ; rtDW . pniui21m2m += rtP .
DiscreteTimeIntegrator4_gainval_evjywzf5xi * rtB . ezct1usiup ; rtDW .
hom4bzatts += rtP . DiscreteTimeIntegrator1_gainval_ewt1b41uct * rtB .
cjjpsdh0ci ; rtDW . jx1pyei5iz += rtP .
DiscreteTimeIntegrator3_gainval_enrtoduzvs * rtB . e1iv3qcjfw ; rtDW .
goe0ybllxx += rtP . DiscreteTimeIntegrator5_gainval_hcdzw0pxjl * rtB .
f21sygsmjw ; rtDW . f32pecj5j3 += rtP .
DiscreteTimeIntegrator_gainval_arhh4ywx41 * rtB . n44n3mb43k ; rtDW .
fbdsqnrbvi += rtP . DiscreteTimeIntegrator2_gainval_mru0uvxpda * rtB .
kdz4sa51a2 ; rtDW . gqp5ng5ipd += rtP .
DiscreteTimeIntegrator4_gainval_ka5z4lhm2t * rtB . fuszcwwkvv ; rtDW .
ikqao11oir += rtP . DiscreteTimeIntegrator1_gainval_k0tywldiut * rtB .
gms5jrejo1 ; rtDW . mhqnkldn3f += rtP .
DiscreteTimeIntegrator3_gainval_e0sgkyvmac * rtB . g1ivuzn5or ; rtDW .
d0njjfa3vf += rtP . DiscreteTimeIntegrator5_gainval_gpu3xgwyyp * rtB .
golkvscg5k ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid )
{ UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 48 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 13 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot
-> lpairqjonl [ 0 ] = rtX . lpairqjonl [ 1 ] ; _rtXdot -> lpairqjonl [ 1 ] =
( ( rtDW . jwb0edvt43 - rtX . lpairqjonl [ 0 ] ) * 1000.0 - 2.0 * rtX .
lpairqjonl [ 1 ] ) * 1000.0 ; _rtXdot -> fh5i13vgil [ 0 ] = rtX . fh5i13vgil
[ 1 ] ; _rtXdot -> fh5i13vgil [ 1 ] = ( ( rtDW . ipny03bssk - rtX .
fh5i13vgil [ 0 ] ) * 1000.0 - 2.0 * rtX . fh5i13vgil [ 1 ] ) * 1000.0 ;
_rtXdot -> fg3lujycqi [ 0 ] = rtX . fg3lujycqi [ 1 ] ; _rtXdot -> fg3lujycqi
[ 1 ] = ( ( rtDW . c1tuvnswoj - rtX . fg3lujycqi [ 0 ] ) * 1000.0 - 2.0 * rtX
. fg3lujycqi [ 1 ] ) * 1000.0 ; _rtXdot -> h52fy5njki [ 0 ] = rtX .
h52fy5njki [ 1 ] ; _rtXdot -> h52fy5njki [ 1 ] = ( ( rtDW . lccx42ungl - rtX
. h52fy5njki [ 0 ] ) * 1000.0 - 2.0 * rtX . h52fy5njki [ 1 ] ) * 1000.0 ;
_rtXdot -> nljb50mtnx [ 0 ] = rtX . nljb50mtnx [ 1 ] ; _rtXdot -> nljb50mtnx
[ 1 ] = ( ( rtDW . bafnhq4yd3 - rtX . nljb50mtnx [ 0 ] ) * 1000.0 - 2.0 * rtX
. nljb50mtnx [ 1 ] ) * 1000.0 ; _rtXdot -> kpgc53iylb [ 0 ] = rtX .
kpgc53iylb [ 1 ] ; _rtXdot -> kpgc53iylb [ 1 ] = ( ( rtDW . l4isjnnapb - rtX
. kpgc53iylb [ 0 ] ) * 1000.0 - 2.0 * rtX . kpgc53iylb [ 1 ] ) * 1000.0 ;
_rtXdot -> jwl1hig4sv [ 0 ] = rtX . jwl1hig4sv [ 1 ] ; _rtXdot -> jwl1hig4sv
[ 1 ] = ( ( rtDW . p4axc0cn0o - rtX . jwl1hig4sv [ 0 ] ) * 1000.0 - 2.0 * rtX
. jwl1hig4sv [ 1 ] ) * 1000.0 ; _rtXdot -> pjflr3aosk [ 0 ] = rtX .
pjflr3aosk [ 1 ] ; _rtXdot -> pjflr3aosk [ 1 ] = ( ( rtDW . pabqpgk5jq - rtX
. pjflr3aosk [ 0 ] ) * 1000.0 - 2.0 * rtX . pjflr3aosk [ 1 ] ) * 1000.0 ;
_rtXdot -> gasvzlyrg1 [ 0 ] = rtX . gasvzlyrg1 [ 1 ] ; _rtXdot -> gasvzlyrg1
[ 1 ] = ( ( rtDW . ondxfnv25y - rtX . gasvzlyrg1 [ 0 ] ) * 1000.0 - 2.0 * rtX
. gasvzlyrg1 [ 1 ] ) * 1000.0 ; _rtXdot -> pwmx2sn23r [ 0 ] = rtX .
pwmx2sn23r [ 1 ] ; _rtXdot -> pwmx2sn23r [ 1 ] = ( ( rtDW . dnzas3pxcw - rtX
. pwmx2sn23r [ 0 ] ) * 1000.0 - 2.0 * rtX . pwmx2sn23r [ 1 ] ) * 1000.0 ;
_rtXdot -> egdystg2ir [ 0 ] = rtX . egdystg2ir [ 1 ] ; _rtXdot -> egdystg2ir
[ 1 ] = ( ( rtDW . l1vruekg2n - rtX . egdystg2ir [ 0 ] ) * 1000.0 - 2.0 * rtX
. egdystg2ir [ 1 ] ) * 1000.0 ; _rtXdot -> ifhvvpi2pj [ 0 ] = rtX .
ifhvvpi2pj [ 1 ] ; _rtXdot -> ifhvvpi2pj [ 1 ] = ( ( rtDW . mbg4rkv5jx - rtX
. ifhvvpi2pj [ 0 ] ) * 1000.0 - 2.0 * rtX . ifhvvpi2pj [ 1 ] ) * 1000.0 ;
simulationData = ( NeslSimulationData * ) rtDW . pwa0n2fnbt ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 18 ;
simulationData -> mData -> mContStates . mX = & rtX . iwaxtr5iwx [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . hocn5gpqnf ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
fkrpan2ou1 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0
] = rtB . itk1tzd05y [ 0 ] ; tmp_p [ 1 ] = rtB . itk1tzd05y [ 1 ] ; tmp_p [ 2
] = rtB . itk1tzd05y [ 2 ] ; tmp_p [ 3 ] = rtB . itk1tzd05y [ 3 ] ; tmp_e [ 1
] = 4 ; tmp_p [ 4 ] = rtB . cgdw5usgs2 [ 0 ] ; tmp_p [ 5 ] = rtB . cgdw5usgs2
[ 1 ] ; tmp_p [ 6 ] = rtB . cgdw5usgs2 [ 2 ] ; tmp_p [ 7 ] = rtB . cgdw5usgs2
[ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . fodbt3qoit [ 0 ] ; tmp_p [ 9 ]
= rtB . fodbt3qoit [ 1 ] ; tmp_p [ 10 ] = rtB . fodbt3qoit [ 2 ] ; tmp_p [ 11
] = rtB . fodbt3qoit [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB .
arfjjmxolk [ 0 ] ; tmp_p [ 13 ] = rtB . arfjjmxolk [ 1 ] ; tmp_p [ 14 ] = rtB
. arfjjmxolk [ 2 ] ; tmp_p [ 15 ] = rtB . arfjjmxolk [ 3 ] ; tmp_e [ 4 ] = 16
; tmp_p [ 16 ] = rtB . hnth4pq521 [ 0 ] ; tmp_p [ 17 ] = rtB . hnth4pq521 [ 1
] ; tmp_p [ 18 ] = rtB . hnth4pq521 [ 2 ] ; tmp_p [ 19 ] = rtB . hnth4pq521 [
3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . lktiyc0abo [ 0 ] ; tmp_p [ 21 ]
= rtB . lktiyc0abo [ 1 ] ; tmp_p [ 22 ] = rtB . lktiyc0abo [ 2 ] ; tmp_p [ 23
] = rtB . lktiyc0abo [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB .
gge2baxpst [ 0 ] ; tmp_p [ 25 ] = rtB . gge2baxpst [ 1 ] ; tmp_p [ 26 ] = rtB
. gge2baxpst [ 2 ] ; tmp_p [ 27 ] = rtB . gge2baxpst [ 3 ] ; tmp_e [ 7 ] = 28
; tmp_p [ 28 ] = rtB . pyqiljkwsr [ 0 ] ; tmp_p [ 29 ] = rtB . pyqiljkwsr [ 1
] ; tmp_p [ 30 ] = rtB . pyqiljkwsr [ 2 ] ; tmp_p [ 31 ] = rtB . pyqiljkwsr [
3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . hwb0fhnhyj [ 0 ] ; tmp_p [ 33 ]
= rtB . hwb0fhnhyj [ 1 ] ; tmp_p [ 34 ] = rtB . hwb0fhnhyj [ 2 ] ; tmp_p [ 35
] = rtB . hwb0fhnhyj [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB .
kay4eihbv3 [ 0 ] ; tmp_p [ 37 ] = rtB . kay4eihbv3 [ 1 ] ; tmp_p [ 38 ] = rtB
. kay4eihbv3 [ 2 ] ; tmp_p [ 39 ] = rtB . kay4eihbv3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = rtB . n12tcfek0v [ 0 ] ; tmp_p [ 41 ] = rtB . n12tcfek0v
[ 1 ] ; tmp_p [ 42 ] = rtB . n12tcfek0v [ 2 ] ; tmp_p [ 43 ] = rtB .
n12tcfek0v [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . j3iozjgadg [ 0 ]
; tmp_p [ 45 ] = rtB . j3iozjgadg [ 1 ] ; tmp_p [ 46 ] = rtB . j3iozjgadg [ 2
] ; tmp_p [ 47 ] = rtB . j3iozjgadg [ 3 ] ; tmp_e [ 12 ] = 48 ;
simulationData -> mData -> mInputValues . mN = 48 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 18 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> iwaxtr5iwx [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . a5nq0aeena ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ppxvh3soys ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 48 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 13 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. pwa0n2fnbt ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 18 ; simulationData -> mData -> mContStates . mX
= & rtX . iwaxtr5iwx [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . hocn5gpqnf ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . fkrpan2ou1 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsOkayToUpdateMode = ssIsMajorTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0
] = rtB . itk1tzd05y [ 0 ] ; tmp_p [ 1 ] = rtB . itk1tzd05y [ 1 ] ; tmp_p [ 2
] = rtB . itk1tzd05y [ 2 ] ; tmp_p [ 3 ] = rtB . itk1tzd05y [ 3 ] ; tmp_e [ 1
] = 4 ; tmp_p [ 4 ] = rtB . cgdw5usgs2 [ 0 ] ; tmp_p [ 5 ] = rtB . cgdw5usgs2
[ 1 ] ; tmp_p [ 6 ] = rtB . cgdw5usgs2 [ 2 ] ; tmp_p [ 7 ] = rtB . cgdw5usgs2
[ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . fodbt3qoit [ 0 ] ; tmp_p [ 9 ]
= rtB . fodbt3qoit [ 1 ] ; tmp_p [ 10 ] = rtB . fodbt3qoit [ 2 ] ; tmp_p [ 11
] = rtB . fodbt3qoit [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB .
arfjjmxolk [ 0 ] ; tmp_p [ 13 ] = rtB . arfjjmxolk [ 1 ] ; tmp_p [ 14 ] = rtB
. arfjjmxolk [ 2 ] ; tmp_p [ 15 ] = rtB . arfjjmxolk [ 3 ] ; tmp_e [ 4 ] = 16
; tmp_p [ 16 ] = rtB . hnth4pq521 [ 0 ] ; tmp_p [ 17 ] = rtB . hnth4pq521 [ 1
] ; tmp_p [ 18 ] = rtB . hnth4pq521 [ 2 ] ; tmp_p [ 19 ] = rtB . hnth4pq521 [
3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . lktiyc0abo [ 0 ] ; tmp_p [ 21 ]
= rtB . lktiyc0abo [ 1 ] ; tmp_p [ 22 ] = rtB . lktiyc0abo [ 2 ] ; tmp_p [ 23
] = rtB . lktiyc0abo [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB .
gge2baxpst [ 0 ] ; tmp_p [ 25 ] = rtB . gge2baxpst [ 1 ] ; tmp_p [ 26 ] = rtB
. gge2baxpst [ 2 ] ; tmp_p [ 27 ] = rtB . gge2baxpst [ 3 ] ; tmp_e [ 7 ] = 28
; tmp_p [ 28 ] = rtB . pyqiljkwsr [ 0 ] ; tmp_p [ 29 ] = rtB . pyqiljkwsr [ 1
] ; tmp_p [ 30 ] = rtB . pyqiljkwsr [ 2 ] ; tmp_p [ 31 ] = rtB . pyqiljkwsr [
3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . hwb0fhnhyj [ 0 ] ; tmp_p [ 33 ]
= rtB . hwb0fhnhyj [ 1 ] ; tmp_p [ 34 ] = rtB . hwb0fhnhyj [ 2 ] ; tmp_p [ 35
] = rtB . hwb0fhnhyj [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB .
kay4eihbv3 [ 0 ] ; tmp_p [ 37 ] = rtB . kay4eihbv3 [ 1 ] ; tmp_p [ 38 ] = rtB
. kay4eihbv3 [ 2 ] ; tmp_p [ 39 ] = rtB . kay4eihbv3 [ 3 ] ; tmp_e [ 10 ] =
40 ; tmp_p [ 40 ] = rtB . n12tcfek0v [ 0 ] ; tmp_p [ 41 ] = rtB . n12tcfek0v
[ 1 ] ; tmp_p [ 42 ] = rtB . n12tcfek0v [ 2 ] ; tmp_p [ 43 ] = rtB .
n12tcfek0v [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . j3iozjgadg [ 0 ]
; tmp_p [ 45 ] = rtB . j3iozjgadg [ 1 ] ; tmp_p [ 46 ] = rtB . j3iozjgadg [ 2
] ; tmp_p [ 47 ] = rtB . j3iozjgadg [ 3 ] ; tmp_e [ 12 ] = 48 ;
simulationData -> mData -> mInputValues . mN = 48 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
a5nq0aeena ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. ppxvh3soys , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } } void MdlZeroCrossings ( void ) { {
const double * timePtr = ( double * ) rtDW . factggsf10 . TimePtr ; int_T *
zcTimeIndices = & rtDW . cbdib2svjf [ 0 ] ; int_T zcTimeIndicesIdx = rtDW .
isi3qqu4qf ; ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> hph4zhges4 =
ssGetT ( rtS ) - timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const
double * timePtr = ( double * ) rtDW . hir5izsswk . TimePtr ; int_T *
zcTimeIndices = & rtDW . d0jyhdhshq [ 0 ] ; int_T zcTimeIndicesIdx = rtDW .
g50wjgttgc ; ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> kmrldlvgmz =
ssGetT ( rtS ) - timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const
double * timePtr = ( double * ) rtDW . gjmmdatpmk . TimePtr ; int_T *
zcTimeIndices = & rtDW . hk4x31s2wo [ 0 ] ; int_T zcTimeIndicesIdx = rtDW .
pgqbeye23i ; ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> fefpspdcey =
ssGetT ( rtS ) - timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const
double * timePtr = ( double * ) rtDW . j2ilej2aih . TimePtr ; int_T *
zcTimeIndices = & rtDW . iwgjwpwckw [ 0 ] ; int_T zcTimeIndicesIdx = rtDW .
apqtcucrxr ; ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> b2jclwx2th =
ssGetT ( rtS ) - timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const
double * timePtr = ( double * ) rtDW . mx04nd152z . TimePtr ; int_T *
zcTimeIndices = & rtDW . nwblnammfm [ 0 ] ; int_T zcTimeIndicesIdx = rtDW .
ed5n0ctaot ; ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> mxpcqnj2cd =
ssGetT ( rtS ) - timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } } void
MdlTerminate ( void ) { rt_FREE ( rtDW . factggsf10 . RSimInfoPtr ) ; rt_FREE
( rtDW . hir5izsswk . RSimInfoPtr ) ; pyu1p0gkum ( & rtDW . e12xzvaqlra ) ;
pyu1p0gkum ( & rtDW . g25aonyhee ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . a5nq0aeena ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . pwa0n2fnbt ) ; nesl_erase_simulator (
"pp/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . f4dhncxa4g
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . lcth0eskrc
) ; nesl_erase_simulator ( "pp/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; rt_FREE ( rtDW . gjmmdatpmk . RSimInfoPtr ) ;
rt_FREE ( rtDW . j2ilej2aih . RSimInfoPtr ) ; rt_FREE ( rtDW . mx04nd152z .
RSimInfoPtr ) ; } static void mr_pp_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_pp_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const
void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_pp_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_pp_restoreDataFromMxArray ( void * destData , const mxArray * srcArray ,
mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_pp_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) ; static void
mr_pp_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_pp_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i , int
j , uint_T numBits ) ; static uint_T mr_pp_extractBitFieldFromMxArray ( const
mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T
varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ;
return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_pp_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_pp_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_pp_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_pp_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) { const
uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T * )
& varData [ offset * numBytes ] , numBytes ) ; } static void
mr_pp_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_pp_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber (
destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal ) )
; } static uint_T mr_pp_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_pp_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_pp_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_pp_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) , sizeof
( rtB ) ) ; { static const char * rtdwDataFieldNames [ 117 ] = {
"rtDW.meaqqr1ua3" , "rtDW.ieis3wdkcc" , "rtDW.nsbswzebrn" , "rtDW.ftmzzvbzax"
, "rtDW.lajwkf5yel" , "rtDW.kf54lrgsgh" , "rtDW.jb4linf121" ,
"rtDW.jwb0edvt43" , "rtDW.j4ijkjeaiu" , "rtDW.ipny03bssk" , "rtDW.lcdwdtjwnt"
, "rtDW.c1tuvnswoj" , "rtDW.bmfwcfe3zy" , "rtDW.lccx42ungl" ,
"rtDW.csttssg2jj" , "rtDW.bafnhq4yd3" , "rtDW.ls50tk5yor" , "rtDW.l4isjnnapb"
, "rtDW.cm2ish3fp4" , "rtDW.lwjbyb5hax" , "rtDW.iyyt53kmyv" ,
"rtDW.domwprwtea" , "rtDW.hw4jmko5ut" , "rtDW.dlylyzqh44" , "rtDW.d1vruvafzv"
, "rtDW.g2tsjufkz5" , "rtDW.p4axc0cn0o" , "rtDW.jwqmhs0s0n" ,
"rtDW.pabqpgk5jq" , "rtDW.enkp2q4jgz" , "rtDW.ondxfnv25y" , "rtDW.mcdurxpqfs"
, "rtDW.dnzas3pxcw" , "rtDW.oghejnwob3" , "rtDW.l1vruekg2n" ,
"rtDW.la42o3xgh0" , "rtDW.mbg4rkv5jx" , "rtDW.cvogulxpog" , "rtDW.jxqq0kd055"
, "rtDW.d1ymyg1puf" , "rtDW.pniui21m2m" , "rtDW.hom4bzatts" ,
"rtDW.jx1pyei5iz" , "rtDW.goe0ybllxx" , "rtDW.f32pecj5j3" , "rtDW.fbdsqnrbvi"
, "rtDW.gqp5ng5ipd" , "rtDW.ikqao11oir" , "rtDW.mhqnkldn3f" ,
"rtDW.d0njjfa3vf" , "rtDW.hocn5gpqnf" , "rtDW.lpz0yfj0uv" , "rtDW.obx514d20e"
, "rtDW.fjgxwmabrc" , "rtDW.oc1xjxz5rw" , "rtDW.enz403h0md" ,
"rtDW.lvvl3bpreb" , "rtDW.ocqk3jofvr" , "rtDW.kso5hmoa3x" , "rtDW.pvpfr5em5t"
, "rtDW.of0mgcawwf" , "rtDW.bth2mqorax" , "rtDW.cbdib2svjf" ,
"rtDW.isi3qqu4qf" , "rtDW.gfnv1aupmz" , "rtDW.d0jyhdhshq" , "rtDW.g50wjgttgc"
, "rtDW.fq2wjlgbnm" , "rtDW.fkrpan2ou1" , "rtDW.ce5lqmurvv" ,
"rtDW.hk4x31s2wo" , "rtDW.pgqbeye23i" , "rtDW.hdj2esbagy" , "rtDW.iwgjwpwckw"
, "rtDW.apqtcucrxr" , "rtDW.cg2bvqjvra" , "rtDW.nwblnammfm" ,
"rtDW.ed5n0ctaot" , "rtDW.pxh3rjh5u4" , "rtDW.nkznjpj2u5" , "rtDW.aza3hrpxtf"
, "rtDW.afqg540hpl" , "rtDW.poimg20uht" , "rtDW.fcodrholju.eyc0ugbpip" ,
"rtDW.g25aonyhee.ajal1iwi1z" , "rtDW.g25aonyhee.aqlkdng0y4" ,
"rtDW.g25aonyhee.lhjucr5zrp" , "rtDW.g25aonyhee.kuoviqlwy5" ,
"rtDW.g25aonyhee.h2pnsauhxt" , "rtDW.g25aonyhee.h04ewpy4nc" ,
"rtDW.g25aonyhee.mjpcafci0c" , "rtDW.g25aonyhee.j1qqjbtj53" ,
"rtDW.g25aonyhee.kikz1keduf" , "rtDW.g25aonyhee.ixcfunz3ep" ,
"rtDW.g25aonyhee.an5olz5vaz" , "rtDW.g25aonyhee.gc2t2mxxcd" ,
"rtDW.g25aonyhee.cbi103hnwr" , "rtDW.g25aonyhee.jfjlhhuyaj" ,
"rtDW.g25aonyhee.ag2pn0fjxu" , "rtDW.g25aonyhee.ksjivjyfnw" ,
"rtDW.flhn5odxwk.eyc0ugbpip" , "rtDW.e12xzvaqlra.ajal1iwi1z" ,
"rtDW.e12xzvaqlra.aqlkdng0y4" , "rtDW.e12xzvaqlra.lhjucr5zrp" ,
"rtDW.e12xzvaqlra.kuoviqlwy5" , "rtDW.e12xzvaqlra.h2pnsauhxt" ,
"rtDW.e12xzvaqlra.h04ewpy4nc" , "rtDW.e12xzvaqlra.mjpcafci0c" ,
"rtDW.e12xzvaqlra.j1qqjbtj53" , "rtDW.e12xzvaqlra.kikz1keduf" ,
"rtDW.e12xzvaqlra.ixcfunz3ep" , "rtDW.e12xzvaqlra.an5olz5vaz" ,
"rtDW.e12xzvaqlra.gc2t2mxxcd" , "rtDW.e12xzvaqlra.cbi103hnwr" ,
"rtDW.e12xzvaqlra.jfjlhhuyaj" , "rtDW.e12xzvaqlra.ag2pn0fjxu" ,
"rtDW.e12xzvaqlra.ksjivjyfnw" , } ; mxArray * rtdwData = mxCreateStructMatrix
( 1 , 1 , 117 , rtdwDataFieldNames ) ; mr_pp_cacheDataAsMxArray ( rtdwData ,
0 , 0 , ( const void * ) & ( rtDW . meaqqr1ua3 ) , sizeof ( rtDW . meaqqr1ua3
) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW
. ieis3wdkcc ) , sizeof ( rtDW . ieis3wdkcc ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 2 , ( const void * ) & ( rtDW . nsbswzebrn ) , sizeof ( rtDW .
nsbswzebrn ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( rtDW . ftmzzvbzax ) , sizeof ( rtDW . ftmzzvbzax ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW .
lajwkf5yel ) , sizeof ( rtDW . lajwkf5yel ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( rtDW . kf54lrgsgh ) , sizeof ( rtDW .
kf54lrgsgh ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( rtDW . jb4linf121 ) , sizeof ( rtDW . jb4linf121 ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW .
jwb0edvt43 ) , sizeof ( rtDW . jwb0edvt43 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 8 , ( const void * ) & ( rtDW . j4ijkjeaiu ) , sizeof ( rtDW .
j4ijkjeaiu ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( rtDW . ipny03bssk ) , sizeof ( rtDW . ipny03bssk ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & ( rtDW .
lcdwdtjwnt ) , sizeof ( rtDW . lcdwdtjwnt ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( rtDW . c1tuvnswoj ) , sizeof ( rtDW
. c1tuvnswoj ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . bmfwcfe3zy ) , sizeof ( rtDW . bmfwcfe3zy ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & ( rtDW .
lccx42ungl ) , sizeof ( rtDW . lccx42ungl ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( rtDW . csttssg2jj ) , sizeof ( rtDW
. csttssg2jj ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . bafnhq4yd3 ) , sizeof ( rtDW . bafnhq4yd3 ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & ( rtDW .
ls50tk5yor ) , sizeof ( rtDW . ls50tk5yor ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( rtDW . l4isjnnapb ) , sizeof ( rtDW
. l4isjnnapb ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . cm2ish3fp4 ) , sizeof ( rtDW . cm2ish3fp4 ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & ( rtDW .
lwjbyb5hax ) , sizeof ( rtDW . lwjbyb5hax ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( rtDW . iyyt53kmyv ) , sizeof ( rtDW
. iyyt53kmyv ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const
void * ) & ( rtDW . domwprwtea ) , sizeof ( rtDW . domwprwtea ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & ( rtDW .
hw4jmko5ut ) , sizeof ( rtDW . hw4jmko5ut ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( rtDW . dlylyzqh44 ) , sizeof ( rtDW
. dlylyzqh44 ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( rtDW . d1vruvafzv ) , sizeof ( rtDW . d1vruvafzv ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & ( rtDW .
g2tsjufkz5 ) , sizeof ( rtDW . g2tsjufkz5 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( rtDW . p4axc0cn0o ) , sizeof ( rtDW
. p4axc0cn0o ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( rtDW . jwqmhs0s0n ) , sizeof ( rtDW . jwqmhs0s0n ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & ( rtDW .
pabqpgk5jq ) , sizeof ( rtDW . pabqpgk5jq ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( rtDW . enkp2q4jgz ) , sizeof ( rtDW
. enkp2q4jgz ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( rtDW . ondxfnv25y ) , sizeof ( rtDW . ondxfnv25y ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & ( rtDW .
mcdurxpqfs ) , sizeof ( rtDW . mcdurxpqfs ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( rtDW . dnzas3pxcw ) , sizeof ( rtDW
. dnzas3pxcw ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const
void * ) & ( rtDW . oghejnwob3 ) , sizeof ( rtDW . oghejnwob3 ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & ( rtDW .
l1vruekg2n ) , sizeof ( rtDW . l1vruekg2n ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( rtDW . la42o3xgh0 ) , sizeof ( rtDW
. la42o3xgh0 ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const
void * ) & ( rtDW . mbg4rkv5jx ) , sizeof ( rtDW . mbg4rkv5jx ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & ( rtDW .
cvogulxpog ) , sizeof ( rtDW . cvogulxpog ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( rtDW . jxqq0kd055 ) , sizeof ( rtDW
. jxqq0kd055 ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const
void * ) & ( rtDW . d1ymyg1puf ) , sizeof ( rtDW . d1ymyg1puf ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & ( rtDW .
pniui21m2m ) , sizeof ( rtDW . pniui21m2m ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( rtDW . hom4bzatts ) , sizeof ( rtDW
. hom4bzatts ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( rtDW . jx1pyei5iz ) , sizeof ( rtDW . jx1pyei5iz ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & ( rtDW .
goe0ybllxx ) , sizeof ( rtDW . goe0ybllxx ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( rtDW . f32pecj5j3 ) , sizeof ( rtDW
. f32pecj5j3 ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const
void * ) & ( rtDW . fbdsqnrbvi ) , sizeof ( rtDW . fbdsqnrbvi ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & ( rtDW .
gqp5ng5ipd ) , sizeof ( rtDW . gqp5ng5ipd ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( rtDW . ikqao11oir ) , sizeof ( rtDW
. ikqao11oir ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const
void * ) & ( rtDW . mhqnkldn3f ) , sizeof ( rtDW . mhqnkldn3f ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & ( rtDW .
d0njjfa3vf ) , sizeof ( rtDW . d0njjfa3vf ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 50 , ( const void * ) & ( rtDW . hocn5gpqnf ) , sizeof ( rtDW
. hocn5gpqnf ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const
void * ) & ( rtDW . lpz0yfj0uv ) , sizeof ( rtDW . lpz0yfj0uv ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & ( rtDW .
obx514d20e ) , sizeof ( rtDW . obx514d20e ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 53 , ( const void * ) & ( rtDW . fjgxwmabrc ) , sizeof ( rtDW
. fjgxwmabrc ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const
void * ) & ( rtDW . oc1xjxz5rw ) , sizeof ( rtDW . oc1xjxz5rw ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & ( rtDW .
enz403h0md ) , sizeof ( rtDW . enz403h0md ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 56 , ( const void * ) & ( rtDW . lvvl3bpreb ) , sizeof ( rtDW
. lvvl3bpreb ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const
void * ) & ( rtDW . ocqk3jofvr ) , sizeof ( rtDW . ocqk3jofvr ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & ( rtDW .
kso5hmoa3x ) , sizeof ( rtDW . kso5hmoa3x ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 59 , ( const void * ) & ( rtDW . pvpfr5em5t ) , sizeof ( rtDW
. pvpfr5em5t ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const
void * ) & ( rtDW . of0mgcawwf ) , sizeof ( rtDW . of0mgcawwf ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & ( rtDW .
bth2mqorax ) , sizeof ( rtDW . bth2mqorax ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 62 , ( const void * ) & ( rtDW . cbdib2svjf ) , sizeof ( rtDW
. cbdib2svjf ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const
void * ) & ( rtDW . isi3qqu4qf ) , sizeof ( rtDW . isi3qqu4qf ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & ( rtDW .
gfnv1aupmz ) , sizeof ( rtDW . gfnv1aupmz ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 65 , ( const void * ) & ( rtDW . d0jyhdhshq ) , sizeof ( rtDW
. d0jyhdhshq ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const
void * ) & ( rtDW . g50wjgttgc ) , sizeof ( rtDW . g50wjgttgc ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & ( rtDW .
fq2wjlgbnm ) , sizeof ( rtDW . fq2wjlgbnm ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 68 , ( const void * ) & ( rtDW . fkrpan2ou1 ) , sizeof ( rtDW
. fkrpan2ou1 ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const
void * ) & ( rtDW . ce5lqmurvv ) , sizeof ( rtDW . ce5lqmurvv ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & ( rtDW .
hk4x31s2wo ) , sizeof ( rtDW . hk4x31s2wo ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 71 , ( const void * ) & ( rtDW . pgqbeye23i ) , sizeof ( rtDW
. pgqbeye23i ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const
void * ) & ( rtDW . hdj2esbagy ) , sizeof ( rtDW . hdj2esbagy ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & ( rtDW .
iwgjwpwckw ) , sizeof ( rtDW . iwgjwpwckw ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 74 , ( const void * ) & ( rtDW . apqtcucrxr ) , sizeof ( rtDW
. apqtcucrxr ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const
void * ) & ( rtDW . cg2bvqjvra ) , sizeof ( rtDW . cg2bvqjvra ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & ( rtDW .
nwblnammfm ) , sizeof ( rtDW . nwblnammfm ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 77 , ( const void * ) & ( rtDW . ed5n0ctaot ) , sizeof ( rtDW
. ed5n0ctaot ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const
void * ) & ( rtDW . pxh3rjh5u4 ) , sizeof ( rtDW . pxh3rjh5u4 ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & ( rtDW .
nkznjpj2u5 ) , sizeof ( rtDW . nkznjpj2u5 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 80 , ( const void * ) & ( rtDW . aza3hrpxtf ) , sizeof ( rtDW
. aza3hrpxtf ) ) ; mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const
void * ) & ( rtDW . afqg540hpl ) , sizeof ( rtDW . afqg540hpl ) ) ;
mr_pp_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void * ) & ( rtDW .
poimg20uht ) , sizeof ( rtDW . poimg20uht ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 83 , ( const void * ) & ( rtDW . fcodrholju . eyc0ugbpip ) ,
sizeof ( rtDW . fcodrholju . eyc0ugbpip ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 84 , ( const void * ) & ( rtDW . g25aonyhee . ajal1iwi1z ) ,
sizeof ( rtDW . g25aonyhee . ajal1iwi1z ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 85 , ( const void * ) & ( rtDW . g25aonyhee . aqlkdng0y4 ) ,
sizeof ( rtDW . g25aonyhee . aqlkdng0y4 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 86 , ( const void * ) & ( rtDW . g25aonyhee . lhjucr5zrp ) ,
sizeof ( rtDW . g25aonyhee . lhjucr5zrp ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 87 , ( const void * ) & ( rtDW . g25aonyhee . kuoviqlwy5 ) ,
sizeof ( rtDW . g25aonyhee . kuoviqlwy5 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 88 , ( const void * ) & ( rtDW . g25aonyhee . h2pnsauhxt ) ,
sizeof ( rtDW . g25aonyhee . h2pnsauhxt ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 89 , ( const void * ) & ( rtDW . g25aonyhee . h04ewpy4nc ) ,
sizeof ( rtDW . g25aonyhee . h04ewpy4nc ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 90 , ( const void * ) & ( rtDW . g25aonyhee . mjpcafci0c ) ,
sizeof ( rtDW . g25aonyhee . mjpcafci0c ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 91 , ( const void * ) & ( rtDW . g25aonyhee . j1qqjbtj53 ) ,
sizeof ( rtDW . g25aonyhee . j1qqjbtj53 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 92 , ( const void * ) & ( rtDW . g25aonyhee . kikz1keduf ) ,
sizeof ( rtDW . g25aonyhee . kikz1keduf ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 93 , ( const void * ) & ( rtDW . g25aonyhee . ixcfunz3ep ) ,
sizeof ( rtDW . g25aonyhee . ixcfunz3ep ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 94 , ( const void * ) & ( rtDW . g25aonyhee . an5olz5vaz ) ,
sizeof ( rtDW . g25aonyhee . an5olz5vaz ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 95 , ( const void * ) & ( rtDW . g25aonyhee . gc2t2mxxcd ) ,
sizeof ( rtDW . g25aonyhee . gc2t2mxxcd ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 96 , ( const void * ) & ( rtDW . g25aonyhee . cbi103hnwr ) ,
sizeof ( rtDW . g25aonyhee . cbi103hnwr ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 97 , ( const void * ) & ( rtDW . g25aonyhee . jfjlhhuyaj ) ,
sizeof ( rtDW . g25aonyhee . jfjlhhuyaj ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 98 , ( const void * ) & ( rtDW . g25aonyhee . ag2pn0fjxu ) ,
sizeof ( rtDW . g25aonyhee . ag2pn0fjxu ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 99 , ( const void * ) & ( rtDW . g25aonyhee . ksjivjyfnw ) ,
sizeof ( rtDW . g25aonyhee . ksjivjyfnw ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 100 , ( const void * ) & ( rtDW . flhn5odxwk . eyc0ugbpip ) ,
sizeof ( rtDW . flhn5odxwk . eyc0ugbpip ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 101 , ( const void * ) & ( rtDW . e12xzvaqlra . ajal1iwi1z ) ,
sizeof ( rtDW . e12xzvaqlra . ajal1iwi1z ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 102 , ( const void * ) & ( rtDW . e12xzvaqlra . aqlkdng0y4 ) ,
sizeof ( rtDW . e12xzvaqlra . aqlkdng0y4 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 103 , ( const void * ) & ( rtDW . e12xzvaqlra . lhjucr5zrp ) ,
sizeof ( rtDW . e12xzvaqlra . lhjucr5zrp ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 104 , ( const void * ) & ( rtDW . e12xzvaqlra . kuoviqlwy5 ) ,
sizeof ( rtDW . e12xzvaqlra . kuoviqlwy5 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 105 , ( const void * ) & ( rtDW . e12xzvaqlra . h2pnsauhxt ) ,
sizeof ( rtDW . e12xzvaqlra . h2pnsauhxt ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 106 , ( const void * ) & ( rtDW . e12xzvaqlra . h04ewpy4nc ) ,
sizeof ( rtDW . e12xzvaqlra . h04ewpy4nc ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 107 , ( const void * ) & ( rtDW . e12xzvaqlra . mjpcafci0c ) ,
sizeof ( rtDW . e12xzvaqlra . mjpcafci0c ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 108 , ( const void * ) & ( rtDW . e12xzvaqlra . j1qqjbtj53 ) ,
sizeof ( rtDW . e12xzvaqlra . j1qqjbtj53 ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 109 , ( const void * ) & ( rtDW . e12xzvaqlra . kikz1keduf ) ,
sizeof ( rtDW . e12xzvaqlra . kikz1keduf ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 110 , ( const void * ) & ( rtDW . e12xzvaqlra . ixcfunz3ep ) ,
sizeof ( rtDW . e12xzvaqlra . ixcfunz3ep ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 111 , ( const void * ) & ( rtDW . e12xzvaqlra . an5olz5vaz ) ,
sizeof ( rtDW . e12xzvaqlra . an5olz5vaz ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 112 , ( const void * ) & ( rtDW . e12xzvaqlra . gc2t2mxxcd ) ,
sizeof ( rtDW . e12xzvaqlra . gc2t2mxxcd ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 113 , ( const void * ) & ( rtDW . e12xzvaqlra . cbi103hnwr ) ,
sizeof ( rtDW . e12xzvaqlra . cbi103hnwr ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 114 , ( const void * ) & ( rtDW . e12xzvaqlra . jfjlhhuyaj ) ,
sizeof ( rtDW . e12xzvaqlra . jfjlhhuyaj ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 115 , ( const void * ) & ( rtDW . e12xzvaqlra . ag2pn0fjxu ) ,
sizeof ( rtDW . e12xzvaqlra . ag2pn0fjxu ) ) ; mr_pp_cacheDataAsMxArray (
rtdwData , 0 , 116 , ( const void * ) & ( rtDW . e12xzvaqlra . ksjivjyfnw ) ,
sizeof ( rtDW . e12xzvaqlra . ksjivjyfnw ) ) ; mxSetFieldByNumber ( ssDW , 0
, 1 , rtdwData ) ; } return ssDW ; } void mr_pp_SetDWork ( const mxArray *
ssDW ) { ( void ) ssDW ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtB )
, ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_pp_restoreDataFromMxArray ( ( void *
) & ( rtDW . meaqqr1ua3 ) , rtdwData , 0 , 0 , sizeof ( rtDW . meaqqr1ua3 ) )
; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . ieis3wdkcc ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . ieis3wdkcc ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . nsbswzebrn ) , rtdwData
, 0 , 2 , sizeof ( rtDW . nsbswzebrn ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . ftmzzvbzax ) , rtdwData , 0 , 3 , sizeof ( rtDW .
ftmzzvbzax ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lajwkf5yel ) , rtdwData , 0 , 4 , sizeof ( rtDW . lajwkf5yel ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . kf54lrgsgh ) , rtdwData
, 0 , 5 , sizeof ( rtDW . kf54lrgsgh ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . jb4linf121 ) , rtdwData , 0 , 6 , sizeof ( rtDW .
jb4linf121 ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jwb0edvt43 ) , rtdwData , 0 , 7 , sizeof ( rtDW . jwb0edvt43 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . j4ijkjeaiu ) , rtdwData
, 0 , 8 , sizeof ( rtDW . j4ijkjeaiu ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . ipny03bssk ) , rtdwData , 0 , 9 , sizeof ( rtDW .
ipny03bssk ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lcdwdtjwnt ) , rtdwData , 0 , 10 , sizeof ( rtDW . lcdwdtjwnt ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . c1tuvnswoj ) , rtdwData
, 0 , 11 , sizeof ( rtDW . c1tuvnswoj ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . bmfwcfe3zy ) , rtdwData , 0 , 12 , sizeof ( rtDW .
bmfwcfe3zy ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lccx42ungl ) , rtdwData , 0 , 13 , sizeof ( rtDW . lccx42ungl ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . csttssg2jj ) , rtdwData
, 0 , 14 , sizeof ( rtDW . csttssg2jj ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . bafnhq4yd3 ) , rtdwData , 0 , 15 , sizeof ( rtDW .
bafnhq4yd3 ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ls50tk5yor ) , rtdwData , 0 , 16 , sizeof ( rtDW . ls50tk5yor ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . l4isjnnapb ) , rtdwData
, 0 , 17 , sizeof ( rtDW . l4isjnnapb ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . cm2ish3fp4 ) , rtdwData , 0 , 18 , sizeof ( rtDW .
cm2ish3fp4 ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lwjbyb5hax ) , rtdwData , 0 , 19 , sizeof ( rtDW . lwjbyb5hax ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . iyyt53kmyv ) , rtdwData
, 0 , 20 , sizeof ( rtDW . iyyt53kmyv ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . domwprwtea ) , rtdwData , 0 , 21 , sizeof ( rtDW .
domwprwtea ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hw4jmko5ut ) , rtdwData , 0 , 22 , sizeof ( rtDW . hw4jmko5ut ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . dlylyzqh44 ) , rtdwData
, 0 , 23 , sizeof ( rtDW . dlylyzqh44 ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . d1vruvafzv ) , rtdwData , 0 , 24 , sizeof ( rtDW .
d1vruvafzv ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g2tsjufkz5 ) , rtdwData , 0 , 25 , sizeof ( rtDW . g2tsjufkz5 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . p4axc0cn0o ) , rtdwData
, 0 , 26 , sizeof ( rtDW . p4axc0cn0o ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . jwqmhs0s0n ) , rtdwData , 0 , 27 , sizeof ( rtDW .
jwqmhs0s0n ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pabqpgk5jq ) , rtdwData , 0 , 28 , sizeof ( rtDW . pabqpgk5jq ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . enkp2q4jgz ) , rtdwData
, 0 , 29 , sizeof ( rtDW . enkp2q4jgz ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . ondxfnv25y ) , rtdwData , 0 , 30 , sizeof ( rtDW .
ondxfnv25y ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mcdurxpqfs ) , rtdwData , 0 , 31 , sizeof ( rtDW . mcdurxpqfs ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . dnzas3pxcw ) , rtdwData
, 0 , 32 , sizeof ( rtDW . dnzas3pxcw ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . oghejnwob3 ) , rtdwData , 0 , 33 , sizeof ( rtDW .
oghejnwob3 ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l1vruekg2n ) , rtdwData , 0 , 34 , sizeof ( rtDW . l1vruekg2n ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . la42o3xgh0 ) , rtdwData
, 0 , 35 , sizeof ( rtDW . la42o3xgh0 ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . mbg4rkv5jx ) , rtdwData , 0 , 36 , sizeof ( rtDW .
mbg4rkv5jx ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cvogulxpog ) , rtdwData , 0 , 37 , sizeof ( rtDW . cvogulxpog ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . jxqq0kd055 ) , rtdwData
, 0 , 38 , sizeof ( rtDW . jxqq0kd055 ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . d1ymyg1puf ) , rtdwData , 0 , 39 , sizeof ( rtDW .
d1ymyg1puf ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pniui21m2m ) , rtdwData , 0 , 40 , sizeof ( rtDW . pniui21m2m ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . hom4bzatts ) , rtdwData
, 0 , 41 , sizeof ( rtDW . hom4bzatts ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . jx1pyei5iz ) , rtdwData , 0 , 42 , sizeof ( rtDW .
jx1pyei5iz ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
goe0ybllxx ) , rtdwData , 0 , 43 , sizeof ( rtDW . goe0ybllxx ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . f32pecj5j3 ) , rtdwData
, 0 , 44 , sizeof ( rtDW . f32pecj5j3 ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . fbdsqnrbvi ) , rtdwData , 0 , 45 , sizeof ( rtDW .
fbdsqnrbvi ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gqp5ng5ipd ) , rtdwData , 0 , 46 , sizeof ( rtDW . gqp5ng5ipd ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . ikqao11oir ) , rtdwData
, 0 , 47 , sizeof ( rtDW . ikqao11oir ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . mhqnkldn3f ) , rtdwData , 0 , 48 , sizeof ( rtDW .
mhqnkldn3f ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d0njjfa3vf ) , rtdwData , 0 , 49 , sizeof ( rtDW . d0njjfa3vf ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . hocn5gpqnf ) , rtdwData
, 0 , 50 , sizeof ( rtDW . hocn5gpqnf ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . lpz0yfj0uv ) , rtdwData , 0 , 51 , sizeof ( rtDW .
lpz0yfj0uv ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
obx514d20e ) , rtdwData , 0 , 52 , sizeof ( rtDW . obx514d20e ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . fjgxwmabrc ) , rtdwData
, 0 , 53 , sizeof ( rtDW . fjgxwmabrc ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . oc1xjxz5rw ) , rtdwData , 0 , 54 , sizeof ( rtDW .
oc1xjxz5rw ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
enz403h0md ) , rtdwData , 0 , 55 , sizeof ( rtDW . enz403h0md ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . lvvl3bpreb ) , rtdwData
, 0 , 56 , sizeof ( rtDW . lvvl3bpreb ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . ocqk3jofvr ) , rtdwData , 0 , 57 , sizeof ( rtDW .
ocqk3jofvr ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kso5hmoa3x ) , rtdwData , 0 , 58 , sizeof ( rtDW . kso5hmoa3x ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . pvpfr5em5t ) , rtdwData
, 0 , 59 , sizeof ( rtDW . pvpfr5em5t ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . of0mgcawwf ) , rtdwData , 0 , 60 , sizeof ( rtDW .
of0mgcawwf ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bth2mqorax ) , rtdwData , 0 , 61 , sizeof ( rtDW . bth2mqorax ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . cbdib2svjf ) , rtdwData
, 0 , 62 , sizeof ( rtDW . cbdib2svjf ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . isi3qqu4qf ) , rtdwData , 0 , 63 , sizeof ( rtDW .
isi3qqu4qf ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gfnv1aupmz ) , rtdwData , 0 , 64 , sizeof ( rtDW . gfnv1aupmz ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . d0jyhdhshq ) , rtdwData
, 0 , 65 , sizeof ( rtDW . d0jyhdhshq ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . g50wjgttgc ) , rtdwData , 0 , 66 , sizeof ( rtDW .
g50wjgttgc ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fq2wjlgbnm ) , rtdwData , 0 , 67 , sizeof ( rtDW . fq2wjlgbnm ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . fkrpan2ou1 ) , rtdwData
, 0 , 68 , sizeof ( rtDW . fkrpan2ou1 ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . ce5lqmurvv ) , rtdwData , 0 , 69 , sizeof ( rtDW .
ce5lqmurvv ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hk4x31s2wo ) , rtdwData , 0 , 70 , sizeof ( rtDW . hk4x31s2wo ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . pgqbeye23i ) , rtdwData
, 0 , 71 , sizeof ( rtDW . pgqbeye23i ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . hdj2esbagy ) , rtdwData , 0 , 72 , sizeof ( rtDW .
hdj2esbagy ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iwgjwpwckw ) , rtdwData , 0 , 73 , sizeof ( rtDW . iwgjwpwckw ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . apqtcucrxr ) , rtdwData
, 0 , 74 , sizeof ( rtDW . apqtcucrxr ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . cg2bvqjvra ) , rtdwData , 0 , 75 , sizeof ( rtDW .
cg2bvqjvra ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nwblnammfm ) , rtdwData , 0 , 76 , sizeof ( rtDW . nwblnammfm ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . ed5n0ctaot ) , rtdwData
, 0 , 77 , sizeof ( rtDW . ed5n0ctaot ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . pxh3rjh5u4 ) , rtdwData , 0 , 78 , sizeof ( rtDW .
pxh3rjh5u4 ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nkznjpj2u5 ) , rtdwData , 0 , 79 , sizeof ( rtDW . nkznjpj2u5 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . aza3hrpxtf ) , rtdwData
, 0 , 80 , sizeof ( rtDW . aza3hrpxtf ) ) ; mr_pp_restoreDataFromMxArray ( (
void * ) & ( rtDW . afqg540hpl ) , rtdwData , 0 , 81 , sizeof ( rtDW .
afqg540hpl ) ) ; mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW .
poimg20uht ) , rtdwData , 0 , 82 , sizeof ( rtDW . poimg20uht ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . fcodrholju . eyc0ugbpip
) , rtdwData , 0 , 83 , sizeof ( rtDW . fcodrholju . eyc0ugbpip ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . ajal1iwi1z
) , rtdwData , 0 , 84 , sizeof ( rtDW . g25aonyhee . ajal1iwi1z ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . aqlkdng0y4
) , rtdwData , 0 , 85 , sizeof ( rtDW . g25aonyhee . aqlkdng0y4 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . lhjucr5zrp
) , rtdwData , 0 , 86 , sizeof ( rtDW . g25aonyhee . lhjucr5zrp ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . kuoviqlwy5
) , rtdwData , 0 , 87 , sizeof ( rtDW . g25aonyhee . kuoviqlwy5 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . h2pnsauhxt
) , rtdwData , 0 , 88 , sizeof ( rtDW . g25aonyhee . h2pnsauhxt ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . h04ewpy4nc
) , rtdwData , 0 , 89 , sizeof ( rtDW . g25aonyhee . h04ewpy4nc ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . mjpcafci0c
) , rtdwData , 0 , 90 , sizeof ( rtDW . g25aonyhee . mjpcafci0c ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . j1qqjbtj53
) , rtdwData , 0 , 91 , sizeof ( rtDW . g25aonyhee . j1qqjbtj53 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . kikz1keduf
) , rtdwData , 0 , 92 , sizeof ( rtDW . g25aonyhee . kikz1keduf ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . ixcfunz3ep
) , rtdwData , 0 , 93 , sizeof ( rtDW . g25aonyhee . ixcfunz3ep ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . an5olz5vaz
) , rtdwData , 0 , 94 , sizeof ( rtDW . g25aonyhee . an5olz5vaz ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . gc2t2mxxcd
) , rtdwData , 0 , 95 , sizeof ( rtDW . g25aonyhee . gc2t2mxxcd ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . cbi103hnwr
) , rtdwData , 0 , 96 , sizeof ( rtDW . g25aonyhee . cbi103hnwr ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . jfjlhhuyaj
) , rtdwData , 0 , 97 , sizeof ( rtDW . g25aonyhee . jfjlhhuyaj ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . ag2pn0fjxu
) , rtdwData , 0 , 98 , sizeof ( rtDW . g25aonyhee . ag2pn0fjxu ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . g25aonyhee . ksjivjyfnw
) , rtdwData , 0 , 99 , sizeof ( rtDW . g25aonyhee . ksjivjyfnw ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . flhn5odxwk . eyc0ugbpip
) , rtdwData , 0 , 100 , sizeof ( rtDW . flhn5odxwk . eyc0ugbpip ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . ajal1iwi1z
) , rtdwData , 0 , 101 , sizeof ( rtDW . e12xzvaqlra . ajal1iwi1z ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . aqlkdng0y4
) , rtdwData , 0 , 102 , sizeof ( rtDW . e12xzvaqlra . aqlkdng0y4 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . lhjucr5zrp
) , rtdwData , 0 , 103 , sizeof ( rtDW . e12xzvaqlra . lhjucr5zrp ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . kuoviqlwy5
) , rtdwData , 0 , 104 , sizeof ( rtDW . e12xzvaqlra . kuoviqlwy5 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . h2pnsauhxt
) , rtdwData , 0 , 105 , sizeof ( rtDW . e12xzvaqlra . h2pnsauhxt ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . h04ewpy4nc
) , rtdwData , 0 , 106 , sizeof ( rtDW . e12xzvaqlra . h04ewpy4nc ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . mjpcafci0c
) , rtdwData , 0 , 107 , sizeof ( rtDW . e12xzvaqlra . mjpcafci0c ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . j1qqjbtj53
) , rtdwData , 0 , 108 , sizeof ( rtDW . e12xzvaqlra . j1qqjbtj53 ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . kikz1keduf
) , rtdwData , 0 , 109 , sizeof ( rtDW . e12xzvaqlra . kikz1keduf ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . ixcfunz3ep
) , rtdwData , 0 , 110 , sizeof ( rtDW . e12xzvaqlra . ixcfunz3ep ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . an5olz5vaz
) , rtdwData , 0 , 111 , sizeof ( rtDW . e12xzvaqlra . an5olz5vaz ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . gc2t2mxxcd
) , rtdwData , 0 , 112 , sizeof ( rtDW . e12xzvaqlra . gc2t2mxxcd ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . cbi103hnwr
) , rtdwData , 0 , 113 , sizeof ( rtDW . e12xzvaqlra . cbi103hnwr ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . jfjlhhuyaj
) , rtdwData , 0 , 114 , sizeof ( rtDW . e12xzvaqlra . jfjlhhuyaj ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . ag2pn0fjxu
) , rtdwData , 0 , 115 , sizeof ( rtDW . e12xzvaqlra . ag2pn0fjxu ) ) ;
mr_pp_restoreDataFromMxArray ( ( void * ) & ( rtDW . e12xzvaqlra . ksjivjyfnw
) , rtdwData , 0 , 116 , sizeof ( rtDW . e12xzvaqlra . ksjivjyfnw ) ) ; } }
mxArray * mr_pp_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , } ; static const char * blockPath [ 10 ] = {
"pp/Solver Configuration/EVAL_KEY/STATE_1" ,
"pp/Solver Configuration/EVAL_KEY/OUTPUT_1_0" , "pp/Scope" , "pp/Scope1" ,
"pp/Scope2" , "pp/Scope3" , "pp/Scope8" , "pp/Payload/Scope1" ,
"pp/Robotic Arm 1/wrist_3_link/Scope" ,
"pp/Robotic Arm 1/wrist_3_link/Scope1" , } ; static const int reason [ 10 ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0
] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 42 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 405 ) ; ssSetNumBlockIO ( rtS , 75 ) ;
ssSetNumBlockParams ( rtS , 3135 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0001 ) ;
ssSetSampleTime ( rtS , 2 , 0.0005 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 3922201157U ) ;
ssSetChecksumVal ( rtS , 1 , 2136595032U ) ; ssSetChecksumVal ( rtS , 2 ,
2309620053U ) ; ssSetChecksumVal ( rtS , 3 , 746144858U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 20 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
pp_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true ) ;
ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ;
ssSetModelName ( rtS , "pp" ) ; ssSetPath ( rtS , "pp" ) ; ssSetTStart ( rtS
, 0.0 ) ; ssSetTFinal ( rtS , 50.0 ) ; { static RTWLogInfo rt_DataLoggingInfo
; rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 6 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T
* rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "DSTATE" , "DSTATE"
, "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" }
; static const char_T * rt_LoggedStateBlockNames [ ] = {
"pp/Robotic Arm 1/Simulink-PS\nConverter2" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter2" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter1" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter1" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter3" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter3" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter4" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter4" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter5" ,
"pp/Robotic Arm 1/Simulink-PS\nConverter5" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter2" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter2" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter1" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter1" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter3" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter3" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter4" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter4" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter5" ,
"pp/Robotic Arm 2/Simulink-PS\nConverter5" ,
"pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Cartesian Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Cartesian Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Cartesian Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Cartesian Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Cartesian Joint" ,
"pp/Robotic Arm 1/wrist_3_link/Cartesian Joint" ,
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" ,
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" ,
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time\nIntegrator1" ,
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time\nIntegrator3" ,
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time\nIntegrator5" ,
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator"
,
 "pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator2"
,
 "pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator4"
, "pp/TH Magic/Arm 1 Magic/Delay" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time\nIntegrator1" ,
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time\nIntegrator3" ,
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time\nIntegrator5" ,
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator"
,
 "pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator2"
,
 "pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator4"
, "pp/TH Magic/Arm 2 Magic/Delay" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1" ,
"pp/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1" ,
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time\nIntegrator" ,
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time\nIntegrator2" ,
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time\nIntegrator4" ,
 "pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator1"
,
 "pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator3"
,
 "pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator5"
, "pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time\nIntegrator" ,
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time\nIntegrator2" ,
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time\nIntegrator4" ,
 "pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator1"
,
 "pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator3"
,
 "pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time\nIntegrator5"
} ; static const char_T * rt_LoggedStateNames [ ] = {
"pp.Robotic_Arm_1.Simulink_PS_Converter2.outputFiltered_3011813035_0" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter2.outputFiltered_3011813035_1" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter1.outputFiltered_2397353755_0" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter1.outputFiltered_2397353755_1" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter.outputFiltered_3376729547_0" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter.outputFiltered_3376729547_1" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter3.outputFiltered_27542203_0" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter3.outputFiltered_27542203_1" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter4.outputFiltered_1019505419_0" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter4.outputFiltered_1019505419_1" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter5.outputFiltered_2070155739_0" ,
"pp.Robotic_Arm_1.Simulink_PS_Converter5.outputFiltered_2070155739_1" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter2.outputFiltered_4180968970_0" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter2.outputFiltered_4180968970_1" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter1.outputFiltered_3293884346_0" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter1.outputFiltered_3293884346_1" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter.outputFiltered_1174681707_0" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter.outputFiltered_1174681707_1" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter3.outputFiltered_604872544_0" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter3.outputFiltered_604872544_1" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter4.outputFiltered_426620624_0" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter4.outputFiltered_426620624_1" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter5.outputFiltered_1590545408_0" ,
"pp.Robotic_Arm_2.Simulink_PS_Converter5.outputFiltered_1590545408_1" ,
"pp.Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rx.q" ,
"pp.Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Ry.q" ,
"pp.Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rz.q" ,
"pp.Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rx.w" ,
"pp.Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Ry.w" ,
"pp.Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rz.w" ,
"pp.Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Px.p" ,
"pp.Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Py.p" ,
"pp.Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Pz.p" ,
"pp.Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Px.v" ,
"pp.Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Py.v" ,
"pp.Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Pz.v" ,
"pp.Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rx.q" ,
"pp.Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Ry.q" ,
"pp.Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rz.q" ,
"pp.Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rx.w" ,
"pp.Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Ry.w" ,
"pp.Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rz.w" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput"
, "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7
, 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23
, 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 ,
39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 92 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 92 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . lpairqjonl [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . lpairqjonl [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . fh5i13vgil [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . fh5i13vgil [ 1 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . fg3lujycqi [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . fg3lujycqi [ 1 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . h52fy5njki [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . h52fy5njki [ 1 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . nljb50mtnx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . nljb50mtnx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . kpgc53iylb [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . kpgc53iylb [ 1 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . jwl1hig4sv [ 0 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . jwl1hig4sv [ 1 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . pjflr3aosk [ 0 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . pjflr3aosk [ 1 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . gasvzlyrg1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . gasvzlyrg1 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . pwmx2sn23r [ 0 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . pwmx2sn23r [ 1 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . egdystg2ir [ 0 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . egdystg2ir [ 1 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . ifhvvpi2pj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . ifhvvpi2pj [ 1 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . iwaxtr5iwx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . iwaxtr5iwx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . iwaxtr5iwx [ 2 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . iwaxtr5iwx [ 3 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . iwaxtr5iwx [ 4 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . iwaxtr5iwx [ 5 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . iwaxtr5iwx [ 6 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . iwaxtr5iwx [ 7 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . iwaxtr5iwx [ 8 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . iwaxtr5iwx [ 9 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . iwaxtr5iwx [ 10 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . iwaxtr5iwx [ 11 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . iwaxtr5iwx [ 12 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . iwaxtr5iwx [ 13 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . iwaxtr5iwx [ 14 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . iwaxtr5iwx [ 15 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . iwaxtr5iwx [ 16 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . iwaxtr5iwx [ 17 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtDW . meaqqr1ua3 ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtDW . ieis3wdkcc ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtDW . nsbswzebrn ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtDW . ftmzzvbzax ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtDW . lajwkf5yel ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtDW . kf54lrgsgh ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) rtDW . jb4linf121 ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtDW . jwb0edvt43 ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtDW . j4ijkjeaiu ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtDW . ipny03bssk ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtDW . lcdwdtjwnt ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtDW . c1tuvnswoj ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtDW . bmfwcfe3zy ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtDW . lccx42ungl ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtDW . csttssg2jj ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtDW . bafnhq4yd3 ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtDW . ls50tk5yor ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtDW . l4isjnnapb ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtDW . cm2ish3fp4 ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtDW . lwjbyb5hax ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . iyyt53kmyv ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . domwprwtea ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . hw4jmko5ut ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . dlylyzqh44 ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . d1vruvafzv ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) rtDW . g2tsjufkz5 ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . p4axc0cn0o ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtDW . jwqmhs0s0n ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtDW . pabqpgk5jq ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtDW . enkp2q4jgz ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtDW . ondxfnv25y ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . mcdurxpqfs ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . dnzas3pxcw ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . oghejnwob3 ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . l1vruekg2n ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . la42o3xgh0 ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtDW . mbg4rkv5jx ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtDW . cvogulxpog ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtDW . jxqq0kd055 ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtDW . d1ymyg1puf ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtDW . pniui21m2m ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtDW . hom4bzatts ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtDW . jx1pyei5iz ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtDW . goe0ybllxx ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtDW . f32pecj5j3 ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtDW . fbdsqnrbvi ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtDW . gqp5ng5ipd ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtDW . ikqao11oir ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtDW . mhqnkldn3f ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtDW . d0njjfa3vf ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 42 ] ; static real_T absTol [ 42 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ;
static uint8_T absTolControl [ 42 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 42 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 42 ] ; static uint8_T
zcAttributes [ 5 ] = { ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 2 ] = { { 6 * sizeof ( real_T ) ,
( char * ) ( & rtB . g25aonyhee . alhmufu0yv [ 0 ] ) , ( NULL ) } , { 6 *
sizeof ( real_T ) , ( char * ) ( & rtB . e12xzvaqlra . alhmufu0yv [ 0 ] ) , (
NULL ) } } ; { int i ; for ( i = 0 ; i < 42 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.0001
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 2 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS
, 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 5 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 5 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3922201157U ) ; ssSetChecksumVal ( rtS , 1 ,
2136595032U ) ; ssSetChecksumVal ( rtS , 2 , 2309620053U ) ; ssSetChecksumVal
( rtS , 3 , 746144858U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 9 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS , mr_pp_GetSimStateDisallowedBlocks
) ; slsaGetWorkFcnForSimTargetOP ( rtS , mr_pp_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_pp_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
