#ifndef RTW_HEADER_ModeloManual_h_
#define RTW_HEADER_ModeloManual_h_
#ifndef ModeloManual_COMMON_INCLUDES_
#define ModeloManual_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "ModeloManual_836bb176_1_gateway.h"
#endif
#include "ModeloManual_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME ModeloManual
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (24) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (23)   
#elif NCSTATES != 23
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
typedef struct { real_T ksfafj13mt ; real_T c5pepvzfj4 [ 4 ] ; real_T
iac3y10qzs [ 4 ] ; real_T aksfqyz32i ; real_T onco1xgcib [ 4 ] ; real_T
nuzsotb4ib [ 4 ] ; real_T jr4q3pg0aq [ 13 ] ; real_T o0vqxz2tcj ; real_T
oy4oo2klou ; real_T j01xkpuvzm ; real_T lergc33bnh ; real_T dx10off45v ;
real_T olhvnbqglz ; real_T divivoibxh ; real_T iyju2nutwb ; real_T j0lllcnryq
; real_T lbidkltark ; real_T i2d3plpei2 ; real_T kmewq5ke3l ; real_T
knqf5e30e5 [ 2 ] ; real_T cidkh4nob2 ; real_T kq2r1vyna5 ; real_T clrf4lofft
; real_T oxlvnfuzyk ; } B ; typedef struct { real_T pjdconnqvm ; real_T
fiwdzkchpx ; real_T hndb4x0ghg ; real_T me5ominovk ; real_T as4qahfhif ;
real_T n0o33n3yyv ; real_T pka1ubyjzx ; real_T jt1lrvtfij ; real_T fhxznkufax
; real_T mwa4o4jdno ; void * gk3dbr3n2o ; void * nxm0q2xh1b ; void *
jszlu0gruu ; void * mlbeu1lvta ; void * nftj3j1dob ; void * djzm003fix ; void
* dsyf2uad12 ; void * fbvz2vnuy2 ; void * ergn1nqgp2 ; void * b0hbltyvr0 ;
struct { void * LoggedData ; } kimpigczyd ; struct { void * LoggedData [ 4 ]
; } i4xxfiquan ; struct { void * AQHandles ; } d4ltmnn34c ; struct { void *
LoggedData ; } bkjuqkykdd ; struct { void * LoggedData ; } jdlmr21ktv ; void
* g1z0etuw1l ; void * jtcjvnfzea ; void * huk2t00hf4 ; struct { void *
LoggedData [ 2 ] ; } nazofhp4nz ; int_T lqptaqynx5 ; int_T lso4t1iv02 ;
boolean_T oey1b4fjv1 ; boolean_T lszkdt1jfp ; } DW ; typedef struct { real_T
h2ots2f51e ; real_T bcg2nteokz [ 2 ] ; real_T bo4z5n042v [ 2 ] ; real_T
hloicxewzp ; real_T c3cicdgv5i [ 2 ] ; real_T conse0bmpf [ 2 ] ; real_T
h3rtzkfwch [ 13 ] ; } X ; typedef struct { real_T h2ots2f51e ; real_T
bcg2nteokz [ 2 ] ; real_T bo4z5n042v [ 2 ] ; real_T hloicxewzp ; real_T
c3cicdgv5i [ 2 ] ; real_T conse0bmpf [ 2 ] ; real_T h3rtzkfwch [ 13 ] ; }
XDot ; typedef struct { boolean_T h2ots2f51e ; boolean_T bcg2nteokz [ 2 ] ;
boolean_T bo4z5n042v [ 2 ] ; boolean_T hloicxewzp ; boolean_T c3cicdgv5i [ 2
] ; boolean_T conse0bmpf [ 2 ] ; boolean_T h3rtzkfwch [ 13 ] ; } XDis ;
typedef struct { real_T h2ots2f51e ; real_T bcg2nteokz [ 2 ] ; real_T
bo4z5n042v [ 2 ] ; real_T hloicxewzp ; real_T c3cicdgv5i [ 2 ] ; real_T
conse0bmpf [ 2 ] ; real_T h3rtzkfwch [ 13 ] ; } CStateAbsTol ; typedef struct
{ real_T h2ots2f51e ; real_T bcg2nteokz [ 2 ] ; real_T bo4z5n042v [ 2 ] ;
real_T hloicxewzp ; real_T c3cicdgv5i [ 2 ] ; real_T conse0bmpf [ 2 ] ;
real_T h3rtzkfwch [ 13 ] ; } CXPtMin ; typedef struct { real_T h2ots2f51e ;
real_T bcg2nteokz [ 2 ] ; real_T bo4z5n042v [ 2 ] ; real_T hloicxewzp ;
real_T c3cicdgv5i [ 2 ] ; real_T conse0bmpf [ 2 ] ; real_T h3rtzkfwch [ 13 ]
; } CXPtMax ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T R ; real_T b ; real_T Integrator_IC ; real_T
Integrator1_IC ; real_T Constant_Value ; real_T Constant_Value_bbzhu1cqle ;
real_T Constant1_Value ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray
* mr_ModeloManual_GetDWork ( ) ; extern void mr_ModeloManual_SetDWork ( const
mxArray * ssDW ) ; extern mxArray *
mr_ModeloManual_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * ModeloManual_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
