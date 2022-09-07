#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ModeloManual_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "ModeloManual.h"
#include "ModeloManual_capi.h"
#include "ModeloManual_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/TmpSignal ConversionAt_asyncqueue_inserted_for_To WorkspaceInport1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Ensamble robot/Integrator" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Ensamble robot/Integrator1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 3 , 4 , TARGET_STRING (
"ModeloManual/ROBOT SS/Subsystem/Vlineal" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"ModeloManual/Path Planning2/Kinematics1/Inverse-Kinematics/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"ModeloManual/Path Planning2/Kinematics1/Inverse-Kinematics/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"ModeloManual/ROBOT SS/Subsystem/PS-Simulink Converter1/EVAL_KEY/RESHAPE" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/RDBack/PS-Simulink Converter/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/RDFront/PS-Simulink Converter/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/RIBack/PS-Simulink Converter/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/RIFront/PS-Simulink Converter/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/ContactosRIB/PS-Simulink Converter6/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/ContactosRIB/PS-Simulink Converter7/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/contactosRDBack/PS-Simulink Converter1/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/contactosRDBack/PS-Simulink Converter2/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/contactosRDFront/PS-Simulink Converter2/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/contactosRDFront/PS-Simulink Converter3/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/contactosRIF/PS-Simulink Converter4/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
 "ModeloManual/ROBOT SS/Ensamble robot/ContactosRueas4/contactosRIF/PS-Simulink Converter5/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 24 , TARGET_STRING ( "ModeloManual/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 25 , TARGET_STRING (
"ModeloManual/Path Planning2/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 1
, 0 } , { 26 , TARGET_STRING ( "ModeloManual/Path Planning2/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 27 , TARGET_STRING (
"ModeloManual/ROBOT SS/Ensamble robot/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 28 , TARGET_STRING (
"ModeloManual/ROBOT SS/Ensamble robot/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 }
} ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 29 , TARGET_STRING ( "R"
) , 0 , 1 , 0 } , { 30 , TARGET_STRING ( "b" ) , 0 , 1 , 0 } , { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . knqf5e30e5 [ 0 ] , & rtB .
ksfafj13mt , & rtB . aksfqyz32i , & rtB . oxlvnfuzyk , & rtB . clrf4lofft , &
rtB . kq2r1vyna5 , & rtB . onco1xgcib [ 0 ] , & rtB . nuzsotb4ib [ 0 ] , &
rtB . iac3y10qzs [ 0 ] , & rtB . c5pepvzfj4 [ 0 ] , & rtB . jr4q3pg0aq [ 0 ]
, & rtB . cidkh4nob2 , & rtB . oy4oo2klou , & rtB . o0vqxz2tcj , & rtB .
lergc33bnh , & rtB . j01xkpuvzm , & rtB . olhvnbqglz , & rtB . dx10off45v , &
rtB . iyju2nutwb , & rtB . divivoibxh , & rtB . lbidkltark , & rtB .
j0lllcnryq , & rtB . kmewq5ke3l , & rtB . i2d3plpei2 , & rtP . Constant_Value
, & rtP . Constant_Value_bbzhu1cqle , & rtP . Constant1_Value , & rtP .
Integrator_IC , & rtP . Integrator1_IC , & rtP . R , & rtP . b , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 2 , 1 , 1 , 1 , 4 , 1 , 13 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 24 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 5 ,
rtModelParameters , 2 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1723281642U , 4049272105U , 61010799U , 3220399906U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * ModeloManual_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void ModeloManual_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
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
void ModeloManual_host_InitializeDataMapInfo (
ModeloManual_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
