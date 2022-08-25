#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void pp_43e6ab1_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv ,
CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
pp_43e6ab1_1_resetAsmStateVector ( const void * mech , double * state ) {
double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ;
state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ;
state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ] ;
state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ] ;
state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ] ;
state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ; state [ 30 ] = xx [ 0 ] ;
state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ; state [ 33 ] = xx [ 0 ] ;
state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ; state [ 36 ] = xx [ 0 ] ;
state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ; state [ 39 ] = xx [ 0 ] ;
state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; } void
pp_43e6ab1_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; ( void
) motionData ; } void pp_43e6ab1_1_computeDiscreteState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , double * state ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
} void pp_43e6ab1_1_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [ 0 ] +
dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ; state [ 4 ] =
state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [ 3 ] ;
state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ; state [ 10 ] = state [ 10 ] +
dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas [ 6 ] ; state [ 13
] = state [ 13 ] + dofDeltas [ 7 ] ; state [ 14 ] = state [ 14 ] + dofDeltas
[ 8 ] ; state [ 18 ] = state [ 18 ] + dofDeltas [ 9 ] ; state [ 19 ] = state
[ 19 ] + dofDeltas [ 10 ] ; state [ 20 ] = state [ 20 ] + dofDeltas [ 11 ] ;
state [ 24 ] = state [ 24 ] + dofDeltas [ 12 ] ; state [ 26 ] = state [ 26 ]
+ dofDeltas [ 13 ] ; state [ 28 ] = state [ 28 ] + dofDeltas [ 14 ] ; state [
30 ] = state [ 30 ] + dofDeltas [ 15 ] ; state [ 32 ] = state [ 32 ] +
dofDeltas [ 16 ] ; state [ 34 ] = state [ 34 ] + dofDeltas [ 17 ] ; state [
36 ] = state [ 36 ] + dofDeltas [ 18 ] ; state [ 37 ] = state [ 37 ] +
dofDeltas [ 19 ] ; state [ 38 ] = state [ 38 ] + dofDeltas [ 20 ] ; } static
void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) {
state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 12 ] = state [ 12 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_1 ( double mag , double * state
) { state [ 13 ] = state [ 13 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_1v ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; state [ 16 ] = state [ 16 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_2 ( double mag , double * state
) { state [ 14 ] = state [ 14 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_2v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 18 ] = state [ 18 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_1 ( double mag , double * state
) { state [ 19 ] = state [ 19 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_1v ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; state [ 22 ] = state [ 22 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_2 ( double mag , double * state
) { state [ 20 ] = state [ 20 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_2v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 24 ] = state [ 24 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 25 ] = state [ 25 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 26 ] = state [ 26 ] + mag ; } static void
perturbAsmJointPrimitiveState_15_0v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_16_0 ( double mag , double * state
) { state [ 28 ] = state [ 28 ] + mag ; } static void
perturbAsmJointPrimitiveState_16_0v ( double mag , double * state ) { state [
28 ] = state [ 28 ] + mag ; state [ 29 ] = state [ 29 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_17_0 ( double mag , double * state
) { state [ 30 ] = state [ 30 ] + mag ; } static void
perturbAsmJointPrimitiveState_17_0v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 31 ] = state [ 31 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_18_0 ( double mag , double * state
) { state [ 32 ] = state [ 32 ] + mag ; } static void
perturbAsmJointPrimitiveState_18_0v ( double mag , double * state ) { state [
32 ] = state [ 32 ] + mag ; state [ 33 ] = state [ 33 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_19_0 ( double mag , double * state
) { state [ 34 ] = state [ 34 ] + mag ; } static void
perturbAsmJointPrimitiveState_19_0v ( double mag , double * state ) { state [
34 ] = state [ 34 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_22_0 ( double mag , double * state
) { state [ 36 ] = state [ 36 ] + mag ; } static void
perturbAsmJointPrimitiveState_22_0v ( double mag , double * state ) { state [
36 ] = state [ 36 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_22_1 ( double mag , double * state
) { state [ 37 ] = state [ 37 ] + mag ; } static void
perturbAsmJointPrimitiveState_22_1v ( double mag , double * state ) { state [
37 ] = state [ 37 ] + mag ; state [ 40 ] = state [ 40 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_22_2 ( double mag , double * state
) { state [ 38 ] = state [ 38 ] + mag ; } static void
perturbAsmJointPrimitiveState_22_2v ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; state [ 41 ] = state [ 41 ] - 0.875 * mag ; }
void pp_43e6ab1_1_perturbAsmJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity , double
* state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( ( stageIdx * 6 +
primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; case 122 :
perturbAsmJointPrimitiveState_10_1 ( mag , state ) ; break ; case 123 :
perturbAsmJointPrimitiveState_10_1v ( mag , state ) ; break ; case 124 :
perturbAsmJointPrimitiveState_10_2 ( mag , state ) ; break ; case 125 :
perturbAsmJointPrimitiveState_10_2v ( mag , state ) ; break ; case 132 :
perturbAsmJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbAsmJointPrimitiveState_11_0v ( mag , state ) ; break ; case 134 :
perturbAsmJointPrimitiveState_11_1 ( mag , state ) ; break ; case 135 :
perturbAsmJointPrimitiveState_11_1v ( mag , state ) ; break ; case 136 :
perturbAsmJointPrimitiveState_11_2 ( mag , state ) ; break ; case 137 :
perturbAsmJointPrimitiveState_11_2v ( mag , state ) ; break ; case 168 :
perturbAsmJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbAsmJointPrimitiveState_14_0v ( mag , state ) ; break ; case 180 :
perturbAsmJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbAsmJointPrimitiveState_15_0v ( mag , state ) ; break ; case 192 :
perturbAsmJointPrimitiveState_16_0 ( mag , state ) ; break ; case 193 :
perturbAsmJointPrimitiveState_16_0v ( mag , state ) ; break ; case 204 :
perturbAsmJointPrimitiveState_17_0 ( mag , state ) ; break ; case 205 :
perturbAsmJointPrimitiveState_17_0v ( mag , state ) ; break ; case 216 :
perturbAsmJointPrimitiveState_18_0 ( mag , state ) ; break ; case 217 :
perturbAsmJointPrimitiveState_18_0v ( mag , state ) ; break ; case 228 :
perturbAsmJointPrimitiveState_19_0 ( mag , state ) ; break ; case 229 :
perturbAsmJointPrimitiveState_19_0v ( mag , state ) ; break ; case 264 :
perturbAsmJointPrimitiveState_22_0 ( mag , state ) ; break ; case 265 :
perturbAsmJointPrimitiveState_22_0v ( mag , state ) ; break ; case 266 :
perturbAsmJointPrimitiveState_22_1 ( mag , state ) ; break ; case 267 :
perturbAsmJointPrimitiveState_22_1v ( mag , state ) ; break ; case 268 :
perturbAsmJointPrimitiveState_22_2 ( mag , state ) ; break ; case 269 :
perturbAsmJointPrimitiveState_22_2v ( mag , state ) ; break ; } } void
pp_43e6ab1_1_computePosDofBlendMatrix ( const void * mech , size_t stageIdx ,
size_t primIdx , const double * state , int partialType , double * matrix ) {
( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void ) state ; (
void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 + primIdx ) )
{ } } void pp_43e6ab1_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void pp_43e6ab1_1_projectPartiallyTargetedPos ( const void
* mech , size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void pp_43e6ab1_1_propagateMotion (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const double *
state , double * motionData ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 319 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 1.0 ; xx [ 1 ] = -
xx [ 0 ] ; xx [ 2 ] = 0.0 ; xx [ 3 ] = 0.5 ; xx [ 4 ] = xx [ 3 ] * state [ 0
] ; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] =
0.089159 ; xx [ 7 ] = xx [ 3 ] * state [ 2 ] ; xx [ 8 ] = cos ( xx [ 7 ] ) ;
xx [ 9 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = 2.0 ; xx [ 10 ] = 0.28 ; xx [ 11 ] =
xx [ 10 ] * xx [ 9 ] ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] * xx [ 11 ] ; xx [ 13
] = 0.13585 ; xx [ 14 ] = xx [ 7 ] * xx [ 11 ] * xx [ 9 ] - xx [ 10 ] ; xx [
11 ] = 0.7071067811865476 ; xx [ 15 ] = xx [ 3 ] * state [ 4 ] ; xx [ 16 ] =
xx [ 11 ] * sin ( xx [ 15 ] ) ; xx [ 17 ] = xx [ 11 ] * cos ( xx [ 15 ] ) ;
xx [ 15 ] = xx [ 16 ] - xx [ 17 ] ; xx [ 18 ] = xx [ 16 ] + xx [ 17 ] ; xx [
16 ] = 0.25 ; xx [ 17 ] = xx [ 18 ] * xx [ 16 ] ; xx [ 19 ] = xx [ 7 ] * xx [
17 ] * xx [ 15 ] ; xx [ 20 ] = - xx [ 19 ] ; xx [ 21 ] = 0.1197 ; xx [ 22 ] =
- xx [ 21 ] ; xx [ 23 ] = 0.145 ; xx [ 24 ] = xx [ 23 ] - ( xx [ 7 ] * xx [
18 ] * xx [ 17 ] - xx [ 16 ] ) ; xx [ 17 ] = xx [ 3 ] * state [ 6 ] ; xx [ 25
] = xx [ 11 ] * sin ( xx [ 17 ] ) ; xx [ 26 ] = xx [ 11 ] * cos ( xx [ 17 ] )
; xx [ 17 ] = xx [ 25 ] - xx [ 26 ] ; xx [ 27 ] = xx [ 25 ] + xx [ 26 ] ; xx
[ 25 ] = 0.14225 ; xx [ 26 ] = xx [ 3 ] * state [ 8 ] ; xx [ 28 ] = xx [ 11 ]
* sin ( xx [ 26 ] ) ; xx [ 29 ] = xx [ 11 ] * cos ( xx [ 26 ] ) ; xx [ 26 ] =
xx [ 28 ] - xx [ 29 ] ; xx [ 30 ] = xx [ 28 ] + xx [ 29 ] ; xx [ 28 ] = 0.093
; xx [ 29 ] = xx [ 3 ] * state [ 10 ] ; xx [ 31 ] = cos ( xx [ 29 ] ) ; xx [
32 ] = sin ( xx [ 29 ] ) ; xx [ 29 ] = 0.09465 ; xx [ 33 ] =
0.7071067811882787 ; xx [ 34 ] = - xx [ 33 ] ; xx [ 35 ] = 0.7071067811848163
; xx [ 36 ] = - xx [ 35 ] ; xx [ 37 ] = 0.0823 ; xx [ 38 ] = xx [ 3 ] * state
[ 14 ] ; xx [ 39 ] = sin ( xx [ 38 ] ) ; xx [ 40 ] = xx [ 3 ] * state [ 13 ]
; xx [ 41 ] = cos ( xx [ 40 ] ) ; xx [ 42 ] = xx [ 3 ] * state [ 12 ] ; xx [
43 ] = xx [ 11 ] * sin ( xx [ 42 ] ) ; xx [ 44 ] = xx [ 41 ] * xx [ 43 ] ; xx
[ 45 ] = xx [ 11 ] * cos ( xx [ 42 ] ) ; xx [ 42 ] = sin ( xx [ 40 ] ) ; xx [
40 ] = xx [ 45 ] * xx [ 42 ] ; xx [ 46 ] = xx [ 44 ] - xx [ 40 ] ; xx [ 47 ]
= xx [ 44 ] + xx [ 40 ] ; xx [ 40 ] = cos ( xx [ 38 ] ) ; xx [ 38 ] = xx [ 39
] * xx [ 46 ] - xx [ 47 ] * xx [ 40 ] ; xx [ 44 ] = - xx [ 38 ] ; xx [ 48 ] =
xx [ 43 ] * xx [ 42 ] ; xx [ 42 ] = xx [ 41 ] * xx [ 45 ] ; xx [ 41 ] = xx [
48 ] - xx [ 42 ] ; xx [ 43 ] = xx [ 42 ] + xx [ 48 ] ; xx [ 42 ] = xx [ 39 ]
* xx [ 41 ] - xx [ 43 ] * xx [ 40 ] ; xx [ 45 ] = xx [ 40 ] * xx [ 41 ] + xx
[ 43 ] * xx [ 39 ] ; xx [ 41 ] = xx [ 40 ] * xx [ 46 ] + xx [ 47 ] * xx [ 39
] ; xx [ 43 ] = 0.4 + state [ 18 ] ; xx [ 46 ] = 1.75 ; xx [ 47 ] = 0.2183 ;
xx [ 48 ] = xx [ 3 ] * state [ 24 ] ; xx [ 49 ] = cos ( xx [ 48 ] ) ; xx [ 50
] = sin ( xx [ 48 ] ) ; xx [ 48 ] = - xx [ 50 ] ; xx [ 51 ] = xx [ 3 ] *
state [ 26 ] ; xx [ 52 ] = cos ( xx [ 51 ] ) ; xx [ 53 ] = sin ( xx [ 51 ] )
; xx [ 51 ] = xx [ 10 ] * xx [ 53 ] ; xx [ 54 ] = xx [ 7 ] * xx [ 52 ] * xx [
51 ] ; xx [ 55 ] = xx [ 7 ] * xx [ 51 ] * xx [ 53 ] - xx [ 10 ] ; xx [ 10 ] =
xx [ 3 ] * state [ 28 ] ; xx [ 51 ] = xx [ 11 ] * sin ( xx [ 10 ] ) ; xx [ 56
] = xx [ 11 ] * cos ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 51 ] - xx [ 56 ] ; xx [
57 ] = xx [ 51 ] + xx [ 56 ] ; xx [ 51 ] = xx [ 57 ] * xx [ 16 ] ; xx [ 56 ]
= xx [ 7 ] * xx [ 51 ] * xx [ 10 ] ; xx [ 58 ] = - xx [ 56 ] ; xx [ 59 ] = xx
[ 23 ] - ( xx [ 7 ] * xx [ 57 ] * xx [ 51 ] - xx [ 16 ] ) ; xx [ 16 ] = xx [
3 ] * state [ 30 ] ; xx [ 23 ] = xx [ 11 ] * sin ( xx [ 16 ] ) ; xx [ 51 ] =
xx [ 11 ] * cos ( xx [ 16 ] ) ; xx [ 16 ] = xx [ 23 ] - xx [ 51 ] ; xx [ 60 ]
= xx [ 23 ] + xx [ 51 ] ; xx [ 23 ] = xx [ 3 ] * state [ 32 ] ; xx [ 51 ] =
xx [ 11 ] * sin ( xx [ 23 ] ) ; xx [ 61 ] = xx [ 11 ] * cos ( xx [ 23 ] ) ;
xx [ 23 ] = xx [ 51 ] - xx [ 61 ] ; xx [ 62 ] = xx [ 51 ] + xx [ 61 ] ; xx [
51 ] = xx [ 3 ] * state [ 34 ] ; xx [ 61 ] = cos ( xx [ 51 ] ) ; xx [ 63 ] =
sin ( xx [ 51 ] ) ; xx [ 51 ] = xx [ 3 ] * state [ 38 ] ; xx [ 64 ] = cos (
xx [ 51 ] ) ; xx [ 65 ] = xx [ 3 ] * state [ 37 ] ; xx [ 66 ] = cos ( xx [ 65
] ) ; xx [ 67 ] = xx [ 3 ] * state [ 36 ] ; xx [ 3 ] = xx [ 11 ] * sin ( xx [
67 ] ) ; xx [ 68 ] = xx [ 66 ] * xx [ 3 ] ; xx [ 69 ] = xx [ 11 ] * cos ( xx
[ 67 ] ) ; xx [ 11 ] = sin ( xx [ 65 ] ) ; xx [ 65 ] = xx [ 69 ] * xx [ 11 ]
; xx [ 67 ] = xx [ 68 ] - xx [ 65 ] ; xx [ 70 ] = xx [ 68 ] + xx [ 65 ] ; xx
[ 65 ] = sin ( xx [ 51 ] ) ; xx [ 51 ] = xx [ 64 ] * xx [ 67 ] + xx [ 70 ] *
xx [ 65 ] ; xx [ 68 ] = xx [ 3 ] * xx [ 11 ] ; xx [ 3 ] = xx [ 66 ] * xx [ 69
] ; xx [ 11 ] = xx [ 68 ] - xx [ 3 ] ; xx [ 66 ] = xx [ 68 ] + xx [ 3 ] ; xx
[ 3 ] = xx [ 64 ] * xx [ 11 ] + xx [ 66 ] * xx [ 65 ] ; xx [ 68 ] = xx [ 66 ]
* xx [ 64 ] - xx [ 65 ] * xx [ 11 ] ; xx [ 11 ] = xx [ 65 ] * xx [ 67 ] - xx
[ 70 ] * xx [ 64 ] ; xx [ 66 ] = xx [ 52 ] * xx [ 50 ] ; xx [ 67 ] = xx [ 49
] * xx [ 53 ] ; xx [ 69 ] = xx [ 50 ] * xx [ 53 ] ; xx [ 70 ] = xx [ 49 ] *
xx [ 52 ] ; xx [ 71 ] = - xx [ 70 ] ; xx [ 72 ] = xx [ 13 ] * xx [ 49 ] ; xx
[ 73 ] = xx [ 49 ] * xx [ 54 ] ; xx [ 74 ] = ( xx [ 72 ] * xx [ 50 ] - xx [
49 ] * xx [ 73 ] ) * xx [ 7 ] + xx [ 54 ] + xx [ 46 ] ; xx [ 75 ] = xx [ 13 ]
- xx [ 7 ] * ( xx [ 73 ] * xx [ 50 ] + xx [ 49 ] * xx [ 72 ] ) + xx [ 47 ] ;
xx [ 72 ] = xx [ 4 ] - xx [ 55 ] ; xx [ 73 ] = xx [ 66 ] * xx [ 10 ] + xx [
57 ] * xx [ 69 ] ; xx [ 76 ] = xx [ 67 ] * xx [ 10 ] - xx [ 57 ] * xx [ 70 ]
; xx [ 77 ] = xx [ 69 ] * xx [ 10 ] - xx [ 57 ] * xx [ 66 ] ; xx [ 78 ] = xx
[ 57 ] * xx [ 67 ] + xx [ 70 ] * xx [ 10 ] ; xx [ 79 ] = xx [ 66 ] ; xx [ 80
] = xx [ 67 ] ; xx [ 81 ] = xx [ 69 ] ; xx [ 82 ] = xx [ 71 ] ; xx [ 83 ] =
xx [ 58 ] ; xx [ 84 ] = xx [ 22 ] ; xx [ 85 ] = xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 79 , xx + 83 , xx + 86 ) ; xx [ 70 ] = xx
[ 86 ] + xx [ 74 ] ; xx [ 79 ] = xx [ 87 ] + xx [ 75 ] ; xx [ 80 ] = xx [ 88
] + xx [ 72 ] ; xx [ 81 ] = xx [ 73 ] * xx [ 16 ] + xx [ 77 ] * xx [ 60 ] ;
xx [ 82 ] = xx [ 76 ] * xx [ 16 ] - xx [ 60 ] * xx [ 78 ] ; xx [ 86 ] = xx [
77 ] * xx [ 16 ] - xx [ 60 ] * xx [ 73 ] ; xx [ 87 ] = xx [ 78 ] * xx [ 16 ]
+ xx [ 76 ] * xx [ 60 ] ; xx [ 88 ] = xx [ 77 ] * xx [ 25 ] ; xx [ 89 ] = xx
[ 76 ] * xx [ 25 ] ; xx [ 90 ] = ( xx [ 88 ] * xx [ 73 ] - xx [ 89 ] * xx [
78 ] ) * xx [ 7 ] + xx [ 70 ] ; xx [ 91 ] = xx [ 79 ] - xx [ 7 ] * ( xx [ 88
] * xx [ 78 ] + xx [ 89 ] * xx [ 73 ] ) ; xx [ 92 ] = xx [ 25 ] - ( xx [ 76 ]
* xx [ 89 ] + xx [ 77 ] * xx [ 88 ] ) * xx [ 7 ] + xx [ 80 ] ; xx [ 88 ] = xx
[ 81 ] * xx [ 23 ] - xx [ 87 ] * xx [ 62 ] ; xx [ 89 ] = xx [ 82 ] * xx [ 23
] - xx [ 86 ] * xx [ 62 ] ; xx [ 93 ] = xx [ 86 ] * xx [ 23 ] + xx [ 62 ] *
xx [ 82 ] ; xx [ 94 ] = xx [ 62 ] * xx [ 81 ] + xx [ 87 ] * xx [ 23 ] ; xx [
95 ] = xx [ 28 ] * xx [ 82 ] ; xx [ 96 ] = xx [ 87 ] * xx [ 28 ] ; xx [ 97 ]
= xx [ 7 ] * ( xx [ 86 ] * xx [ 95 ] + xx [ 96 ] * xx [ 81 ] ) + xx [ 90 ] ;
xx [ 98 ] = xx [ 28 ] - ( xx [ 87 ] * xx [ 96 ] + xx [ 95 ] * xx [ 82 ] ) *
xx [ 7 ] + xx [ 91 ] ; xx [ 99 ] = ( xx [ 95 ] * xx [ 81 ] - xx [ 86 ] * xx [
96 ] ) * xx [ 7 ] + xx [ 92 ] ; xx [ 95 ] = xx [ 63 ] * xx [ 93 ] - xx [ 61 ]
* xx [ 88 ] ; xx [ 96 ] = xx [ 94 ] * xx [ 63 ] + xx [ 89 ] * xx [ 61 ] ; xx
[ 100 ] = - xx [ 96 ] ; xx [ 101 ] = xx [ 63 ] * xx [ 88 ] + xx [ 61 ] * xx [
93 ] ; xx [ 102 ] = - xx [ 101 ] ; xx [ 103 ] = xx [ 89 ] * xx [ 63 ] - xx [
94 ] * xx [ 61 ] ; xx [ 104 ] = - xx [ 103 ] ; xx [ 105 ] = xx [ 29 ] * xx [
93 ] ; xx [ 106 ] = xx [ 89 ] * xx [ 29 ] ; xx [ 107 ] = ( xx [ 105 ] * xx [
88 ] - xx [ 94 ] * xx [ 106 ] ) * xx [ 7 ] + xx [ 97 ] ; xx [ 108 ] = xx [ 98
] - xx [ 7 ] * ( xx [ 94 ] * xx [ 105 ] + xx [ 106 ] * xx [ 88 ] ) ; xx [ 109
] = xx [ 29 ] - ( xx [ 89 ] * xx [ 106 ] + xx [ 105 ] * xx [ 93 ] ) * xx [ 7
] + xx [ 99 ] ; xx [ 110 ] = xx [ 95 ] ; xx [ 111 ] = xx [ 100 ] ; xx [ 112 ]
= xx [ 102 ] ; xx [ 113 ] = xx [ 104 ] ; xx [ 114 ] = xx [ 51 ] ; xx [ 115 ]
= xx [ 3 ] ; xx [ 116 ] = xx [ 68 ] ; xx [ 117 ] = xx [ 11 ] ;
pm_math_Quaternion_compose_ra ( xx + 110 , xx + 114 , xx + 118 ) ; xx [ 105 ]
= xx [ 103 ] * xx [ 37 ] ; xx [ 106 ] = xx [ 37 ] * xx [ 96 ] ; xx [ 110 ] =
xx [ 5 ] * xx [ 8 ] ; xx [ 111 ] = - xx [ 110 ] ; xx [ 112 ] = xx [ 6 ] * xx
[ 9 ] ; xx [ 113 ] = xx [ 5 ] * xx [ 9 ] ; xx [ 122 ] = - xx [ 113 ] ; xx [
123 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 124 ] = - xx [ 123 ] ; xx [ 125 ] = xx [
12 ] * xx [ 6 ] ; xx [ 126 ] = xx [ 13 ] * xx [ 6 ] ; xx [ 127 ] = xx [ 12 ]
- xx [ 7 ] * ( xx [ 125 ] * xx [ 6 ] + xx [ 5 ] * xx [ 126 ] ) ; xx [ 128 ] =
xx [ 13 ] - ( xx [ 126 ] * xx [ 6 ] - xx [ 5 ] * xx [ 125 ] ) * xx [ 7 ] ; xx
[ 125 ] = xx [ 4 ] - xx [ 14 ] ; xx [ 126 ] = xx [ 18 ] * xx [ 113 ] + xx [
110 ] * xx [ 15 ] ; xx [ 129 ] = xx [ 112 ] * xx [ 15 ] - xx [ 18 ] * xx [
123 ] ; xx [ 130 ] = xx [ 113 ] * xx [ 15 ] - xx [ 18 ] * xx [ 110 ] ; xx [
110 ] = xx [ 18 ] * xx [ 112 ] + xx [ 123 ] * xx [ 15 ] ; xx [ 131 ] = xx [
111 ] ; xx [ 132 ] = xx [ 112 ] ; xx [ 133 ] = xx [ 122 ] ; xx [ 134 ] = xx [
124 ] ; xx [ 135 ] = xx [ 20 ] ; xx [ 136 ] = xx [ 22 ] ; xx [ 137 ] = xx [
24 ] ; pm_math_Quaternion_xform_ra ( xx + 131 , xx + 135 , xx + 138 ) ; xx [
113 ] = xx [ 138 ] + xx [ 127 ] ; xx [ 123 ] = xx [ 139 ] + xx [ 128 ] ; xx [
131 ] = xx [ 140 ] + xx [ 125 ] ; xx [ 132 ] = xx [ 126 ] * xx [ 17 ] + xx [
130 ] * xx [ 27 ] ; xx [ 133 ] = xx [ 129 ] * xx [ 17 ] - xx [ 27 ] * xx [
110 ] ; xx [ 134 ] = xx [ 27 ] * xx [ 126 ] - xx [ 130 ] * xx [ 17 ] ; xx [
138 ] = xx [ 110 ] * xx [ 17 ] + xx [ 129 ] * xx [ 27 ] ; xx [ 139 ] = xx [
130 ] * xx [ 25 ] ; xx [ 140 ] = xx [ 129 ] * xx [ 25 ] ; xx [ 141 ] = xx [ 7
] * ( xx [ 139 ] * xx [ 126 ] - xx [ 140 ] * xx [ 110 ] ) + xx [ 113 ] ; xx [
142 ] = xx [ 123 ] + ( xx [ 140 ] * xx [ 126 ] + xx [ 139 ] * xx [ 110 ] ) *
xx [ 7 ] ; xx [ 143 ] = xx [ 25 ] - ( xx [ 129 ] * xx [ 140 ] + xx [ 130 ] *
xx [ 139 ] ) * xx [ 7 ] + xx [ 131 ] ; xx [ 139 ] = xx [ 132 ] * xx [ 26 ] +
xx [ 138 ] * xx [ 30 ] ; xx [ 140 ] = xx [ 133 ] * xx [ 26 ] - xx [ 30 ] * xx
[ 134 ] ; xx [ 144 ] = xx [ 134 ] * xx [ 26 ] + xx [ 30 ] * xx [ 133 ] ; xx [
145 ] = xx [ 132 ] * xx [ 30 ] - xx [ 138 ] * xx [ 26 ] ; xx [ 146 ] = xx [
28 ] * xx [ 133 ] ; xx [ 147 ] = xx [ 138 ] * xx [ 28 ] ; xx [ 148 ] = xx [ 7
] * ( xx [ 146 ] * xx [ 134 ] - xx [ 132 ] * xx [ 147 ] ) + xx [ 141 ] ; xx [
149 ] = xx [ 28 ] - ( xx [ 138 ] * xx [ 147 ] + xx [ 146 ] * xx [ 133 ] ) *
xx [ 7 ] + xx [ 142 ] ; xx [ 150 ] = xx [ 143 ] - ( xx [ 132 ] * xx [ 146 ] +
xx [ 147 ] * xx [ 134 ] ) * xx [ 7 ] ; xx [ 146 ] = xx [ 32 ] * xx [ 144 ] +
xx [ 31 ] * xx [ 139 ] ; xx [ 147 ] = xx [ 145 ] * xx [ 32 ] - xx [ 140 ] *
xx [ 31 ] ; xx [ 151 ] = xx [ 31 ] * xx [ 144 ] - xx [ 32 ] * xx [ 139 ] ; xx
[ 152 ] = - xx [ 151 ] ; xx [ 153 ] = xx [ 145 ] * xx [ 31 ] + xx [ 140 ] *
xx [ 32 ] ; xx [ 154 ] = - xx [ 153 ] ; xx [ 155 ] = xx [ 140 ] * xx [ 29 ] ;
xx [ 156 ] = xx [ 29 ] * xx [ 144 ] ; xx [ 157 ] = ( xx [ 145 ] * xx [ 155 ]
- xx [ 156 ] * xx [ 139 ] ) * xx [ 7 ] + xx [ 148 ] ; xx [ 158 ] = xx [ 7 ] *
( xx [ 145 ] * xx [ 156 ] + xx [ 155 ] * xx [ 139 ] ) + xx [ 149 ] ; xx [ 159
] = xx [ 29 ] - ( xx [ 140 ] * xx [ 155 ] + xx [ 156 ] * xx [ 144 ] ) * xx [
7 ] + xx [ 150 ] ; xx [ 160 ] = xx [ 146 ] ; xx [ 161 ] = xx [ 147 ] ; xx [
162 ] = xx [ 152 ] ; xx [ 163 ] = xx [ 154 ] ; xx [ 164 ] = xx [ 44 ] ; xx [
165 ] = xx [ 42 ] ; xx [ 166 ] = xx [ 45 ] ; xx [ 167 ] = xx [ 41 ] ;
pm_math_Quaternion_compose_ra ( xx + 160 , xx + 164 , xx + 168 ) ; xx [ 155 ]
= xx [ 153 ] * xx [ 37 ] ; xx [ 156 ] = xx [ 37 ] * xx [ 147 ] ; xx [ 160 ] =
xx [ 7 ] * ( xx [ 155 ] * xx [ 146 ] - xx [ 151 ] * xx [ 156 ] ) + xx [ 157 ]
; xx [ 161 ] = xx [ 37 ] - ( xx [ 153 ] * xx [ 155 ] + xx [ 156 ] * xx [ 147
] ) * xx [ 7 ] + xx [ 158 ] ; xx [ 153 ] = ( xx [ 156 ] * xx [ 146 ] + xx [
151 ] * xx [ 155 ] ) * xx [ 7 ] + xx [ 159 ] ; xx [ 172 ] = xx [ 43 ] ; xx [
173 ] = state [ 19 ] ; xx [ 174 ] = state [ 20 ] ;
pm_math_Quaternion_xform_ra ( xx + 168 , xx + 172 , xx + 175 ) ; xx [ 151 ] =
xx [ 63 ] * xx [ 68 ] - xx [ 61 ] * xx [ 51 ] ; xx [ 155 ] = xx [ 3 ] * xx [
61 ] + xx [ 11 ] * xx [ 63 ] ; xx [ 156 ] = xx [ 61 ] * xx [ 68 ] + xx [ 63 ]
* xx [ 51 ] ; xx [ 162 ] = xx [ 3 ] * xx [ 63 ] - xx [ 11 ] * xx [ 61 ] ; xx
[ 163 ] = xx [ 151 ] * xx [ 23 ] + xx [ 62 ] * xx [ 162 ] ; xx [ 178 ] = xx [
156 ] * xx [ 62 ] + xx [ 155 ] * xx [ 23 ] ; xx [ 179 ] = xx [ 156 ] * xx [
23 ] - xx [ 155 ] * xx [ 62 ] ; xx [ 180 ] = xx [ 162 ] * xx [ 23 ] - xx [ 62
] * xx [ 151 ] ; xx [ 181 ] = xx [ 62 ] * xx [ 37 ] ; xx [ 182 ] = xx [ 7 ] *
xx [ 181 ] * xx [ 23 ] ; xx [ 183 ] = xx [ 37 ] - xx [ 7 ] * xx [ 62 ] * xx [
181 ] + xx [ 28 ] ; xx [ 181 ] = xx [ 163 ] * xx [ 16 ] - xx [ 179 ] * xx [
60 ] ; xx [ 184 ] = xx [ 178 ] * xx [ 16 ] + xx [ 180 ] * xx [ 60 ] ; xx [
185 ] = xx [ 60 ] * xx [ 163 ] + xx [ 179 ] * xx [ 16 ] ; xx [ 186 ] = xx [
180 ] * xx [ 16 ] - xx [ 60 ] * xx [ 178 ] ; xx [ 187 ] = xx [ 60 ] * xx [ 29
] ; xx [ 188 ] = xx [ 60 ] * xx [ 182 ] ; xx [ 189 ] = xx [ 182 ] - ( xx [
187 ] * xx [ 16 ] + xx [ 60 ] * xx [ 188 ] ) * xx [ 7 ] ; xx [ 190 ] = xx [
29 ] + xx [ 7 ] * ( xx [ 188 ] * xx [ 16 ] - xx [ 60 ] * xx [ 187 ] ) + xx [
25 ] ; xx [ 187 ] = xx [ 181 ] * xx [ 10 ] - xx [ 57 ] * xx [ 185 ] ; xx [
188 ] = xx [ 184 ] * xx [ 10 ] + xx [ 57 ] * xx [ 186 ] ; xx [ 191 ] = xx [
185 ] * xx [ 10 ] + xx [ 181 ] * xx [ 57 ] ; xx [ 192 ] = xx [ 186 ] * xx [
10 ] - xx [ 184 ] * xx [ 57 ] ; xx [ 193 ] = xx [ 190 ] * xx [ 57 ] ; xx [
194 ] = xx [ 57 ] * xx [ 189 ] ; xx [ 195 ] = xx [ 189 ] - xx [ 7 ] * ( xx [
193 ] * xx [ 10 ] + xx [ 57 ] * xx [ 194 ] ) - xx [ 56 ] ; xx [ 56 ] = xx [
183 ] - xx [ 21 ] ; xx [ 196 ] = xx [ 190 ] - ( xx [ 57 ] * xx [ 193 ] - xx [
194 ] * xx [ 10 ] ) * xx [ 7 ] + xx [ 59 ] ; xx [ 193 ] = xx [ 191 ] * xx [
53 ] + xx [ 52 ] * xx [ 187 ] ; xx [ 194 ] = xx [ 53 ] * xx [ 192 ] - xx [
188 ] * xx [ 52 ] ; xx [ 197 ] = xx [ 53 ] * xx [ 187 ] - xx [ 191 ] * xx [
52 ] ; xx [ 198 ] = xx [ 188 ] * xx [ 53 ] + xx [ 52 ] * xx [ 192 ] ; xx [
199 ] = xx [ 196 ] * xx [ 53 ] ; xx [ 200 ] = xx [ 53 ] * xx [ 195 ] ; xx [
201 ] = xx [ 195 ] + xx [ 7 ] * ( xx [ 52 ] * xx [ 199 ] - xx [ 200 ] * xx [
53 ] ) + xx [ 54 ] ; xx [ 202 ] = xx [ 56 ] + xx [ 13 ] ; xx [ 203 ] = xx [
196 ] - ( xx [ 52 ] * xx [ 200 ] + xx [ 199 ] * xx [ 53 ] ) * xx [ 7 ] - xx [
55 ] ; xx [ 199 ] = xx [ 202 ] * xx [ 50 ] ; xx [ 200 ] = xx [ 50 ] * xx [
201 ] ; pm_math_Quaternion_xform_ra ( xx + 164 , xx + 172 , xx + 204 ) ; xx [
207 ] = xx [ 205 ] + xx [ 37 ] ; xx [ 205 ] = xx [ 38 ] * xx [ 31 ] + xx [ 32
] * xx [ 45 ] ; xx [ 208 ] = xx [ 42 ] * xx [ 31 ] + xx [ 32 ] * xx [ 41 ] ;
xx [ 209 ] = xx [ 38 ] * xx [ 32 ] - xx [ 31 ] * xx [ 45 ] ; xx [ 210 ] = xx
[ 42 ] * xx [ 32 ] - xx [ 31 ] * xx [ 41 ] ; xx [ 211 ] = xx [ 206 ] * xx [
32 ] ; xx [ 212 ] = xx [ 204 ] * xx [ 32 ] ; xx [ 213 ] = xx [ 204 ] + xx [ 7
] * ( xx [ 31 ] * xx [ 211 ] - xx [ 212 ] * xx [ 32 ] ) ; xx [ 214 ] = xx [
206 ] - ( xx [ 31 ] * xx [ 212 ] + xx [ 211 ] * xx [ 32 ] ) * xx [ 7 ] + xx [
29 ] ; xx [ 211 ] = xx [ 205 ] * xx [ 26 ] + xx [ 30 ] * xx [ 210 ] ; xx [
212 ] = xx [ 208 ] * xx [ 26 ] - xx [ 30 ] * xx [ 209 ] ; xx [ 215 ] = xx [
209 ] * xx [ 26 ] + xx [ 208 ] * xx [ 30 ] ; xx [ 216 ] = xx [ 210 ] * xx [
26 ] - xx [ 205 ] * xx [ 30 ] ; xx [ 217 ] = xx [ 213 ] * xx [ 30 ] ; xx [
218 ] = xx [ 207 ] * xx [ 30 ] ; xx [ 219 ] = xx [ 213 ] - ( xx [ 30 ] * xx [
217 ] - xx [ 218 ] * xx [ 26 ] ) * xx [ 7 ] ; xx [ 220 ] = xx [ 207 ] - xx [
7 ] * ( xx [ 217 ] * xx [ 26 ] + xx [ 30 ] * xx [ 218 ] ) + xx [ 28 ] ; xx [
217 ] = xx [ 211 ] * xx [ 17 ] + xx [ 27 ] * xx [ 215 ] ; xx [ 218 ] = xx [
216 ] * xx [ 27 ] + xx [ 212 ] * xx [ 17 ] ; xx [ 221 ] = xx [ 215 ] * xx [
17 ] - xx [ 27 ] * xx [ 211 ] ; xx [ 222 ] = xx [ 216 ] * xx [ 17 ] - xx [
212 ] * xx [ 27 ] ; xx [ 223 ] = xx [ 27 ] * xx [ 214 ] ; xx [ 224 ] = xx [
27 ] * xx [ 219 ] ; xx [ 225 ] = xx [ 219 ] - xx [ 7 ] * ( xx [ 223 ] * xx [
17 ] + xx [ 27 ] * xx [ 224 ] ) ; xx [ 226 ] = xx [ 214 ] - ( xx [ 27 ] * xx
[ 223 ] - xx [ 224 ] * xx [ 17 ] ) * xx [ 7 ] + xx [ 25 ] ; xx [ 223 ] = xx [
217 ] * xx [ 15 ] + xx [ 221 ] * xx [ 18 ] ; xx [ 224 ] = xx [ 218 ] * xx [
15 ] + xx [ 222 ] * xx [ 18 ] ; xx [ 227 ] = xx [ 221 ] * xx [ 15 ] - xx [ 18
] * xx [ 217 ] ; xx [ 228 ] = xx [ 222 ] * xx [ 15 ] - xx [ 18 ] * xx [ 218 ]
; xx [ 229 ] = xx [ 18 ] * xx [ 226 ] ; xx [ 230 ] = xx [ 18 ] * xx [ 225 ] ;
xx [ 231 ] = xx [ 225 ] - xx [ 7 ] * ( xx [ 229 ] * xx [ 15 ] + xx [ 18 ] *
xx [ 230 ] ) - xx [ 19 ] ; xx [ 19 ] = xx [ 220 ] - xx [ 21 ] ; xx [ 21 ] =
xx [ 226 ] - ( xx [ 18 ] * xx [ 229 ] - xx [ 230 ] * xx [ 15 ] ) * xx [ 7 ] +
xx [ 24 ] ; xx [ 229 ] = xx [ 227 ] * xx [ 9 ] - xx [ 8 ] * xx [ 223 ] ; xx [
230 ] = xx [ 9 ] * xx [ 228 ] - xx [ 224 ] * xx [ 8 ] ; xx [ 232 ] = xx [ 227
] * xx [ 8 ] + xx [ 9 ] * xx [ 223 ] ; xx [ 233 ] = xx [ 224 ] * xx [ 9 ] +
xx [ 8 ] * xx [ 228 ] ; xx [ 234 ] = xx [ 21 ] * xx [ 9 ] ; xx [ 235 ] = xx [
9 ] * xx [ 231 ] ; xx [ 236 ] = xx [ 231 ] + xx [ 7 ] * ( xx [ 8 ] * xx [ 234
] - xx [ 235 ] * xx [ 9 ] ) + xx [ 12 ] ; xx [ 237 ] = xx [ 19 ] + xx [ 13 ]
; xx [ 238 ] = xx [ 21 ] - ( xx [ 8 ] * xx [ 235 ] + xx [ 234 ] * xx [ 9 ] )
* xx [ 7 ] - xx [ 14 ] ; xx [ 234 ] = xx [ 237 ] * xx [ 6 ] ; xx [ 235 ] = xx
[ 6 ] * xx [ 236 ] ; xx [ 239 ] = xx [ 9 ] * state [ 1 ] ; xx [ 240 ] = xx [
7 ] * xx [ 8 ] * xx [ 239 ] ; xx [ 241 ] = - xx [ 240 ] ; xx [ 242 ] = state
[ 1 ] - xx [ 7 ] * xx [ 239 ] * xx [ 9 ] ; xx [ 239 ] = xx [ 13 ] * state [ 1
] ; xx [ 243 ] = xx [ 239 ] * xx [ 9 ] ; xx [ 244 ] = 0.2800000000000001 ; xx
[ 245 ] = xx [ 7 ] * xx [ 243 ] * xx [ 9 ] - xx [ 239 ] + xx [ 244 ] * state
[ 3 ] ; xx [ 239 ] = xx [ 12 ] * state [ 1 ] ; xx [ 246 ] = xx [ 7 ] * xx [ 8
] * xx [ 243 ] ; xx [ 243 ] = xx [ 18 ] * xx [ 240 ] ; xx [ 247 ] = xx [ 18 ]
* xx [ 242 ] ; xx [ 248 ] = xx [ 7 ] * ( xx [ 18 ] * xx [ 243 ] + xx [ 247 ]
* xx [ 15 ] ) - xx [ 240 ] ; xx [ 240 ] = state [ 3 ] + state [ 5 ] ; xx [
249 ] = xx [ 242 ] - ( xx [ 18 ] * xx [ 247 ] - xx [ 243 ] * xx [ 15 ] ) * xx
[ 7 ] ; xx [ 250 ] = xx [ 241 ] ; xx [ 251 ] = state [ 3 ] ; xx [ 252 ] = xx
[ 242 ] ; pm_math_Vector3_cross_ra ( xx + 250 , xx + 135 , xx + 253 ) ; xx [
135 ] = xx [ 253 ] + xx [ 245 ] ; xx [ 136 ] = xx [ 135 ] * xx [ 18 ] ; xx [
137 ] = xx [ 255 ] - xx [ 246 ] ; xx [ 243 ] = xx [ 18 ] * xx [ 137 ] ; xx [
247 ] = 0.2500000000000001 ; xx [ 250 ] = xx [ 135 ] - ( xx [ 18 ] * xx [ 136
] - xx [ 243 ] * xx [ 15 ] ) * xx [ 7 ] + xx [ 247 ] * state [ 5 ] ; xx [ 135
] = xx [ 254 ] + xx [ 239 ] ; xx [ 251 ] = xx [ 137 ] - xx [ 7 ] * ( xx [ 136
] * xx [ 15 ] + xx [ 18 ] * xx [ 243 ] ) ; xx [ 136 ] = xx [ 27 ] * xx [ 248
] ; xx [ 137 ] = xx [ 27 ] * xx [ 249 ] ; xx [ 243 ] = xx [ 248 ] - ( xx [ 27
] * xx [ 136 ] - xx [ 137 ] * xx [ 17 ] ) * xx [ 7 ] ; xx [ 252 ] = xx [ 240
] + state [ 7 ] ; xx [ 253 ] = xx [ 249 ] - xx [ 7 ] * ( xx [ 136 ] * xx [ 17
] + xx [ 27 ] * xx [ 137 ] ) ; xx [ 136 ] = xx [ 240 ] * xx [ 25 ] + xx [ 250
] ; xx [ 137 ] = xx [ 136 ] * xx [ 27 ] ; xx [ 254 ] = xx [ 27 ] * xx [ 251 ]
; xx [ 255 ] = xx [ 136 ] - ( xx [ 27 ] * xx [ 137 ] - xx [ 254 ] * xx [ 17 ]
) * xx [ 7 ] ; xx [ 136 ] = xx [ 135 ] - xx [ 25 ] * xx [ 248 ] ; xx [ 256 ]
= xx [ 251 ] - xx [ 7 ] * ( xx [ 137 ] * xx [ 17 ] + xx [ 27 ] * xx [ 254 ] )
; xx [ 137 ] = xx [ 252 ] * xx [ 30 ] ; xx [ 254 ] = xx [ 30 ] * xx [ 243 ] ;
xx [ 257 ] = xx [ 243 ] - xx [ 7 ] * ( xx [ 137 ] * xx [ 26 ] + xx [ 30 ] *
xx [ 254 ] ) ; xx [ 258 ] = xx [ 252 ] - ( xx [ 30 ] * xx [ 137 ] - xx [ 254
] * xx [ 26 ] ) * xx [ 7 ] ; xx [ 137 ] = xx [ 253 ] + state [ 9 ] ; xx [ 254
] = xx [ 255 ] - xx [ 253 ] * xx [ 28 ] ; xx [ 259 ] = xx [ 30 ] * xx [ 136 ]
; xx [ 260 ] = xx [ 30 ] * xx [ 254 ] ; xx [ 261 ] = xx [ 254 ] - xx [ 7 ] *
( xx [ 259 ] * xx [ 26 ] + xx [ 30 ] * xx [ 260 ] ) ; xx [ 254 ] = xx [ 136 ]
- ( xx [ 30 ] * xx [ 259 ] - xx [ 260 ] * xx [ 26 ] ) * xx [ 7 ] ; xx [ 259 ]
= xx [ 28 ] * xx [ 243 ] + xx [ 256 ] ; xx [ 260 ] = xx [ 137 ] * xx [ 32 ] ;
xx [ 262 ] = xx [ 257 ] * xx [ 32 ] ; xx [ 263 ] = xx [ 257 ] - ( xx [ 31 ] *
xx [ 260 ] + xx [ 262 ] * xx [ 32 ] ) * xx [ 7 ] ; xx [ 264 ] = xx [ 258 ] +
state [ 11 ] ; xx [ 265 ] = xx [ 137 ] + xx [ 7 ] * ( xx [ 31 ] * xx [ 262 ]
- xx [ 260 ] * xx [ 32 ] ) ; xx [ 260 ] = xx [ 29 ] * xx [ 258 ] + xx [ 261 ]
; xx [ 262 ] = xx [ 259 ] * xx [ 32 ] ; xx [ 266 ] = xx [ 260 ] * xx [ 32 ] ;
xx [ 267 ] = xx [ 260 ] - ( xx [ 31 ] * xx [ 262 ] + xx [ 266 ] * xx [ 32 ] )
* xx [ 7 ] ; xx [ 260 ] = xx [ 254 ] - xx [ 257 ] * xx [ 29 ] ; xx [ 268 ] =
xx [ 259 ] + xx [ 7 ] * ( xx [ 31 ] * xx [ 266 ] - xx [ 262 ] * xx [ 32 ] ) ;
xx [ 262 ] = xx [ 35 ] * xx [ 263 ] ; xx [ 266 ] = xx [ 264 ] * xx [ 35 ] ;
xx [ 269 ] = xx [ 33 ] * xx [ 266 ] ; xx [ 270 ] = xx [ 35 ] * xx [ 266 ] ;
xx [ 266 ] = xx [ 267 ] - xx [ 265 ] * xx [ 37 ] ; xx [ 271 ] = xx [ 35 ] *
xx [ 266 ] ; xx [ 272 ] = xx [ 35 ] * xx [ 260 ] ; xx [ 273 ] = xx [ 33 ] *
xx [ 272 ] ; xx [ 274 ] = xx [ 35 ] * xx [ 272 ] ; xx [ 272 ] = xx [ 37 ] *
xx [ 263 ] + xx [ 268 ] ; xx [ 275 ] = xx [ 265 ] * xx [ 35 ] ; xx [ 276 ] =
xx [ 272 ] * xx [ 35 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 164 , xx +
263 , xx + 277 ) ; xx [ 280 ] = xx [ 277 ] + xx [ 7 ] * ( xx [ 42 ] * xx [ 45
] - xx [ 38 ] * xx [ 41 ] ) * state [ 15 ] + xx [ 7 ] * xx [ 40 ] * xx [ 39 ]
* state [ 16 ] ; xx [ 40 ] = xx [ 278 ] + ( xx [ 0 ] - ( xx [ 41 ] * xx [ 41
] + xx [ 42 ] * xx [ 42 ] ) * xx [ 7 ] ) * state [ 15 ] + ( xx [ 0 ] - xx [ 7
] * xx [ 39 ] * xx [ 39 ] ) * state [ 16 ] ; xx [ 39 ] = xx [ 279 ] + xx [ 7
] * ( xx [ 42 ] * xx [ 38 ] + xx [ 45 ] * xx [ 41 ] ) * state [ 15 ] + state
[ 17 ] ; xx [ 277 ] = xx [ 266 ] ; xx [ 278 ] = xx [ 260 ] ; xx [ 279 ] = xx
[ 272 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 164 , xx + 277 , xx + 281
) ; xx [ 164 ] = xx [ 280 ] ; xx [ 165 ] = xx [ 40 ] ; xx [ 166 ] = xx [ 39 ]
; pm_math_Vector3_cross_ra ( xx + 164 , xx + 172 , xx + 277 ) ; xx [ 38 ] =
xx [ 53 ] * state [ 25 ] ; xx [ 164 ] = xx [ 7 ] * xx [ 52 ] * xx [ 38 ] ; xx
[ 165 ] = - xx [ 164 ] ; xx [ 166 ] = state [ 25 ] - xx [ 7 ] * xx [ 38 ] *
xx [ 53 ] ; xx [ 38 ] = xx [ 13 ] * state [ 25 ] ; xx [ 167 ] = xx [ 38 ] *
xx [ 53 ] ; xx [ 172 ] = xx [ 7 ] * xx [ 167 ] * xx [ 53 ] - xx [ 38 ] + xx [
244 ] * state [ 27 ] ; xx [ 38 ] = xx [ 54 ] * state [ 25 ] ; xx [ 173 ] = xx
[ 7 ] * xx [ 52 ] * xx [ 167 ] ; xx [ 167 ] = xx [ 57 ] * xx [ 164 ] ; xx [
174 ] = xx [ 57 ] * xx [ 166 ] ; xx [ 244 ] = xx [ 7 ] * ( xx [ 57 ] * xx [
167 ] + xx [ 174 ] * xx [ 10 ] ) - xx [ 164 ] ; xx [ 164 ] = state [ 27 ] +
state [ 29 ] ; xx [ 284 ] = xx [ 166 ] - ( xx [ 57 ] * xx [ 174 ] - xx [ 167
] * xx [ 10 ] ) * xx [ 7 ] ; xx [ 285 ] = xx [ 165 ] ; xx [ 286 ] = state [
27 ] ; xx [ 287 ] = xx [ 166 ] ; pm_math_Vector3_cross_ra ( xx + 285 , xx +
83 , xx + 288 ) ; xx [ 83 ] = xx [ 288 ] + xx [ 172 ] ; xx [ 84 ] = xx [ 83 ]
* xx [ 57 ] ; xx [ 85 ] = xx [ 290 ] - xx [ 173 ] ; xx [ 167 ] = xx [ 57 ] *
xx [ 85 ] ; xx [ 174 ] = xx [ 83 ] - ( xx [ 57 ] * xx [ 84 ] - xx [ 167 ] *
xx [ 10 ] ) * xx [ 7 ] + xx [ 247 ] * state [ 29 ] ; xx [ 83 ] = xx [ 289 ] +
xx [ 38 ] ; xx [ 247 ] = xx [ 85 ] - xx [ 7 ] * ( xx [ 84 ] * xx [ 10 ] + xx
[ 57 ] * xx [ 167 ] ) ; xx [ 84 ] = xx [ 60 ] * xx [ 244 ] ; xx [ 85 ] = xx [
60 ] * xx [ 284 ] ; xx [ 167 ] = xx [ 244 ] - ( xx [ 60 ] * xx [ 84 ] - xx [
85 ] * xx [ 16 ] ) * xx [ 7 ] ; xx [ 285 ] = xx [ 164 ] + state [ 31 ] ; xx [
286 ] = xx [ 284 ] - xx [ 7 ] * ( xx [ 84 ] * xx [ 16 ] + xx [ 60 ] * xx [ 85
] ) ; xx [ 84 ] = xx [ 164 ] * xx [ 25 ] + xx [ 174 ] ; xx [ 85 ] = xx [ 84 ]
* xx [ 60 ] ; xx [ 287 ] = xx [ 60 ] * xx [ 247 ] ; xx [ 288 ] = xx [ 84 ] -
( xx [ 60 ] * xx [ 85 ] - xx [ 287 ] * xx [ 16 ] ) * xx [ 7 ] ; xx [ 84 ] =
xx [ 83 ] - xx [ 25 ] * xx [ 244 ] ; xx [ 289 ] = xx [ 247 ] - xx [ 7 ] * (
xx [ 85 ] * xx [ 16 ] + xx [ 60 ] * xx [ 287 ] ) ; xx [ 85 ] = xx [ 285 ] *
xx [ 62 ] ; xx [ 287 ] = xx [ 62 ] * xx [ 167 ] ; xx [ 290 ] = xx [ 167 ] -
xx [ 7 ] * ( xx [ 85 ] * xx [ 23 ] + xx [ 62 ] * xx [ 287 ] ) ; xx [ 291 ] =
xx [ 285 ] - ( xx [ 62 ] * xx [ 85 ] - xx [ 287 ] * xx [ 23 ] ) * xx [ 7 ] ;
xx [ 85 ] = xx [ 286 ] + state [ 33 ] ; xx [ 287 ] = xx [ 288 ] - xx [ 286 ]
* xx [ 28 ] ; xx [ 292 ] = xx [ 62 ] * xx [ 84 ] ; xx [ 293 ] = xx [ 62 ] *
xx [ 287 ] ; xx [ 294 ] = xx [ 287 ] - xx [ 7 ] * ( xx [ 292 ] * xx [ 23 ] +
xx [ 62 ] * xx [ 293 ] ) ; xx [ 287 ] = xx [ 84 ] - ( xx [ 62 ] * xx [ 292 ]
- xx [ 293 ] * xx [ 23 ] ) * xx [ 7 ] ; xx [ 292 ] = xx [ 28 ] * xx [ 167 ] +
xx [ 289 ] ; xx [ 293 ] = xx [ 85 ] * xx [ 63 ] ; xx [ 295 ] = xx [ 290 ] *
xx [ 63 ] ; xx [ 296 ] = xx [ 290 ] - ( xx [ 61 ] * xx [ 293 ] + xx [ 295 ] *
xx [ 63 ] ) * xx [ 7 ] ; xx [ 297 ] = xx [ 291 ] + state [ 35 ] ; xx [ 298 ]
= xx [ 85 ] + xx [ 7 ] * ( xx [ 61 ] * xx [ 295 ] - xx [ 293 ] * xx [ 63 ] )
; xx [ 293 ] = xx [ 29 ] * xx [ 291 ] + xx [ 294 ] ; xx [ 295 ] = xx [ 292 ]
* xx [ 63 ] ; xx [ 299 ] = xx [ 293 ] * xx [ 63 ] ; xx [ 300 ] = xx [ 293 ] -
( xx [ 61 ] * xx [ 295 ] + xx [ 299 ] * xx [ 63 ] ) * xx [ 7 ] ; xx [ 293 ] =
xx [ 287 ] - xx [ 290 ] * xx [ 29 ] ; xx [ 301 ] = xx [ 292 ] + xx [ 7 ] * (
xx [ 61 ] * xx [ 299 ] - xx [ 295 ] * xx [ 63 ] ) ; xx [ 295 ] = xx [ 35 ] *
xx [ 296 ] ; xx [ 299 ] = xx [ 297 ] * xx [ 35 ] ; xx [ 302 ] = xx [ 33 ] *
xx [ 299 ] ; xx [ 303 ] = xx [ 35 ] * xx [ 299 ] ; xx [ 299 ] = xx [ 300 ] -
xx [ 298 ] * xx [ 37 ] ; xx [ 304 ] = xx [ 35 ] * xx [ 299 ] ; xx [ 305 ] =
xx [ 35 ] * xx [ 293 ] ; xx [ 306 ] = xx [ 33 ] * xx [ 305 ] ; xx [ 307 ] =
xx [ 35 ] * xx [ 305 ] ; xx [ 305 ] = xx [ 37 ] * xx [ 296 ] + xx [ 301 ] ;
xx [ 308 ] = xx [ 298 ] * xx [ 35 ] ; xx [ 309 ] = xx [ 305 ] * xx [ 35 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 296 , xx + 310 ) ; xx [
313 ] = xx [ 299 ] ; xx [ 314 ] = xx [ 293 ] ; xx [ 315 ] = xx [ 305 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 313 , xx + 316 ) ;
motionData [ 0 ] = xx [ 1 ] ; motionData [ 1 ] = xx [ 2 ] ; motionData [ 2 ]
= xx [ 2 ] ; motionData [ 3 ] = xx [ 2 ] ; motionData [ 4 ] = xx [ 2 ] ;
motionData [ 5 ] = xx [ 2 ] ; motionData [ 6 ] = xx [ 2 ] ; motionData [ 7 ]
= xx [ 2 ] ; motionData [ 8 ] = xx [ 2 ] ; motionData [ 9 ] = xx [ 2 ] ;
motionData [ 10 ] = xx [ 0 ] ; motionData [ 11 ] = xx [ 2 ] ; motionData [ 12
] = xx [ 2 ] ; motionData [ 13 ] = xx [ 2 ] ; motionData [ 14 ] = - xx [ 5 ]
; motionData [ 15 ] = xx [ 2 ] ; motionData [ 16 ] = xx [ 2 ] ; motionData [
17 ] = - xx [ 6 ] ; motionData [ 18 ] = xx [ 2 ] ; motionData [ 19 ] = xx [ 2
] ; motionData [ 20 ] = xx [ 4 ] ; motionData [ 21 ] = - xx [ 8 ] ;
motionData [ 22 ] = xx [ 2 ] ; motionData [ 23 ] = - xx [ 9 ] ; motionData [
24 ] = xx [ 2 ] ; motionData [ 25 ] = xx [ 12 ] ; motionData [ 26 ] = xx [ 13
] ; motionData [ 27 ] = - xx [ 14 ] ; motionData [ 28 ] = xx [ 15 ] ;
motionData [ 29 ] = xx [ 2 ] ; motionData [ 30 ] = - xx [ 18 ] ; motionData [
31 ] = xx [ 2 ] ; motionData [ 32 ] = xx [ 20 ] ; motionData [ 33 ] = xx [ 22
] ; motionData [ 34 ] = xx [ 24 ] ; motionData [ 35 ] = xx [ 17 ] ;
motionData [ 36 ] = xx [ 2 ] ; motionData [ 37 ] = - xx [ 27 ] ; motionData [
38 ] = xx [ 2 ] ; motionData [ 39 ] = xx [ 2 ] ; motionData [ 40 ] = xx [ 2 ]
; motionData [ 41 ] = xx [ 25 ] ; motionData [ 42 ] = xx [ 26 ] ; motionData
[ 43 ] = xx [ 2 ] ; motionData [ 44 ] = xx [ 2 ] ; motionData [ 45 ] = - xx [
30 ] ; motionData [ 46 ] = xx [ 2 ] ; motionData [ 47 ] = xx [ 28 ] ;
motionData [ 48 ] = xx [ 2 ] ; motionData [ 49 ] = - xx [ 31 ] ; motionData [
50 ] = xx [ 2 ] ; motionData [ 51 ] = - xx [ 32 ] ; motionData [ 52 ] = xx [
2 ] ; motionData [ 53 ] = xx [ 2 ] ; motionData [ 54 ] = xx [ 2 ] ;
motionData [ 55 ] = xx [ 29 ] ; motionData [ 56 ] = xx [ 34 ] ; motionData [
57 ] = xx [ 2 ] ; motionData [ 58 ] = xx [ 2 ] ; motionData [ 59 ] = xx [ 36
] ; motionData [ 60 ] = xx [ 2 ] ; motionData [ 61 ] = xx [ 37 ] ; motionData
[ 62 ] = xx [ 2 ] ; motionData [ 63 ] = xx [ 34 ] ; motionData [ 64 ] = xx [
35 ] ; motionData [ 65 ] = xx [ 2 ] ; motionData [ 66 ] = xx [ 2 ] ;
motionData [ 67 ] = xx [ 2 ] ; motionData [ 68 ] = xx [ 37 ] ; motionData [
69 ] = xx [ 2 ] ; motionData [ 70 ] = xx [ 44 ] ; motionData [ 71 ] = xx [ 42
] ; motionData [ 72 ] = xx [ 45 ] ; motionData [ 73 ] = xx [ 41 ] ;
motionData [ 74 ] = xx [ 2 ] ; motionData [ 75 ] = xx [ 37 ] ; motionData [
76 ] = xx [ 2 ] ; motionData [ 77 ] = xx [ 0 ] ; motionData [ 78 ] = xx [ 2 ]
; motionData [ 79 ] = xx [ 2 ] ; motionData [ 80 ] = xx [ 2 ] ; motionData [
81 ] = xx [ 43 ] ; motionData [ 82 ] = state [ 19 ] ; motionData [ 83 ] =
state [ 20 ] ; motionData [ 84 ] = xx [ 2 ] ; motionData [ 85 ] = xx [ 2 ] ;
motionData [ 86 ] = xx [ 2 ] ; motionData [ 87 ] = xx [ 1 ] ; motionData [ 88
] = xx [ 46 ] ; motionData [ 89 ] = xx [ 47 ] ; motionData [ 90 ] = xx [ 2 ]
; motionData [ 91 ] = xx [ 2 ] ; motionData [ 92 ] = xx [ 2 ] ; motionData [
93 ] = xx [ 2 ] ; motionData [ 94 ] = xx [ 0 ] ; motionData [ 95 ] = xx [ 2 ]
; motionData [ 96 ] = xx [ 2 ] ; motionData [ 97 ] = xx [ 2 ] ; motionData [
98 ] = - xx [ 49 ] ; motionData [ 99 ] = xx [ 2 ] ; motionData [ 100 ] = xx [
2 ] ; motionData [ 101 ] = xx [ 48 ] ; motionData [ 102 ] = xx [ 2 ] ;
motionData [ 103 ] = xx [ 2 ] ; motionData [ 104 ] = xx [ 4 ] ; motionData [
105 ] = - xx [ 52 ] ; motionData [ 106 ] = xx [ 2 ] ; motionData [ 107 ] = -
xx [ 53 ] ; motionData [ 108 ] = xx [ 2 ] ; motionData [ 109 ] = xx [ 54 ] ;
motionData [ 110 ] = xx [ 13 ] ; motionData [ 111 ] = - xx [ 55 ] ;
motionData [ 112 ] = xx [ 10 ] ; motionData [ 113 ] = xx [ 2 ] ; motionData [
114 ] = - xx [ 57 ] ; motionData [ 115 ] = xx [ 2 ] ; motionData [ 116 ] = xx
[ 58 ] ; motionData [ 117 ] = xx [ 22 ] ; motionData [ 118 ] = xx [ 59 ] ;
motionData [ 119 ] = xx [ 16 ] ; motionData [ 120 ] = xx [ 2 ] ; motionData [
121 ] = - xx [ 60 ] ; motionData [ 122 ] = xx [ 2 ] ; motionData [ 123 ] = xx
[ 2 ] ; motionData [ 124 ] = xx [ 2 ] ; motionData [ 125 ] = xx [ 25 ] ;
motionData [ 126 ] = xx [ 23 ] ; motionData [ 127 ] = xx [ 2 ] ; motionData [
128 ] = xx [ 2 ] ; motionData [ 129 ] = - xx [ 62 ] ; motionData [ 130 ] = xx
[ 2 ] ; motionData [ 131 ] = xx [ 28 ] ; motionData [ 132 ] = xx [ 2 ] ;
motionData [ 133 ] = - xx [ 61 ] ; motionData [ 134 ] = xx [ 2 ] ; motionData
[ 135 ] = - xx [ 63 ] ; motionData [ 136 ] = xx [ 2 ] ; motionData [ 137 ] =
xx [ 2 ] ; motionData [ 138 ] = xx [ 2 ] ; motionData [ 139 ] = xx [ 29 ] ;
motionData [ 140 ] = xx [ 34 ] ; motionData [ 141 ] = xx [ 2 ] ; motionData [
142 ] = xx [ 2 ] ; motionData [ 143 ] = xx [ 36 ] ; motionData [ 144 ] = xx [
2 ] ; motionData [ 145 ] = xx [ 37 ] ; motionData [ 146 ] = xx [ 2 ] ;
motionData [ 147 ] = xx [ 34 ] ; motionData [ 148 ] = xx [ 35 ] ; motionData
[ 149 ] = xx [ 2 ] ; motionData [ 150 ] = xx [ 2 ] ; motionData [ 151 ] = xx
[ 2 ] ; motionData [ 152 ] = xx [ 37 ] ; motionData [ 153 ] = xx [ 2 ] ;
motionData [ 154 ] = xx [ 51 ] ; motionData [ 155 ] = xx [ 3 ] ; motionData [
156 ] = xx [ 68 ] ; motionData [ 157 ] = xx [ 11 ] ; motionData [ 158 ] = xx
[ 2 ] ; motionData [ 159 ] = xx [ 37 ] ; motionData [ 160 ] = xx [ 2 ] ;
motionData [ 161 ] = xx [ 48 ] ; motionData [ 162 ] = xx [ 2 ] ; motionData [
163 ] = xx [ 2 ] ; motionData [ 164 ] = xx [ 49 ] ; motionData [ 165 ] = xx [
46 ] ; motionData [ 166 ] = xx [ 47 ] ; motionData [ 167 ] = xx [ 4 ] ;
motionData [ 168 ] = xx [ 66 ] ; motionData [ 169 ] = xx [ 67 ] ; motionData
[ 170 ] = xx [ 69 ] ; motionData [ 171 ] = xx [ 71 ] ; motionData [ 172 ] =
xx [ 74 ] ; motionData [ 173 ] = xx [ 75 ] ; motionData [ 174 ] = xx [ 72 ] ;
motionData [ 175 ] = xx [ 73 ] ; motionData [ 176 ] = xx [ 76 ] ; motionData
[ 177 ] = xx [ 77 ] ; motionData [ 178 ] = - xx [ 78 ] ; motionData [ 179 ] =
xx [ 70 ] ; motionData [ 180 ] = xx [ 79 ] ; motionData [ 181 ] = xx [ 80 ] ;
motionData [ 182 ] = xx [ 81 ] ; motionData [ 183 ] = xx [ 82 ] ; motionData
[ 184 ] = xx [ 86 ] ; motionData [ 185 ] = - xx [ 87 ] ; motionData [ 186 ] =
xx [ 90 ] ; motionData [ 187 ] = xx [ 91 ] ; motionData [ 188 ] = xx [ 92 ] ;
motionData [ 189 ] = xx [ 88 ] ; motionData [ 190 ] = xx [ 89 ] ; motionData
[ 191 ] = xx [ 93 ] ; motionData [ 192 ] = - xx [ 94 ] ; motionData [ 193 ] =
xx [ 97 ] ; motionData [ 194 ] = xx [ 98 ] ; motionData [ 195 ] = xx [ 99 ] ;
motionData [ 196 ] = xx [ 95 ] ; motionData [ 197 ] = xx [ 100 ] ; motionData
[ 198 ] = xx [ 102 ] ; motionData [ 199 ] = xx [ 104 ] ; motionData [ 200 ] =
xx [ 107 ] ; motionData [ 201 ] = xx [ 108 ] ; motionData [ 202 ] = xx [ 109
] ; motionData [ 203 ] = xx [ 118 ] ; motionData [ 204 ] = xx [ 119 ] ;
motionData [ 205 ] = xx [ 120 ] ; motionData [ 206 ] = xx [ 121 ] ;
motionData [ 207 ] = xx [ 7 ] * ( xx [ 105 ] * xx [ 95 ] + xx [ 101 ] * xx [
106 ] ) + xx [ 107 ] ; motionData [ 208 ] = xx [ 108 ] - ( xx [ 103 ] * xx [
105 ] + xx [ 106 ] * xx [ 96 ] ) * xx [ 7 ] + xx [ 37 ] ; motionData [ 209 ]
= ( xx [ 101 ] * xx [ 105 ] - xx [ 106 ] * xx [ 95 ] ) * xx [ 7 ] + xx [ 109
] ; motionData [ 210 ] = xx [ 5 ] ; motionData [ 211 ] = xx [ 2 ] ;
motionData [ 212 ] = xx [ 2 ] ; motionData [ 213 ] = xx [ 6 ] ; motionData [
214 ] = xx [ 2 ] ; motionData [ 215 ] = xx [ 2 ] ; motionData [ 216 ] = xx [
4 ] ; motionData [ 217 ] = xx [ 111 ] ; motionData [ 218 ] = xx [ 112 ] ;
motionData [ 219 ] = xx [ 122 ] ; motionData [ 220 ] = xx [ 124 ] ;
motionData [ 221 ] = xx [ 127 ] ; motionData [ 222 ] = xx [ 128 ] ;
motionData [ 223 ] = xx [ 125 ] ; motionData [ 224 ] = - xx [ 126 ] ;
motionData [ 225 ] = xx [ 129 ] ; motionData [ 226 ] = - xx [ 130 ] ;
motionData [ 227 ] = - xx [ 110 ] ; motionData [ 228 ] = xx [ 113 ] ;
motionData [ 229 ] = xx [ 123 ] ; motionData [ 230 ] = xx [ 131 ] ;
motionData [ 231 ] = - xx [ 132 ] ; motionData [ 232 ] = xx [ 133 ] ;
motionData [ 233 ] = xx [ 134 ] ; motionData [ 234 ] = - xx [ 138 ] ;
motionData [ 235 ] = xx [ 141 ] ; motionData [ 236 ] = xx [ 142 ] ;
motionData [ 237 ] = xx [ 143 ] ; motionData [ 238 ] = - xx [ 139 ] ;
motionData [ 239 ] = xx [ 140 ] ; motionData [ 240 ] = xx [ 144 ] ;
motionData [ 241 ] = xx [ 145 ] ; motionData [ 242 ] = xx [ 148 ] ;
motionData [ 243 ] = xx [ 149 ] ; motionData [ 244 ] = xx [ 150 ] ;
motionData [ 245 ] = xx [ 146 ] ; motionData [ 246 ] = xx [ 147 ] ;
motionData [ 247 ] = xx [ 152 ] ; motionData [ 248 ] = xx [ 154 ] ;
motionData [ 249 ] = xx [ 157 ] ; motionData [ 250 ] = xx [ 158 ] ;
motionData [ 251 ] = xx [ 159 ] ; motionData [ 252 ] = xx [ 168 ] ;
motionData [ 253 ] = xx [ 169 ] ; motionData [ 254 ] = xx [ 170 ] ;
motionData [ 255 ] = xx [ 171 ] ; motionData [ 256 ] = xx [ 160 ] ;
motionData [ 257 ] = xx [ 161 ] ; motionData [ 258 ] = xx [ 153 ] ;
motionData [ 259 ] = xx [ 168 ] ; motionData [ 260 ] = xx [ 169 ] ;
motionData [ 261 ] = xx [ 170 ] ; motionData [ 262 ] = xx [ 171 ] ;
motionData [ 263 ] = xx [ 175 ] + xx [ 160 ] ; motionData [ 264 ] = xx [ 176
] + xx [ 161 ] ; motionData [ 265 ] = xx [ 177 ] + xx [ 153 ] ; motionData [
266 ] = xx [ 151 ] ; motionData [ 267 ] = - xx [ 155 ] ; motionData [ 268 ] =
- xx [ 156 ] ; motionData [ 269 ] = xx [ 162 ] ; motionData [ 270 ] = xx [ 2
] ; motionData [ 271 ] = xx [ 37 ] ; motionData [ 272 ] = xx [ 29 ] ;
motionData [ 273 ] = xx [ 163 ] ; motionData [ 274 ] = - xx [ 178 ] ;
motionData [ 275 ] = - xx [ 179 ] ; motionData [ 276 ] = xx [ 180 ] ;
motionData [ 277 ] = xx [ 182 ] ; motionData [ 278 ] = xx [ 183 ] ;
motionData [ 279 ] = xx [ 29 ] ; motionData [ 280 ] = xx [ 181 ] ; motionData
[ 281 ] = - xx [ 184 ] ; motionData [ 282 ] = - xx [ 185 ] ; motionData [ 283
] = xx [ 186 ] ; motionData [ 284 ] = xx [ 189 ] ; motionData [ 285 ] = xx [
183 ] ; motionData [ 286 ] = xx [ 190 ] ; motionData [ 287 ] = xx [ 187 ] ;
motionData [ 288 ] = - xx [ 188 ] ; motionData [ 289 ] = - xx [ 191 ] ;
motionData [ 290 ] = xx [ 192 ] ; motionData [ 291 ] = xx [ 195 ] ;
motionData [ 292 ] = xx [ 56 ] ; motionData [ 293 ] = xx [ 196 ] ; motionData
[ 294 ] = - xx [ 193 ] ; motionData [ 295 ] = - xx [ 194 ] ; motionData [ 296
] = - xx [ 197 ] ; motionData [ 297 ] = - xx [ 198 ] ; motionData [ 298 ] =
xx [ 201 ] ; motionData [ 299 ] = xx [ 202 ] ; motionData [ 300 ] = xx [ 203
] ; motionData [ 301 ] = xx [ 49 ] * xx [ 193 ] - xx [ 50 ] * xx [ 198 ] ;
motionData [ 302 ] = xx [ 194 ] * xx [ 49 ] - xx [ 197 ] * xx [ 50 ] ;
motionData [ 303 ] = xx [ 197 ] * xx [ 49 ] + xx [ 194 ] * xx [ 50 ] ;
motionData [ 304 ] = xx [ 49 ] * xx [ 198 ] + xx [ 50 ] * xx [ 193 ] ;
motionData [ 305 ] = xx [ 201 ] - ( xx [ 49 ] * xx [ 199 ] + xx [ 200 ] * xx
[ 50 ] ) * xx [ 7 ] ; motionData [ 306 ] = xx [ 202 ] + xx [ 7 ] * ( xx [ 49
] * xx [ 200 ] - xx [ 199 ] * xx [ 50 ] ) ; motionData [ 307 ] = xx [ 203 ] +
xx [ 4 ] ; motionData [ 308 ] = xx [ 44 ] ; motionData [ 309 ] = xx [ 42 ] ;
motionData [ 310 ] = xx [ 45 ] ; motionData [ 311 ] = xx [ 41 ] ; motionData
[ 312 ] = xx [ 204 ] ; motionData [ 313 ] = xx [ 207 ] ; motionData [ 314 ] =
xx [ 206 ] ; motionData [ 315 ] = xx [ 205 ] ; motionData [ 316 ] = - xx [
208 ] ; motionData [ 317 ] = xx [ 209 ] ; motionData [ 318 ] = xx [ 210 ] ;
motionData [ 319 ] = xx [ 213 ] ; motionData [ 320 ] = xx [ 207 ] ;
motionData [ 321 ] = xx [ 214 ] ; motionData [ 322 ] = xx [ 211 ] ;
motionData [ 323 ] = - xx [ 212 ] ; motionData [ 324 ] = xx [ 215 ] ;
motionData [ 325 ] = xx [ 216 ] ; motionData [ 326 ] = xx [ 219 ] ;
motionData [ 327 ] = xx [ 220 ] ; motionData [ 328 ] = xx [ 214 ] ;
motionData [ 329 ] = xx [ 217 ] ; motionData [ 330 ] = - xx [ 218 ] ;
motionData [ 331 ] = xx [ 221 ] ; motionData [ 332 ] = xx [ 222 ] ;
motionData [ 333 ] = xx [ 225 ] ; motionData [ 334 ] = xx [ 220 ] ;
motionData [ 335 ] = xx [ 226 ] ; motionData [ 336 ] = xx [ 223 ] ;
motionData [ 337 ] = - xx [ 224 ] ; motionData [ 338 ] = xx [ 227 ] ;
motionData [ 339 ] = xx [ 228 ] ; motionData [ 340 ] = xx [ 231 ] ;
motionData [ 341 ] = xx [ 19 ] ; motionData [ 342 ] = xx [ 21 ] ; motionData
[ 343 ] = xx [ 229 ] ; motionData [ 344 ] = - xx [ 230 ] ; motionData [ 345 ]
= - xx [ 232 ] ; motionData [ 346 ] = - xx [ 233 ] ; motionData [ 347 ] = xx
[ 236 ] ; motionData [ 348 ] = xx [ 237 ] ; motionData [ 349 ] = xx [ 238 ] ;
motionData [ 350 ] = - ( xx [ 6 ] * xx [ 233 ] + xx [ 5 ] * xx [ 229 ] ) ;
motionData [ 351 ] = xx [ 230 ] * xx [ 5 ] - xx [ 232 ] * xx [ 6 ] ;
motionData [ 352 ] = xx [ 232 ] * xx [ 5 ] + xx [ 230 ] * xx [ 6 ] ;
motionData [ 353 ] = - ( xx [ 6 ] * xx [ 229 ] - xx [ 5 ] * xx [ 233 ] ) ;
motionData [ 354 ] = xx [ 236 ] - ( xx [ 5 ] * xx [ 234 ] + xx [ 235 ] * xx [
6 ] ) * xx [ 7 ] ; motionData [ 355 ] = xx [ 237 ] + xx [ 7 ] * ( xx [ 5 ] *
xx [ 235 ] - xx [ 234 ] * xx [ 6 ] ) ; motionData [ 356 ] = xx [ 238 ] + xx [
4 ] ; motionData [ 357 ] = xx [ 2 ] ; motionData [ 358 ] = xx [ 2 ] ;
motionData [ 359 ] = xx [ 2 ] ; motionData [ 360 ] = xx [ 2 ] ; motionData [
361 ] = xx [ 2 ] ; motionData [ 362 ] = xx [ 2 ] ; motionData [ 363 ] = xx [
2 ] ; motionData [ 364 ] = xx [ 2 ] ; motionData [ 365 ] = xx [ 2 ] ;
motionData [ 366 ] = xx [ 2 ] ; motionData [ 367 ] = xx [ 2 ] ; motionData [
368 ] = xx [ 2 ] ; motionData [ 369 ] = xx [ 2 ] ; motionData [ 370 ] = xx [
2 ] ; motionData [ 371 ] = state [ 1 ] ; motionData [ 372 ] = xx [ 2 ] ;
motionData [ 373 ] = xx [ 2 ] ; motionData [ 374 ] = xx [ 2 ] ; motionData [
375 ] = xx [ 241 ] ; motionData [ 376 ] = state [ 3 ] ; motionData [ 377 ] =
xx [ 242 ] ; motionData [ 378 ] = xx [ 245 ] ; motionData [ 379 ] = xx [ 239
] ; motionData [ 380 ] = - xx [ 246 ] ; motionData [ 381 ] = xx [ 248 ] ;
motionData [ 382 ] = xx [ 240 ] ; motionData [ 383 ] = xx [ 249 ] ;
motionData [ 384 ] = xx [ 250 ] ; motionData [ 385 ] = xx [ 135 ] ;
motionData [ 386 ] = xx [ 251 ] ; motionData [ 387 ] = xx [ 243 ] ;
motionData [ 388 ] = xx [ 252 ] ; motionData [ 389 ] = xx [ 253 ] ;
motionData [ 390 ] = xx [ 255 ] ; motionData [ 391 ] = xx [ 136 ] ;
motionData [ 392 ] = xx [ 256 ] ; motionData [ 393 ] = xx [ 257 ] ;
motionData [ 394 ] = xx [ 258 ] ; motionData [ 395 ] = xx [ 137 ] ;
motionData [ 396 ] = xx [ 261 ] ; motionData [ 397 ] = xx [ 254 ] ;
motionData [ 398 ] = xx [ 259 ] ; motionData [ 399 ] = xx [ 263 ] ;
motionData [ 400 ] = xx [ 264 ] ; motionData [ 401 ] = xx [ 265 ] ;
motionData [ 402 ] = xx [ 267 ] ; motionData [ 403 ] = xx [ 260 ] ;
motionData [ 404 ] = xx [ 268 ] ; motionData [ 405 ] = xx [ 263 ] - ( xx [ 35
] * xx [ 262 ] - xx [ 269 ] ) * xx [ 7 ] ; motionData [ 406 ] = xx [ 264 ] -
xx [ 7 ] * ( xx [ 33 ] * xx [ 262 ] + xx [ 270 ] ) ; motionData [ 407 ] = xx
[ 265 ] ; motionData [ 408 ] = xx [ 266 ] - ( xx [ 35 ] * xx [ 271 ] - xx [
273 ] ) * xx [ 7 ] ; motionData [ 409 ] = xx [ 260 ] - xx [ 7 ] * ( xx [ 33 ]
* xx [ 271 ] + xx [ 274 ] ) ; motionData [ 410 ] = xx [ 272 ] ; motionData [
411 ] = xx [ 263 ] ; motionData [ 412 ] = xx [ 264 ] - ( xx [ 33 ] * xx [ 275
] + xx [ 270 ] ) * xx [ 7 ] ; motionData [ 413 ] = xx [ 265 ] + xx [ 7 ] * (
xx [ 269 ] - xx [ 35 ] * xx [ 275 ] ) ; motionData [ 414 ] = xx [ 266 ] ;
motionData [ 415 ] = xx [ 260 ] - ( xx [ 33 ] * xx [ 276 ] + xx [ 274 ] ) *
xx [ 7 ] ; motionData [ 416 ] = xx [ 272 ] + xx [ 7 ] * ( xx [ 273 ] - xx [
35 ] * xx [ 276 ] ) ; motionData [ 417 ] = xx [ 280 ] ; motionData [ 418 ] =
xx [ 40 ] ; motionData [ 419 ] = xx [ 39 ] ; motionData [ 420 ] = xx [ 281 ]
; motionData [ 421 ] = xx [ 282 ] ; motionData [ 422 ] = xx [ 283 ] ;
motionData [ 423 ] = xx [ 280 ] ; motionData [ 424 ] = xx [ 40 ] ; motionData
[ 425 ] = xx [ 39 ] ; motionData [ 426 ] = xx [ 277 ] + xx [ 281 ] + state [
21 ] ; motionData [ 427 ] = xx [ 278 ] + xx [ 282 ] + state [ 22 ] ;
motionData [ 428 ] = xx [ 279 ] + xx [ 283 ] + state [ 23 ] ; motionData [
429 ] = xx [ 2 ] ; motionData [ 430 ] = xx [ 2 ] ; motionData [ 431 ] = xx [
2 ] ; motionData [ 432 ] = xx [ 2 ] ; motionData [ 433 ] = xx [ 2 ] ;
motionData [ 434 ] = xx [ 2 ] ; motionData [ 435 ] = xx [ 2 ] ; motionData [
436 ] = xx [ 2 ] ; motionData [ 437 ] = xx [ 2 ] ; motionData [ 438 ] = xx [
2 ] ; motionData [ 439 ] = xx [ 2 ] ; motionData [ 440 ] = xx [ 2 ] ;
motionData [ 441 ] = xx [ 2 ] ; motionData [ 442 ] = xx [ 2 ] ; motionData [
443 ] = state [ 25 ] ; motionData [ 444 ] = xx [ 2 ] ; motionData [ 445 ] =
xx [ 2 ] ; motionData [ 446 ] = xx [ 2 ] ; motionData [ 447 ] = xx [ 165 ] ;
motionData [ 448 ] = state [ 27 ] ; motionData [ 449 ] = xx [ 166 ] ;
motionData [ 450 ] = xx [ 172 ] ; motionData [ 451 ] = xx [ 38 ] ; motionData
[ 452 ] = - xx [ 173 ] ; motionData [ 453 ] = xx [ 244 ] ; motionData [ 454 ]
= xx [ 164 ] ; motionData [ 455 ] = xx [ 284 ] ; motionData [ 456 ] = xx [
174 ] ; motionData [ 457 ] = xx [ 83 ] ; motionData [ 458 ] = xx [ 247 ] ;
motionData [ 459 ] = xx [ 167 ] ; motionData [ 460 ] = xx [ 285 ] ;
motionData [ 461 ] = xx [ 286 ] ; motionData [ 462 ] = xx [ 288 ] ;
motionData [ 463 ] = xx [ 84 ] ; motionData [ 464 ] = xx [ 289 ] ; motionData
[ 465 ] = xx [ 290 ] ; motionData [ 466 ] = xx [ 291 ] ; motionData [ 467 ] =
xx [ 85 ] ; motionData [ 468 ] = xx [ 294 ] ; motionData [ 469 ] = xx [ 287 ]
; motionData [ 470 ] = xx [ 292 ] ; motionData [ 471 ] = xx [ 296 ] ;
motionData [ 472 ] = xx [ 297 ] ; motionData [ 473 ] = xx [ 298 ] ;
motionData [ 474 ] = xx [ 300 ] ; motionData [ 475 ] = xx [ 293 ] ;
motionData [ 476 ] = xx [ 301 ] ; motionData [ 477 ] = xx [ 296 ] - ( xx [ 35
] * xx [ 295 ] - xx [ 302 ] ) * xx [ 7 ] ; motionData [ 478 ] = xx [ 297 ] -
xx [ 7 ] * ( xx [ 33 ] * xx [ 295 ] + xx [ 303 ] ) ; motionData [ 479 ] = xx
[ 298 ] ; motionData [ 480 ] = xx [ 299 ] - ( xx [ 35 ] * xx [ 304 ] - xx [
306 ] ) * xx [ 7 ] ; motionData [ 481 ] = xx [ 293 ] - xx [ 7 ] * ( xx [ 33 ]
* xx [ 304 ] + xx [ 307 ] ) ; motionData [ 482 ] = xx [ 305 ] ; motionData [
483 ] = xx [ 296 ] ; motionData [ 484 ] = xx [ 297 ] - ( xx [ 33 ] * xx [ 308
] + xx [ 303 ] ) * xx [ 7 ] ; motionData [ 485 ] = xx [ 298 ] + xx [ 7 ] * (
xx [ 302 ] - xx [ 35 ] * xx [ 308 ] ) ; motionData [ 486 ] = xx [ 299 ] ;
motionData [ 487 ] = xx [ 293 ] - ( xx [ 33 ] * xx [ 309 ] + xx [ 307 ] ) *
xx [ 7 ] ; motionData [ 488 ] = xx [ 305 ] + xx [ 7 ] * ( xx [ 306 ] - xx [
35 ] * xx [ 309 ] ) ; motionData [ 489 ] = xx [ 310 ] + xx [ 7 ] * xx [ 64 ]
* xx [ 65 ] * state [ 40 ] - xx [ 7 ] * ( xx [ 11 ] * xx [ 51 ] + xx [ 3 ] *
xx [ 68 ] ) * state [ 39 ] ; motionData [ 490 ] = xx [ 311 ] + ( ( xx [ 11 ]
* xx [ 11 ] + xx [ 3 ] * xx [ 3 ] ) * xx [ 7 ] - xx [ 0 ] ) * state [ 39 ] +
( xx [ 0 ] - xx [ 7 ] * xx [ 65 ] * xx [ 65 ] ) * state [ 40 ] ; motionData [
491 ] = xx [ 312 ] + xx [ 7 ] * ( xx [ 3 ] * xx [ 51 ] - xx [ 11 ] * xx [ 68
] ) * state [ 39 ] + state [ 41 ] ; motionData [ 492 ] = xx [ 316 ] ;
motionData [ 493 ] = xx [ 317 ] ; motionData [ 494 ] = xx [ 318 ] ; } static
size_t computeAssemblyError_0 ( const RuntimeDerivedValuesBundle * rtdv ,
const int * modeVector , const double * motionData , double * error ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 12 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; xx [ 0 ] = motionData [ 203 ] ; xx [ 1 ] = motionData [ 204 ]
; xx [ 2 ] = motionData [ 205 ] ; xx [ 3 ] = motionData [ 206 ] ; xx [ 4 ] =
- motionData [ 259 ] ; xx [ 5 ] = - motionData [ 260 ] ; xx [ 6 ] = -
motionData [ 261 ] ; xx [ 7 ] = - motionData [ 262 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 4 , xx + 8 ) ; error [ 0
] = xx [ 9 ] ; error [ 1 ] = xx [ 10 ] ; error [ 2 ] = xx [ 11 ] ; return 3 ;
} size_t pp_43e6ab1_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { case 0 : return computeAssemblyError_0 ( rtdv ,
modeVector , motionData , error ) ; } return 0 ; } static size_t
computeAssemblyJacobian_0 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 94 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = motionData [ 203 ] ; xx [ 1 ] =
motionData [ 204 ] ; xx [ 2 ] = motionData [ 205 ] ; xx [ 3 ] = motionData [
206 ] ; xx [ 4 ] = - motionData [ 259 ] ; xx [ 5 ] = - motionData [ 260 ] ;
xx [ 6 ] = - motionData [ 261 ] ; xx [ 7 ] = - motionData [ 262 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 12 ]
= 2.0 ; xx [ 13 ] = 1.0 ; xx [ 14 ] = xx [ 12 ] * ( motionData [ 344 ] *
motionData [ 346 ] - motionData [ 343 ] * motionData [ 345 ] ) ; xx [ 15 ] =
( motionData [ 343 ] * motionData [ 344 ] + motionData [ 345 ] * motionData [
346 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 13 ] - ( motionData [ 344 ] *
motionData [ 344 ] + motionData [ 345 ] * motionData [ 345 ] ) * xx [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 14 , xx + 17 ) ; xx [ 14 ] =
( motionData [ 336 ] * motionData [ 339 ] + motionData [ 337 ] * motionData [
338 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 13 ] - ( motionData [ 339 ] *
motionData [ 339 ] + motionData [ 337 ] * motionData [ 337 ] ) * xx [ 12 ] ;
xx [ 16 ] = xx [ 12 ] * ( motionData [ 338 ] * motionData [ 339 ] -
motionData [ 336 ] * motionData [ 337 ] ) ; pm_math_Quaternion_compDeriv_ra (
xx + 8 , xx + 14 , xx + 21 ) ; xx [ 14 ] = ( motionData [ 329 ] * motionData
[ 332 ] + motionData [ 330 ] * motionData [ 331 ] ) * xx [ 12 ] ; xx [ 15 ] =
xx [ 13 ] - ( motionData [ 332 ] * motionData [ 332 ] + motionData [ 330 ] *
motionData [ 330 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 12 ] * ( motionData [ 331
] * motionData [ 332 ] - motionData [ 329 ] * motionData [ 330 ] ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 14 , xx + 25 ) ; xx [ 14 ] =
( motionData [ 322 ] * motionData [ 325 ] + motionData [ 323 ] * motionData [
324 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 13 ] - ( motionData [ 325 ] *
motionData [ 325 ] + motionData [ 323 ] * motionData [ 323 ] ) * xx [ 12 ] ;
xx [ 16 ] = xx [ 12 ] * ( motionData [ 324 ] * motionData [ 325 ] -
motionData [ 322 ] * motionData [ 323 ] ) ; pm_math_Quaternion_compDeriv_ra (
xx + 8 , xx + 14 , xx + 29 ) ; xx [ 14 ] = xx [ 12 ] * ( motionData [ 316 ] *
motionData [ 318 ] - motionData [ 315 ] * motionData [ 317 ] ) ; xx [ 15 ] =
( motionData [ 315 ] * motionData [ 316 ] + motionData [ 317 ] * motionData [
318 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 13 ] - ( motionData [ 316 ] *
motionData [ 316 ] + motionData [ 317 ] * motionData [ 317 ] ) * xx [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 14 , xx + 33 ) ; xx [ 14 ] =
( motionData [ 308 ] * motionData [ 311 ] + motionData [ 309 ] * motionData [
310 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 13 ] - ( motionData [ 311 ] *
motionData [ 311 ] + motionData [ 309 ] * motionData [ 309 ] ) * xx [ 12 ] ;
xx [ 16 ] = xx [ 12 ] * ( motionData [ 310 ] * motionData [ 311 ] -
motionData [ 308 ] * motionData [ 309 ] ) ; pm_math_Quaternion_compDeriv_ra (
xx + 8 , xx + 14 , xx + 37 ) ; xx [ 41 ] = motionData [ 77 ] ; xx [ 42 ] =
motionData [ 78 ] ; xx [ 43 ] = motionData [ 79 ] ; xx [ 44 ] = motionData [
80 ] ; xx [ 14 ] = 0.5 ; xx [ 15 ] = xx [ 14 ] * state [ 14 ] ; xx [ 16 ] =
sin ( xx [ 15 ] ) ; xx [ 45 ] = 0.7071067811865476 ; xx [ 46 ] = xx [ 14 ] *
state [ 12 ] ; xx [ 47 ] = xx [ 45 ] * sin ( xx [ 46 ] ) ; xx [ 48 ] = xx [
14 ] * state [ 13 ] ; xx [ 49 ] = sin ( xx [ 48 ] ) ; xx [ 50 ] = xx [ 47 ] *
xx [ 49 ] ; xx [ 51 ] = cos ( xx [ 48 ] ) ; xx [ 48 ] = xx [ 45 ] * cos ( xx
[ 46 ] ) ; xx [ 46 ] = xx [ 51 ] * xx [ 48 ] ; xx [ 52 ] = xx [ 50 ] - xx [
46 ] ; xx [ 53 ] = xx [ 46 ] + xx [ 50 ] ; xx [ 46 ] = cos ( xx [ 15 ] ) ; xx
[ 15 ] = xx [ 16 ] * xx [ 52 ] - xx [ 53 ] * xx [ 46 ] ; xx [ 50 ] = xx [ 46
] * xx [ 52 ] + xx [ 53 ] * xx [ 16 ] ; xx [ 52 ] = xx [ 51 ] * xx [ 47 ] ;
xx [ 47 ] = xx [ 48 ] * xx [ 49 ] ; xx [ 48 ] = xx [ 52 ] - xx [ 47 ] ; xx [
49 ] = xx [ 52 ] + xx [ 47 ] ; xx [ 47 ] = xx [ 16 ] * xx [ 48 ] - xx [ 49 ]
* xx [ 46 ] ; xx [ 51 ] = xx [ 46 ] * xx [ 48 ] + xx [ 49 ] * xx [ 16 ] ; xx
[ 52 ] = xx [ 12 ] * ( xx [ 15 ] * xx [ 50 ] - xx [ 47 ] * xx [ 51 ] ) ; xx [
53 ] = xx [ 13 ] - ( xx [ 51 ] * xx [ 51 ] + xx [ 15 ] * xx [ 15 ] ) * xx [
12 ] ; xx [ 54 ] = ( xx [ 15 ] * xx [ 47 ] + xx [ 50 ] * xx [ 51 ] ) * xx [
12 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 52 , xx + 47 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 47 , xx + 41 ) ; xx [ 15 ] =
xx [ 12 ] * xx [ 46 ] * xx [ 16 ] ; xx [ 46 ] = xx [ 13 ] - xx [ 12 ] * xx [
16 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 46 ] * motionData [ 80 ] ; xx [ 47 ] =
motionData [ 78 ] ; xx [ 48 ] = motionData [ 79 ] ; xx [ 49 ] = motionData [
80 ] ; xx [ 50 ] = xx [ 15 ] * motionData [ 80 ] ; xx [ 51 ] = xx [ 46 ] *
motionData [ 78 ] - xx [ 15 ] * motionData [ 79 ] ; xx [ 52 ] = - xx [ 16 ] ;
xx [ 53 ] = xx [ 50 ] ; xx [ 54 ] = xx [ 51 ] ; pm_math_Vector3_cross_ra ( xx
+ 47 , xx + 52 , xx + 55 ) ; xx [ 47 ] = xx [ 15 ] + ( xx [ 16 ] * motionData
[ 77 ] + xx [ 55 ] ) * xx [ 12 ] ; xx [ 48 ] = xx [ 46 ] + xx [ 12 ] * ( xx [
56 ] - xx [ 50 ] * motionData [ 77 ] ) ; xx [ 49 ] = xx [ 12 ] * ( xx [ 57 ]
- xx [ 51 ] * motionData [ 77 ] ) ; pm_math_Quaternion_compDeriv_ra ( xx + 8
, xx + 47 , xx + 50 ) ; xx [ 46 ] = xx [ 12 ] * ( motionData [ 78 ] *
motionData [ 80 ] - motionData [ 77 ] * motionData [ 79 ] ) ; xx [ 47 ] = (
motionData [ 77 ] * motionData [ 78 ] + motionData [ 79 ] * motionData [ 80 ]
) * xx [ 12 ] ; xx [ 48 ] = xx [ 13 ] - ( motionData [ 78 ] * motionData [ 78
] + motionData [ 79 ] * motionData [ 79 ] ) * xx [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 46 , xx + 54 ) ; xx [ 15 ] =
0.0 ; xx [ 46 ] = xx [ 15 ] ; xx [ 47 ] = xx [ 15 ] ; xx [ 48 ] = xx [ 15 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 46 , xx + 58 ) ; xx [ 46 ] =
xx [ 12 ] * ( motionData [ 295 ] * motionData [ 297 ] - motionData [ 294 ] *
motionData [ 296 ] ) ; xx [ 47 ] = ( motionData [ 294 ] * motionData [ 295 ]
+ motionData [ 296 ] * motionData [ 297 ] ) * xx [ 12 ] ; xx [ 48 ] = xx [ 13
] - ( motionData [ 295 ] * motionData [ 295 ] + motionData [ 296 ] *
motionData [ 296 ] ) * xx [ 12 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx
+ 46 , xx + 62 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 62 , xx
+ 46 ) ; xx [ 62 ] = - xx [ 46 ] ; xx [ 63 ] = - xx [ 47 ] ; xx [ 64 ] = - xx
[ 48 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 62 , xx + 46 ) ; xx
[ 62 ] = ( motionData [ 287 ] * motionData [ 290 ] + motionData [ 288 ] *
motionData [ 289 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - ( motionData [ 290
] * motionData [ 290 ] + motionData [ 288 ] * motionData [ 288 ] ) * xx [ 12
] ; xx [ 64 ] = xx [ 12 ] * ( motionData [ 289 ] * motionData [ 290 ] -
motionData [ 287 ] * motionData [ 288 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 0 , xx + 62 , xx + 65 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx
+ 65 , xx + 62 ) ; xx [ 65 ] = - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [
67 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx
+ 68 ) ; xx [ 62 ] = ( motionData [ 280 ] * motionData [ 283 ] + motionData [
281 ] * motionData [ 282 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - (
motionData [ 283 ] * motionData [ 283 ] + motionData [ 281 ] * motionData [
281 ] ) * xx [ 12 ] ; xx [ 64 ] = xx [ 12 ] * ( motionData [ 282 ] *
motionData [ 283 ] - motionData [ 280 ] * motionData [ 281 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 62 , xx + 65 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 65 , xx + 62 ) ; xx [ 65 ]
= - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [ 67 ] = - xx [ 64 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx + 72 ) ; xx [ 62 ] =
( motionData [ 273 ] * motionData [ 276 ] + motionData [ 274 ] * motionData [
275 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - ( motionData [ 276 ] *
motionData [ 276 ] + motionData [ 274 ] * motionData [ 274 ] ) * xx [ 12 ] ;
xx [ 64 ] = xx [ 12 ] * ( motionData [ 275 ] * motionData [ 276 ] -
motionData [ 273 ] * motionData [ 274 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 0 , xx + 62 , xx + 65 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx
+ 65 , xx + 62 ) ; xx [ 65 ] = - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [
67 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx
+ 76 ) ; xx [ 62 ] = xx [ 12 ] * ( motionData [ 267 ] * motionData [ 269 ] -
motionData [ 266 ] * motionData [ 268 ] ) ; xx [ 63 ] = ( motionData [ 266 ]
* motionData [ 267 ] + motionData [ 268 ] * motionData [ 269 ] ) * xx [ 12 ]
; xx [ 64 ] = xx [ 13 ] - ( motionData [ 267 ] * motionData [ 267 ] +
motionData [ 268 ] * motionData [ 268 ] ) * xx [ 12 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 62 , xx + 65 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 65 , xx + 62 ) ; xx [ 65 ]
= - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [ 67 ] = - xx [ 64 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx + 80 ) ; xx [ 62 ] =
( motionData [ 154 ] * motionData [ 157 ] + motionData [ 155 ] * motionData [
156 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - ( motionData [ 157 ] *
motionData [ 157 ] + motionData [ 155 ] * motionData [ 155 ] ) * xx [ 12 ] ;
xx [ 64 ] = xx [ 12 ] * ( motionData [ 156 ] * motionData [ 157 ] -
motionData [ 154 ] * motionData [ 155 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 0 , xx + 62 , xx + 65 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx
+ 65 , xx + 62 ) ; xx [ 65 ] = - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [
67 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx
+ 84 ) ; xx [ 15 ] = xx [ 14 ] * state [ 38 ] ; xx [ 16 ] = sin ( xx [ 15 ] )
; xx [ 62 ] = xx [ 14 ] * state [ 37 ] ; xx [ 63 ] = cos ( xx [ 62 ] ) ; xx [
64 ] = xx [ 14 ] * state [ 36 ] ; xx [ 14 ] = xx [ 45 ] * sin ( xx [ 64 ] ) ;
xx [ 65 ] = xx [ 63 ] * xx [ 14 ] ; xx [ 66 ] = xx [ 45 ] * cos ( xx [ 64 ] )
; xx [ 45 ] = sin ( xx [ 62 ] ) ; xx [ 62 ] = xx [ 66 ] * xx [ 45 ] ; xx [ 64
] = xx [ 65 ] - xx [ 62 ] ; xx [ 67 ] = xx [ 65 ] + xx [ 62 ] ; xx [ 62 ] =
cos ( xx [ 15 ] ) ; xx [ 15 ] = xx [ 16 ] * xx [ 64 ] - xx [ 67 ] * xx [ 62 ]
; xx [ 65 ] = xx [ 62 ] * xx [ 64 ] + xx [ 67 ] * xx [ 16 ] ; xx [ 64 ] = xx
[ 14 ] * xx [ 45 ] ; xx [ 14 ] = xx [ 63 ] * xx [ 66 ] ; xx [ 45 ] = xx [ 64
] - xx [ 14 ] ; xx [ 63 ] = xx [ 64 ] + xx [ 14 ] ; xx [ 14 ] = xx [ 62 ] *
xx [ 45 ] + xx [ 63 ] * xx [ 16 ] ; xx [ 64 ] = xx [ 63 ] * xx [ 62 ] - xx [
16 ] * xx [ 45 ] ; xx [ 88 ] = - ( ( xx [ 15 ] * xx [ 65 ] + xx [ 14 ] * xx [
64 ] ) * xx [ 12 ] ) ; xx [ 89 ] = ( xx [ 15 ] * xx [ 15 ] + xx [ 14 ] * xx [
14 ] ) * xx [ 12 ] - xx [ 13 ] ; xx [ 90 ] = xx [ 12 ] * ( xx [ 14 ] * xx [
65 ] - xx [ 15 ] * xx [ 64 ] ) ; pm_math_Quaternion_xform_ra ( xx + 0 , xx +
88 , xx + 63 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 63 , xx +
0 ) ; xx [ 63 ] = - xx [ 0 ] ; xx [ 64 ] = - xx [ 1 ] ; xx [ 65 ] = - xx [ 2
] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 63 , xx + 0 ) ; xx [ 14 ]
= xx [ 12 ] * xx [ 62 ] * xx [ 16 ] ; xx [ 62 ] = motionData [ 204 ] ; xx [
63 ] = motionData [ 205 ] ; xx [ 64 ] = motionData [ 206 ] ; xx [ 15 ] = xx [
13 ] - xx [ 12 ] * xx [ 16 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 15 ] * motionData
[ 206 ] ; xx [ 45 ] = xx [ 14 ] * motionData [ 206 ] ; xx [ 65 ] = xx [ 15 ]
* motionData [ 204 ] - xx [ 14 ] * motionData [ 205 ] ; xx [ 88 ] = - xx [ 16
] ; xx [ 89 ] = xx [ 45 ] ; xx [ 90 ] = xx [ 65 ] ; pm_math_Vector3_cross_ra
( xx + 62 , xx + 88 , xx + 91 ) ; xx [ 62 ] = xx [ 14 ] + xx [ 12 ] * ( xx [
91 ] - xx [ 16 ] * motionData [ 203 ] ) ; xx [ 63 ] = xx [ 15 ] + ( xx [ 45 ]
* motionData [ 203 ] + xx [ 92 ] ) * xx [ 12 ] ; xx [ 64 ] = ( xx [ 65 ] *
motionData [ 203 ] + xx [ 93 ] ) * xx [ 12 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 62 , xx + 14 ) ; xx [ 62 ]
= - xx [ 14 ] ; xx [ 63 ] = - xx [ 15 ] ; xx [ 64 ] = - xx [ 16 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 62 , xx + 88 ) ; xx [ 14 ] =
( motionData [ 203 ] * motionData [ 205 ] + motionData [ 204 ] * motionData [
206 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 12 ] * ( motionData [ 205 ] *
motionData [ 206 ] - motionData [ 203 ] * motionData [ 204 ] ) ; xx [ 16 ] =
xx [ 13 ] - ( motionData [ 204 ] * motionData [ 204 ] + motionData [ 205 ] *
motionData [ 205 ] ) * xx [ 12 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
4 , xx + 14 , xx + 62 ) ; xx [ 4 ] = - xx [ 62 ] ; xx [ 5 ] = - xx [ 63 ] ;
xx [ 6 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 4 ,
xx + 12 ) ; J [ 0 ] = xx [ 18 ] ; J [ 1 ] = xx [ 22 ] ; J [ 2 ] = xx [ 26 ] ;
J [ 3 ] = xx [ 30 ] ; J [ 4 ] = xx [ 34 ] ; J [ 5 ] = xx [ 38 ] ; J [ 6 ] =
xx [ 42 ] ; J [ 7 ] = xx [ 51 ] ; J [ 8 ] = xx [ 55 ] ; J [ 9 ] = xx [ 59 ] ;
J [ 10 ] = xx [ 59 ] ; J [ 11 ] = xx [ 59 ] ; J [ 12 ] = xx [ 47 ] ; J [ 13 ]
= xx [ 69 ] ; J [ 14 ] = xx [ 73 ] ; J [ 15 ] = xx [ 77 ] ; J [ 16 ] = xx [
81 ] ; J [ 17 ] = xx [ 85 ] ; J [ 18 ] = xx [ 1 ] ; J [ 19 ] = xx [ 89 ] ; J
[ 20 ] = xx [ 13 ] ; J [ 21 ] = xx [ 19 ] ; J [ 22 ] = xx [ 23 ] ; J [ 23 ] =
xx [ 27 ] ; J [ 24 ] = xx [ 31 ] ; J [ 25 ] = xx [ 35 ] ; J [ 26 ] = xx [ 39
] ; J [ 27 ] = xx [ 43 ] ; J [ 28 ] = xx [ 52 ] ; J [ 29 ] = xx [ 56 ] ; J [
30 ] = xx [ 60 ] ; J [ 31 ] = xx [ 60 ] ; J [ 32 ] = xx [ 60 ] ; J [ 33 ] =
xx [ 48 ] ; J [ 34 ] = xx [ 70 ] ; J [ 35 ] = xx [ 74 ] ; J [ 36 ] = xx [ 78
] ; J [ 37 ] = xx [ 82 ] ; J [ 38 ] = xx [ 86 ] ; J [ 39 ] = xx [ 2 ] ; J [
40 ] = xx [ 90 ] ; J [ 41 ] = xx [ 14 ] ; J [ 42 ] = xx [ 20 ] ; J [ 43 ] =
xx [ 24 ] ; J [ 44 ] = xx [ 28 ] ; J [ 45 ] = xx [ 32 ] ; J [ 46 ] = xx [ 36
] ; J [ 47 ] = xx [ 40 ] ; J [ 48 ] = xx [ 44 ] ; J [ 49 ] = xx [ 53 ] ; J [
50 ] = xx [ 57 ] ; J [ 51 ] = xx [ 61 ] ; J [ 52 ] = xx [ 61 ] ; J [ 53 ] =
xx [ 61 ] ; J [ 54 ] = xx [ 49 ] ; J [ 55 ] = xx [ 71 ] ; J [ 56 ] = xx [ 75
] ; J [ 57 ] = xx [ 79 ] ; J [ 58 ] = xx [ 83 ] ; J [ 59 ] = xx [ 87 ] ; J [
60 ] = xx [ 3 ] ; J [ 61 ] = xx [ 91 ] ; J [ 62 ] = xx [ 15 ] ; return 3 ; }
size_t pp_43e6ab1_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { case 0 : return
computeAssemblyJacobian_0 ( rtdv , state , modeVector , motionData , J ) ; }
return 0 ; } size_t pp_43e6ab1_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const double * state , const
int * modeVector , const double * motionData , double * J ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 94 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi
; ( void ) modeVector ; xx [ 0 ] = motionData [ 203 ] ; xx [ 1 ] = motionData
[ 204 ] ; xx [ 2 ] = motionData [ 205 ] ; xx [ 3 ] = motionData [ 206 ] ; xx
[ 4 ] = - motionData [ 259 ] ; xx [ 5 ] = - motionData [ 260 ] ; xx [ 6 ] = -
motionData [ 261 ] ; xx [ 7 ] = - motionData [ 262 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 12 ]
= 2.0 ; xx [ 13 ] = 1.0 ; xx [ 14 ] = xx [ 12 ] * ( motionData [ 344 ] *
motionData [ 346 ] - motionData [ 343 ] * motionData [ 345 ] ) ; xx [ 15 ] =
( motionData [ 343 ] * motionData [ 344 ] + motionData [ 345 ] * motionData [
346 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 13 ] - ( motionData [ 344 ] *
motionData [ 344 ] + motionData [ 345 ] * motionData [ 345 ] ) * xx [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 14 , xx + 17 ) ; xx [ 14 ] =
( motionData [ 336 ] * motionData [ 339 ] + motionData [ 337 ] * motionData [
338 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 13 ] - ( motionData [ 339 ] *
motionData [ 339 ] + motionData [ 337 ] * motionData [ 337 ] ) * xx [ 12 ] ;
xx [ 16 ] = xx [ 12 ] * ( motionData [ 338 ] * motionData [ 339 ] -
motionData [ 336 ] * motionData [ 337 ] ) ; pm_math_Quaternion_compDeriv_ra (
xx + 8 , xx + 14 , xx + 21 ) ; xx [ 14 ] = ( motionData [ 329 ] * motionData
[ 332 ] + motionData [ 330 ] * motionData [ 331 ] ) * xx [ 12 ] ; xx [ 15 ] =
xx [ 13 ] - ( motionData [ 332 ] * motionData [ 332 ] + motionData [ 330 ] *
motionData [ 330 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 12 ] * ( motionData [ 331
] * motionData [ 332 ] - motionData [ 329 ] * motionData [ 330 ] ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 14 , xx + 25 ) ; xx [ 14 ] =
( motionData [ 322 ] * motionData [ 325 ] + motionData [ 323 ] * motionData [
324 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 13 ] - ( motionData [ 325 ] *
motionData [ 325 ] + motionData [ 323 ] * motionData [ 323 ] ) * xx [ 12 ] ;
xx [ 16 ] = xx [ 12 ] * ( motionData [ 324 ] * motionData [ 325 ] -
motionData [ 322 ] * motionData [ 323 ] ) ; pm_math_Quaternion_compDeriv_ra (
xx + 8 , xx + 14 , xx + 29 ) ; xx [ 14 ] = xx [ 12 ] * ( motionData [ 316 ] *
motionData [ 318 ] - motionData [ 315 ] * motionData [ 317 ] ) ; xx [ 15 ] =
( motionData [ 315 ] * motionData [ 316 ] + motionData [ 317 ] * motionData [
318 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 13 ] - ( motionData [ 316 ] *
motionData [ 316 ] + motionData [ 317 ] * motionData [ 317 ] ) * xx [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 14 , xx + 33 ) ; xx [ 14 ] =
( motionData [ 308 ] * motionData [ 311 ] + motionData [ 309 ] * motionData [
310 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 13 ] - ( motionData [ 311 ] *
motionData [ 311 ] + motionData [ 309 ] * motionData [ 309 ] ) * xx [ 12 ] ;
xx [ 16 ] = xx [ 12 ] * ( motionData [ 310 ] * motionData [ 311 ] -
motionData [ 308 ] * motionData [ 309 ] ) ; pm_math_Quaternion_compDeriv_ra (
xx + 8 , xx + 14 , xx + 37 ) ; xx [ 41 ] = motionData [ 77 ] ; xx [ 42 ] =
motionData [ 78 ] ; xx [ 43 ] = motionData [ 79 ] ; xx [ 44 ] = motionData [
80 ] ; xx [ 14 ] = 0.5 ; xx [ 15 ] = xx [ 14 ] * state [ 14 ] ; xx [ 16 ] =
sin ( xx [ 15 ] ) ; xx [ 45 ] = 0.7071067811865476 ; xx [ 46 ] = xx [ 14 ] *
state [ 12 ] ; xx [ 47 ] = xx [ 45 ] * sin ( xx [ 46 ] ) ; xx [ 48 ] = xx [
14 ] * state [ 13 ] ; xx [ 49 ] = sin ( xx [ 48 ] ) ; xx [ 50 ] = xx [ 47 ] *
xx [ 49 ] ; xx [ 51 ] = cos ( xx [ 48 ] ) ; xx [ 48 ] = xx [ 45 ] * cos ( xx
[ 46 ] ) ; xx [ 46 ] = xx [ 51 ] * xx [ 48 ] ; xx [ 52 ] = xx [ 50 ] - xx [
46 ] ; xx [ 53 ] = xx [ 46 ] + xx [ 50 ] ; xx [ 46 ] = cos ( xx [ 15 ] ) ; xx
[ 15 ] = xx [ 16 ] * xx [ 52 ] - xx [ 53 ] * xx [ 46 ] ; xx [ 50 ] = xx [ 46
] * xx [ 52 ] + xx [ 53 ] * xx [ 16 ] ; xx [ 52 ] = xx [ 51 ] * xx [ 47 ] ;
xx [ 47 ] = xx [ 48 ] * xx [ 49 ] ; xx [ 48 ] = xx [ 52 ] - xx [ 47 ] ; xx [
49 ] = xx [ 52 ] + xx [ 47 ] ; xx [ 47 ] = xx [ 16 ] * xx [ 48 ] - xx [ 49 ]
* xx [ 46 ] ; xx [ 51 ] = xx [ 46 ] * xx [ 48 ] + xx [ 49 ] * xx [ 16 ] ; xx
[ 52 ] = xx [ 12 ] * ( xx [ 15 ] * xx [ 50 ] - xx [ 47 ] * xx [ 51 ] ) ; xx [
53 ] = xx [ 13 ] - ( xx [ 51 ] * xx [ 51 ] + xx [ 15 ] * xx [ 15 ] ) * xx [
12 ] ; xx [ 54 ] = ( xx [ 15 ] * xx [ 47 ] + xx [ 50 ] * xx [ 51 ] ) * xx [
12 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 52 , xx + 47 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 47 , xx + 41 ) ; xx [ 15 ] =
xx [ 12 ] * xx [ 46 ] * xx [ 16 ] ; xx [ 46 ] = xx [ 13 ] - xx [ 12 ] * xx [
16 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 46 ] * motionData [ 80 ] ; xx [ 47 ] =
motionData [ 78 ] ; xx [ 48 ] = motionData [ 79 ] ; xx [ 49 ] = motionData [
80 ] ; xx [ 50 ] = xx [ 15 ] * motionData [ 80 ] ; xx [ 51 ] = xx [ 46 ] *
motionData [ 78 ] - xx [ 15 ] * motionData [ 79 ] ; xx [ 52 ] = - xx [ 16 ] ;
xx [ 53 ] = xx [ 50 ] ; xx [ 54 ] = xx [ 51 ] ; pm_math_Vector3_cross_ra ( xx
+ 47 , xx + 52 , xx + 55 ) ; xx [ 47 ] = xx [ 15 ] + ( xx [ 16 ] * motionData
[ 77 ] + xx [ 55 ] ) * xx [ 12 ] ; xx [ 48 ] = xx [ 46 ] + xx [ 12 ] * ( xx [
56 ] - xx [ 50 ] * motionData [ 77 ] ) ; xx [ 49 ] = xx [ 12 ] * ( xx [ 57 ]
- xx [ 51 ] * motionData [ 77 ] ) ; pm_math_Quaternion_compDeriv_ra ( xx + 8
, xx + 47 , xx + 50 ) ; xx [ 46 ] = xx [ 12 ] * ( motionData [ 78 ] *
motionData [ 80 ] - motionData [ 77 ] * motionData [ 79 ] ) ; xx [ 47 ] = (
motionData [ 77 ] * motionData [ 78 ] + motionData [ 79 ] * motionData [ 80 ]
) * xx [ 12 ] ; xx [ 48 ] = xx [ 13 ] - ( motionData [ 78 ] * motionData [ 78
] + motionData [ 79 ] * motionData [ 79 ] ) * xx [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 46 , xx + 54 ) ; xx [ 15 ] =
0.0 ; xx [ 46 ] = xx [ 15 ] ; xx [ 47 ] = xx [ 15 ] ; xx [ 48 ] = xx [ 15 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 46 , xx + 58 ) ; xx [ 46 ] =
xx [ 12 ] * ( motionData [ 295 ] * motionData [ 297 ] - motionData [ 294 ] *
motionData [ 296 ] ) ; xx [ 47 ] = ( motionData [ 294 ] * motionData [ 295 ]
+ motionData [ 296 ] * motionData [ 297 ] ) * xx [ 12 ] ; xx [ 48 ] = xx [ 13
] - ( motionData [ 295 ] * motionData [ 295 ] + motionData [ 296 ] *
motionData [ 296 ] ) * xx [ 12 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx
+ 46 , xx + 62 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 62 , xx
+ 46 ) ; xx [ 62 ] = - xx [ 46 ] ; xx [ 63 ] = - xx [ 47 ] ; xx [ 64 ] = - xx
[ 48 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 62 , xx + 46 ) ; xx
[ 62 ] = ( motionData [ 287 ] * motionData [ 290 ] + motionData [ 288 ] *
motionData [ 289 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - ( motionData [ 290
] * motionData [ 290 ] + motionData [ 288 ] * motionData [ 288 ] ) * xx [ 12
] ; xx [ 64 ] = xx [ 12 ] * ( motionData [ 289 ] * motionData [ 290 ] -
motionData [ 287 ] * motionData [ 288 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 0 , xx + 62 , xx + 65 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx
+ 65 , xx + 62 ) ; xx [ 65 ] = - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [
67 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx
+ 68 ) ; xx [ 62 ] = ( motionData [ 280 ] * motionData [ 283 ] + motionData [
281 ] * motionData [ 282 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - (
motionData [ 283 ] * motionData [ 283 ] + motionData [ 281 ] * motionData [
281 ] ) * xx [ 12 ] ; xx [ 64 ] = xx [ 12 ] * ( motionData [ 282 ] *
motionData [ 283 ] - motionData [ 280 ] * motionData [ 281 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 62 , xx + 65 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 65 , xx + 62 ) ; xx [ 65 ]
= - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [ 67 ] = - xx [ 64 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx + 72 ) ; xx [ 62 ] =
( motionData [ 273 ] * motionData [ 276 ] + motionData [ 274 ] * motionData [
275 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - ( motionData [ 276 ] *
motionData [ 276 ] + motionData [ 274 ] * motionData [ 274 ] ) * xx [ 12 ] ;
xx [ 64 ] = xx [ 12 ] * ( motionData [ 275 ] * motionData [ 276 ] -
motionData [ 273 ] * motionData [ 274 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 0 , xx + 62 , xx + 65 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx
+ 65 , xx + 62 ) ; xx [ 65 ] = - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [
67 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx
+ 76 ) ; xx [ 62 ] = xx [ 12 ] * ( motionData [ 267 ] * motionData [ 269 ] -
motionData [ 266 ] * motionData [ 268 ] ) ; xx [ 63 ] = ( motionData [ 266 ]
* motionData [ 267 ] + motionData [ 268 ] * motionData [ 269 ] ) * xx [ 12 ]
; xx [ 64 ] = xx [ 13 ] - ( motionData [ 267 ] * motionData [ 267 ] +
motionData [ 268 ] * motionData [ 268 ] ) * xx [ 12 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 62 , xx + 65 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 65 , xx + 62 ) ; xx [ 65 ]
= - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [ 67 ] = - xx [ 64 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx + 80 ) ; xx [ 62 ] =
( motionData [ 154 ] * motionData [ 157 ] + motionData [ 155 ] * motionData [
156 ] ) * xx [ 12 ] ; xx [ 63 ] = xx [ 13 ] - ( motionData [ 157 ] *
motionData [ 157 ] + motionData [ 155 ] * motionData [ 155 ] ) * xx [ 12 ] ;
xx [ 64 ] = xx [ 12 ] * ( motionData [ 156 ] * motionData [ 157 ] -
motionData [ 154 ] * motionData [ 155 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 0 , xx + 62 , xx + 65 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx
+ 65 , xx + 62 ) ; xx [ 65 ] = - xx [ 62 ] ; xx [ 66 ] = - xx [ 63 ] ; xx [
67 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 65 , xx
+ 84 ) ; xx [ 15 ] = xx [ 14 ] * state [ 38 ] ; xx [ 16 ] = sin ( xx [ 15 ] )
; xx [ 62 ] = xx [ 14 ] * state [ 37 ] ; xx [ 63 ] = cos ( xx [ 62 ] ) ; xx [
64 ] = xx [ 14 ] * state [ 36 ] ; xx [ 14 ] = xx [ 45 ] * sin ( xx [ 64 ] ) ;
xx [ 65 ] = xx [ 63 ] * xx [ 14 ] ; xx [ 66 ] = xx [ 45 ] * cos ( xx [ 64 ] )
; xx [ 45 ] = sin ( xx [ 62 ] ) ; xx [ 62 ] = xx [ 66 ] * xx [ 45 ] ; xx [ 64
] = xx [ 65 ] - xx [ 62 ] ; xx [ 67 ] = xx [ 65 ] + xx [ 62 ] ; xx [ 62 ] =
cos ( xx [ 15 ] ) ; xx [ 15 ] = xx [ 16 ] * xx [ 64 ] - xx [ 67 ] * xx [ 62 ]
; xx [ 65 ] = xx [ 62 ] * xx [ 64 ] + xx [ 67 ] * xx [ 16 ] ; xx [ 64 ] = xx
[ 14 ] * xx [ 45 ] ; xx [ 14 ] = xx [ 63 ] * xx [ 66 ] ; xx [ 45 ] = xx [ 64
] - xx [ 14 ] ; xx [ 63 ] = xx [ 64 ] + xx [ 14 ] ; xx [ 14 ] = xx [ 62 ] *
xx [ 45 ] + xx [ 63 ] * xx [ 16 ] ; xx [ 64 ] = xx [ 63 ] * xx [ 62 ] - xx [
16 ] * xx [ 45 ] ; xx [ 88 ] = - ( ( xx [ 15 ] * xx [ 65 ] + xx [ 14 ] * xx [
64 ] ) * xx [ 12 ] ) ; xx [ 89 ] = ( xx [ 15 ] * xx [ 15 ] + xx [ 14 ] * xx [
14 ] ) * xx [ 12 ] - xx [ 13 ] ; xx [ 90 ] = xx [ 12 ] * ( xx [ 14 ] * xx [
65 ] - xx [ 15 ] * xx [ 64 ] ) ; pm_math_Quaternion_xform_ra ( xx + 0 , xx +
88 , xx + 63 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 63 , xx +
0 ) ; xx [ 63 ] = - xx [ 0 ] ; xx [ 64 ] = - xx [ 1 ] ; xx [ 65 ] = - xx [ 2
] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 63 , xx + 0 ) ; xx [ 14 ]
= xx [ 12 ] * xx [ 62 ] * xx [ 16 ] ; xx [ 62 ] = motionData [ 204 ] ; xx [
63 ] = motionData [ 205 ] ; xx [ 64 ] = motionData [ 206 ] ; xx [ 15 ] = xx [
13 ] - xx [ 12 ] * xx [ 16 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 15 ] * motionData
[ 206 ] ; xx [ 45 ] = xx [ 14 ] * motionData [ 206 ] ; xx [ 65 ] = xx [ 15 ]
* motionData [ 204 ] - xx [ 14 ] * motionData [ 205 ] ; xx [ 88 ] = - xx [ 16
] ; xx [ 89 ] = xx [ 45 ] ; xx [ 90 ] = xx [ 65 ] ; pm_math_Vector3_cross_ra
( xx + 62 , xx + 88 , xx + 91 ) ; xx [ 62 ] = xx [ 14 ] + xx [ 12 ] * ( xx [
91 ] - xx [ 16 ] * motionData [ 203 ] ) ; xx [ 63 ] = xx [ 15 ] + ( xx [ 45 ]
* motionData [ 203 ] + xx [ 92 ] ) * xx [ 12 ] ; xx [ 64 ] = ( xx [ 65 ] *
motionData [ 203 ] + xx [ 93 ] ) * xx [ 12 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 4 , xx + 62 , xx + 14 ) ; xx [ 62 ]
= - xx [ 14 ] ; xx [ 63 ] = - xx [ 15 ] ; xx [ 64 ] = - xx [ 16 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 62 , xx + 88 ) ; xx [ 14 ] =
( motionData [ 203 ] * motionData [ 205 ] + motionData [ 204 ] * motionData [
206 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 12 ] * ( motionData [ 205 ] *
motionData [ 206 ] - motionData [ 203 ] * motionData [ 204 ] ) ; xx [ 16 ] =
xx [ 13 ] - ( motionData [ 204 ] * motionData [ 204 ] + motionData [ 205 ] *
motionData [ 205 ] ) * xx [ 12 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
4 , xx + 14 , xx + 62 ) ; xx [ 4 ] = - xx [ 62 ] ; xx [ 5 ] = - xx [ 63 ] ;
xx [ 6 ] = - xx [ 64 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 8 , xx + 4 ,
xx + 12 ) ; J [ 0 ] = xx [ 18 ] ; J [ 1 ] = xx [ 22 ] ; J [ 2 ] = xx [ 26 ] ;
J [ 3 ] = xx [ 30 ] ; J [ 4 ] = xx [ 34 ] ; J [ 5 ] = xx [ 38 ] ; J [ 6 ] =
xx [ 42 ] ; J [ 7 ] = xx [ 51 ] ; J [ 8 ] = xx [ 55 ] ; J [ 9 ] = xx [ 59 ] ;
J [ 10 ] = xx [ 59 ] ; J [ 11 ] = xx [ 59 ] ; J [ 12 ] = xx [ 47 ] ; J [ 13 ]
= xx [ 69 ] ; J [ 14 ] = xx [ 73 ] ; J [ 15 ] = xx [ 77 ] ; J [ 16 ] = xx [
81 ] ; J [ 17 ] = xx [ 85 ] ; J [ 18 ] = xx [ 1 ] ; J [ 19 ] = xx [ 89 ] ; J
[ 20 ] = xx [ 13 ] ; J [ 21 ] = xx [ 19 ] ; J [ 22 ] = xx [ 23 ] ; J [ 23 ] =
xx [ 27 ] ; J [ 24 ] = xx [ 31 ] ; J [ 25 ] = xx [ 35 ] ; J [ 26 ] = xx [ 39
] ; J [ 27 ] = xx [ 43 ] ; J [ 28 ] = xx [ 52 ] ; J [ 29 ] = xx [ 56 ] ; J [
30 ] = xx [ 60 ] ; J [ 31 ] = xx [ 60 ] ; J [ 32 ] = xx [ 60 ] ; J [ 33 ] =
xx [ 48 ] ; J [ 34 ] = xx [ 70 ] ; J [ 35 ] = xx [ 74 ] ; J [ 36 ] = xx [ 78
] ; J [ 37 ] = xx [ 82 ] ; J [ 38 ] = xx [ 86 ] ; J [ 39 ] = xx [ 2 ] ; J [
40 ] = xx [ 90 ] ; J [ 41 ] = xx [ 14 ] ; J [ 42 ] = xx [ 20 ] ; J [ 43 ] =
xx [ 24 ] ; J [ 44 ] = xx [ 28 ] ; J [ 45 ] = xx [ 32 ] ; J [ 46 ] = xx [ 36
] ; J [ 47 ] = xx [ 40 ] ; J [ 48 ] = xx [ 44 ] ; J [ 49 ] = xx [ 53 ] ; J [
50 ] = xx [ 57 ] ; J [ 51 ] = xx [ 61 ] ; J [ 52 ] = xx [ 61 ] ; J [ 53 ] =
xx [ 61 ] ; J [ 54 ] = xx [ 49 ] ; J [ 55 ] = xx [ 71 ] ; J [ 56 ] = xx [ 75
] ; J [ 57 ] = xx [ 79 ] ; J [ 58 ] = xx [ 83 ] ; J [ 59 ] = xx [ 87 ] ; J [
60 ] = xx [ 3 ] ; J [ 61 ] = xx [ 91 ] ; J [ 62 ] = xx [ 15 ] ; return 3 ; }
static boolean_T isInKinematicSingularity_0 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } boolean_T
pp_43e6ab1_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { case 0 :
return isInKinematicSingularity_0 ( rtdv , modeVector , motionData ) ; }
return 0 ; } void pp_43e6ab1_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double
* asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; ( void ) simModeVector
; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ;
simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState
[ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] =
asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState
[ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ;
simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] = asmState [ 24 ] ;
simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] = asmState [ 26 ] ;
simState [ 27 ] = asmState [ 27 ] ; simState [ 28 ] = asmState [ 28 ] ;
simState [ 29 ] = asmState [ 29 ] ; simState [ 30 ] = asmState [ 30 ] ;
simState [ 31 ] = asmState [ 31 ] ; simState [ 32 ] = asmState [ 32 ] ;
simState [ 33 ] = asmState [ 33 ] ; simState [ 34 ] = asmState [ 34 ] ;
simState [ 35 ] = asmState [ 35 ] ; simState [ 36 ] = asmState [ 36 ] ;
simState [ 37 ] = asmState [ 37 ] ; simState [ 38 ] = asmState [ 38 ] ;
simState [ 39 ] = asmState [ 39 ] ; simState [ 40 ] = asmState [ 40 ] ;
simState [ 41 ] = asmState [ 41 ] ; }
