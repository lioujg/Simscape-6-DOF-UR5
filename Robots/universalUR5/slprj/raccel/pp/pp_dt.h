#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_HdYxdoyG23cZbPWKvQzh3D" , 14 ,
512 } , { "struct_I2eLQyxu98dfwtJDNtskyD" , 15 , 800 } , {
"struct_cKQSZl3e1iurDV3fYO50dD" , 16 , 14928 } , {
"struct_j29BDD3GtugYMsepf4x9iH" , 17 , 72 } , { "ikblock_info_bus" , 18 , 24
} , { "a3umz4zmr0" , 19 , 22504 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( void * ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( struct_HdYxdoyG23cZbPWKvQzh3D ) , sizeof (
struct_I2eLQyxu98dfwtJDNtskyD ) , sizeof ( struct_cKQSZl3e1iurDV3fYO50dD ) ,
sizeof ( struct_j29BDD3GtugYMsepf4x9iH ) , sizeof ( ikblock_info_bus ) ,
sizeof ( a3umz4zmr0 ) } ; static const char_T * rtDataTypeNames [ ] = {
"real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "struct_HdYxdoyG23cZbPWKvQzh3D" ,
"struct_I2eLQyxu98dfwtJDNtskyD" , "struct_cKQSZl3e1iurDV3fYO50dD" ,
"struct_j29BDD3GtugYMsepf4x9iH" , "ikblock_info_bus" , "a3umz4zmr0" } ;
static DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB .
e5ryewx4xp [ 0 ] ) , 0 , 0 , 376 } , { ( char_T * ) ( & rtB . fcodrholju .
jeolgcmssj [ 0 ] ) , 0 , 0 , 16 } , { ( char_T * ) ( & rtB . g25aonyhee .
alhmufu0yv [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtB . flhn5odxwk .
jeolgcmssj [ 0 ] ) , 0 , 0 , 16 } , { ( char_T * ) ( & rtB . e12xzvaqlra .
alhmufu0yv [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtDW . meaqqr1ua3 ) , 0
, 0 , 278 } , { ( char_T * ) ( & rtDW . factggsf10 . TimePtr ) , 11 , 0 , 43
} , { ( char_T * ) ( & rtDW . cbdib2svjf [ 0 ] ) , 10 , 0 , 225 } , { (
char_T * ) ( & rtDW . nkznjpj2u5 ) , 8 , 0 , 4 } , { ( char_T * ) ( & rtDW .
fcodrholju . eyc0ugbpip [ 0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtDW .
g25aonyhee . ajal1iwi1z ) , 19 , 0 , 1 } , { ( char_T * ) ( & rtDW .
g25aonyhee . aqlkdng0y4 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtDW .
g25aonyhee . lhjucr5zrp ) , 7 , 0 , 632 } , { ( char_T * ) ( & rtDW .
g25aonyhee . kikz1keduf ) , 8 , 0 , 8 } , { ( char_T * ) ( & rtDW .
flhn5odxwk . eyc0ugbpip [ 0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtDW .
e12xzvaqlra . ajal1iwi1z ) , 19 , 0 , 1 } , { ( char_T * ) ( & rtDW .
e12xzvaqlra . aqlkdng0y4 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtDW .
e12xzvaqlra . lhjucr5zrp ) , 7 , 0 , 632 } , { ( char_T * ) ( & rtDW .
e12xzvaqlra . kikz1keduf ) , 8 , 0 , 8 } } ; static DataTypeTransitionTable
rtBTransTable = { 19U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . FromWs_Time0 [ 0 ] ) , 0 , 0
, 3135 } } ; static DataTypeTransitionTable rtPTransTable = { 1U ,
rtPTransitions } ;
