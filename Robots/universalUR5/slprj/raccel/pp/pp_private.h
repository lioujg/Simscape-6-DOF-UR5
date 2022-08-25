#ifndef RTW_HEADER_pp_private_h_
#define RTW_HEADER_pp_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "pp.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)   (((v1)==(v2))?((double)(v1)):  (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?   muDoubleScalarFloor((v) + 0.5) :   muDoubleScalarCeil((v) - 0.5) )
#endif
extern int32_T div_s32_floor ( int32_T numerator , int32_T denominator ) ;
extern void gtzl2i5aq1 ( nblp1l3k1r * localDW ) ; extern void e12xzvaqlr (
const real_T mqv242vug5 [ 16 ] , const real_T ag1boeklhp [ 6 ] , const real_T
dxbyy3woac [ 6 ] , l4jutbn5rh * localB , nblp1l3k1r * localDW ) ; extern void
izdy54u2i4 ( at2pac1xxo * localDW ) ; extern void pcpgrvhkl5 ( const real_T
a2w3ged0pt [ 3 ] , real_T dqh2gtxivb , real_T a4g4ofym0l , real_T gi1nvah2lu
, oioqpqodvo * localB , at2pac1xxo * localDW ) ; extern void pyu1p0gkum (
nblp1l3k1r * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
