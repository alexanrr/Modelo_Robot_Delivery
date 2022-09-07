#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void ModeloManual_836bb176_1_resetSimStateVector ( const void * mech , double
* state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] =
xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] =
1.0 ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ]
; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ]
; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ]
; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ]
; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; } static void
perturbSimJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbSimJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 7 ]
= state [ 7 ] - 0.875 * mag ; } static void perturbSimJointPrimitiveState_0_1
( double mag , double * state ) { state [ 1 ] = state [ 1 ] + mag ; } static
void perturbSimJointPrimitiveState_0_1v ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; state [ 8 ] = state [ 8 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_0_2 ( double mag , double * state )
{ state [ 2 ] = state [ 2 ] + mag ; } static void
perturbSimJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_0_3 ( double mag , double * state ) {
double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [
0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ]
) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx
[ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [
4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] ==
0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5
] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx
[ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [
8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx
[ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [
3 ] = state [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4
) ; state [ 3 ] = xx [ 4 ] ; state [ 4 ] = xx [ 5 ] ; state [ 5 ] = xx [ 6 ]
; state [ 6 ] = xx [ 7 ] ; } static void perturbSimJointPrimitiveState_0_3v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4
] ; xx [ 5 ] = state [ 5 ] ; xx [ 6 ] = state [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 3 ] =
xx [ 7 ] ; state [ 4 ] = xx [ 8 ] ; state [ 5 ] = xx [ 9 ] ; state [ 6 ] = xx
[ 10 ] ; state [ 10 ] = state [ 10 ] + 1.2 * mag ; state [ 11 ] = state [ 11
] - xx [ 2 ] ; state [ 12 ] = state [ 12 ] + 0.9 * mag ; } static void
perturbSimJointPrimitiveState_1_0 ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; } static void perturbSimJointPrimitiveState_1_0v
( double mag , double * state ) { state [ 13 ] = state [ 13 ] + mag ; state [
14 ] = state [ 14 ] - 0.875 * mag ; } static void
perturbSimJointPrimitiveState_2_0 ( double mag , double * state ) { state [
15 ] = state [ 15 ] + mag ; } static void perturbSimJointPrimitiveState_2_0v
( double mag , double * state ) { state [ 15 ] = state [ 15 ] + mag ; state [
16 ] = state [ 16 ] - 0.875 * mag ; } static void
perturbSimJointPrimitiveState_3_0 ( double mag , double * state ) { state [
17 ] = state [ 17 ] + mag ; } static void perturbSimJointPrimitiveState_3_0v
( double mag , double * state ) { state [ 17 ] = state [ 17 ] + mag ; state [
18 ] = state [ 18 ] - 0.875 * mag ; } static void
perturbSimJointPrimitiveState_4_0 ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; } static void perturbSimJointPrimitiveState_4_0v
( double mag , double * state ) { state [ 19 ] = state [ 19 ] + mag ; state [
20 ] = state [ 20 ] - 0.875 * mag ; } void
ModeloManual_836bb176_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbSimJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbSimJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbSimJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbSimJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbSimJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbSimJointPrimitiveState_0_2v ( mag , state ) ; break ; case 6 :
perturbSimJointPrimitiveState_0_3 ( mag , state ) ; break ; case 7 :
perturbSimJointPrimitiveState_0_3v ( mag , state ) ; break ; case 12 :
perturbSimJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbSimJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; } } void
ModeloManual_836bb176_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double mag , boolean_T doPerturbVelocity , double * state ) { (
void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ;
( void ) state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { }
} void ModeloManual_836bb176_1_constructStateVector ( const void * mech ,
const double * solverState , const double * u , const double * uDot , double
* discreteState , double * fullState ) { ( void ) mech ; ( void )
discreteState ; fullState [ 0 ] = solverState [ 0 ] ; fullState [ 1 ] =
solverState [ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ; fullState [ 3 ] =
solverState [ 3 ] ; fullState [ 4 ] = solverState [ 4 ] ; fullState [ 5 ] =
solverState [ 5 ] ; fullState [ 6 ] = solverState [ 6 ] ; fullState [ 7 ] =
solverState [ 7 ] ; fullState [ 8 ] = solverState [ 8 ] ; fullState [ 9 ] =
solverState [ 9 ] ; fullState [ 10 ] = solverState [ 10 ] ; fullState [ 11 ]
= solverState [ 11 ] ; fullState [ 12 ] = solverState [ 12 ] ; fullState [ 13
] = u [ 0 ] ; fullState [ 14 ] = uDot [ 0 ] ; fullState [ 15 ] = u [ 1 ] ;
fullState [ 16 ] = uDot [ 1 ] ; fullState [ 17 ] = u [ 2 ] ; fullState [ 18 ]
= uDot [ 2 ] ; fullState [ 19 ] = u [ 3 ] ; fullState [ 20 ] = uDot [ 3 ] ; }
void ModeloManual_836bb176_1_extractSolverStateVector ( const void * mech ,
const double * fullState , double * solverState ) { ( void ) mech ;
solverState [ 0 ] = fullState [ 0 ] ; solverState [ 1 ] = fullState [ 1 ] ;
solverState [ 2 ] = fullState [ 2 ] ; solverState [ 3 ] = fullState [ 3 ] ;
solverState [ 4 ] = fullState [ 4 ] ; solverState [ 5 ] = fullState [ 5 ] ;
solverState [ 6 ] = fullState [ 6 ] ; solverState [ 7 ] = fullState [ 7 ] ;
solverState [ 8 ] = fullState [ 8 ] ; solverState [ 9 ] = fullState [ 9 ] ;
solverState [ 10 ] = fullState [ 10 ] ; solverState [ 11 ] = fullState [ 11 ]
; solverState [ 12 ] = fullState [ 12 ] ; } boolean_T
ModeloManual_836bb176_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; (
void ) modeVector ; return 0 ; } boolean_T
ModeloManual_836bb176_1_isVelocityViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; (
void ) modeVector ; return 0 ; } PmfMessageId
ModeloManual_836bb176_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , double * state , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
double xx [ 1 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) neDiagMgr ; xx [ 0 ] = sqrt (
state [ 3 ] * state [ 3 ] + state [ 4 ] * state [ 4 ] + state [ 5 ] * state [
5 ] + state [ 6 ] * state [ 6 ] ) ; state [ 3 ] = state [ 3 ] / xx [ 0 ] ;
state [ 4 ] = state [ 4 ] / xx [ 0 ] ; state [ 5 ] = state [ 5 ] / xx [ 0 ] ;
state [ 6 ] = state [ 6 ] / xx [ 0 ] ; return NULL ; } void
ModeloManual_836bb176_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; ( void
) error ; } void ModeloManual_836bb176_1_resetModeVector ( const void * mech
, int * modeVector ) { ( void ) mech ; ( void ) modeVector ; } boolean_T
ModeloManual_836bb176_1_hasJointDisToNormModeChange ( const void * mech ,
const int * prevModeVector , const int * modeVector ) { ( void ) mech ; (
void ) prevModeVector ; ( void ) modeVector ; return 0 ; } PmfMessageId
ModeloManual_836bb176_1_performJointDisToNormModeChange ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
int * prevModeVector , const int * modeVector , const double * input , double
* state , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) prevModeVector
; ( void ) modeVector ; ( void ) input ; ( void ) state ; ( void ) neDiagMgr
; return NULL ; } void ModeloManual_836bb176_1_onModeChangedCutJoints ( const
void * mech , const int * prevModeVector , const int * modeVector , double *
state ) { ( void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; (
void ) state ; }
