#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void pp_43e6ab1_1_resetSimStateVector ( const void * mech , double * state )
{ double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ;
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
state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; } static void
perturbSimJointPrimitiveState_2_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbSimJointPrimitiveState_2_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 1 ]
= state [ 1 ] - 0.875 * mag ; } static void perturbSimJointPrimitiveState_3_0
( double mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; } static
void perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_4_0 ( double mag , double * state )
{ state [ 4 ] = state [ 4 ] + mag ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_6_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_7_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 12 ] = state [ 12 ] + mag ; } static void
perturbSimJointPrimitiveState_10_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_1 ( double mag , double * state
) { state [ 13 ] = state [ 13 ] + mag ; } static void
perturbSimJointPrimitiveState_10_1v ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; state [ 16 ] = state [ 16 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_2 ( double mag , double * state
) { state [ 14 ] = state [ 14 ] + mag ; } static void
perturbSimJointPrimitiveState_10_2v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 18 ] = state [ 18 ] + mag ; } static void
perturbSimJointPrimitiveState_11_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_1 ( double mag , double * state
) { state [ 19 ] = state [ 19 ] + mag ; } static void
perturbSimJointPrimitiveState_11_1v ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; state [ 22 ] = state [ 22 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_2 ( double mag , double * state
) { state [ 20 ] = state [ 20 ] + mag ; } static void
perturbSimJointPrimitiveState_11_2v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 24 ] = state [ 24 ] + mag ; } static void
perturbSimJointPrimitiveState_14_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 25 ] = state [ 25 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 26 ] = state [ 26 ] + mag ; } static void
perturbSimJointPrimitiveState_15_0v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_16_0 ( double mag , double * state
) { state [ 28 ] = state [ 28 ] + mag ; } static void
perturbSimJointPrimitiveState_16_0v ( double mag , double * state ) { state [
28 ] = state [ 28 ] + mag ; state [ 29 ] = state [ 29 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_17_0 ( double mag , double * state
) { state [ 30 ] = state [ 30 ] + mag ; } static void
perturbSimJointPrimitiveState_17_0v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 31 ] = state [ 31 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_18_0 ( double mag , double * state
) { state [ 32 ] = state [ 32 ] + mag ; } static void
perturbSimJointPrimitiveState_18_0v ( double mag , double * state ) { state [
32 ] = state [ 32 ] + mag ; state [ 33 ] = state [ 33 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_19_0 ( double mag , double * state
) { state [ 34 ] = state [ 34 ] + mag ; } static void
perturbSimJointPrimitiveState_19_0v ( double mag , double * state ) { state [
34 ] = state [ 34 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_22_0 ( double mag , double * state
) { state [ 36 ] = state [ 36 ] + mag ; } static void
perturbSimJointPrimitiveState_22_0v ( double mag , double * state ) { state [
36 ] = state [ 36 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_22_1 ( double mag , double * state
) { state [ 37 ] = state [ 37 ] + mag ; } static void
perturbSimJointPrimitiveState_22_1v ( double mag , double * state ) { state [
37 ] = state [ 37 ] + mag ; state [ 40 ] = state [ 40 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_22_2 ( double mag , double * state
) { state [ 38 ] = state [ 38 ] + mag ; } static void
perturbSimJointPrimitiveState_22_2v ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; state [ 41 ] = state [ 41 ] - 0.875 * mag ; }
void pp_43e6ab1_1_perturbSimJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity , double
* state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( ( stageIdx * 6 +
primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; case 120 :
perturbSimJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbSimJointPrimitiveState_10_0v ( mag , state ) ; break ; case 122 :
perturbSimJointPrimitiveState_10_1 ( mag , state ) ; break ; case 123 :
perturbSimJointPrimitiveState_10_1v ( mag , state ) ; break ; case 124 :
perturbSimJointPrimitiveState_10_2 ( mag , state ) ; break ; case 125 :
perturbSimJointPrimitiveState_10_2v ( mag , state ) ; break ; case 132 :
perturbSimJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbSimJointPrimitiveState_11_0v ( mag , state ) ; break ; case 134 :
perturbSimJointPrimitiveState_11_1 ( mag , state ) ; break ; case 135 :
perturbSimJointPrimitiveState_11_1v ( mag , state ) ; break ; case 136 :
perturbSimJointPrimitiveState_11_2 ( mag , state ) ; break ; case 137 :
perturbSimJointPrimitiveState_11_2v ( mag , state ) ; break ; case 168 :
perturbSimJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbSimJointPrimitiveState_14_0v ( mag , state ) ; break ; case 180 :
perturbSimJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbSimJointPrimitiveState_15_0v ( mag , state ) ; break ; case 192 :
perturbSimJointPrimitiveState_16_0 ( mag , state ) ; break ; case 193 :
perturbSimJointPrimitiveState_16_0v ( mag , state ) ; break ; case 204 :
perturbSimJointPrimitiveState_17_0 ( mag , state ) ; break ; case 205 :
perturbSimJointPrimitiveState_17_0v ( mag , state ) ; break ; case 216 :
perturbSimJointPrimitiveState_18_0 ( mag , state ) ; break ; case 217 :
perturbSimJointPrimitiveState_18_0v ( mag , state ) ; break ; case 228 :
perturbSimJointPrimitiveState_19_0 ( mag , state ) ; break ; case 229 :
perturbSimJointPrimitiveState_19_0v ( mag , state ) ; break ; case 264 :
perturbSimJointPrimitiveState_22_0 ( mag , state ) ; break ; case 265 :
perturbSimJointPrimitiveState_22_0v ( mag , state ) ; break ; case 266 :
perturbSimJointPrimitiveState_22_1 ( mag , state ) ; break ; case 267 :
perturbSimJointPrimitiveState_22_1v ( mag , state ) ; break ; case 268 :
perturbSimJointPrimitiveState_22_2 ( mag , state ) ; break ; case 269 :
perturbSimJointPrimitiveState_22_2v ( mag , state ) ; break ; } } void
pp_43e6ab1_1_perturbFlexibleBodyState ( const void * mech , size_t stageIdx ,
double mag , boolean_T doPerturbVelocity , double * state ) { ( void ) mech ;
( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ; ( void )
state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { } } void
pp_43e6ab1_1_constructStateVector ( const void * mech , const double *
solverState , const double * u , const double * uDot , double * discreteState
, double * fullState ) { ( void ) mech ; ( void ) discreteState ; fullState [
0 ] = u [ 2 ] ; fullState [ 1 ] = uDot [ 2 ] ; fullState [ 2 ] = u [ 1 ] ;
fullState [ 3 ] = uDot [ 1 ] ; fullState [ 4 ] = u [ 0 ] ; fullState [ 5 ] =
uDot [ 0 ] ; fullState [ 6 ] = u [ 3 ] ; fullState [ 7 ] = uDot [ 3 ] ;
fullState [ 8 ] = u [ 4 ] ; fullState [ 9 ] = uDot [ 4 ] ; fullState [ 10 ] =
u [ 5 ] ; fullState [ 11 ] = uDot [ 5 ] ; fullState [ 12 ] = solverState [ 0
] ; fullState [ 13 ] = solverState [ 1 ] ; fullState [ 14 ] = solverState [ 2
] ; fullState [ 15 ] = solverState [ 3 ] ; fullState [ 16 ] = solverState [ 4
] ; fullState [ 17 ] = solverState [ 5 ] ; fullState [ 18 ] = solverState [ 6
] ; fullState [ 19 ] = solverState [ 7 ] ; fullState [ 20 ] = solverState [ 8
] ; fullState [ 21 ] = solverState [ 9 ] ; fullState [ 22 ] = solverState [
10 ] ; fullState [ 23 ] = solverState [ 11 ] ; fullState [ 24 ] = u [ 8 ] ;
fullState [ 25 ] = uDot [ 8 ] ; fullState [ 26 ] = u [ 7 ] ; fullState [ 27 ]
= uDot [ 7 ] ; fullState [ 28 ] = u [ 6 ] ; fullState [ 29 ] = uDot [ 6 ] ;
fullState [ 30 ] = u [ 9 ] ; fullState [ 31 ] = uDot [ 9 ] ; fullState [ 32 ]
= u [ 10 ] ; fullState [ 33 ] = uDot [ 10 ] ; fullState [ 34 ] = u [ 11 ] ;
fullState [ 35 ] = uDot [ 11 ] ; fullState [ 36 ] = solverState [ 12 ] ;
fullState [ 37 ] = solverState [ 13 ] ; fullState [ 38 ] = solverState [ 14 ]
; fullState [ 39 ] = solverState [ 15 ] ; fullState [ 40 ] = solverState [ 16
] ; fullState [ 41 ] = solverState [ 17 ] ; } void
pp_43e6ab1_1_extractSolverStateVector ( const void * mech , const double *
fullState , double * solverState ) { ( void ) mech ; solverState [ 0 ] =
fullState [ 12 ] ; solverState [ 1 ] = fullState [ 13 ] ; solverState [ 2 ] =
fullState [ 14 ] ; solverState [ 3 ] = fullState [ 15 ] ; solverState [ 4 ] =
fullState [ 16 ] ; solverState [ 5 ] = fullState [ 17 ] ; solverState [ 6 ] =
fullState [ 18 ] ; solverState [ 7 ] = fullState [ 19 ] ; solverState [ 8 ] =
fullState [ 20 ] ; solverState [ 9 ] = fullState [ 21 ] ; solverState [ 10 ]
= fullState [ 22 ] ; solverState [ 11 ] = fullState [ 23 ] ; solverState [ 12
] = fullState [ 36 ] ; solverState [ 13 ] = fullState [ 37 ] ; solverState [
14 ] = fullState [ 38 ] ; solverState [ 15 ] = fullState [ 39 ] ; solverState
[ 16 ] = fullState [ 40 ] ; solverState [ 17 ] = fullState [ 41 ] ; }
boolean_T pp_43e6ab1_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 1 ] ;
double xx [ 37 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] *
state [ 10 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ; xx [ 3 ] = 0.7071067811865476 ;
xx [ 4 ] = xx [ 0 ] * state [ 6 ] ; xx [ 5 ] = xx [ 3 ] * sin ( xx [ 4 ] ) ;
xx [ 6 ] = xx [ 3 ] * cos ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 5 ] + xx [ 6 ] ; xx
[ 7 ] = xx [ 0 ] * state [ 4 ] ; xx [ 8 ] = xx [ 3 ] * sin ( xx [ 7 ] ) ; xx
[ 9 ] = xx [ 3 ] * cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 8 ] + xx [ 9 ] ; xx [
10 ] = xx [ 0 ] * state [ 0 ] ; xx [ 11 ] = cos ( xx [ 10 ] ) ; xx [ 12 ] =
xx [ 0 ] * state [ 2 ] ; xx [ 13 ] = sin ( xx [ 12 ] ) ; xx [ 14 ] = xx [ 11
] * xx [ 13 ] ; xx [ 15 ] = cos ( xx [ 12 ] ) ; xx [ 12 ] = xx [ 11 ] * xx [
15 ] ; xx [ 11 ] = xx [ 8 ] - xx [ 9 ] ; xx [ 8 ] = xx [ 7 ] * xx [ 14 ] + xx
[ 12 ] * xx [ 11 ] ; xx [ 9 ] = xx [ 14 ] * xx [ 11 ] - xx [ 7 ] * xx [ 12 ]
; xx [ 12 ] = xx [ 5 ] - xx [ 6 ] ; xx [ 5 ] = xx [ 4 ] * xx [ 8 ] - xx [ 9 ]
* xx [ 12 ] ; xx [ 6 ] = xx [ 0 ] * state [ 8 ] ; xx [ 14 ] = xx [ 3 ] * sin
( xx [ 6 ] ) ; xx [ 16 ] = xx [ 3 ] * cos ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 14 ]
- xx [ 16 ] ; xx [ 17 ] = xx [ 14 ] + xx [ 16 ] ; xx [ 14 ] = sin ( xx [ 10 ]
) ; xx [ 10 ] = xx [ 14 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 15 ] * xx [ 14 ] ;
xx [ 14 ] = xx [ 10 ] * xx [ 11 ] - xx [ 7 ] * xx [ 13 ] ; xx [ 15 ] = xx [ 7
] * xx [ 10 ] + xx [ 13 ] * xx [ 11 ] ; xx [ 7 ] = xx [ 14 ] * xx [ 12 ] - xx
[ 4 ] * xx [ 15 ] ; xx [ 10 ] = xx [ 5 ] * xx [ 6 ] + xx [ 17 ] * xx [ 7 ] ;
xx [ 11 ] = cos ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 8 ] * xx [ 12 ] + xx [ 9 ] *
xx [ 4 ] ; xx [ 8 ] = xx [ 15 ] * xx [ 12 ] + xx [ 14 ] * xx [ 4 ] ; xx [ 4 ]
= xx [ 1 ] * xx [ 6 ] + xx [ 8 ] * xx [ 17 ] ; xx [ 9 ] = xx [ 1 ] * xx [ 17
] - xx [ 8 ] * xx [ 6 ] ; xx [ 1 ] = xx [ 7 ] * xx [ 6 ] - xx [ 17 ] * xx [ 5
] ; xx [ 5 ] = xx [ 2 ] * xx [ 10 ] + xx [ 11 ] * xx [ 4 ] ; xx [ 6 ] = xx [
9 ] * xx [ 2 ] - xx [ 1 ] * xx [ 11 ] ; xx [ 7 ] = - ( xx [ 11 ] * xx [ 10 ]
- xx [ 2 ] * xx [ 4 ] ) ; xx [ 8 ] = - ( xx [ 9 ] * xx [ 11 ] + xx [ 1 ] * xx
[ 2 ] ) ; xx [ 1 ] = xx [ 0 ] * state [ 14 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ;
xx [ 4 ] = xx [ 0 ] * state [ 13 ] ; xx [ 9 ] = cos ( xx [ 4 ] ) ; xx [ 10 ]
= xx [ 0 ] * state [ 12 ] ; xx [ 11 ] = xx [ 3 ] * sin ( xx [ 10 ] ) ; xx [
12 ] = xx [ 9 ] * xx [ 11 ] ; xx [ 13 ] = xx [ 3 ] * cos ( xx [ 10 ] ) ; xx [
10 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 13 ] * xx [ 10 ] ; xx [ 14 ] = xx [
12 ] - xx [ 4 ] ; xx [ 15 ] = xx [ 12 ] + xx [ 4 ] ; xx [ 4 ] = cos ( xx [ 1
] ) ; xx [ 1 ] = xx [ 11 ] * xx [ 10 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 13 ] ;
xx [ 9 ] = xx [ 1 ] - xx [ 10 ] ; xx [ 11 ] = xx [ 10 ] + xx [ 1 ] ; xx [ 16
] = - ( xx [ 2 ] * xx [ 14 ] - xx [ 15 ] * xx [ 4 ] ) ; xx [ 17 ] = xx [ 2 ]
* xx [ 9 ] - xx [ 11 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 4 ] * xx [ 9 ] + xx [ 11
] * xx [ 2 ] ; xx [ 19 ] = xx [ 4 ] * xx [ 14 ] + xx [ 15 ] * xx [ 2 ] ;
pm_math_Quaternion_compose_ra ( xx + 5 , xx + 16 , xx + 9 ) ; xx [ 1 ] = xx [
9 ] * xx [ 9 ] ; xx [ 2 ] = 2.0 ; xx [ 4 ] = 1.0 ; xx [ 5 ] = xx [ 10 ] * xx
[ 11 ] ; xx [ 6 ] = xx [ 9 ] * xx [ 12 ] ; xx [ 7 ] = xx [ 10 ] * xx [ 12 ] ;
xx [ 8 ] = xx [ 9 ] * xx [ 11 ] ; xx [ 13 ] = ( xx [ 1 ] + xx [ 10 ] * xx [
10 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 14 ] = ( xx [ 5 ] + xx [ 6 ] ) * xx [ 2 ]
; xx [ 15 ] = xx [ 2 ] * ( xx [ 7 ] - xx [ 8 ] ) ; xx [ 16 ] = xx [ 0 ] *
state [ 34 ] ; xx [ 17 ] = sin ( xx [ 16 ] ) ; xx [ 18 ] = xx [ 0 ] * state [
24 ] ; xx [ 19 ] = sin ( xx [ 18 ] ) ; xx [ 20 ] = xx [ 0 ] * state [ 26 ] ;
xx [ 21 ] = sin ( xx [ 20 ] ) ; xx [ 22 ] = xx [ 19 ] * xx [ 21 ] ; xx [ 23 ]
= xx [ 0 ] * state [ 28 ] ; xx [ 24 ] = xx [ 3 ] * sin ( xx [ 23 ] ) ; xx [
25 ] = xx [ 3 ] * cos ( xx [ 23 ] ) ; xx [ 23 ] = xx [ 24 ] - xx [ 25 ] ; xx
[ 26 ] = xx [ 24 ] + xx [ 25 ] ; xx [ 24 ] = cos ( xx [ 20 ] ) ; xx [ 20 ] =
xx [ 24 ] * xx [ 19 ] ; xx [ 19 ] = xx [ 22 ] * xx [ 23 ] - xx [ 26 ] * xx [
20 ] ; xx [ 25 ] = xx [ 0 ] * state [ 30 ] ; xx [ 27 ] = xx [ 3 ] * sin ( xx
[ 25 ] ) ; xx [ 28 ] = xx [ 3 ] * cos ( xx [ 25 ] ) ; xx [ 25 ] = xx [ 27 ] -
xx [ 28 ] ; xx [ 29 ] = xx [ 27 ] + xx [ 28 ] ; xx [ 27 ] = xx [ 20 ] * xx [
23 ] + xx [ 26 ] * xx [ 22 ] ; xx [ 20 ] = xx [ 19 ] * xx [ 25 ] - xx [ 29 ]
* xx [ 27 ] ; xx [ 22 ] = xx [ 0 ] * state [ 32 ] ; xx [ 28 ] = xx [ 3 ] *
sin ( xx [ 22 ] ) ; xx [ 30 ] = xx [ 3 ] * cos ( xx [ 22 ] ) ; xx [ 22 ] = xx
[ 28 ] - xx [ 30 ] ; xx [ 31 ] = xx [ 28 ] + xx [ 30 ] ; xx [ 28 ] = cos ( xx
[ 18 ] ) ; xx [ 18 ] = xx [ 28 ] * xx [ 21 ] ; xx [ 21 ] = xx [ 28 ] * xx [
24 ] ; xx [ 24 ] = xx [ 18 ] * xx [ 23 ] - xx [ 26 ] * xx [ 21 ] ; xx [ 28 ]
= xx [ 26 ] * xx [ 18 ] + xx [ 21 ] * xx [ 23 ] ; xx [ 18 ] = xx [ 24 ] * xx
[ 25 ] - xx [ 29 ] * xx [ 28 ] ; xx [ 21 ] = xx [ 20 ] * xx [ 22 ] + xx [ 31
] * xx [ 18 ] ; xx [ 23 ] = cos ( xx [ 16 ] ) ; xx [ 16 ] = xx [ 27 ] * xx [
25 ] + xx [ 19 ] * xx [ 29 ] ; xx [ 19 ] = xx [ 28 ] * xx [ 25 ] + xx [ 24 ]
* xx [ 29 ] ; xx [ 24 ] = xx [ 16 ] * xx [ 22 ] - xx [ 19 ] * xx [ 31 ] ; xx
[ 25 ] = xx [ 31 ] * xx [ 16 ] + xx [ 19 ] * xx [ 22 ] ; xx [ 16 ] = xx [ 18
] * xx [ 22 ] - xx [ 20 ] * xx [ 31 ] ; xx [ 26 ] = xx [ 17 ] * xx [ 21 ] -
xx [ 23 ] * xx [ 24 ] ; xx [ 27 ] = - ( xx [ 25 ] * xx [ 17 ] + xx [ 16 ] *
xx [ 23 ] ) ; xx [ 28 ] = - ( xx [ 17 ] * xx [ 24 ] + xx [ 23 ] * xx [ 21 ] )
; xx [ 29 ] = - ( xx [ 16 ] * xx [ 17 ] - xx [ 25 ] * xx [ 23 ] ) ; xx [ 16 ]
= xx [ 0 ] * state [ 38 ] ; xx [ 17 ] = cos ( xx [ 16 ] ) ; xx [ 18 ] = xx [
0 ] * state [ 37 ] ; xx [ 19 ] = cos ( xx [ 18 ] ) ; xx [ 20 ] = xx [ 0 ] *
state [ 36 ] ; xx [ 0 ] = xx [ 3 ] * sin ( xx [ 20 ] ) ; xx [ 21 ] = xx [ 19
] * xx [ 0 ] ; xx [ 22 ] = xx [ 3 ] * cos ( xx [ 20 ] ) ; xx [ 3 ] = sin ( xx
[ 18 ] ) ; xx [ 18 ] = xx [ 22 ] * xx [ 3 ] ; xx [ 20 ] = xx [ 21 ] - xx [ 18
] ; xx [ 23 ] = xx [ 21 ] + xx [ 18 ] ; xx [ 18 ] = sin ( xx [ 16 ] ) ; xx [
16 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 0 ] = xx [ 19 ] * xx [ 22 ] ; xx [ 3 ] = xx
[ 16 ] - xx [ 0 ] ; xx [ 19 ] = xx [ 16 ] + xx [ 0 ] ; xx [ 30 ] = xx [ 17 ]
* xx [ 20 ] + xx [ 23 ] * xx [ 18 ] ; xx [ 31 ] = xx [ 17 ] * xx [ 3 ] + xx [
19 ] * xx [ 18 ] ; xx [ 32 ] = xx [ 19 ] * xx [ 17 ] - xx [ 18 ] * xx [ 3 ] ;
xx [ 33 ] = xx [ 18 ] * xx [ 20 ] - xx [ 23 ] * xx [ 17 ] ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 30 , xx + 16 ) ; xx [ 0 ] = xx
[ 17 ] * xx [ 18 ] ; xx [ 3 ] = xx [ 16 ] * xx [ 19 ] ; xx [ 20 ] = xx [ 16 ]
* xx [ 16 ] ; xx [ 21 ] = xx [ 18 ] * xx [ 19 ] ; xx [ 22 ] = xx [ 16 ] * xx
[ 17 ] ; xx [ 23 ] = xx [ 2 ] * ( xx [ 0 ] - xx [ 3 ] ) ; xx [ 24 ] = ( xx [
20 ] + xx [ 18 ] * xx [ 18 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 25 ] = ( xx [ 21
] + xx [ 22 ] ) * xx [ 2 ] ; xx [ 26 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 27 ] =
xx [ 9 ] * xx [ 10 ] ; xx [ 28 ] = xx [ 2 ] * ( xx [ 5 ] - xx [ 6 ] ) ; xx [
29 ] = ( xx [ 1 ] + xx [ 11 ] * xx [ 11 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 30 ]
= ( xx [ 26 ] + xx [ 27 ] ) * xx [ 2 ] ; xx [ 5 ] = xx [ 17 ] * xx [ 19 ] ;
xx [ 6 ] = xx [ 16 ] * xx [ 18 ] ; xx [ 9 ] = ( xx [ 5 ] + xx [ 6 ] ) * xx [
2 ] ; xx [ 10 ] = xx [ 2 ] * ( xx [ 21 ] - xx [ 22 ] ) ; xx [ 11 ] = ( xx [
20 ] + xx [ 19 ] * xx [ 19 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 31 ] = ( xx [ 7 ]
+ xx [ 8 ] ) * xx [ 2 ] ; xx [ 32 ] = xx [ 2 ] * ( xx [ 26 ] - xx [ 27 ] ) ;
xx [ 33 ] = ( xx [ 1 ] + xx [ 12 ] * xx [ 12 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [
34 ] = ( xx [ 20 ] + xx [ 17 ] * xx [ 17 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 35
] = ( xx [ 0 ] + xx [ 3 ] ) * xx [ 2 ] ; xx [ 36 ] = xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) ; xx [ 0 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) )
; xx [ 1 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 28 , xx + 9 ) ) ; xx [ 2 ]
= fabs ( pm_math_Vector3_dot_ra ( xx + 31 , xx + 34 ) ) ; ii [ 0 ] = 0 ; {
int ll ; for ( ll = 1 ; ll < 3 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] )
ii [ 0 ] = ll ; } ii [ 0 ] -= 0 ; xx [ 3 ] = xx [ 0 + ( ii [ 0 ] ) ] ; return
xx [ 3 ] > 1.0e-9 ; } boolean_T pp_43e6ab1_1_isVelocityViolation ( const void
* mech , const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags
, const double * state , const int * modeVector ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 1 ] ; double xx [ 71 ] ; ( void ) mech ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 2.0 ; xx [
1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 10 ] ; xx [ 3 ] = sin ( xx [ 2 ] )
; xx [ 4 ] = 0.7071067811865476 ; xx [ 5 ] = xx [ 1 ] * state [ 6 ] ; xx [ 6
] = xx [ 4 ] * sin ( xx [ 5 ] ) ; xx [ 7 ] = xx [ 4 ] * cos ( xx [ 5 ] ) ; xx
[ 5 ] = xx [ 6 ] + xx [ 7 ] ; xx [ 8 ] = xx [ 1 ] * state [ 4 ] ; xx [ 9 ] =
xx [ 4 ] * sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 4 ] * cos ( xx [ 8 ] ) ; xx [
8 ] = xx [ 9 ] + xx [ 10 ] ; xx [ 11 ] = xx [ 1 ] * state [ 0 ] ; xx [ 12 ] =
cos ( xx [ 11 ] ) ; xx [ 13 ] = xx [ 1 ] * state [ 2 ] ; xx [ 14 ] = sin ( xx
[ 13 ] ) ; xx [ 15 ] = xx [ 12 ] * xx [ 14 ] ; xx [ 16 ] = cos ( xx [ 13 ] )
; xx [ 13 ] = xx [ 12 ] * xx [ 16 ] ; xx [ 12 ] = xx [ 9 ] - xx [ 10 ] ; xx [
9 ] = xx [ 8 ] * xx [ 15 ] + xx [ 13 ] * xx [ 12 ] ; xx [ 10 ] = xx [ 15 ] *
xx [ 12 ] - xx [ 8 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 6 ] - xx [ 7 ] ; xx [ 6 ]
= xx [ 5 ] * xx [ 9 ] - xx [ 10 ] * xx [ 13 ] ; xx [ 7 ] = xx [ 1 ] * state [
8 ] ; xx [ 15 ] = xx [ 4 ] * sin ( xx [ 7 ] ) ; xx [ 17 ] = xx [ 4 ] * cos (
xx [ 7 ] ) ; xx [ 7 ] = xx [ 15 ] - xx [ 17 ] ; xx [ 18 ] = xx [ 15 ] + xx [
17 ] ; xx [ 15 ] = sin ( xx [ 11 ] ) ; xx [ 11 ] = xx [ 15 ] * xx [ 14 ] ; xx
[ 17 ] = xx [ 16 ] * xx [ 15 ] ; xx [ 15 ] = xx [ 11 ] * xx [ 12 ] - xx [ 8 ]
* xx [ 17 ] ; xx [ 19 ] = xx [ 8 ] * xx [ 11 ] + xx [ 17 ] * xx [ 12 ] ; xx [
11 ] = xx [ 15 ] * xx [ 13 ] - xx [ 5 ] * xx [ 19 ] ; xx [ 17 ] = xx [ 6 ] *
xx [ 7 ] + xx [ 18 ] * xx [ 11 ] ; xx [ 20 ] = cos ( xx [ 2 ] ) ; xx [ 2 ] =
xx [ 9 ] * xx [ 13 ] + xx [ 10 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 19 ] * xx [ 13
] + xx [ 15 ] * xx [ 5 ] ; xx [ 10 ] = xx [ 2 ] * xx [ 7 ] + xx [ 9 ] * xx [
18 ] ; xx [ 15 ] = xx [ 2 ] * xx [ 18 ] - xx [ 9 ] * xx [ 7 ] ; xx [ 2 ] = xx
[ 11 ] * xx [ 7 ] - xx [ 18 ] * xx [ 6 ] ; xx [ 21 ] = xx [ 3 ] * xx [ 17 ] +
xx [ 20 ] * xx [ 10 ] ; xx [ 22 ] = xx [ 15 ] * xx [ 3 ] - xx [ 2 ] * xx [ 20
] ; xx [ 23 ] = - ( xx [ 20 ] * xx [ 17 ] - xx [ 3 ] * xx [ 10 ] ) ; xx [ 24
] = - ( xx [ 15 ] * xx [ 20 ] + xx [ 2 ] * xx [ 3 ] ) ; xx [ 2 ] = xx [ 1 ] *
state [ 14 ] ; xx [ 6 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 1 ] * state [ 13
] ; xx [ 10 ] = cos ( xx [ 9 ] ) ; xx [ 11 ] = xx [ 1 ] * state [ 12 ] ; xx [
15 ] = xx [ 4 ] * sin ( xx [ 11 ] ) ; xx [ 17 ] = xx [ 10 ] * xx [ 15 ] ; xx
[ 19 ] = xx [ 4 ] * cos ( xx [ 11 ] ) ; xx [ 11 ] = sin ( xx [ 9 ] ) ; xx [ 9
] = xx [ 19 ] * xx [ 11 ] ; xx [ 25 ] = xx [ 17 ] - xx [ 9 ] ; xx [ 26 ] = xx
[ 17 ] + xx [ 9 ] ; xx [ 9 ] = cos ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 6 ] * xx [
25 ] - xx [ 26 ] * xx [ 9 ] ; xx [ 17 ] = xx [ 15 ] * xx [ 11 ] ; xx [ 11 ] =
xx [ 10 ] * xx [ 19 ] ; xx [ 10 ] = xx [ 17 ] - xx [ 11 ] ; xx [ 15 ] = xx [
11 ] + xx [ 17 ] ; xx [ 11 ] = xx [ 6 ] * xx [ 10 ] - xx [ 15 ] * xx [ 9 ] ;
xx [ 17 ] = xx [ 9 ] * xx [ 10 ] + xx [ 15 ] * xx [ 6 ] ; xx [ 10 ] = xx [ 9
] * xx [ 25 ] + xx [ 26 ] * xx [ 6 ] ; xx [ 25 ] = - xx [ 2 ] ; xx [ 26 ] =
xx [ 11 ] ; xx [ 27 ] = xx [ 17 ] ; xx [ 28 ] = xx [ 10 ] ;
pm_math_Quaternion_compose_ra ( xx + 21 , xx + 25 , xx + 29 ) ; xx [ 15 ] =
xx [ 14 ] * state [ 1 ] ; xx [ 19 ] = xx [ 0 ] * xx [ 16 ] * xx [ 15 ] ; xx [
16 ] = xx [ 8 ] * xx [ 19 ] ; xx [ 21 ] = state [ 1 ] - xx [ 0 ] * xx [ 15 ]
* xx [ 14 ] ; xx [ 14 ] = xx [ 8 ] * xx [ 21 ] ; xx [ 15 ] = xx [ 0 ] * ( xx
[ 8 ] * xx [ 16 ] + xx [ 14 ] * xx [ 12 ] ) - xx [ 19 ] ; xx [ 19 ] = xx [ 5
] * xx [ 15 ] ; xx [ 22 ] = xx [ 21 ] - ( xx [ 8 ] * xx [ 14 ] - xx [ 16 ] *
xx [ 12 ] ) * xx [ 0 ] ; xx [ 8 ] = xx [ 5 ] * xx [ 22 ] ; xx [ 12 ] = xx [
15 ] - ( xx [ 5 ] * xx [ 19 ] - xx [ 8 ] * xx [ 13 ] ) * xx [ 0 ] ; xx [ 14 ]
= state [ 3 ] + state [ 5 ] + state [ 7 ] ; xx [ 15 ] = xx [ 14 ] * xx [ 18 ]
; xx [ 16 ] = xx [ 18 ] * xx [ 12 ] ; xx [ 21 ] = xx [ 12 ] - xx [ 0 ] * ( xx
[ 15 ] * xx [ 7 ] + xx [ 18 ] * xx [ 16 ] ) ; xx [ 12 ] = xx [ 22 ] - xx [ 0
] * ( xx [ 19 ] * xx [ 13 ] + xx [ 5 ] * xx [ 8 ] ) + state [ 9 ] ; xx [ 5 ]
= xx [ 12 ] * xx [ 3 ] ; xx [ 8 ] = xx [ 21 ] * xx [ 3 ] ; xx [ 22 ] = xx [
21 ] - ( xx [ 20 ] * xx [ 5 ] + xx [ 8 ] * xx [ 3 ] ) * xx [ 0 ] ; xx [ 23 ]
= xx [ 14 ] - ( xx [ 18 ] * xx [ 15 ] - xx [ 16 ] * xx [ 7 ] ) * xx [ 0 ] +
state [ 11 ] ; xx [ 24 ] = xx [ 12 ] + xx [ 0 ] * ( xx [ 20 ] * xx [ 8 ] - xx
[ 5 ] * xx [ 3 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 22 ,
xx + 12 ) ; xx [ 3 ] = 1.0 ; xx [ 5 ] = xx [ 13 ] + ( xx [ 3 ] - ( xx [ 10 ]
* xx [ 10 ] + xx [ 11 ] * xx [ 11 ] ) * xx [ 0 ] ) * state [ 15 ] + ( xx [ 3
] - xx [ 0 ] * xx [ 6 ] * xx [ 6 ] ) * state [ 16 ] ; xx [ 7 ] = xx [ 5 ] *
xx [ 31 ] ; xx [ 8 ] = xx [ 14 ] + xx [ 0 ] * ( xx [ 11 ] * xx [ 2 ] + xx [
17 ] * xx [ 10 ] ) * state [ 15 ] + state [ 17 ] ; xx [ 15 ] = xx [ 8 ] * xx
[ 32 ] ; xx [ 16 ] = xx [ 7 ] + xx [ 15 ] ; xx [ 18 ] = xx [ 5 ] * xx [ 30 ]
; xx [ 19 ] = xx [ 8 ] * xx [ 30 ] ; xx [ 20 ] = - xx [ 16 ] ; xx [ 21 ] = xx
[ 18 ] ; xx [ 22 ] = xx [ 19 ] ; pm_math_Vector3_cross_ra ( xx + 30 , xx + 20
, xx + 23 ) ; xx [ 20 ] = xx [ 0 ] * ( xx [ 23 ] - xx [ 16 ] * xx [ 29 ] ) ;
xx [ 21 ] = xx [ 8 ] + ( xx [ 29 ] * xx [ 18 ] + xx [ 24 ] ) * xx [ 0 ] ; xx
[ 22 ] = ( xx [ 29 ] * xx [ 19 ] + xx [ 25 ] ) * xx [ 0 ] - xx [ 5 ] ; xx [
16 ] = xx [ 1 ] * state [ 34 ] ; xx [ 18 ] = sin ( xx [ 16 ] ) ; xx [ 19 ] =
xx [ 1 ] * state [ 24 ] ; xx [ 23 ] = sin ( xx [ 19 ] ) ; xx [ 24 ] = xx [ 1
] * state [ 26 ] ; xx [ 25 ] = sin ( xx [ 24 ] ) ; xx [ 26 ] = xx [ 23 ] * xx
[ 25 ] ; xx [ 27 ] = xx [ 1 ] * state [ 28 ] ; xx [ 28 ] = xx [ 4 ] * sin (
xx [ 27 ] ) ; xx [ 33 ] = xx [ 4 ] * cos ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 28
] - xx [ 33 ] ; xx [ 34 ] = xx [ 28 ] + xx [ 33 ] ; xx [ 28 ] = cos ( xx [ 24
] ) ; xx [ 24 ] = xx [ 28 ] * xx [ 23 ] ; xx [ 23 ] = xx [ 26 ] * xx [ 27 ] -
xx [ 34 ] * xx [ 24 ] ; xx [ 33 ] = xx [ 1 ] * state [ 30 ] ; xx [ 35 ] = xx
[ 4 ] * sin ( xx [ 33 ] ) ; xx [ 36 ] = xx [ 4 ] * cos ( xx [ 33 ] ) ; xx [
33 ] = xx [ 35 ] - xx [ 36 ] ; xx [ 37 ] = xx [ 35 ] + xx [ 36 ] ; xx [ 35 ]
= xx [ 24 ] * xx [ 27 ] + xx [ 34 ] * xx [ 26 ] ; xx [ 24 ] = xx [ 23 ] * xx
[ 33 ] - xx [ 37 ] * xx [ 35 ] ; xx [ 26 ] = xx [ 1 ] * state [ 32 ] ; xx [
36 ] = xx [ 4 ] * sin ( xx [ 26 ] ) ; xx [ 38 ] = xx [ 4 ] * cos ( xx [ 26 ]
) ; xx [ 26 ] = xx [ 36 ] - xx [ 38 ] ; xx [ 39 ] = xx [ 36 ] + xx [ 38 ] ;
xx [ 36 ] = cos ( xx [ 19 ] ) ; xx [ 19 ] = xx [ 36 ] * xx [ 25 ] ; xx [ 38 ]
= xx [ 36 ] * xx [ 28 ] ; xx [ 36 ] = xx [ 19 ] * xx [ 27 ] - xx [ 34 ] * xx
[ 38 ] ; xx [ 40 ] = xx [ 34 ] * xx [ 19 ] + xx [ 38 ] * xx [ 27 ] ; xx [ 19
] = xx [ 36 ] * xx [ 33 ] - xx [ 37 ] * xx [ 40 ] ; xx [ 38 ] = xx [ 24 ] *
xx [ 26 ] + xx [ 39 ] * xx [ 19 ] ; xx [ 41 ] = cos ( xx [ 16 ] ) ; xx [ 16 ]
= xx [ 35 ] * xx [ 33 ] + xx [ 23 ] * xx [ 37 ] ; xx [ 23 ] = xx [ 40 ] * xx
[ 33 ] + xx [ 36 ] * xx [ 37 ] ; xx [ 35 ] = xx [ 16 ] * xx [ 26 ] - xx [ 23
] * xx [ 39 ] ; xx [ 36 ] = xx [ 39 ] * xx [ 16 ] + xx [ 23 ] * xx [ 26 ] ;
xx [ 16 ] = xx [ 19 ] * xx [ 26 ] - xx [ 24 ] * xx [ 39 ] ; xx [ 42 ] = xx [
18 ] * xx [ 38 ] - xx [ 41 ] * xx [ 35 ] ; xx [ 43 ] = - ( xx [ 36 ] * xx [
18 ] + xx [ 16 ] * xx [ 41 ] ) ; xx [ 44 ] = - ( xx [ 18 ] * xx [ 35 ] + xx [
41 ] * xx [ 38 ] ) ; xx [ 45 ] = - ( xx [ 16 ] * xx [ 18 ] - xx [ 36 ] * xx [
41 ] ) ; xx [ 16 ] = xx [ 1 ] * state [ 38 ] ; xx [ 19 ] = cos ( xx [ 16 ] )
; xx [ 23 ] = xx [ 1 ] * state [ 37 ] ; xx [ 24 ] = cos ( xx [ 23 ] ) ; xx [
35 ] = xx [ 1 ] * state [ 36 ] ; xx [ 1 ] = xx [ 4 ] * sin ( xx [ 35 ] ) ; xx
[ 36 ] = xx [ 24 ] * xx [ 1 ] ; xx [ 38 ] = xx [ 4 ] * cos ( xx [ 35 ] ) ; xx
[ 4 ] = sin ( xx [ 23 ] ) ; xx [ 23 ] = xx [ 38 ] * xx [ 4 ] ; xx [ 35 ] = xx
[ 36 ] - xx [ 23 ] ; xx [ 40 ] = xx [ 36 ] + xx [ 23 ] ; xx [ 23 ] = sin ( xx
[ 16 ] ) ; xx [ 16 ] = xx [ 19 ] * xx [ 35 ] + xx [ 40 ] * xx [ 23 ] ; xx [
36 ] = xx [ 1 ] * xx [ 4 ] ; xx [ 1 ] = xx [ 24 ] * xx [ 38 ] ; xx [ 4 ] = xx
[ 36 ] - xx [ 1 ] ; xx [ 24 ] = xx [ 36 ] + xx [ 1 ] ; xx [ 1 ] = xx [ 19 ] *
xx [ 4 ] + xx [ 24 ] * xx [ 23 ] ; xx [ 36 ] = xx [ 24 ] * xx [ 19 ] - xx [
23 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 23 ] * xx [ 35 ] - xx [ 40 ] * xx [ 19 ] ;
xx [ 46 ] = xx [ 16 ] ; xx [ 47 ] = xx [ 1 ] ; xx [ 48 ] = xx [ 36 ] ; xx [
49 ] = xx [ 4 ] ; pm_math_Quaternion_compose_ra ( xx + 42 , xx + 46 , xx + 50
) ; xx [ 24 ] = xx [ 51 ] * xx [ 52 ] ; xx [ 35 ] = xx [ 50 ] * xx [ 53 ] ;
xx [ 38 ] = xx [ 50 ] * xx [ 50 ] ; xx [ 40 ] = xx [ 52 ] * xx [ 53 ] ; xx [
42 ] = xx [ 50 ] * xx [ 51 ] ; xx [ 43 ] = xx [ 0 ] * ( xx [ 24 ] - xx [ 35 ]
) ; xx [ 44 ] = ( xx [ 38 ] + xx [ 52 ] * xx [ 52 ] ) * xx [ 0 ] - xx [ 3 ] ;
xx [ 45 ] = ( xx [ 40 ] + xx [ 42 ] ) * xx [ 0 ] ; xx [ 54 ] = xx [ 29 ] * xx
[ 29 ] ; xx [ 55 ] = xx [ 30 ] * xx [ 31 ] ; xx [ 56 ] = xx [ 29 ] * xx [ 32
] ; xx [ 57 ] = xx [ 30 ] * xx [ 32 ] ; xx [ 58 ] = xx [ 29 ] * xx [ 31 ] ;
xx [ 59 ] = ( xx [ 54 ] + xx [ 30 ] * xx [ 30 ] ) * xx [ 0 ] - xx [ 3 ] ; xx
[ 60 ] = ( xx [ 55 ] + xx [ 56 ] ) * xx [ 0 ] ; xx [ 61 ] = xx [ 0 ] * ( xx [
57 ] - xx [ 58 ] ) ; xx [ 62 ] = xx [ 25 ] * state [ 25 ] ; xx [ 63 ] = xx [
0 ] * xx [ 28 ] * xx [ 62 ] ; xx [ 28 ] = xx [ 34 ] * xx [ 63 ] ; xx [ 64 ] =
state [ 25 ] - xx [ 0 ] * xx [ 62 ] * xx [ 25 ] ; xx [ 25 ] = xx [ 34 ] * xx
[ 64 ] ; xx [ 62 ] = xx [ 0 ] * ( xx [ 34 ] * xx [ 28 ] + xx [ 25 ] * xx [ 27
] ) - xx [ 63 ] ; xx [ 63 ] = xx [ 37 ] * xx [ 62 ] ; xx [ 65 ] = xx [ 64 ] -
( xx [ 34 ] * xx [ 25 ] - xx [ 28 ] * xx [ 27 ] ) * xx [ 0 ] ; xx [ 25 ] = xx
[ 37 ] * xx [ 65 ] ; xx [ 27 ] = xx [ 62 ] - ( xx [ 37 ] * xx [ 63 ] - xx [
25 ] * xx [ 33 ] ) * xx [ 0 ] ; xx [ 28 ] = state [ 27 ] + state [ 29 ] +
state [ 31 ] ; xx [ 34 ] = xx [ 28 ] * xx [ 39 ] ; xx [ 62 ] = xx [ 39 ] * xx
[ 27 ] ; xx [ 64 ] = xx [ 27 ] - xx [ 0 ] * ( xx [ 34 ] * xx [ 26 ] + xx [ 39
] * xx [ 62 ] ) ; xx [ 27 ] = xx [ 65 ] - xx [ 0 ] * ( xx [ 63 ] * xx [ 33 ]
+ xx [ 37 ] * xx [ 25 ] ) + state [ 33 ] ; xx [ 25 ] = xx [ 27 ] * xx [ 18 ]
; xx [ 33 ] = xx [ 64 ] * xx [ 18 ] ; xx [ 65 ] = xx [ 64 ] - ( xx [ 41 ] *
xx [ 25 ] + xx [ 33 ] * xx [ 18 ] ) * xx [ 0 ] ; xx [ 66 ] = xx [ 28 ] - ( xx
[ 39 ] * xx [ 34 ] - xx [ 62 ] * xx [ 26 ] ) * xx [ 0 ] + state [ 35 ] ; xx [
67 ] = xx [ 27 ] + xx [ 0 ] * ( xx [ 41 ] * xx [ 33 ] - xx [ 25 ] * xx [ 18 ]
) ; pm_math_Quaternion_inverseXform_ra ( xx + 46 , xx + 65 , xx + 25 ) ; xx [
18 ] = xx [ 25 ] + xx [ 0 ] * xx [ 19 ] * xx [ 23 ] * state [ 40 ] - xx [ 0 ]
* ( xx [ 4 ] * xx [ 16 ] + xx [ 1 ] * xx [ 36 ] ) * state [ 39 ] ; xx [ 19 ]
= xx [ 18 ] * xx [ 52 ] ; xx [ 28 ] = xx [ 27 ] + xx [ 0 ] * ( xx [ 1 ] * xx
[ 16 ] - xx [ 4 ] * xx [ 36 ] ) * state [ 39 ] + state [ 41 ] ; xx [ 16 ] =
xx [ 28 ] * xx [ 53 ] ; xx [ 33 ] = xx [ 18 ] * xx [ 51 ] ; xx [ 34 ] = xx [
16 ] + xx [ 33 ] ; xx [ 36 ] = xx [ 28 ] * xx [ 52 ] ; xx [ 46 ] = xx [ 19 ]
; xx [ 47 ] = - xx [ 34 ] ; xx [ 48 ] = xx [ 36 ] ; pm_math_Vector3_cross_ra
( xx + 51 , xx + 46 , xx + 62 ) ; xx [ 46 ] = ( xx [ 50 ] * xx [ 19 ] + xx [
62 ] ) * xx [ 0 ] - xx [ 28 ] ; xx [ 47 ] = xx [ 0 ] * ( xx [ 63 ] - xx [ 34
] * xx [ 50 ] ) ; xx [ 48 ] = xx [ 18 ] + ( xx [ 50 ] * xx [ 36 ] + xx [ 64 ]
) * xx [ 0 ] ; xx [ 13 ] = xx [ 12 ] + xx [ 0 ] * ( xx [ 11 ] * xx [ 17 ] -
xx [ 2 ] * xx [ 10 ] ) * state [ 15 ] + xx [ 0 ] * xx [ 9 ] * xx [ 6 ] *
state [ 16 ] ; xx [ 2 ] = xx [ 13 ] * xx [ 31 ] ; xx [ 6 ] = xx [ 13 ] * xx [
30 ] ; xx [ 9 ] = xx [ 15 ] + xx [ 6 ] ; xx [ 10 ] = xx [ 8 ] * xx [ 31 ] ;
xx [ 62 ] = xx [ 2 ] ; xx [ 63 ] = - xx [ 9 ] ; xx [ 64 ] = xx [ 10 ] ;
pm_math_Vector3_cross_ra ( xx + 30 , xx + 62 , xx + 65 ) ; xx [ 62 ] = ( xx [
29 ] * xx [ 2 ] + xx [ 65 ] ) * xx [ 0 ] - xx [ 8 ] ; xx [ 63 ] = xx [ 0 ] *
( xx [ 66 ] - xx [ 9 ] * xx [ 29 ] ) ; xx [ 64 ] = xx [ 13 ] + ( xx [ 29 ] *
xx [ 10 ] + xx [ 67 ] ) * xx [ 0 ] ; xx [ 2 ] = xx [ 51 ] * xx [ 53 ] ; xx [
8 ] = xx [ 50 ] * xx [ 52 ] ; xx [ 9 ] = ( xx [ 2 ] + xx [ 8 ] ) * xx [ 0 ] ;
xx [ 10 ] = xx [ 0 ] * ( xx [ 40 ] - xx [ 42 ] ) ; xx [ 11 ] = ( xx [ 38 ] +
xx [ 53 ] * xx [ 53 ] ) * xx [ 0 ] - xx [ 3 ] ; xx [ 12 ] = xx [ 31 ] * xx [
32 ] ; xx [ 14 ] = xx [ 29 ] * xx [ 30 ] ; xx [ 39 ] = xx [ 0 ] * ( xx [ 55 ]
- xx [ 56 ] ) ; xx [ 40 ] = ( xx [ 54 ] + xx [ 31 ] * xx [ 31 ] ) * xx [ 0 ]
- xx [ 3 ] ; xx [ 41 ] = ( xx [ 12 ] + xx [ 14 ] ) * xx [ 0 ] ; xx [ 15 ] =
xx [ 26 ] + ( ( xx [ 4 ] * xx [ 4 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 0 ] - xx [
3 ] ) * state [ 39 ] + ( xx [ 3 ] - xx [ 0 ] * xx [ 23 ] * xx [ 23 ] ) *
state [ 40 ] ; xx [ 1 ] = xx [ 18 ] * xx [ 53 ] ; xx [ 4 ] = xx [ 15 ] * xx [
53 ] ; xx [ 17 ] = xx [ 15 ] * xx [ 52 ] ; xx [ 19 ] = xx [ 33 ] + xx [ 17 ]
; xx [ 25 ] = xx [ 1 ] ; xx [ 26 ] = xx [ 4 ] ; xx [ 27 ] = - xx [ 19 ] ;
pm_math_Vector3_cross_ra ( xx + 51 , xx + 25 , xx + 65 ) ; xx [ 25 ] = xx [
15 ] + ( xx [ 50 ] * xx [ 1 ] + xx [ 65 ] ) * xx [ 0 ] ; xx [ 26 ] = ( xx [
50 ] * xx [ 4 ] + xx [ 66 ] ) * xx [ 0 ] - xx [ 18 ] ; xx [ 27 ] = xx [ 0 ] *
( xx [ 67 ] - xx [ 19 ] * xx [ 50 ] ) ; xx [ 1 ] = xx [ 13 ] * xx [ 32 ] ; xx
[ 4 ] = xx [ 5 ] * xx [ 32 ] ; xx [ 18 ] = xx [ 6 ] + xx [ 7 ] ; xx [ 65 ] =
xx [ 1 ] ; xx [ 66 ] = xx [ 4 ] ; xx [ 67 ] = - xx [ 18 ] ;
pm_math_Vector3_cross_ra ( xx + 30 , xx + 65 , xx + 68 ) ; xx [ 65 ] = xx [ 5
] + ( xx [ 29 ] * xx [ 1 ] + xx [ 68 ] ) * xx [ 0 ] ; xx [ 66 ] = ( xx [ 29 ]
* xx [ 4 ] + xx [ 69 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 67 ] = xx [ 0 ] * ( xx
[ 70 ] - xx [ 18 ] * xx [ 29 ] ) ; xx [ 4 ] = ( xx [ 38 ] + xx [ 51 ] * xx [
51 ] ) * xx [ 0 ] - xx [ 3 ] ; xx [ 5 ] = ( xx [ 24 ] + xx [ 35 ] ) * xx [ 0
] ; xx [ 6 ] = xx [ 0 ] * ( xx [ 2 ] - xx [ 8 ] ) ; xx [ 29 ] = ( xx [ 57 ] +
xx [ 58 ] ) * xx [ 0 ] ; xx [ 30 ] = xx [ 0 ] * ( xx [ 12 ] - xx [ 14 ] ) ;
xx [ 31 ] = ( xx [ 54 ] + xx [ 32 ] * xx [ 32 ] ) * xx [ 0 ] - xx [ 3 ] ; xx
[ 1 ] = xx [ 17 ] + xx [ 16 ] ; xx [ 2 ] = xx [ 15 ] * xx [ 51 ] ; xx [ 3 ] =
xx [ 28 ] * xx [ 51 ] ; xx [ 12 ] = - xx [ 1 ] ; xx [ 13 ] = xx [ 2 ] ; xx [
14 ] = xx [ 3 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 12 , xx + 16 ) ;
xx [ 12 ] = xx [ 0 ] * ( xx [ 16 ] - xx [ 1 ] * xx [ 50 ] ) ; xx [ 13 ] = xx
[ 28 ] + ( xx [ 50 ] * xx [ 2 ] + xx [ 17 ] ) * xx [ 0 ] ; xx [ 14 ] = ( xx [
50 ] * xx [ 3 ] + xx [ 18 ] ) * xx [ 0 ] - xx [ 15 ] ; xx [ 0 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 20 , xx + 43 ) + pm_math_Vector3_dot_ra ( xx +
59 , xx + 46 ) ) ; xx [ 1 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 62 , xx +
9 ) + pm_math_Vector3_dot_ra ( xx + 39 , xx + 25 ) ) ; xx [ 2 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 65 , xx + 4 ) + pm_math_Vector3_dot_ra ( xx +
29 , xx + 12 ) ) ; ii [ 0 ] = 0 ; { int ll ; for ( ll = 1 ; ll < 3 ; ++ ll )
if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 0 ; xx [ 3 ]
= xx [ 0 + ( ii [ 0 ] ) ] ; return xx [ 3 ] > 1.0e-9 ; } PmfMessageId
pp_43e6ab1_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , double * state , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
int ii [ 4 ] ; double xx [ 244 ] ; ( void ) mech ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) neDiagMgr ;
xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 10 ] ; xx [ 3
] = sin ( xx [ 2 ] ) ; xx [ 4 ] = 0.7071067811865476 ; xx [ 5 ] = xx [ 1 ] *
state [ 6 ] ; xx [ 6 ] = xx [ 4 ] * sin ( xx [ 5 ] ) ; xx [ 7 ] = xx [ 4 ] *
cos ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 6 ] + xx [ 7 ] ; xx [ 8 ] = xx [ 1 ] *
state [ 4 ] ; xx [ 9 ] = xx [ 4 ] * sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 4 ] *
cos ( xx [ 8 ] ) ; xx [ 8 ] = xx [ 9 ] + xx [ 10 ] ; xx [ 11 ] = xx [ 1 ] *
state [ 0 ] ; xx [ 12 ] = cos ( xx [ 11 ] ) ; xx [ 13 ] = xx [ 1 ] * state [
2 ] ; xx [ 14 ] = sin ( xx [ 13 ] ) ; xx [ 15 ] = xx [ 12 ] * xx [ 14 ] ; xx
[ 16 ] = cos ( xx [ 13 ] ) ; xx [ 13 ] = xx [ 12 ] * xx [ 16 ] ; xx [ 12 ] =
xx [ 9 ] - xx [ 10 ] ; xx [ 9 ] = xx [ 8 ] * xx [ 15 ] + xx [ 13 ] * xx [ 12
] ; xx [ 10 ] = xx [ 15 ] * xx [ 12 ] - xx [ 8 ] * xx [ 13 ] ; xx [ 13 ] = xx
[ 6 ] - xx [ 7 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 9 ] - xx [ 10 ] * xx [ 13 ] ;
xx [ 7 ] = xx [ 1 ] * state [ 8 ] ; xx [ 15 ] = xx [ 4 ] * sin ( xx [ 7 ] ) ;
xx [ 17 ] = xx [ 4 ] * cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 15 ] - xx [ 17 ] ;
xx [ 18 ] = xx [ 15 ] + xx [ 17 ] ; xx [ 15 ] = sin ( xx [ 11 ] ) ; xx [ 11 ]
= xx [ 15 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 16 ] * xx [ 15 ] ; xx [ 15 ] = xx
[ 11 ] * xx [ 12 ] - xx [ 8 ] * xx [ 14 ] ; xx [ 16 ] = xx [ 8 ] * xx [ 11 ]
+ xx [ 14 ] * xx [ 12 ] ; xx [ 8 ] = xx [ 15 ] * xx [ 13 ] - xx [ 5 ] * xx [
16 ] ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] + xx [ 18 ] * xx [ 8 ] ; xx [ 12 ] =
cos ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 9 ] * xx [ 13 ] + xx [ 10 ] * xx [ 5 ] ;
xx [ 9 ] = xx [ 16 ] * xx [ 13 ] + xx [ 15 ] * xx [ 5 ] ; xx [ 5 ] = xx [ 2 ]
* xx [ 7 ] + xx [ 9 ] * xx [ 18 ] ; xx [ 10 ] = xx [ 2 ] * xx [ 18 ] - xx [ 9
] * xx [ 7 ] ; xx [ 2 ] = xx [ 8 ] * xx [ 7 ] - xx [ 18 ] * xx [ 6 ] ; xx [ 6
] = xx [ 3 ] * xx [ 11 ] + xx [ 12 ] * xx [ 5 ] ; xx [ 7 ] = xx [ 10 ] * xx [
3 ] - xx [ 2 ] * xx [ 12 ] ; xx [ 8 ] = - ( xx [ 12 ] * xx [ 11 ] - xx [ 3 ]
* xx [ 5 ] ) ; xx [ 9 ] = - ( xx [ 10 ] * xx [ 12 ] + xx [ 2 ] * xx [ 3 ] ) ;
xx [ 2 ] = xx [ 1 ] * state [ 14 ] ; xx [ 3 ] = sin ( xx [ 2 ] ) ; xx [ 5 ] =
xx [ 1 ] * state [ 13 ] ; xx [ 10 ] = cos ( xx [ 5 ] ) ; xx [ 11 ] = xx [ 1 ]
* state [ 12 ] ; xx [ 12 ] = xx [ 4 ] * sin ( xx [ 11 ] ) ; xx [ 13 ] = xx [
10 ] * xx [ 12 ] ; xx [ 14 ] = xx [ 4 ] * cos ( xx [ 11 ] ) ; xx [ 11 ] = sin
( xx [ 5 ] ) ; xx [ 5 ] = xx [ 14 ] * xx [ 11 ] ; xx [ 15 ] = xx [ 13 ] - xx
[ 5 ] ; xx [ 16 ] = xx [ 13 ] + xx [ 5 ] ; xx [ 5 ] = cos ( xx [ 2 ] ) ; xx [
2 ] = xx [ 3 ] * xx [ 15 ] - xx [ 16 ] * xx [ 5 ] ; xx [ 13 ] = xx [ 12 ] *
xx [ 11 ] ; xx [ 11 ] = xx [ 10 ] * xx [ 14 ] ; xx [ 10 ] = xx [ 13 ] - xx [
11 ] ; xx [ 12 ] = xx [ 11 ] + xx [ 13 ] ; xx [ 11 ] = xx [ 3 ] * xx [ 10 ] -
xx [ 12 ] * xx [ 5 ] ; xx [ 13 ] = xx [ 5 ] * xx [ 10 ] + xx [ 12 ] * xx [ 3
] ; xx [ 10 ] = xx [ 5 ] * xx [ 15 ] + xx [ 16 ] * xx [ 3 ] ; xx [ 14 ] = -
xx [ 2 ] ; xx [ 15 ] = xx [ 11 ] ; xx [ 16 ] = xx [ 13 ] ; xx [ 17 ] = xx [
10 ] ; pm_math_Quaternion_compose_ra ( xx + 6 , xx + 14 , xx + 18 ) ; xx [ 12
] = 1.0 ; xx [ 14 ] = xx [ 12 ] - ( xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [
11 ] ) * xx [ 0 ] ; xx [ 15 ] = xx [ 20 ] * xx [ 14 ] ; xx [ 16 ] = ( xx [ 11
] * xx [ 2 ] + xx [ 13 ] * xx [ 10 ] ) * xx [ 0 ] ; xx [ 17 ] = xx [ 21 ] *
xx [ 16 ] ; xx [ 22 ] = xx [ 15 ] + xx [ 17 ] ; xx [ 23 ] = xx [ 19 ] * xx [
14 ] ; xx [ 24 ] = xx [ 19 ] * xx [ 16 ] ; xx [ 25 ] = - xx [ 22 ] ; xx [ 26
] = xx [ 23 ] ; xx [ 27 ] = xx [ 24 ] ; pm_math_Vector3_cross_ra ( xx + 19 ,
xx + 25 , xx + 28 ) ; xx [ 25 ] = xx [ 0 ] * ( xx [ 28 ] - xx [ 22 ] * xx [
18 ] ) ; xx [ 26 ] = xx [ 16 ] + ( xx [ 18 ] * xx [ 23 ] + xx [ 29 ] ) * xx [
0 ] ; xx [ 27 ] = ( xx [ 18 ] * xx [ 24 ] + xx [ 30 ] ) * xx [ 0 ] - xx [ 14
] ; xx [ 22 ] = xx [ 1 ] * state [ 34 ] ; xx [ 23 ] = sin ( xx [ 22 ] ) ; xx
[ 24 ] = xx [ 1 ] * state [ 24 ] ; xx [ 28 ] = sin ( xx [ 24 ] ) ; xx [ 29 ]
= xx [ 1 ] * state [ 26 ] ; xx [ 30 ] = sin ( xx [ 29 ] ) ; xx [ 31 ] = xx [
28 ] * xx [ 30 ] ; xx [ 32 ] = xx [ 1 ] * state [ 28 ] ; xx [ 33 ] = xx [ 4 ]
* sin ( xx [ 32 ] ) ; xx [ 34 ] = xx [ 4 ] * cos ( xx [ 32 ] ) ; xx [ 32 ] =
xx [ 33 ] - xx [ 34 ] ; xx [ 35 ] = xx [ 33 ] + xx [ 34 ] ; xx [ 33 ] = cos (
xx [ 29 ] ) ; xx [ 29 ] = xx [ 33 ] * xx [ 28 ] ; xx [ 28 ] = xx [ 31 ] * xx
[ 32 ] - xx [ 35 ] * xx [ 29 ] ; xx [ 34 ] = xx [ 1 ] * state [ 30 ] ; xx [
36 ] = xx [ 4 ] * sin ( xx [ 34 ] ) ; xx [ 37 ] = xx [ 4 ] * cos ( xx [ 34 ]
) ; xx [ 34 ] = xx [ 36 ] - xx [ 37 ] ; xx [ 38 ] = xx [ 36 ] + xx [ 37 ] ;
xx [ 36 ] = xx [ 29 ] * xx [ 32 ] + xx [ 35 ] * xx [ 31 ] ; xx [ 29 ] = xx [
28 ] * xx [ 34 ] - xx [ 38 ] * xx [ 36 ] ; xx [ 31 ] = xx [ 1 ] * state [ 32
] ; xx [ 37 ] = xx [ 4 ] * sin ( xx [ 31 ] ) ; xx [ 39 ] = xx [ 4 ] * cos (
xx [ 31 ] ) ; xx [ 31 ] = xx [ 37 ] - xx [ 39 ] ; xx [ 40 ] = xx [ 37 ] + xx
[ 39 ] ; xx [ 37 ] = cos ( xx [ 24 ] ) ; xx [ 24 ] = xx [ 37 ] * xx [ 30 ] ;
xx [ 30 ] = xx [ 37 ] * xx [ 33 ] ; xx [ 33 ] = xx [ 24 ] * xx [ 32 ] - xx [
35 ] * xx [ 30 ] ; xx [ 37 ] = xx [ 35 ] * xx [ 24 ] + xx [ 30 ] * xx [ 32 ]
; xx [ 24 ] = xx [ 33 ] * xx [ 34 ] - xx [ 38 ] * xx [ 37 ] ; xx [ 30 ] = xx
[ 29 ] * xx [ 31 ] + xx [ 40 ] * xx [ 24 ] ; xx [ 32 ] = cos ( xx [ 22 ] ) ;
xx [ 22 ] = xx [ 36 ] * xx [ 34 ] + xx [ 28 ] * xx [ 38 ] ; xx [ 28 ] = xx [
37 ] * xx [ 34 ] + xx [ 33 ] * xx [ 38 ] ; xx [ 33 ] = xx [ 22 ] * xx [ 31 ]
- xx [ 28 ] * xx [ 40 ] ; xx [ 34 ] = xx [ 40 ] * xx [ 22 ] + xx [ 28 ] * xx
[ 31 ] ; xx [ 22 ] = xx [ 24 ] * xx [ 31 ] - xx [ 29 ] * xx [ 40 ] ; xx [ 35
] = xx [ 23 ] * xx [ 30 ] - xx [ 32 ] * xx [ 33 ] ; xx [ 36 ] = - ( xx [ 34 ]
* xx [ 23 ] + xx [ 22 ] * xx [ 32 ] ) ; xx [ 37 ] = - ( xx [ 23 ] * xx [ 33 ]
+ xx [ 32 ] * xx [ 30 ] ) ; xx [ 38 ] = - ( xx [ 22 ] * xx [ 23 ] - xx [ 34 ]
* xx [ 32 ] ) ; xx [ 22 ] = xx [ 1 ] * state [ 38 ] ; xx [ 23 ] = cos ( xx [
22 ] ) ; xx [ 24 ] = xx [ 1 ] * state [ 37 ] ; xx [ 28 ] = cos ( xx [ 24 ] )
; xx [ 29 ] = xx [ 1 ] * state [ 36 ] ; xx [ 30 ] = xx [ 4 ] * sin ( xx [ 29
] ) ; xx [ 31 ] = xx [ 28 ] * xx [ 30 ] ; xx [ 32 ] = xx [ 4 ] * cos ( xx [
29 ] ) ; xx [ 29 ] = sin ( xx [ 24 ] ) ; xx [ 24 ] = xx [ 32 ] * xx [ 29 ] ;
xx [ 33 ] = xx [ 31 ] - xx [ 24 ] ; xx [ 34 ] = xx [ 31 ] + xx [ 24 ] ; xx [
24 ] = sin ( xx [ 22 ] ) ; xx [ 22 ] = xx [ 23 ] * xx [ 33 ] + xx [ 34 ] * xx
[ 24 ] ; xx [ 31 ] = xx [ 30 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 28 ] * xx [ 32
] ; xx [ 28 ] = xx [ 31 ] - xx [ 29 ] ; xx [ 30 ] = xx [ 31 ] + xx [ 29 ] ;
xx [ 29 ] = xx [ 23 ] * xx [ 28 ] + xx [ 30 ] * xx [ 24 ] ; xx [ 31 ] = xx [
30 ] * xx [ 23 ] - xx [ 24 ] * xx [ 28 ] ; xx [ 28 ] = xx [ 24 ] * xx [ 33 ]
- xx [ 34 ] * xx [ 23 ] ; xx [ 39 ] = xx [ 22 ] ; xx [ 40 ] = xx [ 29 ] ; xx
[ 41 ] = xx [ 31 ] ; xx [ 42 ] = xx [ 28 ] ; pm_math_Quaternion_compose_ra (
xx + 35 , xx + 39 , xx + 43 ) ; xx [ 30 ] = xx [ 44 ] * xx [ 45 ] ; xx [ 32 ]
= xx [ 43 ] * xx [ 46 ] ; xx [ 33 ] = xx [ 0 ] * ( xx [ 30 ] - xx [ 32 ] ) ;
xx [ 34 ] = xx [ 43 ] * xx [ 43 ] ; xx [ 39 ] = xx [ 45 ] * xx [ 45 ] ; xx [
40 ] = xx [ 45 ] * xx [ 46 ] ; xx [ 41 ] = xx [ 43 ] * xx [ 44 ] ; xx [ 47 ]
= xx [ 33 ] ; xx [ 48 ] = ( xx [ 34 ] + xx [ 39 ] ) * xx [ 0 ] - xx [ 12 ] ;
xx [ 49 ] = ( xx [ 40 ] + xx [ 41 ] ) * xx [ 0 ] ; xx [ 42 ] = xx [ 12 ] - xx
[ 0 ] * xx [ 3 ] * xx [ 3 ] ; xx [ 50 ] = xx [ 20 ] * xx [ 42 ] ; xx [ 51 ] =
xx [ 19 ] * xx [ 42 ] ; xx [ 52 ] = - ( ( xx [ 18 ] * xx [ 50 ] + xx [ 21 ] *
xx [ 51 ] ) * xx [ 0 ] ) ; xx [ 53 ] = xx [ 0 ] * ( xx [ 18 ] * xx [ 51 ] -
xx [ 21 ] * xx [ 50 ] ) ; xx [ 54 ] = ( xx [ 19 ] * xx [ 51 ] + xx [ 20 ] *
xx [ 50 ] ) * xx [ 0 ] - xx [ 42 ] ; xx [ 51 ] = xx [ 19 ] * xx [ 20 ] ; xx [
55 ] = xx [ 18 ] * xx [ 21 ] ; xx [ 56 ] = xx [ 0 ] * ( xx [ 51 ] - xx [ 55 ]
) ; xx [ 57 ] = xx [ 21 ] * xx [ 21 ] ; xx [ 58 ] = xx [ 19 ] * xx [ 19 ] ;
xx [ 59 ] = xx [ 18 ] * xx [ 19 ] ; xx [ 60 ] = xx [ 20 ] * xx [ 21 ] ; xx [
61 ] = xx [ 56 ] ; xx [ 62 ] = xx [ 12 ] - ( xx [ 57 ] + xx [ 58 ] ) * xx [ 0
] ; xx [ 63 ] = ( xx [ 59 ] + xx [ 60 ] ) * xx [ 0 ] ; xx [ 64 ] = 0.0 ; xx [
65 ] = ( xx [ 28 ] * xx [ 22 ] + xx [ 29 ] * xx [ 31 ] ) * xx [ 0 ] ; xx [ 66
] = xx [ 45 ] * xx [ 65 ] ; xx [ 67 ] = xx [ 44 ] * xx [ 65 ] ; xx [ 68 ] =
xx [ 0 ] * ( xx [ 29 ] * xx [ 22 ] - xx [ 28 ] * xx [ 31 ] ) ; xx [ 22 ] = xx
[ 46 ] * xx [ 68 ] ; xx [ 31 ] = xx [ 67 ] - xx [ 22 ] ; xx [ 69 ] = xx [ 45
] * xx [ 68 ] ; xx [ 70 ] = - xx [ 66 ] ; xx [ 71 ] = xx [ 31 ] ; xx [ 72 ] =
xx [ 69 ] ; pm_math_Vector3_cross_ra ( xx + 44 , xx + 70 , xx + 73 ) ; xx [
70 ] = xx [ 0 ] * ( xx [ 73 ] - xx [ 43 ] * xx [ 66 ] ) - xx [ 68 ] ; xx [ 71
] = ( xx [ 43 ] * xx [ 31 ] + xx [ 74 ] ) * xx [ 0 ] ; xx [ 72 ] = ( xx [ 43
] * xx [ 69 ] + xx [ 75 ] ) * xx [ 0 ] - xx [ 65 ] ; xx [ 31 ] = xx [ 18 ] *
xx [ 18 ] ; xx [ 66 ] = xx [ 19 ] * xx [ 21 ] ; xx [ 69 ] = xx [ 18 ] * xx [
20 ] ; xx [ 73 ] = ( xx [ 31 ] + xx [ 58 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 74
] = ( xx [ 51 ] + xx [ 55 ] ) * xx [ 0 ] ; xx [ 75 ] = xx [ 0 ] * ( xx [ 66 ]
- xx [ 69 ] ) ; xx [ 58 ] = xx [ 0 ] * xx [ 23 ] * xx [ 24 ] ; xx [ 23 ] = xx
[ 45 ] * xx [ 58 ] ; xx [ 76 ] = xx [ 44 ] * xx [ 58 ] ; xx [ 77 ] = ( xx [
43 ] * xx [ 23 ] + xx [ 46 ] * xx [ 76 ] ) * xx [ 0 ] ; xx [ 78 ] = xx [ 0 ]
* ( xx [ 46 ] * xx [ 23 ] - xx [ 43 ] * xx [ 76 ] ) ; xx [ 79 ] = xx [ 58 ] -
( xx [ 44 ] * xx [ 76 ] + xx [ 45 ] * xx [ 23 ] ) * xx [ 0 ] ; xx [ 23 ] = xx
[ 46 ] * xx [ 46 ] ; xx [ 80 ] = xx [ 43 ] * xx [ 45 ] ; xx [ 81 ] = xx [ 44
] * xx [ 46 ] ; xx [ 82 ] = ( xx [ 39 ] + xx [ 23 ] ) * xx [ 0 ] - xx [ 12 ]
; xx [ 83 ] = - ( ( xx [ 32 ] + xx [ 30 ] ) * xx [ 0 ] ) ; xx [ 84 ] = xx [ 0
] * ( xx [ 80 ] - xx [ 81 ] ) ; xx [ 39 ] = xx [ 0 ] * ( xx [ 11 ] * xx [ 13
] - xx [ 2 ] * xx [ 10 ] ) ; xx [ 2 ] = xx [ 20 ] * xx [ 39 ] ; xx [ 10 ] =
xx [ 19 ] * xx [ 39 ] ; xx [ 11 ] = xx [ 17 ] + xx [ 10 ] ; xx [ 13 ] = xx [
20 ] * xx [ 16 ] ; xx [ 85 ] = xx [ 2 ] ; xx [ 86 ] = - xx [ 11 ] ; xx [ 87 ]
= xx [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 19 , xx + 85 , xx + 88 ) ; xx [
85 ] = ( xx [ 18 ] * xx [ 2 ] + xx [ 88 ] ) * xx [ 0 ] - xx [ 16 ] ; xx [ 86
] = xx [ 0 ] * ( xx [ 89 ] - xx [ 11 ] * xx [ 18 ] ) ; xx [ 87 ] = xx [ 39 ]
+ ( xx [ 18 ] * xx [ 13 ] + xx [ 90 ] ) * xx [ 0 ] ; xx [ 88 ] = ( xx [ 81 ]
+ xx [ 80 ] ) * xx [ 0 ] ; xx [ 89 ] = xx [ 0 ] * ( xx [ 40 ] - xx [ 41 ] ) ;
xx [ 90 ] = ( xx [ 34 ] + xx [ 23 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 2 ] = xx
[ 0 ] * xx [ 5 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 20 ] * xx [ 2 ] ; xx [ 5 ] = xx
[ 19 ] * xx [ 2 ] ; xx [ 91 ] = ( xx [ 18 ] * xx [ 3 ] + xx [ 21 ] * xx [ 5 ]
) * xx [ 0 ] ; xx [ 92 ] = xx [ 0 ] * ( xx [ 21 ] * xx [ 3 ] - xx [ 18 ] * xx
[ 5 ] ) ; xx [ 93 ] = xx [ 2 ] - ( xx [ 19 ] * xx [ 5 ] + xx [ 20 ] * xx [ 3
] ) * xx [ 0 ] ; xx [ 3 ] = xx [ 20 ] * xx [ 20 ] ; xx [ 94 ] = ( xx [ 3 ] +
xx [ 57 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 95 ] = - ( ( xx [ 55 ] + xx [ 51 ]
) * xx [ 0 ] ) ; xx [ 96 ] = xx [ 0 ] * ( xx [ 69 ] - xx [ 66 ] ) ; xx [ 11 ]
= ( xx [ 28 ] * xx [ 28 ] + xx [ 29 ] * xx [ 29 ] ) * xx [ 0 ] - xx [ 12 ] ;
xx [ 13 ] = xx [ 46 ] * xx [ 65 ] ; xx [ 16 ] = xx [ 11 ] * xx [ 46 ] ; xx [
17 ] = xx [ 11 ] * xx [ 45 ] ; xx [ 28 ] = xx [ 67 ] - xx [ 17 ] ; xx [ 97 ]
= - xx [ 13 ] ; xx [ 98 ] = xx [ 16 ] ; xx [ 99 ] = xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 97 , xx + 100 ) ; xx [ 97 ] = xx [
11 ] + xx [ 0 ] * ( xx [ 100 ] - xx [ 43 ] * xx [ 13 ] ) ; xx [ 98 ] = xx [
65 ] + ( xx [ 43 ] * xx [ 16 ] + xx [ 101 ] ) * xx [ 0 ] ; xx [ 99 ] = ( xx [
43 ] * xx [ 28 ] + xx [ 102 ] ) * xx [ 0 ] ; xx [ 100 ] = xx [ 56 ] ; xx [
101 ] = ( xx [ 31 ] + xx [ 3 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 102 ] = ( xx [
60 ] + xx [ 59 ] ) * xx [ 0 ] ; xx [ 3 ] = xx [ 12 ] - xx [ 0 ] * xx [ 24 ] *
xx [ 24 ] ; xx [ 13 ] = xx [ 46 ] * xx [ 58 ] ; xx [ 16 ] = xx [ 46 ] * xx [
3 ] ; xx [ 24 ] = xx [ 45 ] * xx [ 3 ] ; xx [ 28 ] = xx [ 76 ] + xx [ 24 ] ;
xx [ 103 ] = xx [ 13 ] ; xx [ 104 ] = xx [ 16 ] ; xx [ 105 ] = - xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 44 , xx + 103 , xx + 106 ) ; xx [ 103 ] = xx
[ 3 ] + ( xx [ 43 ] * xx [ 13 ] + xx [ 106 ] ) * xx [ 0 ] ; xx [ 104 ] = ( xx
[ 43 ] * xx [ 16 ] + xx [ 107 ] ) * xx [ 0 ] - xx [ 58 ] ; xx [ 105 ] = xx [
0 ] * ( xx [ 108 ] - xx [ 28 ] * xx [ 43 ] ) ; xx [ 13 ] = xx [ 21 ] * xx [
39 ] ; xx [ 16 ] = xx [ 21 ] * xx [ 14 ] ; xx [ 28 ] = xx [ 10 ] + xx [ 15 ]
; xx [ 106 ] = xx [ 13 ] ; xx [ 107 ] = xx [ 16 ] ; xx [ 108 ] = - xx [ 28 ]
; pm_math_Vector3_cross_ra ( xx + 19 , xx + 106 , xx + 109 ) ; xx [ 106 ] =
xx [ 14 ] + ( xx [ 18 ] * xx [ 13 ] + xx [ 109 ] ) * xx [ 0 ] ; xx [ 107 ] =
( xx [ 18 ] * xx [ 16 ] + xx [ 110 ] ) * xx [ 0 ] - xx [ 39 ] ; xx [ 108 ] =
xx [ 0 ] * ( xx [ 111 ] - xx [ 28 ] * xx [ 18 ] ) ; xx [ 10 ] = xx [ 44 ] *
xx [ 44 ] ; xx [ 13 ] = ( xx [ 34 ] + xx [ 10 ] ) * xx [ 0 ] - xx [ 12 ] ; xx
[ 14 ] = ( xx [ 30 ] + xx [ 32 ] ) * xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] * ( xx [
81 ] - xx [ 80 ] ) ; xx [ 16 ] = xx [ 21 ] * xx [ 2 ] ; xx [ 28 ] = xx [ 21 ]
* xx [ 42 ] ; xx [ 29 ] = xx [ 5 ] + xx [ 50 ] ; xx [ 109 ] = xx [ 16 ] ; xx
[ 110 ] = xx [ 28 ] ; xx [ 111 ] = - xx [ 29 ] ; pm_math_Vector3_cross_ra (
xx + 19 , xx + 109 , xx + 112 ) ; xx [ 19 ] = xx [ 42 ] + ( xx [ 18 ] * xx [
16 ] + xx [ 112 ] ) * xx [ 0 ] ; xx [ 20 ] = ( xx [ 18 ] * xx [ 28 ] + xx [
113 ] ) * xx [ 0 ] - xx [ 2 ] ; xx [ 21 ] = xx [ 0 ] * ( xx [ 114 ] - xx [ 29
] * xx [ 18 ] ) ; xx [ 2 ] = xx [ 17 ] + xx [ 22 ] ; xx [ 5 ] = xx [ 11 ] *
xx [ 44 ] ; xx [ 16 ] = xx [ 44 ] * xx [ 68 ] ; xx [ 28 ] = - xx [ 2 ] ; xx [
29 ] = xx [ 5 ] ; xx [ 30 ] = xx [ 16 ] ; pm_math_Vector3_cross_ra ( xx + 44
, xx + 28 , xx + 109 ) ; xx [ 28 ] = xx [ 0 ] * ( xx [ 109 ] - xx [ 2 ] * xx
[ 43 ] ) ; xx [ 29 ] = xx [ 68 ] + ( xx [ 43 ] * xx [ 5 ] + xx [ 110 ] ) * xx
[ 0 ] ; xx [ 30 ] = ( xx [ 43 ] * xx [ 16 ] + xx [ 111 ] ) * xx [ 0 ] - xx [
11 ] ; xx [ 16 ] = ( xx [ 66 ] + xx [ 69 ] ) * xx [ 0 ] ; xx [ 17 ] = xx [ 0
] * ( xx [ 60 ] - xx [ 59 ] ) ; xx [ 18 ] = ( xx [ 31 ] + xx [ 57 ] ) * xx [
0 ] - xx [ 12 ] ; xx [ 2 ] = xx [ 44 ] * xx [ 3 ] ; xx [ 55 ] = - ( ( xx [ 43
] * xx [ 24 ] + xx [ 46 ] * xx [ 2 ] ) * xx [ 0 ] ) ; xx [ 56 ] = xx [ 0 ] *
( xx [ 43 ] * xx [ 2 ] - xx [ 46 ] * xx [ 24 ] ) ; xx [ 57 ] = ( xx [ 44 ] *
xx [ 2 ] + xx [ 45 ] * xx [ 24 ] ) * xx [ 0 ] - xx [ 3 ] ; xx [ 42 ] = xx [
33 ] ; xx [ 43 ] = xx [ 12 ] - ( xx [ 23 ] + xx [ 10 ] ) * xx [ 0 ] ; xx [ 44
] = ( xx [ 41 ] + xx [ 40 ] ) * xx [ 0 ] ; xx [ 109 ] =
pm_math_Vector3_dot_ra ( xx + 25 , xx + 47 ) ; xx [ 110 ] =
pm_math_Vector3_dot_ra ( xx + 52 , xx + 47 ) ; xx [ 111 ] =
pm_math_Vector3_dot_ra ( xx + 61 , xx + 47 ) ; xx [ 112 ] = xx [ 64 ] ; xx [
113 ] = xx [ 64 ] ; xx [ 114 ] = xx [ 64 ] ; xx [ 115 ] =
pm_math_Vector3_dot_ra ( xx + 70 , xx + 73 ) ; xx [ 116 ] =
pm_math_Vector3_dot_ra ( xx + 77 , xx + 73 ) ; xx [ 117 ] =
pm_math_Vector3_dot_ra ( xx + 82 , xx + 73 ) ; xx [ 118 ] =
pm_math_Vector3_dot_ra ( xx + 85 , xx + 88 ) ; xx [ 119 ] =
pm_math_Vector3_dot_ra ( xx + 91 , xx + 88 ) ; xx [ 120 ] =
pm_math_Vector3_dot_ra ( xx + 94 , xx + 88 ) ; xx [ 121 ] = xx [ 64 ] ; xx [
122 ] = xx [ 64 ] ; xx [ 123 ] = xx [ 64 ] ; xx [ 124 ] =
pm_math_Vector3_dot_ra ( xx + 97 , xx + 100 ) ; xx [ 125 ] =
pm_math_Vector3_dot_ra ( xx + 103 , xx + 100 ) ; xx [ 126 ] = xx [ 64 ] ; xx
[ 127 ] = pm_math_Vector3_dot_ra ( xx + 106 , xx + 13 ) ; xx [ 128 ] =
pm_math_Vector3_dot_ra ( xx + 19 , xx + 13 ) ; xx [ 129 ] = xx [ 64 ] ; xx [
130 ] = xx [ 64 ] ; xx [ 131 ] = xx [ 64 ] ; xx [ 132 ] = xx [ 64 ] ; xx [
133 ] = pm_math_Vector3_dot_ra ( xx + 28 , xx + 16 ) ; xx [ 134 ] =
pm_math_Vector3_dot_ra ( xx + 55 , xx + 16 ) ; xx [ 135 ] =
pm_math_Vector3_dot_ra ( xx + 42 , xx + 16 ) ; xx [ 19 ] = -
pm_math_Vector3_dot_ra ( xx + 73 , xx + 47 ) ; xx [ 20 ] = -
pm_math_Vector3_dot_ra ( xx + 100 , xx + 88 ) ; xx [ 21 ] = -
pm_math_Vector3_dot_ra ( xx + 16 , xx + 13 ) ; xx [ 2 ] = 1.0e-8 ; memcpy (
xx + 65 , xx + 109 , 27 * sizeof ( double ) ) ; factorAndSolveWide ( 3 , 9 ,
xx + 65 , xx + 13 , xx + 16 , ii + 0 , xx + 19 , xx [ 2 ] , xx + 22 ) ; xx [
3 ] = state [ 12 ] + xx [ 22 ] ; xx [ 5 ] = state [ 14 ] + xx [ 24 ] ; xx [
10 ] = xx [ 5 ] * xx [ 1 ] ; xx [ 11 ] = sin ( xx [ 10 ] ) ; xx [ 13 ] =
state [ 13 ] + xx [ 23 ] ; xx [ 14 ] = xx [ 13 ] * xx [ 1 ] ; xx [ 15 ] = cos
( xx [ 14 ] ) ; xx [ 16 ] = xx [ 3 ] * xx [ 1 ] ; xx [ 17 ] = xx [ 4 ] * sin
( xx [ 16 ] ) ; xx [ 18 ] = xx [ 15 ] * xx [ 17 ] ; xx [ 19 ] = xx [ 4 ] *
cos ( xx [ 16 ] ) ; xx [ 16 ] = sin ( xx [ 14 ] ) ; xx [ 14 ] = xx [ 19 ] *
xx [ 16 ] ; xx [ 20 ] = xx [ 18 ] - xx [ 14 ] ; xx [ 21 ] = xx [ 18 ] + xx [
14 ] ; xx [ 14 ] = cos ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 11 ] * xx [ 20 ] - xx
[ 21 ] * xx [ 14 ] ; xx [ 18 ] = xx [ 17 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 15
] * xx [ 19 ] ; xx [ 15 ] = xx [ 18 ] - xx [ 16 ] ; xx [ 17 ] = xx [ 16 ] +
xx [ 18 ] ; xx [ 16 ] = xx [ 11 ] * xx [ 15 ] - xx [ 17 ] * xx [ 14 ] ; xx [
18 ] = xx [ 14 ] * xx [ 15 ] + xx [ 17 ] * xx [ 11 ] ; xx [ 15 ] = xx [ 14 ]
* xx [ 20 ] + xx [ 21 ] * xx [ 11 ] ; xx [ 31 ] = - xx [ 10 ] ; xx [ 32 ] =
xx [ 16 ] ; xx [ 33 ] = xx [ 18 ] ; xx [ 34 ] = xx [ 15 ] ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 31 , xx + 39 ) ; xx [ 17 ] = xx
[ 12 ] - ( xx [ 15 ] * xx [ 15 ] + xx [ 16 ] * xx [ 16 ] ) * xx [ 0 ] ; xx [
19 ] = xx [ 41 ] * xx [ 17 ] ; xx [ 20 ] = ( xx [ 16 ] * xx [ 10 ] + xx [ 18
] * xx [ 15 ] ) * xx [ 0 ] ; xx [ 21 ] = xx [ 42 ] * xx [ 20 ] ; xx [ 31 ] =
xx [ 19 ] + xx [ 21 ] ; xx [ 32 ] = xx [ 40 ] * xx [ 17 ] ; xx [ 33 ] = xx [
40 ] * xx [ 20 ] ; xx [ 43 ] = - xx [ 31 ] ; xx [ 44 ] = xx [ 32 ] ; xx [ 45
] = xx [ 33 ] ; pm_math_Vector3_cross_ra ( xx + 40 , xx + 43 , xx + 46 ) ; xx
[ 43 ] = xx [ 0 ] * ( xx [ 46 ] - xx [ 31 ] * xx [ 39 ] ) ; xx [ 44 ] = xx [
20 ] + ( xx [ 39 ] * xx [ 32 ] + xx [ 47 ] ) * xx [ 0 ] ; xx [ 45 ] = ( xx [
39 ] * xx [ 33 ] + xx [ 48 ] ) * xx [ 0 ] - xx [ 17 ] ; xx [ 31 ] = state [
38 ] + xx [ 30 ] ; xx [ 32 ] = xx [ 31 ] * xx [ 1 ] ; xx [ 33 ] = cos ( xx [
32 ] ) ; xx [ 34 ] = state [ 37 ] + xx [ 29 ] ; xx [ 46 ] = xx [ 34 ] * xx [
1 ] ; xx [ 47 ] = cos ( xx [ 46 ] ) ; xx [ 48 ] = state [ 36 ] + xx [ 28 ] ;
xx [ 49 ] = xx [ 48 ] * xx [ 1 ] ; xx [ 50 ] = xx [ 4 ] * sin ( xx [ 49 ] ) ;
xx [ 51 ] = xx [ 47 ] * xx [ 50 ] ; xx [ 52 ] = xx [ 4 ] * cos ( xx [ 49 ] )
; xx [ 49 ] = sin ( xx [ 46 ] ) ; xx [ 46 ] = xx [ 52 ] * xx [ 49 ] ; xx [ 53
] = xx [ 51 ] - xx [ 46 ] ; xx [ 54 ] = xx [ 51 ] + xx [ 46 ] ; xx [ 46 ] =
sin ( xx [ 32 ] ) ; xx [ 32 ] = xx [ 33 ] * xx [ 53 ] + xx [ 54 ] * xx [ 46 ]
; xx [ 51 ] = xx [ 50 ] * xx [ 49 ] ; xx [ 49 ] = xx [ 47 ] * xx [ 52 ] ; xx
[ 47 ] = xx [ 51 ] - xx [ 49 ] ; xx [ 50 ] = xx [ 51 ] + xx [ 49 ] ; xx [ 49
] = xx [ 33 ] * xx [ 47 ] + xx [ 50 ] * xx [ 46 ] ; xx [ 51 ] = xx [ 50 ] *
xx [ 33 ] - xx [ 46 ] * xx [ 47 ] ; xx [ 47 ] = xx [ 46 ] * xx [ 53 ] - xx [
54 ] * xx [ 33 ] ; xx [ 52 ] = xx [ 32 ] ; xx [ 53 ] = xx [ 49 ] ; xx [ 54 ]
= xx [ 51 ] ; xx [ 55 ] = xx [ 47 ] ; pm_math_Quaternion_compose_ra ( xx + 35
, xx + 52 , xx + 56 ) ; xx [ 50 ] = xx [ 57 ] * xx [ 58 ] ; xx [ 52 ] = xx [
56 ] * xx [ 59 ] ; xx [ 53 ] = xx [ 0 ] * ( xx [ 50 ] - xx [ 52 ] ) ; xx [ 54
] = xx [ 56 ] * xx [ 56 ] ; xx [ 55 ] = xx [ 58 ] * xx [ 58 ] ; xx [ 60 ] =
xx [ 58 ] * xx [ 59 ] ; xx [ 61 ] = xx [ 56 ] * xx [ 57 ] ; xx [ 65 ] = xx [
53 ] ; xx [ 66 ] = ( xx [ 54 ] + xx [ 55 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 67
] = ( xx [ 60 ] + xx [ 61 ] ) * xx [ 0 ] ; xx [ 62 ] = xx [ 12 ] - xx [ 0 ] *
xx [ 11 ] * xx [ 11 ] ; xx [ 63 ] = xx [ 41 ] * xx [ 62 ] ; xx [ 68 ] = xx [
40 ] * xx [ 62 ] ; xx [ 69 ] = - ( ( xx [ 39 ] * xx [ 63 ] + xx [ 42 ] * xx [
68 ] ) * xx [ 0 ] ) ; xx [ 70 ] = xx [ 0 ] * ( xx [ 39 ] * xx [ 68 ] - xx [
42 ] * xx [ 63 ] ) ; xx [ 71 ] = ( xx [ 40 ] * xx [ 68 ] + xx [ 41 ] * xx [
63 ] ) * xx [ 0 ] - xx [ 62 ] ; xx [ 68 ] = xx [ 40 ] * xx [ 41 ] ; xx [ 72 ]
= xx [ 39 ] * xx [ 42 ] ; xx [ 73 ] = xx [ 0 ] * ( xx [ 68 ] - xx [ 72 ] ) ;
xx [ 74 ] = xx [ 42 ] * xx [ 42 ] ; xx [ 75 ] = xx [ 40 ] * xx [ 40 ] ; xx [
76 ] = xx [ 39 ] * xx [ 40 ] ; xx [ 77 ] = xx [ 41 ] * xx [ 42 ] ; xx [ 78 ]
= xx [ 73 ] ; xx [ 79 ] = xx [ 12 ] - ( xx [ 74 ] + xx [ 75 ] ) * xx [ 0 ] ;
xx [ 80 ] = ( xx [ 76 ] + xx [ 77 ] ) * xx [ 0 ] ; xx [ 81 ] = ( xx [ 47 ] *
xx [ 32 ] + xx [ 49 ] * xx [ 51 ] ) * xx [ 0 ] ; xx [ 82 ] = xx [ 58 ] * xx [
81 ] ; xx [ 83 ] = xx [ 57 ] * xx [ 81 ] ; xx [ 84 ] = xx [ 0 ] * ( xx [ 49 ]
* xx [ 32 ] - xx [ 47 ] * xx [ 51 ] ) ; xx [ 32 ] = xx [ 59 ] * xx [ 84 ] ;
xx [ 51 ] = xx [ 83 ] - xx [ 32 ] ; xx [ 85 ] = xx [ 58 ] * xx [ 84 ] ; xx [
86 ] = - xx [ 82 ] ; xx [ 87 ] = xx [ 51 ] ; xx [ 88 ] = xx [ 85 ] ;
pm_math_Vector3_cross_ra ( xx + 57 , xx + 86 , xx + 89 ) ; xx [ 86 ] = xx [ 0
] * ( xx [ 89 ] - xx [ 56 ] * xx [ 82 ] ) - xx [ 84 ] ; xx [ 87 ] = ( xx [ 56
] * xx [ 51 ] + xx [ 90 ] ) * xx [ 0 ] ; xx [ 88 ] = ( xx [ 56 ] * xx [ 85 ]
+ xx [ 91 ] ) * xx [ 0 ] - xx [ 81 ] ; xx [ 51 ] = xx [ 39 ] * xx [ 39 ] ; xx
[ 82 ] = xx [ 40 ] * xx [ 42 ] ; xx [ 85 ] = xx [ 39 ] * xx [ 41 ] ; xx [ 89
] = ( xx [ 51 ] + xx [ 75 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 90 ] = ( xx [ 68
] + xx [ 72 ] ) * xx [ 0 ] ; xx [ 91 ] = xx [ 0 ] * ( xx [ 82 ] - xx [ 85 ] )
; xx [ 75 ] = xx [ 0 ] * xx [ 33 ] * xx [ 46 ] ; xx [ 33 ] = xx [ 58 ] * xx [
75 ] ; xx [ 92 ] = xx [ 57 ] * xx [ 75 ] ; xx [ 93 ] = ( xx [ 56 ] * xx [ 33
] + xx [ 59 ] * xx [ 92 ] ) * xx [ 0 ] ; xx [ 94 ] = xx [ 0 ] * ( xx [ 59 ] *
xx [ 33 ] - xx [ 56 ] * xx [ 92 ] ) ; xx [ 95 ] = xx [ 75 ] - ( xx [ 57 ] *
xx [ 92 ] + xx [ 58 ] * xx [ 33 ] ) * xx [ 0 ] ; xx [ 33 ] = xx [ 59 ] * xx [
59 ] ; xx [ 96 ] = xx [ 56 ] * xx [ 58 ] ; xx [ 97 ] = xx [ 57 ] * xx [ 59 ]
; xx [ 98 ] = ( xx [ 55 ] + xx [ 33 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 99 ] =
- ( ( xx [ 52 ] + xx [ 50 ] ) * xx [ 0 ] ) ; xx [ 100 ] = xx [ 0 ] * ( xx [
96 ] - xx [ 97 ] ) ; xx [ 55 ] = xx [ 0 ] * ( xx [ 16 ] * xx [ 18 ] - xx [ 10
] * xx [ 15 ] ) ; xx [ 10 ] = xx [ 41 ] * xx [ 55 ] ; xx [ 15 ] = xx [ 40 ] *
xx [ 55 ] ; xx [ 16 ] = xx [ 21 ] + xx [ 15 ] ; xx [ 18 ] = xx [ 41 ] * xx [
20 ] ; xx [ 101 ] = xx [ 10 ] ; xx [ 102 ] = - xx [ 16 ] ; xx [ 103 ] = xx [
18 ] ; pm_math_Vector3_cross_ra ( xx + 40 , xx + 101 , xx + 104 ) ; xx [ 101
] = ( xx [ 39 ] * xx [ 10 ] + xx [ 104 ] ) * xx [ 0 ] - xx [ 20 ] ; xx [ 102
] = xx [ 0 ] * ( xx [ 105 ] - xx [ 16 ] * xx [ 39 ] ) ; xx [ 103 ] = xx [ 55
] + ( xx [ 39 ] * xx [ 18 ] + xx [ 106 ] ) * xx [ 0 ] ; xx [ 104 ] = ( xx [
97 ] + xx [ 96 ] ) * xx [ 0 ] ; xx [ 105 ] = xx [ 0 ] * ( xx [ 60 ] - xx [ 61
] ) ; xx [ 106 ] = ( xx [ 54 ] + xx [ 33 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 10
] = xx [ 0 ] * xx [ 14 ] * xx [ 11 ] ; xx [ 11 ] = xx [ 41 ] * xx [ 10 ] ; xx
[ 14 ] = xx [ 40 ] * xx [ 10 ] ; xx [ 107 ] = ( xx [ 39 ] * xx [ 11 ] + xx [
42 ] * xx [ 14 ] ) * xx [ 0 ] ; xx [ 108 ] = xx [ 0 ] * ( xx [ 42 ] * xx [ 11
] - xx [ 39 ] * xx [ 14 ] ) ; xx [ 109 ] = xx [ 10 ] - ( xx [ 40 ] * xx [ 14
] + xx [ 41 ] * xx [ 11 ] ) * xx [ 0 ] ; xx [ 11 ] = xx [ 41 ] * xx [ 41 ] ;
xx [ 110 ] = ( xx [ 11 ] + xx [ 74 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 111 ] =
- ( ( xx [ 72 ] + xx [ 68 ] ) * xx [ 0 ] ) ; xx [ 112 ] = xx [ 0 ] * ( xx [
85 ] - xx [ 82 ] ) ; xx [ 16 ] = ( xx [ 47 ] * xx [ 47 ] + xx [ 49 ] * xx [
49 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 18 ] = xx [ 59 ] * xx [ 81 ] ; xx [ 20 ]
= xx [ 16 ] * xx [ 59 ] ; xx [ 21 ] = xx [ 16 ] * xx [ 58 ] ; xx [ 47 ] = xx
[ 83 ] - xx [ 21 ] ; xx [ 113 ] = - xx [ 18 ] ; xx [ 114 ] = xx [ 20 ] ; xx [
115 ] = xx [ 47 ] ; pm_math_Vector3_cross_ra ( xx + 57 , xx + 113 , xx + 116
) ; xx [ 113 ] = xx [ 16 ] + xx [ 0 ] * ( xx [ 116 ] - xx [ 56 ] * xx [ 18 ]
) ; xx [ 114 ] = xx [ 81 ] + ( xx [ 56 ] * xx [ 20 ] + xx [ 117 ] ) * xx [ 0
] ; xx [ 115 ] = ( xx [ 56 ] * xx [ 47 ] + xx [ 118 ] ) * xx [ 0 ] ; xx [ 116
] = xx [ 73 ] ; xx [ 117 ] = ( xx [ 51 ] + xx [ 11 ] ) * xx [ 0 ] - xx [ 12 ]
; xx [ 118 ] = ( xx [ 77 ] + xx [ 76 ] ) * xx [ 0 ] ; xx [ 11 ] = xx [ 12 ] -
xx [ 0 ] * xx [ 46 ] * xx [ 46 ] ; xx [ 18 ] = xx [ 59 ] * xx [ 75 ] ; xx [
20 ] = xx [ 59 ] * xx [ 11 ] ; xx [ 46 ] = xx [ 58 ] * xx [ 11 ] ; xx [ 47 ]
= xx [ 92 ] + xx [ 46 ] ; xx [ 119 ] = xx [ 18 ] ; xx [ 120 ] = xx [ 20 ] ;
xx [ 121 ] = - xx [ 47 ] ; pm_math_Vector3_cross_ra ( xx + 57 , xx + 119 , xx
+ 122 ) ; xx [ 119 ] = xx [ 11 ] + ( xx [ 56 ] * xx [ 18 ] + xx [ 122 ] ) *
xx [ 0 ] ; xx [ 120 ] = ( xx [ 56 ] * xx [ 20 ] + xx [ 123 ] ) * xx [ 0 ] -
xx [ 75 ] ; xx [ 121 ] = xx [ 0 ] * ( xx [ 124 ] - xx [ 47 ] * xx [ 56 ] ) ;
xx [ 18 ] = xx [ 42 ] * xx [ 55 ] ; xx [ 20 ] = xx [ 42 ] * xx [ 17 ] ; xx [
47 ] = xx [ 15 ] + xx [ 19 ] ; xx [ 122 ] = xx [ 18 ] ; xx [ 123 ] = xx [ 20
] ; xx [ 124 ] = - xx [ 47 ] ; pm_math_Vector3_cross_ra ( xx + 40 , xx + 122
, xx + 125 ) ; xx [ 122 ] = xx [ 17 ] + ( xx [ 39 ] * xx [ 18 ] + xx [ 125 ]
) * xx [ 0 ] ; xx [ 123 ] = ( xx [ 39 ] * xx [ 20 ] + xx [ 126 ] ) * xx [ 0 ]
- xx [ 55 ] ; xx [ 124 ] = xx [ 0 ] * ( xx [ 127 ] - xx [ 47 ] * xx [ 39 ] )
; xx [ 15 ] = xx [ 57 ] * xx [ 57 ] ; xx [ 17 ] = ( xx [ 54 ] + xx [ 15 ] ) *
xx [ 0 ] - xx [ 12 ] ; xx [ 18 ] = ( xx [ 50 ] + xx [ 52 ] ) * xx [ 0 ] ; xx
[ 19 ] = xx [ 0 ] * ( xx [ 97 ] - xx [ 96 ] ) ; xx [ 20 ] = xx [ 42 ] * xx [
10 ] ; xx [ 47 ] = xx [ 42 ] * xx [ 62 ] ; xx [ 49 ] = xx [ 14 ] + xx [ 63 ]
; xx [ 125 ] = xx [ 20 ] ; xx [ 126 ] = xx [ 47 ] ; xx [ 127 ] = - xx [ 49 ]
; pm_math_Vector3_cross_ra ( xx + 40 , xx + 125 , xx + 128 ) ; xx [ 40 ] = xx
[ 62 ] + ( xx [ 39 ] * xx [ 20 ] + xx [ 128 ] ) * xx [ 0 ] ; xx [ 41 ] = ( xx
[ 39 ] * xx [ 47 ] + xx [ 129 ] ) * xx [ 0 ] - xx [ 10 ] ; xx [ 42 ] = xx [ 0
] * ( xx [ 130 ] - xx [ 49 ] * xx [ 39 ] ) ; xx [ 10 ] = xx [ 21 ] + xx [ 32
] ; xx [ 14 ] = xx [ 16 ] * xx [ 57 ] ; xx [ 20 ] = xx [ 57 ] * xx [ 84 ] ;
xx [ 125 ] = - xx [ 10 ] ; xx [ 126 ] = xx [ 14 ] ; xx [ 127 ] = xx [ 20 ] ;
pm_math_Vector3_cross_ra ( xx + 57 , xx + 125 , xx + 128 ) ; xx [ 125 ] = xx
[ 0 ] * ( xx [ 128 ] - xx [ 10 ] * xx [ 56 ] ) ; xx [ 126 ] = xx [ 84 ] + (
xx [ 56 ] * xx [ 14 ] + xx [ 129 ] ) * xx [ 0 ] ; xx [ 127 ] = ( xx [ 56 ] *
xx [ 20 ] + xx [ 130 ] ) * xx [ 0 ] - xx [ 16 ] ; xx [ 128 ] = ( xx [ 82 ] +
xx [ 85 ] ) * xx [ 0 ] ; xx [ 129 ] = xx [ 0 ] * ( xx [ 77 ] - xx [ 76 ] ) ;
xx [ 130 ] = ( xx [ 51 ] + xx [ 74 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 10 ] =
xx [ 57 ] * xx [ 11 ] ; xx [ 49 ] = - ( ( xx [ 56 ] * xx [ 46 ] + xx [ 59 ] *
xx [ 10 ] ) * xx [ 0 ] ) ; xx [ 50 ] = xx [ 0 ] * ( xx [ 56 ] * xx [ 10 ] -
xx [ 59 ] * xx [ 46 ] ) ; xx [ 51 ] = ( xx [ 57 ] * xx [ 10 ] + xx [ 58 ] *
xx [ 46 ] ) * xx [ 0 ] - xx [ 11 ] ; xx [ 54 ] = xx [ 53 ] ; xx [ 55 ] = xx [
12 ] - ( xx [ 33 ] + xx [ 15 ] ) * xx [ 0 ] ; xx [ 56 ] = ( xx [ 61 ] + xx [
60 ] ) * xx [ 0 ] ; xx [ 131 ] = pm_math_Vector3_dot_ra ( xx + 43 , xx + 65 )
; xx [ 132 ] = pm_math_Vector3_dot_ra ( xx + 69 , xx + 65 ) ; xx [ 133 ] =
pm_math_Vector3_dot_ra ( xx + 78 , xx + 65 ) ; xx [ 134 ] = xx [ 64 ] ; xx [
135 ] = xx [ 64 ] ; xx [ 136 ] = xx [ 64 ] ; xx [ 137 ] =
pm_math_Vector3_dot_ra ( xx + 86 , xx + 89 ) ; xx [ 138 ] =
pm_math_Vector3_dot_ra ( xx + 93 , xx + 89 ) ; xx [ 139 ] =
pm_math_Vector3_dot_ra ( xx + 98 , xx + 89 ) ; xx [ 140 ] =
pm_math_Vector3_dot_ra ( xx + 101 , xx + 104 ) ; xx [ 141 ] =
pm_math_Vector3_dot_ra ( xx + 107 , xx + 104 ) ; xx [ 142 ] =
pm_math_Vector3_dot_ra ( xx + 110 , xx + 104 ) ; xx [ 143 ] = xx [ 64 ] ; xx
[ 144 ] = xx [ 64 ] ; xx [ 145 ] = xx [ 64 ] ; xx [ 146 ] =
pm_math_Vector3_dot_ra ( xx + 113 , xx + 116 ) ; xx [ 147 ] =
pm_math_Vector3_dot_ra ( xx + 119 , xx + 116 ) ; xx [ 148 ] = xx [ 64 ] ; xx
[ 149 ] = pm_math_Vector3_dot_ra ( xx + 122 , xx + 17 ) ; xx [ 150 ] =
pm_math_Vector3_dot_ra ( xx + 40 , xx + 17 ) ; xx [ 151 ] = xx [ 64 ] ; xx [
152 ] = xx [ 64 ] ; xx [ 153 ] = xx [ 64 ] ; xx [ 154 ] = xx [ 64 ] ; xx [
155 ] = pm_math_Vector3_dot_ra ( xx + 125 , xx + 128 ) ; xx [ 156 ] =
pm_math_Vector3_dot_ra ( xx + 49 , xx + 128 ) ; xx [ 157 ] =
pm_math_Vector3_dot_ra ( xx + 54 , xx + 128 ) ; xx [ 14 ] = -
pm_math_Vector3_dot_ra ( xx + 89 , xx + 65 ) ; xx [ 15 ] = -
pm_math_Vector3_dot_ra ( xx + 116 , xx + 104 ) ; xx [ 16 ] = -
pm_math_Vector3_dot_ra ( xx + 128 , xx + 17 ) ; memcpy ( xx + 65 , xx + 131 ,
27 * sizeof ( double ) ) ; factorAndSolveWide ( 3 , 9 , xx + 65 , xx + 17 ,
xx + 49 , ii + 0 , xx + 14 , xx [ 2 ] , xx + 39 ) ; xx [ 10 ] = xx [ 3 ] + xx
[ 39 ] ; xx [ 3 ] = xx [ 13 ] + xx [ 40 ] ; xx [ 11 ] = xx [ 5 ] + xx [ 41 ]
; xx [ 5 ] = xx [ 48 ] + xx [ 45 ] ; xx [ 13 ] = xx [ 34 ] + xx [ 46 ] ; xx [
14 ] = xx [ 31 ] + xx [ 47 ] ; xx [ 65 ] = state [ 0 ] ; xx [ 66 ] = state [
1 ] ; xx [ 67 ] = state [ 2 ] ; xx [ 68 ] = state [ 3 ] ; xx [ 69 ] = state [
4 ] ; xx [ 70 ] = state [ 5 ] ; xx [ 71 ] = state [ 6 ] ; xx [ 72 ] = state [
7 ] ; xx [ 73 ] = state [ 8 ] ; xx [ 74 ] = state [ 9 ] ; xx [ 75 ] = state [
10 ] ; xx [ 76 ] = state [ 11 ] ; xx [ 77 ] = xx [ 10 ] ; xx [ 78 ] = xx [ 3
] ; xx [ 79 ] = xx [ 11 ] ; xx [ 80 ] = state [ 15 ] ; xx [ 81 ] = state [ 16
] ; xx [ 82 ] = state [ 17 ] ; xx [ 83 ] = state [ 18 ] + xx [ 25 ] + xx [ 42
] ; xx [ 84 ] = state [ 19 ] + xx [ 26 ] + xx [ 43 ] ; xx [ 85 ] = state [ 20
] + xx [ 27 ] + xx [ 44 ] ; xx [ 86 ] = state [ 21 ] ; xx [ 87 ] = state [ 22
] ; xx [ 88 ] = state [ 23 ] ; xx [ 89 ] = state [ 24 ] ; xx [ 90 ] = state [
25 ] ; xx [ 91 ] = state [ 26 ] ; xx [ 92 ] = state [ 27 ] ; xx [ 93 ] =
state [ 28 ] ; xx [ 94 ] = state [ 29 ] ; xx [ 95 ] = state [ 30 ] ; xx [ 96
] = state [ 31 ] ; xx [ 97 ] = state [ 32 ] ; xx [ 98 ] = state [ 33 ] ; xx [
99 ] = state [ 34 ] ; xx [ 100 ] = state [ 35 ] ; xx [ 101 ] = xx [ 5 ] ; xx
[ 102 ] = xx [ 13 ] ; xx [ 103 ] = xx [ 14 ] ; xx [ 104 ] = state [ 39 ] ; xx
[ 105 ] = state [ 40 ] ; xx [ 106 ] = state [ 41 ] ; xx [ 15 ] = xx [ 11 ] *
xx [ 1 ] ; xx [ 11 ] = sin ( xx [ 15 ] ) ; xx [ 16 ] = xx [ 3 ] * xx [ 1 ] ;
xx [ 3 ] = cos ( xx [ 16 ] ) ; xx [ 17 ] = xx [ 10 ] * xx [ 1 ] ; xx [ 10 ] =
xx [ 4 ] * sin ( xx [ 17 ] ) ; xx [ 18 ] = xx [ 3 ] * xx [ 10 ] ; xx [ 19 ] =
xx [ 4 ] * cos ( xx [ 17 ] ) ; xx [ 17 ] = sin ( xx [ 16 ] ) ; xx [ 16 ] = xx
[ 19 ] * xx [ 17 ] ; xx [ 20 ] = xx [ 18 ] - xx [ 16 ] ; xx [ 21 ] = xx [ 18
] + xx [ 16 ] ; xx [ 16 ] = cos ( xx [ 15 ] ) ; xx [ 15 ] = xx [ 10 ] * xx [
17 ] ; xx [ 10 ] = xx [ 3 ] * xx [ 19 ] ; xx [ 3 ] = xx [ 15 ] - xx [ 10 ] ;
xx [ 17 ] = xx [ 10 ] + xx [ 15 ] ; xx [ 22 ] = - ( xx [ 11 ] * xx [ 20 ] -
xx [ 21 ] * xx [ 16 ] ) ; xx [ 23 ] = xx [ 11 ] * xx [ 3 ] - xx [ 17 ] * xx [
16 ] ; xx [ 24 ] = xx [ 16 ] * xx [ 3 ] + xx [ 17 ] * xx [ 11 ] ; xx [ 25 ] =
xx [ 16 ] * xx [ 20 ] + xx [ 21 ] * xx [ 11 ] ; pm_math_Quaternion_compose_ra
( xx + 6 , xx + 22 , xx + 15 ) ; xx [ 3 ] = xx [ 15 ] * xx [ 15 ] ; xx [ 6 ]
= xx [ 16 ] * xx [ 17 ] ; xx [ 7 ] = xx [ 15 ] * xx [ 18 ] ; xx [ 8 ] = xx [
16 ] * xx [ 18 ] ; xx [ 9 ] = xx [ 15 ] * xx [ 17 ] ; xx [ 19 ] = ( xx [ 3 ]
+ xx [ 16 ] * xx [ 16 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 20 ] = ( xx [ 6 ] +
xx [ 7 ] ) * xx [ 0 ] ; xx [ 21 ] = xx [ 0 ] * ( xx [ 8 ] - xx [ 9 ] ) ; xx [
10 ] = xx [ 14 ] * xx [ 1 ] ; xx [ 11 ] = cos ( xx [ 10 ] ) ; xx [ 14 ] = xx
[ 13 ] * xx [ 1 ] ; xx [ 13 ] = cos ( xx [ 14 ] ) ; xx [ 22 ] = xx [ 5 ] * xx
[ 1 ] ; xx [ 5 ] = xx [ 4 ] * sin ( xx [ 22 ] ) ; xx [ 23 ] = xx [ 13 ] * xx
[ 5 ] ; xx [ 24 ] = xx [ 4 ] * cos ( xx [ 22 ] ) ; xx [ 22 ] = sin ( xx [ 14
] ) ; xx [ 14 ] = xx [ 24 ] * xx [ 22 ] ; xx [ 25 ] = xx [ 23 ] - xx [ 14 ] ;
xx [ 26 ] = xx [ 23 ] + xx [ 14 ] ; xx [ 14 ] = sin ( xx [ 10 ] ) ; xx [ 10 ]
= xx [ 5 ] * xx [ 22 ] ; xx [ 5 ] = xx [ 13 ] * xx [ 24 ] ; xx [ 13 ] = xx [
10 ] - xx [ 5 ] ; xx [ 22 ] = xx [ 10 ] + xx [ 5 ] ; xx [ 27 ] = xx [ 11 ] *
xx [ 25 ] + xx [ 26 ] * xx [ 14 ] ; xx [ 28 ] = xx [ 11 ] * xx [ 13 ] + xx [
22 ] * xx [ 14 ] ; xx [ 29 ] = xx [ 22 ] * xx [ 11 ] - xx [ 14 ] * xx [ 13 ]
; xx [ 30 ] = xx [ 14 ] * xx [ 25 ] - xx [ 26 ] * xx [ 11 ] ;
pm_math_Quaternion_compose_ra ( xx + 35 , xx + 27 , xx + 22 ) ; xx [ 5 ] = xx
[ 23 ] * xx [ 24 ] ; xx [ 10 ] = xx [ 22 ] * xx [ 25 ] ; xx [ 11 ] = xx [ 22
] * xx [ 22 ] ; xx [ 13 ] = xx [ 24 ] * xx [ 25 ] ; xx [ 14 ] = xx [ 22 ] *
xx [ 23 ] ; xx [ 26 ] = xx [ 0 ] * ( xx [ 5 ] - xx [ 10 ] ) ; xx [ 27 ] = (
xx [ 11 ] + xx [ 24 ] * xx [ 24 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 28 ] = ( xx
[ 13 ] + xx [ 14 ] ) * xx [ 0 ] ; xx [ 29 ] = xx [ 17 ] * xx [ 18 ] ; xx [ 30
] = xx [ 15 ] * xx [ 16 ] ; xx [ 31 ] = xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ;
xx [ 32 ] = ( xx [ 3 ] + xx [ 17 ] * xx [ 17 ] ) * xx [ 0 ] - xx [ 12 ] ; xx
[ 33 ] = ( xx [ 29 ] + xx [ 30 ] ) * xx [ 0 ] ; xx [ 6 ] = xx [ 23 ] * xx [
25 ] ; xx [ 7 ] = xx [ 22 ] * xx [ 24 ] ; xx [ 15 ] = ( xx [ 6 ] + xx [ 7 ] )
* xx [ 0 ] ; xx [ 16 ] = xx [ 0 ] * ( xx [ 13 ] - xx [ 14 ] ) ; xx [ 17 ] = (
xx [ 11 ] + xx [ 25 ] * xx [ 25 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 34 ] = ( xx
[ 8 ] + xx [ 9 ] ) * xx [ 0 ] ; xx [ 35 ] = xx [ 0 ] * ( xx [ 29 ] - xx [ 30
] ) ; xx [ 36 ] = ( xx [ 3 ] + xx [ 18 ] * xx [ 18 ] ) * xx [ 0 ] - xx [ 12 ]
; xx [ 37 ] = ( xx [ 11 ] + xx [ 23 ] * xx [ 23 ] ) * xx [ 0 ] - xx [ 12 ] ;
xx [ 38 ] = ( xx [ 5 ] + xx [ 10 ] ) * xx [ 0 ] ; xx [ 39 ] = xx [ 0 ] * ( xx
[ 6 ] - xx [ 7 ] ) ; xx [ 5 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 19 , xx
+ 26 ) ) ; xx [ 6 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 31 , xx + 15 ) ) ;
xx [ 7 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 34 , xx + 37 ) ) ; ii [ 0 ] =
5 ; { int ll ; for ( ll = 6 ; ll < 8 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ]
] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 5 ; xx [ 3 ] = xx [ 5 + ( ii [ 0 ] ) ] ; xx
[ 5 ] = 1.0e-9 ; xx [ 6 ] = xx [ 3 ] - xx [ 5 ] ; if ( xx [ 6 ] < 0.0 ) ii [
1 ] = - 1 ; else if ( xx [ 6 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [ 1 ] = 0 ;
ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [ 2 ] != 0 )
{ switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'pp/Robotic Arm 2/wrist_3_link/Cartesian Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 3 ] = xx [ 1 ] * xx [ 75 ] ; xx [ 6 ] = sin ( xx [
3 ] ) ; xx [ 7 ] = xx [ 1 ] * xx [ 71 ] ; xx [ 8 ] = xx [ 4 ] * sin ( xx [ 7
] ) ; xx [ 9 ] = xx [ 4 ] * cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 8 ] + xx [ 9 ]
; xx [ 10 ] = xx [ 1 ] * xx [ 69 ] ; xx [ 11 ] = xx [ 4 ] * sin ( xx [ 10 ] )
; xx [ 13 ] = xx [ 4 ] * cos ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 11 ] + xx [ 13
] ; xx [ 14 ] = xx [ 1 ] * xx [ 65 ] ; xx [ 15 ] = cos ( xx [ 14 ] ) ; xx [
16 ] = xx [ 1 ] * xx [ 67 ] ; xx [ 17 ] = sin ( xx [ 16 ] ) ; xx [ 18 ] = xx
[ 15 ] * xx [ 17 ] ; xx [ 19 ] = cos ( xx [ 16 ] ) ; xx [ 16 ] = xx [ 15 ] *
xx [ 19 ] ; xx [ 15 ] = xx [ 11 ] - xx [ 13 ] ; xx [ 11 ] = xx [ 10 ] * xx [
18 ] + xx [ 16 ] * xx [ 15 ] ; xx [ 13 ] = xx [ 18 ] * xx [ 15 ] - xx [ 10 ]
* xx [ 16 ] ; xx [ 16 ] = xx [ 8 ] - xx [ 9 ] ; xx [ 8 ] = xx [ 7 ] * xx [ 11
] - xx [ 13 ] * xx [ 16 ] ; xx [ 9 ] = xx [ 1 ] * xx [ 73 ] ; xx [ 18 ] = xx
[ 4 ] * sin ( xx [ 9 ] ) ; xx [ 20 ] = xx [ 4 ] * cos ( xx [ 9 ] ) ; xx [ 9 ]
= xx [ 18 ] - xx [ 20 ] ; xx [ 21 ] = xx [ 18 ] + xx [ 20 ] ; xx [ 18 ] = sin
( xx [ 14 ] ) ; xx [ 14 ] = xx [ 18 ] * xx [ 17 ] ; xx [ 20 ] = xx [ 19 ] *
xx [ 18 ] ; xx [ 18 ] = xx [ 14 ] * xx [ 15 ] - xx [ 10 ] * xx [ 20 ] ; xx [
22 ] = xx [ 10 ] * xx [ 14 ] + xx [ 20 ] * xx [ 15 ] ; xx [ 14 ] = xx [ 18 ]
* xx [ 16 ] - xx [ 7 ] * xx [ 22 ] ; xx [ 20 ] = xx [ 8 ] * xx [ 9 ] + xx [
21 ] * xx [ 14 ] ; xx [ 23 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 11 ] * xx [
16 ] + xx [ 13 ] * xx [ 7 ] ; xx [ 11 ] = xx [ 22 ] * xx [ 16 ] + xx [ 18 ] *
xx [ 7 ] ; xx [ 13 ] = xx [ 3 ] * xx [ 9 ] + xx [ 11 ] * xx [ 21 ] ; xx [ 18
] = xx [ 3 ] * xx [ 21 ] - xx [ 11 ] * xx [ 9 ] ; xx [ 3 ] = xx [ 14 ] * xx [
9 ] - xx [ 21 ] * xx [ 8 ] ; xx [ 24 ] = xx [ 6 ] * xx [ 20 ] + xx [ 23 ] *
xx [ 13 ] ; xx [ 25 ] = xx [ 18 ] * xx [ 6 ] - xx [ 3 ] * xx [ 23 ] ; xx [ 26
] = - ( xx [ 23 ] * xx [ 20 ] - xx [ 6 ] * xx [ 13 ] ) ; xx [ 27 ] = - ( xx [
18 ] * xx [ 23 ] + xx [ 3 ] * xx [ 6 ] ) ; xx [ 3 ] = xx [ 1 ] * xx [ 79 ] ;
xx [ 8 ] = sin ( xx [ 3 ] ) ; xx [ 11 ] = xx [ 1 ] * xx [ 78 ] ; xx [ 13 ] =
cos ( xx [ 11 ] ) ; xx [ 14 ] = xx [ 1 ] * xx [ 77 ] ; xx [ 18 ] = xx [ 4 ] *
sin ( xx [ 14 ] ) ; xx [ 20 ] = xx [ 13 ] * xx [ 18 ] ; xx [ 22 ] = xx [ 4 ]
* cos ( xx [ 14 ] ) ; xx [ 14 ] = sin ( xx [ 11 ] ) ; xx [ 11 ] = xx [ 22 ] *
xx [ 14 ] ; xx [ 28 ] = xx [ 20 ] - xx [ 11 ] ; xx [ 29 ] = xx [ 20 ] + xx [
11 ] ; xx [ 11 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 8 ] * xx [ 28 ] - xx [
29 ] * xx [ 11 ] ; xx [ 20 ] = xx [ 18 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 13 ]
* xx [ 22 ] ; xx [ 13 ] = xx [ 20 ] - xx [ 14 ] ; xx [ 18 ] = xx [ 14 ] + xx
[ 20 ] ; xx [ 14 ] = xx [ 8 ] * xx [ 13 ] - xx [ 18 ] * xx [ 11 ] ; xx [ 20 ]
= xx [ 11 ] * xx [ 13 ] + xx [ 18 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 11 ] * xx [
28 ] + xx [ 29 ] * xx [ 8 ] ; xx [ 28 ] = - xx [ 3 ] ; xx [ 29 ] = xx [ 14 ]
; xx [ 30 ] = xx [ 20 ] ; xx [ 31 ] = xx [ 13 ] ;
pm_math_Quaternion_compose_ra ( xx + 24 , xx + 28 , xx + 32 ) ; xx [ 18 ] =
xx [ 12 ] - ( xx [ 13 ] * xx [ 13 ] + xx [ 14 ] * xx [ 14 ] ) * xx [ 0 ] ; xx
[ 22 ] = xx [ 34 ] * xx [ 18 ] ; xx [ 24 ] = xx [ 14 ] * xx [ 3 ] + xx [ 20 ]
* xx [ 13 ] ; xx [ 25 ] = xx [ 24 ] * xx [ 0 ] ; xx [ 26 ] = xx [ 35 ] * xx [
25 ] ; xx [ 27 ] = xx [ 22 ] + xx [ 26 ] ; xx [ 36 ] = xx [ 33 ] * xx [ 18 ]
; xx [ 37 ] = xx [ 33 ] * xx [ 25 ] ; xx [ 38 ] = - xx [ 27 ] ; xx [ 39 ] =
xx [ 36 ] ; xx [ 40 ] = xx [ 37 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx +
38 , xx + 41 ) ; xx [ 38 ] = xx [ 0 ] * ( xx [ 41 ] - xx [ 27 ] * xx [ 32 ] )
; xx [ 39 ] = xx [ 25 ] + ( xx [ 32 ] * xx [ 36 ] + xx [ 42 ] ) * xx [ 0 ] ;
xx [ 40 ] = ( xx [ 32 ] * xx [ 37 ] + xx [ 43 ] ) * xx [ 0 ] - xx [ 18 ] ; xx
[ 27 ] = xx [ 1 ] * xx [ 99 ] ; xx [ 36 ] = sin ( xx [ 27 ] ) ; xx [ 37 ] =
xx [ 1 ] * xx [ 89 ] ; xx [ 41 ] = sin ( xx [ 37 ] ) ; xx [ 42 ] = xx [ 1 ] *
xx [ 91 ] ; xx [ 43 ] = sin ( xx [ 42 ] ) ; xx [ 44 ] = xx [ 41 ] * xx [ 43 ]
; xx [ 45 ] = xx [ 1 ] * xx [ 93 ] ; xx [ 46 ] = xx [ 4 ] * sin ( xx [ 45 ] )
; xx [ 47 ] = xx [ 4 ] * cos ( xx [ 45 ] ) ; xx [ 45 ] = xx [ 46 ] - xx [ 47
] ; xx [ 48 ] = xx [ 46 ] + xx [ 47 ] ; xx [ 46 ] = cos ( xx [ 42 ] ) ; xx [
42 ] = xx [ 46 ] * xx [ 41 ] ; xx [ 41 ] = xx [ 44 ] * xx [ 45 ] - xx [ 48 ]
* xx [ 42 ] ; xx [ 47 ] = xx [ 1 ] * xx [ 95 ] ; xx [ 49 ] = xx [ 4 ] * sin (
xx [ 47 ] ) ; xx [ 50 ] = xx [ 4 ] * cos ( xx [ 47 ] ) ; xx [ 47 ] = xx [ 49
] - xx [ 50 ] ; xx [ 51 ] = xx [ 49 ] + xx [ 50 ] ; xx [ 49 ] = xx [ 42 ] *
xx [ 45 ] + xx [ 48 ] * xx [ 44 ] ; xx [ 42 ] = xx [ 41 ] * xx [ 47 ] - xx [
51 ] * xx [ 49 ] ; xx [ 44 ] = xx [ 1 ] * xx [ 97 ] ; xx [ 50 ] = xx [ 4 ] *
sin ( xx [ 44 ] ) ; xx [ 52 ] = xx [ 4 ] * cos ( xx [ 44 ] ) ; xx [ 44 ] = xx
[ 50 ] - xx [ 52 ] ; xx [ 53 ] = xx [ 50 ] + xx [ 52 ] ; xx [ 50 ] = cos ( xx
[ 37 ] ) ; xx [ 37 ] = xx [ 50 ] * xx [ 43 ] ; xx [ 52 ] = xx [ 50 ] * xx [
46 ] ; xx [ 50 ] = xx [ 37 ] * xx [ 45 ] - xx [ 48 ] * xx [ 52 ] ; xx [ 54 ]
= xx [ 48 ] * xx [ 37 ] + xx [ 52 ] * xx [ 45 ] ; xx [ 37 ] = xx [ 50 ] * xx
[ 47 ] - xx [ 51 ] * xx [ 54 ] ; xx [ 52 ] = xx [ 42 ] * xx [ 44 ] + xx [ 53
] * xx [ 37 ] ; xx [ 55 ] = cos ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 49 ] * xx [
47 ] + xx [ 41 ] * xx [ 51 ] ; xx [ 41 ] = xx [ 54 ] * xx [ 47 ] + xx [ 50 ]
* xx [ 51 ] ; xx [ 49 ] = xx [ 27 ] * xx [ 44 ] - xx [ 41 ] * xx [ 53 ] ; xx
[ 50 ] = xx [ 53 ] * xx [ 27 ] + xx [ 41 ] * xx [ 44 ] ; xx [ 27 ] = xx [ 37
] * xx [ 44 ] - xx [ 42 ] * xx [ 53 ] ; xx [ 56 ] = xx [ 36 ] * xx [ 52 ] -
xx [ 55 ] * xx [ 49 ] ; xx [ 57 ] = - ( xx [ 50 ] * xx [ 36 ] + xx [ 27 ] *
xx [ 55 ] ) ; xx [ 58 ] = - ( xx [ 36 ] * xx [ 49 ] + xx [ 55 ] * xx [ 52 ] )
; xx [ 59 ] = - ( xx [ 27 ] * xx [ 36 ] - xx [ 50 ] * xx [ 55 ] ) ; xx [ 27 ]
= xx [ 1 ] * xx [ 103 ] ; xx [ 37 ] = cos ( xx [ 27 ] ) ; xx [ 41 ] = xx [ 1
] * xx [ 102 ] ; xx [ 42 ] = cos ( xx [ 41 ] ) ; xx [ 49 ] = xx [ 1 ] * xx [
101 ] ; xx [ 1 ] = xx [ 4 ] * sin ( xx [ 49 ] ) ; xx [ 50 ] = xx [ 42 ] * xx
[ 1 ] ; xx [ 52 ] = xx [ 4 ] * cos ( xx [ 49 ] ) ; xx [ 4 ] = sin ( xx [ 41 ]
) ; xx [ 41 ] = xx [ 52 ] * xx [ 4 ] ; xx [ 49 ] = xx [ 50 ] - xx [ 41 ] ; xx
[ 54 ] = xx [ 50 ] + xx [ 41 ] ; xx [ 41 ] = sin ( xx [ 27 ] ) ; xx [ 27 ] =
xx [ 37 ] * xx [ 49 ] + xx [ 54 ] * xx [ 41 ] ; xx [ 50 ] = xx [ 1 ] * xx [ 4
] ; xx [ 1 ] = xx [ 42 ] * xx [ 52 ] ; xx [ 4 ] = xx [ 50 ] - xx [ 1 ] ; xx [
42 ] = xx [ 50 ] + xx [ 1 ] ; xx [ 1 ] = xx [ 37 ] * xx [ 4 ] + xx [ 42 ] *
xx [ 41 ] ; xx [ 50 ] = xx [ 42 ] * xx [ 37 ] - xx [ 41 ] * xx [ 4 ] ; xx [ 4
] = xx [ 41 ] * xx [ 49 ] - xx [ 54 ] * xx [ 37 ] ; xx [ 60 ] = xx [ 27 ] ;
xx [ 61 ] = xx [ 1 ] ; xx [ 62 ] = xx [ 50 ] ; xx [ 63 ] = xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 56 , xx + 60 , xx + 107 ) ; xx [ 42 ] =
xx [ 108 ] * xx [ 109 ] ; xx [ 49 ] = xx [ 107 ] * xx [ 110 ] ; xx [ 52 ] =
xx [ 0 ] * ( xx [ 42 ] - xx [ 49 ] ) ; xx [ 54 ] = xx [ 107 ] * xx [ 107 ] ;
xx [ 56 ] = xx [ 109 ] * xx [ 109 ] ; xx [ 57 ] = xx [ 109 ] * xx [ 110 ] ;
xx [ 58 ] = xx [ 107 ] * xx [ 108 ] ; xx [ 111 ] = xx [ 52 ] ; xx [ 112 ] = (
xx [ 54 ] + xx [ 56 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 113 ] = ( xx [ 57 ] +
xx [ 58 ] ) * xx [ 0 ] ; xx [ 59 ] = xx [ 12 ] - xx [ 0 ] * xx [ 8 ] * xx [ 8
] ; xx [ 114 ] = xx [ 34 ] * xx [ 59 ] ; xx [ 115 ] = xx [ 33 ] * xx [ 59 ] ;
xx [ 116 ] = - ( ( xx [ 32 ] * xx [ 114 ] + xx [ 35 ] * xx [ 115 ] ) * xx [ 0
] ) ; xx [ 117 ] = xx [ 0 ] * ( xx [ 32 ] * xx [ 115 ] - xx [ 35 ] * xx [ 114
] ) ; xx [ 118 ] = ( xx [ 33 ] * xx [ 115 ] + xx [ 34 ] * xx [ 114 ] ) * xx [
0 ] - xx [ 59 ] ; xx [ 115 ] = xx [ 33 ] * xx [ 34 ] ; xx [ 119 ] = xx [ 32 ]
* xx [ 35 ] ; xx [ 120 ] = xx [ 0 ] * ( xx [ 115 ] - xx [ 119 ] ) ; xx [ 121
] = xx [ 35 ] * xx [ 35 ] ; xx [ 122 ] = xx [ 33 ] * xx [ 33 ] ; xx [ 123 ] =
xx [ 32 ] * xx [ 33 ] ; xx [ 124 ] = xx [ 34 ] * xx [ 35 ] ; xx [ 125 ] = xx
[ 120 ] ; xx [ 126 ] = xx [ 12 ] - ( xx [ 121 ] + xx [ 122 ] ) * xx [ 0 ] ;
xx [ 127 ] = ( xx [ 123 ] + xx [ 124 ] ) * xx [ 0 ] ; xx [ 128 ] = xx [ 4 ] *
xx [ 27 ] + xx [ 1 ] * xx [ 50 ] ; xx [ 129 ] = xx [ 128 ] * xx [ 0 ] ; xx [
130 ] = xx [ 109 ] * xx [ 129 ] ; xx [ 131 ] = xx [ 108 ] * xx [ 129 ] ; xx [
132 ] = xx [ 1 ] * xx [ 27 ] - xx [ 4 ] * xx [ 50 ] ; xx [ 27 ] = xx [ 0 ] *
xx [ 132 ] ; xx [ 50 ] = xx [ 110 ] * xx [ 27 ] ; xx [ 133 ] = xx [ 131 ] -
xx [ 50 ] ; xx [ 134 ] = xx [ 109 ] * xx [ 27 ] ; xx [ 135 ] = - xx [ 130 ] ;
xx [ 136 ] = xx [ 133 ] ; xx [ 137 ] = xx [ 134 ] ; pm_math_Vector3_cross_ra
( xx + 108 , xx + 135 , xx + 138 ) ; xx [ 135 ] = xx [ 0 ] * ( xx [ 138 ] -
xx [ 107 ] * xx [ 130 ] ) - xx [ 27 ] ; xx [ 136 ] = ( xx [ 107 ] * xx [ 133
] + xx [ 139 ] ) * xx [ 0 ] ; xx [ 137 ] = ( xx [ 107 ] * xx [ 134 ] + xx [
140 ] ) * xx [ 0 ] - xx [ 129 ] ; xx [ 130 ] = xx [ 32 ] * xx [ 32 ] ; xx [
133 ] = xx [ 33 ] * xx [ 35 ] ; xx [ 134 ] = xx [ 32 ] * xx [ 34 ] ; xx [ 138
] = ( xx [ 130 ] + xx [ 122 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 139 ] = ( xx [
115 ] + xx [ 119 ] ) * xx [ 0 ] ; xx [ 140 ] = xx [ 0 ] * ( xx [ 133 ] - xx [
134 ] ) ; xx [ 122 ] = xx [ 37 ] * xx [ 41 ] ; xx [ 37 ] = xx [ 0 ] * xx [
122 ] ; xx [ 141 ] = xx [ 109 ] * xx [ 37 ] ; xx [ 142 ] = xx [ 108 ] * xx [
37 ] ; xx [ 143 ] = ( xx [ 107 ] * xx [ 141 ] + xx [ 110 ] * xx [ 142 ] ) *
xx [ 0 ] ; xx [ 144 ] = xx [ 0 ] * ( xx [ 110 ] * xx [ 141 ] - xx [ 107 ] *
xx [ 142 ] ) ; xx [ 145 ] = xx [ 37 ] - ( xx [ 108 ] * xx [ 142 ] + xx [ 109
] * xx [ 141 ] ) * xx [ 0 ] ; xx [ 141 ] = xx [ 110 ] * xx [ 110 ] ; xx [ 146
] = xx [ 107 ] * xx [ 109 ] ; xx [ 147 ] = xx [ 108 ] * xx [ 110 ] ; xx [ 148
] = ( xx [ 56 ] + xx [ 141 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 149 ] = - ( ( xx
[ 49 ] + xx [ 42 ] ) * xx [ 0 ] ) ; xx [ 150 ] = xx [ 0 ] * ( xx [ 146 ] - xx
[ 147 ] ) ; xx [ 56 ] = xx [ 14 ] * xx [ 20 ] - xx [ 3 ] * xx [ 13 ] ; xx [ 3
] = xx [ 0 ] * xx [ 56 ] ; xx [ 13 ] = xx [ 34 ] * xx [ 3 ] ; xx [ 14 ] = xx
[ 33 ] * xx [ 3 ] ; xx [ 20 ] = xx [ 26 ] + xx [ 14 ] ; xx [ 26 ] = xx [ 34 ]
* xx [ 25 ] ; xx [ 151 ] = xx [ 13 ] ; xx [ 152 ] = - xx [ 20 ] ; xx [ 153 ]
= xx [ 26 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 151 , xx + 154 ) ; xx
[ 151 ] = ( xx [ 32 ] * xx [ 13 ] + xx [ 154 ] ) * xx [ 0 ] - xx [ 25 ] ; xx
[ 152 ] = xx [ 0 ] * ( xx [ 155 ] - xx [ 20 ] * xx [ 32 ] ) ; xx [ 153 ] = xx
[ 3 ] + ( xx [ 32 ] * xx [ 26 ] + xx [ 156 ] ) * xx [ 0 ] ; xx [ 154 ] = ( xx
[ 147 ] + xx [ 146 ] ) * xx [ 0 ] ; xx [ 155 ] = xx [ 0 ] * ( xx [ 57 ] - xx
[ 58 ] ) ; xx [ 156 ] = ( xx [ 54 ] + xx [ 141 ] ) * xx [ 0 ] - xx [ 12 ] ;
xx [ 13 ] = xx [ 11 ] * xx [ 8 ] ; xx [ 8 ] = xx [ 0 ] * xx [ 13 ] ; xx [ 11
] = xx [ 34 ] * xx [ 8 ] ; xx [ 20 ] = xx [ 33 ] * xx [ 8 ] ; xx [ 157 ] = (
xx [ 32 ] * xx [ 11 ] + xx [ 35 ] * xx [ 20 ] ) * xx [ 0 ] ; xx [ 158 ] = xx
[ 0 ] * ( xx [ 35 ] * xx [ 11 ] - xx [ 32 ] * xx [ 20 ] ) ; xx [ 159 ] = xx [
8 ] - ( xx [ 33 ] * xx [ 20 ] + xx [ 34 ] * xx [ 11 ] ) * xx [ 0 ] ; xx [ 11
] = xx [ 34 ] * xx [ 34 ] ; xx [ 160 ] = ( xx [ 11 ] + xx [ 121 ] ) * xx [ 0
] - xx [ 12 ] ; xx [ 161 ] = - ( ( xx [ 119 ] + xx [ 115 ] ) * xx [ 0 ] ) ;
xx [ 162 ] = xx [ 0 ] * ( xx [ 134 ] - xx [ 133 ] ) ; xx [ 26 ] = ( xx [ 4 ]
* xx [ 4 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 1 ] = xx [
110 ] * xx [ 129 ] ; xx [ 4 ] = xx [ 26 ] * xx [ 110 ] ; xx [ 115 ] = xx [ 26
] * xx [ 109 ] ; xx [ 119 ] = xx [ 131 ] - xx [ 115 ] ; xx [ 163 ] = - xx [ 1
] ; xx [ 164 ] = xx [ 4 ] ; xx [ 165 ] = xx [ 119 ] ;
pm_math_Vector3_cross_ra ( xx + 108 , xx + 163 , xx + 166 ) ; xx [ 163 ] = xx
[ 26 ] + xx [ 0 ] * ( xx [ 166 ] - xx [ 107 ] * xx [ 1 ] ) ; xx [ 164 ] = xx
[ 129 ] + ( xx [ 107 ] * xx [ 4 ] + xx [ 167 ] ) * xx [ 0 ] ; xx [ 165 ] = (
xx [ 107 ] * xx [ 119 ] + xx [ 168 ] ) * xx [ 0 ] ; xx [ 166 ] = xx [ 120 ] ;
xx [ 167 ] = ( xx [ 130 ] + xx [ 11 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 168 ] =
( xx [ 124 ] + xx [ 123 ] ) * xx [ 0 ] ; xx [ 1 ] = xx [ 12 ] - xx [ 0 ] * xx
[ 41 ] * xx [ 41 ] ; xx [ 4 ] = xx [ 110 ] * xx [ 37 ] ; xx [ 11 ] = xx [ 110
] * xx [ 1 ] ; xx [ 41 ] = xx [ 109 ] * xx [ 1 ] ; xx [ 119 ] = xx [ 142 ] +
xx [ 41 ] ; xx [ 169 ] = xx [ 4 ] ; xx [ 170 ] = xx [ 11 ] ; xx [ 171 ] = -
xx [ 119 ] ; pm_math_Vector3_cross_ra ( xx + 108 , xx + 169 , xx + 172 ) ; xx
[ 169 ] = xx [ 1 ] + ( xx [ 107 ] * xx [ 4 ] + xx [ 172 ] ) * xx [ 0 ] ; xx [
170 ] = ( xx [ 107 ] * xx [ 11 ] + xx [ 173 ] ) * xx [ 0 ] - xx [ 37 ] ; xx [
171 ] = xx [ 0 ] * ( xx [ 174 ] - xx [ 119 ] * xx [ 107 ] ) ; xx [ 4 ] = xx [
35 ] * xx [ 3 ] ; xx [ 11 ] = xx [ 35 ] * xx [ 18 ] ; xx [ 119 ] = xx [ 14 ]
+ xx [ 22 ] ; xx [ 172 ] = xx [ 4 ] ; xx [ 173 ] = xx [ 11 ] ; xx [ 174 ] = -
xx [ 119 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 172 , xx + 175 ) ; xx
[ 172 ] = xx [ 18 ] + ( xx [ 32 ] * xx [ 4 ] + xx [ 175 ] ) * xx [ 0 ] ; xx [
173 ] = ( xx [ 32 ] * xx [ 11 ] + xx [ 176 ] ) * xx [ 0 ] - xx [ 3 ] ; xx [
174 ] = xx [ 0 ] * ( xx [ 177 ] - xx [ 119 ] * xx [ 32 ] ) ; xx [ 4 ] = xx [
108 ] * xx [ 108 ] ; xx [ 175 ] = ( xx [ 54 ] + xx [ 4 ] ) * xx [ 0 ] - xx [
12 ] ; xx [ 176 ] = ( xx [ 42 ] + xx [ 49 ] ) * xx [ 0 ] ; xx [ 177 ] = xx [
0 ] * ( xx [ 147 ] - xx [ 146 ] ) ; xx [ 11 ] = xx [ 35 ] * xx [ 8 ] ; xx [
14 ] = xx [ 35 ] * xx [ 59 ] ; xx [ 22 ] = xx [ 20 ] + xx [ 114 ] ; xx [ 178
] = xx [ 11 ] ; xx [ 179 ] = xx [ 14 ] ; xx [ 180 ] = - xx [ 22 ] ;
pm_math_Vector3_cross_ra ( xx + 33 , xx + 178 , xx + 181 ) ; xx [ 178 ] = xx
[ 59 ] + ( xx [ 32 ] * xx [ 11 ] + xx [ 181 ] ) * xx [ 0 ] ; xx [ 179 ] = (
xx [ 32 ] * xx [ 14 ] + xx [ 182 ] ) * xx [ 0 ] - xx [ 8 ] ; xx [ 180 ] = xx
[ 0 ] * ( xx [ 183 ] - xx [ 22 ] * xx [ 32 ] ) ; xx [ 11 ] = xx [ 115 ] + xx
[ 50 ] ; xx [ 14 ] = xx [ 26 ] * xx [ 108 ] ; xx [ 20 ] = xx [ 108 ] * xx [
27 ] ; xx [ 181 ] = - xx [ 11 ] ; xx [ 182 ] = xx [ 14 ] ; xx [ 183 ] = xx [
20 ] ; pm_math_Vector3_cross_ra ( xx + 108 , xx + 181 , xx + 184 ) ; xx [ 181
] = xx [ 0 ] * ( xx [ 184 ] - xx [ 11 ] * xx [ 107 ] ) ; xx [ 182 ] = xx [ 27
] + ( xx [ 107 ] * xx [ 14 ] + xx [ 185 ] ) * xx [ 0 ] ; xx [ 183 ] = ( xx [
107 ] * xx [ 20 ] + xx [ 186 ] ) * xx [ 0 ] - xx [ 26 ] ; xx [ 184 ] = ( xx [
133 ] + xx [ 134 ] ) * xx [ 0 ] ; xx [ 185 ] = xx [ 0 ] * ( xx [ 124 ] - xx [
123 ] ) ; xx [ 186 ] = ( xx [ 130 ] + xx [ 121 ] ) * xx [ 0 ] - xx [ 12 ] ;
xx [ 11 ] = xx [ 108 ] * xx [ 1 ] ; xx [ 119 ] = - ( ( xx [ 107 ] * xx [ 41 ]
+ xx [ 110 ] * xx [ 11 ] ) * xx [ 0 ] ) ; xx [ 120 ] = xx [ 0 ] * ( xx [ 107
] * xx [ 11 ] - xx [ 110 ] * xx [ 41 ] ) ; xx [ 121 ] = ( xx [ 108 ] * xx [
11 ] + xx [ 109 ] * xx [ 41 ] ) * xx [ 0 ] - xx [ 1 ] ; xx [ 187 ] = xx [ 52
] ; xx [ 188 ] = xx [ 12 ] - ( xx [ 141 ] + xx [ 4 ] ) * xx [ 0 ] ; xx [ 189
] = ( xx [ 58 ] + xx [ 57 ] ) * xx [ 0 ] ; xx [ 190 ] =
pm_math_Vector3_dot_ra ( xx + 38 , xx + 111 ) ; xx [ 191 ] =
pm_math_Vector3_dot_ra ( xx + 116 , xx + 111 ) ; xx [ 192 ] =
pm_math_Vector3_dot_ra ( xx + 125 , xx + 111 ) ; xx [ 193 ] = xx [ 64 ] ; xx
[ 194 ] = xx [ 64 ] ; xx [ 195 ] = xx [ 64 ] ; xx [ 196 ] =
pm_math_Vector3_dot_ra ( xx + 135 , xx + 138 ) ; xx [ 197 ] =
pm_math_Vector3_dot_ra ( xx + 143 , xx + 138 ) ; xx [ 198 ] =
pm_math_Vector3_dot_ra ( xx + 148 , xx + 138 ) ; xx [ 199 ] =
pm_math_Vector3_dot_ra ( xx + 151 , xx + 154 ) ; xx [ 200 ] =
pm_math_Vector3_dot_ra ( xx + 157 , xx + 154 ) ; xx [ 201 ] =
pm_math_Vector3_dot_ra ( xx + 160 , xx + 154 ) ; xx [ 202 ] = xx [ 64 ] ; xx
[ 203 ] = xx [ 64 ] ; xx [ 204 ] = xx [ 64 ] ; xx [ 205 ] =
pm_math_Vector3_dot_ra ( xx + 163 , xx + 166 ) ; xx [ 206 ] =
pm_math_Vector3_dot_ra ( xx + 169 , xx + 166 ) ; xx [ 207 ] = xx [ 64 ] ; xx
[ 208 ] = pm_math_Vector3_dot_ra ( xx + 172 , xx + 175 ) ; xx [ 209 ] =
pm_math_Vector3_dot_ra ( xx + 178 , xx + 175 ) ; xx [ 210 ] = xx [ 64 ] ; xx
[ 211 ] = xx [ 64 ] ; xx [ 212 ] = xx [ 64 ] ; xx [ 213 ] = xx [ 64 ] ; xx [
214 ] = pm_math_Vector3_dot_ra ( xx + 181 , xx + 184 ) ; xx [ 215 ] =
pm_math_Vector3_dot_ra ( xx + 119 , xx + 184 ) ; xx [ 216 ] =
pm_math_Vector3_dot_ra ( xx + 187 , xx + 184 ) ; xx [ 4 ] = xx [ 66 ] * xx [
17 ] ; xx [ 11 ] = xx [ 0 ] * xx [ 19 ] * xx [ 4 ] ; xx [ 12 ] = xx [ 10 ] *
xx [ 11 ] ; xx [ 14 ] = xx [ 66 ] - xx [ 0 ] * xx [ 4 ] * xx [ 17 ] ; xx [ 4
] = xx [ 10 ] * xx [ 14 ] ; xx [ 17 ] = xx [ 0 ] * ( xx [ 10 ] * xx [ 12 ] +
xx [ 4 ] * xx [ 15 ] ) - xx [ 11 ] ; xx [ 11 ] = xx [ 7 ] * xx [ 17 ] ; xx [
19 ] = xx [ 14 ] - ( xx [ 10 ] * xx [ 4 ] - xx [ 12 ] * xx [ 15 ] ) * xx [ 0
] ; xx [ 4 ] = xx [ 7 ] * xx [ 19 ] ; xx [ 10 ] = xx [ 17 ] - ( xx [ 7 ] * xx
[ 11 ] - xx [ 4 ] * xx [ 16 ] ) * xx [ 0 ] ; xx [ 12 ] = xx [ 68 ] + xx [ 70
] + xx [ 72 ] ; xx [ 14 ] = xx [ 12 ] * xx [ 21 ] ; xx [ 15 ] = xx [ 21 ] *
xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] - xx [ 0 ] * ( xx [ 14 ] * xx [ 9 ] + xx [
21 ] * xx [ 15 ] ) ; xx [ 10 ] = xx [ 19 ] - xx [ 0 ] * ( xx [ 11 ] * xx [ 16
] + xx [ 7 ] * xx [ 4 ] ) + xx [ 74 ] ; xx [ 4 ] = xx [ 10 ] * xx [ 6 ] ; xx
[ 7 ] = xx [ 17 ] * xx [ 6 ] ; xx [ 38 ] = xx [ 17 ] - ( xx [ 23 ] * xx [ 4 ]
+ xx [ 7 ] * xx [ 6 ] ) * xx [ 0 ] ; xx [ 39 ] = xx [ 12 ] - ( xx [ 21 ] * xx
[ 14 ] - xx [ 15 ] * xx [ 9 ] ) * xx [ 0 ] + xx [ 76 ] ; xx [ 40 ] = xx [ 10
] + xx [ 0 ] * ( xx [ 23 ] * xx [ 7 ] - xx [ 4 ] * xx [ 6 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 28 , xx + 38 , xx + 9 ) ; xx [ 4 ]
= xx [ 10 ] + xx [ 80 ] * xx [ 18 ] + xx [ 81 ] * xx [ 59 ] ; xx [ 6 ] = xx [
4 ] * xx [ 34 ] ; xx [ 7 ] = xx [ 11 ] + xx [ 0 ] * xx [ 24 ] * xx [ 80 ] +
xx [ 82 ] ; xx [ 12 ] = xx [ 7 ] * xx [ 35 ] ; xx [ 14 ] = xx [ 6 ] + xx [ 12
] ; xx [ 15 ] = xx [ 4 ] * xx [ 33 ] ; xx [ 16 ] = xx [ 7 ] * xx [ 33 ] ; xx
[ 19 ] = - xx [ 14 ] ; xx [ 20 ] = xx [ 15 ] ; xx [ 21 ] = xx [ 16 ] ;
pm_math_Vector3_cross_ra ( xx + 33 , xx + 19 , xx + 22 ) ; xx [ 19 ] = xx [ 0
] * ( xx [ 22 ] - xx [ 14 ] * xx [ 32 ] ) ; xx [ 20 ] = xx [ 7 ] + ( xx [ 32
] * xx [ 15 ] + xx [ 23 ] ) * xx [ 0 ] ; xx [ 21 ] = ( xx [ 32 ] * xx [ 16 ]
+ xx [ 24 ] ) * xx [ 0 ] - xx [ 4 ] ; xx [ 14 ] = xx [ 90 ] * xx [ 43 ] ; xx
[ 15 ] = xx [ 0 ] * xx [ 46 ] * xx [ 14 ] ; xx [ 16 ] = xx [ 48 ] * xx [ 15 ]
; xx [ 17 ] = xx [ 90 ] - xx [ 0 ] * xx [ 14 ] * xx [ 43 ] ; xx [ 14 ] = xx [
48 ] * xx [ 17 ] ; xx [ 22 ] = xx [ 0 ] * ( xx [ 48 ] * xx [ 16 ] + xx [ 14 ]
* xx [ 45 ] ) - xx [ 15 ] ; xx [ 15 ] = xx [ 51 ] * xx [ 22 ] ; xx [ 23 ] =
xx [ 17 ] - ( xx [ 48 ] * xx [ 14 ] - xx [ 16 ] * xx [ 45 ] ) * xx [ 0 ] ; xx
[ 14 ] = xx [ 51 ] * xx [ 23 ] ; xx [ 16 ] = xx [ 22 ] - ( xx [ 51 ] * xx [
15 ] - xx [ 14 ] * xx [ 47 ] ) * xx [ 0 ] ; xx [ 17 ] = xx [ 92 ] + xx [ 94 ]
+ xx [ 96 ] ; xx [ 22 ] = xx [ 17 ] * xx [ 53 ] ; xx [ 24 ] = xx [ 53 ] * xx
[ 16 ] ; xx [ 28 ] = xx [ 16 ] - xx [ 0 ] * ( xx [ 22 ] * xx [ 44 ] + xx [ 53
] * xx [ 24 ] ) ; xx [ 16 ] = xx [ 23 ] - xx [ 0 ] * ( xx [ 15 ] * xx [ 47 ]
+ xx [ 51 ] * xx [ 14 ] ) + xx [ 98 ] ; xx [ 14 ] = xx [ 16 ] * xx [ 36 ] ;
xx [ 15 ] = xx [ 28 ] * xx [ 36 ] ; xx [ 29 ] = xx [ 28 ] - ( xx [ 55 ] * xx
[ 14 ] + xx [ 15 ] * xx [ 36 ] ) * xx [ 0 ] ; xx [ 30 ] = xx [ 17 ] - ( xx [
53 ] * xx [ 22 ] - xx [ 24 ] * xx [ 44 ] ) * xx [ 0 ] + xx [ 100 ] ; xx [ 31
] = xx [ 16 ] + xx [ 0 ] * ( xx [ 55 ] * xx [ 15 ] - xx [ 14 ] * xx [ 36 ] )
; pm_math_Quaternion_inverseXform_ra ( xx + 60 , xx + 29 , xx + 14 ) ; xx [
17 ] = xx [ 14 ] + xx [ 0 ] * xx [ 105 ] * xx [ 122 ] - xx [ 0 ] * xx [ 128 ]
* xx [ 104 ] ; xx [ 22 ] = xx [ 17 ] * xx [ 109 ] ; xx [ 23 ] = xx [ 16 ] +
xx [ 0 ] * xx [ 104 ] * xx [ 132 ] + xx [ 106 ] ; xx [ 24 ] = xx [ 23 ] * xx
[ 110 ] ; xx [ 28 ] = xx [ 17 ] * xx [ 108 ] ; xx [ 29 ] = xx [ 24 ] + xx [
28 ] ; xx [ 30 ] = xx [ 23 ] * xx [ 109 ] ; xx [ 38 ] = xx [ 22 ] ; xx [ 39 ]
= - xx [ 29 ] ; xx [ 40 ] = xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 108 ,
xx + 38 , xx + 41 ) ; xx [ 38 ] = ( xx [ 107 ] * xx [ 22 ] + xx [ 41 ] ) * xx
[ 0 ] - xx [ 23 ] ; xx [ 39 ] = xx [ 0 ] * ( xx [ 42 ] - xx [ 29 ] * xx [ 107
] ) ; xx [ 40 ] = xx [ 17 ] + ( xx [ 107 ] * xx [ 30 ] + xx [ 43 ] ) * xx [ 0
] ; xx [ 22 ] = xx [ 9 ] + xx [ 0 ] * xx [ 80 ] * xx [ 56 ] + xx [ 0 ] * xx [
81 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 22 ] * xx [ 34 ] ; xx [ 29 ] = xx [ 22 ]
* xx [ 33 ] ; xx [ 30 ] = xx [ 12 ] + xx [ 29 ] ; xx [ 12 ] = xx [ 7 ] * xx [
34 ] ; xx [ 41 ] = xx [ 13 ] ; xx [ 42 ] = - xx [ 30 ] ; xx [ 43 ] = xx [ 12
] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 41 , xx + 44 ) ; xx [ 41 ] = (
xx [ 32 ] * xx [ 13 ] + xx [ 44 ] ) * xx [ 0 ] - xx [ 7 ] ; xx [ 42 ] = xx [
0 ] * ( xx [ 45 ] - xx [ 30 ] * xx [ 32 ] ) ; xx [ 43 ] = xx [ 22 ] + ( xx [
32 ] * xx [ 12 ] + xx [ 46 ] ) * xx [ 0 ] ; xx [ 7 ] = xx [ 15 ] + xx [ 26 ]
* xx [ 104 ] + xx [ 105 ] * xx [ 1 ] ; xx [ 12 ] = xx [ 17 ] * xx [ 110 ] ;
xx [ 13 ] = xx [ 7 ] * xx [ 110 ] ; xx [ 30 ] = xx [ 7 ] * xx [ 109 ] ; xx [
31 ] = xx [ 28 ] + xx [ 30 ] ; xx [ 44 ] = xx [ 12 ] ; xx [ 45 ] = xx [ 13 ]
; xx [ 46 ] = - xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 108 , xx + 44 ,
xx + 47 ) ; xx [ 44 ] = xx [ 7 ] + ( xx [ 107 ] * xx [ 12 ] + xx [ 47 ] ) *
xx [ 0 ] ; xx [ 45 ] = ( xx [ 107 ] * xx [ 13 ] + xx [ 48 ] ) * xx [ 0 ] - xx
[ 17 ] ; xx [ 46 ] = xx [ 0 ] * ( xx [ 49 ] - xx [ 31 ] * xx [ 107 ] ) ; xx [
12 ] = xx [ 22 ] * xx [ 35 ] ; xx [ 13 ] = xx [ 4 ] * xx [ 35 ] ; xx [ 17 ] =
xx [ 29 ] + xx [ 6 ] ; xx [ 47 ] = xx [ 12 ] ; xx [ 48 ] = xx [ 13 ] ; xx [
49 ] = - xx [ 17 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 47 , xx + 50 )
; xx [ 47 ] = xx [ 4 ] + ( xx [ 32 ] * xx [ 12 ] + xx [ 50 ] ) * xx [ 0 ] ;
xx [ 48 ] = ( xx [ 32 ] * xx [ 13 ] + xx [ 51 ] ) * xx [ 0 ] - xx [ 22 ] ; xx
[ 49 ] = xx [ 0 ] * ( xx [ 52 ] - xx [ 17 ] * xx [ 32 ] ) ; xx [ 4 ] = xx [
30 ] + xx [ 24 ] ; xx [ 6 ] = xx [ 7 ] * xx [ 108 ] ; xx [ 12 ] = xx [ 23 ] *
xx [ 108 ] ; xx [ 28 ] = - xx [ 4 ] ; xx [ 29 ] = xx [ 6 ] ; xx [ 30 ] = xx [
12 ] ; pm_math_Vector3_cross_ra ( xx + 108 , xx + 28 , xx + 50 ) ; xx [ 28 ]
= xx [ 0 ] * ( xx [ 50 ] - xx [ 4 ] * xx [ 107 ] ) ; xx [ 29 ] = xx [ 23 ] +
( xx [ 107 ] * xx [ 6 ] + xx [ 51 ] ) * xx [ 0 ] ; xx [ 30 ] = ( xx [ 107 ] *
xx [ 12 ] + xx [ 52 ] ) * xx [ 0 ] - xx [ 7 ] ; xx [ 22 ] = - (
pm_math_Vector3_dot_ra ( xx + 19 , xx + 111 ) + pm_math_Vector3_dot_ra ( xx +
138 , xx + 38 ) ) ; xx [ 23 ] = - ( pm_math_Vector3_dot_ra ( xx + 41 , xx +
154 ) + pm_math_Vector3_dot_ra ( xx + 166 , xx + 44 ) ) ; xx [ 24 ] = - (
pm_math_Vector3_dot_ra ( xx + 47 , xx + 175 ) + pm_math_Vector3_dot_ra ( xx +
184 , xx + 28 ) ) ; memcpy ( xx + 217 , xx + 190 , 27 * sizeof ( double ) ) ;
factorAndSolveWide ( 3 , 9 , xx + 217 , xx + 19 , xx + 28 , ii + 0 , xx + 22
, xx [ 2 ] , xx + 38 ) ; xx [ 2 ] = xx [ 80 ] + xx [ 38 ] ; xx [ 4 ] = xx [
81 ] + xx [ 39 ] ; xx [ 6 ] = xx [ 82 ] + xx [ 40 ] ; xx [ 7 ] = xx [ 104 ] +
xx [ 44 ] ; xx [ 12 ] = xx [ 105 ] + xx [ 45 ] ; xx [ 13 ] = xx [ 106 ] + xx
[ 46 ] ; xx [ 187 ] = xx [ 65 ] ; xx [ 188 ] = xx [ 66 ] ; xx [ 189 ] = xx [
67 ] ; xx [ 190 ] = xx [ 68 ] ; xx [ 191 ] = xx [ 69 ] ; xx [ 192 ] = xx [ 70
] ; xx [ 193 ] = xx [ 71 ] ; xx [ 194 ] = xx [ 72 ] ; xx [ 195 ] = xx [ 73 ]
; xx [ 196 ] = xx [ 74 ] ; xx [ 197 ] = xx [ 75 ] ; xx [ 198 ] = xx [ 76 ] ;
xx [ 199 ] = xx [ 77 ] ; xx [ 200 ] = xx [ 78 ] ; xx [ 201 ] = xx [ 79 ] ; xx
[ 202 ] = xx [ 2 ] ; xx [ 203 ] = xx [ 4 ] ; xx [ 204 ] = xx [ 6 ] ; xx [ 205
] = xx [ 83 ] ; xx [ 206 ] = xx [ 84 ] ; xx [ 207 ] = xx [ 85 ] ; xx [ 208 ]
= xx [ 86 ] + xx [ 41 ] ; xx [ 209 ] = xx [ 87 ] + xx [ 42 ] ; xx [ 210 ] =
xx [ 88 ] + xx [ 43 ] ; xx [ 211 ] = xx [ 89 ] ; xx [ 212 ] = xx [ 90 ] ; xx
[ 213 ] = xx [ 91 ] ; xx [ 214 ] = xx [ 92 ] ; xx [ 215 ] = xx [ 93 ] ; xx [
216 ] = xx [ 94 ] ; xx [ 217 ] = xx [ 95 ] ; xx [ 218 ] = xx [ 96 ] ; xx [
219 ] = xx [ 97 ] ; xx [ 220 ] = xx [ 98 ] ; xx [ 221 ] = xx [ 99 ] ; xx [
222 ] = xx [ 100 ] ; xx [ 223 ] = xx [ 101 ] ; xx [ 224 ] = xx [ 102 ] ; xx [
225 ] = xx [ 103 ] ; xx [ 226 ] = xx [ 7 ] ; xx [ 227 ] = xx [ 12 ] ; xx [
228 ] = xx [ 13 ] ; xx [ 17 ] = xx [ 10 ] + xx [ 2 ] * xx [ 18 ] + xx [ 4 ] *
xx [ 59 ] ; xx [ 10 ] = xx [ 17 ] * xx [ 34 ] ; xx [ 18 ] = xx [ 11 ] + xx [
2 ] * xx [ 25 ] + xx [ 6 ] ; xx [ 6 ] = xx [ 18 ] * xx [ 35 ] ; xx [ 11 ] =
xx [ 10 ] + xx [ 6 ] ; xx [ 19 ] = xx [ 17 ] * xx [ 33 ] ; xx [ 20 ] = xx [
18 ] * xx [ 33 ] ; xx [ 21 ] = - xx [ 11 ] ; xx [ 22 ] = xx [ 19 ] ; xx [ 23
] = xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 21 , xx + 28 ) ; xx
[ 21 ] = xx [ 0 ] * ( xx [ 28 ] - xx [ 11 ] * xx [ 32 ] ) ; xx [ 22 ] = xx [
18 ] + ( xx [ 32 ] * xx [ 19 ] + xx [ 29 ] ) * xx [ 0 ] ; xx [ 23 ] = ( xx [
32 ] * xx [ 20 ] + xx [ 30 ] ) * xx [ 0 ] - xx [ 17 ] ; xx [ 11 ] = xx [ 14 ]
+ xx [ 12 ] * xx [ 37 ] - xx [ 7 ] * xx [ 129 ] ; xx [ 14 ] = xx [ 11 ] * xx
[ 109 ] ; xx [ 19 ] = xx [ 16 ] + xx [ 7 ] * xx [ 27 ] + xx [ 13 ] ; xx [ 13
] = xx [ 19 ] * xx [ 110 ] ; xx [ 16 ] = xx [ 11 ] * xx [ 108 ] ; xx [ 20 ] =
xx [ 13 ] + xx [ 16 ] ; xx [ 24 ] = xx [ 19 ] * xx [ 109 ] ; xx [ 27 ] = xx [
14 ] ; xx [ 28 ] = - xx [ 20 ] ; xx [ 29 ] = xx [ 24 ] ;
pm_math_Vector3_cross_ra ( xx + 108 , xx + 27 , xx + 36 ) ; xx [ 27 ] = ( xx
[ 107 ] * xx [ 14 ] + xx [ 36 ] ) * xx [ 0 ] - xx [ 19 ] ; xx [ 28 ] = xx [ 0
] * ( xx [ 37 ] - xx [ 20 ] * xx [ 107 ] ) ; xx [ 29 ] = xx [ 11 ] + ( xx [
107 ] * xx [ 24 ] + xx [ 38 ] ) * xx [ 0 ] ; xx [ 14 ] = xx [ 9 ] + xx [ 2 ]
* xx [ 3 ] + xx [ 4 ] * xx [ 8 ] ; xx [ 2 ] = xx [ 14 ] * xx [ 34 ] ; xx [ 3
] = xx [ 14 ] * xx [ 33 ] ; xx [ 4 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 6 ] = xx [
18 ] * xx [ 34 ] ; xx [ 36 ] = xx [ 2 ] ; xx [ 37 ] = - xx [ 4 ] ; xx [ 38 ]
= xx [ 6 ] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 36 , xx + 39 ) ; xx [
36 ] = ( xx [ 32 ] * xx [ 2 ] + xx [ 39 ] ) * xx [ 0 ] - xx [ 18 ] ; xx [ 37
] = xx [ 0 ] * ( xx [ 40 ] - xx [ 4 ] * xx [ 32 ] ) ; xx [ 38 ] = xx [ 14 ] +
( xx [ 32 ] * xx [ 6 ] + xx [ 41 ] ) * xx [ 0 ] ; xx [ 2 ] = xx [ 15 ] + xx [
7 ] * xx [ 26 ] + xx [ 12 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 11 ] * xx [ 110 ] ;
xx [ 4 ] = xx [ 2 ] * xx [ 110 ] ; xx [ 6 ] = xx [ 2 ] * xx [ 109 ] ; xx [ 7
] = xx [ 16 ] + xx [ 6 ] ; xx [ 24 ] = xx [ 1 ] ; xx [ 25 ] = xx [ 4 ] ; xx [
26 ] = - xx [ 7 ] ; pm_math_Vector3_cross_ra ( xx + 108 , xx + 24 , xx + 39 )
; xx [ 24 ] = xx [ 2 ] + ( xx [ 107 ] * xx [ 1 ] + xx [ 39 ] ) * xx [ 0 ] ;
xx [ 25 ] = ( xx [ 107 ] * xx [ 4 ] + xx [ 40 ] ) * xx [ 0 ] - xx [ 11 ] ; xx
[ 26 ] = xx [ 0 ] * ( xx [ 41 ] - xx [ 7 ] * xx [ 107 ] ) ; xx [ 1 ] = xx [
14 ] * xx [ 35 ] ; xx [ 4 ] = xx [ 17 ] * xx [ 35 ] ; xx [ 7 ] = xx [ 3 ] +
xx [ 10 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = - xx [ 7
] ; pm_math_Vector3_cross_ra ( xx + 33 , xx + 8 , xx + 39 ) ; xx [ 8 ] = xx [
17 ] + ( xx [ 32 ] * xx [ 1 ] + xx [ 39 ] ) * xx [ 0 ] ; xx [ 9 ] = ( xx [ 32
] * xx [ 4 ] + xx [ 40 ] ) * xx [ 0 ] - xx [ 14 ] ; xx [ 10 ] = xx [ 0 ] * (
xx [ 41 ] - xx [ 7 ] * xx [ 32 ] ) ; xx [ 1 ] = xx [ 6 ] + xx [ 13 ] ; xx [ 3
] = xx [ 2 ] * xx [ 108 ] ; xx [ 4 ] = xx [ 19 ] * xx [ 108 ] ; xx [ 11 ] = -
xx [ 1 ] ; xx [ 12 ] = xx [ 3 ] ; xx [ 13 ] = xx [ 4 ] ;
pm_math_Vector3_cross_ra ( xx + 108 , xx + 11 , xx + 14 ) ; xx [ 11 ] = xx [
0 ] * ( xx [ 14 ] - xx [ 1 ] * xx [ 107 ] ) ; xx [ 12 ] = xx [ 19 ] + ( xx [
107 ] * xx [ 3 ] + xx [ 15 ] ) * xx [ 0 ] ; xx [ 13 ] = ( xx [ 107 ] * xx [ 4
] + xx [ 16 ] ) * xx [ 0 ] - xx [ 2 ] ; xx [ 0 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 21 , xx + 111 ) + pm_math_Vector3_dot_ra ( xx +
138 , xx + 27 ) ) ; xx [ 1 ] = fabs ( pm_math_Vector3_dot_ra ( xx + 36 , xx +
154 ) + pm_math_Vector3_dot_ra ( xx + 166 , xx + 24 ) ) ; xx [ 2 ] = fabs (
pm_math_Vector3_dot_ra ( xx + 8 , xx + 175 ) + pm_math_Vector3_dot_ra ( xx +
184 , xx + 11 ) ) ; ii [ 0 ] = 0 ; { int ll ; for ( ll = 1 ; ll < 3 ; ++ ll )
if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 0 ; xx [ 3 ]
= xx [ 0 + ( ii [ 0 ] ) ] ; xx [ 0 ] = xx [ 3 ] - xx [ 5 ] ; if ( xx [ 0 ] <
0.0 ) ii [ 1 ] = - 1 ; else if ( xx [ 0 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [
1 ] = 0 ; ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [
2 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'pp/Robotic Arm 2/wrist_3_link/Cartesian Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } state [ 0 ] = xx [ 187 ] ; state [ 1 ] = xx [ 188 ] ;
state [ 2 ] = xx [ 189 ] ; state [ 3 ] = xx [ 190 ] ; state [ 4 ] = xx [ 191
] ; state [ 5 ] = xx [ 192 ] ; state [ 6 ] = xx [ 193 ] ; state [ 7 ] = xx [
194 ] ; state [ 8 ] = xx [ 195 ] ; state [ 9 ] = xx [ 196 ] ; state [ 10 ] =
xx [ 197 ] ; state [ 11 ] = xx [ 198 ] ; state [ 12 ] = xx [ 199 ] ; state [
13 ] = xx [ 200 ] ; state [ 14 ] = xx [ 201 ] ; state [ 15 ] = xx [ 202 ] ;
state [ 16 ] = xx [ 203 ] ; state [ 17 ] = xx [ 204 ] ; state [ 18 ] = xx [
205 ] ; state [ 19 ] = xx [ 206 ] ; state [ 20 ] = xx [ 207 ] ; state [ 21 ]
= xx [ 208 ] ; state [ 22 ] = xx [ 209 ] ; state [ 23 ] = xx [ 210 ] ; state
[ 24 ] = xx [ 211 ] ; state [ 25 ] = xx [ 212 ] ; state [ 26 ] = xx [ 213 ] ;
state [ 27 ] = xx [ 214 ] ; state [ 28 ] = xx [ 215 ] ; state [ 29 ] = xx [
216 ] ; state [ 30 ] = xx [ 217 ] ; state [ 31 ] = xx [ 218 ] ; state [ 32 ]
= xx [ 219 ] ; state [ 33 ] = xx [ 220 ] ; state [ 34 ] = xx [ 221 ] ; state
[ 35 ] = xx [ 222 ] ; state [ 36 ] = xx [ 223 ] ; state [ 37 ] = xx [ 224 ] ;
state [ 38 ] = xx [ 225 ] ; state [ 39 ] = xx [ 226 ] ; state [ 40 ] = xx [
227 ] ; state [ 41 ] = xx [ 228 ] ; return NULL ; } void
pp_43e6ab1_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 37 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0
] = 0.5 ; xx [ 1 ] = xx [ 0 ] * state [ 10 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ;
xx [ 3 ] = 0.7071067811865476 ; xx [ 4 ] = xx [ 0 ] * state [ 6 ] ; xx [ 5 ]
= xx [ 3 ] * sin ( xx [ 4 ] ) ; xx [ 6 ] = xx [ 3 ] * cos ( xx [ 4 ] ) ; xx [
4 ] = xx [ 5 ] + xx [ 6 ] ; xx [ 7 ] = xx [ 0 ] * state [ 4 ] ; xx [ 8 ] = xx
[ 3 ] * sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 3 ] * cos ( xx [ 7 ] ) ; xx [ 7 ]
= xx [ 8 ] + xx [ 9 ] ; xx [ 10 ] = xx [ 0 ] * state [ 0 ] ; xx [ 11 ] = cos
( xx [ 10 ] ) ; xx [ 12 ] = xx [ 0 ] * state [ 2 ] ; xx [ 13 ] = sin ( xx [
12 ] ) ; xx [ 14 ] = xx [ 11 ] * xx [ 13 ] ; xx [ 15 ] = cos ( xx [ 12 ] ) ;
xx [ 12 ] = xx [ 11 ] * xx [ 15 ] ; xx [ 11 ] = xx [ 8 ] - xx [ 9 ] ; xx [ 8
] = xx [ 7 ] * xx [ 14 ] + xx [ 12 ] * xx [ 11 ] ; xx [ 9 ] = xx [ 14 ] * xx
[ 11 ] - xx [ 7 ] * xx [ 12 ] ; xx [ 12 ] = xx [ 5 ] - xx [ 6 ] ; xx [ 5 ] =
xx [ 4 ] * xx [ 8 ] - xx [ 9 ] * xx [ 12 ] ; xx [ 6 ] = xx [ 0 ] * state [ 8
] ; xx [ 14 ] = xx [ 3 ] * sin ( xx [ 6 ] ) ; xx [ 16 ] = xx [ 3 ] * cos ( xx
[ 6 ] ) ; xx [ 6 ] = xx [ 14 ] - xx [ 16 ] ; xx [ 17 ] = xx [ 14 ] + xx [ 16
] ; xx [ 14 ] = sin ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 14 ] * xx [ 13 ] ; xx [
13 ] = xx [ 15 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 11 ] - xx [ 7 ] *
xx [ 13 ] ; xx [ 15 ] = xx [ 7 ] * xx [ 10 ] + xx [ 13 ] * xx [ 11 ] ; xx [ 7
] = xx [ 14 ] * xx [ 12 ] - xx [ 4 ] * xx [ 15 ] ; xx [ 10 ] = xx [ 5 ] * xx
[ 6 ] + xx [ 17 ] * xx [ 7 ] ; xx [ 11 ] = cos ( xx [ 1 ] ) ; xx [ 1 ] = xx [
8 ] * xx [ 12 ] + xx [ 9 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 15 ] * xx [ 12 ] + xx
[ 14 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 1 ] * xx [ 6 ] + xx [ 8 ] * xx [ 17 ] ;
xx [ 9 ] = xx [ 1 ] * xx [ 17 ] - xx [ 8 ] * xx [ 6 ] ; xx [ 1 ] = xx [ 7 ] *
xx [ 6 ] - xx [ 17 ] * xx [ 5 ] ; xx [ 5 ] = xx [ 2 ] * xx [ 10 ] + xx [ 11 ]
* xx [ 4 ] ; xx [ 6 ] = xx [ 9 ] * xx [ 2 ] - xx [ 1 ] * xx [ 11 ] ; xx [ 7 ]
= - ( xx [ 11 ] * xx [ 10 ] - xx [ 2 ] * xx [ 4 ] ) ; xx [ 8 ] = - ( xx [ 9 ]
* xx [ 11 ] + xx [ 1 ] * xx [ 2 ] ) ; xx [ 1 ] = xx [ 0 ] * state [ 14 ] ; xx
[ 2 ] = sin ( xx [ 1 ] ) ; xx [ 4 ] = xx [ 0 ] * state [ 13 ] ; xx [ 9 ] =
cos ( xx [ 4 ] ) ; xx [ 10 ] = xx [ 0 ] * state [ 12 ] ; xx [ 11 ] = xx [ 3 ]
* sin ( xx [ 10 ] ) ; xx [ 12 ] = xx [ 9 ] * xx [ 11 ] ; xx [ 13 ] = xx [ 3 ]
* cos ( xx [ 10 ] ) ; xx [ 10 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 13 ] *
xx [ 10 ] ; xx [ 14 ] = xx [ 12 ] - xx [ 4 ] ; xx [ 15 ] = xx [ 12 ] + xx [ 4
] ; xx [ 4 ] = cos ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 11 ] * xx [ 10 ] ; xx [ 10
] = xx [ 9 ] * xx [ 13 ] ; xx [ 9 ] = xx [ 1 ] - xx [ 10 ] ; xx [ 11 ] = xx [
10 ] + xx [ 1 ] ; xx [ 16 ] = - ( xx [ 2 ] * xx [ 14 ] - xx [ 15 ] * xx [ 4 ]
) ; xx [ 17 ] = xx [ 2 ] * xx [ 9 ] - xx [ 11 ] * xx [ 4 ] ; xx [ 18 ] = xx [
4 ] * xx [ 9 ] + xx [ 11 ] * xx [ 2 ] ; xx [ 19 ] = xx [ 4 ] * xx [ 14 ] + xx
[ 15 ] * xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 5 , xx + 16 , xx + 9
) ; xx [ 1 ] = xx [ 9 ] * xx [ 9 ] ; xx [ 2 ] = 2.0 ; xx [ 4 ] = 1.0 ; xx [ 5
] = xx [ 10 ] * xx [ 11 ] ; xx [ 6 ] = xx [ 9 ] * xx [ 12 ] ; xx [ 7 ] = xx [
10 ] * xx [ 12 ] ; xx [ 8 ] = xx [ 9 ] * xx [ 11 ] ; xx [ 13 ] = ( xx [ 1 ] +
xx [ 10 ] * xx [ 10 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 14 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 15 ] = xx [ 2 ] * ( xx [ 7 ] - xx [ 8 ] ) ; xx [ 16 ]
= xx [ 0 ] * state [ 34 ] ; xx [ 17 ] = sin ( xx [ 16 ] ) ; xx [ 18 ] = xx [
0 ] * state [ 24 ] ; xx [ 19 ] = sin ( xx [ 18 ] ) ; xx [ 20 ] = xx [ 0 ] *
state [ 26 ] ; xx [ 21 ] = sin ( xx [ 20 ] ) ; xx [ 22 ] = xx [ 19 ] * xx [
21 ] ; xx [ 23 ] = xx [ 0 ] * state [ 28 ] ; xx [ 24 ] = xx [ 3 ] * sin ( xx
[ 23 ] ) ; xx [ 25 ] = xx [ 3 ] * cos ( xx [ 23 ] ) ; xx [ 23 ] = xx [ 24 ] -
xx [ 25 ] ; xx [ 26 ] = xx [ 24 ] + xx [ 25 ] ; xx [ 24 ] = cos ( xx [ 20 ] )
; xx [ 20 ] = xx [ 24 ] * xx [ 19 ] ; xx [ 19 ] = xx [ 22 ] * xx [ 23 ] - xx
[ 26 ] * xx [ 20 ] ; xx [ 25 ] = xx [ 0 ] * state [ 30 ] ; xx [ 27 ] = xx [ 3
] * sin ( xx [ 25 ] ) ; xx [ 28 ] = xx [ 3 ] * cos ( xx [ 25 ] ) ; xx [ 25 ]
= xx [ 27 ] - xx [ 28 ] ; xx [ 29 ] = xx [ 27 ] + xx [ 28 ] ; xx [ 27 ] = xx
[ 20 ] * xx [ 23 ] + xx [ 26 ] * xx [ 22 ] ; xx [ 20 ] = xx [ 19 ] * xx [ 25
] - xx [ 29 ] * xx [ 27 ] ; xx [ 22 ] = xx [ 0 ] * state [ 32 ] ; xx [ 28 ] =
xx [ 3 ] * sin ( xx [ 22 ] ) ; xx [ 30 ] = xx [ 3 ] * cos ( xx [ 22 ] ) ; xx
[ 22 ] = xx [ 28 ] - xx [ 30 ] ; xx [ 31 ] = xx [ 28 ] + xx [ 30 ] ; xx [ 28
] = cos ( xx [ 18 ] ) ; xx [ 18 ] = xx [ 28 ] * xx [ 21 ] ; xx [ 21 ] = xx [
28 ] * xx [ 24 ] ; xx [ 24 ] = xx [ 18 ] * xx [ 23 ] - xx [ 26 ] * xx [ 21 ]
; xx [ 28 ] = xx [ 26 ] * xx [ 18 ] + xx [ 21 ] * xx [ 23 ] ; xx [ 18 ] = xx
[ 24 ] * xx [ 25 ] - xx [ 29 ] * xx [ 28 ] ; xx [ 21 ] = xx [ 20 ] * xx [ 22
] + xx [ 31 ] * xx [ 18 ] ; xx [ 23 ] = cos ( xx [ 16 ] ) ; xx [ 16 ] = xx [
27 ] * xx [ 25 ] + xx [ 19 ] * xx [ 29 ] ; xx [ 19 ] = xx [ 28 ] * xx [ 25 ]
+ xx [ 24 ] * xx [ 29 ] ; xx [ 24 ] = xx [ 16 ] * xx [ 22 ] - xx [ 19 ] * xx
[ 31 ] ; xx [ 25 ] = xx [ 31 ] * xx [ 16 ] + xx [ 19 ] * xx [ 22 ] ; xx [ 16
] = xx [ 18 ] * xx [ 22 ] - xx [ 20 ] * xx [ 31 ] ; xx [ 26 ] = xx [ 17 ] *
xx [ 21 ] - xx [ 23 ] * xx [ 24 ] ; xx [ 27 ] = - ( xx [ 25 ] * xx [ 17 ] +
xx [ 16 ] * xx [ 23 ] ) ; xx [ 28 ] = - ( xx [ 17 ] * xx [ 24 ] + xx [ 23 ] *
xx [ 21 ] ) ; xx [ 29 ] = - ( xx [ 16 ] * xx [ 17 ] - xx [ 25 ] * xx [ 23 ] )
; xx [ 16 ] = xx [ 0 ] * state [ 38 ] ; xx [ 17 ] = cos ( xx [ 16 ] ) ; xx [
18 ] = xx [ 0 ] * state [ 37 ] ; xx [ 19 ] = cos ( xx [ 18 ] ) ; xx [ 20 ] =
xx [ 0 ] * state [ 36 ] ; xx [ 0 ] = xx [ 3 ] * sin ( xx [ 20 ] ) ; xx [ 21 ]
= xx [ 19 ] * xx [ 0 ] ; xx [ 22 ] = xx [ 3 ] * cos ( xx [ 20 ] ) ; xx [ 3 ]
= sin ( xx [ 18 ] ) ; xx [ 18 ] = xx [ 22 ] * xx [ 3 ] ; xx [ 20 ] = xx [ 21
] - xx [ 18 ] ; xx [ 23 ] = xx [ 21 ] + xx [ 18 ] ; xx [ 18 ] = sin ( xx [ 16
] ) ; xx [ 16 ] = xx [ 0 ] * xx [ 3 ] ; xx [ 0 ] = xx [ 19 ] * xx [ 22 ] ; xx
[ 3 ] = xx [ 16 ] - xx [ 0 ] ; xx [ 19 ] = xx [ 16 ] + xx [ 0 ] ; xx [ 30 ] =
xx [ 17 ] * xx [ 20 ] + xx [ 23 ] * xx [ 18 ] ; xx [ 31 ] = xx [ 17 ] * xx [
3 ] + xx [ 19 ] * xx [ 18 ] ; xx [ 32 ] = xx [ 19 ] * xx [ 17 ] - xx [ 18 ] *
xx [ 3 ] ; xx [ 33 ] = xx [ 18 ] * xx [ 20 ] - xx [ 23 ] * xx [ 17 ] ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 30 , xx + 16 ) ; xx [ 0 ] = xx
[ 17 ] * xx [ 18 ] ; xx [ 3 ] = xx [ 16 ] * xx [ 19 ] ; xx [ 20 ] = xx [ 16 ]
* xx [ 16 ] ; xx [ 21 ] = xx [ 18 ] * xx [ 19 ] ; xx [ 22 ] = xx [ 16 ] * xx
[ 17 ] ; xx [ 23 ] = xx [ 2 ] * ( xx [ 0 ] - xx [ 3 ] ) ; xx [ 24 ] = ( xx [
20 ] + xx [ 18 ] * xx [ 18 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 25 ] = ( xx [ 21
] + xx [ 22 ] ) * xx [ 2 ] ; xx [ 26 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 27 ] =
xx [ 9 ] * xx [ 10 ] ; xx [ 28 ] = xx [ 2 ] * ( xx [ 5 ] - xx [ 6 ] ) ; xx [
29 ] = ( xx [ 1 ] + xx [ 11 ] * xx [ 11 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 30 ]
= ( xx [ 26 ] + xx [ 27 ] ) * xx [ 2 ] ; xx [ 5 ] = xx [ 17 ] * xx [ 19 ] ;
xx [ 6 ] = xx [ 16 ] * xx [ 18 ] ; xx [ 9 ] = ( xx [ 5 ] + xx [ 6 ] ) * xx [
2 ] ; xx [ 10 ] = xx [ 2 ] * ( xx [ 21 ] - xx [ 22 ] ) ; xx [ 11 ] = ( xx [
20 ] + xx [ 19 ] * xx [ 19 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 31 ] = ( xx [ 7 ]
+ xx [ 8 ] ) * xx [ 2 ] ; xx [ 32 ] = xx [ 2 ] * ( xx [ 26 ] - xx [ 27 ] ) ;
xx [ 33 ] = ( xx [ 1 ] + xx [ 12 ] * xx [ 12 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [
34 ] = ( xx [ 20 ] + xx [ 17 ] * xx [ 17 ] ) * xx [ 2 ] - xx [ 4 ] ; xx [ 35
] = ( xx [ 0 ] + xx [ 3 ] ) * xx [ 2 ] ; xx [ 36 ] = xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) ; error [ 0 ] = pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) ;
error [ 1 ] = pm_math_Vector3_dot_ra ( xx + 28 , xx + 9 ) ; error [ 2 ] =
pm_math_Vector3_dot_ra ( xx + 31 , xx + 34 ) ; } void
pp_43e6ab1_1_resetModeVector ( const void * mech , int * modeVector ) { (
void ) mech ; ( void ) modeVector ; } boolean_T
pp_43e6ab1_1_hasJointDisToNormModeChange ( const void * mech , const int *
prevModeVector , const int * modeVector ) { ( void ) mech ; ( void )
prevModeVector ; ( void ) modeVector ; return 0 ; } PmfMessageId
pp_43e6ab1_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
prevModeVector , const int * modeVector , const double * input , double *
state , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) prevModeVector
; ( void ) modeVector ; ( void ) input ; ( void ) state ; ( void ) neDiagMgr
; return NULL ; } void pp_43e6ab1_1_onModeChangedCutJoints ( const void *
mech , const int * prevModeVector , const int * modeVector , double * state )
{ ( void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; ( void )
state ; }
