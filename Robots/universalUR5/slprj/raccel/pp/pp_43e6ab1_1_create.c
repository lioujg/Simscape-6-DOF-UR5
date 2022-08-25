#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , PmRealVector * output
) ; extern const NeAssertData pp_43e6ab1_1_assertData [ ] ; extern const
NeZCData pp_43e6ab1_1_ZCData [ ] ; void pp_43e6ab1_1_computeRuntimeParameters
( const double * runtimeRootVariables , double * runtimeParameters ) ; void
pp_43e6ab1_1_validateRuntimeParameters ( const double * runtimeParameters ,
int32_T * assertSatisfactionFlags ) ; void
pp_43e6ab1_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void pp_43e6ab1_1_computeSimRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; PmfMessageId pp_43e6ab1_1_compDerivs ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const int * , const double * , const double *
, const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
pp_43e6ab1_1_numJacPerturbLoBounds ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const int * , const double * , const double *
, const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
pp_43e6ab1_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const int * , const double * , const double *
, const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId pp_43e6ab1_1_checkDynamics
( const RuntimeDerivedValuesBundle * , const double * , const double * ,
const double * , const double * , const double * , const int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId pp_43e6ab1_1_compOutputsDyn
( const RuntimeDerivedValuesBundle * , const int * , const double * , const
int * , const double * , const double * , const double * , const double * ,
double * , double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId pp_43e6ab1_1_compOutputsKin ( const RuntimeDerivedValuesBundle *
, const double * , const int * , const double * , const double * , const
double * , const double * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId pp_43e6ab1_1_compOutputs ( const RuntimeDerivedValuesBundle * ,
const int * , const double * , const int * , const double * , const double *
, const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
pp_43e6ab1_1_computeAsmModeVector ( const double * , const double * , const
double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId pp_43e6ab1_1_computeSimModeVector ( const double * , const
double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId pp_43e6ab1_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; void pp_43e6ab1_1_setTargets ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget * targets )
; void pp_43e6ab1_1_resetAsmStateVector ( const void * mech , double *
stateVector ) ; void pp_43e6ab1_1_resetSimStateVector ( const void * mech ,
double * stateVector ) ; void pp_43e6ab1_1_initializeTrackedAngleState (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const int * modeVector , const double *
motionData , double * stateVector ) ; void pp_43e6ab1_1_computeDiscreteState
( const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , double * stateVector ) ; void
pp_43e6ab1_1_adjustPosition ( const void * mech , const double * dofDeltas ,
double * stateVector ) ; void pp_43e6ab1_1_perturbAsmJointPrimitiveState (
const void * mech , size_t stageIdx , size_t primitiveIdx , double magnitude
, boolean_T doPerturbVelocity , double * stateVector ) ; void
pp_43e6ab1_1_perturbSimJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
pp_43e6ab1_1_perturbFlexibleBodyState ( const void * mech , size_t stageIdx ,
double magnitude , boolean_T doPerturbVelocity , double * stateVector ) ;
void pp_43e6ab1_1_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * stateVector , int partialType
, double * matrix ) ; void pp_43e6ab1_1_computeVelDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
pp_43e6ab1_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * origStateVector , int
partialType , double * stateVector ) ; void pp_43e6ab1_1_propagateMotion (
const void * mech , const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , const double * stateVector , double * motionData
) ; size_t pp_43e6ab1_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t pp_43e6ab1_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t pp_43e6ab1_1_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double
* stateVector , const int * modeVector , const double * motionData , double *
J ) ; boolean_T pp_43e6ab1_1_isInKinematicSingularity ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData ) ; void
pp_43e6ab1_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void *
simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector ) ; void
pp_43e6ab1_1_constructStateVector ( const void * mech , const double *
solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
pp_43e6ab1_1_extractSolverStateVector ( const void * mech , const double *
fullStateVector , double * solverStateVector ) ; boolean_T
pp_43e6ab1_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; boolean_T pp_43e6ab1_1_isVelocityViolation ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId pp_43e6ab1_1_projectStateSim ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * modeVector , double * stateVector ,
void * neDiagMgr ) ; void pp_43e6ab1_1_computeConstraintError ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , double * error ) ; void
pp_43e6ab1_1_resetModeVector ( const void * mech , int * modeVector ) ;
boolean_T pp_43e6ab1_1_hasJointDisToNormModeChange ( const void * mech ,
const int * prevModeVector , const int * modeVector ) ; PmfMessageId
pp_43e6ab1_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * prevModeVector , const int *
modeVector , const double * inputVector , double * stateVector , void *
neDiagMgr ) ; void pp_43e6ab1_1_onModeChangedCutJoints ( const void * mech ,
const int * prevModeVector , const int * modeVector , double * stateVector )
; PmfMessageId pp_43e6ab1_1_assemble ( const double * u , double * udot ,
double * x , NeuDiagnosticManager * neDiagMgr ) { ( void ) x ; ( void ) u ; (
void ) udot ; ( void ) neDiagMgr ; return NULL ; } static void
dae_cg_setParameters_function ( const NeDae * dae , const NeParameterBundle *
paramBundle ) { const NeDaePrivateData * smData = dae -> mPrivateData ; const
double * runtimeRootVariables = paramBundle -> mRealParameters . mX ; if (
smData -> mRuntimeParameterScalars . mN == 0 ) return ;
pp_43e6ab1_1_computeRuntimeParameters ( runtimeRootVariables , smData ->
mRuntimeParameterScalars . mX ) ; pp_43e6ab1_1_computeAsmRuntimeDerivedValues
( smData -> mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
pp_43e6ab1_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; pp_43e6ab1_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 18 * sizeof ( real_T ) ) ; else errorId =
pp_43e6ab1_1_compDerivs ( & smData -> mSimRuntimeDerivedValuesBundle , smData
-> mSimulationDelegate . mRunTimeEnabledEquations . mValues , systemInput ->
mX . mX , systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU
. mX + 12 , systemInput -> mV . mX + 12 , systemInput -> mD . mX ,
daeMethodOutput -> mXP0 . mX , & errorResult , neDiagMgr ) ; return errorId ;
} static PmfMessageId dae_cg_numJacPerturbLoBounds_method ( const NeDae * dae
, const NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ;
errorId = pp_43e6ab1_1_numJacPerturbLoBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 12 , systemInput
-> mV . mX + 12 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
pp_43e6ab1_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 12 , systemInput
-> mV . mX + 12 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; int derivErr = 0 ; double errorResult = 0.0 ; errorId =
pp_43e6ab1_1_compOutputs ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 12 , systemInput -> mV . mX + 12 , systemInput -> mD
. mX , smData -> mCachedDerivatives . mX , daeMethodOutput -> mY . mX , &
derivErr , & errorResult , neDiagMgr ) ; smData ->
mCachedDerivativesAvailable = ( derivErr == 0 ) ; return errorId ; } static
PmfMessageId dae_cg_mode_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
pp_43e6ab1_1_computeSimModeVector ( systemInput -> mU . mX , systemInput ->
mU . mX + 12 , systemInput -> mV . mX + 12 , daeMethodOutput -> mMODE . mX ,
& errorResult , neDiagMgr ) ; memcpy ( smData -> mCachedModeVector . mX ,
daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T ) ) ; return errorId ; }
static PmfMessageId dae_cg_zeroCrossing_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; double errorResult = 0.0 ; return
pp_43e6ab1_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 12 , systemInput -> mV . mX + 12 , systemInput
-> mD . mX , daeMethodOutput -> mZC . mX , & errorResult , neDiagMgr ) ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 12 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 12 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ; errorId =
pp_43e6ab1_1_checkDynamics ( & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mX . mX , systemInput -> mU . mX , systemInput -> mU . mX + 12
, systemInput -> mV . mX + 12 , systemInput -> mD . mX , systemInput -> mM .
mX , & result , neDiagMgr ) ; } return errorId ; } static PmfMessageId
dae_cg_CIC_MODE_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ; const
size_t mvSize = smData -> mModeVectorSize ; boolean_T modeChanged = false ;
if ( mvSize > 0 ) { errorId = pp_43e6ab1_1_computeSimModeVector ( systemInput
-> mU . mX , systemInput -> mU . mX + 12 , systemInput -> mV . mX + 12 ,
systemInput -> mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL )
return errorId ; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if (
systemInput -> mM . mX [ i ] != smData -> mCachedModeVector . mX [ i ] ) {
modeChanged = true ; break ; } } } if ( modeChanged ) { errorId =
sm_core_onModeChanged ( & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mU . mX , systemInput -> mU .
mX + 12 , systemInput -> mD . mX , smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , systemInput -> mX . mX , neDiagMgr ) ; if ( errorId
!= NULL ) return errorId ; memcpy ( smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , 0 * sizeof ( int32_T ) ) ; } errorId =
sm_core_projectState ( true , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 12 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_assemble_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; const SmMechanismDelegate * delegate = & smData ->
mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 72 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
pp_43e6ab1_1_computeAsmModeVector ( systemInput -> mU . mX , systemInput ->
mU . mX + 12 , systemInput -> mV . mX + 12 , smData -> mAssemblyModeVector .
mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; }
sm_core_computeStateVector ( delegate , runtimeDerivedValuesBundle , smData
-> mAssemblyModeVector . mX , numTargets , smData -> mTargets ,
assemblyFullStateVector ) ; asmStatus = sm_core_checkAssembly ( delegate ,
runtimeDerivedValuesBundle , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , NULL , NULL , NULL ) ; if ( asmStatus != 1 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
pp_43e6ab1_1_checkTargets ( & smData -> mSimRuntimeDerivedValuesBundle ,
assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
pp_43e6ab1_1_computeSimModeVector ( systemInput -> mU . mX , systemInput ->
mU . mX + 12 , systemInput -> mV . mX + 12 , systemInput -> mM . mX , &
errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } ( * delegate -> mConvertStateVector ) ( NULL ,
runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , systemInput -> mM . mX , simulationFullStateVector
) ; for ( i = 0 ; i < smData -> mStateVectorSize ; ++ i ) systemInput -> mX .
mX [ i ] = simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ]
; memcpy ( systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 18 ; smData -> mFullStateVectorSize = 42 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 12 ; smData ->
mOutputVectorSize = 40 ; smData -> mNumConstraintEqns = 3 ; for ( i = 0 ; i <
4 ; ++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T stateVectorMap [ 18 ] = { 12 , 13 , 14 , 15 , 16 , 17 , 18 ,
19 , 20 , 21 , 22 , 23 , 36 , 37 , 38 , 39 , 40 , 41 } ; const CTarget
targets [ 72 ] = { { 0 , 71 , 0 , false , 0 , 0 , "1" , false , true , +
1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 71 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 89 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 89 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 107 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 107 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 130 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 130 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 148 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 148 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 166 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 166 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 182 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 182 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 182 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 182 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 182 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 182 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 185 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 185 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 185 , 1 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 185 , 1
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 185 , 2 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 185 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 249 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 249 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 267 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 267 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 285 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 285 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 308 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 308 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 326 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 326 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 344 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 344 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 360 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 360 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 360 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 360 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 360 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 360 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 363 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 363 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 363 , 1 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 363 , 1
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 363 , 2 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 363 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 107 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 107 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 89 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 89 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 71 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 71 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 130 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 130 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 148 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 148 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 166 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 166 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 285 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 285 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 267 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 267 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 249 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 249 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 308 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 308 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 326 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 326 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 344 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 344 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } } ; const size_t numTargets = 72 ; int_T status
; size_t i ; status = pm_create_real_vector_fields ( & smData ->
mAssemblyFullStateVector , 42 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_real_vector_fields ( & smData ->
mSimulationFullStateVector , 42 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData
-> mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize
* sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 48 ; smData ->
mNumInputMotionPrimitives = 12 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad = pp_43e6ab1_1_assertData ;
size_t i ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertObjects , PmCharVector ,
0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertPaths , PmCharVector
, 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertDescriptors ,
PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertMessages , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertMessageIds , PmCharVector , 0 , alloc ) ; for ( i = 0 ;
i < smData -> mNumParamAsserts ; ++ i , ++ ad ) { smData ->
mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ; smData ->
mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ; smData ->
mParamAssertDescriptors [ i ] = cStringToCharVector ( ad -> mDescriptor ) ;
smData -> mParamAssertMessages [ i ] = cStringToCharVector ( ad -> mMessage )
; smData -> mParamAssertMessageIds [ i ] = cStringToCharVector ( ad ->
mMessageID ) ; smData -> mParamAssertIsWarnings . mX [ i ] = ad -> mIsWarn ;
} } } static void initModeVector ( NeDaePrivateData * smData ) { { size_t i ;
const int_T status = pm_create_int_vector_fields ( & smData ->
mAssemblyModeVector , 0 , pm_default_allocator ( ) ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mAssemblyModeVector . mN ; ++ i )
smData -> mAssemblyModeVector . mX [ i ] = 0 ; } { size_t i ; const int_T
status = pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
pp_43e6ab1_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 0 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 18 ] = { "Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rx.q" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Ry.q" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rz.q" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rx.w" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Ry.w" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.Rz.w" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Px.p" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Py.p" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Pz.p" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Px.v" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Py.v" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.Pz.v" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rx.q" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Ry.q" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rz.q" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rx.w" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Ry.w" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.Rz.w" } ; const char * varObjects [
18 ] = { "pp/Robotic Arm 1/wrist_3_link/Gimbal Joint" ,
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
"pp/Robotic Arm 2/wrist_3_link/Gimbal Joint" } ; smData -> mNumVarScalars =
18 ; smData -> mVarFullPaths = NULL ; smData -> mVarObjects = NULL ; if (
smData -> mNumVarScalars > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths ,
PmCharVector , 18 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mVarObjects ,
PmCharVector , 18 , alloc ) ; for ( s = 0 ; s < smData -> mNumVarScalars ; ++
s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector ( varFullPaths [ s
] ) ; smData -> mVarObjects [ s ] = cStringToCharVector ( varObjects [ s ] )
; } } } static void initRuntimeParameters ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; size_t i
= 0 ; const int32_T * rtpRootVarRows = NULL ; const int32_T * rtpRootVarCols
= NULL ; const char * * rtpFullPaths = NULL ; smData -> mNumRtpRootVars = 0 ;
status = pm_create_int_vector_fields ( & smData -> mRtpRootVarRows , smData
-> mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mRtpRootVarRows . mX , rtpRootVarRows , smData -> mNumRtpRootVars *
sizeof ( int32_T ) ) ; status = pm_create_int_vector_fields ( & smData ->
mRtpRootVarCols , smData -> mNumRtpRootVars , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mRtpRootVarCols . mX , rtpRootVarCols , smData
-> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData -> mRtpFullPaths = NULL ;
if ( smData -> mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData
-> mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
NeDsIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 12 ]
= { "Robotic_Arm_1.elbow_joint.qi" , "Robotic_Arm_1.shoulder_lift_joint.qi" ,
"Robotic_Arm_1.shoulder_pan_joint.qi" , "Robotic_Arm_1.wrist_1_joint.qi" ,
"Robotic_Arm_1.wrist_2_joint.qi" , "Robotic_Arm_1.wrist_3_joint.qi" ,
"Robotic_Arm_2.elbow_joint.qi" , "Robotic_Arm_2.shoulder_lift_joint.qi" ,
"Robotic_Arm_2.shoulder_pan_joint.qi" , "Robotic_Arm_2.wrist_1_joint.qi" ,
"Robotic_Arm_2.wrist_2_joint.qi" , "Robotic_Arm_2.wrist_3_joint.qi" } ; const
char * inputUnits [ 12 ] = { "rad" , "rad" , "rad" , "rad" , "rad" , "rad" ,
"rad" , "rad" , "rad" , "rad" , "rad" , "rad" } ; const SizePair
inputDimensions [ 12 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } } ; const char * outputPortPaths [ 21 ] = {
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.ft" ,
"Robotic_Arm_1.wrist_3_link.Cartesian_Joint.tt" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.ft" ,
"Robotic_Arm_1.wrist_3_link.Gimbal_Joint.tt" ,
"Robotic_Arm_2.wrist_3_link.Cartesian_Joint.ft" ,
"Robotic_Arm_2.wrist_3_link.Cartesian_Joint.tt" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.ft" ,
"Robotic_Arm_2.wrist_3_link.Gimbal_Joint.tt" , "Payload.Transform_Sensor.Q" ,
"Payload.Transform_Sensor.wx" , "Payload.Transform_Sensor.wy" ,
"Payload.Transform_Sensor.wz" , "Payload.Transform_Sensor.x" ,
"Payload.Transform_Sensor.y" , "Payload.Transform_Sensor.z" ,
"Payload.Transform_Sensor.vx" , "Payload.Transform_Sensor.vy" ,
"Payload.Transform_Sensor.vz" , "Payload.Transform_Sensor.ax" ,
"Payload.Transform_Sensor.ay" , "Payload.Transform_Sensor.az" } ; const char
* outputUnits [ 21 ] = { "m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" ,
"m^2*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" , "1" ,
"rad/s" , "rad/s" , "rad/s" , "m" , "m" , "m" , "m/s" , "m/s" , "m/s" ,
"m/s^2" , "m/s^2" , "m/s^2" } ; const SizePair outputDimensions [ 21 ] = { {
3 , 1 } , { 3 , 1 } , { 3 , 1 } , { 3 , 1 } , { 3 , 1 } , { 3 , 1 } , { 3 , 1
} , { 3 , 1 } , { 4 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } } ; initIoInfoHelper ( 12 , inputPortPaths , inputUnits ,
inputDimensions , true , smData ) ; initIoInfoHelper ( 21 , outputPortPaths ,
outputUnits , outputDimensions , false , smData ) ; } static void
initInputDerivs ( NeDaePrivateData * smData ) { const int32_T numInputDerivs
[ 12 ] = { 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } ; PmAllocator *
alloc = pm_default_allocator ( ) ; const int_T status =
pm_create_int_vector_fields ( & smData -> mNumInputDerivs , smData ->
mInputVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mNumInputDerivs . mX , numInputDerivs , 12 * sizeof ( int32_T ) ) ; smData
-> mInputOrder = 2 ; } static void initDirectFeedthrough ( NeDaePrivateData *
smData ) { const boolean_T directFeedthroughVector [ 12 ] = { true , true ,
true , true , true , true , true , true , true , true , true , true } ; const
boolean_T directFeedthroughMatrix [ 960 ] = { true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true } ;
PmAllocator * alloc = pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 12 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 12 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 960 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 960 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 40 ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
smData -> mOutputFunctionMap = pm_create_int_vector ( 40 , alloc ) ; memcpy (
smData -> mOutputFunctionMap -> mX , outputFunctionMap , 40 * sizeof (
int32_T ) ) ; smData -> mNumOutputClasses = 1 ; smData ->
mHasKinematicOutputs = true ; smData -> mHasDynamicOutputs = true ; smData ->
mIsOutputClass0Dynamic = true ; smData -> mDoComputeDynamicOutputs = false ;
smData -> mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T
status = pm_create_real_vector_fields ( & smData -> mCachedDerivatives , 18 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 23 ] = { { 65 , 1 } , { 66 , 8 } , { 71 , 4 } , { 89 , 3 }
, { 107 , 2 } , { 129 , 0 } , { 130 , 5 } , { 148 , 6 } , { 166 , 7 } , { 182
, 11 } , { 185 , 10 } , { 196 , 9 } , { 243 , 13 } , { 244 , 20 } , { 249 ,
16 } , { 267 , 15 } , { 285 , 14 } , { 307 , 12 } , { 308 , 17 } , { 326 , 18
} , { 344 , 19 } , { 363 , 22 } , { 374 , 21 } } ; const size_t
primitiveIndices [ 23 + 1 ] = { 0 , 0 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 6 , 6 , 9
, 12 , 12 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 18 , 18 , 21 } ; const
SmSizePair stateOffsets [ 21 ] = { { 0 , 1 } , { 2 , 3 } , { 4 , 5 } , { 6 ,
7 } , { 8 , 9 } , { 10 , 11 } , { 12 , 15 } , { 13 , 16 } , { 14 , 17 } , {
18 , 21 } , { 19 , 22 } , { 20 , 23 } , { 24 , 25 } , { 26 , 27 } , { 28 , 29
} , { 30 , 31 } , { 32 , 33 } , { 34 , 35 } , { 36 , 39 } , { 37 , 40 } , {
38 , 41 } } ; const SmSizePair dofOffsets [ 21 ] = { { 0 , 1 } , { 1 , 2 } ,
{ 2 , 3 } , { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 ,
9 } , { 9 , 10 } , { 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } , {
14 , 15 } , { 15 , 16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19 , 20
} , { 20 , 21 } } ; const size_t * flexibleStages = NULL ; const size_t
remodIndices [ 18 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 13 , 14 , 24 , 26 , 28
, 30 , 32 , 34 , 36 , 37 , 38 } ; const size_t equationsPerConstraint [ 1 ] =
{ 3 } ; const size_t dofToVelSlot [ 21 ] = { 1 , 3 , 5 , 7 , 9 , 11 , 15 , 16
, 17 , 21 , 22 , 23 , 25 , 27 , 29 , 31 , 33 , 35 , 39 , 40 , 41 } ; const
size_t constraintDofs [ 21 ] = { 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 ,
0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ; const size_t
constraintDofOffsets [ 1 + 1 ] = { 0 , 21 } ; const size_t Jm = 3 ; const
size_t Jn = 21 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 21 ; delegate -> mDof = 21 ; delegate -> mStateSize = 42 ;
delegate -> mContinuousStateSize = 42 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 23 ; delegate -> mNumConstraints = 1 ; delegate ->
mNumAllConstraintEquations = 3 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , 23 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 23 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 21 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 21 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 21 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 21 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 18 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 18 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 21 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 21 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 21 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 21 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 1 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 1 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 1 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 1 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 1 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 21 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 21 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 21 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 21 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 21 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 21 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 21 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 42 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 42 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 42 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 42 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 631 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 21 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 42 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 21 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 495 , 0.0
) ; delegate -> mSetTargets = pp_43e6ab1_1_setTargets ; delegate ->
mResetStateVector = pp_43e6ab1_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState = pp_43e6ab1_1_initializeTrackedAngleState ;
delegate -> mComputeDiscreteState = pp_43e6ab1_1_computeDiscreteState ;
delegate -> mAdjustPosition = pp_43e6ab1_1_adjustPosition ; delegate ->
mPerturbJointPrimitiveState = pp_43e6ab1_1_perturbAsmJointPrimitiveState ;
delegate -> mPerturbFlexibleBodyState = NULL ; delegate ->
mComputePosDofBlendMatrix = pp_43e6ab1_1_computePosDofBlendMatrix ; delegate
-> mComputeVelDofBlendMatrix = pp_43e6ab1_1_computeVelDofBlendMatrix ;
delegate -> mProjectPartiallyTargetedPos =
pp_43e6ab1_1_projectPartiallyTargetedPos ; delegate -> mPropagateMotion =
pp_43e6ab1_1_propagateMotion ; delegate -> mComputeAssemblyError =
pp_43e6ab1_1_computeAssemblyError ; delegate -> mComputeAssemblyJacobian =
pp_43e6ab1_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian = pp_43e6ab1_1_computeFullAssemblyJacobian ;
delegate -> mIsInKinematicSingularity = pp_43e6ab1_1_isInKinematicSingularity
; delegate -> mConvertStateVector = pp_43e6ab1_1_convertStateVector ;
delegate -> mConstructStateVector = NULL ; delegate ->
mExtractSolverStateVector = NULL ; delegate -> mIsPositionViolation = NULL ;
delegate -> mIsVelocityViolation = NULL ; delegate -> mProjectStateSim = NULL
; delegate -> mComputeConstraintError = NULL ; delegate -> mResetModeVector =
NULL ; delegate -> mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 23 ] = { { 65 , 1 } , { 66 , 8 }
, { 71 , 4 } , { 89 , 3 } , { 107 , 2 } , { 129 , 0 } , { 130 , 5 } , { 148 ,
6 } , { 166 , 7 } , { 182 , 11 } , { 185 , 10 } , { 196 , 9 } , { 243 , 13 }
, { 244 , 20 } , { 249 , 16 } , { 267 , 15 } , { 285 , 14 } , { 307 , 12 } ,
{ 308 , 17 } , { 326 , 18 } , { 344 , 19 } , { 363 , 22 } , { 374 , 21 } } ;
const size_t primitiveIndices [ 23 + 1 ] = { 0 , 0 , 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 6 , 6 , 9 , 12 , 12 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 18 , 18 , 21 } ;
const SmSizePair stateOffsets [ 21 ] = { { 0 , 1 } , { 2 , 3 } , { 4 , 5 } ,
{ 6 , 7 } , { 8 , 9 } , { 10 , 11 } , { 12 , 15 } , { 13 , 16 } , { 14 , 17 }
, { 18 , 21 } , { 19 , 22 } , { 20 , 23 } , { 24 , 25 } , { 26 , 27 } , { 28
, 29 } , { 30 , 31 } , { 32 , 33 } , { 34 , 35 } , { 36 , 39 } , { 37 , 40 }
, { 38 , 41 } } ; const SmSizePair dofOffsets [ 21 ] = { { 0 , 1 } , { 1 , 2
} , { 2 , 3 } , { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , { 6 , 7 } , { 7 , 8 } , {
8 , 9 } , { 9 , 10 } , { 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 }
, { 14 , 15 } , { 15 , 16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19
, 20 } , { 20 , 21 } } ; const size_t * flexibleStages = NULL ; const size_t
remodIndices [ 18 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 13 , 14 , 24 , 26 , 28
, 30 , 32 , 34 , 36 , 37 , 38 } ; const size_t equationsPerConstraint [ 1 ] =
{ 3 } ; const size_t dofToVelSlot [ 21 ] = { 1 , 3 , 5 , 7 , 9 , 11 , 15 , 16
, 17 , 21 , 22 , 23 , 25 , 27 , 29 , 31 , 33 , 35 , 39 , 40 , 41 } ; const
size_t constraintDofs [ 21 ] = { 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 ,
0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ; const size_t
constraintDofOffsets [ 1 + 1 ] = { 0 , 21 } ; const size_t Jm = 3 ; const
size_t Jn = 21 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 21 ; delegate -> mDof = 21 ; delegate -> mStateSize = 42 ;
delegate -> mContinuousStateSize = 42 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 23 ; delegate -> mNumConstraints = 1 ; delegate ->
mNumAllConstraintEquations = 3 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , 23 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 23 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 21 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 21 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 21 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 21 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 18 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 18 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 21 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 21 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 21 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 21 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 21 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 1 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 1 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 1 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 21 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 1 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 1 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 21 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 21 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 21 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 21 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 21 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 21 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 21 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 42 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 42 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 42 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 42 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 631 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 21 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 42 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 21 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 495 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
pp_43e6ab1_1_resetSimStateVector ; delegate -> mInitializeTrackedAngleState =
NULL ; delegate -> mComputeDiscreteState = NULL ; delegate -> mAdjustPosition
= NULL ; delegate -> mPerturbJointPrimitiveState =
pp_43e6ab1_1_perturbSimJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = pp_43e6ab1_1_perturbFlexibleBodyState ; delegate
-> mComputePosDofBlendMatrix = NULL ; delegate -> mComputeVelDofBlendMatrix =
NULL ; delegate -> mProjectPartiallyTargetedPos = NULL ; delegate ->
mPropagateMotion = NULL ; delegate -> mComputeAssemblyError = NULL ; delegate
-> mComputeAssemblyJacobian = NULL ; delegate -> mComputeFullAssemblyJacobian
= NULL ; delegate -> mIsInKinematicSingularity = NULL ; delegate ->
mConvertStateVector = NULL ; delegate -> mConstructStateVector =
pp_43e6ab1_1_constructStateVector ; delegate -> mExtractSolverStateVector =
pp_43e6ab1_1_extractSolverStateVector ; delegate -> mIsPositionViolation =
pp_43e6ab1_1_isPositionViolation ; delegate -> mIsVelocityViolation =
pp_43e6ab1_1_isVelocityViolation ; delegate -> mProjectStateSim =
pp_43e6ab1_1_projectStateSim ; delegate -> mComputeConstraintError =
pp_43e6ab1_1_computeConstraintError ; delegate -> mResetModeVector =
pp_43e6ab1_1_resetModeVector ; delegate -> mHasJointDisToNormModeChange =
pp_43e6ab1_1_hasJointDisToNormModeChange ; delegate ->
mPerformJointDisToNormModeChange =
pp_43e6ab1_1_performJointDisToNormModeChange ; delegate ->
mOnModeChangedCutJoints = pp_43e6ab1_1_onModeChangedCutJoints ; delegate ->
mMech = NULL ; } static void initMechanismDelegates ( NeDaePrivateData *
smData ) { PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T
motionInputOffsets [ 12 ] = { 2 , 1 , 0 , 3 , 4 , 5 , 8 , 7 , 6 , 9 , 10 , 11
} ; int_T status = 0 ; initAssemblyDelegate ( & smData -> mAssemblyDelegate )
; initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 12 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mNumJacPerturbLoBoundsFcn =
dae_cg_numJacPerturbLoBounds_method ; smData -> mNumJacPerturbHiBoundsFcn =
dae_cg_numJacPerturbHiBounds_method ; smData -> mOutputFcn =
dae_cg_compOutputs_method ; smData -> mModeFcn = dae_cg_mode_method ; smData
-> mZeroCrossingFcn = dae_cg_zeroCrossing_method ; smData -> mProjectionFcn =
dae_cg_project_solve ; smData -> mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve ;
smData -> mCheckFcn = ( smData -> mStateVectorSize == 0 ) ?
dae_cg_check_solve : NULL ; smData -> mAssemblyFcn = dae_cg_assemble_solve ;
smData -> mSetupLoggerFcn = sm_ssci_setupLoggerFcn_codeGen ; smData ->
mLogFcn = sm_ssci_logFcn_codeGen ; smData -> mResidualsFcn = NULL ; smData ->
mLinearizeFcn = NULL ; smData -> mGenerateFcn = NULL ; } static void
initLiveLinkToSm ( NeDaePrivateData * smData ) { smData -> mLiveSmLink = NULL
; smData -> mLiveSmLink_destroy = NULL ; smData -> mLiveSmLink_copy = NULL ;
} void pp_43e6ab1_1_NeDaePrivateData_create ( NeDaePrivateData * smData ) {
initBasicAttributes ( smData ) ; initStateVector ( smData ) ; initAsserts (
smData ) ; initModeVector ( smData ) ; initZeroCrossings ( smData ) ;
initVariables ( smData ) ; initRuntimeParameters ( smData ) ; initIoInfo (
smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough ( smData ) ;
initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData ) ;
initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
