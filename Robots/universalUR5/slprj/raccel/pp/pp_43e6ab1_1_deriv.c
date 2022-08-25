#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "pp_43e6ab1_1_geometries.h"
PmfMessageId pp_43e6ab1_1_compDerivs ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 3 ] ; double xx [ 535 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 2
] ; xx [ 3 ] = sin ( xx [ 2 ] ) ; xx [ 4 ] = 0.7071067811865476 ; xx [ 5 ] =
xx [ 1 ] * state [ 0 ] ; xx [ 6 ] = xx [ 4 ] * sin ( xx [ 5 ] ) ; xx [ 7 ] =
xx [ 1 ] * state [ 1 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 6 ] *
xx [ 8 ] ; xx [ 10 ] = cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 4 ] * cos ( xx [ 5
] ) ; xx [ 5 ] = xx [ 10 ] * xx [ 7 ] ; xx [ 11 ] = xx [ 9 ] - xx [ 5 ] ; xx
[ 12 ] = xx [ 5 ] + xx [ 9 ] ; xx [ 5 ] = cos ( xx [ 2 ] ) ; xx [ 2 ] = xx [
3 ] * xx [ 11 ] - xx [ 12 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 11 ] + xx
[ 12 ] * xx [ 3 ] ; xx [ 11 ] = xx [ 2 ] * xx [ 9 ] ; xx [ 12 ] = xx [ 10 ] *
xx [ 6 ] ; xx [ 6 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 7 ] = xx [ 12 ] - xx [ 6 ] ;
xx [ 8 ] = xx [ 12 ] + xx [ 6 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 7 ] - xx [ 8 ] *
xx [ 5 ] ; xx [ 10 ] = xx [ 5 ] * xx [ 7 ] + xx [ 8 ] * xx [ 3 ] ; xx [ 7 ] =
xx [ 6 ] * xx [ 10 ] ; xx [ 8 ] = xx [ 11 ] - xx [ 7 ] ; xx [ 12 ] = xx [ 0 ]
* xx [ 8 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = xx [ 10 ] * xx [ 10 ] ; xx [ 15 ]
= xx [ 2 ] * xx [ 2 ] ; xx [ 16 ] = xx [ 13 ] - ( xx [ 14 ] + xx [ 15 ] ) *
xx [ 0 ] ; xx [ 17 ] = xx [ 2 ] * xx [ 6 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 10 ]
; xx [ 19 ] = xx [ 17 ] + xx [ 18 ] ; xx [ 20 ] = xx [ 19 ] * xx [ 0 ] ; xx [
21 ] = xx [ 12 ] ; xx [ 22 ] = xx [ 16 ] ; xx [ 23 ] = xx [ 20 ] ; xx [ 24 ]
= 1.666666666666667e-11 ; xx [ 25 ] = 0.01333333336666668 ; xx [ 26 ] =
2.000002 ; xx [ 27 ] = 0.0 ; xx [ 28 ] = xx [ 26 ] ; xx [ 29 ] = xx [ 27 ] ;
xx [ 30 ] = xx [ 27 ] ; xx [ 31 ] = xx [ 27 ] ; xx [ 32 ] = xx [ 26 ] ; xx [
33 ] = xx [ 27 ] ; xx [ 34 ] = xx [ 27 ] ; xx [ 35 ] = xx [ 27 ] ; xx [ 36 ]
= xx [ 26 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 28 , 3 , xx + 37 ) ; if
( ii [ 0 ] != 0 ? 1 : 0 != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'pp/Robotic Arm 1/wrist_3_link/Cartesian Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 37 ] = xx [ 27 ] ; xx [ 38 ] = xx [ 27 ] ; xx [ 39 ] =
xx [ 27 ] ; xx [ 40 ] = xx [ 27 ] ; xx [ 41 ] = xx [ 27 ] ; xx [ 42 ] = xx [
27 ] ; xx [ 43 ] = xx [ 27 ] ; xx [ 44 ] = xx [ 27 ] ; xx [ 45 ] = xx [ 27 ]
; xx [ 46 ] = xx [ 26 ] ; xx [ 47 ] = xx [ 27 ] ; xx [ 48 ] = xx [ 27 ] ; xx
[ 49 ] = xx [ 27 ] ; xx [ 50 ] = xx [ 26 ] ; xx [ 51 ] = xx [ 27 ] ; xx [ 52
] = xx [ 27 ] ; xx [ 53 ] = xx [ 27 ] ; xx [ 54 ] = xx [ 26 ] ;
solveSymmetricPosDef ( xx + 28 , xx + 37 , 3 , 6 , xx + 55 , xx + 73 ) ; xx [
37 ] = - ( xx [ 26 ] * xx [ 65 ] ) ; xx [ 38 ] = - ( xx [ 26 ] * xx [ 66 ] )
; xx [ 39 ] = - ( xx [ 26 ] * xx [ 69 ] ) ; xx [ 40 ] = xx [ 26 ] - xx [ 26 ]
* xx [ 64 ] ; xx [ 41 ] = xx [ 37 ] ; xx [ 42 ] = xx [ 38 ] ; xx [ 43 ] = xx
[ 37 ] ; xx [ 44 ] = xx [ 26 ] - xx [ 26 ] * xx [ 68 ] ; xx [ 45 ] = xx [ 39
] ; xx [ 46 ] = xx [ 38 ] ; xx [ 47 ] = xx [ 39 ] ; xx [ 48 ] = xx [ 26 ] -
xx [ 26 ] * xx [ 72 ] ; xx [ 37 ] = 0.4 ; xx [ 49 ] = xx [ 37 ] + state [ 6 ]
; xx [ 50 ] = state [ 7 ] ; xx [ 51 ] = state [ 8 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 40 , xx + 49 , xx + 73 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 73 , xx + 49 , xx + 38 ) ; xx [ 47 ] =
xx [ 24 ] + xx [ 25 ] - xx [ 38 ] ; xx [ 48 ] = - xx [ 40 ] ; xx [ 52 ] =
0.1133333333666667 ; xx [ 53 ] = xx [ 24 ] + xx [ 52 ] - xx [ 42 ] ; xx [ 54
] = - xx [ 43 ] ; xx [ 38 ] = xx [ 24 ] + xx [ 52 ] - xx [ 46 ] ; xx [ 82 ] =
xx [ 47 ] ; xx [ 83 ] = - xx [ 39 ] ; xx [ 84 ] = xx [ 48 ] ; xx [ 85 ] = -
xx [ 41 ] ; xx [ 86 ] = xx [ 53 ] ; xx [ 87 ] = xx [ 54 ] ; xx [ 88 ] = - xx
[ 44 ] ; xx [ 89 ] = - xx [ 45 ] ; xx [ 90 ] = xx [ 38 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 82 , xx + 21 , xx + 91 ) ; xx [ 42 ] = xx [
5 ] * xx [ 3 ] ; xx [ 5 ] = xx [ 0 ] * xx [ 42 ] ; xx [ 46 ] = xx [ 13 ] - xx
[ 0 ] * xx [ 3 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 47 ] * xx [ 5 ] - xx [ 39 ] *
xx [ 46 ] ; xx [ 39 ] = xx [ 53 ] * xx [ 46 ] - xx [ 41 ] * xx [ 5 ] ; xx [
41 ] = - ( xx [ 44 ] * xx [ 5 ] + xx [ 45 ] * xx [ 46 ] ) ; xx [ 94 ] = xx [
3 ] ; xx [ 95 ] = xx [ 39 ] ; xx [ 96 ] = xx [ 41 ] ; xx [ 44 ] =
pm_math_Vector3_dot_ra ( xx + 21 , xx + 94 ) ; xx [ 94 ] = xx [ 48 ] ; xx [
95 ] = xx [ 54 ] ; xx [ 96 ] = xx [ 38 ] ; xx [ 45 ] = pm_math_Vector3_dot_ra
( xx + 21 , xx + 94 ) ; xx [ 47 ] = - ( xx [ 40 ] * xx [ 5 ] + xx [ 43 ] * xx
[ 46 ] ) ; xx [ 94 ] = pm_math_Vector3_dot_ra ( xx + 21 , xx + 91 ) ; xx [ 95
] = xx [ 44 ] ; xx [ 96 ] = xx [ 45 ] ; xx [ 97 ] = xx [ 44 ] ; xx [ 98 ] =
xx [ 5 ] * xx [ 3 ] + xx [ 46 ] * xx [ 39 ] ; xx [ 99 ] = xx [ 47 ] ; xx [
100 ] = xx [ 45 ] ; xx [ 101 ] = xx [ 47 ] ; xx [ 102 ] = xx [ 38 ] ; ii [ 0
] = factorSymmetricPosDef ( xx + 94 , 3 , xx + 43 ) ; xx [ 40 ] = 0.999999 ;
ii [ 1 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 1 ] ) ) > xx [ 40 ] ? 1 : 0
; if ( ii [ 1 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:GimbalLock" ,
 "'pp/Robotic Arm 1/wrist_3_link/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } memcpy ( ii + 2 , ii + 1 , 1 * sizeof ( int ) ) ; if ( ii [
0 ] + ii [ 2 ] != 0 ? 1 : 0 != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'pp/Robotic Arm 1/wrist_3_link/Gimbal Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 43 ] = xx [ 1 ] * input [ 5 ] ; xx [ 44 ] = sin ( xx [
43 ] ) ; xx [ 45 ] = xx [ 1 ] * input [ 3 ] ; xx [ 47 ] = xx [ 4 ] * sin ( xx
[ 45 ] ) ; xx [ 53 ] = xx [ 4 ] * cos ( xx [ 45 ] ) ; xx [ 45 ] = xx [ 47 ] +
xx [ 53 ] ; xx [ 103 ] = xx [ 1 ] * input [ 0 ] ; xx [ 104 ] = xx [ 4 ] * sin
( xx [ 103 ] ) ; xx [ 105 ] = xx [ 4 ] * cos ( xx [ 103 ] ) ; xx [ 103 ] = xx
[ 104 ] + xx [ 105 ] ; xx [ 106 ] = xx [ 1 ] * input [ 2 ] ; xx [ 107 ] = cos
( xx [ 106 ] ) ; xx [ 108 ] = xx [ 1 ] * input [ 1 ] ; xx [ 109 ] = sin ( xx
[ 108 ] ) ; xx [ 110 ] = xx [ 107 ] * xx [ 109 ] ; xx [ 111 ] = cos ( xx [
108 ] ) ; xx [ 108 ] = xx [ 111 ] * xx [ 107 ] ; xx [ 112 ] = xx [ 104 ] - xx
[ 105 ] ; xx [ 104 ] = xx [ 103 ] * xx [ 110 ] + xx [ 108 ] * xx [ 112 ] ; xx
[ 105 ] = xx [ 110 ] * xx [ 112 ] - xx [ 103 ] * xx [ 108 ] ; xx [ 113 ] = xx
[ 47 ] - xx [ 53 ] ; xx [ 47 ] = xx [ 45 ] * xx [ 104 ] - xx [ 105 ] * xx [
113 ] ; xx [ 53 ] = xx [ 1 ] * input [ 4 ] ; xx [ 114 ] = xx [ 4 ] * sin ( xx
[ 53 ] ) ; xx [ 115 ] = xx [ 4 ] * cos ( xx [ 53 ] ) ; xx [ 53 ] = xx [ 114 ]
- xx [ 115 ] ; xx [ 116 ] = xx [ 114 ] + xx [ 115 ] ; xx [ 114 ] = sin ( xx [
106 ] ) ; xx [ 106 ] = xx [ 109 ] * xx [ 114 ] ; xx [ 115 ] = xx [ 111 ] * xx
[ 114 ] ; xx [ 117 ] = xx [ 106 ] * xx [ 112 ] - xx [ 103 ] * xx [ 115 ] ; xx
[ 118 ] = xx [ 103 ] * xx [ 106 ] + xx [ 115 ] * xx [ 112 ] ; xx [ 119 ] = xx
[ 117 ] * xx [ 113 ] - xx [ 45 ] * xx [ 118 ] ; xx [ 120 ] = xx [ 47 ] * xx [
53 ] + xx [ 116 ] * xx [ 119 ] ; xx [ 121 ] = cos ( xx [ 43 ] ) ; xx [ 43 ] =
xx [ 104 ] * xx [ 113 ] + xx [ 105 ] * xx [ 45 ] ; xx [ 122 ] = xx [ 118 ] *
xx [ 113 ] + xx [ 117 ] * xx [ 45 ] ; xx [ 123 ] = xx [ 43 ] * xx [ 53 ] + xx
[ 122 ] * xx [ 116 ] ; xx [ 124 ] = xx [ 44 ] * xx [ 120 ] + xx [ 121 ] * xx
[ 123 ] ; xx [ 125 ] = xx [ 43 ] * xx [ 116 ] - xx [ 122 ] * xx [ 53 ] ; xx [
126 ] = xx [ 119 ] * xx [ 53 ] - xx [ 116 ] * xx [ 47 ] ; xx [ 127 ] = xx [
125 ] * xx [ 44 ] - xx [ 126 ] * xx [ 121 ] ; xx [ 128 ] = xx [ 121 ] * xx [
120 ] - xx [ 44 ] * xx [ 123 ] ; xx [ 129 ] = xx [ 125 ] * xx [ 121 ] + xx [
126 ] * xx [ 44 ] ; xx [ 130 ] = xx [ 124 ] ; xx [ 131 ] = xx [ 127 ] ; xx [
132 ] = - xx [ 128 ] ; xx [ 133 ] = - xx [ 129 ] ; xx [ 134 ] = - xx [ 6 ] ;
xx [ 135 ] = xx [ 2 ] ; xx [ 136 ] = xx [ 9 ] ; xx [ 137 ] = xx [ 10 ] ;
pm_math_Quaternion_compose_ra ( xx + 130 , xx + 134 , xx + 138 ) ; xx [ 130 ]
= xx [ 140 ] * xx [ 16 ] ; xx [ 131 ] = xx [ 141 ] * xx [ 20 ] ; xx [ 132 ] =
xx [ 130 ] + xx [ 131 ] ; xx [ 133 ] = xx [ 139 ] * xx [ 16 ] ; xx [ 142 ] =
xx [ 139 ] * xx [ 20 ] ; xx [ 143 ] = - xx [ 132 ] ; xx [ 144 ] = xx [ 133 ]
; xx [ 145 ] = xx [ 142 ] ; pm_math_Vector3_cross_ra ( xx + 139 , xx + 143 ,
xx + 146 ) ; xx [ 143 ] = xx [ 0 ] * ( xx [ 146 ] - xx [ 132 ] * xx [ 138 ] )
; xx [ 144 ] = xx [ 20 ] + ( xx [ 138 ] * xx [ 133 ] + xx [ 147 ] ) * xx [ 0
] ; xx [ 145 ] = ( xx [ 138 ] * xx [ 142 ] + xx [ 148 ] ) * xx [ 0 ] - xx [
16 ] ; xx [ 132 ] = xx [ 1 ] * input [ 11 ] ; xx [ 133 ] = sin ( xx [ 132 ] )
; xx [ 142 ] = xx [ 1 ] * input [ 7 ] ; xx [ 146 ] = sin ( xx [ 142 ] ) ; xx
[ 147 ] = xx [ 1 ] * input [ 8 ] ; xx [ 148 ] = sin ( xx [ 147 ] ) ; xx [ 149
] = xx [ 146 ] * xx [ 148 ] ; xx [ 150 ] = xx [ 1 ] * input [ 6 ] ; xx [ 151
] = xx [ 4 ] * sin ( xx [ 150 ] ) ; xx [ 152 ] = xx [ 4 ] * cos ( xx [ 150 ]
) ; xx [ 150 ] = xx [ 151 ] - xx [ 152 ] ; xx [ 153 ] = xx [ 151 ] + xx [ 152
] ; xx [ 151 ] = cos ( xx [ 142 ] ) ; xx [ 142 ] = xx [ 151 ] * xx [ 148 ] ;
xx [ 152 ] = xx [ 149 ] * xx [ 150 ] - xx [ 153 ] * xx [ 142 ] ; xx [ 154 ] =
xx [ 1 ] * input [ 9 ] ; xx [ 155 ] = xx [ 4 ] * sin ( xx [ 154 ] ) ; xx [
156 ] = xx [ 4 ] * cos ( xx [ 154 ] ) ; xx [ 154 ] = xx [ 155 ] - xx [ 156 ]
; xx [ 157 ] = xx [ 155 ] + xx [ 156 ] ; xx [ 155 ] = xx [ 142 ] * xx [ 150 ]
+ xx [ 153 ] * xx [ 149 ] ; xx [ 156 ] = xx [ 152 ] * xx [ 154 ] - xx [ 157 ]
* xx [ 155 ] ; xx [ 158 ] = xx [ 1 ] * input [ 10 ] ; xx [ 159 ] = xx [ 4 ] *
sin ( xx [ 158 ] ) ; xx [ 160 ] = xx [ 4 ] * cos ( xx [ 158 ] ) ; xx [ 158 ]
= xx [ 159 ] - xx [ 160 ] ; xx [ 161 ] = xx [ 159 ] + xx [ 160 ] ; xx [ 159 ]
= cos ( xx [ 147 ] ) ; xx [ 147 ] = xx [ 159 ] * xx [ 146 ] ; xx [ 160 ] = xx
[ 151 ] * xx [ 159 ] ; xx [ 162 ] = xx [ 147 ] * xx [ 150 ] - xx [ 153 ] * xx
[ 160 ] ; xx [ 163 ] = xx [ 153 ] * xx [ 147 ] + xx [ 160 ] * xx [ 150 ] ; xx
[ 164 ] = xx [ 162 ] * xx [ 154 ] - xx [ 157 ] * xx [ 163 ] ; xx [ 165 ] = xx
[ 156 ] * xx [ 158 ] + xx [ 161 ] * xx [ 164 ] ; xx [ 166 ] = cos ( xx [ 132
] ) ; xx [ 132 ] = xx [ 155 ] * xx [ 154 ] + xx [ 152 ] * xx [ 157 ] ; xx [
167 ] = xx [ 163 ] * xx [ 154 ] + xx [ 162 ] * xx [ 157 ] ; xx [ 168 ] = xx [
132 ] * xx [ 158 ] - xx [ 167 ] * xx [ 161 ] ; xx [ 169 ] = xx [ 133 ] * xx [
165 ] - xx [ 166 ] * xx [ 168 ] ; xx [ 170 ] = xx [ 161 ] * xx [ 132 ] + xx [
167 ] * xx [ 158 ] ; xx [ 171 ] = xx [ 164 ] * xx [ 158 ] - xx [ 156 ] * xx [
161 ] ; xx [ 172 ] = xx [ 170 ] * xx [ 133 ] + xx [ 171 ] * xx [ 166 ] ; xx [
173 ] = xx [ 133 ] * xx [ 168 ] + xx [ 166 ] * xx [ 165 ] ; xx [ 174 ] = xx [
171 ] * xx [ 133 ] - xx [ 170 ] * xx [ 166 ] ; xx [ 175 ] = xx [ 169 ] ; xx [
176 ] = - xx [ 172 ] ; xx [ 177 ] = - xx [ 173 ] ; xx [ 178 ] = - xx [ 174 ]
; xx [ 179 ] = xx [ 1 ] * state [ 14 ] ; xx [ 180 ] = cos ( xx [ 179 ] ) ; xx
[ 181 ] = xx [ 1 ] * state [ 13 ] ; xx [ 182 ] = cos ( xx [ 181 ] ) ; xx [
183 ] = xx [ 1 ] * state [ 12 ] ; xx [ 1 ] = xx [ 4 ] * sin ( xx [ 183 ] ) ;
xx [ 184 ] = xx [ 182 ] * xx [ 1 ] ; xx [ 185 ] = xx [ 4 ] * cos ( xx [ 183 ]
) ; xx [ 4 ] = sin ( xx [ 181 ] ) ; xx [ 181 ] = xx [ 185 ] * xx [ 4 ] ; xx [
183 ] = xx [ 184 ] - xx [ 181 ] ; xx [ 186 ] = xx [ 184 ] + xx [ 181 ] ; xx [
181 ] = sin ( xx [ 179 ] ) ; xx [ 179 ] = xx [ 180 ] * xx [ 183 ] + xx [ 186
] * xx [ 181 ] ; xx [ 184 ] = xx [ 1 ] * xx [ 4 ] ; xx [ 1 ] = xx [ 182 ] *
xx [ 185 ] ; xx [ 4 ] = xx [ 184 ] - xx [ 1 ] ; xx [ 182 ] = xx [ 184 ] + xx
[ 1 ] ; xx [ 1 ] = xx [ 180 ] * xx [ 4 ] + xx [ 182 ] * xx [ 181 ] ; xx [ 184
] = xx [ 182 ] * xx [ 180 ] - xx [ 181 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 181 ] *
xx [ 183 ] - xx [ 186 ] * xx [ 180 ] ; xx [ 185 ] = xx [ 179 ] ; xx [ 186 ] =
xx [ 1 ] ; xx [ 187 ] = xx [ 184 ] ; xx [ 188 ] = xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 175 , xx + 185 , xx + 189 ) ; xx [ 175 ]
= xx [ 190 ] * xx [ 191 ] ; xx [ 176 ] = xx [ 189 ] * xx [ 192 ] ; xx [ 177 ]
= xx [ 0 ] * ( xx [ 175 ] - xx [ 176 ] ) ; xx [ 178 ] = xx [ 189 ] * xx [ 189
] ; xx [ 182 ] = xx [ 191 ] * xx [ 191 ] ; xx [ 183 ] = ( xx [ 178 ] + xx [
182 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 193 ] = xx [ 191 ] * xx [ 192 ] ; xx [
194 ] = xx [ 189 ] * xx [ 190 ] ; xx [ 195 ] = ( xx [ 193 ] + xx [ 194 ] ) *
xx [ 0 ] ; xx [ 196 ] = xx [ 177 ] ; xx [ 197 ] = xx [ 183 ] ; xx [ 198 ] =
xx [ 195 ] ; xx [ 199 ] = pm_math_Vector3_dot_ra ( xx + 143 , xx + 196 ) ; xx
[ 143 ] = xx [ 27 ] ; xx [ 144 ] = xx [ 27 ] ; xx [ 145 ] = xx [ 27 ] ;
solveSymmetricPosDef ( xx + 28 , xx + 143 , 3 , 1 , xx + 200 , xx + 203 ) ;
xx [ 143 ] = xx [ 26 ] * xx [ 200 ] ; xx [ 144 ] = xx [ 26 ] * xx [ 201 ] ;
xx [ 145 ] = xx [ 26 ] * xx [ 202 ] ; pm_math_Vector3_cross_ra ( xx + 49 , xx
+ 143 , xx + 200 ) ; xx [ 143 ] = pm_math_Vector3_dot_ra ( xx + 21 , xx + 200
) ; xx [ 144 ] = xx [ 140 ] * xx [ 46 ] ; xx [ 145 ] = xx [ 139 ] * xx [ 46 ]
; xx [ 203 ] = - ( ( xx [ 138 ] * xx [ 144 ] + xx [ 141 ] * xx [ 145 ] ) * xx
[ 0 ] ) ; xx [ 204 ] = xx [ 0 ] * ( xx [ 138 ] * xx [ 145 ] - xx [ 141 ] * xx
[ 144 ] ) ; xx [ 205 ] = ( xx [ 139 ] * xx [ 145 ] + xx [ 140 ] * xx [ 144 ]
) * xx [ 0 ] - xx [ 46 ] ; xx [ 145 ] = pm_math_Vector3_dot_ra ( xx + 203 ,
xx + 196 ) ; xx [ 203 ] = xx [ 200 ] * xx [ 5 ] + xx [ 201 ] * xx [ 46 ] ; xx
[ 200 ] = xx [ 139 ] * xx [ 140 ] ; xx [ 201 ] = xx [ 138 ] * xx [ 141 ] ; xx
[ 204 ] = xx [ 0 ] * ( xx [ 200 ] - xx [ 201 ] ) ; xx [ 205 ] = xx [ 141 ] *
xx [ 141 ] ; xx [ 206 ] = xx [ 139 ] * xx [ 139 ] ; xx [ 207 ] = xx [ 138 ] *
xx [ 139 ] ; xx [ 208 ] = xx [ 140 ] * xx [ 141 ] ; xx [ 209 ] = xx [ 204 ] ;
xx [ 210 ] = xx [ 13 ] - ( xx [ 205 ] + xx [ 206 ] ) * xx [ 0 ] ; xx [ 211 ]
= ( xx [ 207 ] + xx [ 208 ] ) * xx [ 0 ] ; xx [ 212 ] =
pm_math_Vector3_dot_ra ( xx + 209 , xx + 196 ) ; xx [ 209 ] = xx [ 199 ] - xx
[ 143 ] ; xx [ 210 ] = xx [ 145 ] - xx [ 203 ] ; xx [ 211 ] = xx [ 212 ] - xx
[ 202 ] ; solveSymmetricPosDef ( xx + 94 , xx + 209 , 3 , 1 , xx + 213 , xx +
216 ) ; xx [ 209 ] = xx [ 4 ] * xx [ 179 ] ; xx [ 210 ] = xx [ 1 ] * xx [ 184
] ; xx [ 211 ] = xx [ 209 ] + xx [ 210 ] ; xx [ 216 ] = xx [ 211 ] * xx [ 0 ]
; xx [ 217 ] = xx [ 191 ] * xx [ 216 ] ; xx [ 218 ] = xx [ 190 ] * xx [ 216 ]
; xx [ 219 ] = xx [ 1 ] * xx [ 179 ] ; xx [ 220 ] = xx [ 4 ] * xx [ 184 ] ;
xx [ 221 ] = xx [ 219 ] - xx [ 220 ] ; xx [ 222 ] = xx [ 0 ] * xx [ 221 ] ;
xx [ 223 ] = xx [ 192 ] * xx [ 222 ] ; xx [ 224 ] = xx [ 218 ] - xx [ 223 ] ;
xx [ 225 ] = xx [ 191 ] * xx [ 222 ] ; xx [ 226 ] = - xx [ 217 ] ; xx [ 227 ]
= xx [ 224 ] ; xx [ 228 ] = xx [ 225 ] ; pm_math_Vector3_cross_ra ( xx + 190
, xx + 226 , xx + 229 ) ; xx [ 226 ] = xx [ 189 ] * xx [ 217 ] ; xx [ 232 ] =
xx [ 0 ] * ( xx [ 229 ] - xx [ 226 ] ) - xx [ 222 ] ; xx [ 233 ] = ( xx [ 189
] * xx [ 224 ] + xx [ 230 ] ) * xx [ 0 ] ; xx [ 234 ] = ( xx [ 189 ] * xx [
225 ] + xx [ 231 ] ) * xx [ 0 ] - xx [ 216 ] ; xx [ 224 ] = xx [ 138 ] * xx [
138 ] ; xx [ 225 ] = ( xx [ 224 ] + xx [ 206 ] ) * xx [ 0 ] - xx [ 13 ] ; xx
[ 206 ] = ( xx [ 200 ] + xx [ 201 ] ) * xx [ 0 ] ; xx [ 227 ] = xx [ 139 ] *
xx [ 141 ] ; xx [ 228 ] = xx [ 138 ] * xx [ 140 ] ; xx [ 229 ] = xx [ 0 ] * (
xx [ 227 ] - xx [ 228 ] ) ; xx [ 235 ] = xx [ 225 ] ; xx [ 236 ] = xx [ 206 ]
; xx [ 237 ] = xx [ 229 ] ; xx [ 230 ] = pm_math_Vector3_dot_ra ( xx + 232 ,
xx + 235 ) ; xx [ 231 ] = xx [ 4 ] * xx [ 4 ] ; xx [ 232 ] = xx [ 1 ] * xx [
1 ] ; xx [ 233 ] = ( xx [ 231 ] + xx [ 232 ] ) * xx [ 0 ] ; xx [ 234 ] = xx [
233 ] - xx [ 13 ] ; xx [ 238 ] = - xx [ 216 ] ; xx [ 239 ] = xx [ 234 ] ; xx
[ 240 ] = xx [ 222 ] ; xx [ 241 ] = - ( xx [ 24 ] * xx [ 216 ] ) ; xx [ 242 ]
= xx [ 234 ] * xx [ 24 ] ; xx [ 243 ] = xx [ 24 ] * xx [ 222 ] ; xx [ 244 ] =
xx [ 13 ] - xx [ 0 ] * xx [ 181 ] * xx [ 181 ] ; xx [ 245 ] = xx [ 24 ] * xx
[ 244 ] ; xx [ 246 ] = xx [ 180 ] * xx [ 181 ] ; xx [ 180 ] = xx [ 0 ] * xx [
246 ] ; xx [ 181 ] = xx [ 24 ] * xx [ 180 ] ; xx [ 247 ] = xx [ 234 ] * xx [
245 ] - xx [ 216 ] * xx [ 181 ] ; xx [ 248 ] = pm_math_Vector3_dot_ra ( xx +
238 , xx + 241 ) ; xx [ 249 ] = xx [ 247 ] ; xx [ 250 ] = xx [ 243 ] ; xx [
251 ] = xx [ 247 ] ; xx [ 252 ] = xx [ 181 ] * xx [ 180 ] + xx [ 245 ] * xx [
244 ] ; xx [ 253 ] = xx [ 27 ] ; xx [ 254 ] = xx [ 243 ] ; xx [ 255 ] = xx [
27 ] ; xx [ 256 ] = xx [ 24 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 248 ,
3 , xx + 257 ) ; ii [ 1 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) >
xx [ 40 ] ? 1 : 0 ; if ( ii [ 1 ] != 0 ) { return sm_ssci_recordRunTimeError
( "sm:compiler:messages:simulationErrors:GimbalLock" ,
 "'pp/Robotic Arm 2/wrist_3_link/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } memcpy ( ii + 2 , ii + 1 , 1 * sizeof ( int ) ) ; if ( ii [
0 ] + ii [ 2 ] != 0 ? 1 : 0 != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'pp/Robotic Arm 2/wrist_3_link/Gimbal Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 40 ] = xx [ 191 ] * xx [ 180 ] ; xx [ 247 ] = xx [ 190
] * xx [ 180 ] ; xx [ 257 ] = ( xx [ 189 ] * xx [ 40 ] + xx [ 192 ] * xx [
247 ] ) * xx [ 0 ] ; xx [ 258 ] = xx [ 0 ] * ( xx [ 192 ] * xx [ 40 ] - xx [
189 ] * xx [ 247 ] ) ; xx [ 259 ] = xx [ 180 ] - ( xx [ 190 ] * xx [ 247 ] +
xx [ 191 ] * xx [ 40 ] ) * xx [ 0 ] ; xx [ 40 ] = pm_math_Vector3_dot_ra ( xx
+ 257 , xx + 235 ) ; xx [ 257 ] = xx [ 192 ] * xx [ 192 ] ; xx [ 258 ] = xx [
189 ] * xx [ 191 ] ; xx [ 259 ] = xx [ 190 ] * xx [ 192 ] ; xx [ 260 ] = ( xx
[ 182 ] + xx [ 257 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 261 ] = - ( ( xx [ 176 ]
+ xx [ 175 ] ) * xx [ 0 ] ) ; xx [ 262 ] = xx [ 0 ] * ( xx [ 258 ] - xx [ 259
] ) ; xx [ 182 ] = pm_math_Vector3_dot_ra ( xx + 260 , xx + 235 ) ; xx [ 260
] = xx [ 230 ] ; xx [ 261 ] = xx [ 40 ] ; xx [ 262 ] = xx [ 182 ] ;
solveSymmetricPosDef ( xx + 248 , xx + 260 , 3 , 1 , xx + 263 , xx + 266 ) ;
xx [ 260 ] = xx [ 140 ] * xx [ 12 ] ; xx [ 261 ] = xx [ 139 ] * xx [ 12 ] ;
xx [ 262 ] = xx [ 131 ] + xx [ 261 ] ; xx [ 131 ] = xx [ 140 ] * xx [ 20 ] ;
xx [ 266 ] = xx [ 260 ] ; xx [ 267 ] = - xx [ 262 ] ; xx [ 268 ] = xx [ 131 ]
; pm_math_Vector3_cross_ra ( xx + 139 , xx + 266 , xx + 269 ) ; xx [ 266 ] =
( xx [ 138 ] * xx [ 260 ] + xx [ 269 ] ) * xx [ 0 ] - xx [ 20 ] ; xx [ 267 ]
= xx [ 0 ] * ( xx [ 270 ] - xx [ 262 ] * xx [ 138 ] ) ; xx [ 268 ] = xx [ 12
] + ( xx [ 138 ] * xx [ 131 ] + xx [ 271 ] ) * xx [ 0 ] ; xx [ 131 ] = ( xx [
259 ] + xx [ 258 ] ) * xx [ 0 ] ; xx [ 260 ] = xx [ 0 ] * ( xx [ 193 ] - xx [
194 ] ) ; xx [ 262 ] = ( xx [ 178 ] + xx [ 257 ] ) * xx [ 0 ] - xx [ 13 ] ;
xx [ 269 ] = xx [ 131 ] ; xx [ 270 ] = xx [ 260 ] ; xx [ 271 ] = xx [ 262 ] ;
xx [ 272 ] = pm_math_Vector3_dot_ra ( xx + 266 , xx + 269 ) ; xx [ 266 ] = xx
[ 140 ] * xx [ 5 ] ; xx [ 267 ] = xx [ 139 ] * xx [ 5 ] ; xx [ 273 ] = ( xx [
138 ] * xx [ 266 ] + xx [ 141 ] * xx [ 267 ] ) * xx [ 0 ] ; xx [ 274 ] = xx [
0 ] * ( xx [ 141 ] * xx [ 266 ] - xx [ 138 ] * xx [ 267 ] ) ; xx [ 275 ] = xx
[ 5 ] - ( xx [ 139 ] * xx [ 267 ] + xx [ 140 ] * xx [ 266 ] ) * xx [ 0 ] ; xx
[ 266 ] = pm_math_Vector3_dot_ra ( xx + 273 , xx + 269 ) ; xx [ 268 ] = xx [
140 ] * xx [ 140 ] ; xx [ 273 ] = ( xx [ 268 ] + xx [ 205 ] ) * xx [ 0 ] - xx
[ 13 ] ; xx [ 274 ] = - ( ( xx [ 201 ] + xx [ 200 ] ) * xx [ 0 ] ) ; xx [ 275
] = xx [ 0 ] * ( xx [ 228 ] - xx [ 227 ] ) ; xx [ 200 ] =
pm_math_Vector3_dot_ra ( xx + 273 , xx + 269 ) ; xx [ 273 ] = xx [ 272 ] - xx
[ 143 ] ; xx [ 274 ] = xx [ 266 ] - xx [ 203 ] ; xx [ 275 ] = xx [ 200 ] - xx
[ 202 ] ; solveSymmetricPosDef ( xx + 94 , xx + 273 , 3 , 1 , xx + 276 , xx +
279 ) ; xx [ 201 ] = xx [ 192 ] * xx [ 216 ] ; xx [ 273 ] = xx [ 234 ] * xx [
192 ] ; xx [ 274 ] = xx [ 234 ] * xx [ 191 ] ; xx [ 275 ] = xx [ 218 ] - xx [
274 ] ; xx [ 279 ] = - xx [ 201 ] ; xx [ 280 ] = xx [ 273 ] ; xx [ 281 ] = xx
[ 275 ] ; pm_math_Vector3_cross_ra ( xx + 190 , xx + 279 , xx + 282 ) ; xx [
279 ] = xx [ 189 ] * xx [ 201 ] ; xx [ 285 ] = xx [ 234 ] + xx [ 0 ] * ( xx [
282 ] - xx [ 279 ] ) ; xx [ 286 ] = xx [ 216 ] + ( xx [ 189 ] * xx [ 273 ] +
xx [ 283 ] ) * xx [ 0 ] ; xx [ 287 ] = ( xx [ 189 ] * xx [ 275 ] + xx [ 284 ]
) * xx [ 0 ] ; xx [ 273 ] = ( xx [ 224 ] + xx [ 268 ] ) * xx [ 0 ] - xx [ 13
] ; xx [ 268 ] = ( xx [ 208 ] + xx [ 207 ] ) * xx [ 0 ] ; xx [ 280 ] = xx [
204 ] ; xx [ 281 ] = xx [ 273 ] ; xx [ 282 ] = xx [ 268 ] ; xx [ 275 ] =
pm_math_Vector3_dot_ra ( xx + 285 , xx + 280 ) ; xx [ 283 ] = xx [ 192 ] * xx
[ 180 ] ; xx [ 284 ] = xx [ 192 ] * xx [ 244 ] ; xx [ 285 ] = xx [ 191 ] * xx
[ 244 ] ; xx [ 286 ] = xx [ 247 ] + xx [ 285 ] ; xx [ 287 ] = xx [ 283 ] ; xx
[ 288 ] = xx [ 284 ] ; xx [ 289 ] = - xx [ 286 ] ; pm_math_Vector3_cross_ra (
xx + 190 , xx + 287 , xx + 290 ) ; xx [ 287 ] = xx [ 244 ] + ( xx [ 189 ] *
xx [ 283 ] + xx [ 290 ] ) * xx [ 0 ] ; xx [ 288 ] = ( xx [ 189 ] * xx [ 284 ]
+ xx [ 291 ] ) * xx [ 0 ] - xx [ 180 ] ; xx [ 289 ] = xx [ 0 ] * ( xx [ 292 ]
- xx [ 286 ] * xx [ 189 ] ) ; xx [ 247 ] = pm_math_Vector3_dot_ra ( xx + 287
, xx + 280 ) ; xx [ 286 ] = xx [ 275 ] ; xx [ 287 ] = xx [ 247 ] ; xx [ 288 ]
= xx [ 27 ] ; solveSymmetricPosDef ( xx + 248 , xx + 286 , 3 , 1 , xx + 289 ,
xx + 292 ) ; xx [ 283 ] = xx [ 199 ] * xx [ 276 ] + xx [ 145 ] * xx [ 277 ] +
xx [ 212 ] * xx [ 278 ] + xx [ 230 ] * xx [ 289 ] + xx [ 40 ] * xx [ 290 ] +
xx [ 182 ] * xx [ 291 ] ; xx [ 284 ] = xx [ 141 ] * xx [ 12 ] ; xx [ 286 ] =
xx [ 141 ] * xx [ 16 ] ; xx [ 287 ] = xx [ 261 ] + xx [ 130 ] ; xx [ 291 ] =
xx [ 284 ] ; xx [ 292 ] = xx [ 286 ] ; xx [ 293 ] = - xx [ 287 ] ;
pm_math_Vector3_cross_ra ( xx + 139 , xx + 291 , xx + 294 ) ; xx [ 291 ] = xx
[ 16 ] + ( xx [ 138 ] * xx [ 284 ] + xx [ 294 ] ) * xx [ 0 ] ; xx [ 292 ] = (
xx [ 138 ] * xx [ 286 ] + xx [ 295 ] ) * xx [ 0 ] - xx [ 12 ] ; xx [ 293 ] =
xx [ 0 ] * ( xx [ 296 ] - xx [ 287 ] * xx [ 138 ] ) ; xx [ 130 ] = xx [ 190 ]
* xx [ 190 ] ; xx [ 261 ] = ( xx [ 178 ] + xx [ 130 ] ) * xx [ 0 ] - xx [ 13
] ; xx [ 178 ] = ( xx [ 175 ] + xx [ 176 ] ) * xx [ 0 ] ; xx [ 175 ] = xx [ 0
] * ( xx [ 259 ] - xx [ 258 ] ) ; xx [ 286 ] = xx [ 261 ] ; xx [ 287 ] = xx [
178 ] ; xx [ 288 ] = xx [ 175 ] ; xx [ 176 ] = pm_math_Vector3_dot_ra ( xx +
291 , xx + 286 ) ; xx [ 258 ] = xx [ 141 ] * xx [ 5 ] ; xx [ 259 ] = xx [ 141
] * xx [ 46 ] ; xx [ 284 ] = xx [ 267 ] + xx [ 144 ] ; xx [ 291 ] = xx [ 258
] ; xx [ 292 ] = xx [ 259 ] ; xx [ 293 ] = - xx [ 284 ] ;
pm_math_Vector3_cross_ra ( xx + 139 , xx + 291 , xx + 294 ) ; xx [ 291 ] = xx
[ 46 ] + ( xx [ 138 ] * xx [ 258 ] + xx [ 294 ] ) * xx [ 0 ] ; xx [ 292 ] = (
xx [ 138 ] * xx [ 259 ] + xx [ 295 ] ) * xx [ 0 ] - xx [ 5 ] ; xx [ 293 ] =
xx [ 0 ] * ( xx [ 296 ] - xx [ 284 ] * xx [ 138 ] ) ; xx [ 144 ] =
pm_math_Vector3_dot_ra ( xx + 291 , xx + 286 ) ; xx [ 291 ] = xx [ 176 ] - xx
[ 143 ] ; xx [ 292 ] = xx [ 144 ] - xx [ 203 ] ; xx [ 293 ] = - xx [ 202 ] ;
solveSymmetricPosDef ( xx + 94 , xx + 291 , 3 , 1 , xx + 294 , xx + 297 ) ;
xx [ 143 ] = xx [ 274 ] + xx [ 223 ] ; xx [ 202 ] = xx [ 234 ] * xx [ 190 ] ;
xx [ 203 ] = xx [ 190 ] * xx [ 222 ] ; xx [ 291 ] = - xx [ 143 ] ; xx [ 292 ]
= xx [ 202 ] ; xx [ 293 ] = xx [ 203 ] ; pm_math_Vector3_cross_ra ( xx + 190
, xx + 291 , xx + 297 ) ; xx [ 291 ] = xx [ 0 ] * ( xx [ 297 ] - xx [ 143 ] *
xx [ 189 ] ) ; xx [ 292 ] = xx [ 222 ] + ( xx [ 189 ] * xx [ 202 ] + xx [ 298
] ) * xx [ 0 ] ; xx [ 293 ] = ( xx [ 189 ] * xx [ 203 ] + xx [ 299 ] ) * xx [
0 ] - xx [ 234 ] ; xx [ 143 ] = ( xx [ 227 ] + xx [ 228 ] ) * xx [ 0 ] ; xx [
202 ] = xx [ 0 ] * ( xx [ 208 ] - xx [ 207 ] ) ; xx [ 203 ] = ( xx [ 224 ] +
xx [ 205 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 297 ] = xx [ 143 ] ; xx [ 298 ] =
xx [ 202 ] ; xx [ 299 ] = xx [ 203 ] ; xx [ 205 ] = pm_math_Vector3_dot_ra (
xx + 291 , xx + 297 ) ; xx [ 207 ] = xx [ 190 ] * xx [ 244 ] ; xx [ 291 ] = -
( ( xx [ 189 ] * xx [ 285 ] + xx [ 192 ] * xx [ 207 ] ) * xx [ 0 ] ) ; xx [
292 ] = xx [ 0 ] * ( xx [ 189 ] * xx [ 207 ] - xx [ 192 ] * xx [ 285 ] ) ; xx
[ 293 ] = ( xx [ 190 ] * xx [ 207 ] + xx [ 191 ] * xx [ 285 ] ) * xx [ 0 ] -
xx [ 244 ] ; xx [ 207 ] = pm_math_Vector3_dot_ra ( xx + 291 , xx + 297 ) ; xx
[ 291 ] = xx [ 177 ] ; xx [ 292 ] = xx [ 13 ] - ( xx [ 257 ] + xx [ 130 ] ) *
xx [ 0 ] ; xx [ 293 ] = ( xx [ 194 ] + xx [ 193 ] ) * xx [ 0 ] ; xx [ 130 ] =
pm_math_Vector3_dot_ra ( xx + 291 , xx + 297 ) ; xx [ 257 ] = xx [ 205 ] ; xx
[ 258 ] = xx [ 207 ] ; xx [ 259 ] = xx [ 130 ] ; solveSymmetricPosDef ( xx +
248 , xx + 257 , 3 , 1 , xx + 291 , xx + 300 ) ; xx [ 193 ] = xx [ 199 ] * xx
[ 294 ] + xx [ 145 ] * xx [ 295 ] + xx [ 212 ] * xx [ 296 ] + xx [ 230 ] * xx
[ 291 ] + xx [ 40 ] * xx [ 292 ] + xx [ 182 ] * xx [ 293 ] ; xx [ 194 ] = xx
[ 272 ] * xx [ 294 ] + xx [ 266 ] * xx [ 295 ] + xx [ 200 ] * xx [ 296 ] + xx
[ 275 ] * xx [ 291 ] + xx [ 247 ] * xx [ 292 ] ; xx [ 300 ] = xx [ 199 ] * xx
[ 213 ] + xx [ 145 ] * xx [ 214 ] + xx [ 212 ] * xx [ 215 ] + xx [ 230 ] * xx
[ 263 ] + xx [ 40 ] * xx [ 264 ] + xx [ 182 ] * xx [ 265 ] ; xx [ 301 ] = xx
[ 283 ] ; xx [ 302 ] = xx [ 193 ] ; xx [ 303 ] = xx [ 283 ] ; xx [ 304 ] = xx
[ 272 ] * xx [ 276 ] + xx [ 266 ] * xx [ 277 ] + xx [ 200 ] * xx [ 278 ] + xx
[ 275 ] * xx [ 289 ] + xx [ 247 ] * xx [ 290 ] ; xx [ 305 ] = xx [ 194 ] ; xx
[ 306 ] = xx [ 193 ] ; xx [ 307 ] = xx [ 194 ] ; xx [ 308 ] = xx [ 176 ] * xx
[ 294 ] + xx [ 144 ] * xx [ 295 ] + xx [ 205 ] * xx [ 291 ] + xx [ 207 ] * xx
[ 292 ] + xx [ 130 ] * xx [ 293 ] ; xx [ 193 ] = xx [ 150 ] * xx [ 150 ] ; xx
[ 194 ] = xx [ 0 ] * xx [ 193 ] - xx [ 13 ] ; xx [ 208 ] = xx [ 159 ] * xx [
159 ] ; xx [ 213 ] = ( xx [ 0 ] * xx [ 208 ] - xx [ 13 ] ) * inputDot [ 8 ] *
inputDot [ 8 ] ; xx [ 214 ] = xx [ 151 ] * xx [ 151 ] ; xx [ 215 ] = xx [ 0 ]
* xx [ 214 ] - xx [ 13 ] ; xx [ 223 ] = xx [ 215 ] * inputDot [ 7 ] *
inputDot [ 7 ] ; xx [ 224 ] = xx [ 148 ] * xx [ 148 ] ; xx [ 227 ] = xx [ 0 ]
* xx [ 224 ] - xx [ 13 ] ; xx [ 228 ] = xx [ 147 ] * xx [ 149 ] ; xx [ 257 ]
= xx [ 160 ] * xx [ 142 ] ; xx [ 258 ] = ( xx [ 228 ] + xx [ 257 ] ) * xx [ 0
] ; xx [ 259 ] = xx [ 146 ] * inputDot [ 8 ] ; xx [ 263 ] = xx [ 0 ] * xx [
151 ] * xx [ 259 ] ; xx [ 264 ] = xx [ 213 ] * xx [ 215 ] - xx [ 223 ] * xx [
227 ] - xx [ 0 ] * xx [ 258 ] * xx [ 263 ] * inputDot [ 7 ] ; xx [ 265 ] = xx
[ 151 ] * xx [ 146 ] ; xx [ 267 ] = xx [ 0 ] * xx [ 265 ] ; xx [ 274 ] = xx [
0 ] * xx [ 265 ] * inputDot [ 7 ] * inputDot [ 7 ] ; xx [ 265 ] = inputDot [
8 ] - xx [ 0 ] * xx [ 259 ] * xx [ 146 ] ; xx [ 259 ] = xx [ 267 ] * xx [ 213
] - xx [ 274 ] * xx [ 227 ] + xx [ 0 ] * xx [ 258 ] * xx [ 265 ] * inputDot [
7 ] ; xx [ 227 ] = xx [ 153 ] * xx [ 150 ] ; xx [ 258 ] = xx [ 0 ] * xx [ 227
] ; xx [ 276 ] = xx [ 0 ] * xx [ 227 ] * inputDot [ 6 ] * inputDot [ 6 ] ; xx
[ 227 ] = xx [ 142 ] * xx [ 149 ] ; xx [ 277 ] = xx [ 160 ] * xx [ 147 ] ; xx
[ 278 ] = xx [ 0 ] * ( xx [ 227 ] - xx [ 277 ] ) ; xx [ 283 ] = xx [ 194 ] *
inputDot [ 6 ] * inputDot [ 6 ] ; xx [ 284 ] = xx [ 142 ] * xx [ 142 ] ; xx [
285 ] = ( xx [ 284 ] + xx [ 147 ] * xx [ 147 ] ) * xx [ 0 ] - xx [ 13 ] ; xx
[ 289 ] = xx [ 155 ] * xx [ 155 ] ; xx [ 290 ] = ( xx [ 289 ] + xx [ 162 ] *
xx [ 162 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 291 ] = xx [ 152 ] * xx [ 162 ] ;
xx [ 292 ] = xx [ 163 ] * xx [ 155 ] ; xx [ 293 ] = xx [ 152 ] * xx [ 155 ] ;
xx [ 294 ] = xx [ 162 ] * xx [ 163 ] ; xx [ 295 ] = ( xx [ 293 ] - xx [ 294 ]
) * xx [ 0 ] ; xx [ 296 ] = ( xx [ 291 ] - xx [ 292 ] ) * xx [ 0 ] ; xx [ 309
] = xx [ 152 ] * xx [ 163 ] ; xx [ 310 ] = xx [ 162 ] * xx [ 155 ] ; xx [ 311
] = xx [ 0 ] * ( xx [ 309 ] + xx [ 310 ] ) ; xx [ 312 ] = xx [ 0 ] * ( xx [
294 ] + xx [ 293 ] ) ; xx [ 293 ] = ( xx [ 289 ] + xx [ 163 ] * xx [ 163 ] )
* xx [ 0 ] - xx [ 13 ] ; xx [ 313 ] = xx [ 290 ] ; xx [ 314 ] = xx [ 0 ] * (
xx [ 291 ] + xx [ 292 ] ) ; xx [ 315 ] = xx [ 295 ] ; xx [ 316 ] = xx [ 296 ]
; xx [ 317 ] = ( xx [ 289 ] + xx [ 152 ] * xx [ 152 ] ) * xx [ 0 ] - xx [ 13
] ; xx [ 318 ] = - xx [ 311 ] ; xx [ 319 ] = - xx [ 312 ] ; xx [ 320 ] = ( xx
[ 310 ] - xx [ 309 ] ) * xx [ 0 ] ; xx [ 321 ] = xx [ 293 ] ; xx [ 289 ] = xx
[ 153 ] * xx [ 263 ] ; xx [ 291 ] = xx [ 153 ] * xx [ 265 ] ; xx [ 292 ] = xx
[ 0 ] * ( xx [ 153 ] * xx [ 289 ] + xx [ 291 ] * xx [ 150 ] ) - xx [ 263 ] ;
xx [ 294 ] = xx [ 265 ] - ( xx [ 153 ] * xx [ 291 ] - xx [ 289 ] * xx [ 150 ]
) * xx [ 0 ] ; xx [ 322 ] = xx [ 292 ] ; xx [ 323 ] = inputDot [ 7 ] ; xx [
324 ] = xx [ 294 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 313 , xx + 322 ,
xx + 325 ) ; xx [ 289 ] = xx [ 194 ] * xx [ 264 ] + xx [ 259 ] * xx [ 258 ] -
( xx [ 276 ] * xx [ 278 ] + xx [ 283 ] * xx [ 285 ] ) - xx [ 0 ] * xx [ 327 ]
* inputDot [ 6 ] ; xx [ 291 ] = xx [ 154 ] * xx [ 154 ] ; xx [ 309 ] = xx [ 0
] * xx [ 291 ] - xx [ 13 ] ; xx [ 310 ] = xx [ 259 ] * xx [ 194 ] - xx [ 258
] * xx [ 264 ] - ( xx [ 278 ] * xx [ 283 ] - xx [ 276 ] * xx [ 285 ] ) + xx [
0 ] * xx [ 325 ] * inputDot [ 6 ] ; xx [ 259 ] = xx [ 157 ] * xx [ 154 ] ; xx
[ 264 ] = xx [ 0 ] * xx [ 259 ] ; xx [ 278 ] = xx [ 0 ] * xx [ 259 ] *
inputDot [ 9 ] * inputDot [ 9 ] ; xx [ 259 ] = xx [ 309 ] * inputDot [ 9 ] *
inputDot [ 9 ] ; xx [ 285 ] = xx [ 132 ] * xx [ 132 ] ; xx [ 313 ] = ( xx [
285 ] + xx [ 164 ] * xx [ 164 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 314 ] = xx [
156 ] * xx [ 164 ] ; xx [ 315 ] = xx [ 167 ] * xx [ 132 ] ; xx [ 316 ] = xx [
0 ] * ( xx [ 314 ] + xx [ 315 ] ) ; xx [ 317 ] = xx [ 156 ] * xx [ 132 ] ; xx
[ 318 ] = xx [ 167 ] * xx [ 164 ] ; xx [ 319 ] = ( xx [ 314 ] - xx [ 315 ] )
* xx [ 0 ] ; xx [ 314 ] = ( xx [ 285 ] + xx [ 156 ] * xx [ 156 ] ) * xx [ 0 ]
- xx [ 13 ] ; xx [ 315 ] = xx [ 156 ] * xx [ 167 ] ; xx [ 320 ] = xx [ 164 ]
* xx [ 132 ] ; xx [ 321 ] = xx [ 0 ] * ( xx [ 318 ] + xx [ 317 ] ) ; xx [ 322
] = ( xx [ 320 ] - xx [ 315 ] ) * xx [ 0 ] ; xx [ 334 ] = xx [ 313 ] ; xx [
335 ] = xx [ 316 ] ; xx [ 336 ] = ( xx [ 317 ] - xx [ 318 ] ) * xx [ 0 ] ; xx
[ 337 ] = xx [ 319 ] ; xx [ 338 ] = xx [ 314 ] ; xx [ 339 ] = - ( xx [ 0 ] *
( xx [ 315 ] + xx [ 320 ] ) ) ; xx [ 340 ] = - xx [ 321 ] ; xx [ 341 ] = xx [
322 ] ; xx [ 342 ] = ( xx [ 285 ] + xx [ 167 ] * xx [ 167 ] ) * xx [ 0 ] - xx
[ 13 ] ; xx [ 285 ] = xx [ 157 ] * xx [ 292 ] ; xx [ 315 ] = xx [ 157 ] * xx
[ 294 ] ; xx [ 317 ] = xx [ 292 ] - ( xx [ 157 ] * xx [ 285 ] - xx [ 315 ] *
xx [ 154 ] ) * xx [ 0 ] ; xx [ 318 ] = inputDot [ 7 ] + inputDot [ 6 ] ; xx [
320 ] = xx [ 294 ] - xx [ 0 ] * ( xx [ 285 ] * xx [ 154 ] + xx [ 157 ] * xx [
315 ] ) ; xx [ 343 ] = xx [ 317 ] ; xx [ 344 ] = xx [ 318 ] ; xx [ 345 ] = xx
[ 320 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 334 , xx + 343 , xx + 346 ) ;
xx [ 285 ] = xx [ 289 ] * xx [ 309 ] + xx [ 310 ] * xx [ 264 ] - ( xx [ 295 ]
* xx [ 278 ] + xx [ 259 ] * xx [ 290 ] ) - xx [ 0 ] * xx [ 348 ] * inputDot [
9 ] ; xx [ 315 ] = xx [ 158 ] * xx [ 158 ] ; xx [ 323 ] = xx [ 0 ] * xx [ 315
] - xx [ 13 ] ; xx [ 324 ] = xx [ 161 ] * xx [ 158 ] ; xx [ 334 ] = xx [ 0 ]
* xx [ 324 ] ; xx [ 335 ] = xx [ 159 ] * xx [ 148 ] ; xx [ 336 ] = xx [ 0 ] *
xx [ 335 ] * inputDot [ 8 ] * inputDot [ 8 ] ; xx [ 337 ] = ( xx [ 214 ] + xx
[ 146 ] * xx [ 146 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 214 ] = ( xx [ 193 ] +
xx [ 153 ] * xx [ 153 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 193 ] = ( xx [ 291 ]
+ xx [ 157 ] * xx [ 157 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 291 ] = xx [ 336 ]
* xx [ 337 ] * xx [ 214 ] * xx [ 193 ] ; xx [ 338 ] = xx [ 323 ] * inputDot [
10 ] * inputDot [ 10 ] ; xx [ 339 ] = xx [ 0 ] * xx [ 324 ] * inputDot [ 10 ]
* inputDot [ 10 ] ; xx [ 324 ] = xx [ 168 ] * xx [ 168 ] ; xx [ 340 ] = ( xx
[ 324 ] + xx [ 171 ] * xx [ 171 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 341 ] = xx
[ 171 ] * xx [ 165 ] ; xx [ 342 ] = xx [ 170 ] * xx [ 168 ] ; xx [ 343 ] = xx
[ 165 ] * xx [ 168 ] ; xx [ 344 ] = xx [ 170 ] * xx [ 171 ] ; xx [ 345 ] = (
xx [ 343 ] - xx [ 344 ] ) * xx [ 0 ] ; xx [ 355 ] = ( xx [ 341 ] - xx [ 342 ]
) * xx [ 0 ] ; xx [ 356 ] = xx [ 170 ] * xx [ 165 ] ; xx [ 357 ] = xx [ 171 ]
* xx [ 168 ] ; xx [ 358 ] = xx [ 0 ] * ( xx [ 356 ] + xx [ 357 ] ) ; xx [ 359
] = xx [ 0 ] * ( xx [ 344 ] + xx [ 343 ] ) ; xx [ 343 ] = ( xx [ 324 ] + xx [
170 ] * xx [ 170 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 360 ] = xx [ 340 ] ; xx [
361 ] = xx [ 0 ] * ( xx [ 341 ] + xx [ 342 ] ) ; xx [ 362 ] = xx [ 345 ] ; xx
[ 363 ] = xx [ 355 ] ; xx [ 364 ] = ( xx [ 324 ] + xx [ 165 ] * xx [ 165 ] )
* xx [ 0 ] - xx [ 13 ] ; xx [ 365 ] = - xx [ 358 ] ; xx [ 366 ] = - xx [ 359
] ; xx [ 367 ] = ( xx [ 357 ] - xx [ 356 ] ) * xx [ 0 ] ; xx [ 368 ] = xx [
343 ] ; xx [ 324 ] = xx [ 318 ] + inputDot [ 9 ] ; xx [ 341 ] = xx [ 324 ] *
xx [ 161 ] ; xx [ 342 ] = xx [ 161 ] * xx [ 317 ] ; xx [ 344 ] = xx [ 317 ] -
xx [ 0 ] * ( xx [ 341 ] * xx [ 158 ] + xx [ 161 ] * xx [ 342 ] ) ; xx [ 356 ]
= xx [ 324 ] - ( xx [ 161 ] * xx [ 341 ] - xx [ 342 ] * xx [ 158 ] ) * xx [ 0
] ; xx [ 369 ] = xx [ 344 ] ; xx [ 370 ] = xx [ 356 ] ; xx [ 371 ] = xx [ 320
] ; pm_math_Matrix3x3_postCross_ra ( xx + 360 , xx + 369 , xx + 372 ) ; xx [
341 ] = xx [ 285 ] * xx [ 323 ] + xx [ 334 ] * xx [ 291 ] - ( xx [ 338 ] * xx
[ 313 ] - xx [ 339 ] * xx [ 316 ] ) + xx [ 0 ] * xx [ 373 ] * inputDot [ 10 ]
; xx [ 342 ] = xx [ 166 ] * xx [ 166 ] ; xx [ 357 ] = xx [ 0 ] * xx [ 342 ] -
xx [ 13 ] ; xx [ 360 ] = ( xx [ 315 ] + xx [ 161 ] * xx [ 161 ] ) * xx [ 0 ]
- xx [ 13 ] ; xx [ 315 ] = ( xx [ 310 ] * xx [ 309 ] - xx [ 264 ] * xx [ 289
] - ( xx [ 295 ] * xx [ 259 ] - xx [ 278 ] * xx [ 290 ] ) + xx [ 0 ] * xx [
346 ] * inputDot [ 9 ] ) * xx [ 360 ] ; xx [ 289 ] = xx [ 166 ] * xx [ 133 ]
; xx [ 290 ] = xx [ 0 ] * xx [ 289 ] ; xx [ 295 ] = xx [ 0 ] * xx [ 289 ] *
inputDot [ 11 ] * inputDot [ 11 ] ; xx [ 289 ] = xx [ 357 ] * inputDot [ 11 ]
* inputDot [ 11 ] ; xx [ 310 ] = xx [ 169 ] * xx [ 169 ] ; xx [ 361 ] = xx [
174 ] * xx [ 169 ] ; xx [ 362 ] = xx [ 173 ] * xx [ 172 ] ; xx [ 363 ] = xx [
173 ] * xx [ 169 ] ; xx [ 364 ] = xx [ 174 ] * xx [ 172 ] ; xx [ 365 ] = xx [
174 ] * xx [ 173 ] ; xx [ 366 ] = xx [ 172 ] * xx [ 169 ] ; xx [ 381 ] = ( xx
[ 310 ] + xx [ 172 ] * xx [ 172 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 382 ] = xx
[ 0 ] * ( xx [ 361 ] + xx [ 362 ] ) ; xx [ 383 ] = - ( ( xx [ 363 ] - xx [
364 ] ) * xx [ 0 ] ) ; xx [ 384 ] = - ( ( xx [ 361 ] - xx [ 362 ] ) * xx [ 0
] ) ; xx [ 385 ] = ( xx [ 310 ] + xx [ 173 ] * xx [ 173 ] ) * xx [ 0 ] - xx [
13 ] ; xx [ 386 ] = xx [ 0 ] * ( xx [ 365 ] + xx [ 366 ] ) ; xx [ 387 ] = xx
[ 0 ] * ( xx [ 363 ] + xx [ 364 ] ) ; xx [ 388 ] = ( xx [ 365 ] - xx [ 366 ]
) * xx [ 0 ] ; xx [ 389 ] = ( xx [ 310 ] + xx [ 174 ] * xx [ 174 ] ) * xx [ 0
] - xx [ 13 ] ; xx [ 310 ] = xx [ 320 ] + inputDot [ 10 ] ; xx [ 361 ] = xx [
310 ] * xx [ 133 ] ; xx [ 362 ] = xx [ 344 ] * xx [ 133 ] ; xx [ 363 ] = xx [
344 ] - ( xx [ 166 ] * xx [ 361 ] + xx [ 362 ] * xx [ 133 ] ) * xx [ 0 ] ; xx
[ 364 ] = xx [ 310 ] + xx [ 0 ] * ( xx [ 166 ] * xx [ 362 ] - xx [ 361 ] * xx
[ 133 ] ) ; xx [ 365 ] = xx [ 363 ] ; xx [ 366 ] = xx [ 356 ] ; xx [ 367 ] =
xx [ 364 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 381 , xx + 365 , xx + 390
) ; xx [ 361 ] = ( xx [ 342 ] + xx [ 133 ] * xx [ 133 ] ) * xx [ 0 ] - xx [
13 ] ; xx [ 342 ] = xx [ 0 ] * xx [ 335 ] ; xx [ 335 ] = ( xx [ 284 ] + xx [
149 ] * xx [ 149 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 362 ] = xx [ 336 ] * xx [
215 ] + xx [ 342 ] * xx [ 223 ] - xx [ 0 ] * xx [ 263 ] * xx [ 335 ] *
inputDot [ 7 ] ; xx [ 215 ] = xx [ 267 ] * xx [ 336 ] + xx [ 342 ] * xx [ 274
] + xx [ 0 ] * xx [ 335 ] * xx [ 265 ] * inputDot [ 7 ] ; xx [ 267 ] = xx [ 0
] * ( xx [ 228 ] - xx [ 257 ] ) ; xx [ 228 ] = xx [ 160 ] * xx [ 149 ] ; xx [
257 ] = xx [ 142 ] * xx [ 147 ] ; xx [ 335 ] = ( xx [ 228 ] + xx [ 257 ] ) *
xx [ 0 ] ; xx [ 336 ] = xx [ 362 ] * xx [ 194 ] + xx [ 215 ] * xx [ 258 ] - (
xx [ 267 ] * xx [ 283 ] - xx [ 335 ] * xx [ 276 ] ) - xx [ 0 ] * xx [ 330 ] *
inputDot [ 6 ] ; xx [ 342 ] = xx [ 215 ] * xx [ 194 ] - xx [ 258 ] * xx [ 362
] + xx [ 335 ] * xx [ 283 ] + xx [ 276 ] * xx [ 267 ] + xx [ 0 ] * xx [ 328 ]
* inputDot [ 6 ] ; xx [ 215 ] = xx [ 309 ] * xx [ 336 ] + xx [ 342 ] * xx [
264 ] + xx [ 278 ] * xx [ 311 ] - xx [ 296 ] * xx [ 259 ] - xx [ 0 ] * xx [
351 ] * inputDot [ 9 ] ; xx [ 267 ] = xx [ 213 ] * xx [ 337 ] * xx [ 214 ] *
xx [ 193 ] ; xx [ 193 ] = xx [ 215 ] * xx [ 323 ] - xx [ 334 ] * xx [ 267 ] -
( xx [ 319 ] * xx [ 338 ] - xx [ 339 ] * xx [ 314 ] ) + xx [ 0 ] * xx [ 376 ]
* inputDot [ 10 ] ; xx [ 213 ] = ( xx [ 342 ] * xx [ 309 ] - xx [ 264 ] * xx
[ 336 ] + xx [ 296 ] * xx [ 278 ] + xx [ 311 ] * xx [ 259 ] + xx [ 0 ] * xx [
349 ] * inputDot [ 9 ] ) * xx [ 360 ] ; xx [ 214 ] = ( xx [ 224 ] + xx [ 208
] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 208 ] = xx [ 0 ] * ( xx [ 257 ] - xx [ 228
] ) ; xx [ 224 ] = xx [ 274 ] * xx [ 214 ] - xx [ 0 ] * xx [ 263 ] * xx [ 208
] * inputDot [ 7 ] ; xx [ 228 ] = xx [ 0 ] * xx [ 208 ] * xx [ 265 ] *
inputDot [ 7 ] - xx [ 223 ] * xx [ 214 ] ; xx [ 208 ] = ( xx [ 277 ] + xx [
227 ] ) * xx [ 0 ] ; xx [ 214 ] = ( xx [ 284 ] + xx [ 160 ] * xx [ 160 ] ) *
xx [ 0 ] - xx [ 13 ] ; xx [ 223 ] = xx [ 194 ] * xx [ 224 ] + xx [ 258 ] * xx
[ 228 ] + xx [ 208 ] * xx [ 283 ] - xx [ 276 ] * xx [ 214 ] - xx [ 0 ] * xx [
333 ] * inputDot [ 6 ] ; xx [ 227 ] = xx [ 228 ] * xx [ 194 ] - xx [ 258 ] *
xx [ 224 ] - ( xx [ 208 ] * xx [ 276 ] + xx [ 283 ] * xx [ 214 ] ) + xx [ 0 ]
* xx [ 331 ] * inputDot [ 6 ] ; xx [ 194 ] = xx [ 223 ] * xx [ 309 ] + xx [
227 ] * xx [ 264 ] + xx [ 312 ] * xx [ 259 ] - xx [ 278 ] * xx [ 293 ] - xx [
0 ] * xx [ 354 ] * inputDot [ 9 ] ; xx [ 208 ] = xx [ 194 ] * xx [ 323 ] + xx
[ 321 ] * xx [ 338 ] + xx [ 322 ] * xx [ 339 ] + xx [ 0 ] * xx [ 379 ] *
inputDot [ 10 ] ; xx [ 214 ] = ( xx [ 227 ] * xx [ 309 ] - xx [ 264 ] * xx [
223 ] - ( xx [ 278 ] * xx [ 312 ] + xx [ 259 ] * xx [ 293 ] ) + xx [ 0 ] * xx
[ 352 ] * inputDot [ 9 ] ) * xx [ 360 ] ; xx [ 325 ] = xx [ 341 ] * xx [ 357
] - xx [ 315 ] * xx [ 290 ] + xx [ 345 ] * xx [ 295 ] - xx [ 289 ] * xx [ 340
] - xx [ 0 ] * xx [ 392 ] * inputDot [ 11 ] ; xx [ 326 ] = - ( xx [ 361 ] * (
xx [ 339 ] * xx [ 313 ] + xx [ 316 ] * xx [ 338 ] + xx [ 291 ] * xx [ 323 ] -
xx [ 334 ] * xx [ 285 ] + xx [ 0 ] * xx [ 372 ] * inputDot [ 10 ] ) ) ; xx [
327 ] = xx [ 341 ] * xx [ 290 ] + xx [ 315 ] * xx [ 357 ] - ( xx [ 295 ] * xx
[ 340 ] + xx [ 345 ] * xx [ 289 ] ) + xx [ 0 ] * xx [ 390 ] * inputDot [ 11 ]
; xx [ 328 ] = xx [ 193 ] * xx [ 357 ] - xx [ 213 ] * xx [ 290 ] - ( xx [ 295
] * xx [ 358 ] + xx [ 355 ] * xx [ 289 ] ) - xx [ 0 ] * xx [ 395 ] * inputDot
[ 11 ] ; xx [ 329 ] = ( xx [ 267 ] * xx [ 323 ] + xx [ 334 ] * xx [ 215 ] - (
xx [ 319 ] * xx [ 339 ] + xx [ 338 ] * xx [ 314 ] ) - xx [ 0 ] * xx [ 375 ] *
inputDot [ 10 ] ) * xx [ 361 ] ; xx [ 330 ] = xx [ 193 ] * xx [ 290 ] + xx [
213 ] * xx [ 357 ] - ( xx [ 355 ] * xx [ 295 ] - xx [ 358 ] * xx [ 289 ] ) +
xx [ 0 ] * xx [ 393 ] * inputDot [ 11 ] ; xx [ 331 ] = xx [ 208 ] * xx [ 357
] - xx [ 214 ] * xx [ 290 ] + xx [ 295 ] * xx [ 343 ] + xx [ 359 ] * xx [ 289
] - xx [ 0 ] * xx [ 398 ] * inputDot [ 11 ] ; xx [ 332 ] = xx [ 361 ] * ( xx
[ 339 ] * xx [ 321 ] - xx [ 322 ] * xx [ 338 ] + xx [ 334 ] * xx [ 194 ] - xx
[ 0 ] * xx [ 378 ] * inputDot [ 10 ] ) ; xx [ 333 ] = xx [ 208 ] * xx [ 290 ]
+ xx [ 214 ] * xx [ 357 ] - ( xx [ 289 ] * xx [ 343 ] - xx [ 295 ] * xx [ 359
] ) + xx [ 0 ] * xx [ 396 ] * inputDot [ 11 ] ; xx [ 193 ] = xx [ 179 ] * xx
[ 179 ] ; xx [ 194 ] = xx [ 1 ] * xx [ 4 ] ; xx [ 208 ] = xx [ 184 ] * xx [
179 ] ; xx [ 213 ] = xx [ 0 ] * ( xx [ 220 ] - xx [ 219 ] ) ; xx [ 334 ] = (
xx [ 193 ] + xx [ 232 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 335 ] = xx [ 0 ] * (
xx [ 210 ] - xx [ 209 ] ) ; xx [ 336 ] = ( xx [ 194 ] + xx [ 208 ] ) * xx [ 0
] ; xx [ 337 ] = ( xx [ 210 ] + xx [ 209 ] ) * xx [ 0 ] ; xx [ 338 ] = ( xx [
193 ] + xx [ 184 ] * xx [ 184 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 339 ] = xx [
213 ] ; xx [ 340 ] = xx [ 0 ] * ( xx [ 194 ] - xx [ 208 ] ) ; xx [ 341 ] = (
xx [ 220 ] + xx [ 219 ] ) * xx [ 0 ] ; xx [ 342 ] = ( xx [ 193 ] + xx [ 231 ]
) * xx [ 0 ] - xx [ 13 ] ; pm_math_Matrix3x3_compose_ra ( xx + 325 , xx + 334
, xx + 345 ) ; xx [ 193 ] = xx [ 0 ] * xx [ 246 ] * state [ 16 ] ; xx [ 194 ]
= xx [ 216 ] * state [ 15 ] ; xx [ 208 ] = xx [ 193 ] - xx [ 194 ] ; xx [ 209
] = xx [ 234 ] * state [ 15 ] ; xx [ 210 ] = xx [ 244 ] * state [ 16 ] ; xx [
214 ] = xx [ 209 ] + xx [ 210 ] ; xx [ 215 ] = xx [ 222 ] * state [ 15 ] ; xx
[ 219 ] = xx [ 215 ] + state [ 17 ] ; xx [ 222 ] = xx [ 208 ] ; xx [ 223 ] =
xx [ 214 ] ; xx [ 224 ] = xx [ 219 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
334 , xx + 222 , xx + 325 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 325 , xx
+ 222 , xx + 365 ) ; xx [ 257 ] = - xx [ 194 ] ; xx [ 258 ] = xx [ 209 ] ; xx
[ 259 ] = xx [ 215 ] ; pm_math_Vector3_cross_ra ( xx + 222 , xx + 257 , xx +
276 ) ; xx [ 194 ] = xx [ 210 ] * state [ 17 ] - xx [ 276 ] ; xx [ 209 ] = xx
[ 277 ] + xx [ 193 ] * state [ 17 ] ; xx [ 257 ] = xx [ 194 ] ; xx [ 258 ] =
- xx [ 209 ] ; xx [ 259 ] = - xx [ 278 ] ; pm_math_Matrix3x3_postCross_ra (
xx + 334 , xx + 257 , xx + 325 ) ; xx [ 334 ] = xx [ 365 ] + xx [ 325 ] ; xx
[ 335 ] = xx [ 366 ] + xx [ 326 ] ; xx [ 336 ] = xx [ 367 ] + xx [ 327 ] ; xx
[ 337 ] = xx [ 368 ] + xx [ 328 ] ; xx [ 338 ] = xx [ 369 ] + xx [ 329 ] ; xx
[ 339 ] = xx [ 370 ] + xx [ 330 ] ; xx [ 340 ] = xx [ 371 ] + xx [ 331 ] ; xx
[ 341 ] = xx [ 372 ] + xx [ 332 ] ; xx [ 342 ] = xx [ 373 ] + xx [ 333 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 381 , xx + 334 , xx + 325 ) ; xx [ 334 ]
= xx [ 261 ] ; xx [ 335 ] = xx [ 177 ] ; xx [ 336 ] = xx [ 131 ] ; xx [ 337 ]
= xx [ 178 ] ; xx [ 338 ] = xx [ 183 ] ; xx [ 339 ] = xx [ 260 ] ; xx [ 340 ]
= xx [ 175 ] ; xx [ 341 ] = xx [ 195 ] ; xx [ 342 ] = xx [ 262 ] ; xx [ 257 ]
= xx [ 363 ] ; xx [ 258 ] = xx [ 356 ] + inputDot [ 11 ] ; xx [ 259 ] = xx [
364 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 185 , xx + 257 , xx + 260 )
; pm_math_Matrix3x3_postCross_ra ( xx + 334 , xx + 260 , xx + 365 ) ; xx [
131 ] = xx [ 193 ] - xx [ 0 ] * xx [ 211 ] * state [ 15 ] ; xx [ 175 ] = xx [
0 ] * xx [ 221 ] * state [ 15 ] + state [ 17 ] ; xx [ 257 ] = xx [ 131 ] ; xx
[ 258 ] = xx [ 214 ] ; xx [ 259 ] = xx [ 175 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 365 , xx + 257 , xx + 334 ) ; xx [ 257
] = xx [ 346 ] + xx [ 326 ] + xx [ 0 ] * xx [ 335 ] ; xx [ 258 ] = xx [ 349 ]
+ xx [ 329 ] + xx [ 0 ] * xx [ 338 ] ; xx [ 259 ] = xx [ 352 ] + xx [ 332 ] +
xx [ 0 ] * xx [ 341 ] ; xx [ 177 ] = xx [ 110 ] * xx [ 106 ] ; xx [ 178 ] =
xx [ 108 ] * xx [ 115 ] ; xx [ 183 ] = ( xx [ 177 ] + xx [ 178 ] ) * xx [ 0 ]
; xx [ 193 ] = xx [ 109 ] * inputDot [ 2 ] ; xx [ 195 ] = xx [ 0 ] * xx [ 111
] * xx [ 193 ] ; xx [ 210 ] = xx [ 107 ] * xx [ 107 ] ; xx [ 211 ] = xx [ 0 ]
* xx [ 210 ] - xx [ 13 ] ; xx [ 215 ] = xx [ 211 ] * inputDot [ 2 ] *
inputDot [ 2 ] ; xx [ 220 ] = xx [ 111 ] * xx [ 111 ] ; xx [ 221 ] = xx [ 0 ]
* xx [ 220 ] - xx [ 13 ] ; xx [ 227 ] = xx [ 221 ] * inputDot [ 1 ] *
inputDot [ 1 ] ; xx [ 228 ] = xx [ 0 ] * xx [ 183 ] * xx [ 195 ] * inputDot [
1 ] - ( xx [ 215 ] * xx [ 221 ] + xx [ 227 ] * xx [ 211 ] ) ; xx [ 231 ] = xx
[ 112 ] * xx [ 112 ] ; xx [ 232 ] = xx [ 0 ] * xx [ 231 ] - xx [ 13 ] ; xx [
234 ] = xx [ 111 ] * xx [ 109 ] ; xx [ 246 ] = xx [ 0 ] * xx [ 234 ] ; xx [
264 ] = xx [ 0 ] * xx [ 234 ] * inputDot [ 1 ] * inputDot [ 1 ] ; xx [ 234 ]
= inputDot [ 2 ] - xx [ 0 ] * xx [ 193 ] * xx [ 109 ] ; xx [ 193 ] = xx [ 246
] * xx [ 215 ] + xx [ 264 ] * xx [ 211 ] + xx [ 0 ] * xx [ 183 ] * xx [ 234 ]
* inputDot [ 1 ] ; xx [ 183 ] = xx [ 103 ] * xx [ 112 ] ; xx [ 211 ] = xx [ 0
] * xx [ 183 ] ; xx [ 267 ] = xx [ 0 ] * xx [ 183 ] * inputDot [ 0 ] *
inputDot [ 0 ] ; xx [ 183 ] = xx [ 108 ] * xx [ 110 ] ; xx [ 274 ] = xx [ 115
] * xx [ 106 ] ; xx [ 276 ] = xx [ 0 ] * ( xx [ 183 ] - xx [ 274 ] ) ; xx [
277 ] = xx [ 232 ] * inputDot [ 0 ] * inputDot [ 0 ] ; xx [ 283 ] = xx [ 108
] * xx [ 108 ] ; xx [ 284 ] = ( xx [ 283 ] + xx [ 106 ] * xx [ 106 ] ) * xx [
0 ] - xx [ 13 ] ; xx [ 285 ] = xx [ 104 ] * xx [ 104 ] ; xx [ 289 ] = ( xx [
285 ] + xx [ 117 ] * xx [ 117 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 290 ] = xx [
105 ] * xx [ 117 ] ; xx [ 291 ] = xx [ 104 ] * xx [ 118 ] ; xx [ 293 ] = xx [
105 ] * xx [ 104 ] ; xx [ 295 ] = xx [ 117 ] * xx [ 118 ] ; xx [ 296 ] = xx [
0 ] * ( xx [ 293 ] - xx [ 295 ] ) ; xx [ 309 ] = xx [ 0 ] * ( xx [ 291 ] - xx
[ 290 ] ) ; xx [ 311 ] = xx [ 105 ] * xx [ 118 ] ; xx [ 312 ] = xx [ 117 ] *
xx [ 104 ] ; xx [ 313 ] = ( xx [ 311 ] + xx [ 312 ] ) * xx [ 0 ] ; xx [ 314 ]
= ( xx [ 295 ] + xx [ 293 ] ) * xx [ 0 ] ; xx [ 293 ] = ( xx [ 285 ] + xx [
118 ] * xx [ 118 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 365 ] = xx [ 289 ] ; xx [
366 ] = - ( ( xx [ 290 ] + xx [ 291 ] ) * xx [ 0 ] ) ; xx [ 367 ] = xx [ 296
] ; xx [ 368 ] = xx [ 309 ] ; xx [ 369 ] = ( xx [ 285 ] + xx [ 105 ] * xx [
105 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 370 ] = xx [ 313 ] ; xx [ 371 ] = - xx
[ 314 ] ; xx [ 372 ] = xx [ 0 ] * ( xx [ 311 ] - xx [ 312 ] ) ; xx [ 373 ] =
xx [ 293 ] ; xx [ 285 ] = xx [ 103 ] * xx [ 195 ] ; xx [ 290 ] = xx [ 103 ] *
xx [ 234 ] ; xx [ 291 ] = xx [ 0 ] * ( xx [ 103 ] * xx [ 285 ] + xx [ 290 ] *
xx [ 112 ] ) - xx [ 195 ] ; xx [ 295 ] = xx [ 234 ] - ( xx [ 103 ] * xx [ 290
] - xx [ 285 ] * xx [ 112 ] ) * xx [ 0 ] ; xx [ 321 ] = xx [ 291 ] ; xx [ 322
] = inputDot [ 1 ] ; xx [ 323 ] = xx [ 295 ] ; pm_math_Matrix3x3_postCross_ra
( xx + 365 , xx + 321 , xx + 374 ) ; xx [ 285 ] = xx [ 228 ] * xx [ 232 ] -
xx [ 193 ] * xx [ 211 ] - ( xx [ 267 ] * xx [ 276 ] + xx [ 277 ] * xx [ 284 ]
) - xx [ 0 ] * xx [ 376 ] * inputDot [ 0 ] ; xx [ 290 ] = xx [ 113 ] * xx [
113 ] ; xx [ 311 ] = xx [ 0 ] * xx [ 290 ] - xx [ 13 ] ; xx [ 312 ] = xx [ 0
] * xx [ 374 ] * inputDot [ 0 ] - ( xx [ 211 ] * xx [ 228 ] + xx [ 193 ] * xx
[ 232 ] + xx [ 276 ] * xx [ 277 ] - xx [ 267 ] * xx [ 284 ] ) ; xx [ 193 ] =
xx [ 45 ] * xx [ 113 ] ; xx [ 228 ] = xx [ 0 ] * xx [ 193 ] ; xx [ 276 ] = xx
[ 0 ] * xx [ 193 ] * inputDot [ 3 ] * inputDot [ 3 ] ; xx [ 193 ] = xx [ 311
] * inputDot [ 3 ] * inputDot [ 3 ] ; xx [ 284 ] = xx [ 43 ] * xx [ 43 ] ; xx
[ 315 ] = ( xx [ 284 ] + xx [ 119 ] * xx [ 119 ] ) * xx [ 0 ] - xx [ 13 ] ;
xx [ 316 ] = xx [ 119 ] * xx [ 47 ] ; xx [ 319 ] = xx [ 43 ] * xx [ 122 ] ;
xx [ 321 ] = xx [ 0 ] * ( xx [ 316 ] - xx [ 319 ] ) ; xx [ 322 ] = xx [ 122 ]
* xx [ 119 ] ; xx [ 323 ] = xx [ 43 ] * xx [ 47 ] ; xx [ 343 ] = ( xx [ 316 ]
+ xx [ 319 ] ) * xx [ 0 ] ; xx [ 316 ] = ( xx [ 284 ] + xx [ 47 ] * xx [ 47 ]
) * xx [ 0 ] - xx [ 13 ] ; xx [ 319 ] = xx [ 43 ] * xx [ 119 ] ; xx [ 354 ] =
xx [ 122 ] * xx [ 47 ] ; xx [ 355 ] = xx [ 0 ] * ( xx [ 323 ] - xx [ 322 ] )
; xx [ 357 ] = ( xx [ 354 ] + xx [ 319 ] ) * xx [ 0 ] ; xx [ 365 ] = xx [ 315
] ; xx [ 366 ] = xx [ 321 ] ; xx [ 367 ] = - ( ( xx [ 322 ] + xx [ 323 ] ) *
xx [ 0 ] ) ; xx [ 368 ] = xx [ 343 ] ; xx [ 369 ] = xx [ 316 ] ; xx [ 370 ] =
xx [ 0 ] * ( xx [ 319 ] - xx [ 354 ] ) ; xx [ 371 ] = xx [ 355 ] ; xx [ 372 ]
= - xx [ 357 ] ; xx [ 373 ] = ( xx [ 284 ] + xx [ 122 ] * xx [ 122 ] ) * xx [
0 ] - xx [ 13 ] ; xx [ 284 ] = xx [ 45 ] * xx [ 291 ] ; xx [ 319 ] = xx [ 45
] * xx [ 295 ] ; xx [ 322 ] = xx [ 291 ] - ( xx [ 45 ] * xx [ 284 ] - xx [
319 ] * xx [ 113 ] ) * xx [ 0 ] ; xx [ 323 ] = inputDot [ 1 ] + inputDot [ 0
] ; xx [ 354 ] = xx [ 295 ] - xx [ 0 ] * ( xx [ 284 ] * xx [ 113 ] + xx [ 45
] * xx [ 319 ] ) ; xx [ 358 ] = xx [ 322 ] ; xx [ 359 ] = xx [ 323 ] ; xx [
360 ] = xx [ 354 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 365 , xx + 358 ,
xx + 383 ) ; xx [ 284 ] = xx [ 285 ] * xx [ 311 ] + xx [ 312 ] * xx [ 228 ] -
( xx [ 276 ] * xx [ 296 ] + xx [ 193 ] * xx [ 289 ] ) - xx [ 0 ] * xx [ 385 ]
* inputDot [ 3 ] ; xx [ 319 ] = xx [ 53 ] * xx [ 53 ] ; xx [ 358 ] = xx [ 0 ]
* xx [ 319 ] - xx [ 13 ] ; xx [ 359 ] = xx [ 116 ] * xx [ 53 ] ; xx [ 360 ] =
xx [ 0 ] * xx [ 359 ] ; xx [ 361 ] = xx [ 107 ] * xx [ 114 ] ; xx [ 362 ] =
xx [ 0 ] * xx [ 361 ] * inputDot [ 2 ] * inputDot [ 2 ] ; xx [ 365 ] = ( xx [
220 ] + xx [ 109 ] * xx [ 109 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 220 ] = ( xx
[ 231 ] + xx [ 103 ] * xx [ 103 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 231 ] = (
xx [ 290 ] + xx [ 45 ] * xx [ 45 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 290 ] = xx
[ 362 ] * xx [ 365 ] * xx [ 220 ] * xx [ 231 ] ; xx [ 366 ] = xx [ 358 ] *
inputDot [ 4 ] * inputDot [ 4 ] ; xx [ 367 ] = xx [ 0 ] * xx [ 359 ] *
inputDot [ 4 ] * inputDot [ 4 ] ; xx [ 359 ] = xx [ 123 ] * xx [ 123 ] ; xx [
368 ] = ( xx [ 359 ] + xx [ 126 ] * xx [ 126 ] ) * xx [ 0 ] - xx [ 13 ] ; xx
[ 369 ] = xx [ 126 ] * xx [ 120 ] ; xx [ 370 ] = xx [ 125 ] * xx [ 123 ] ; xx
[ 371 ] = xx [ 125 ] * xx [ 126 ] ; xx [ 372 ] = xx [ 123 ] * xx [ 120 ] ; xx
[ 373 ] = ( xx [ 371 ] - xx [ 372 ] ) * xx [ 0 ] ; xx [ 392 ] = ( xx [ 369 ]
- xx [ 370 ] ) * xx [ 0 ] ; xx [ 393 ] = xx [ 125 ] * xx [ 120 ] ; xx [ 394 ]
= xx [ 126 ] * xx [ 123 ] ; xx [ 395 ] = xx [ 0 ] * ( xx [ 393 ] + xx [ 394 ]
) ; xx [ 396 ] = xx [ 0 ] * ( xx [ 371 ] + xx [ 372 ] ) ; xx [ 371 ] = ( xx [
359 ] + xx [ 125 ] * xx [ 125 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 397 ] = xx [
368 ] ; xx [ 398 ] = xx [ 0 ] * ( xx [ 369 ] + xx [ 370 ] ) ; xx [ 399 ] = xx
[ 373 ] ; xx [ 400 ] = xx [ 392 ] ; xx [ 401 ] = ( xx [ 359 ] + xx [ 120 ] *
xx [ 120 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 402 ] = xx [ 395 ] ; xx [ 403 ] =
xx [ 396 ] ; xx [ 404 ] = ( xx [ 393 ] - xx [ 394 ] ) * xx [ 0 ] ; xx [ 405 ]
= xx [ 371 ] ; xx [ 359 ] = xx [ 323 ] + inputDot [ 3 ] ; xx [ 369 ] = xx [
359 ] * xx [ 116 ] ; xx [ 370 ] = xx [ 116 ] * xx [ 322 ] ; xx [ 372 ] = xx [
322 ] - xx [ 0 ] * ( xx [ 369 ] * xx [ 53 ] + xx [ 116 ] * xx [ 370 ] ) ; xx
[ 393 ] = xx [ 359 ] - ( xx [ 116 ] * xx [ 369 ] - xx [ 370 ] * xx [ 53 ] ) *
xx [ 0 ] ; xx [ 406 ] = xx [ 372 ] ; xx [ 407 ] = xx [ 393 ] ; xx [ 408 ] =
xx [ 354 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 397 , xx + 406 , xx + 409
) ; xx [ 369 ] = xx [ 284 ] * xx [ 358 ] - xx [ 360 ] * xx [ 290 ] - ( xx [
366 ] * xx [ 315 ] - xx [ 367 ] * xx [ 321 ] ) + xx [ 0 ] * xx [ 410 ] *
inputDot [ 4 ] ; xx [ 370 ] = xx [ 121 ] * xx [ 121 ] ; xx [ 394 ] = xx [ 0 ]
* xx [ 370 ] - xx [ 13 ] ; xx [ 397 ] = ( xx [ 319 ] + xx [ 116 ] * xx [ 116
] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 319 ] = ( xx [ 312 ] * xx [ 311 ] - xx [
228 ] * xx [ 285 ] - ( xx [ 296 ] * xx [ 193 ] - xx [ 276 ] * xx [ 289 ] ) +
xx [ 0 ] * xx [ 383 ] * inputDot [ 3 ] ) * xx [ 397 ] ; xx [ 285 ] = xx [ 121
] * xx [ 44 ] ; xx [ 289 ] = xx [ 0 ] * xx [ 285 ] ; xx [ 296 ] = xx [ 0 ] *
xx [ 285 ] * inputDot [ 5 ] * inputDot [ 5 ] ; xx [ 285 ] = xx [ 394 ] *
inputDot [ 5 ] * inputDot [ 5 ] ; xx [ 312 ] = xx [ 124 ] * xx [ 124 ] ; xx [
398 ] = xx [ 129 ] * xx [ 124 ] ; xx [ 399 ] = xx [ 128 ] * xx [ 127 ] ; xx [
400 ] = xx [ 129 ] * xx [ 127 ] ; xx [ 401 ] = xx [ 128 ] * xx [ 124 ] ; xx [
402 ] = xx [ 129 ] * xx [ 128 ] ; xx [ 403 ] = xx [ 127 ] * xx [ 124 ] ; xx [
418 ] = ( xx [ 312 ] + xx [ 127 ] * xx [ 127 ] ) * xx [ 0 ] - xx [ 13 ] ; xx
[ 419 ] = xx [ 0 ] * ( xx [ 398 ] - xx [ 399 ] ) ; xx [ 420 ] = - ( ( xx [
400 ] + xx [ 401 ] ) * xx [ 0 ] ) ; xx [ 421 ] = - ( ( xx [ 399 ] + xx [ 398
] ) * xx [ 0 ] ) ; xx [ 422 ] = ( xx [ 312 ] + xx [ 128 ] * xx [ 128 ] ) * xx
[ 0 ] - xx [ 13 ] ; xx [ 423 ] = xx [ 0 ] * ( xx [ 402 ] - xx [ 403 ] ) ; xx
[ 424 ] = xx [ 0 ] * ( xx [ 401 ] - xx [ 400 ] ) ; xx [ 425 ] = ( xx [ 402 ]
+ xx [ 403 ] ) * xx [ 0 ] ; xx [ 426 ] = ( xx [ 312 ] + xx [ 129 ] * xx [ 129
] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 312 ] = xx [ 354 ] + inputDot [ 4 ] ; xx [
398 ] = xx [ 312 ] * xx [ 44 ] ; xx [ 399 ] = xx [ 372 ] * xx [ 44 ] ; xx [
400 ] = xx [ 372 ] - ( xx [ 121 ] * xx [ 398 ] + xx [ 399 ] * xx [ 44 ] ) *
xx [ 0 ] ; xx [ 401 ] = xx [ 312 ] + xx [ 0 ] * ( xx [ 121 ] * xx [ 399 ] -
xx [ 398 ] * xx [ 44 ] ) ; xx [ 402 ] = xx [ 400 ] ; xx [ 403 ] = xx [ 393 ]
; xx [ 404 ] = xx [ 401 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 418 , xx +
402 , xx + 427 ) ; xx [ 398 ] = ( xx [ 370 ] + xx [ 44 ] * xx [ 44 ] ) * xx [
0 ] - xx [ 13 ] ; xx [ 370 ] = ( xx [ 283 ] + xx [ 110 ] * xx [ 110 ] ) * xx
[ 0 ] - xx [ 13 ] ; xx [ 399 ] = xx [ 0 ] * xx [ 361 ] ; xx [ 361 ] = xx [ 0
] * xx [ 370 ] * xx [ 234 ] * inputDot [ 1 ] - ( xx [ 246 ] * xx [ 362 ] + xx
[ 399 ] * xx [ 264 ] ) ; xx [ 246 ] = xx [ 362 ] * xx [ 221 ] + xx [ 399 ] *
xx [ 227 ] + xx [ 0 ] * xx [ 195 ] * xx [ 370 ] * inputDot [ 1 ] ; xx [ 221 ]
= xx [ 115 ] * xx [ 110 ] ; xx [ 362 ] = xx [ 108 ] * xx [ 106 ] ; xx [ 370 ]
= ( xx [ 221 ] + xx [ 362 ] ) * xx [ 0 ] ; xx [ 399 ] = xx [ 0 ] * ( xx [ 178
] - xx [ 177 ] ) ; xx [ 177 ] = xx [ 361 ] * xx [ 232 ] + xx [ 246 ] * xx [
211 ] - ( xx [ 370 ] * xx [ 277 ] - xx [ 267 ] * xx [ 399 ] ) + xx [ 0 ] * xx
[ 377 ] * inputDot [ 0 ] ; xx [ 178 ] = xx [ 370 ] * xx [ 267 ] + xx [ 399 ]
* xx [ 277 ] + xx [ 246 ] * xx [ 232 ] - xx [ 211 ] * xx [ 361 ] + xx [ 0 ] *
xx [ 379 ] * inputDot [ 0 ] ; xx [ 246 ] = xx [ 177 ] * xx [ 228 ] - xx [ 311
] * xx [ 178 ] - ( xx [ 309 ] * xx [ 193 ] + xx [ 313 ] * xx [ 276 ] ) - xx [
0 ] * xx [ 388 ] * inputDot [ 3 ] ; xx [ 361 ] = xx [ 215 ] * xx [ 365 ] * xx
[ 220 ] * xx [ 231 ] ; xx [ 215 ] = xx [ 358 ] * xx [ 246 ] + xx [ 360 ] * xx
[ 361 ] - ( xx [ 343 ] * xx [ 366 ] - xx [ 367 ] * xx [ 316 ] ) + xx [ 0 ] *
xx [ 413 ] * inputDot [ 4 ] ; xx [ 220 ] = ( xx [ 228 ] * xx [ 178 ] + xx [
177 ] * xx [ 311 ] + xx [ 276 ] * xx [ 309 ] - xx [ 313 ] * xx [ 193 ] + xx [
0 ] * xx [ 386 ] * inputDot [ 3 ] ) * xx [ 397 ] ; xx [ 177 ] = ( xx [ 210 ]
+ xx [ 114 ] * xx [ 114 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 178 ] = xx [ 0 ] *
( xx [ 221 ] - xx [ 362 ] ) ; xx [ 210 ] = xx [ 264 ] * xx [ 177 ] - xx [ 0 ]
* xx [ 195 ] * xx [ 178 ] * inputDot [ 1 ] ; xx [ 221 ] = xx [ 0 ] * xx [ 178
] * xx [ 234 ] * inputDot [ 1 ] - xx [ 227 ] * xx [ 177 ] ; xx [ 177 ] = ( xx
[ 274 ] + xx [ 183 ] ) * xx [ 0 ] ; xx [ 178 ] = ( xx [ 283 ] + xx [ 115 ] *
xx [ 115 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 183 ] = xx [ 232 ] * xx [ 210 ] +
xx [ 211 ] * xx [ 221 ] + xx [ 177 ] * xx [ 277 ] - xx [ 267 ] * xx [ 178 ] -
xx [ 0 ] * xx [ 382 ] * inputDot [ 0 ] ; xx [ 227 ] = xx [ 221 ] * xx [ 232 ]
- xx [ 211 ] * xx [ 210 ] - ( xx [ 177 ] * xx [ 267 ] + xx [ 277 ] * xx [ 178
] ) + xx [ 0 ] * xx [ 380 ] * inputDot [ 0 ] ; xx [ 177 ] = xx [ 183 ] * xx [
311 ] + xx [ 227 ] * xx [ 228 ] + xx [ 314 ] * xx [ 193 ] - xx [ 276 ] * xx [
293 ] - xx [ 0 ] * xx [ 391 ] * inputDot [ 3 ] ; xx [ 178 ] = xx [ 177 ] * xx
[ 358 ] - ( xx [ 355 ] * xx [ 366 ] + xx [ 357 ] * xx [ 367 ] ) + xx [ 0 ] *
xx [ 416 ] * inputDot [ 4 ] ; xx [ 210 ] = ( xx [ 227 ] * xx [ 311 ] - xx [
228 ] * xx [ 183 ] - ( xx [ 314 ] * xx [ 276 ] + xx [ 193 ] * xx [ 293 ] ) +
xx [ 0 ] * xx [ 389 ] * inputDot [ 3 ] ) * xx [ 397 ] ; xx [ 374 ] = xx [ 369
] * xx [ 394 ] - xx [ 319 ] * xx [ 289 ] + xx [ 373 ] * xx [ 296 ] - xx [ 285
] * xx [ 368 ] - xx [ 0 ] * xx [ 429 ] * inputDot [ 5 ] ; xx [ 375 ] = ( xx [
290 ] * xx [ 358 ] + xx [ 360 ] * xx [ 284 ] - ( xx [ 367 ] * xx [ 315 ] + xx
[ 321 ] * xx [ 366 ] ) - xx [ 0 ] * xx [ 409 ] * inputDot [ 4 ] ) * xx [ 398
] ; xx [ 376 ] = xx [ 369 ] * xx [ 289 ] + xx [ 319 ] * xx [ 394 ] - ( xx [
296 ] * xx [ 368 ] + xx [ 373 ] * xx [ 285 ] ) + xx [ 0 ] * xx [ 427 ] *
inputDot [ 5 ] ; xx [ 377 ] = xx [ 215 ] * xx [ 394 ] - xx [ 220 ] * xx [ 289
] + xx [ 296 ] * xx [ 395 ] - xx [ 392 ] * xx [ 285 ] - xx [ 0 ] * xx [ 432 ]
* inputDot [ 5 ] ; xx [ 378 ] = - ( xx [ 398 ] * ( xx [ 343 ] * xx [ 367 ] +
xx [ 366 ] * xx [ 316 ] + xx [ 361 ] * xx [ 358 ] - xx [ 360 ] * xx [ 246 ] +
xx [ 0 ] * xx [ 412 ] * inputDot [ 4 ] ) ) ; xx [ 379 ] = xx [ 215 ] * xx [
289 ] + xx [ 220 ] * xx [ 394 ] - ( xx [ 392 ] * xx [ 296 ] + xx [ 395 ] * xx
[ 285 ] ) + xx [ 0 ] * xx [ 430 ] * inputDot [ 5 ] ; xx [ 380 ] = xx [ 178 ]
* xx [ 394 ] - xx [ 210 ] * xx [ 289 ] + xx [ 296 ] * xx [ 371 ] - xx [ 396 ]
* xx [ 285 ] - xx [ 0 ] * xx [ 435 ] * inputDot [ 5 ] ; xx [ 381 ] = xx [ 398
] * ( xx [ 357 ] * xx [ 366 ] - xx [ 367 ] * xx [ 355 ] + xx [ 360 ] * xx [
177 ] - xx [ 0 ] * xx [ 415 ] * inputDot [ 4 ] ) ; xx [ 382 ] = xx [ 178 ] *
xx [ 289 ] + xx [ 210 ] * xx [ 394 ] - ( xx [ 296 ] * xx [ 396 ] + xx [ 285 ]
* xx [ 371 ] ) + xx [ 0 ] * xx [ 433 ] * inputDot [ 5 ] ; xx [ 177 ] = xx [ 6
] * xx [ 6 ] ; xx [ 178 ] = xx [ 2 ] * xx [ 10 ] ; xx [ 183 ] = xx [ 6 ] * xx
[ 9 ] ; xx [ 383 ] = ( xx [ 177 ] + xx [ 15 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [
384 ] = ( xx [ 11 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 385 ] = xx [ 0 ] * ( xx [
178 ] - xx [ 183 ] ) ; xx [ 386 ] = xx [ 12 ] ; xx [ 387 ] = ( xx [ 177 ] +
xx [ 9 ] * xx [ 9 ] ) * xx [ 0 ] - xx [ 13 ] ; xx [ 388 ] = ( xx [ 18 ] + xx
[ 17 ] ) * xx [ 0 ] ; xx [ 389 ] = ( xx [ 178 ] + xx [ 183 ] ) * xx [ 0 ] ;
xx [ 390 ] = xx [ 0 ] * ( xx [ 18 ] - xx [ 17 ] ) ; xx [ 391 ] = ( xx [ 177 ]
+ xx [ 14 ] ) * xx [ 0 ] - xx [ 13 ] ; pm_math_Matrix3x3_compose_ra ( xx +
374 , xx + 383 , xx + 402 ) ; xx [ 7 ] = xx [ 12 ] * state [ 3 ] ; xx [ 11 ]
= xx [ 0 ] * xx [ 42 ] * state [ 4 ] ; xx [ 14 ] = xx [ 7 ] + xx [ 11 ] ; xx
[ 15 ] = xx [ 16 ] * state [ 3 ] ; xx [ 17 ] = xx [ 46 ] * state [ 4 ] ; xx [
18 ] = xx [ 15 ] + xx [ 17 ] ; xx [ 42 ] = xx [ 20 ] * state [ 3 ] ; xx [ 177
] = xx [ 42 ] + state [ 5 ] ; xx [ 283 ] = xx [ 14 ] ; xx [ 284 ] = xx [ 18 ]
; xx [ 285 ] = xx [ 177 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 383 , xx +
283 , xx + 373 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 373 , xx + 283 , xx
+ 427 ) ; xx [ 313 ] = xx [ 7 ] ; xx [ 314 ] = xx [ 15 ] ; xx [ 315 ] = xx [
42 ] ; pm_math_Vector3_cross_ra ( xx + 283 , xx + 313 , xx + 360 ) ; xx [ 7 ]
= xx [ 17 ] * state [ 5 ] - xx [ 360 ] ; xx [ 15 ] = xx [ 361 ] + xx [ 11 ] *
state [ 5 ] ; xx [ 313 ] = xx [ 7 ] ; xx [ 314 ] = - xx [ 15 ] ; xx [ 315 ] =
- xx [ 362 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 383 , xx + 313 , xx +
373 ) ; xx [ 382 ] = xx [ 427 ] + xx [ 373 ] ; xx [ 383 ] = xx [ 428 ] + xx [
374 ] ; xx [ 384 ] = xx [ 429 ] + xx [ 375 ] ; xx [ 385 ] = xx [ 430 ] + xx [
376 ] ; xx [ 386 ] = xx [ 431 ] + xx [ 377 ] ; xx [ 387 ] = xx [ 432 ] + xx [
378 ] ; xx [ 388 ] = xx [ 433 ] + xx [ 379 ] ; xx [ 389 ] = xx [ 434 ] + xx [
380 ] ; xx [ 390 ] = xx [ 435 ] + xx [ 381 ] ; pm_math_Matrix3x3_compose_ra (
xx + 418 , xx + 382 , xx + 373 ) ; xx [ 382 ] = xx [ 225 ] ; xx [ 383 ] = xx
[ 204 ] ; xx [ 384 ] = xx [ 143 ] ; xx [ 385 ] = xx [ 206 ] ; xx [ 386 ] = xx
[ 273 ] ; xx [ 387 ] = xx [ 202 ] ; xx [ 388 ] = xx [ 229 ] ; xx [ 389 ] = xx
[ 268 ] ; xx [ 390 ] = xx [ 203 ] ; xx [ 17 ] = xx [ 393 ] + inputDot [ 5 ] ;
xx [ 202 ] = xx [ 400 ] ; xx [ 203 ] = xx [ 17 ] ; xx [ 204 ] = xx [ 401 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 134 , xx + 202 , xx + 227 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 382 , xx + 227 , xx + 411 ) ; xx [ 42 ]
= xx [ 0 ] * xx [ 8 ] * state [ 3 ] + xx [ 11 ] ; xx [ 8 ] = xx [ 0 ] * xx [
19 ] * state [ 3 ] + state [ 5 ] ; xx [ 202 ] = xx [ 42 ] ; xx [ 203 ] = xx [
18 ] ; xx [ 204 ] = xx [ 8 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 411 , xx
+ 202 , xx + 382 ) ; xx [ 202 ] = xx [ 402 ] + xx [ 373 ] + xx [ 0 ] * xx [
382 ] ; xx [ 203 ] = xx [ 405 ] + xx [ 376 ] + xx [ 0 ] * xx [ 385 ] ; xx [
204 ] = xx [ 408 ] + xx [ 379 ] + xx [ 0 ] * xx [ 388 ] ; xx [ 11 ] = xx [
228 ] + xx [ 18 ] ; xx [ 18 ] = xx [ 11 ] * xx [ 140 ] ; xx [ 19 ] = xx [ 229
] + xx [ 8 ] ; xx [ 8 ] = xx [ 19 ] * xx [ 141 ] ; xx [ 143 ] = xx [ 18 ] +
xx [ 8 ] ; xx [ 178 ] = xx [ 11 ] * xx [ 139 ] ; xx [ 183 ] = xx [ 19 ] * xx
[ 139 ] ; xx [ 313 ] = - xx [ 143 ] ; xx [ 314 ] = xx [ 178 ] ; xx [ 315 ] =
xx [ 183 ] ; pm_math_Vector3_cross_ra ( xx + 139 , xx + 313 , xx + 365 ) ; xx
[ 313 ] = xx [ 0 ] * ( xx [ 365 ] - xx [ 143 ] * xx [ 138 ] ) ; xx [ 314 ] =
xx [ 19 ] + ( xx [ 138 ] * xx [ 178 ] + xx [ 366 ] ) * xx [ 0 ] ; xx [ 315 ]
= ( xx [ 138 ] * xx [ 183 ] + xx [ 367 ] ) * xx [ 0 ] - xx [ 11 ] ; xx [ 143
] = xx [ 260 ] + xx [ 131 ] ; xx [ 131 ] = xx [ 143 ] * xx [ 191 ] ; xx [ 178
] = xx [ 262 ] + xx [ 175 ] ; xx [ 175 ] = xx [ 178 ] * xx [ 192 ] ; xx [ 183
] = xx [ 143 ] * xx [ 190 ] ; xx [ 193 ] = xx [ 175 ] + xx [ 183 ] ; xx [ 206
] = xx [ 178 ] * xx [ 191 ] ; xx [ 365 ] = xx [ 131 ] ; xx [ 366 ] = - xx [
193 ] ; xx [ 367 ] = xx [ 206 ] ; pm_math_Vector3_cross_ra ( xx + 190 , xx +
365 , xx + 368 ) ; xx [ 365 ] = ( xx [ 189 ] * xx [ 131 ] + xx [ 368 ] ) * xx
[ 0 ] - xx [ 178 ] ; xx [ 366 ] = xx [ 0 ] * ( xx [ 369 ] - xx [ 193 ] * xx [
189 ] ) ; xx [ 367 ] = xx [ 143 ] + ( xx [ 189 ] * xx [ 206 ] + xx [ 370 ] )
* xx [ 0 ] ; xx [ 131 ] = xx [ 6 ] * xx [ 44 ] - xx [ 121 ] * xx [ 9 ] ; xx [
193 ] = xx [ 2 ] * xx [ 121 ] + xx [ 44 ] * xx [ 10 ] ; xx [ 206 ] = xx [ 131
] * xx [ 53 ] + xx [ 193 ] * xx [ 116 ] ; xx [ 210 ] = xx [ 6 ] * xx [ 121 ]
+ xx [ 44 ] * xx [ 9 ] ; xx [ 6 ] = xx [ 2 ] * xx [ 44 ] - xx [ 121 ] * xx [
10 ] ; xx [ 2 ] = xx [ 210 ] * xx [ 53 ] + xx [ 116 ] * xx [ 6 ] ; xx [ 9 ] =
xx [ 206 ] * xx [ 113 ] - xx [ 45 ] * xx [ 2 ] ; xx [ 10 ] = xx [ 2 ] * xx [
113 ] + xx [ 45 ] * xx [ 206 ] ; xx [ 211 ] = xx [ 9 ] * xx [ 112 ] - xx [
103 ] * xx [ 10 ] ; xx [ 215 ] = xx [ 10 ] * xx [ 112 ] + xx [ 9 ] * xx [ 103
] ; xx [ 220 ] = xx [ 211 ] * xx [ 111 ] + xx [ 109 ] * xx [ 215 ] ; xx [ 221
] = xx [ 6 ] * xx [ 53 ] - xx [ 210 ] * xx [ 116 ] ; xx [ 225 ] = xx [ 193 ]
* xx [ 53 ] - xx [ 116 ] * xx [ 131 ] ; xx [ 231 ] = xx [ 221 ] * xx [ 113 ]
- xx [ 225 ] * xx [ 45 ] ; xx [ 232 ] = xx [ 221 ] * xx [ 45 ] + xx [ 225 ] *
xx [ 113 ] ; xx [ 246 ] = xx [ 231 ] * xx [ 112 ] - xx [ 103 ] * xx [ 232 ] ;
xx [ 264 ] = xx [ 232 ] * xx [ 112 ] + xx [ 231 ] * xx [ 103 ] ; xx [ 267 ] =
xx [ 109 ] * xx [ 246 ] - xx [ 264 ] * xx [ 111 ] ; xx [ 268 ] = xx [ 220 ] *
xx [ 114 ] - xx [ 267 ] * xx [ 107 ] ; xx [ 273 ] = xx [ 220 ] * xx [ 107 ] +
xx [ 267 ] * xx [ 114 ] ; xx [ 274 ] = xx [ 211 ] * xx [ 109 ] - xx [ 111 ] *
xx [ 215 ] ; xx [ 276 ] = xx [ 264 ] * xx [ 109 ] + xx [ 111 ] * xx [ 246 ] ;
xx [ 277 ] = xx [ 114 ] * xx [ 274 ] - xx [ 107 ] * xx [ 276 ] ; xx [ 368 ] =
xx [ 268 ] ; xx [ 369 ] = - xx [ 273 ] ; xx [ 370 ] = xx [ 277 ] ; xx [ 289 ]
= ( xx [ 267 ] * xx [ 274 ] - xx [ 220 ] * xx [ 276 ] ) * xx [ 0 ] ; xx [ 290
] = xx [ 273 ] * xx [ 289 ] ; xx [ 293 ] = xx [ 13 ] - ( xx [ 267 ] * xx [
267 ] + xx [ 220 ] * xx [ 220 ] ) * xx [ 0 ] ; xx [ 296 ] = xx [ 277 ] * xx [
293 ] ; xx [ 309 ] = xx [ 290 ] + xx [ 296 ] ; xx [ 311 ] = xx [ 289 ] * xx [
268 ] ; xx [ 316 ] = xx [ 293 ] * xx [ 268 ] ; xx [ 394 ] = - xx [ 309 ] ; xx
[ 395 ] = - xx [ 311 ] ; xx [ 396 ] = xx [ 316 ] ; pm_math_Vector3_cross_ra (
xx + 368 , xx + 394 , xx + 397 ) ; xx [ 319 ] = xx [ 107 ] * xx [ 274 ] + xx
[ 114 ] * xx [ 276 ] ; xx [ 394 ] = xx [ 0 ] * ( xx [ 397 ] - xx [ 309 ] * xx
[ 319 ] ) ; xx [ 395 ] = xx [ 293 ] + xx [ 0 ] * ( xx [ 398 ] - xx [ 311 ] *
xx [ 319 ] ) ; xx [ 396 ] = xx [ 289 ] + ( xx [ 316 ] * xx [ 319 ] + xx [ 399
] ) * xx [ 0 ] ; xx [ 411 ] = - xx [ 108 ] ; xx [ 412 ] = xx [ 106 ] ; xx [
413 ] = - xx [ 110 ] ; xx [ 414 ] = - xx [ 115 ] ; xx [ 415 ] = xx [ 215 ] ;
xx [ 416 ] = - xx [ 264 ] ; xx [ 417 ] = xx [ 211 ] ; xx [ 418 ] = xx [ 246 ]
; pm_math_Quaternion_compose_ra ( xx + 411 , xx + 415 , xx + 419 ) ; xx [ 106
] = xx [ 13 ] - ( xx [ 246 ] * xx [ 246 ] + xx [ 264 ] * xx [ 264 ] ) * xx [
0 ] ; xx [ 108 ] = xx [ 421 ] * xx [ 106 ] ; xx [ 110 ] = xx [ 0 ] * ( xx [
211 ] * xx [ 246 ] + xx [ 264 ] * xx [ 215 ] ) ; xx [ 115 ] = xx [ 422 ] * xx
[ 110 ] ; xx [ 309 ] = xx [ 108 ] + xx [ 115 ] ; xx [ 311 ] = xx [ 420 ] * xx
[ 106 ] ; xx [ 316 ] = xx [ 420 ] * xx [ 110 ] ; xx [ 397 ] = - xx [ 309 ] ;
xx [ 398 ] = xx [ 311 ] ; xx [ 399 ] = xx [ 316 ] ; pm_math_Vector3_cross_ra
( xx + 420 , xx + 397 , xx + 415 ) ; xx [ 397 ] = xx [ 0 ] * ( xx [ 415 ] -
xx [ 309 ] * xx [ 419 ] ) ; xx [ 398 ] = xx [ 110 ] + ( xx [ 419 ] * xx [ 311
] + xx [ 416 ] ) * xx [ 0 ] ; xx [ 399 ] = ( xx [ 419 ] * xx [ 316 ] + xx [
417 ] ) * xx [ 0 ] - xx [ 106 ] ; xx [ 415 ] = - xx [ 104 ] ; xx [ 416 ] = xx
[ 117 ] ; xx [ 417 ] = - xx [ 105 ] ; xx [ 418 ] = - xx [ 118 ] ; xx [ 423 ]
= xx [ 10 ] ; xx [ 424 ] = - xx [ 232 ] ; xx [ 425 ] = xx [ 9 ] ; xx [ 426 ]
= xx [ 231 ] ; pm_math_Quaternion_compose_ra ( xx + 415 , xx + 423 , xx + 427
) ; xx [ 309 ] = xx [ 13 ] - ( xx [ 231 ] * xx [ 231 ] + xx [ 232 ] * xx [
232 ] ) * xx [ 0 ] ; xx [ 311 ] = xx [ 429 ] * xx [ 309 ] ; xx [ 316 ] = xx [
0 ] * ( xx [ 231 ] * xx [ 9 ] + xx [ 232 ] * xx [ 10 ] ) ; xx [ 321 ] = xx [
430 ] * xx [ 316 ] ; xx [ 343 ] = xx [ 311 ] + xx [ 321 ] ; xx [ 355 ] = xx [
428 ] * xx [ 309 ] ; xx [ 357 ] = xx [ 428 ] * xx [ 316 ] ; xx [ 415 ] = - xx
[ 343 ] ; xx [ 416 ] = xx [ 355 ] ; xx [ 417 ] = xx [ 357 ] ;
pm_math_Vector3_cross_ra ( xx + 428 , xx + 415 , xx + 423 ) ; xx [ 415 ] = xx
[ 0 ] * ( xx [ 423 ] - xx [ 343 ] * xx [ 427 ] ) ; xx [ 416 ] = xx [ 316 ] +
( xx [ 427 ] * xx [ 355 ] + xx [ 424 ] ) * xx [ 0 ] ; xx [ 417 ] = ( xx [ 427
] * xx [ 357 ] + xx [ 425 ] ) * xx [ 0 ] - xx [ 309 ] ; xx [ 423 ] = - xx [
43 ] ; xx [ 424 ] = xx [ 119 ] ; xx [ 425 ] = xx [ 47 ] ; xx [ 426 ] = - xx [
122 ] ; xx [ 431 ] = xx [ 2 ] ; xx [ 432 ] = - xx [ 225 ] ; xx [ 433 ] = xx [
206 ] ; xx [ 434 ] = xx [ 221 ] ; pm_math_Quaternion_compose_ra ( xx + 423 ,
xx + 431 , xx + 435 ) ; xx [ 343 ] = xx [ 13 ] - ( xx [ 221 ] * xx [ 221 ] +
xx [ 225 ] * xx [ 225 ] ) * xx [ 0 ] ; xx [ 355 ] = xx [ 437 ] * xx [ 343 ] ;
xx [ 357 ] = ( xx [ 225 ] * xx [ 2 ] + xx [ 221 ] * xx [ 206 ] ) * xx [ 0 ] ;
xx [ 358 ] = xx [ 438 ] * xx [ 357 ] ; xx [ 360 ] = xx [ 355 ] + xx [ 358 ] ;
xx [ 361 ] = xx [ 436 ] * xx [ 343 ] ; xx [ 371 ] = xx [ 436 ] * xx [ 357 ] ;
xx [ 423 ] = - xx [ 360 ] ; xx [ 424 ] = xx [ 361 ] ; xx [ 425 ] = xx [ 371 ]
; pm_math_Vector3_cross_ra ( xx + 436 , xx + 423 , xx + 431 ) ; xx [ 423 ] =
xx [ 0 ] * ( xx [ 431 ] - xx [ 360 ] * xx [ 435 ] ) ; xx [ 424 ] = xx [ 357 ]
+ ( xx [ 435 ] * xx [ 361 ] + xx [ 432 ] ) * xx [ 0 ] ; xx [ 425 ] = ( xx [
435 ] * xx [ 371 ] + xx [ 433 ] ) * xx [ 0 ] - xx [ 343 ] ; xx [ 431 ] = - xx
[ 123 ] ; xx [ 432 ] = xx [ 126 ] ; xx [ 433 ] = xx [ 120 ] ; xx [ 434 ] = xx
[ 125 ] ; xx [ 439 ] = xx [ 210 ] ; xx [ 440 ] = - xx [ 193 ] ; xx [ 441 ] =
xx [ 131 ] ; xx [ 442 ] = xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 431
, xx + 439 , xx + 443 ) ; xx [ 360 ] = xx [ 0 ] * ( xx [ 6 ] * xx [ 131 ] -
xx [ 193 ] * xx [ 210 ] ) ; xx [ 361 ] = xx [ 445 ] * xx [ 360 ] ; xx [ 371 ]
= xx [ 13 ] - ( xx [ 193 ] * xx [ 193 ] + xx [ 131 ] * xx [ 131 ] ) * xx [ 0
] ; xx [ 391 ] = xx [ 446 ] * xx [ 371 ] ; xx [ 392 ] = xx [ 361 ] + xx [ 391
] ; xx [ 418 ] = xx [ 444 ] * xx [ 360 ] ; xx [ 426 ] = xx [ 444 ] * xx [ 371
] ; xx [ 431 ] = - xx [ 392 ] ; xx [ 432 ] = xx [ 418 ] ; xx [ 433 ] = xx [
426 ] ; pm_math_Vector3_cross_ra ( xx + 444 , xx + 431 , xx + 439 ) ; xx [
431 ] = xx [ 0 ] * ( xx [ 439 ] - xx [ 392 ] * xx [ 443 ] ) ; xx [ 432 ] = xx
[ 371 ] + ( xx [ 443 ] * xx [ 418 ] + xx [ 440 ] ) * xx [ 0 ] ; xx [ 433 ] =
( xx [ 443 ] * xx [ 426 ] + xx [ 441 ] ) * xx [ 0 ] - xx [ 360 ] ; xx [ 392 ]
= 28.64788975654116 ; xx [ 418 ] = 5.729577951308233 ; xx [ 426 ] = xx [ 227
] + xx [ 14 ] ; xx [ 14 ] = xx [ 229 ] + xx [ 177 ] ; xx [ 439 ] = xx [ 426 ]
; xx [ 440 ] = xx [ 11 ] ; xx [ 441 ] = xx [ 14 ] ; xx [ 447 ] = xx [ 426 ] *
xx [ 24 ] ; xx [ 448 ] = xx [ 11 ] * xx [ 24 ] ; xx [ 449 ] = xx [ 14 ] * xx
[ 24 ] ; pm_math_Vector3_cross_ra ( xx + 439 , xx + 447 , xx + 450 ) ; xx [
447 ] = xx [ 426 ] * xx [ 25 ] ; xx [ 448 ] = xx [ 11 ] * xx [ 52 ] ; xx [
449 ] = xx [ 14 ] * xx [ 52 ] ; pm_math_Vector3_cross_ra ( xx + 439 , xx +
447 , xx + 453 ) ; xx [ 447 ] = state [ 9 ] ; xx [ 448 ] = state [ 10 ] ; xx
[ 449 ] = state [ 11 ] ; pm_math_Vector3_cross_ra ( xx + 439 , xx + 447 , xx
+ 456 ) ; pm_math_Vector3_cross_ra ( xx + 439 , xx + 49 , xx + 447 ) ;
pm_math_Vector3_cross_ra ( xx + 439 , xx + 447 , xx + 459 ) ;
pm_math_Quaternion_xform_ra ( xx + 138 , xx + 49 , xx + 439 ) ; xx [ 14 ] =
0.0823 ; xx [ 25 ] = xx [ 129 ] * xx [ 14 ] ; xx [ 52 ] = xx [ 14 ] * xx [
127 ] ; xx [ 177 ] = 0.09465 ; xx [ 426 ] = xx [ 126 ] * xx [ 177 ] ; xx [
434 ] = xx [ 177 ] * xx [ 120 ] ; xx [ 442 ] = 0.093 ; xx [ 462 ] = xx [ 442
] * xx [ 119 ] ; xx [ 463 ] = xx [ 122 ] * xx [ 442 ] ; xx [ 464 ] = 0.14225
; xx [ 465 ] = xx [ 105 ] * xx [ 464 ] ; xx [ 466 ] = xx [ 117 ] * xx [ 464 ]
; xx [ 467 ] = 0.25 ; xx [ 468 ] = xx [ 103 ] * xx [ 467 ] ; xx [ 469 ] = -
0.1197 ; xx [ 470 ] = 0.145 ; xx [ 471 ] = - ( xx [ 0 ] * xx [ 468 ] * xx [
112 ] ) ; xx [ 472 ] = xx [ 469 ] ; xx [ 473 ] = xx [ 470 ] - ( xx [ 0 ] * xx
[ 103 ] * xx [ 468 ] - xx [ 467 ] ) ; pm_math_Quaternion_xform_ra ( xx + 411
, xx + 471 , xx + 474 ) ; xx [ 411 ] = 0.28 ; xx [ 412 ] = xx [ 411 ] * xx [
109 ] ; xx [ 413 ] = xx [ 0 ] * xx [ 111 ] * xx [ 412 ] ; xx [ 414 ] = xx [
413 ] * xx [ 114 ] ; xx [ 468 ] = 0.13585 ; xx [ 477 ] = xx [ 468 ] * xx [
114 ] ; xx [ 478 ] = xx [ 174 ] * xx [ 14 ] ; xx [ 479 ] = xx [ 14 ] * xx [
172 ] ; xx [ 480 ] = xx [ 177 ] * xx [ 165 ] ; xx [ 481 ] = xx [ 171 ] * xx [
177 ] ; xx [ 482 ] = xx [ 442 ] * xx [ 164 ] ; xx [ 483 ] = xx [ 167 ] * xx [
442 ] ; xx [ 484 ] = xx [ 152 ] * xx [ 464 ] ; xx [ 485 ] = xx [ 162 ] * xx [
464 ] ; xx [ 486 ] = xx [ 142 ] ; xx [ 487 ] = xx [ 147 ] ; xx [ 488 ] = xx [
149 ] ; xx [ 489 ] = - xx [ 160 ] ; xx [ 142 ] = xx [ 153 ] * xx [ 467 ] ; xx
[ 490 ] = - ( xx [ 0 ] * xx [ 142 ] * xx [ 150 ] ) ; xx [ 491 ] = xx [ 469 ]
; xx [ 492 ] = xx [ 470 ] - ( xx [ 0 ] * xx [ 153 ] * xx [ 142 ] - xx [ 467 ]
) ; pm_math_Quaternion_xform_ra ( xx + 486 , xx + 490 , xx + 493 ) ; xx [ 142
] = xx [ 468 ] * xx [ 159 ] ; xx [ 147 ] = xx [ 411 ] * xx [ 146 ] ; xx [ 149
] = xx [ 0 ] * xx [ 151 ] * xx [ 147 ] ; xx [ 160 ] = xx [ 159 ] * xx [ 149 ]
; xx [ 411 ] = 0.606059 ; xx [ 496 ] = xx [ 439 ] + xx [ 0 ] * ( xx [ 25 ] *
xx [ 124 ] - xx [ 128 ] * xx [ 52 ] ) + ( xx [ 125 ] * xx [ 426 ] - xx [ 434
] * xx [ 123 ] ) * xx [ 0 ] + xx [ 0 ] * ( xx [ 462 ] * xx [ 47 ] - xx [ 43 ]
* xx [ 463 ] ) + xx [ 0 ] * ( xx [ 465 ] * xx [ 104 ] - xx [ 466 ] * xx [ 118
] ) + xx [ 474 ] + xx [ 413 ] - xx [ 0 ] * ( xx [ 414 ] * xx [ 114 ] + xx [
107 ] * xx [ 477 ] ) - ( xx [ 0 ] * ( xx [ 478 ] * xx [ 169 ] + xx [ 173 ] *
xx [ 479 ] ) + ( xx [ 480 ] * xx [ 168 ] - xx [ 170 ] * xx [ 481 ] ) * xx [ 0
] + xx [ 0 ] * ( xx [ 156 ] * xx [ 482 ] + xx [ 483 ] * xx [ 132 ] ) + ( xx [
484 ] * xx [ 155 ] - xx [ 485 ] * xx [ 163 ] ) * xx [ 0 ] + xx [ 493 ] + ( xx
[ 142 ] * xx [ 148 ] - xx [ 159 ] * xx [ 160 ] ) * xx [ 0 ] + xx [ 149 ] +
1.75 ) ; xx [ 497 ] = xx [ 440 ] + xx [ 0 ] * ( xx [ 125 ] * xx [ 434 ] + xx
[ 426 ] * xx [ 123 ] ) + xx [ 475 ] - ( xx [ 477 ] * xx [ 114 ] - xx [ 107 ]
* xx [ 414 ] ) * xx [ 0 ] + ( xx [ 466 ] * xx [ 104 ] + xx [ 465 ] * xx [ 118
] ) * xx [ 0 ] - ( xx [ 122 ] * xx [ 463 ] + xx [ 462 ] * xx [ 119 ] ) * xx [
0 ] - ( xx [ 129 ] * xx [ 25 ] + xx [ 52 ] * xx [ 127 ] ) * xx [ 0 ] +
0.31115 - ( xx [ 494 ] - xx [ 0 ] * ( xx [ 160 ] * xx [ 148 ] + xx [ 159 ] *
xx [ 142 ] ) - xx [ 0 ] * ( xx [ 484 ] * xx [ 163 ] + xx [ 485 ] * xx [ 155 ]
) - ( xx [ 167 ] * xx [ 483 ] + xx [ 482 ] * xx [ 164 ] ) * xx [ 0 ] - xx [ 0
] * ( xx [ 170 ] * xx [ 480 ] + xx [ 481 ] * xx [ 168 ] ) - ( xx [ 174 ] * xx
[ 478 ] + xx [ 479 ] * xx [ 172 ] ) * xx [ 0 ] + 0.52945 ) ; xx [ 498 ] = xx
[ 441 ] + ( xx [ 52 ] * xx [ 124 ] + xx [ 128 ] * xx [ 25 ] ) * xx [ 0 ] + xx
[ 476 ] - xx [ 0 ] * xx [ 412 ] * xx [ 109 ] - ( xx [ 117 ] * xx [ 466 ] + xx
[ 105 ] * xx [ 465 ] ) * xx [ 0 ] - ( xx [ 43 ] * xx [ 462 ] + xx [ 463 ] *
xx [ 47 ] ) * xx [ 0 ] - ( xx [ 126 ] * xx [ 426 ] + xx [ 434 ] * xx [ 120 ]
) * xx [ 0 ] + xx [ 411 ] - ( ( xx [ 173 ] * xx [ 478 ] - xx [ 479 ] * xx [
169 ] ) * xx [ 0 ] + ( xx [ 482 ] * xx [ 132 ] - xx [ 156 ] * xx [ 483 ] ) *
xx [ 0 ] + xx [ 495 ] - xx [ 0 ] * xx [ 147 ] * xx [ 146 ] - ( xx [ 162 ] *
xx [ 485 ] + xx [ 152 ] * xx [ 484 ] ) * xx [ 0 ] - ( xx [ 171 ] * xx [ 481 ]
+ xx [ 480 ] * xx [ 165 ] ) * xx [ 0 ] + xx [ 411 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 189 , xx + 496 , xx + 117 ) ; xx [
25 ] = xx [ 117 ] + xx [ 37 ] ; xx [ 43 ] = 1.0e-6 ; xx [ 47 ] = xx [ 25 ] +
xx [ 43 ] ; if ( xx [ 27 ] < xx [ 47 ] ) xx [ 47 ] = xx [ 27 ] ; xx [ 52 ] =
1.0e-4 ; xx [ 104 ] = - ( xx [ 47 ] / xx [ 52 ] ) ; if ( xx [ 13 ] < xx [ 104
] ) xx [ 104 ] = xx [ 13 ] ; xx [ 105 ] = 3.0 ; xx [ 107 ] = 10.0 ; xx [ 114
] = xx [ 177 ] * xx [ 393 ] ; xx [ 120 ] = xx [ 323 ] * xx [ 464 ] ; xx [ 122
] = - xx [ 195 ] ; xx [ 123 ] = inputDot [ 1 ] ; xx [ 124 ] = xx [ 234 ] ;
pm_math_Vector3_cross_ra ( xx + 122 , xx + 471 , xx + 125 ) ; xx [ 128 ] = xx
[ 468 ] * inputDot [ 2 ] ; xx [ 129 ] = xx [ 128 ] * xx [ 109 ] ; xx [ 142 ]
= 0.2800000000000001 ; xx [ 147 ] = xx [ 142 ] * inputDot [ 1 ] ; xx [ 160 ]
= xx [ 125 ] + xx [ 0 ] * xx [ 129 ] * xx [ 109 ] - xx [ 128 ] + xx [ 147 ] ;
xx [ 169 ] = xx [ 160 ] * xx [ 103 ] ; xx [ 172 ] = xx [ 127 ] - xx [ 0 ] *
xx [ 111 ] * xx [ 129 ] ; xx [ 129 ] = xx [ 103 ] * xx [ 172 ] ; xx [ 173 ] =
0.2500000000000001 ; xx [ 174 ] = xx [ 173 ] * inputDot [ 0 ] ; xx [ 411 ] =
xx [ 120 ] + xx [ 160 ] - ( xx [ 103 ] * xx [ 169 ] - xx [ 129 ] * xx [ 112 ]
) * xx [ 0 ] + xx [ 174 ] ; xx [ 160 ] = xx [ 411 ] * xx [ 45 ] ; xx [ 412 ]
= xx [ 172 ] - xx [ 0 ] * ( xx [ 169 ] * xx [ 112 ] + xx [ 103 ] * xx [ 129 ]
) ; xx [ 129 ] = xx [ 45 ] * xx [ 412 ] ; xx [ 169 ] = xx [ 354 ] * xx [ 442
] ; xx [ 172 ] = xx [ 411 ] - ( xx [ 45 ] * xx [ 160 ] - xx [ 129 ] * xx [
113 ] ) * xx [ 0 ] - xx [ 169 ] ; xx [ 411 ] = xx [ 413 ] * inputDot [ 2 ] ;
xx [ 414 ] = xx [ 464 ] * xx [ 291 ] ; xx [ 426 ] = xx [ 126 ] + xx [ 411 ] -
xx [ 414 ] ; xx [ 434 ] = xx [ 116 ] * xx [ 426 ] ; xx [ 439 ] = xx [ 116 ] *
xx [ 172 ] ; xx [ 440 ] = xx [ 114 ] + xx [ 172 ] - xx [ 0 ] * ( xx [ 434 ] *
xx [ 53 ] + xx [ 116 ] * xx [ 439 ] ) ; xx [ 172 ] = xx [ 442 ] * xx [ 322 ]
; xx [ 441 ] = xx [ 172 ] + xx [ 412 ] - xx [ 0 ] * ( xx [ 160 ] * xx [ 113 ]
+ xx [ 45 ] * xx [ 129 ] ) ; xx [ 129 ] = xx [ 441 ] * xx [ 44 ] ; xx [ 160 ]
= xx [ 440 ] * xx [ 44 ] ; xx [ 412 ] = xx [ 401 ] * xx [ 14 ] ; xx [ 462 ] =
xx [ 372 ] * xx [ 177 ] ; xx [ 463 ] = xx [ 14 ] * xx [ 400 ] ; xx [ 465 ] =
xx [ 440 ] - ( xx [ 121 ] * xx [ 129 ] + xx [ 160 ] * xx [ 44 ] ) * xx [ 0 ]
- xx [ 412 ] ; xx [ 466 ] = xx [ 426 ] - ( xx [ 116 ] * xx [ 434 ] - xx [ 439
] * xx [ 53 ] ) * xx [ 0 ] - xx [ 462 ] ; xx [ 467 ] = xx [ 463 ] + xx [ 441
] + xx [ 0 ] * ( xx [ 121 ] * xx [ 160 ] - xx [ 129 ] * xx [ 44 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 134 , xx + 465 , xx + 439 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 189 , xx + 138 , xx + 474 ) ; xx
[ 129 ] = xx [ 260 ] + xx [ 208 ] ; xx [ 160 ] = xx [ 261 ] + xx [ 214 ] ; xx
[ 208 ] = xx [ 262 ] + xx [ 219 ] ; xx [ 465 ] = xx [ 129 ] ; xx [ 466 ] = xx
[ 160 ] ; xx [ 467 ] = xx [ 208 ] ; pm_math_Vector3_cross_ra ( xx + 465 , xx
+ 117 , xx + 478 ) ; xx [ 117 ] = xx [ 177 ] * xx [ 356 ] ; xx [ 214 ] = xx [
318 ] * xx [ 464 ] ; xx [ 481 ] = - xx [ 263 ] ; xx [ 482 ] = inputDot [ 7 ]
; xx [ 483 ] = xx [ 265 ] ; pm_math_Vector3_cross_ra ( xx + 481 , xx + 490 ,
xx + 493 ) ; xx [ 219 ] = xx [ 468 ] * inputDot [ 8 ] ; xx [ 426 ] = xx [ 219
] * xx [ 146 ] ; xx [ 434 ] = xx [ 142 ] * inputDot [ 7 ] ; xx [ 469 ] = xx [
493 ] + xx [ 0 ] * xx [ 426 ] * xx [ 146 ] - xx [ 219 ] + xx [ 434 ] ; xx [
470 ] = xx [ 469 ] * xx [ 153 ] ; xx [ 484 ] = xx [ 495 ] - xx [ 0 ] * xx [
151 ] * xx [ 426 ] ; xx [ 426 ] = xx [ 153 ] * xx [ 484 ] ; xx [ 485 ] = xx [
173 ] * inputDot [ 6 ] ; xx [ 496 ] = xx [ 214 ] + xx [ 469 ] - ( xx [ 153 ]
* xx [ 470 ] - xx [ 426 ] * xx [ 150 ] ) * xx [ 0 ] + xx [ 485 ] ; xx [ 469 ]
= xx [ 496 ] * xx [ 157 ] ; xx [ 497 ] = xx [ 484 ] - xx [ 0 ] * ( xx [ 470 ]
* xx [ 150 ] + xx [ 153 ] * xx [ 426 ] ) ; xx [ 426 ] = xx [ 157 ] * xx [ 497
] ; xx [ 470 ] = xx [ 320 ] * xx [ 442 ] ; xx [ 484 ] = xx [ 496 ] - ( xx [
157 ] * xx [ 469 ] - xx [ 426 ] * xx [ 154 ] ) * xx [ 0 ] - xx [ 470 ] ; xx [
496 ] = xx [ 149 ] * inputDot [ 8 ] ; xx [ 498 ] = xx [ 464 ] * xx [ 292 ] ;
xx [ 499 ] = xx [ 494 ] + xx [ 496 ] - xx [ 498 ] ; xx [ 500 ] = xx [ 161 ] *
xx [ 499 ] ; xx [ 501 ] = xx [ 161 ] * xx [ 484 ] ; xx [ 502 ] = xx [ 117 ] +
xx [ 484 ] - xx [ 0 ] * ( xx [ 500 ] * xx [ 158 ] + xx [ 161 ] * xx [ 501 ] )
; xx [ 484 ] = xx [ 442 ] * xx [ 317 ] ; xx [ 503 ] = xx [ 484 ] + xx [ 497 ]
- xx [ 0 ] * ( xx [ 469 ] * xx [ 154 ] + xx [ 157 ] * xx [ 426 ] ) ; xx [ 426
] = xx [ 503 ] * xx [ 133 ] ; xx [ 469 ] = xx [ 502 ] * xx [ 133 ] ; xx [ 497
] = xx [ 344 ] * xx [ 177 ] ; xx [ 504 ] = xx [ 502 ] - ( xx [ 166 ] * xx [
426 ] + xx [ 469 ] * xx [ 133 ] ) * xx [ 0 ] - xx [ 364 ] * xx [ 14 ] ; xx [
505 ] = xx [ 499 ] - ( xx [ 161 ] * xx [ 500 ] - xx [ 501 ] * xx [ 158 ] ) *
xx [ 0 ] - xx [ 497 ] ; xx [ 506 ] = xx [ 14 ] * xx [ 363 ] + xx [ 503 ] + xx
[ 0 ] * ( xx [ 166 ] * xx [ 469 ] - xx [ 426 ] * xx [ 133 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 185 , xx + 504 , xx + 499 ) ; xx [
502 ] = xx [ 478 ] + xx [ 499 ] ; xx [ 503 ] = xx [ 479 ] + xx [ 500 ] ; xx [
504 ] = xx [ 480 ] + xx [ 501 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
474 , xx + 502 , xx + 478 ) ; xx [ 426 ] = xx [ 107 ] * ( xx [ 447 ] + xx [
439 ] + state [ 9 ] - xx [ 478 ] ) ; xx [ 447 ] = 1000.0 ; xx [ 469 ] = xx [
104 ] * xx [ 104 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 104 ] ) * ( ( - xx [ 47 ]
== xx [ 27 ] ? xx [ 27 ] : - xx [ 426 ] ) - xx [ 447 ] * xx [ 47 ] ) ; if (
xx [ 27 ] > xx [ 469 ] ) xx [ 469 ] = xx [ 27 ] ; xx [ 47 ] = xx [ 25 ] - xx
[ 43 ] ; if ( xx [ 27 ] > xx [ 47 ] ) xx [ 47 ] = xx [ 27 ] ; xx [ 104 ] = xx
[ 47 ] / xx [ 52 ] ; if ( xx [ 13 ] < xx [ 104 ] ) xx [ 104 ] = xx [ 13 ] ;
xx [ 474 ] = ( xx [ 447 ] * xx [ 47 ] + ( xx [ 47 ] == xx [ 27 ] ? xx [ 27 ]
: xx [ 426 ] ) ) * xx [ 104 ] * xx [ 104 ] * ( xx [ 105 ] - xx [ 0 ] * xx [
104 ] ) ; if ( xx [ 27 ] > xx [ 474 ] ) xx [ 474 ] = xx [ 27 ] ; xx [ 47 ] =
xx [ 469 ] - xx [ 474 ] ; xx [ 104 ] = ( xx [ 0 ] * xx [ 456 ] + xx [ 459 ] )
* xx [ 26 ] - xx [ 47 ] ; xx [ 426 ] = state [ 6 ] + xx [ 43 ] ; if ( xx [ 27
] < xx [ 426 ] ) xx [ 426 ] = xx [ 27 ] ; xx [ 469 ] = - ( xx [ 426 ] / xx [
52 ] ) ; if ( xx [ 13 ] < xx [ 469 ] ) xx [ 469 ] = xx [ 13 ] ; xx [ 474 ] =
xx [ 107 ] * state [ 9 ] ; xx [ 475 ] = xx [ 469 ] * xx [ 469 ] * ( xx [ 105
] - xx [ 0 ] * xx [ 469 ] ) * ( ( - xx [ 426 ] == xx [ 27 ] ? xx [ 27 ] : -
xx [ 474 ] ) - xx [ 447 ] * xx [ 426 ] ) ; if ( xx [ 27 ] > xx [ 475 ] ) xx [
475 ] = xx [ 27 ] ; xx [ 426 ] = state [ 6 ] - xx [ 43 ] ; if ( xx [ 27 ] >
xx [ 426 ] ) xx [ 426 ] = xx [ 27 ] ; xx [ 469 ] = xx [ 426 ] / xx [ 52 ] ;
if ( xx [ 13 ] < xx [ 469 ] ) xx [ 469 ] = xx [ 13 ] ; xx [ 476 ] = ( xx [
447 ] * xx [ 426 ] + ( xx [ 426 ] == xx [ 27 ] ? xx [ 27 ] : xx [ 474 ] ) ) *
xx [ 469 ] * xx [ 469 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 469 ] ) ; if ( xx [
27 ] > xx [ 476 ] ) xx [ 476 ] = xx [ 27 ] ; xx [ 426 ] = state [ 7 ] + xx [
43 ] ; if ( xx [ 27 ] < xx [ 426 ] ) xx [ 426 ] = xx [ 27 ] ; xx [ 469 ] = -
( xx [ 426 ] / xx [ 52 ] ) ; if ( xx [ 13 ] < xx [ 469 ] ) xx [ 469 ] = xx [
13 ] ; xx [ 474 ] = xx [ 107 ] * state [ 10 ] ; xx [ 477 ] = xx [ 469 ] * xx
[ 469 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 469 ] ) * ( ( - xx [ 426 ] == xx [
27 ] ? xx [ 27 ] : - xx [ 474 ] ) - xx [ 447 ] * xx [ 426 ] ) ; if ( xx [ 27
] > xx [ 477 ] ) xx [ 477 ] = xx [ 27 ] ; xx [ 426 ] = state [ 7 ] - xx [ 43
] ; if ( xx [ 27 ] > xx [ 426 ] ) xx [ 426 ] = xx [ 27 ] ; xx [ 469 ] = xx [
426 ] / xx [ 52 ] ; if ( xx [ 13 ] < xx [ 469 ] ) xx [ 469 ] = xx [ 13 ] ; xx
[ 499 ] = ( xx [ 447 ] * xx [ 426 ] + ( xx [ 426 ] == xx [ 27 ] ? xx [ 27 ] :
xx [ 474 ] ) ) * xx [ 469 ] * xx [ 469 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 469
] ) ; if ( xx [ 27 ] > xx [ 499 ] ) xx [ 499 ] = xx [ 27 ] ; xx [ 426 ] = xx
[ 118 ] + xx [ 43 ] ; if ( xx [ 27 ] < xx [ 426 ] ) xx [ 426 ] = xx [ 27 ] ;
xx [ 469 ] = - ( xx [ 426 ] / xx [ 52 ] ) ; if ( xx [ 13 ] < xx [ 469 ] ) xx
[ 469 ] = xx [ 13 ] ; xx [ 474 ] = xx [ 107 ] * ( xx [ 448 ] + xx [ 440 ] +
state [ 10 ] - xx [ 479 ] ) ; xx [ 448 ] = xx [ 469 ] * xx [ 469 ] * ( xx [
105 ] - xx [ 0 ] * xx [ 469 ] ) * ( ( - xx [ 426 ] == xx [ 27 ] ? xx [ 27 ] :
- xx [ 474 ] ) - xx [ 447 ] * xx [ 426 ] ) ; if ( xx [ 27 ] > xx [ 448 ] ) xx
[ 448 ] = xx [ 27 ] ; xx [ 426 ] = xx [ 118 ] - xx [ 43 ] ; if ( xx [ 27 ] >
xx [ 426 ] ) xx [ 426 ] = xx [ 27 ] ; xx [ 469 ] = xx [ 426 ] / xx [ 52 ] ;
if ( xx [ 13 ] < xx [ 469 ] ) xx [ 469 ] = xx [ 13 ] ; xx [ 500 ] = ( xx [
447 ] * xx [ 426 ] + ( xx [ 426 ] == xx [ 27 ] ? xx [ 27 ] : xx [ 474 ] ) ) *
xx [ 469 ] * xx [ 469 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 469 ] ) ; if ( xx [
27 ] > xx [ 500 ] ) xx [ 500 ] = xx [ 27 ] ; xx [ 426 ] = xx [ 448 ] - xx [
500 ] ; xx [ 448 ] = ( xx [ 0 ] * xx [ 457 ] + xx [ 460 ] ) * xx [ 26 ] - xx
[ 426 ] ; xx [ 469 ] = state [ 8 ] + xx [ 43 ] ; if ( xx [ 27 ] < xx [ 469 ]
) xx [ 469 ] = xx [ 27 ] ; xx [ 474 ] = - ( xx [ 469 ] / xx [ 52 ] ) ; if (
xx [ 13 ] < xx [ 474 ] ) xx [ 474 ] = xx [ 13 ] ; xx [ 500 ] = xx [ 107 ] *
state [ 11 ] ; xx [ 501 ] = xx [ 474 ] * xx [ 474 ] * ( xx [ 105 ] - xx [ 0 ]
* xx [ 474 ] ) * ( ( - xx [ 469 ] == xx [ 27 ] ? xx [ 27 ] : - xx [ 500 ] ) -
xx [ 447 ] * xx [ 469 ] ) ; if ( xx [ 27 ] > xx [ 501 ] ) xx [ 501 ] = xx [
27 ] ; xx [ 469 ] = state [ 8 ] - xx [ 43 ] ; if ( xx [ 27 ] > xx [ 469 ] )
xx [ 469 ] = xx [ 27 ] ; xx [ 474 ] = xx [ 469 ] / xx [ 52 ] ; if ( xx [ 13 ]
< xx [ 474 ] ) xx [ 474 ] = xx [ 13 ] ; xx [ 502 ] = ( xx [ 447 ] * xx [ 469
] + ( xx [ 469 ] == xx [ 27 ] ? xx [ 27 ] : xx [ 500 ] ) ) * xx [ 474 ] * xx
[ 474 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 474 ] ) ; if ( xx [ 27 ] > xx [ 502
] ) xx [ 502 ] = xx [ 27 ] ; xx [ 456 ] = xx [ 119 ] + xx [ 43 ] ; if ( xx [
27 ] < xx [ 456 ] ) xx [ 456 ] = xx [ 27 ] ; xx [ 457 ] = - ( xx [ 456 ] / xx
[ 52 ] ) ; if ( xx [ 13 ] < xx [ 457 ] ) xx [ 457 ] = xx [ 13 ] ; xx [ 439 ]
= xx [ 107 ] * ( xx [ 449 ] + xx [ 441 ] + state [ 11 ] - xx [ 480 ] ) ; xx [
107 ] = xx [ 457 ] * xx [ 457 ] * ( xx [ 105 ] - xx [ 0 ] * xx [ 457 ] ) * (
( - xx [ 456 ] == xx [ 27 ] ? xx [ 27 ] : - xx [ 439 ] ) - xx [ 447 ] * xx [
456 ] ) ; if ( xx [ 27 ] > xx [ 107 ] ) xx [ 107 ] = xx [ 27 ] ; xx [ 440 ] =
xx [ 119 ] - xx [ 43 ] ; if ( xx [ 27 ] > xx [ 440 ] ) xx [ 440 ] = xx [ 27 ]
; xx [ 43 ] = xx [ 440 ] / xx [ 52 ] ; if ( xx [ 13 ] < xx [ 43 ] ) xx [ 43 ]
= xx [ 13 ] ; xx [ 52 ] = ( xx [ 447 ] * xx [ 440 ] + ( xx [ 440 ] == xx [ 27
] ? xx [ 27 ] : xx [ 439 ] ) ) * xx [ 43 ] * xx [ 43 ] * ( xx [ 105 ] - xx [
0 ] * xx [ 43 ] ) ; if ( xx [ 27 ] > xx [ 52 ] ) xx [ 52 ] = xx [ 27 ] ; xx [
43 ] = xx [ 107 ] - xx [ 52 ] ; xx [ 52 ] = ( xx [ 0 ] * xx [ 458 ] + xx [
461 ] ) * xx [ 26 ] - xx [ 43 ] ; xx [ 439 ] = xx [ 475 ] - xx [ 476 ] - xx [
104 ] ; xx [ 440 ] = xx [ 477 ] - xx [ 499 ] - xx [ 448 ] ; xx [ 441 ] = xx [
501 ] - xx [ 502 ] - xx [ 52 ] ; solveSymmetricPosDef ( xx + 28 , xx + 439 ,
3 , 1 , xx + 456 , xx + 459 ) ; xx [ 28 ] = xx [ 104 ] + xx [ 26 ] * xx [ 456
] ; xx [ 29 ] = xx [ 448 ] + xx [ 26 ] * xx [ 457 ] ; xx [ 30 ] = xx [ 52 ] +
xx [ 26 ] * xx [ 458 ] ; pm_math_Vector3_cross_ra ( xx + 49 , xx + 28 , xx +
31 ) ; pm_math_Vector3_cross_ra ( xx + 227 , xx + 283 , xx + 28 ) ; xx [ 26 ]
= xx [ 28 ] + xx [ 7 ] ; xx [ 7 ] = xx [ 29 ] - xx [ 15 ] ; xx [ 15 ] = xx [
30 ] - xx [ 362 ] ; xx [ 28 ] = xx [ 26 ] ; xx [ 29 ] = xx [ 7 ] ; xx [ 30 ]
= xx [ 15 ] ; pm_math_Matrix3x3_xform_ra ( xx + 82 , xx + 28 , xx + 34 ) ; xx
[ 28 ] = - xx [ 75 ] ; xx [ 29 ] = - xx [ 78 ] ; xx [ 30 ] = - xx [ 81 ] ; xx
[ 81 ] = - xx [ 73 ] ; xx [ 82 ] = - xx [ 76 ] ; xx [ 83 ] = - xx [ 79 ] ; xx
[ 84 ] = - xx [ 74 ] ; xx [ 85 ] = - xx [ 77 ] ; xx [ 86 ] = - xx [ 80 ] ; xx
[ 87 ] = xx [ 28 ] ; xx [ 88 ] = xx [ 29 ] ; xx [ 89 ] = xx [ 30 ] ; xx [ 283
] = xx [ 17 ] * xx [ 463 ] ; xx [ 284 ] = - ( xx [ 401 ] * xx [ 412 ] + xx [
463 ] * xx [ 400 ] ) ; xx [ 285 ] = xx [ 17 ] * xx [ 412 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 134 , xx + 283 , xx + 439 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 81 , xx + 439 , xx + 283 ) ; xx [ 17 ] = xx
[ 450 ] + xx [ 453 ] + xx [ 31 ] + xx [ 34 ] + xx [ 283 ] ; xx [ 52 ] = xx [
451 ] + xx [ 454 ] + xx [ 37 ] * xx [ 43 ] + xx [ 32 ] + xx [ 35 ] + xx [ 284
] ; xx [ 31 ] = xx [ 452 ] + xx [ 455 ] - xx [ 37 ] * xx [ 426 ] + xx [ 33 ]
+ xx [ 36 ] + xx [ 285 ] ; xx [ 32 ] = xx [ 17 ] ; xx [ 33 ] = xx [ 52 ] ; xx
[ 34 ] = xx [ 31 ] ; xx [ 35 ] = xx [ 392 ] * state [ 0 ] + xx [ 418 ] *
state [ 3 ] + pm_math_Vector3_dot_ra ( xx + 21 , xx + 32 ) ; xx [ 32 ] =
85.94366926962348 * state [ 1 ] + xx [ 418 ] * state [ 4 ] + xx [ 17 ] * xx [
5 ] + xx [ 52 ] * xx [ 46 ] ; xx [ 17 ] = xx [ 392 ] * state [ 2 ] + xx [ 418
] * state [ 5 ] + xx [ 31 ] ; xx [ 283 ] = - xx [ 35 ] ; xx [ 284 ] = - xx [
32 ] ; xx [ 285 ] = - xx [ 17 ] ; solveSymmetricPosDef ( xx + 94 , xx + 283 ,
3 , 1 , xx + 447 , xx + 450 ) ; pm_math_Matrix3x3_transposeXform_ra ( xx + 81
, xx + 21 , xx + 283 ) ; xx [ 499 ] = xx [ 91 ] ; xx [ 500 ] = xx [ 3 ] ; xx
[ 501 ] = xx [ 48 ] ; xx [ 502 ] = xx [ 92 ] ; xx [ 503 ] = xx [ 39 ] ; xx [
504 ] = xx [ 54 ] ; xx [ 505 ] = xx [ 93 ] ; xx [ 506 ] = xx [ 41 ] ; xx [
507 ] = xx [ 38 ] ; xx [ 508 ] = xx [ 283 ] ; xx [ 509 ] = - ( xx [ 73 ] * xx
[ 5 ] + xx [ 74 ] * xx [ 46 ] ) ; xx [ 510 ] = xx [ 28 ] ; xx [ 511 ] = xx [
284 ] ; xx [ 512 ] = - ( xx [ 76 ] * xx [ 5 ] + xx [ 77 ] * xx [ 46 ] ) ; xx
[ 513 ] = xx [ 29 ] ; xx [ 514 ] = xx [ 285 ] ; xx [ 515 ] = - ( xx [ 79 ] *
xx [ 5 ] + xx [ 80 ] * xx [ 46 ] ) ; xx [ 516 ] = xx [ 30 ] ;
solveSymmetricPosDef ( xx + 94 , xx + 499 , 3 , 6 , xx + 73 , xx + 21 ) ; xx
[ 21 ] = xx [ 73 ] ; xx [ 22 ] = xx [ 76 ] ; xx [ 23 ] = xx [ 79 ] ; xx [ 3 ]
= xx [ 109 ] * inputDdot [ 2 ] ; xx [ 28 ] = xx [ 0 ] * xx [ 111 ] * xx [ 3 ]
+ xx [ 234 ] * inputDot [ 1 ] ; xx [ 29 ] = xx [ 28 ] * xx [ 103 ] ; xx [ 30
] = inputDdot [ 2 ] - xx [ 0 ] * xx [ 3 ] * xx [ 109 ] - xx [ 195 ] *
inputDot [ 1 ] ; xx [ 3 ] = xx [ 103 ] * xx [ 30 ] ; xx [ 31 ] = xx [ 0 ] * (
xx [ 103 ] * xx [ 29 ] + xx [ 3 ] * xx [ 112 ] ) - xx [ 28 ] - xx [ 295 ] *
inputDot [ 0 ] ; xx [ 33 ] = xx [ 45 ] * xx [ 31 ] ; xx [ 34 ] = xx [ 30 ] -
( xx [ 103 ] * xx [ 3 ] - xx [ 29 ] * xx [ 112 ] ) * xx [ 0 ] + xx [ 291 ] *
inputDot [ 0 ] ; xx [ 3 ] = xx [ 45 ] * xx [ 34 ] ; xx [ 29 ] = xx [ 31 ] - (
xx [ 45 ] * xx [ 33 ] - xx [ 3 ] * xx [ 113 ] ) * xx [ 0 ] - xx [ 354 ] *
inputDot [ 3 ] ; xx [ 36 ] = inputDdot [ 1 ] + inputDdot [ 0 ] ; xx [ 37 ] =
xx [ 36 ] + inputDdot [ 3 ] ; xx [ 38 ] = xx [ 37 ] * xx [ 116 ] ; xx [ 39 ]
= xx [ 116 ] * xx [ 29 ] ; xx [ 41 ] = xx [ 29 ] - xx [ 0 ] * ( xx [ 38 ] *
xx [ 53 ] + xx [ 116 ] * xx [ 39 ] ) + xx [ 393 ] * inputDot [ 4 ] ; xx [ 48
] = xx [ 34 ] - xx [ 0 ] * ( xx [ 33 ] * xx [ 113 ] + xx [ 45 ] * xx [ 3 ] )
+ xx [ 322 ] * inputDot [ 3 ] ; xx [ 3 ] = xx [ 48 ] + inputDdot [ 4 ] ; xx [
33 ] = xx [ 3 ] * xx [ 44 ] ; xx [ 34 ] = xx [ 41 ] * xx [ 44 ] ; xx [ 52 ] =
xx [ 41 ] - ( xx [ 121 ] * xx [ 33 ] + xx [ 34 ] * xx [ 44 ] ) * xx [ 0 ] -
xx [ 401 ] * inputDot [ 5 ] ; xx [ 54 ] = xx [ 37 ] - ( xx [ 116 ] * xx [ 38
] - xx [ 39 ] * xx [ 53 ] ) * xx [ 0 ] - xx [ 372 ] * inputDot [ 4 ] ; xx [
37 ] = xx [ 3 ] + xx [ 0 ] * ( xx [ 121 ] * xx [ 34 ] - xx [ 33 ] * xx [ 44 ]
) + xx [ 400 ] * inputDot [ 5 ] ; xx [ 91 ] = xx [ 52 ] ; xx [ 92 ] = xx [ 54
] + inputDdot [ 5 ] ; xx [ 93 ] = xx [ 37 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 134 , xx + 91 , xx + 283 ) ; xx [
91 ] = xx [ 82 ] ; xx [ 92 ] = xx [ 85 ] ; xx [ 93 ] = xx [ 88 ] ; xx [ 3 ] =
xx [ 468 ] * inputDdot [ 2 ] ; xx [ 33 ] = xx [ 3 ] * xx [ 109 ] ; xx [ 34 ]
= 9.806649999999999 ; xx [ 38 ] = xx [ 34 ] * xx [ 109 ] ; xx [ 39 ] = xx [
411 ] * inputDot [ 2 ] ; xx [ 104 ] = xx [ 39 ] * xx [ 109 ] ; xx [ 450 ] = -
xx [ 28 ] ; xx [ 451 ] = inputDdot [ 1 ] ; xx [ 452 ] = xx [ 30 ] ;
pm_math_Vector3_cross_ra ( xx + 450 , xx + 471 , xx + 453 ) ; xx [ 28 ] = xx
[ 0 ] * ( xx [ 33 ] * xx [ 109 ] - xx [ 111 ] * xx [ 38 ] ) - xx [ 3 ] + xx [
0 ] * xx [ 104 ] * xx [ 109 ] - xx [ 39 ] + xx [ 142 ] * inputDdot [ 1 ] + xx
[ 453 ] ; xx [ 3 ] = xx [ 28 ] * xx [ 103 ] ; xx [ 30 ] = xx [ 34 ] - ( xx [
111 ] * xx [ 33 ] + xx [ 38 ] * xx [ 109 ] ) * xx [ 0 ] - ( xx [ 0 ] * xx [
111 ] * xx [ 104 ] + xx [ 147 ] * inputDot [ 1 ] ) + xx [ 455 ] ; xx [ 33 ] =
xx [ 30 ] * xx [ 103 ] ; pm_math_Vector3_cross_ra ( xx + 122 , xx + 125 , xx
+ 450 ) ; xx [ 38 ] = xx [ 103 ] * xx [ 450 ] ; xx [ 39 ] = xx [ 103 ] * xx [
452 ] ; xx [ 104 ] = xx [ 28 ] - ( xx [ 103 ] * xx [ 3 ] - xx [ 33 ] * xx [
112 ] ) * xx [ 0 ] + xx [ 450 ] - ( xx [ 103 ] * xx [ 38 ] - xx [ 39 ] * xx [
112 ] ) * xx [ 0 ] + xx [ 173 ] * inputDdot [ 0 ] + xx [ 36 ] * xx [ 464 ] ;
xx [ 28 ] = xx [ 104 ] * xx [ 45 ] ; xx [ 36 ] = xx [ 30 ] - xx [ 0 ] * ( xx
[ 3 ] * xx [ 112 ] + xx [ 103 ] * xx [ 33 ] ) + xx [ 452 ] - xx [ 0 ] * ( xx
[ 38 ] * xx [ 112 ] + xx [ 103 ] * xx [ 39 ] ) - ( inputDot [ 1 ] + xx [ 323
] ) * xx [ 174 ] ; xx [ 3 ] = xx [ 36 ] * xx [ 45 ] ; xx [ 30 ] = xx [ 414 ]
* xx [ 295 ] ; xx [ 33 ] = xx [ 414 ] * xx [ 291 ] + xx [ 323 ] * xx [ 120 ]
; xx [ 38 ] = xx [ 33 ] * xx [ 45 ] ; xx [ 39 ] = xx [ 45 ] * xx [ 30 ] ; xx
[ 103 ] = xx [ 104 ] - ( xx [ 45 ] * xx [ 28 ] - xx [ 3 ] * xx [ 113 ] ) * xx
[ 0 ] + xx [ 30 ] - xx [ 0 ] * ( xx [ 38 ] * xx [ 113 ] + xx [ 45 ] * xx [ 39
] ) - xx [ 48 ] * xx [ 442 ] ; xx [ 30 ] = ( xx [ 234 ] + xx [ 234 ] ) * xx [
147 ] - xx [ 128 ] * inputDot [ 2 ] + xx [ 413 ] * inputDdot [ 2 ] + xx [ 454
] + ( xx [ 295 ] + xx [ 295 ] ) * xx [ 174 ] + xx [ 451 ] - xx [ 464 ] * xx [
31 ] + xx [ 120 ] * xx [ 295 ] ; xx [ 31 ] = xx [ 116 ] * xx [ 30 ] ; xx [ 48
] = xx [ 116 ] * xx [ 103 ] ; xx [ 104 ] = xx [ 359 ] * xx [ 172 ] ; xx [ 105
] = xx [ 116 ] * xx [ 104 ] ; xx [ 107 ] = xx [ 354 ] * xx [ 169 ] + xx [ 172
] * xx [ 322 ] ; xx [ 109 ] = xx [ 107 ] * xx [ 116 ] ; xx [ 111 ] = xx [ 103
] - xx [ 0 ] * ( xx [ 31 ] * xx [ 53 ] + xx [ 116 ] * xx [ 48 ] ) + xx [ 104
] - ( xx [ 116 ] * xx [ 105 ] - xx [ 109 ] * xx [ 53 ] ) * xx [ 0 ] + xx [
177 ] * xx [ 54 ] ; xx [ 54 ] = xx [ 36 ] - xx [ 0 ] * ( xx [ 28 ] * xx [ 113
] + xx [ 45 ] * xx [ 3 ] ) + ( xx [ 45 ] * xx [ 38 ] - xx [ 39 ] * xx [ 113 ]
) * xx [ 0 ] - xx [ 33 ] + xx [ 442 ] * xx [ 29 ] + xx [ 359 ] * xx [ 169 ] ;
xx [ 3 ] = xx [ 54 ] * xx [ 44 ] ; xx [ 28 ] = xx [ 111 ] * xx [ 44 ] ; xx [
29 ] = xx [ 312 ] * xx [ 462 ] ; xx [ 33 ] = xx [ 372 ] * xx [ 462 ] + xx [
114 ] * xx [ 393 ] ; xx [ 36 ] = xx [ 33 ] * xx [ 44 ] ; xx [ 38 ] = xx [ 29
] * xx [ 44 ] ; xx [ 122 ] = xx [ 111 ] - ( xx [ 121 ] * xx [ 3 ] + xx [ 28 ]
* xx [ 44 ] ) * xx [ 0 ] + xx [ 29 ] + xx [ 0 ] * ( xx [ 121 ] * xx [ 36 ] -
xx [ 38 ] * xx [ 44 ] ) - xx [ 37 ] * xx [ 14 ] ; xx [ 123 ] = xx [ 30 ] - (
xx [ 116 ] * xx [ 31 ] - xx [ 48 ] * xx [ 53 ] ) * xx [ 0 ] + xx [ 0 ] * ( xx
[ 116 ] * xx [ 109 ] + xx [ 105 ] * xx [ 53 ] ) - xx [ 107 ] - xx [ 41 ] * xx
[ 177 ] + xx [ 312 ] * xx [ 114 ] ; xx [ 124 ] = xx [ 54 ] + xx [ 0 ] * ( xx
[ 121 ] * xx [ 28 ] - xx [ 3 ] * xx [ 44 ] ) + ( xx [ 121 ] * xx [ 38 ] + xx
[ 36 ] * xx [ 44 ] ) * xx [ 0 ] - xx [ 33 ] + xx [ 14 ] * xx [ 52 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 134 , xx + 122 , xx + 28 ) ; xx [ 3
] = pm_math_Vector3_dot_ra ( xx + 21 , xx + 283 ) + pm_math_Vector3_dot_ra (
xx + 91 , xx + 28 ) ; xx [ 21 ] = xx [ 447 ] - xx [ 3 ] ; xx [ 36 ] = xx [ 74
] ; xx [ 37 ] = xx [ 77 ] ; xx [ 38 ] = xx [ 80 ] ; xx [ 52 ] = xx [ 83 ] ;
xx [ 53 ] = xx [ 86 ] ; xx [ 54 ] = xx [ 89 ] ; xx [ 22 ] =
pm_math_Vector3_dot_ra ( xx + 36 , xx + 283 ) + pm_math_Vector3_dot_ra ( xx +
52 , xx + 28 ) ; xx [ 23 ] = xx [ 448 ] - xx [ 22 ] ; xx [ 36 ] = xx [ 75 ] ;
xx [ 37 ] = xx [ 78 ] ; xx [ 38 ] = xx [ 81 ] ; xx [ 52 ] = xx [ 84 ] ; xx [
53 ] = xx [ 87 ] ; xx [ 54 ] = xx [ 90 ] ; xx [ 31 ] = pm_math_Vector3_dot_ra
( xx + 36 , xx + 283 ) + pm_math_Vector3_dot_ra ( xx + 52 , xx + 28 ) ; xx [
33 ] = xx [ 449 ] - xx [ 31 ] ; xx [ 36 ] = xx [ 1 ] * xx [ 133 ] - xx [ 4 ]
* xx [ 166 ] ; xx [ 37 ] = xx [ 133 ] * xx [ 184 ] - xx [ 166 ] * xx [ 179 ]
; xx [ 38 ] = xx [ 36 ] * xx [ 158 ] - xx [ 161 ] * xx [ 37 ] ; xx [ 39 ] =
xx [ 166 ] * xx [ 184 ] + xx [ 133 ] * xx [ 179 ] ; xx [ 41 ] = xx [ 1 ] * xx
[ 166 ] + xx [ 4 ] * xx [ 133 ] ; xx [ 1 ] = xx [ 39 ] * xx [ 161 ] + xx [ 41
] * xx [ 158 ] ; xx [ 4 ] = xx [ 38 ] * xx [ 154 ] - xx [ 157 ] * xx [ 1 ] ;
xx [ 44 ] = xx [ 1 ] * xx [ 154 ] + xx [ 38 ] * xx [ 157 ] ; xx [ 45 ] = xx [
4 ] * xx [ 150 ] - xx [ 44 ] * xx [ 153 ] ; xx [ 48 ] = xx [ 44 ] * xx [ 150
] + xx [ 153 ] * xx [ 4 ] ; xx [ 52 ] = xx [ 146 ] * xx [ 45 ] - xx [ 48 ] *
xx [ 151 ] ; xx [ 53 ] = xx [ 37 ] * xx [ 158 ] + xx [ 161 ] * xx [ 36 ] ; xx
[ 54 ] = xx [ 39 ] * xx [ 158 ] - xx [ 41 ] * xx [ 161 ] ; xx [ 73 ] = xx [
53 ] * xx [ 154 ] - xx [ 54 ] * xx [ 157 ] ; xx [ 74 ] = xx [ 157 ] * xx [ 53
] + xx [ 54 ] * xx [ 154 ] ; xx [ 75 ] = xx [ 73 ] * xx [ 150 ] - xx [ 153 ]
* xx [ 74 ] ; xx [ 76 ] = xx [ 74 ] * xx [ 150 ] + xx [ 73 ] * xx [ 153 ] ;
xx [ 77 ] = xx [ 146 ] * xx [ 75 ] - xx [ 76 ] * xx [ 151 ] ; xx [ 78 ] = xx
[ 52 ] * xx [ 148 ] + xx [ 77 ] * xx [ 159 ] ; xx [ 79 ] = xx [ 77 ] * xx [
148 ] - xx [ 52 ] * xx [ 159 ] ; xx [ 80 ] = xx [ 48 ] * xx [ 146 ] + xx [
151 ] * xx [ 45 ] ; xx [ 81 ] = xx [ 76 ] * xx [ 146 ] + xx [ 151 ] * xx [ 75
] ; xx [ 82 ] = xx [ 148 ] * xx [ 80 ] - xx [ 159 ] * xx [ 81 ] ; xx [ 83 ] =
xx [ 78 ] ; xx [ 84 ] = xx [ 79 ] ; xx [ 85 ] = xx [ 82 ] ; xx [ 86 ] = xx [
0 ] * ( xx [ 52 ] * xx [ 80 ] - xx [ 77 ] * xx [ 81 ] ) ; xx [ 87 ] = xx [ 86
] * xx [ 79 ] ; xx [ 88 ] = xx [ 13 ] - ( xx [ 52 ] * xx [ 52 ] + xx [ 77 ] *
xx [ 77 ] ) * xx [ 0 ] ; xx [ 89 ] = xx [ 88 ] * xx [ 82 ] ; xx [ 90 ] = xx [
78 ] * xx [ 86 ] ; xx [ 91 ] = xx [ 89 ] + xx [ 90 ] ; xx [ 92 ] = xx [ 88 ]
* xx [ 79 ] ; xx [ 103 ] = xx [ 87 ] ; xx [ 104 ] = - xx [ 91 ] ; xx [ 105 ]
= xx [ 92 ] ; pm_math_Vector3_cross_ra ( xx + 83 , xx + 103 , xx + 111 ) ; xx
[ 93 ] = xx [ 148 ] * xx [ 81 ] + xx [ 159 ] * xx [ 80 ] ; xx [ 103 ] = xx [
0 ] * ( xx [ 111 ] + xx [ 93 ] * xx [ 87 ] ) - xx [ 88 ] ; xx [ 104 ] = ( xx
[ 112 ] - xx [ 93 ] * xx [ 91 ] ) * xx [ 0 ] ; xx [ 105 ] = xx [ 86 ] + xx [
0 ] * ( xx [ 113 ] + xx [ 93 ] * xx [ 92 ] ) ; xx [ 111 ] = xx [ 75 ] ; xx [
112 ] = - xx [ 48 ] ; xx [ 113 ] = - xx [ 76 ] ; xx [ 114 ] = xx [ 45 ] ;
pm_math_Quaternion_compose_ra ( xx + 486 , xx + 111 , xx + 120 ) ; xx [ 87 ]
= ( xx [ 75 ] * xx [ 45 ] + xx [ 48 ] * xx [ 76 ] ) * xx [ 0 ] ; xx [ 91 ] =
xx [ 122 ] * xx [ 87 ] ; xx [ 92 ] = xx [ 0 ] * ( xx [ 48 ] * xx [ 75 ] - xx
[ 76 ] * xx [ 45 ] ) ; xx [ 75 ] = xx [ 123 ] * xx [ 92 ] ; xx [ 76 ] = xx [
121 ] * xx [ 87 ] ; xx [ 107 ] = xx [ 75 ] + xx [ 76 ] ; xx [ 109 ] = xx [
122 ] * xx [ 92 ] ; xx [ 111 ] = xx [ 91 ] ; xx [ 112 ] = - xx [ 107 ] ; xx [
113 ] = xx [ 109 ] ; pm_math_Vector3_cross_ra ( xx + 121 , xx + 111 , xx +
124 ) ; xx [ 111 ] = ( xx [ 120 ] * xx [ 91 ] + xx [ 124 ] ) * xx [ 0 ] - xx
[ 92 ] ; xx [ 112 ] = xx [ 0 ] * ( xx [ 125 ] - xx [ 107 ] * xx [ 120 ] ) ;
xx [ 113 ] = xx [ 87 ] + ( xx [ 120 ] * xx [ 109 ] + xx [ 126 ] ) * xx [ 0 ]
; xx [ 124 ] = xx [ 155 ] ; xx [ 125 ] = xx [ 162 ] ; xx [ 126 ] = xx [ 152 ]
; xx [ 127 ] = - xx [ 163 ] ; xx [ 134 ] = xx [ 73 ] ; xx [ 135 ] = - xx [ 44
] ; xx [ 136 ] = - xx [ 74 ] ; xx [ 137 ] = xx [ 4 ] ;
pm_math_Quaternion_compose_ra ( xx + 124 , xx + 134 , xx + 411 ) ; xx [ 91 ]
= ( xx [ 73 ] * xx [ 4 ] + xx [ 44 ] * xx [ 74 ] ) * xx [ 0 ] ; xx [ 107 ] =
xx [ 413 ] * xx [ 91 ] ; xx [ 109 ] = xx [ 0 ] * ( xx [ 44 ] * xx [ 73 ] - xx
[ 4 ] * xx [ 74 ] ) ; xx [ 73 ] = xx [ 414 ] * xx [ 109 ] ; xx [ 74 ] = xx [
412 ] * xx [ 91 ] ; xx [ 114 ] = xx [ 73 ] + xx [ 74 ] ; xx [ 116 ] = xx [
413 ] * xx [ 109 ] ; xx [ 124 ] = xx [ 107 ] ; xx [ 125 ] = - xx [ 114 ] ; xx
[ 126 ] = xx [ 116 ] ; pm_math_Vector3_cross_ra ( xx + 412 , xx + 124 , xx +
134 ) ; xx [ 124 ] = ( xx [ 411 ] * xx [ 107 ] + xx [ 134 ] ) * xx [ 0 ] - xx
[ 109 ] ; xx [ 125 ] = xx [ 0 ] * ( xx [ 135 ] - xx [ 114 ] * xx [ 411 ] ) ;
xx [ 126 ] = xx [ 91 ] + ( xx [ 411 ] * xx [ 116 ] + xx [ 136 ] ) * xx [ 0 ]
; xx [ 107 ] = ( xx [ 54 ] * xx [ 38 ] - xx [ 1 ] * xx [ 53 ] ) * xx [ 0 ] ;
xx [ 134 ] = xx [ 132 ] ; xx [ 135 ] = xx [ 164 ] ; xx [ 136 ] = xx [ 156 ] ;
xx [ 137 ] = - xx [ 167 ] ; xx [ 447 ] = xx [ 53 ] ; xx [ 448 ] = - xx [ 1 ]
; xx [ 449 ] = - xx [ 54 ] ; xx [ 450 ] = xx [ 38 ] ;
pm_math_Quaternion_compose_ra ( xx + 134 , xx + 447 , xx + 451 ) ; xx [ 114 ]
= xx [ 0 ] * ( xx [ 38 ] * xx [ 53 ] + xx [ 54 ] * xx [ 1 ] ) ; xx [ 53 ] =
xx [ 453 ] * xx [ 114 ] ; xx [ 54 ] = xx [ 454 ] * xx [ 107 ] ; xx [ 116 ] =
xx [ 452 ] * xx [ 114 ] ; xx [ 127 ] = xx [ 54 ] - xx [ 116 ] ; xx [ 128 ] =
xx [ 453 ] * xx [ 107 ] ; xx [ 134 ] = xx [ 53 ] ; xx [ 135 ] = xx [ 127 ] ;
xx [ 136 ] = - xx [ 128 ] ; pm_math_Vector3_cross_ra ( xx + 452 , xx + 134 ,
xx + 162 ) ; xx [ 134 ] = xx [ 107 ] + ( xx [ 451 ] * xx [ 53 ] + xx [ 162 ]
) * xx [ 0 ] ; xx [ 135 ] = ( xx [ 451 ] * xx [ 127 ] + xx [ 163 ] ) * xx [ 0
] ; xx [ 136 ] = xx [ 114 ] + xx [ 0 ] * ( xx [ 164 ] - xx [ 451 ] * xx [ 128
] ) ; xx [ 447 ] = xx [ 168 ] ; xx [ 448 ] = xx [ 171 ] ; xx [ 449 ] = xx [
165 ] ; xx [ 450 ] = - xx [ 170 ] ; xx [ 162 ] = xx [ 37 ] ; xx [ 163 ] = -
xx [ 41 ] ; xx [ 164 ] = - xx [ 39 ] ; xx [ 165 ] = xx [ 36 ] ;
pm_math_Quaternion_compose_ra ( xx + 447 , xx + 162 , xx + 167 ) ; xx [ 53 ]
= xx [ 0 ] * ( xx [ 39 ] * xx [ 37 ] - xx [ 41 ] * xx [ 36 ] ) ; xx [ 127 ] =
xx [ 169 ] * xx [ 53 ] ; xx [ 128 ] = xx [ 13 ] - ( xx [ 41 ] * xx [ 41 ] +
xx [ 39 ] * xx [ 39 ] ) * xx [ 0 ] ; xx [ 132 ] = xx [ 170 ] * xx [ 128 ] ;
xx [ 137 ] = xx [ 168 ] * xx [ 53 ] ; xx [ 147 ] = xx [ 132 ] + xx [ 137 ] ;
xx [ 148 ] = xx [ 169 ] * xx [ 128 ] ; xx [ 162 ] = xx [ 127 ] ; xx [ 163 ] =
- xx [ 147 ] ; xx [ 164 ] = xx [ 148 ] ; pm_math_Vector3_cross_ra ( xx + 168
, xx + 162 , xx + 447 ) ; xx [ 162 ] = ( xx [ 167 ] * xx [ 127 ] + xx [ 447 ]
) * xx [ 0 ] - xx [ 128 ] ; xx [ 163 ] = xx [ 0 ] * ( xx [ 448 ] - xx [ 147 ]
* xx [ 167 ] ) ; xx [ 164 ] = xx [ 53 ] + ( xx [ 167 ] * xx [ 148 ] + xx [
449 ] ) * xx [ 0 ] ; xx [ 127 ] = xx [ 192 ] * xx [ 213 ] ; xx [ 147 ] = xx [
127 ] + xx [ 218 ] ; xx [ 148 ] = xx [ 191 ] * xx [ 213 ] ; xx [ 447 ] = xx [
217 ] ; xx [ 448 ] = - xx [ 147 ] ; xx [ 449 ] = xx [ 148 ] ;
pm_math_Vector3_cross_ra ( xx + 190 , xx + 447 , xx + 459 ) ; xx [ 447 ] = (
xx [ 226 ] + xx [ 459 ] ) * xx [ 0 ] - xx [ 213 ] ; xx [ 448 ] = xx [ 0 ] * (
xx [ 460 ] - xx [ 147 ] * xx [ 189 ] ) ; xx [ 449 ] = xx [ 216 ] + ( xx [ 189
] * xx [ 148 ] + xx [ 461 ] ) * xx [ 0 ] ; xx [ 459 ] = xx [ 129 ] * xx [ 24
] ; xx [ 460 ] = xx [ 160 ] * xx [ 24 ] ; xx [ 461 ] = xx [ 208 ] * xx [ 24 ]
; pm_math_Vector3_cross_ra ( xx + 465 , xx + 459 , xx + 471 ) ; xx [ 459 ] =
xx [ 25 ] ; xx [ 460 ] = xx [ 118 ] ; xx [ 461 ] = xx [ 119 ] ; xx [ 465 ] =
- xx [ 47 ] ; xx [ 466 ] = - xx [ 426 ] ; xx [ 467 ] = - xx [ 43 ] ;
pm_math_Vector3_cross_ra ( xx + 459 , xx + 465 , xx + 474 ) ;
pm_math_Vector3_cross_ra ( xx + 260 , xx + 222 , xx + 459 ) ; xx [ 25 ] = xx
[ 471 ] - xx [ 474 ] + ( xx [ 459 ] + xx [ 194 ] ) * xx [ 24 ] ; xx [ 43 ] =
xx [ 472 ] - xx [ 475 ] + xx [ 24 ] * ( xx [ 460 ] - xx [ 209 ] ) ; xx [ 47 ]
= xx [ 473 ] - xx [ 476 ] + xx [ 24 ] * ( xx [ 461 ] - xx [ 278 ] ) ; xx [
222 ] = xx [ 25 ] ; xx [ 223 ] = xx [ 43 ] ; xx [ 224 ] = xx [ 47 ] ; xx [
118 ] = xx [ 392 ] * state [ 12 ] + xx [ 418 ] * state [ 15 ] +
pm_math_Vector3_dot_ra ( xx + 238 , xx + 222 ) ; xx [ 119 ] = xx [ 392 ] *
state [ 13 ] + xx [ 418 ] * state [ 16 ] + xx [ 25 ] * xx [ 180 ] + xx [ 43 ]
* xx [ 244 ] ; xx [ 25 ] = xx [ 392 ] * state [ 14 ] + xx [ 418 ] * state [
17 ] + xx [ 47 ] ; xx [ 222 ] = - xx [ 118 ] ; xx [ 223 ] = - xx [ 119 ] ; xx
[ 224 ] = - xx [ 25 ] ; solveSymmetricPosDef ( xx + 248 , xx + 222 , 3 , 1 ,
xx + 238 , xx + 260 ) ; xx [ 499 ] = xx [ 241 ] ; xx [ 500 ] = xx [ 181 ] ;
xx [ 501 ] = xx [ 27 ] ; xx [ 502 ] = xx [ 242 ] ; xx [ 503 ] = xx [ 245 ] ;
xx [ 504 ] = xx [ 27 ] ; xx [ 505 ] = xx [ 243 ] ; xx [ 506 ] = xx [ 27 ] ;
xx [ 507 ] = xx [ 24 ] ; xx [ 508 ] = xx [ 27 ] ; xx [ 509 ] = xx [ 27 ] ; xx
[ 510 ] = xx [ 27 ] ; xx [ 511 ] = xx [ 27 ] ; xx [ 512 ] = xx [ 27 ] ; xx [
513 ] = xx [ 27 ] ; xx [ 514 ] = xx [ 27 ] ; xx [ 515 ] = xx [ 27 ] ; xx [
516 ] = xx [ 27 ] ; solveSymmetricPosDef ( xx + 248 , xx + 499 , 3 , 6 , xx +
517 , xx + 179 ) ; xx [ 179 ] = xx [ 517 ] ; xx [ 180 ] = xx [ 520 ] ; xx [
181 ] = xx [ 523 ] ; xx [ 24 ] = xx [ 146 ] * inputDdot [ 8 ] ; xx [ 43 ] =
xx [ 0 ] * xx [ 151 ] * xx [ 24 ] + xx [ 265 ] * inputDot [ 7 ] ; xx [ 47 ] =
xx [ 43 ] * xx [ 153 ] ; xx [ 129 ] = inputDdot [ 8 ] - xx [ 0 ] * xx [ 24 ]
* xx [ 146 ] - xx [ 263 ] * inputDot [ 7 ] ; xx [ 24 ] = xx [ 153 ] * xx [
129 ] ; xx [ 147 ] = xx [ 0 ] * ( xx [ 153 ] * xx [ 47 ] + xx [ 24 ] * xx [
150 ] ) - xx [ 43 ] - xx [ 294 ] * inputDot [ 6 ] ; xx [ 148 ] = xx [ 157 ] *
xx [ 147 ] ; xx [ 152 ] = xx [ 129 ] - ( xx [ 153 ] * xx [ 24 ] - xx [ 47 ] *
xx [ 150 ] ) * xx [ 0 ] + xx [ 292 ] * inputDot [ 6 ] ; xx [ 24 ] = xx [ 157
] * xx [ 152 ] ; xx [ 47 ] = xx [ 147 ] - ( xx [ 157 ] * xx [ 148 ] - xx [ 24
] * xx [ 154 ] ) * xx [ 0 ] - xx [ 320 ] * inputDot [ 9 ] ; xx [ 155 ] =
inputDdot [ 7 ] + inputDdot [ 6 ] ; xx [ 156 ] = xx [ 155 ] + inputDdot [ 9 ]
; xx [ 159 ] = xx [ 156 ] * xx [ 161 ] ; xx [ 165 ] = xx [ 161 ] * xx [ 47 ]
; xx [ 171 ] = xx [ 47 ] - xx [ 0 ] * ( xx [ 159 ] * xx [ 158 ] + xx [ 161 ]
* xx [ 165 ] ) + xx [ 356 ] * inputDot [ 10 ] ; xx [ 172 ] = xx [ 152 ] - xx
[ 0 ] * ( xx [ 148 ] * xx [ 154 ] + xx [ 157 ] * xx [ 24 ] ) + xx [ 317 ] *
inputDot [ 9 ] ; xx [ 24 ] = xx [ 172 ] + inputDdot [ 10 ] ; xx [ 148 ] = xx
[ 24 ] * xx [ 133 ] ; xx [ 152 ] = xx [ 171 ] * xx [ 133 ] ; xx [ 174 ] = xx
[ 171 ] - ( xx [ 166 ] * xx [ 148 ] + xx [ 152 ] * xx [ 133 ] ) * xx [ 0 ] -
xx [ 364 ] * inputDot [ 11 ] ; xx [ 184 ] = xx [ 156 ] - ( xx [ 161 ] * xx [
159 ] - xx [ 165 ] * xx [ 158 ] ) * xx [ 0 ] - xx [ 344 ] * inputDot [ 10 ] ;
xx [ 156 ] = xx [ 24 ] + xx [ 0 ] * ( xx [ 166 ] * xx [ 152 ] - xx [ 148 ] *
xx [ 133 ] ) + xx [ 363 ] * inputDot [ 11 ] ; xx [ 222 ] = xx [ 174 ] ; xx [
223 ] = xx [ 184 ] + inputDdot [ 11 ] ; xx [ 224 ] = xx [ 156 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 185 , xx + 222 , xx + 241 ) ; xx [
222 ] = xx [ 526 ] ; xx [ 223 ] = xx [ 529 ] ; xx [ 224 ] = xx [ 532 ] ; xx [
24 ] = xx [ 468 ] * inputDdot [ 8 ] ; xx [ 148 ] = xx [ 24 ] * xx [ 146 ] ;
xx [ 152 ] = xx [ 34 ] * xx [ 146 ] ; xx [ 159 ] = xx [ 496 ] * inputDot [ 8
] ; xx [ 165 ] = xx [ 159 ] * xx [ 146 ] ; xx [ 260 ] = - xx [ 43 ] ; xx [
261 ] = inputDdot [ 7 ] ; xx [ 262 ] = xx [ 129 ] ; pm_math_Vector3_cross_ra
( xx + 260 , xx + 490 , xx + 362 ) ; xx [ 43 ] = xx [ 0 ] * ( xx [ 148 ] * xx
[ 146 ] - xx [ 151 ] * xx [ 152 ] ) - xx [ 24 ] + xx [ 0 ] * xx [ 165 ] * xx
[ 146 ] - xx [ 159 ] + xx [ 142 ] * inputDdot [ 7 ] + xx [ 362 ] ; xx [ 24 ]
= xx [ 43 ] * xx [ 153 ] ; xx [ 129 ] = xx [ 34 ] - ( xx [ 151 ] * xx [ 148 ]
+ xx [ 152 ] * xx [ 146 ] ) * xx [ 0 ] - ( xx [ 0 ] * xx [ 151 ] * xx [ 165 ]
+ xx [ 434 ] * inputDot [ 7 ] ) + xx [ 364 ] ; xx [ 34 ] = xx [ 129 ] * xx [
153 ] ; pm_math_Vector3_cross_ra ( xx + 481 , xx + 493 , xx + 260 ) ; xx [
142 ] = xx [ 153 ] * xx [ 260 ] ; xx [ 146 ] = xx [ 153 ] * xx [ 262 ] ; xx [
148 ] = xx [ 43 ] - ( xx [ 153 ] * xx [ 24 ] - xx [ 34 ] * xx [ 150 ] ) * xx
[ 0 ] + xx [ 260 ] - ( xx [ 153 ] * xx [ 142 ] - xx [ 146 ] * xx [ 150 ] ) *
xx [ 0 ] + xx [ 173 ] * inputDdot [ 6 ] + xx [ 155 ] * xx [ 464 ] ; xx [ 43 ]
= xx [ 148 ] * xx [ 157 ] ; xx [ 151 ] = xx [ 129 ] - xx [ 0 ] * ( xx [ 24 ]
* xx [ 150 ] + xx [ 153 ] * xx [ 34 ] ) + xx [ 262 ] - xx [ 0 ] * ( xx [ 142
] * xx [ 150 ] + xx [ 153 ] * xx [ 146 ] ) - ( inputDot [ 7 ] + xx [ 318 ] )
* xx [ 485 ] ; xx [ 24 ] = xx [ 151 ] * xx [ 157 ] ; xx [ 34 ] = xx [ 498 ] *
xx [ 294 ] ; xx [ 129 ] = xx [ 498 ] * xx [ 292 ] + xx [ 318 ] * xx [ 214 ] ;
xx [ 142 ] = xx [ 129 ] * xx [ 157 ] ; xx [ 146 ] = xx [ 157 ] * xx [ 34 ] ;
xx [ 150 ] = xx [ 148 ] - ( xx [ 157 ] * xx [ 43 ] - xx [ 24 ] * xx [ 154 ] )
* xx [ 0 ] + xx [ 34 ] - xx [ 0 ] * ( xx [ 142 ] * xx [ 154 ] + xx [ 157 ] *
xx [ 146 ] ) - xx [ 172 ] * xx [ 442 ] ; xx [ 34 ] = ( xx [ 265 ] + xx [ 265
] ) * xx [ 434 ] - xx [ 219 ] * inputDot [ 8 ] + xx [ 149 ] * inputDdot [ 8 ]
+ xx [ 363 ] + ( xx [ 294 ] + xx [ 294 ] ) * xx [ 485 ] + xx [ 261 ] - xx [
464 ] * xx [ 147 ] + xx [ 214 ] * xx [ 294 ] ; xx [ 147 ] = xx [ 161 ] * xx [
34 ] ; xx [ 148 ] = xx [ 161 ] * xx [ 150 ] ; xx [ 149 ] = xx [ 324 ] * xx [
484 ] ; xx [ 152 ] = xx [ 161 ] * xx [ 149 ] ; xx [ 153 ] = xx [ 320 ] * xx [
470 ] + xx [ 484 ] * xx [ 317 ] ; xx [ 155 ] = xx [ 153 ] * xx [ 161 ] ; xx [
159 ] = xx [ 150 ] - xx [ 0 ] * ( xx [ 147 ] * xx [ 158 ] + xx [ 161 ] * xx [
148 ] ) + xx [ 149 ] - ( xx [ 161 ] * xx [ 152 ] - xx [ 155 ] * xx [ 158 ] )
* xx [ 0 ] + xx [ 177 ] * xx [ 184 ] ; xx [ 149 ] = xx [ 151 ] - xx [ 0 ] * (
xx [ 43 ] * xx [ 154 ] + xx [ 157 ] * xx [ 24 ] ) + ( xx [ 157 ] * xx [ 142 ]
- xx [ 146 ] * xx [ 154 ] ) * xx [ 0 ] - xx [ 129 ] + xx [ 442 ] * xx [ 47 ]
+ xx [ 324 ] * xx [ 470 ] ; xx [ 24 ] = xx [ 149 ] * xx [ 133 ] ; xx [ 43 ] =
xx [ 159 ] * xx [ 133 ] ; xx [ 47 ] = xx [ 310 ] * xx [ 497 ] ; xx [ 129 ] =
xx [ 344 ] * xx [ 497 ] + xx [ 117 ] * xx [ 356 ] ; xx [ 142 ] = xx [ 129 ] *
xx [ 133 ] ; xx [ 146 ] = xx [ 47 ] * xx [ 133 ] ; xx [ 260 ] = xx [ 159 ] -
( xx [ 166 ] * xx [ 24 ] + xx [ 43 ] * xx [ 133 ] ) * xx [ 0 ] + xx [ 47 ] +
xx [ 0 ] * ( xx [ 166 ] * xx [ 142 ] - xx [ 146 ] * xx [ 133 ] ) - xx [ 156 ]
* xx [ 14 ] ; xx [ 261 ] = xx [ 34 ] - ( xx [ 161 ] * xx [ 147 ] - xx [ 148 ]
* xx [ 158 ] ) * xx [ 0 ] + xx [ 0 ] * ( xx [ 161 ] * xx [ 155 ] + xx [ 152 ]
* xx [ 158 ] ) - xx [ 153 ] - xx [ 171 ] * xx [ 177 ] + xx [ 310 ] * xx [ 117
] ; xx [ 262 ] = xx [ 149 ] + xx [ 0 ] * ( xx [ 166 ] * xx [ 43 ] - xx [ 24 ]
* xx [ 133 ] ) + ( xx [ 166 ] * xx [ 146 ] + xx [ 142 ] * xx [ 133 ] ) * xx [
0 ] - xx [ 129 ] + xx [ 14 ] * xx [ 174 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 185 , xx + 260 , xx + 146 ) ; xx [
14 ] = pm_math_Vector3_dot_ra ( xx + 179 , xx + 241 ) +
pm_math_Vector3_dot_ra ( xx + 222 , xx + 146 ) ; xx [ 24 ] = xx [ 238 ] - xx
[ 14 ] ; xx [ 149 ] = xx [ 518 ] ; xx [ 150 ] = xx [ 521 ] ; xx [ 151 ] = xx
[ 524 ] ; xx [ 152 ] = xx [ 527 ] ; xx [ 153 ] = xx [ 530 ] ; xx [ 154 ] = xx
[ 533 ] ; xx [ 34 ] = pm_math_Vector3_dot_ra ( xx + 149 , xx + 241 ) +
pm_math_Vector3_dot_ra ( xx + 152 , xx + 146 ) ; xx [ 43 ] = xx [ 239 ] - xx
[ 34 ] ; xx [ 149 ] = xx [ 519 ] ; xx [ 150 ] = xx [ 522 ] ; xx [ 151 ] = xx
[ 525 ] ; xx [ 152 ] = xx [ 528 ] ; xx [ 153 ] = xx [ 531 ] ; xx [ 154 ] = xx
[ 534 ] ; xx [ 47 ] = pm_math_Vector3_dot_ra ( xx + 149 , xx + 241 ) +
pm_math_Vector3_dot_ra ( xx + 152 , xx + 146 ) ; xx [ 117 ] = xx [ 240 ] - xx
[ 47 ] ; xx [ 146 ] = xx [ 347 ] + xx [ 327 ] + xx [ 0 ] * xx [ 336 ] ; xx [
147 ] = xx [ 350 ] + xx [ 330 ] + xx [ 0 ] * xx [ 339 ] ; xx [ 148 ] = xx [
353 ] + xx [ 333 ] + xx [ 0 ] * xx [ 342 ] ; xx [ 149 ] = xx [ 403 ] + xx [
374 ] + xx [ 0 ] * xx [ 383 ] ; xx [ 150 ] = xx [ 406 ] + xx [ 377 ] + xx [ 0
] * xx [ 386 ] ; xx [ 151 ] = xx [ 409 ] + xx [ 380 ] + xx [ 0 ] * xx [ 389 ]
; xx [ 129 ] = xx [ 227 ] + xx [ 42 ] ; xx [ 42 ] = xx [ 129 ] * xx [ 140 ] ;
xx [ 133 ] = xx [ 129 ] * xx [ 139 ] ; xx [ 142 ] = xx [ 8 ] + xx [ 133 ] ;
xx [ 8 ] = xx [ 19 ] * xx [ 140 ] ; xx [ 152 ] = xx [ 42 ] ; xx [ 153 ] = -
xx [ 142 ] ; xx [ 154 ] = xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 139 , xx
+ 152 , xx + 155 ) ; xx [ 152 ] = ( xx [ 138 ] * xx [ 42 ] + xx [ 155 ] ) *
xx [ 0 ] - xx [ 19 ] ; xx [ 153 ] = xx [ 0 ] * ( xx [ 156 ] - xx [ 142 ] * xx
[ 138 ] ) ; xx [ 154 ] = xx [ 129 ] + ( xx [ 138 ] * xx [ 8 ] + xx [ 157 ] )
* xx [ 0 ] ; xx [ 8 ] = xx [ 143 ] * xx [ 192 ] ; xx [ 19 ] = xx [ 160 ] * xx
[ 192 ] ; xx [ 42 ] = xx [ 160 ] * xx [ 191 ] ; xx [ 142 ] = xx [ 183 ] + xx
[ 42 ] ; xx [ 155 ] = xx [ 8 ] ; xx [ 156 ] = xx [ 19 ] ; xx [ 157 ] = - xx [
142 ] ; pm_math_Vector3_cross_ra ( xx + 190 , xx + 155 , xx + 171 ) ; xx [
155 ] = xx [ 160 ] + ( xx [ 189 ] * xx [ 8 ] + xx [ 171 ] ) * xx [ 0 ] ; xx [
156 ] = ( xx [ 189 ] * xx [ 19 ] + xx [ 172 ] ) * xx [ 0 ] - xx [ 143 ] ; xx
[ 157 ] = xx [ 0 ] * ( xx [ 173 ] - xx [ 142 ] * xx [ 189 ] ) ; xx [ 8 ] = xx
[ 0 ] * ( xx [ 220 ] * xx [ 274 ] + xx [ 267 ] * xx [ 276 ] ) ; xx [ 19 ] =
xx [ 273 ] * xx [ 8 ] ; xx [ 142 ] = xx [ 8 ] * xx [ 268 ] ; xx [ 143 ] = xx
[ 296 ] + xx [ 142 ] ; xx [ 158 ] = xx [ 273 ] * xx [ 293 ] ; xx [ 171 ] = -
xx [ 19 ] ; xx [ 172 ] = - xx [ 143 ] ; xx [ 173 ] = - xx [ 158 ] ;
pm_math_Vector3_cross_ra ( xx + 368 , xx + 171 , xx + 179 ) ; xx [ 171 ] = xx
[ 0 ] * ( xx [ 179 ] - xx [ 19 ] * xx [ 319 ] ) - xx [ 293 ] ; xx [ 172 ] =
xx [ 0 ] * ( xx [ 180 ] - xx [ 143 ] * xx [ 319 ] ) ; xx [ 173 ] = xx [ 8 ] +
xx [ 0 ] * ( xx [ 181 ] - xx [ 158 ] * xx [ 319 ] ) ; xx [ 19 ] = ( xx [ 246
] * xx [ 215 ] - xx [ 211 ] * xx [ 264 ] ) * xx [ 0 ] ; xx [ 143 ] = xx [ 421
] * xx [ 19 ] ; xx [ 158 ] = xx [ 420 ] * xx [ 19 ] ; xx [ 159 ] = xx [ 115 ]
+ xx [ 158 ] ; xx [ 115 ] = xx [ 421 ] * xx [ 110 ] ; xx [ 179 ] = xx [ 143 ]
; xx [ 180 ] = - xx [ 159 ] ; xx [ 181 ] = xx [ 115 ] ;
pm_math_Vector3_cross_ra ( xx + 420 , xx + 179 , xx + 183 ) ; xx [ 179 ] = (
xx [ 419 ] * xx [ 143 ] + xx [ 183 ] ) * xx [ 0 ] - xx [ 110 ] ; xx [ 180 ] =
xx [ 0 ] * ( xx [ 184 ] - xx [ 159 ] * xx [ 419 ] ) ; xx [ 181 ] = xx [ 19 ]
+ ( xx [ 419 ] * xx [ 115 ] + xx [ 185 ] ) * xx [ 0 ] ; xx [ 110 ] = ( xx [
231 ] * xx [ 10 ] - xx [ 9 ] * xx [ 232 ] ) * xx [ 0 ] ; xx [ 9 ] = xx [ 429
] * xx [ 110 ] ; xx [ 10 ] = xx [ 428 ] * xx [ 110 ] ; xx [ 115 ] = xx [ 321
] + xx [ 10 ] ; xx [ 143 ] = xx [ 429 ] * xx [ 316 ] ; xx [ 183 ] = xx [ 9 ]
; xx [ 184 ] = - xx [ 115 ] ; xx [ 185 ] = xx [ 143 ] ;
pm_math_Vector3_cross_ra ( xx + 428 , xx + 183 , xx + 186 ) ; xx [ 183 ] = (
xx [ 427 ] * xx [ 9 ] + xx [ 186 ] ) * xx [ 0 ] - xx [ 316 ] ; xx [ 184 ] =
xx [ 0 ] * ( xx [ 187 ] - xx [ 115 ] * xx [ 427 ] ) ; xx [ 185 ] = xx [ 110 ]
+ ( xx [ 427 ] * xx [ 143 ] + xx [ 188 ] ) * xx [ 0 ] ; xx [ 9 ] = xx [ 0 ] *
( xx [ 221 ] * xx [ 2 ] - xx [ 225 ] * xx [ 206 ] ) ; xx [ 2 ] = xx [ 437 ] *
xx [ 9 ] ; xx [ 115 ] = xx [ 436 ] * xx [ 9 ] ; xx [ 143 ] = xx [ 358 ] + xx
[ 115 ] ; xx [ 159 ] = xx [ 437 ] * xx [ 357 ] ; xx [ 186 ] = xx [ 2 ] ; xx [
187 ] = - xx [ 143 ] ; xx [ 188 ] = xx [ 159 ] ; pm_math_Vector3_cross_ra (
xx + 436 , xx + 186 , xx + 219 ) ; xx [ 186 ] = ( xx [ 435 ] * xx [ 2 ] + xx
[ 219 ] ) * xx [ 0 ] - xx [ 357 ] ; xx [ 187 ] = xx [ 0 ] * ( xx [ 220 ] - xx
[ 143 ] * xx [ 435 ] ) ; xx [ 188 ] = xx [ 9 ] + ( xx [ 435 ] * xx [ 159 ] +
xx [ 221 ] ) * xx [ 0 ] ; xx [ 2 ] = ( xx [ 210 ] * xx [ 131 ] + xx [ 193 ] *
xx [ 6 ] ) * xx [ 0 ] ; xx [ 6 ] = xx [ 445 ] * xx [ 2 ] ; xx [ 131 ] = xx [
444 ] * xx [ 2 ] ; xx [ 143 ] = xx [ 131 ] - xx [ 391 ] ; xx [ 159 ] = xx [
445 ] * xx [ 371 ] ; xx [ 193 ] = - xx [ 6 ] ; xx [ 194 ] = xx [ 143 ] ; xx [
195 ] = xx [ 159 ] ; pm_math_Vector3_cross_ra ( xx + 444 , xx + 193 , xx +
208 ) ; xx [ 193 ] = xx [ 0 ] * ( xx [ 208 ] - xx [ 443 ] * xx [ 6 ] ) - xx [
371 ] ; xx [ 194 ] = ( xx [ 443 ] * xx [ 143 ] + xx [ 209 ] ) * xx [ 0 ] ; xx
[ 195 ] = ( xx [ 443 ] * xx [ 159 ] + xx [ 210 ] ) * xx [ 0 ] - xx [ 2 ] ; xx
[ 6 ] = xx [ 86 ] * xx [ 82 ] ; xx [ 143 ] = ( xx [ 52 ] * xx [ 81 ] + xx [
77 ] * xx [ 80 ] ) * xx [ 0 ] ; xx [ 52 ] = xx [ 143 ] * xx [ 82 ] ; xx [ 77
] = xx [ 143 ] * xx [ 79 ] ; xx [ 79 ] = xx [ 77 ] + xx [ 90 ] ; xx [ 80 ] =
xx [ 6 ] ; xx [ 81 ] = xx [ 52 ] ; xx [ 82 ] = - xx [ 79 ] ;
pm_math_Vector3_cross_ra ( xx + 83 , xx + 80 , xx + 208 ) ; xx [ 80 ] = xx [
0 ] * ( xx [ 208 ] + xx [ 93 ] * xx [ 6 ] ) + xx [ 143 ] ; xx [ 81 ] = ( xx [
93 ] * xx [ 52 ] + xx [ 209 ] ) * xx [ 0 ] - xx [ 86 ] ; xx [ 82 ] = xx [ 0 ]
* ( xx [ 210 ] - xx [ 93 ] * xx [ 79 ] ) ; xx [ 6 ] = xx [ 13 ] - ( xx [ 45 ]
* xx [ 45 ] + xx [ 48 ] * xx [ 48 ] ) * xx [ 0 ] ; xx [ 45 ] = xx [ 123 ] *
xx [ 87 ] ; xx [ 48 ] = xx [ 123 ] * xx [ 6 ] ; xx [ 52 ] = xx [ 122 ] * xx [
6 ] ; xx [ 79 ] = xx [ 76 ] + xx [ 52 ] ; xx [ 208 ] = xx [ 45 ] ; xx [ 209 ]
= xx [ 48 ] ; xx [ 210 ] = - xx [ 79 ] ; pm_math_Vector3_cross_ra ( xx + 121
, xx + 208 , xx + 219 ) ; xx [ 208 ] = xx [ 6 ] + ( xx [ 120 ] * xx [ 45 ] +
xx [ 219 ] ) * xx [ 0 ] ; xx [ 209 ] = ( xx [ 120 ] * xx [ 48 ] + xx [ 220 ]
) * xx [ 0 ] - xx [ 87 ] ; xx [ 210 ] = xx [ 0 ] * ( xx [ 221 ] - xx [ 79 ] *
xx [ 120 ] ) ; xx [ 45 ] = xx [ 13 ] - ( xx [ 4 ] * xx [ 4 ] + xx [ 44 ] * xx
[ 44 ] ) * xx [ 0 ] ; xx [ 4 ] = xx [ 414 ] * xx [ 91 ] ; xx [ 44 ] = xx [
414 ] * xx [ 45 ] ; xx [ 48 ] = xx [ 413 ] * xx [ 45 ] ; xx [ 76 ] = xx [ 74
] + xx [ 48 ] ; xx [ 219 ] = xx [ 4 ] ; xx [ 220 ] = xx [ 44 ] ; xx [ 221 ] =
- xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx + 412 , xx + 219 , xx + 222 ) ;
xx [ 219 ] = xx [ 45 ] + ( xx [ 411 ] * xx [ 4 ] + xx [ 222 ] ) * xx [ 0 ] ;
xx [ 220 ] = ( xx [ 411 ] * xx [ 44 ] + xx [ 223 ] ) * xx [ 0 ] - xx [ 91 ] ;
xx [ 221 ] = xx [ 0 ] * ( xx [ 224 ] - xx [ 76 ] * xx [ 411 ] ) ; xx [ 4 ] =
xx [ 13 ] - ( xx [ 38 ] * xx [ 38 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 0 ] ; xx [
1 ] = xx [ 454 ] * xx [ 114 ] ; xx [ 38 ] = xx [ 454 ] * xx [ 4 ] ; xx [ 44 ]
= xx [ 453 ] * xx [ 4 ] ; xx [ 74 ] = xx [ 116 ] + xx [ 44 ] ; xx [ 222 ] =
xx [ 1 ] ; xx [ 223 ] = xx [ 38 ] ; xx [ 224 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 452 , xx + 222 , xx + 225 ) ; xx [ 222 ] = xx
[ 4 ] + ( xx [ 451 ] * xx [ 1 ] + xx [ 225 ] ) * xx [ 0 ] ; xx [ 223 ] = ( xx
[ 451 ] * xx [ 38 ] + xx [ 226 ] ) * xx [ 0 ] - xx [ 114 ] ; xx [ 224 ] = xx
[ 0 ] * ( xx [ 227 ] - xx [ 74 ] * xx [ 451 ] ) ; xx [ 1 ] = xx [ 170 ] * xx
[ 53 ] ; xx [ 38 ] = ( xx [ 41 ] * xx [ 37 ] + xx [ 39 ] * xx [ 36 ] ) * xx [
0 ] ; xx [ 36 ] = xx [ 170 ] * xx [ 38 ] ; xx [ 37 ] = xx [ 169 ] * xx [ 38 ]
; xx [ 39 ] = xx [ 37 ] - xx [ 137 ] ; xx [ 225 ] = xx [ 1 ] ; xx [ 226 ] = -
xx [ 36 ] ; xx [ 227 ] = xx [ 39 ] ; pm_math_Vector3_cross_ra ( xx + 168 , xx
+ 225 , xx + 238 ) ; xx [ 225 ] = ( xx [ 167 ] * xx [ 1 ] + xx [ 238 ] ) * xx
[ 0 ] - xx [ 38 ] ; xx [ 226 ] = xx [ 0 ] * ( xx [ 239 ] - xx [ 167 ] * xx [
36 ] ) - xx [ 53 ] ; xx [ 227 ] = ( xx [ 167 ] * xx [ 39 ] + xx [ 240 ] ) *
xx [ 0 ] ; xx [ 1 ] = xx [ 13 ] - xx [ 233 ] ; xx [ 13 ] = xx [ 192 ] * xx [
1 ] ; xx [ 36 ] = xx [ 191 ] * xx [ 1 ] ; xx [ 39 ] = xx [ 218 ] + xx [ 36 ]
; xx [ 231 ] = xx [ 201 ] ; xx [ 232 ] = xx [ 13 ] ; xx [ 233 ] = - xx [ 39 ]
; pm_math_Vector3_cross_ra ( xx + 190 , xx + 231 , xx + 238 ) ; xx [ 231 ] =
xx [ 1 ] + ( xx [ 279 ] + xx [ 238 ] ) * xx [ 0 ] ; xx [ 232 ] = ( xx [ 189 ]
* xx [ 13 ] + xx [ 239 ] ) * xx [ 0 ] - xx [ 216 ] ; xx [ 233 ] = xx [ 0 ] *
( xx [ 240 ] - xx [ 39 ] * xx [ 189 ] ) ; xx [ 214 ] = xx [ 345 ] + xx [ 325
] + xx [ 0 ] * xx [ 334 ] ; xx [ 215 ] = xx [ 348 ] + xx [ 328 ] + xx [ 0 ] *
xx [ 337 ] ; xx [ 216 ] = xx [ 351 ] + xx [ 331 ] + xx [ 0 ] * xx [ 340 ] ;
xx [ 238 ] = xx [ 404 ] + xx [ 375 ] + xx [ 0 ] * xx [ 384 ] ; xx [ 239 ] =
xx [ 407 ] + xx [ 378 ] + xx [ 0 ] * xx [ 387 ] ; xx [ 240 ] = xx [ 410 ] +
xx [ 381 ] + xx [ 0 ] * xx [ 390 ] ; xx [ 13 ] = xx [ 129 ] * xx [ 141 ] ; xx
[ 39 ] = xx [ 11 ] * xx [ 141 ] ; xx [ 41 ] = xx [ 133 ] + xx [ 18 ] ; xx [
241 ] = xx [ 13 ] ; xx [ 242 ] = xx [ 39 ] ; xx [ 243 ] = - xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 139 , xx + 241 , xx + 244 ) ; xx [ 139 ] = xx
[ 11 ] + ( xx [ 138 ] * xx [ 13 ] + xx [ 244 ] ) * xx [ 0 ] ; xx [ 140 ] = (
xx [ 138 ] * xx [ 39 ] + xx [ 245 ] ) * xx [ 0 ] - xx [ 129 ] ; xx [ 141 ] =
xx [ 0 ] * ( xx [ 246 ] - xx [ 41 ] * xx [ 138 ] ) ; xx [ 11 ] = xx [ 42 ] +
xx [ 175 ] ; xx [ 13 ] = xx [ 160 ] * xx [ 190 ] ; xx [ 18 ] = xx [ 178 ] *
xx [ 190 ] ; xx [ 241 ] = - xx [ 11 ] ; xx [ 242 ] = xx [ 13 ] ; xx [ 243 ] =
xx [ 18 ] ; pm_math_Vector3_cross_ra ( xx + 190 , xx + 241 , xx + 244 ) ; xx
[ 241 ] = xx [ 0 ] * ( xx [ 244 ] - xx [ 11 ] * xx [ 189 ] ) ; xx [ 242 ] =
xx [ 178 ] + ( xx [ 189 ] * xx [ 13 ] + xx [ 245 ] ) * xx [ 0 ] ; xx [ 243 ]
= ( xx [ 189 ] * xx [ 18 ] + xx [ 246 ] ) * xx [ 0 ] - xx [ 160 ] ; xx [ 11 ]
= xx [ 277 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 277 ] * xx [ 289 ] ; xx [ 18 ] =
xx [ 142 ] + xx [ 290 ] ; xx [ 159 ] = xx [ 11 ] ; xx [ 160 ] = - xx [ 13 ] ;
xx [ 161 ] = - xx [ 18 ] ; pm_math_Vector3_cross_ra ( xx + 368 , xx + 159 ,
xx + 244 ) ; xx [ 159 ] = ( xx [ 11 ] * xx [ 319 ] + xx [ 244 ] ) * xx [ 0 ]
- xx [ 289 ] ; xx [ 160 ] = xx [ 0 ] * ( xx [ 245 ] - xx [ 13 ] * xx [ 319 ]
) - xx [ 8 ] ; xx [ 161 ] = xx [ 0 ] * ( xx [ 246 ] - xx [ 18 ] * xx [ 319 ]
) ; xx [ 8 ] = xx [ 422 ] * xx [ 19 ] ; xx [ 11 ] = xx [ 422 ] * xx [ 106 ] ;
xx [ 13 ] = xx [ 158 ] + xx [ 108 ] ; xx [ 244 ] = xx [ 8 ] ; xx [ 245 ] = xx
[ 11 ] ; xx [ 246 ] = - xx [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 420 , xx
+ 244 , xx + 260 ) ; xx [ 244 ] = xx [ 106 ] + ( xx [ 419 ] * xx [ 8 ] + xx [
260 ] ) * xx [ 0 ] ; xx [ 245 ] = ( xx [ 419 ] * xx [ 11 ] + xx [ 261 ] ) *
xx [ 0 ] - xx [ 19 ] ; xx [ 246 ] = xx [ 0 ] * ( xx [ 262 ] - xx [ 13 ] * xx
[ 419 ] ) ; xx [ 8 ] = xx [ 430 ] * xx [ 110 ] ; xx [ 11 ] = xx [ 430 ] * xx
[ 309 ] ; xx [ 13 ] = xx [ 10 ] + xx [ 311 ] ; xx [ 260 ] = xx [ 8 ] ; xx [
261 ] = xx [ 11 ] ; xx [ 262 ] = - xx [ 13 ] ; pm_math_Vector3_cross_ra ( xx
+ 428 , xx + 260 , xx + 263 ) ; xx [ 260 ] = xx [ 309 ] + ( xx [ 427 ] * xx [
8 ] + xx [ 263 ] ) * xx [ 0 ] ; xx [ 261 ] = ( xx [ 427 ] * xx [ 11 ] + xx [
264 ] ) * xx [ 0 ] - xx [ 110 ] ; xx [ 262 ] = xx [ 0 ] * ( xx [ 265 ] - xx [
13 ] * xx [ 427 ] ) ; xx [ 8 ] = xx [ 438 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 438
] * xx [ 343 ] ; xx [ 11 ] = xx [ 115 ] + xx [ 355 ] ; xx [ 114 ] = xx [ 8 ]
; xx [ 115 ] = xx [ 10 ] ; xx [ 116 ] = - xx [ 11 ] ;
pm_math_Vector3_cross_ra ( xx + 436 , xx + 114 , xx + 263 ) ; xx [ 114 ] = xx
[ 343 ] + ( xx [ 435 ] * xx [ 8 ] + xx [ 263 ] ) * xx [ 0 ] ; xx [ 115 ] = (
xx [ 435 ] * xx [ 10 ] + xx [ 264 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 116 ] = xx
[ 0 ] * ( xx [ 265 ] - xx [ 11 ] * xx [ 435 ] ) ; xx [ 8 ] = xx [ 446 ] * xx
[ 2 ] ; xx [ 9 ] = xx [ 446 ] * xx [ 360 ] ; xx [ 10 ] = xx [ 131 ] - xx [
361 ] ; xx [ 263 ] = - xx [ 8 ] ; xx [ 264 ] = xx [ 9 ] ; xx [ 265 ] = xx [
10 ] ; pm_math_Vector3_cross_ra ( xx + 444 , xx + 263 , xx + 276 ) ; xx [ 263
] = xx [ 360 ] + xx [ 0 ] * ( xx [ 276 ] - xx [ 443 ] * xx [ 8 ] ) ; xx [ 264
] = xx [ 2 ] + ( xx [ 443 ] * xx [ 9 ] + xx [ 277 ] ) * xx [ 0 ] ; xx [ 265 ]
= ( xx [ 443 ] * xx [ 10 ] + xx [ 278 ] ) * xx [ 0 ] ; xx [ 2 ] = xx [ 77 ] +
xx [ 89 ] ; xx [ 8 ] = xx [ 78 ] * xx [ 143 ] ; xx [ 9 ] = xx [ 78 ] * xx [
88 ] ; xx [ 76 ] = - xx [ 2 ] ; xx [ 77 ] = xx [ 8 ] ; xx [ 78 ] = xx [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 83 , xx + 76 , xx + 89 ) ; xx [ 76 ] = xx [ 0
] * ( xx [ 89 ] - xx [ 93 ] * xx [ 2 ] ) ; xx [ 77 ] = xx [ 88 ] + ( xx [ 93
] * xx [ 8 ] + xx [ 90 ] ) * xx [ 0 ] ; xx [ 78 ] = xx [ 0 ] * ( xx [ 91 ] +
xx [ 93 ] * xx [ 9 ] ) - xx [ 143 ] ; xx [ 2 ] = xx [ 52 ] + xx [ 75 ] ; xx [
8 ] = xx [ 121 ] * xx [ 6 ] ; xx [ 9 ] = xx [ 121 ] * xx [ 92 ] ; xx [ 83 ] =
- xx [ 2 ] ; xx [ 84 ] = xx [ 8 ] ; xx [ 85 ] = xx [ 9 ] ;
pm_math_Vector3_cross_ra ( xx + 121 , xx + 83 , xx + 86 ) ; xx [ 83 ] = xx [
0 ] * ( xx [ 86 ] - xx [ 2 ] * xx [ 120 ] ) ; xx [ 84 ] = xx [ 92 ] + ( xx [
120 ] * xx [ 8 ] + xx [ 87 ] ) * xx [ 0 ] ; xx [ 85 ] = ( xx [ 120 ] * xx [ 9
] + xx [ 88 ] ) * xx [ 0 ] - xx [ 6 ] ; xx [ 2 ] = xx [ 48 ] + xx [ 73 ] ; xx
[ 6 ] = xx [ 412 ] * xx [ 45 ] ; xx [ 8 ] = xx [ 412 ] * xx [ 109 ] ; xx [ 9
] = - xx [ 2 ] ; xx [ 10 ] = xx [ 6 ] ; xx [ 11 ] = xx [ 8 ] ;
pm_math_Vector3_cross_ra ( xx + 412 , xx + 9 , xx + 73 ) ; xx [ 9 ] = xx [ 0
] * ( xx [ 73 ] - xx [ 2 ] * xx [ 411 ] ) ; xx [ 10 ] = xx [ 109 ] + ( xx [
411 ] * xx [ 6 ] + xx [ 74 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 411 ] * xx [ 8
] + xx [ 75 ] ) * xx [ 0 ] - xx [ 45 ] ; xx [ 2 ] = xx [ 54 ] - xx [ 44 ] ;
xx [ 6 ] = xx [ 452 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 452 ] * xx [ 107 ] ; xx [
52 ] = xx [ 2 ] ; xx [ 53 ] = xx [ 6 ] ; xx [ 54 ] = - xx [ 8 ] ;
pm_math_Vector3_cross_ra ( xx + 452 , xx + 52 , xx + 73 ) ; xx [ 52 ] = ( xx
[ 451 ] * xx [ 2 ] + xx [ 73 ] ) * xx [ 0 ] ; xx [ 53 ] = ( xx [ 451 ] * xx [
6 ] + xx [ 74 ] ) * xx [ 0 ] - xx [ 107 ] ; xx [ 54 ] = xx [ 0 ] * ( xx [ 75
] - xx [ 451 ] * xx [ 8 ] ) - xx [ 4 ] ; xx [ 2 ] = xx [ 37 ] - xx [ 132 ] ;
xx [ 4 ] = xx [ 168 ] * xx [ 38 ] ; xx [ 6 ] = xx [ 168 ] * xx [ 128 ] ; xx [
73 ] = xx [ 2 ] ; xx [ 74 ] = - xx [ 4 ] ; xx [ 75 ] = xx [ 6 ] ;
pm_math_Vector3_cross_ra ( xx + 168 , xx + 73 , xx + 86 ) ; xx [ 73 ] = ( xx
[ 167 ] * xx [ 2 ] + xx [ 86 ] ) * xx [ 0 ] ; xx [ 74 ] = xx [ 128 ] + xx [ 0
] * ( xx [ 87 ] - xx [ 167 ] * xx [ 4 ] ) ; xx [ 75 ] = xx [ 38 ] + ( xx [
167 ] * xx [ 6 ] + xx [ 88 ] ) * xx [ 0 ] ; xx [ 2 ] = xx [ 36 ] + xx [ 127 ]
; xx [ 4 ] = xx [ 190 ] * xx [ 1 ] ; xx [ 6 ] = xx [ 190 ] * xx [ 213 ] ; xx
[ 36 ] = - xx [ 2 ] ; xx [ 37 ] = xx [ 4 ] ; xx [ 38 ] = xx [ 6 ] ;
pm_math_Vector3_cross_ra ( xx + 190 , xx + 36 , xx + 86 ) ; xx [ 36 ] = xx [
0 ] * ( xx [ 86 ] - xx [ 2 ] * xx [ 189 ] ) ; xx [ 37 ] = xx [ 213 ] + ( xx [
189 ] * xx [ 4 ] + xx [ 87 ] ) * xx [ 0 ] ; xx [ 38 ] = ( xx [ 189 ] * xx [ 6
] + xx [ 88 ] ) * xx [ 0 ] - xx [ 1 ] ; xx [ 86 ] = - (
pm_math_Vector3_dot_ra ( xx + 257 , xx + 235 ) + pm_math_Vector3_dot_ra ( xx
+ 202 , xx + 196 ) + pm_math_Vector3_dot_ra ( xx + 313 , xx + 365 ) * xx [ 0
] + pm_math_Vector3_dot_ra ( xx + 394 , xx + 196 ) * inputDdot [ 2 ] +
pm_math_Vector3_dot_ra ( xx + 397 , xx + 196 ) * inputDdot [ 1 ] +
pm_math_Vector3_dot_ra ( xx + 415 , xx + 196 ) * inputDdot [ 0 ] +
pm_math_Vector3_dot_ra ( xx + 423 , xx + 196 ) * inputDdot [ 3 ] +
pm_math_Vector3_dot_ra ( xx + 431 , xx + 196 ) * inputDdot [ 4 ] + xx [ 199 ]
* inputDdot [ 5 ] + xx [ 199 ] * xx [ 21 ] + xx [ 145 ] * xx [ 23 ] + xx [
212 ] * xx [ 33 ] + pm_math_Vector3_dot_ra ( xx + 103 , xx + 235 ) *
inputDdot [ 8 ] + pm_math_Vector3_dot_ra ( xx + 111 , xx + 235 ) * inputDdot
[ 7 ] + pm_math_Vector3_dot_ra ( xx + 124 , xx + 235 ) * inputDdot [ 6 ] +
pm_math_Vector3_dot_ra ( xx + 134 , xx + 235 ) * inputDdot [ 9 ] +
pm_math_Vector3_dot_ra ( xx + 162 , xx + 235 ) * inputDdot [ 10 ] +
pm_math_Vector3_dot_ra ( xx + 447 , xx + 235 ) * inputDdot [ 11 ] + xx [ 230
] * xx [ 24 ] + xx [ 40 ] * xx [ 43 ] + xx [ 182 ] * xx [ 117 ] ) ; xx [ 87 ]
= - ( pm_math_Vector3_dot_ra ( xx + 146 , xx + 280 ) + pm_math_Vector3_dot_ra
( xx + 149 , xx + 269 ) + pm_math_Vector3_dot_ra ( xx + 152 , xx + 155 ) * xx
[ 0 ] + pm_math_Vector3_dot_ra ( xx + 171 , xx + 269 ) * inputDdot [ 2 ] +
pm_math_Vector3_dot_ra ( xx + 179 , xx + 269 ) * inputDdot [ 1 ] +
pm_math_Vector3_dot_ra ( xx + 183 , xx + 269 ) * inputDdot [ 0 ] +
pm_math_Vector3_dot_ra ( xx + 186 , xx + 269 ) * inputDdot [ 3 ] +
pm_math_Vector3_dot_ra ( xx + 193 , xx + 269 ) * inputDdot [ 4 ] + xx [ 272 ]
* inputDdot [ 5 ] + xx [ 272 ] * xx [ 21 ] + xx [ 266 ] * xx [ 23 ] + xx [
200 ] * xx [ 33 ] + pm_math_Vector3_dot_ra ( xx + 80 , xx + 280 ) * inputDdot
[ 8 ] + pm_math_Vector3_dot_ra ( xx + 208 , xx + 280 ) * inputDdot [ 7 ] +
pm_math_Vector3_dot_ra ( xx + 219 , xx + 280 ) * inputDdot [ 6 ] +
pm_math_Vector3_dot_ra ( xx + 222 , xx + 280 ) * inputDdot [ 9 ] +
pm_math_Vector3_dot_ra ( xx + 225 , xx + 280 ) * inputDdot [ 10 ] +
pm_math_Vector3_dot_ra ( xx + 231 , xx + 280 ) * inputDdot [ 11 ] + xx [ 275
] * xx [ 24 ] + xx [ 247 ] * xx [ 43 ] ) ; xx [ 88 ] = - (
pm_math_Vector3_dot_ra ( xx + 214 , xx + 297 ) + pm_math_Vector3_dot_ra ( xx
+ 238 , xx + 286 ) + pm_math_Vector3_dot_ra ( xx + 139 , xx + 241 ) * xx [ 0
] + pm_math_Vector3_dot_ra ( xx + 159 , xx + 286 ) * inputDdot [ 2 ] +
pm_math_Vector3_dot_ra ( xx + 244 , xx + 286 ) * inputDdot [ 1 ] +
pm_math_Vector3_dot_ra ( xx + 260 , xx + 286 ) * inputDdot [ 0 ] +
pm_math_Vector3_dot_ra ( xx + 114 , xx + 286 ) * inputDdot [ 3 ] +
pm_math_Vector3_dot_ra ( xx + 263 , xx + 286 ) * inputDdot [ 4 ] + xx [ 176 ]
* inputDdot [ 5 ] + xx [ 176 ] * xx [ 21 ] + xx [ 144 ] * xx [ 23 ] +
pm_math_Vector3_dot_ra ( xx + 76 , xx + 297 ) * inputDdot [ 8 ] +
pm_math_Vector3_dot_ra ( xx + 83 , xx + 297 ) * inputDdot [ 7 ] +
pm_math_Vector3_dot_ra ( xx + 9 , xx + 297 ) * inputDdot [ 6 ] +
pm_math_Vector3_dot_ra ( xx + 52 , xx + 297 ) * inputDdot [ 9 ] +
pm_math_Vector3_dot_ra ( xx + 73 , xx + 297 ) * inputDdot [ 10 ] +
pm_math_Vector3_dot_ra ( xx + 36 , xx + 297 ) * inputDdot [ 11 ] + xx [ 205 ]
* xx [ 24 ] + xx [ 207 ] * xx [ 43 ] + xx [ 130 ] * xx [ 117 ] ) ; memcpy (
xx + 73 , xx + 300 , 9 * sizeof ( double ) ) ; factorAndSolveSymmetric ( xx +
73 , 3 , xx + 8 , ii + 0 , xx + 86 , xx + 0 , xx + 103 ) ; xx [ 8 ] = xx [
199 ] * xx [ 0 ] + xx [ 272 ] * xx [ 1 ] + xx [ 176 ] * xx [ 2 ] - xx [ 35 ]
; xx [ 9 ] = xx [ 145 ] * xx [ 0 ] + xx [ 266 ] * xx [ 1 ] + xx [ 144 ] * xx
[ 2 ] - xx [ 32 ] ; xx [ 10 ] = xx [ 212 ] * xx [ 0 ] + xx [ 200 ] * xx [ 1 ]
- xx [ 17 ] ; solveSymmetricPosDef ( xx + 94 , xx + 8 , 3 , 1 , xx + 17 , xx
+ 35 ) ; xx [ 4 ] = xx [ 17 ] - xx [ 3 ] ; xx [ 3 ] = xx [ 18 ] - xx [ 22 ] ;
xx [ 6 ] = xx [ 19 ] - xx [ 31 ] ; xx [ 8 ] = xx [ 55 ] ; xx [ 9 ] = xx [ 58
] ; xx [ 10 ] = xx [ 61 ] ; xx [ 17 ] = xx [ 283 ] + xx [ 12 ] * xx [ 4 ] +
xx [ 5 ] * xx [ 3 ] + xx [ 26 ] ; xx [ 18 ] = xx [ 284 ] + xx [ 16 ] * xx [ 4
] + xx [ 46 ] * xx [ 3 ] + xx [ 7 ] ; xx [ 19 ] = xx [ 285 ] + xx [ 20 ] * xx
[ 4 ] + xx [ 6 ] + xx [ 15 ] ; xx [ 11 ] = xx [ 64 ] ; xx [ 12 ] = xx [ 67 ]
; xx [ 13 ] = xx [ 70 ] ; pm_math_Vector3_cross_ra ( xx + 17 , xx + 49 , xx +
20 ) ; xx [ 31 ] = xx [ 28 ] + xx [ 439 ] + xx [ 20 ] ; xx [ 32 ] = xx [ 29 ]
+ xx [ 440 ] + xx [ 21 ] ; xx [ 33 ] = xx [ 30 ] + xx [ 441 ] + xx [ 22 ] ;
xx [ 20 ] = xx [ 56 ] ; xx [ 21 ] = xx [ 59 ] ; xx [ 22 ] = xx [ 62 ] ; xx [
28 ] = xx [ 65 ] ; xx [ 29 ] = xx [ 68 ] ; xx [ 30 ] = xx [ 71 ] ; xx [ 35 ]
= xx [ 57 ] ; xx [ 36 ] = xx [ 60 ] ; xx [ 37 ] = xx [ 63 ] ; xx [ 41 ] = xx
[ 66 ] ; xx [ 42 ] = xx [ 69 ] ; xx [ 43 ] = xx [ 72 ] ; xx [ 44 ] = xx [ 230
] * xx [ 0 ] + xx [ 275 ] * xx [ 1 ] + xx [ 205 ] * xx [ 2 ] - xx [ 118 ] ;
xx [ 45 ] = xx [ 40 ] * xx [ 0 ] + xx [ 247 ] * xx [ 1 ] + xx [ 207 ] * xx [
2 ] - xx [ 119 ] ; xx [ 46 ] = xx [ 182 ] * xx [ 0 ] + xx [ 130 ] * xx [ 2 ]
- xx [ 25 ] ; solveSymmetricPosDef ( xx + 248 , xx + 44 , 3 , 1 , xx + 0 , xx
+ 23 ) ; deriv [ 0 ] = state [ 3 ] ; deriv [ 1 ] = state [ 4 ] ; deriv [ 2 ]
= state [ 5 ] ; deriv [ 3 ] = xx [ 4 ] ; deriv [ 4 ] = xx [ 3 ] ; deriv [ 5 ]
= xx [ 6 ] ; deriv [ 6 ] = state [ 9 ] ; deriv [ 7 ] = state [ 10 ] ; deriv [
8 ] = state [ 11 ] ; deriv [ 9 ] = xx [ 456 ] - ( pm_math_Vector3_dot_ra ( xx
+ 8 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx + 11 , xx + 31 ) ) ; deriv [ 10
] = xx [ 457 ] - ( pm_math_Vector3_dot_ra ( xx + 20 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 28 , xx + 31 ) ) ; deriv [ 11 ] = xx [ 458 ] -
( pm_math_Vector3_dot_ra ( xx + 35 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx
+ 41 , xx + 31 ) ) ; deriv [ 12 ] = state [ 15 ] ; deriv [ 13 ] = state [ 16
] ; deriv [ 14 ] = state [ 17 ] ; deriv [ 15 ] = xx [ 0 ] - xx [ 14 ] ; deriv
[ 16 ] = xx [ 1 ] - xx [ 34 ] ; deriv [ 17 ] = xx [ 2 ] - xx [ 47 ] ;
errorResult [ 0 ] = xx [ 27 ] ; return NULL ; } PmfMessageId
pp_43e6ab1_1_numJacPerturbLoBounds ( const RuntimeDerivedValuesBundle * rtdv
, const int * eqnEnableFlags , const double * state , const int * modeVector
, const double * input , const double * inputDot , const double * inputDdot ,
const double * discreteState , double * bounds , double * errorResult ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 2 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; (
void ) modeVector ; ( void ) input ; ( void ) inputDot ; ( void ) inputDdot ;
( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 1.0e-8 ; xx [ 1 ] =
1.0e-9 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] =
xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [ 0 ] ; bounds [ 5 ] =
xx [ 0 ] ; bounds [ 6 ] = xx [ 1 ] ; bounds [ 7 ] = xx [ 1 ] ; bounds [ 8 ] =
xx [ 1 ] ; bounds [ 9 ] = xx [ 1 ] ; bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ]
= xx [ 1 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] = xx [ 0 ] ; bounds [
14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16 ] = xx [ 0 ] ;
bounds [ 17 ] = xx [ 0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
PmfMessageId pp_43e6ab1_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx
[ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx
[ 1 ] ; bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx
[ 1 ] ; bounds [ 7 ] = xx [ 1 ] ; bounds [ 8 ] = xx [ 1 ] ; bounds [ 9 ] = xx
[ 1 ] ; bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] =
xx [ 0 ] ; bounds [ 13 ] = xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15
] = xx [ 1 ] ; bounds [ 16 ] = xx [ 1 ] ; bounds [ 17 ] = xx [ 1 ] ;
errorResult [ 0 ] = 0.0 ; return NULL ; }
