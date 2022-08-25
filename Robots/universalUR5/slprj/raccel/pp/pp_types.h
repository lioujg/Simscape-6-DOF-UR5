#ifndef RTW_HEADER_pp_types_h_
#define RTW_HEADER_pp_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_ikblock_info_bus_
#define DEFINED_TYPEDEF_FOR_ikblock_info_bus_
typedef struct { real_T Iterations ; real_T PoseErrorNorm ; uint16_T ExitFlag
; uint8_T Status ; uint8_T sl_padding0 [ 5 ] ; } ikblock_info_bus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_HdYxdoyG23cZbPWKvQzh3D_
#define DEFINED_TYPEDEF_FOR_struct_HdYxdoyG23cZbPWKvQzh3D_
typedef struct { real_T NameLength ; uint8_T Name [ 14 ] ; uint8_T
sl_padding0 [ 2 ] ; real_T ParentIndex ; real_T NumChildren ; real_T
ChildrenIndices [ 10 ] ; real_T Mass ; real_T CenterOfMass [ 3 ] ; real_T
Inertia [ 9 ] ; real_T SpatialInertia [ 36 ] ; }
struct_HdYxdoyG23cZbPWKvQzh3D ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_I2eLQyxu98dfwtJDNtskyD_
#define DEFINED_TYPEDEF_FOR_struct_I2eLQyxu98dfwtJDNtskyD_
typedef struct { uint8_T Type ; uint8_T sl_padding0 [ 7 ] ; real_T NameLength
; uint8_T Name [ 30 ] ; uint8_T sl_padding1 [ 2 ] ; real_T VelocityNumber ;
real_T PositionNumber ; real_T MotionSubspace [ 36 ] ; real_T JointAxis [ 3 ]
; real_T PositionLimits [ 14 ] ; real_T HomePosition [ 7 ] ; real_T
JointToParentTransform [ 16 ] ; real_T ChildToJointTransform [ 16 ] ; }
struct_I2eLQyxu98dfwtJDNtskyD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_cKQSZl3e1iurDV3fYO50dD_
#define DEFINED_TYPEDEF_FOR_struct_cKQSZl3e1iurDV3fYO50dD_
typedef struct { real_T NumBodies ; real_T Gravity [ 3 ] ; real_T
NumNonFixedBodies ; real_T PositionNumber ; real_T VelocityNumber ; real_T
PositionDoFMap [ 20 ] ; real_T VelocityDoFMap [ 20 ] ; real_T MaxNameLength ;
real_T MaxJointPositionNumber ; uint8_T DataFormat ; uint8_T sl_padding0 [ 7
] ; real_T JointPositionLimits [ 12 ] ; struct_HdYxdoyG23cZbPWKvQzh3D Bodies
[ 11 ] ; struct_I2eLQyxu98dfwtJDNtskyD Joints [ 11 ] ; }
struct_cKQSZl3e1iurDV3fYO50dD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_j29BDD3GtugYMsepf4x9iH_
#define DEFINED_TYPEDEF_FOR_struct_j29BDD3GtugYMsepf4x9iH_
typedef struct { boolean_T EnforceJointLimits ; boolean_T AllowRandomRestart
; uint8_T sl_padding0 [ 6 ] ; real_T MaxIterations ; real_T MaxTime ; real_T
GradientTolerance ; real_T SolutionTolerance ; real_T StepTolerance ; real_T
ErrorChangeTolerance ; boolean_T UseErrorDamping ; uint8_T sl_padding1 [ 7 ]
; real_T DampingBias ; } struct_j29BDD3GtugYMsepf4x9iH ;
#endif
#ifndef struct_tag_sdAmwXbnJnEmimT0NaJRtAD
#define struct_tag_sdAmwXbnJnEmimT0NaJRtAD
struct tag_sdAmwXbnJnEmimT0NaJRtAD { real_T tv_sec ; real_T tv_nsec ; } ;
#endif
#ifndef typedef_i2euuevope
#define typedef_i2euuevope
typedef struct tag_sdAmwXbnJnEmimT0NaJRtAD i2euuevope ;
#endif
#include "coder_posix_time.h"
#ifndef struct_tag_y6zQdK96IC7AcMnw7rFa
#define struct_tag_y6zQdK96IC7AcMnw7rFa
struct tag_y6zQdK96IC7AcMnw7rFa { int32_T __dummy ; } ;
#endif
#ifndef typedef_bgo4jcdvyx
#define typedef_bgo4jcdvyx
typedef struct tag_y6zQdK96IC7AcMnw7rFa bgo4jcdvyx ;
#endif
#ifndef struct_tag_1FpmCQNe36RDLjratTWCgF
#define struct_tag_1FpmCQNe36RDLjratTWCgF
struct tag_1FpmCQNe36RDLjratTWCgF { int32_T __dummy ; } ;
#endif
#ifndef typedef_k02lqjfk10
#define typedef_k02lqjfk10
typedef struct tag_1FpmCQNe36RDLjratTWCgF k02lqjfk10 ;
#endif
#ifndef struct_tag_9VaLdcnhzQxC5h4iXVOCU
#define struct_tag_9VaLdcnhzQxC5h4iXVOCU
struct tag_9VaLdcnhzQxC5h4iXVOCU { i2euuevope StartTime ; } ;
#endif
#ifndef typedef_oem5wni2vy
#define typedef_oem5wni2vy
typedef struct tag_9VaLdcnhzQxC5h4iXVOCU oem5wni2vy ;
#endif
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T { char_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_aiqe041hfp
#define typedef_aiqe041hfp
typedef struct emxArray_char_T aiqe041hfp ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_gmphnpqbau
#define typedef_gmphnpqbau
typedef struct emxArray_real_T gmphnpqbau ;
#endif
#ifndef typedef_mpugqnqx0d
#define typedef_mpugqnqx0d
typedef struct { bgo4jcdvyx * * data ; int32_T * size ; int32_T allocatedSize
; int32_T numDimensions ; boolean_T canFreeData ; } mpugqnqx0d ;
#endif
#ifndef struct_tag_EhjQFBatIylmRskzCQ6c4C
#define struct_tag_EhjQFBatIylmRskzCQ6c4C
struct tag_EhjQFBatIylmRskzCQ6c4C { aiqe041hfp * Type ; real_T VelocityNumber
; real_T PositionNumber ; gmphnpqbau * MotionSubspace ; boolean_T InTree ;
real_T JointToParentTransform [ 16 ] ; real_T ChildToJointTransform [ 16 ] ;
aiqe041hfp * NameInternal ; gmphnpqbau * PositionLimitsInternal ; gmphnpqbau
* HomePositionInternal ; real_T JointAxisInternal [ 3 ] ; } ;
#endif
#ifndef typedef_iuu1xhv34c
#define typedef_iuu1xhv34c
typedef struct tag_EhjQFBatIylmRskzCQ6c4C iuu1xhv34c ;
#endif
#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T { int8_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_dpzy5ojkdn
#define typedef_dpzy5ojkdn
typedef struct emxArray_int8_T dpzy5ojkdn ;
#endif
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T { boolean_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_ikljpirxgg
#define typedef_ikljpirxgg
typedef struct emxArray_boolean_T ikljpirxgg ;
#endif
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T { int32_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_dxvn12zbi1
#define typedef_dxvn12zbi1
typedef struct emxArray_int32_T dxvn12zbi1 ;
#endif
#ifndef struct_tag_z9r9yqBIH6niKQSwOXKdnC
#define struct_tag_z9r9yqBIH6niKQSwOXKdnC
struct tag_z9r9yqBIH6niKQSwOXKdnC { mpugqnqx0d * CollisionGeometries ; real_T
MaxElements ; real_T Size ; bgo4jcdvyx _pobj0 ; } ;
#endif
#ifndef typedef_nnaoaxiu0k
#define typedef_nnaoaxiu0k
typedef struct tag_z9r9yqBIH6niKQSwOXKdnC nnaoaxiu0k ;
#endif
#ifndef struct_tag_xSqLnkreSK8W7ivBh87HcE
#define struct_tag_xSqLnkreSK8W7ivBh87HcE
struct tag_xSqLnkreSK8W7ivBh87HcE { real_T Index ; aiqe041hfp * NameInternal
; iuu1xhv34c * JointInternal ; real_T ParentIndex ; nnaoaxiu0k *
CollisionsInternal ; nnaoaxiu0k _pobj0 ; iuu1xhv34c _pobj1 ; } ;
#endif
#ifndef typedef_mjxrc5f0p2
#define typedef_mjxrc5f0p2
typedef struct tag_xSqLnkreSK8W7ivBh87HcE mjxrc5f0p2 ;
#endif
#ifndef struct_tag_ot0qNYzQCTmtjqnniUR6uD
#define struct_tag_ot0qNYzQCTmtjqnniUR6uD
struct tag_ot0qNYzQCTmtjqnniUR6uD { real_T NumBodies ; mjxrc5f0p2 Base ;
k02lqjfk10 FastVisualizationHelper ; mjxrc5f0p2 * Bodies [ 10 ] ; real_T
NumNonFixedBodies ; real_T PositionNumber ; real_T VelocityNumber ; real_T
PositionDoFMap [ 20 ] ; real_T VelocityDoFMap [ 20 ] ; mjxrc5f0p2 _pobj0 [ 10
] ; } ;
#endif
#ifndef typedef_bgzkddb0t0
#define typedef_bgzkddb0t0
typedef struct tag_ot0qNYzQCTmtjqnniUR6uD bgzkddb0t0 ;
#endif
#ifndef struct_tag_ZNVN7zC7E75aNyir8NHVrC
#define struct_tag_ZNVN7zC7E75aNyir8NHVrC
struct tag_ZNVN7zC7E75aNyir8NHVrC { real_T Index ; aiqe041hfp * NameInternal
; iuu1xhv34c JointInternal ; real_T ParentIndex ; real_T MassInternal ;
real_T CenterOfMassInternal [ 3 ] ; real_T InertiaInternal [ 9 ] ; real_T
SpatialInertia [ 36 ] ; nnaoaxiu0k CollisionsInternal ; } ;
#endif
#ifndef typedef_p4befnw0fh
#define typedef_p4befnw0fh
typedef struct tag_ZNVN7zC7E75aNyir8NHVrC p4befnw0fh ;
#endif
#ifndef struct_tag_RhhlvMPq7jgznxoKMEsF0D
#define struct_tag_RhhlvMPq7jgznxoKMEsF0D
struct tag_RhhlvMPq7jgznxoKMEsF0D { real_T NumBodies ; p4befnw0fh Base ;
real_T Gravity [ 3 ] ; p4befnw0fh * Bodies [ 10 ] ; p4befnw0fh _pobj0 [ 10 ]
; } ;
#endif
#ifndef typedef_n31brccd3l
#define typedef_n31brccd3l
typedef struct tag_RhhlvMPq7jgznxoKMEsF0D n31brccd3l ;
#endif
#ifndef struct_tag_Q5QFJIZFSDknXc34G7XhYH
#define struct_tag_Q5QFJIZFSDknXc34G7XhYH
struct tag_Q5QFJIZFSDknXc34G7XhYH { bgzkddb0t0 * Robot ; real_T WeightMatrix
[ 36 ] ; gmphnpqbau * Limits ; aiqe041hfp * BodyName ; real_T Tform [ 16 ] ;
gmphnpqbau * ErrTemp ; real_T CostTemp ; gmphnpqbau * GradTemp ; } ;
#endif
#ifndef typedef_bkb4oam1gt
#define typedef_bkb4oam1gt
typedef struct tag_Q5QFJIZFSDknXc34G7XhYH bkb4oam1gt ;
#endif
#ifndef struct_tag_1GtUeUZqo3sARlzmLj2ZNE
#define struct_tag_1GtUeUZqo3sARlzmLj2ZNE
struct tag_1GtUeUZqo3sARlzmLj2ZNE { char_T Name [ 18 ] ; boolean_T
ConstraintsOn ; real_T SolutionTolerance ; boolean_T RandomRestart ;
bkb4oam1gt * ExtraArgs ; real_T MaxNumIteration ; real_T MaxTime ; real_T
SeedInternal [ 6 ] ; real_T MaxTimeInternal ; real_T MaxNumIterationInternal
; real_T StepTolerance ; oem5wni2vy TimeObj ; real_T GradientTolerance ;
real_T ErrorChangeTolerance ; real_T DampingBias ; boolean_T UseErrorDamping
; oem5wni2vy TimeObjInternal ; } ;
#endif
#ifndef typedef_pfxij5ag5q
#define typedef_pfxij5ag5q
typedef struct tag_1GtUeUZqo3sARlzmLj2ZNE pfxij5ag5q ;
#endif
#ifndef struct_tag_ZQuDh6EPhps28ggcXRLbCG
#define struct_tag_ZQuDh6EPhps28ggcXRLbCG
struct tag_ZQuDh6EPhps28ggcXRLbCG { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; pfxij5ag5q * Solver ;
gmphnpqbau * Limits ; bgzkddb0t0 * RigidBodyTreeInternal ; bkb4oam1gt _pobj0
; bgzkddb0t0 _pobj1 ; nnaoaxiu0k _pobj2 [ 11 ] ; iuu1xhv34c _pobj3 [ 10 ] ;
mjxrc5f0p2 _pobj4 [ 10 ] ; pfxij5ag5q _pobj5 ; } ;
#endif
#ifndef typedef_p1rn1vqdri
#define typedef_p1rn1vqdri
typedef struct tag_ZQuDh6EPhps28ggcXRLbCG p1rn1vqdri ;
#endif
#ifndef struct_tag_c1IIl6v72gHAlhIw87qa0
#define struct_tag_c1IIl6v72gHAlhIw87qa0
struct tag_c1IIl6v72gHAlhIw87qa0 { boolean_T matlabCodegenIsDeleted ; int32_T
isInitialized ; n31brccd3l TreeInternal ; p1rn1vqdri IKInternal ; } ;
#endif
#ifndef typedef_a3umz4zmr0
#define typedef_a3umz4zmr0
typedef struct tag_c1IIl6v72gHAlhIw87qa0 a3umz4zmr0 ;
#endif
#ifndef typedef_exuekx0jci
#define typedef_exuekx0jci
typedef int32_T exuekx0jci ;
#endif
#ifndef robotics_core_internal_NLPSolverExitFlags_constants
#define robotics_core_internal_NLPSolverExitFlags_constants
#define robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound (1)
#define robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded (2)
#define robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded (3)
#define robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum (4)
#define robotics_core_internal_NLPSolverExitFlags_ChangeInErrorBelowMinimum (5)
#define robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid (6)
#define robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSemidefinite (7)
#define robotics_core_internal_NLPSolverExitFlags_TrustRegionRadiusBelowMinimum (8)
#endif
typedef struct P_ P ;
#endif
