#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "pp_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "pp.h"
#include "pp_capi.h"
#include "pp_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"pp/Controller" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 1 ,
TARGET_STRING ( "pp/Controller" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0
} , { 2 , 1 , TARGET_STRING ( "pp/Controller" ) , TARGET_STRING ( "" ) , 2 ,
0 , 1 , 0 , 0 } , { 3 , 1 , TARGET_STRING ( "pp/Controller" ) , TARGET_STRING
( "" ) , 3 , 0 , 0 , 0 , 0 } , { 4 , 1 , TARGET_STRING ( "pp/Controller" ) ,
TARGET_STRING ( "" ) , 4 , 0 , 2 , 0 , 0 } , { 5 , 1 , TARGET_STRING (
"pp/Controller" ) , TARGET_STRING ( "" ) , 5 , 0 , 2 , 0 , 0 } , { 6 , 1 ,
TARGET_STRING ( "pp/Controller" ) , TARGET_STRING ( "" ) , 6 , 0 , 2 , 0 , 0
} , { 7 , 1 , TARGET_STRING ( "pp/Controller" ) , TARGET_STRING ( "" ) , 7 ,
0 , 0 , 0 , 0 } , { 8 , 1 , TARGET_STRING ( "pp/Controller" ) , TARGET_STRING
( "" ) , 8 , 0 , 3 , 0 , 0 } , { 9 , 1 , TARGET_STRING ( "pp/Controller" ) ,
TARGET_STRING ( "" ) , 9 , 0 , 1 , 0 , 0 } , { 10 , 1 , TARGET_STRING (
"pp/Controller" ) , TARGET_STRING ( "" ) , 10 , 0 , 1 , 0 , 0 } , { 11 , 0 ,
TARGET_STRING ( "pp/Clock" ) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , {
12 , 0 , TARGET_STRING ( "pp/Solver Configuration/EVAL_KEY/INPUT_10_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_11_1_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 5 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_12_1_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 5 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_7_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_8_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/INPUT_9_1_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 ,
0 , 6 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"pp/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0 ,
7 , 0 , 1 } , { 26 , 3 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/MATLAB Function" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 27 , 4 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Transformation" ) , TARGET_STRING ( "" ) , 0 , 0 , 8
, 0 , 0 } , { 28 , 0 , TARGET_STRING ( "pp/TH Magic/Arm 1 Magic/Subtract1" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 }
, { 30 , 7 , TARGET_STRING ( "pp/TH Magic/Arm 2 Magic/Transformation" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 31 , 8 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Wrench Converter" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 32 , 0 , TARGET_STRING ( "pp/TH Magic/Arm 2 Magic/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 2 } , { 33 , 0 , TARGET_STRING (
"pp/Trajectory/Rotation2/FromWs" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 34 , 0 , TARGET_STRING ( "pp/Trajectory/Translation2/FromWs" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 37 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Mx" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 39 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/My" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 40 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Mz" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 41 , 2 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Inverse Kinematics/MATLAB System" ) , TARGET_STRING
( "" ) , 0 , 0 , 10 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 43 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 44 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 45 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Mx" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 46 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/My" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 47 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Mz" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 48 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 49 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 50 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 51 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Bx" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 52 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/By" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 53 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Bz" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 54 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Kx" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 55 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Ky" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 56 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Kz" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 2 } , { 57 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Mx" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/My" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Mz" ) , TARGET_STRING ( "" ) , 0 ,
0 , 4 , 0 , 1 } , { 60 , 6 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Inverse Kinematics/MATLAB System" ) , TARGET_STRING
( "" ) , 0 , 0 , 10 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 62 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 63 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 64 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Bx" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 65 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/By" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 66 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Bz" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 67 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Kx" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 68 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Ky" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 69 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Kz" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 2 } , { 70 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Mx" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/My" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 1 } , { 72 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Mz" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 1 } , { 73 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Unary Minus1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 74 , 0 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Unary Minus2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 75 , TARGET_STRING ( "pp/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 76 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Bias" ) , TARGET_STRING ( "Value" ) , 0 , 11 , 0 } ,
{ 77 , TARGET_STRING ( "pp/TH Magic/Arm 1 Magic/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 12 , 0 } , { 78 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Delay" ) , TARGET_STRING ( "InitialCondition" ) , 0
, 4 , 0 } , { 79 , TARGET_STRING ( "pp/TH Magic/Arm 2 Magic/Bias" ) ,
TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 80 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 12 , 0
} , { 81 , TARGET_STRING ( "pp/TH Magic/Arm 2 Magic/Delay" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 4 , 0 } , { 82 , TARGET_STRING (
"pp/Trajectory/Rotation/FromWs" ) , TARGET_STRING ( "Time0" ) , 0 , 13 , 0 }
, { 83 , TARGET_STRING ( "pp/Trajectory/Rotation/FromWs" ) , TARGET_STRING (
"Data0" ) , 0 , 14 , 0 } , { 84 , TARGET_STRING (
"pp/Trajectory/Rotation2/FromWs" ) , TARGET_STRING ( "Time0" ) , 0 , 15 , 0 }
, { 85 , TARGET_STRING ( "pp/Trajectory/Rotation2/FromWs" ) , TARGET_STRING (
"Data0" ) , 0 , 16 , 0 } , { 86 , TARGET_STRING (
"pp/Trajectory/Translation/FromWs" ) , TARGET_STRING ( "Time0" ) , 0 , 7 , 0
} , { 87 , TARGET_STRING ( "pp/Trajectory/Translation/FromWs" ) ,
TARGET_STRING ( "Data0" ) , 0 , 17 , 0 } , { 88 , TARGET_STRING (
"pp/Trajectory/Translation2/FromWs" ) , TARGET_STRING ( "Time0" ) , 0 , 18 ,
0 } , { 89 , TARGET_STRING ( "pp/Trajectory/Translation2/FromWs" ) ,
TARGET_STRING ( "Data0" ) , 0 , 19 , 0 } , { 90 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 91 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 92 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 93 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 94 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 95 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 96 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator3" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 97 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 98 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator4" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 99 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator4" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 100 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator5" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 101 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Discrete-Time Integrator5" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 102 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Bx" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 103 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/By" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 104 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Bz" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 105 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Kx" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 106 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Ky" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 107 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Kz" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 108 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Mx" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 109 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/My" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 110 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Impedance Control/Mz" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 111 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 112 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 113 ,
TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator1"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 114 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 115 ,
TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator2"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 116 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 117 ,
TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator3"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 118 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 119 ,
TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator4"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 120 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 121 ,
TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator5"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 122 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Discrete-Time Integrator5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 123 ,
TARGET_STRING ( "pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Bx" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 124 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/By" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 125 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Bz" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 126 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Kx" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 127 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Ky" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 128 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Kz" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 129 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Mx" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 130 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/My" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 131 , TARGET_STRING (
"pp/TH Magic/Arm 1 Magic/Rotational Impedance Control/Mz" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 132 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 133 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 134 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 135 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 136 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 137 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 138 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator3" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 139 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 140 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator4" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 141 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator4" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 142 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator5" ) ,
TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 143 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Discrete-Time Integrator5" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 144 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Bx" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 145 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/By" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 146 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Bz" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 147 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Kx" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 148 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Ky" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 149 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Kz" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 150 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Mx" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 151 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/My" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 152 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Impedance Control/Mz" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 153 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 154 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 155 ,
TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator1"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 156 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 157 ,
TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator2"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 158 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 159 ,
TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator3"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 160 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator3"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 161 ,
TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator4"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 162 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 163 ,
TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator5"
) , TARGET_STRING ( "gainval" ) , 0 , 4 , 0 } , { 164 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Discrete-Time Integrator5"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 165 ,
TARGET_STRING ( "pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Bx" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 166 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/By" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 167 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Bz" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 168 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Kx" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 169 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Ky" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 170 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Kz" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 171 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Mx" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 172 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/My" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 173 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Rotational Impedance Control/Mz" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 174 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Signal Builder/FromWs" ) , TARGET_STRING ( "Time0" )
, 0 , 20 , 0 } , { 175 , TARGET_STRING (
"pp/TH Magic/Arm 2 Magic/Signal Builder/FromWs" ) , TARGET_STRING ( "Data0" )
, 0 , 21 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . a53vj1gwki [ 0 ] , & rtB .
n5plh5my25 [ 0 ] , & rtB . ka2qvllgio [ 0 ] , & rtB . emkev14wx5 [ 0 ] , &
rtB . dnumjapkrr [ 0 ] , & rtB . n1x3q5r3km [ 0 ] , & rtB . bqwy3enhc1 [ 0 ]
, & rtB . d2gmderclu [ 0 ] , & rtB . anfyf3f0se [ 0 ] , & rtB . oqf350egiy [
0 ] , & rtB . lw2nui0kqj [ 0 ] , & rtB . mz0hxgwqhl , & rtB . kay4eihbv3 [ 0
] , & rtB . n12tcfek0v [ 0 ] , & rtB . j3iozjgadg [ 0 ] , & rtB . fodbt3qoit
[ 0 ] , & rtB . cgdw5usgs2 [ 0 ] , & rtB . itk1tzd05y [ 0 ] , & rtB .
arfjjmxolk [ 0 ] , & rtB . hnth4pq521 [ 0 ] , & rtB . lktiyc0abo [ 0 ] , &
rtB . hwb0fhnhyj [ 0 ] , & rtB . pyqiljkwsr [ 0 ] , & rtB . gge2baxpst [ 0 ]
, & rtB . kxvph4adkr [ 0 ] , & rtB . pcwdl5jswd [ 0 ] , & rtB . ha4lwepn1f [
0 ] , & rtB . flhn5odxwk . jeolgcmssj [ 0 ] , & rtB . mbaykyotfu [ 0 ] , &
rtB . jodlsffaav [ 0 ] , & rtB . fcodrholju . jeolgcmssj [ 0 ] , & rtB .
nlljfedtl4 [ 0 ] , & rtB . lqhmzc4iyx [ 0 ] , & rtB . ocwp35u3pk [ 0 ] , &
rtB . e5ryewx4xp [ 0 ] , & rtB . f1wefakszv , & rtB . l5krbabg4d , & rtB .
dgxu5zatl2 , & rtB . etinqsqgwm , & rtB . oybfikvjov , & rtB . ezct1usiup , &
rtB . e12xzvaqlra . alhmufu0yv [ 0 ] , & rtB . cjjpsdh0ci , & rtB .
e1iv3qcjfw , & rtB . f21sygsmjw , & rtB . aqna2gz1ds , & rtB . at5fedp10d , &
rtB . leiklejyk1 , & rtB . l5ehte0yu5 , & rtB . axvx5onbcx , & rtB .
o34qpbtn0y , & rtB . komus0gcso , & rtB . kayk4zho1z , & rtB . fhugj1l3qe , &
rtB . cxs1ehjvbx , & rtB . enhmwan3ns , & rtB . moduzw1lx4 , & rtB .
n44n3mb43k , & rtB . kdz4sa51a2 , & rtB . fuszcwwkvv , & rtB . g25aonyhee .
alhmufu0yv [ 0 ] , & rtB . gms5jrejo1 , & rtB . g1ivuzn5or , & rtB .
golkvscg5k , & rtB . ijkfpvfmzk , & rtB . jddyf4dq55 , & rtB . g5i5pwgazj , &
rtB . ad2m20gzqt , & rtB . ky052i5er3 , & rtB . flst3qrajz , & rtB .
en5e3b0kmw , & rtB . ajdgrxcuuj , & rtB . lc0n30aw03 , & rtB . o3esw0pawl , &
rtB . ar4x41ndqa , & rtP . Constant_Value [ 0 ] , & rtP . Bias_Value [ 0 ] ,
& rtP . Constant_Value_gzdzpzihxe [ 0 ] , & rtP . Delay_InitialCondition , &
rtP . Bias_Value_faygct0s2b [ 0 ] , & rtP . Constant_Value_f1t4kl0x5v [ 0 ] ,
& rtP . Delay_InitialCondition_h32mlgftaf , & rtP . FromWs_Time0_dzcgme01l0 [
0 ] , & rtP . FromWs_Data0_gnhlpqyxpe [ 0 ] , & rtP . FromWs_Time0_mwegrphi2o
[ 0 ] , & rtP . FromWs_Data0_bwp1rplazj [ 0 ] , & rtP .
FromWs_Time0_fpralrmcvh [ 0 ] , & rtP . FromWs_Data0_bqye40vj0v [ 0 ] , & rtP
. FromWs_Time0 [ 0 ] , & rtP . FromWs_Data0 [ 0 ] , & rtP .
DiscreteTimeIntegrator_gainval_bqrugbnomn , & rtP .
DiscreteTimeIntegrator_IC_aorocmjnnc , & rtP .
DiscreteTimeIntegrator1_gainval , & rtP . DiscreteTimeIntegrator1_IC , & rtP
. DiscreteTimeIntegrator2_gainval_pc04oat5qt , & rtP .
DiscreteTimeIntegrator2_IC_h4ggyv4v21 , & rtP .
DiscreteTimeIntegrator3_gainval , & rtP . DiscreteTimeIntegrator3_IC , & rtP
. DiscreteTimeIntegrator4_gainval_evjywzf5xi , & rtP .
DiscreteTimeIntegrator4_IC_bu1dngwxgl , & rtP .
DiscreteTimeIntegrator5_gainval , & rtP . DiscreteTimeIntegrator5_IC , & rtP
. Bx_Gain , & rtP . By_Gain , & rtP . Bz_Gain , & rtP . Kx_Gain , & rtP .
Ky_Gain , & rtP . Kz_Gain , & rtP . Mx_Gain , & rtP . My_Gain , & rtP .
Mz_Gain , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator_IC , & rtP .
DiscreteTimeIntegrator1_gainval_ewt1b41uct , & rtP .
DiscreteTimeIntegrator1_IC_mmztbewik4 , & rtP .
DiscreteTimeIntegrator2_gainval , & rtP . DiscreteTimeIntegrator2_IC , & rtP
. DiscreteTimeIntegrator3_gainval_enrtoduzvs , & rtP .
DiscreteTimeIntegrator3_IC_bfgbvvrang , & rtP .
DiscreteTimeIntegrator4_gainval , & rtP . DiscreteTimeIntegrator4_IC , & rtP
. DiscreteTimeIntegrator5_gainval_hcdzw0pxjl , & rtP .
DiscreteTimeIntegrator5_IC_dwq35bos2m , & rtP . Bx_Gain_dheugbfk0n , & rtP .
By_Gain_cppco4mjvy , & rtP . Bz_Gain_oi02ukprz0 , & rtP . Kx_Gain_oord1bn5tk
, & rtP . Ky_Gain_mrgiolqcuy , & rtP . Kz_Gain_k51k0wreuu , & rtP .
Mx_Gain_lkbxzy4zcx , & rtP . My_Gain_hrp3lvoreh , & rtP . Mz_Gain_mdbt5ypr1k
, & rtP . DiscreteTimeIntegrator_gainval_arhh4ywx41 , & rtP .
DiscreteTimeIntegrator_IC_ho0ck4cozt , & rtP .
DiscreteTimeIntegrator1_gainval_oqjikpnyqd , & rtP .
DiscreteTimeIntegrator1_IC_cgmsovkfs2 , & rtP .
DiscreteTimeIntegrator2_gainval_mru0uvxpda , & rtP .
DiscreteTimeIntegrator2_IC_ly22xqd5qq , & rtP .
DiscreteTimeIntegrator3_gainval_jbyzgv51qt , & rtP .
DiscreteTimeIntegrator3_IC_iotuu4egg5 , & rtP .
DiscreteTimeIntegrator4_gainval_ka5z4lhm2t , & rtP .
DiscreteTimeIntegrator4_IC_ghkub0qpne , & rtP .
DiscreteTimeIntegrator5_gainval_mzosb4boys , & rtP .
DiscreteTimeIntegrator5_IC_ndnh2qpnoo , & rtP . Bx_Gain_nwa0gs3mlk , & rtP .
By_Gain_khzacun3xg , & rtP . Bz_Gain_h3x1lv12d0 , & rtP . Kx_Gain_jnwygpt15o
, & rtP . Ky_Gain_oq5c1cqtk1 , & rtP . Kz_Gain_p2xgpr45i5 , & rtP .
Mx_Gain_js3woskvp0 , & rtP . My_Gain_hdpbuksf2w , & rtP . Mz_Gain_hxseeguaop
, & rtP . DiscreteTimeIntegrator_gainval_f1m0x5aaah , & rtP .
DiscreteTimeIntegrator_IC_bany3i5ckr , & rtP .
DiscreteTimeIntegrator1_gainval_k0tywldiut , & rtP .
DiscreteTimeIntegrator1_IC_lfcgd1m32e , & rtP .
DiscreteTimeIntegrator2_gainval_m5icpofl44 , & rtP .
DiscreteTimeIntegrator2_IC_aj2g4mbo2m , & rtP .
DiscreteTimeIntegrator3_gainval_e0sgkyvmac , & rtP .
DiscreteTimeIntegrator3_IC_mepeuuspom , & rtP .
DiscreteTimeIntegrator4_gainval_gg2tu1ivfs , & rtP .
DiscreteTimeIntegrator4_IC_dzcpbao03e , & rtP .
DiscreteTimeIntegrator5_gainval_gpu3xgwyyp , & rtP .
DiscreteTimeIntegrator5_IC_jzt432kxca , & rtP . Bx_Gain_n2c2zc5fut , & rtP .
By_Gain_gzq4wqubv2 , & rtP . Bz_Gain_e0agfihwsa , & rtP . Kx_Gain_cmgxch1a1l
, & rtP . Ky_Gain_mqjlhklks4 , & rtP . Kz_Gain_asqeevkcou , & rtP .
Mx_Gain_awidn5sofk , & rtP . My_Gain_pjfuxtoldg , & rtP . Mz_Gain_cvkeec532r
, & rtP . FromWs_Time0_dgntxkplur [ 0 ] , & rtP . FromWs_Data0_n4fvl010iy [ 0
] , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_SCALAR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , {
rtwCAPI_VECTOR , 22 , 2 , 0 } , { rtwCAPI_VECTOR , 24 , 2 , 0 } , {
rtwCAPI_VECTOR , 26 , 2 , 0 } , { rtwCAPI_VECTOR , 28 , 2 , 0 } , {
rtwCAPI_VECTOR , 30 , 2 , 0 } , { rtwCAPI_VECTOR , 32 , 2 , 0 } , {
rtwCAPI_VECTOR , 34 , 2 , 0 } , { rtwCAPI_VECTOR , 36 , 2 , 0 } , {
rtwCAPI_VECTOR , 38 , 2 , 0 } , { rtwCAPI_VECTOR , 40 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 6 , 1 , 3 , 3 , 16 , 1 , 6 , 16 , 1 , 1
, 4 , 1 , 40 , 1 , 18 , 1 , 4 , 4 , 3 , 1 , 1 , 3 , 1 , 6 , 10 , 1 , 60 , 1 ,
160 , 1 , 960 , 1 , 108 , 1 , 240 , 1 , 1440 , 1 , 8 , 1 , 24 , 1 } ; static
const real_T rtcapiStoredFloats [ ] = { 0.0005 , 0.0 , 0.0001 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 75 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 101 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 3922201157U , 2136595032U , 2309620053U ,
746144858U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * pp_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void pp_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void pp_host_InitializeDataMapInfo ( pp_host_DataMapInfo_T * dataMap , const
char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
