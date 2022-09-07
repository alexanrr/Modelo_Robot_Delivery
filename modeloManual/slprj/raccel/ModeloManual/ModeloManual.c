#include "ModeloManual.h"
#include "rtwtypes.h"
#include <string.h>
#include "mwmathutil.h"
#include <stddef.h>
#include "ModeloManual_private.h"
#include "rt_logging_mmi.h"
#include "ModeloManual_capi.h"
#include "ModeloManual_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "9.7 (R2022a) 13-Nov-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct
* S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlInitialize ( void ) { rtX . h2ots2f51e = rtP .
Integrator_IC ; rtX . hloicxewzp = rtP . Integrator1_IC ; } void MdlStart (
void ) { CXPtMax * _rtXPerturbMax ; CXPtMin * _rtXPerturbMin ;
NeModelParameters modelParameters ; NeModelParameters modelParameters_p ;
NeslSimulationData * simulationData ; NeslSimulator * tmp ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p
; char * msg ; char * msg_e ; char * msg_p ; real_T tmp_m [ 16 ] ; real_T
time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 5 ] ; boolean_T tmp_p ;
boolean_T val ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Mux" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars (
"Mux" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ModeloManual/ROBOT SS/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Mux" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 2 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . d4ltmnn34c . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "be6fb778-c9be-4a61-9759-ae9ab60f8304" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "kg*m/s^2" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . d4ltmnn34c . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . d4ltmnn34c . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . d4ltmnn34c . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . d4ltmnn34c .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . d4ltmnn34c . AQHandles ,
ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
d4ltmnn34c . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
d4ltmnn34c . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . d4ltmnn34c . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"contacto" ) ; sdiRegisterWksVariable ( rtDW . d4ltmnn34c . AQHandles ,
varName , "timeseries" ) ; sdiFreeLabel ( varName ) ; } } } } } tmp =
nesl_lease_simulator ( "ModeloManual/ROBOT SS/Solver Configuration_1" , 0 , 0
) ; rtDW . gk3dbr3n2o = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
gk3dbr3n2o ) ; if ( tmp_p ) { ModeloManual_836bb176_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "ModeloManual/ROBOT SS/Solver Configuration_1" , 0 , 0
) ; rtDW . gk3dbr3n2o = ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP (
rtS , "ModeloManual/ROBOT SS/Solver Configuration_100" , ( void * * ) ( &
rtDW . gk3dbr3n2o ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . nxm0q2xh1b = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . jszlu0gruu = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverTolerance = 0.001 ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mVariableStepSolver = true ; modelParameters . mIsUsingODEN = false ;
modelParameters . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters . mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0
; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.84425118E+8 ; modelParameters . mZcDisabled = false
; tmp_e = 0.001 ; modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters .
mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters . mIsUsingODEN
= tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; if (
tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p
&& ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val
; modelParameters . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jszlu0gruu ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . gk3dbr3n2o , &
modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . nxm0q2xh1b ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 13 ;
simulationData -> mData -> mContStates . mX = & rtX . h3rtzkfwch [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . fhxznkufax ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
lqptaqynx5 ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . c5pepvzfj4 [ 0 ] ; tmp_m [ 1 ] = rtB . c5pepvzfj4 [ 1 ] ;
tmp_m [ 2 ] = rtB . c5pepvzfj4 [ 2 ] ; tmp_m [ 3 ] = rtB . c5pepvzfj4 [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . iac3y10qzs [ 0 ] ; tmp_m [ 5 ] = rtB .
iac3y10qzs [ 1 ] ; tmp_m [ 6 ] = rtB . iac3y10qzs [ 2 ] ; tmp_m [ 7 ] = rtB .
iac3y10qzs [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . onco1xgcib [ 0 ] ;
tmp_m [ 9 ] = rtB . onco1xgcib [ 1 ] ; tmp_m [ 10 ] = rtB . onco1xgcib [ 2 ]
; tmp_m [ 11 ] = rtB . onco1xgcib [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . nuzsotb4ib [ 0 ] ; tmp_m [ 13 ] = rtB . nuzsotb4ib [ 1 ] ; tmp_m [ 14 ]
= rtB . nuzsotb4ib [ 2 ] ; tmp_m [ 15 ] = rtB . nuzsotb4ib [ 3 ] ; tmp_g [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 13 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> h3rtzkfwch
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 13 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> h3rtzkfwch [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jszlu0gruu ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. gk3dbr3n2o , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus (
rtS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"ModeloManual/ROBOT SS/Solver Configuration_1" , 1 , 0 ) ; rtDW . djzm003fix
= ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . djzm003fix ) ; if ( tmp_p
) { ModeloManual_836bb176_1_gateway ( ) ; tmp = nesl_lease_simulator (
"ModeloManual/ROBOT SS/Solver Configuration_1" , 1 , 0 ) ; rtDW . djzm003fix
= ( void * ) tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"ModeloManual/ROBOT SS/Solver Configuration_110" , ( void * * ) ( & rtDW .
djzm003fix ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . dsyf2uad12 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . fbvz2vnuy2 = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverTolerance = 0.001 ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mVariableStepSolver = true ; modelParameters_p . mIsUsingODEN = false ;
modelParameters_p . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters_p . mFixedStepSize = 0.001 ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 5.84425118E+8 ; modelParameters_p . mZcDisabled =
false ; tmp_e = 0.001 ; modelParameters_p . mSolverTolerance = tmp_e ; tmp_e
= 0.0 ; modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ;
modelParameters_p . mVariableStepSolver = tmp_p ; tmp_p = false ;
modelParameters_p . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fbvz2vnuy2 ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . djzm003fix , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { NeslSimulationData
* simulationData ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_p ; real_T fhj5jb2zox [ 36 ] ; real_T tmp_i [ 29 ] ;
real_T tmp [ 16 ] ; real_T time ; real_T time_e ; real_T time_i ; real_T
time_p ; int32_T tmp_e ; int_T tmp_m [ 6 ] ; int_T tmp_p [ 5 ] ; boolean_T
first_output ; rtB . ksfafj13mt = rtX . h2ots2f51e ; if ( rtDW . fiwdzkchpx
== 0.0 ) { rtDW . fiwdzkchpx = 1.0 ; rtX . bcg2nteokz [ 0 ] = rtB .
ksfafj13mt ; rtX . bcg2nteokz [ 1 ] = 0.0 ; } rtB . c5pepvzfj4 [ 0 ] = rtX .
bcg2nteokz [ 0 ] ; rtB . c5pepvzfj4 [ 1 ] = rtX . bcg2nteokz [ 1 ] ; rtB .
c5pepvzfj4 [ 2 ] = ( ( rtB . ksfafj13mt - rtX . bcg2nteokz [ 0 ] ) * 1000.0 -
2.0 * rtX . bcg2nteokz [ 1 ] ) * 1000.0 ; rtB . c5pepvzfj4 [ 3 ] = 0.0 ; if (
rtDW . me5ominovk == 0.0 ) { rtDW . me5ominovk = 1.0 ; rtX . bo4z5n042v [ 0 ]
= rtB . ksfafj13mt ; rtX . bo4z5n042v [ 1 ] = 0.0 ; } rtB . iac3y10qzs [ 0 ]
= rtX . bo4z5n042v [ 0 ] ; rtB . iac3y10qzs [ 1 ] = rtX . bo4z5n042v [ 1 ] ;
rtB . iac3y10qzs [ 2 ] = ( ( rtB . ksfafj13mt - rtX . bo4z5n042v [ 0 ] ) *
1000.0 - 2.0 * rtX . bo4z5n042v [ 1 ] ) * 1000.0 ; rtB . iac3y10qzs [ 3 ] =
0.0 ; rtB . aksfqyz32i = rtX . hloicxewzp ; if ( rtDW . n0o33n3yyv == 0.0 ) {
rtDW . n0o33n3yyv = 1.0 ; rtX . c3cicdgv5i [ 0 ] = rtB . aksfqyz32i ; rtX .
c3cicdgv5i [ 1 ] = 0.0 ; } rtB . onco1xgcib [ 0 ] = rtX . c3cicdgv5i [ 0 ] ;
rtB . onco1xgcib [ 1 ] = rtX . c3cicdgv5i [ 1 ] ; rtB . onco1xgcib [ 2 ] = (
( rtB . aksfqyz32i - rtX . c3cicdgv5i [ 0 ] ) * 1000.0 - 2.0 * rtX .
c3cicdgv5i [ 1 ] ) * 1000.0 ; rtB . onco1xgcib [ 3 ] = 0.0 ; if ( rtDW .
jt1lrvtfij == 0.0 ) { rtDW . jt1lrvtfij = 1.0 ; rtX . conse0bmpf [ 0 ] = rtB
. aksfqyz32i ; rtX . conse0bmpf [ 1 ] = 0.0 ; } rtB . nuzsotb4ib [ 0 ] = rtX
. conse0bmpf [ 0 ] ; rtB . nuzsotb4ib [ 1 ] = rtX . conse0bmpf [ 1 ] ; rtB .
nuzsotb4ib [ 2 ] = ( ( rtB . aksfqyz32i - rtX . conse0bmpf [ 0 ] ) * 1000.0 -
2.0 * rtX . conse0bmpf [ 1 ] ) * 1000.0 ; rtB . nuzsotb4ib [ 3 ] = 0.0 ;
simulationData = ( NeslSimulationData * ) rtDW . nxm0q2xh1b ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 13 ;
simulationData -> mData -> mContStates . mX = & rtX . h3rtzkfwch [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . fhxznkufax ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
lqptaqynx5 ; first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
first_output = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ;
tmp [ 0 ] = rtB . c5pepvzfj4 [ 0 ] ; tmp [ 1 ] = rtB . c5pepvzfj4 [ 1 ] ; tmp
[ 2 ] = rtB . c5pepvzfj4 [ 2 ] ; tmp [ 3 ] = rtB . c5pepvzfj4 [ 3 ] ; tmp_p [
1 ] = 4 ; tmp [ 4 ] = rtB . iac3y10qzs [ 0 ] ; tmp [ 5 ] = rtB . iac3y10qzs [
1 ] ; tmp [ 6 ] = rtB . iac3y10qzs [ 2 ] ; tmp [ 7 ] = rtB . iac3y10qzs [ 3 ]
; tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB . onco1xgcib [ 0 ] ; tmp [ 9 ] = rtB .
onco1xgcib [ 1 ] ; tmp [ 10 ] = rtB . onco1xgcib [ 2 ] ; tmp [ 11 ] = rtB .
onco1xgcib [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . nuzsotb4ib [ 0 ] ;
tmp [ 13 ] = rtB . nuzsotb4ib [ 1 ] ; tmp [ 14 ] = rtB . nuzsotb4ib [ 2 ] ;
tmp [ 15 ] = rtB . nuzsotb4ib [ 3 ] ; tmp_p [ 4 ] = 16 ; simulationData ->
mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues .
mX = & tmp [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 13 ; simulationData -> mData ->
mOutputs . mX = & rtB . jr4q3pg0aq [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_p = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_p ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jszlu0gruu ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gk3dbr3n2o ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . dsyf2uad12 ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . mwa4o4jdno ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . lso4t1iv02 ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_m [ 0 ] = 0 ; tmp_i [ 0 ] = rtB . c5pepvzfj4 [ 0 ] ; tmp_i [ 1 ]
= rtB . c5pepvzfj4 [ 1 ] ; tmp_i [ 2 ] = rtB . c5pepvzfj4 [ 2 ] ; tmp_i [ 3 ]
= rtB . c5pepvzfj4 [ 3 ] ; tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . iac3y10qzs [
0 ] ; tmp_i [ 5 ] = rtB . iac3y10qzs [ 1 ] ; tmp_i [ 6 ] = rtB . iac3y10qzs [
2 ] ; tmp_i [ 7 ] = rtB . iac3y10qzs [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] =
rtB . onco1xgcib [ 0 ] ; tmp_i [ 9 ] = rtB . onco1xgcib [ 1 ] ; tmp_i [ 10 ]
= rtB . onco1xgcib [ 2 ] ; tmp_i [ 11 ] = rtB . onco1xgcib [ 3 ] ; tmp_m [ 3
] = 12 ; tmp_i [ 12 ] = rtB . nuzsotb4ib [ 0 ] ; tmp_i [ 13 ] = rtB .
nuzsotb4ib [ 1 ] ; tmp_i [ 14 ] = rtB . nuzsotb4ib [ 2 ] ; tmp_i [ 15 ] = rtB
. nuzsotb4ib [ 3 ] ; tmp_m [ 4 ] = 16 ; memcpy ( & tmp_i [ 16 ] , & rtB .
jr4q3pg0aq [ 0 ] , 13U * sizeof ( real_T ) ) ; tmp_m [ 5 ] = 29 ;
simulationData -> mData -> mInputValues . mN = 29 ; simulationData -> mData
-> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 36 ; simulationData
-> mData -> mOutputs . mX = & fhj5jb2zox [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_i = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_i ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fbvz2vnuy2 ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . djzm003fix ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . o0vqxz2tcj =
fhj5jb2zox [ 11 ] ; rtB . oy4oo2klou = fhj5jb2zox [ 10 ] ; rtB . j01xkpuvzm =
fhj5jb2zox [ 13 ] ; rtB . lergc33bnh = fhj5jb2zox [ 12 ] ; rtB . dx10off45v =
fhj5jb2zox [ 15 ] ; rtB . olhvnbqglz = fhj5jb2zox [ 14 ] ; rtB . divivoibxh =
fhj5jb2zox [ 17 ] ; rtB . iyju2nutwb = fhj5jb2zox [ 16 ] ; rtB . j0lllcnryq =
fhj5jb2zox [ 19 ] ; rtB . lbidkltark = fhj5jb2zox [ 18 ] ; rtB . i2d3plpei2 =
fhj5jb2zox [ 21 ] ; rtB . kmewq5ke3l = fhj5jb2zox [ 20 ] ; rtB . knqf5e30e5 [
0 ] = rtB . kmewq5ke3l ; rtB . knqf5e30e5 [ 1 ] = rtB . i2d3plpei2 ; { if (
rtDW . d4ltmnn34c . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . d4ltmnn34c . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB
. knqf5e30e5 [ 0 ] + 0 ) ; } } rtB . oxlvnfuzyk = muDoubleScalarSqrt (
fhj5jb2zox [ 34 ] * fhj5jb2zox [ 34 ] + fhj5jb2zox [ 35 ] * fhj5jb2zox [ 35 ]
) ; rtB . cidkh4nob2 = fhj5jb2zox [ 33 ] ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID1 ( int_T tid ) { real_T k4vez0qedz ; k4vez0qedz = rtP . b / 2.0
* rtP . Constant1_Value ; rtB . kq2r1vyna5 = 1.0 / rtP . R * ( rtP .
Constant_Value_bbzhu1cqle + k4vez0qedz ) ; rtB . clrf4lofft = 1.0 / rtP . R *
( rtP . Constant_Value_bbzhu1cqle - k4vez0qedz ) ; UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 5 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. nxm0q2xh1b ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 13 ; simulationData -> mData -> mContStates . mX
= & rtX . h3rtzkfwch [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . fhxznkufax ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . lqptaqynx5 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c5pepvzfj4 [ 0 ] ; tmp_p [ 1 ] = rtB . c5pepvzfj4 [ 1 ] ;
tmp_p [ 2 ] = rtB . c5pepvzfj4 [ 2 ] ; tmp_p [ 3 ] = rtB . c5pepvzfj4 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . iac3y10qzs [ 0 ] ; tmp_p [ 5 ] = rtB .
iac3y10qzs [ 1 ] ; tmp_p [ 6 ] = rtB . iac3y10qzs [ 2 ] ; tmp_p [ 7 ] = rtB .
iac3y10qzs [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . onco1xgcib [ 0 ] ;
tmp_p [ 9 ] = rtB . onco1xgcib [ 1 ] ; tmp_p [ 10 ] = rtB . onco1xgcib [ 2 ]
; tmp_p [ 11 ] = rtB . onco1xgcib [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . nuzsotb4ib [ 0 ] ; tmp_p [ 13 ] = rtB . nuzsotb4ib [ 1 ] ; tmp_p [ 14 ]
= rtB . nuzsotb4ib [ 2 ] ; tmp_p [ 15 ] = rtB . nuzsotb4ib [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
jszlu0gruu ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. gk3dbr3n2o , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot ->
h2ots2f51e = rtP . Constant_Value ; _rtXdot -> bcg2nteokz [ 0 ] = rtX .
bcg2nteokz [ 1 ] ; _rtXdot -> bcg2nteokz [ 1 ] = ( ( rtB . ksfafj13mt - rtX .
bcg2nteokz [ 0 ] ) * 1000.0 - 2.0 * rtX . bcg2nteokz [ 1 ] ) * 1000.0 ;
_rtXdot -> bo4z5n042v [ 0 ] = rtX . bo4z5n042v [ 1 ] ; _rtXdot -> bo4z5n042v
[ 1 ] = ( ( rtB . ksfafj13mt - rtX . bo4z5n042v [ 0 ] ) * 1000.0 - 2.0 * rtX
. bo4z5n042v [ 1 ] ) * 1000.0 ; _rtXdot -> hloicxewzp = rtP . Constant_Value
; _rtXdot -> c3cicdgv5i [ 0 ] = rtX . c3cicdgv5i [ 1 ] ; _rtXdot ->
c3cicdgv5i [ 1 ] = ( ( rtB . aksfqyz32i - rtX . c3cicdgv5i [ 0 ] ) * 1000.0 -
2.0 * rtX . c3cicdgv5i [ 1 ] ) * 1000.0 ; _rtXdot -> conse0bmpf [ 0 ] = rtX .
conse0bmpf [ 1 ] ; _rtXdot -> conse0bmpf [ 1 ] = ( ( rtB . aksfqyz32i - rtX .
conse0bmpf [ 0 ] ) * 1000.0 - 2.0 * rtX . conse0bmpf [ 1 ] ) * 1000.0 ;
simulationData = ( NeslSimulationData * ) rtDW . nxm0q2xh1b ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 13 ;
simulationData -> mData -> mContStates . mX = & rtX . h3rtzkfwch [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . fhxznkufax ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
lqptaqynx5 ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c5pepvzfj4 [ 0 ] ; tmp_p [ 1 ] = rtB . c5pepvzfj4 [ 1 ] ;
tmp_p [ 2 ] = rtB . c5pepvzfj4 [ 2 ] ; tmp_p [ 3 ] = rtB . c5pepvzfj4 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . iac3y10qzs [ 0 ] ; tmp_p [ 5 ] = rtB .
iac3y10qzs [ 1 ] ; tmp_p [ 6 ] = rtB . iac3y10qzs [ 2 ] ; tmp_p [ 7 ] = rtB .
iac3y10qzs [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . onco1xgcib [ 0 ] ;
tmp_p [ 9 ] = rtB . onco1xgcib [ 1 ] ; tmp_p [ 10 ] = rtB . onco1xgcib [ 2 ]
; tmp_p [ 11 ] = rtB . onco1xgcib [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . nuzsotb4ib [ 0 ] ; tmp_p [ 13 ] = rtB . nuzsotb4ib [ 1 ] ; tmp_p [ 14 ]
= rtB . nuzsotb4ib [ 2 ] ; tmp_p [ 15 ] = rtB . nuzsotb4ib [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 13 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> h3rtzkfwch [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jszlu0gruu ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gk3dbr3n2o ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 5 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. nxm0q2xh1b ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 13 ; simulationData -> mData -> mContStates . mX
= & rtX . h3rtzkfwch [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0
; simulationData -> mData -> mDiscStates . mX = & rtDW . fhxznkufax ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . lqptaqynx5 ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . c5pepvzfj4 [ 0 ] ; tmp_p [ 1 ] = rtB . c5pepvzfj4 [ 1 ] ;
tmp_p [ 2 ] = rtB . c5pepvzfj4 [ 2 ] ; tmp_p [ 3 ] = rtB . c5pepvzfj4 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . iac3y10qzs [ 0 ] ; tmp_p [ 5 ] = rtB .
iac3y10qzs [ 1 ] ; tmp_p [ 6 ] = rtB . iac3y10qzs [ 2 ] ; tmp_p [ 7 ] = rtB .
iac3y10qzs [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . onco1xgcib [ 0 ] ;
tmp_p [ 9 ] = rtB . onco1xgcib [ 1 ] ; tmp_p [ 10 ] = rtB . onco1xgcib [ 2 ]
; tmp_p [ 11 ] = rtB . onco1xgcib [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . nuzsotb4ib [ 0 ] ; tmp_p [ 13 ] = rtB . nuzsotb4ib [ 1 ] ; tmp_p [ 14 ]
= rtB . nuzsotb4ib [ 2 ] ; tmp_p [ 15 ] = rtB . nuzsotb4ib [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
jszlu0gruu ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. gk3dbr3n2o , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } } void MdlTerminate ( void ) {
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . jszlu0gruu
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . nxm0q2xh1b
) ; nesl_erase_simulator ( "ModeloManual/ROBOT SS/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . fbvz2vnuy2 ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . dsyf2uad12 ) ; nesl_erase_simulator (
"ModeloManual/ROBOT SS/Solver Configuration_1" ) ; nesl_destroy_registry ( )
; { if ( rtDW . d4ltmnn34c . AQHandles ) { sdiTerminateStreaming ( & rtDW .
d4ltmnn34c . AQHandles ) ; } } } static void
mr_ModeloManual_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_ModeloManual_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_ModeloManual_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_ModeloManual_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_ModeloManual_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_ModeloManual_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_ModeloManual_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_ModeloManual_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_ModeloManual_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_ModeloManual_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_ModeloManual_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_ModeloManual_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_ModeloManual_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_ModeloManual_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_ModeloManual_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_ModeloManual_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_ModeloManual_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_ModeloManual_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB
) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 14 ] = {
"rtDW.pjdconnqvm" , "rtDW.fiwdzkchpx" , "rtDW.hndb4x0ghg" , "rtDW.me5ominovk"
, "rtDW.as4qahfhif" , "rtDW.n0o33n3yyv" , "rtDW.pka1ubyjzx" ,
"rtDW.jt1lrvtfij" , "rtDW.fhxznkufax" , "rtDW.mwa4o4jdno" , "rtDW.lqptaqynx5"
, "rtDW.lso4t1iv02" , "rtDW.oey1b4fjv1" , "rtDW.lszkdt1jfp" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 14 , rtdwDataFieldNames ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . pjdconnqvm ) , sizeof ( rtDW . pjdconnqvm ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . fiwdzkchpx ) , sizeof ( rtDW . fiwdzkchpx ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . hndb4x0ghg ) , sizeof ( rtDW . hndb4x0ghg ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . me5ominovk ) , sizeof ( rtDW . me5ominovk ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . as4qahfhif ) , sizeof ( rtDW . as4qahfhif ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . n0o33n3yyv ) , sizeof ( rtDW . n0o33n3yyv ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
rtDW . pka1ubyjzx ) , sizeof ( rtDW . pka1ubyjzx ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
rtDW . jt1lrvtfij ) , sizeof ( rtDW . jt1lrvtfij ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
rtDW . fhxznkufax ) , sizeof ( rtDW . fhxznkufax ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
rtDW . mwa4o4jdno ) , sizeof ( rtDW . mwa4o4jdno ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
rtDW . lqptaqynx5 ) , sizeof ( rtDW . lqptaqynx5 ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
rtDW . lso4t1iv02 ) , sizeof ( rtDW . lso4t1iv02 ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
rtDW . oey1b4fjv1 ) , sizeof ( rtDW . oey1b4fjv1 ) ) ;
mr_ModeloManual_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
rtDW . lszkdt1jfp ) , sizeof ( rtDW . lszkdt1jfp ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_ModeloManual_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0
, sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW ,
0 , 1 ) ; mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pjdconnqvm ) , rtdwData , 0 , 0 , sizeof ( rtDW . pjdconnqvm ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . fiwdzkchpx ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . fiwdzkchpx ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . hndb4x0ghg ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . hndb4x0ghg ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . me5ominovk ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . me5ominovk ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . as4qahfhif ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . as4qahfhif ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . n0o33n3yyv ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . n0o33n3yyv ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . pka1ubyjzx ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . pka1ubyjzx ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . jt1lrvtfij ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . jt1lrvtfij ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . fhxznkufax ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . fhxznkufax ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . mwa4o4jdno ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . mwa4o4jdno ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . lqptaqynx5 ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . lqptaqynx5 ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . lso4t1iv02 ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . lso4t1iv02 ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . oey1b4fjv1 ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . oey1b4fjv1 ) ) ;
mr_ModeloManual_restoreDataFromMxArray ( ( void * ) & ( rtDW . lszkdt1jfp ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . lszkdt1jfp ) ) ; } } mxArray *
mr_ModeloManual_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "Scope" , "Scope" , "Scope" ,
"SimscapeSinkBlock" , "Scope" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char * blockPath [ 10 ] = {
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/STATE_1" ,
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"ModeloManual/ROBOT SS/Scope" , "ModeloManual/ROBOT SS/Scope1" ,
"ModeloManual/ROBOT SS/Scope2" , "ModeloManual/ROBOT SS/Subsystem/Scope" ,
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/SINK_1" ,
"ModeloManual/Path Planning2/Kinematics1/Scope1" ,
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"ModeloManual/ROBOT SS/Solver Configuration/EVAL_KEY/STATE_1" , } ; static
const int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 6 , 6 , } ; for (
subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
23 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 671 ) ;
ssSetNumBlockIO ( rtS , 24 ) ; ssSetNumBlockParams ( rtS , 7 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1723281642U ) ; ssSetChecksumVal ( rtS , 1 ,
4049272105U ) ; ssSetChecksumVal ( rtS , 2 , 61010799U ) ; ssSetChecksumVal (
rtS , 3 , 3220399906U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 22 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
ModeloManual_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "ModeloManual" ) ;
ssSetPath ( rtS , "ModeloManual" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 100.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo )
; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 4 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ;
static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ;
static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 4 , 1 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ;
static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"ModeloManual/ROBOT SS/Ensamble robot/Integrator" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter5" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter5" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter4" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter4" ,
"ModeloManual/ROBOT SS/Ensamble robot/Integrator1" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter1" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter1" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter2" ,
"ModeloManual/ROBOT SS/Ensamble robot/Simulink-PS\nConverter2" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/DOF/6-DOF Joint" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"ModeloManual/ROBOT SS/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" } ; static
const char_T * rt_LoggedStateNames [ ] = { "" ,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter5.outputFiltered_230177026_0"
,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter5.outputFiltered_230177026_1"
,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter4.outputFiltered_3214468370_0"
,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter4.outputFiltered_3214468370_1"
, "" ,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter1.outputFiltered_3310925426_0"
,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter1.outputFiltered_3310925426_1"
,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter2.outputFiltered_2197343394_0"
,
 "ModeloManual.ROBOT_SS.Ensamble_robot.Simulink_PS_Converter2.outputFiltered_2197343394_1"
, "ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.Px.p" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.Py.p" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.Pz.p" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.S.Q" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.Px.v" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.Py.v" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.Pz.v" ,
"ModeloManual.ROBOT_SS.DOF.x6_DOF_Joint.S.w" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ]
= { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 0 , 1 , 2 , 3
, 4 , 5 , 6 , 7 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 26 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 26 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . h2ots2f51e ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . bcg2nteokz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . bcg2nteokz [ 1 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . bo4z5n042v [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . bo4z5n042v [ 1 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . hloicxewzp ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . c3cicdgv5i [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . c3cicdgv5i [ 1 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . conse0bmpf [ 0 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . conse0bmpf [ 1 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . h3rtzkfwch [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . h3rtzkfwch [ 1 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . h3rtzkfwch [ 2 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . h3rtzkfwch [ 3 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . h3rtzkfwch [ 7 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . h3rtzkfwch [ 8 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . h3rtzkfwch [ 9 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . h3rtzkfwch [ 10 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . pjdconnqvm ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . fiwdzkchpx ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . hndb4x0ghg ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtDW . me5ominovk ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . as4qahfhif ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtDW . n0o33n3yyv ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtDW . pka1ubyjzx ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtDW . jt1lrvtfij ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 23 ] ; static real_T absTol [ 23 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [
23 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 23 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 23 ] ; { int i ; for ( i = 0 ; i < 23 ; ++ i
) { contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec
[ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize
( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS ,
- 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 2.0
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 1723281642U ) ; ssSetChecksumVal ( rtS , 1 ,
4049272105U ) ; ssSetChecksumVal ( rtS , 2 , 61010799U ) ; ssSetChecksumVal (
rtS , 3 , 3220399906U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_ModeloManual_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP
( rtS , mr_ModeloManual_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_ModeloManual_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if
( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 1 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID1 ( tid ) ; }
