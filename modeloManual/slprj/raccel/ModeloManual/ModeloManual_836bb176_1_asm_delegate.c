#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void ModeloManual_836bb176_1_setTargets ( const RuntimeDerivedValuesBundle *
rtdv , CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
ModeloManual_836bb176_1_resetAsmStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = 1.0 ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ;
state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; } void
ModeloManual_836bb176_1_initializeTrackedAngleState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const
double * motionData , double * state ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector
; ( void ) motionData ; } void ModeloManual_836bb176_1_computeDiscreteState (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , double * state
) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) state ; } void ModeloManual_836bb176_1_adjustPosition ( const void *
mech , const double * dofDeltas , double * state ) { double xx [ 11 ] ; (
void ) mech ; xx [ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] =
state [ 5 ] ; xx [ 3 ] = state [ 6 ] ; xx [ 4 ] = dofDeltas [ 3 ] ; xx [ 5 ]
= dofDeltas [ 4 ] ; xx [ 6 ] = dofDeltas [ 5 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] =
state [ 3 ] + xx [ 7 ] ; xx [ 1 ] = state [ 4 ] + xx [ 8 ] ; xx [ 2 ] = state
[ 5 ] + xx [ 9 ] ; xx [ 3 ] = state [ 6 ] + xx [ 10 ] ; xx [ 4 ] = sqrt ( xx
[ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx [ 2 ] + xx [ 3 ] * xx
[ 3 ] ) ; xx [ 5 ] = 1.0e-64 ; if ( xx [ 5 ] > xx [ 4 ] ) xx [ 4 ] = xx [ 5 ]
; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state [ 1 ] = state [ 1 ] +
dofDeltas [ 1 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 2 ] ; state [ 3 ] =
xx [ 0 ] / xx [ 4 ] ; state [ 4 ] = xx [ 1 ] / xx [ 4 ] ; state [ 5 ] = xx [
2 ] / xx [ 4 ] ; state [ 6 ] = xx [ 3 ] / xx [ 4 ] ; state [ 13 ] = state [
13 ] + dofDeltas [ 6 ] ; state [ 15 ] = state [ 15 ] + dofDeltas [ 7 ] ;
state [ 17 ] = state [ 17 ] + dofDeltas [ 8 ] ; state [ 19 ] = state [ 19 ] +
dofDeltas [ 9 ] ; } static void perturbAsmJointPrimitiveState_0_0 ( double
mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 8 ] = state [ 8 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_3 ( double mag , double * state ) {
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
; state [ 6 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_0_3v (
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
perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; } static void perturbAsmJointPrimitiveState_1_0v
( double mag , double * state ) { state [ 13 ] = state [ 13 ] + mag ; state [
14 ] = state [ 14 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) { state [
15 ] = state [ 15 ] + mag ; } static void perturbAsmJointPrimitiveState_2_0v
( double mag , double * state ) { state [ 15 ] = state [ 15 ] + mag ; state [
16 ] = state [ 16 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) { state [
17 ] = state [ 17 ] + mag ; } static void perturbAsmJointPrimitiveState_3_0v
( double mag , double * state ) { state [ 17 ] = state [ 17 ] + mag ; state [
18 ] = state [ 18 ] - 0.875 * mag ; } static void
perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; } static void perturbAsmJointPrimitiveState_4_0v
( double mag , double * state ) { state [ 19 ] = state [ 19 ] + mag ; state [
20 ] = state [ 20 ] - 0.875 * mag ; } void
ModeloManual_836bb176_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbAsmJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbAsmJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbAsmJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbAsmJointPrimitiveState_0_2v ( mag , state ) ; break ; case 6 :
perturbAsmJointPrimitiveState_0_3 ( mag , state ) ; break ; case 7 :
perturbAsmJointPrimitiveState_0_3v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; } } static void
computePosDofBlendMatrix_0_3 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0
; xx [ 2 ] = xx [ 1 ] * ( state [ 4 ] * state [ 5 ] - state [ 3 ] * state [ 6
] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [
3 ] * state [ 3 ] + state [ 4 ] * state [ 4 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [
6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8
] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx
[ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 4 ] * state [ 6 ]
+ state [ 3 ] * state [ 5 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [
11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ]
; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] =
xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] /
xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ]
= xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [
14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] =
xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx
[ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ]
; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ]
+ xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [
5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7
] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] =
xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13
] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ;
matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ;
matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ;
} void ModeloManual_836bb176_1_computePosDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { case 3 : computePosDofBlendMatrix_0_3 ( state , partialType
, matrix ) ; break ; } } static void computeVelDofBlendMatrix_0_3 ( const
double * state , int partialType , double * matrix ) { double xx [ 15 ] ; (
void ) state ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [
4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [
2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } void
ModeloManual_836bb176_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { case 3 : computeVelDofBlendMatrix_0_3 ( state , partialType ,
matrix ) ; break ; } } static void projectPartiallyTargetedPos_0_3 ( const
double * origState , int partialType , double * state ) { boolean_T bb [ 1 ]
; double xx [ 24 ] ; xx [ 0 ] = state [ 4 ] * state [ 6 ] ; xx [ 1 ] = state
[ 3 ] * state [ 5 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [ 1 ] ) *
xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] , 0.0 ) :
asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 4 ] * origState [ 6 ] ; xx [ 6 ] =
origState [ 3 ] * origState [ 5 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [ 6 ] ) * xx [
2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] , 0.0 ) : asin (
xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 8
] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 4 ] ; xx [
15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx [ 9 ] = cos (
xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; bb [ 0 ] = ! ( fabs ( xx [ 3 ] )
> xx [ 10 ] ) ; xx [ 3 ] = state [ 4 ] * state [ 5 ] ; xx [ 11 ] = state [ 3
] * state [ 6 ] ; xx [ 12 ] = state [ 3 ] * state [ 3 ] ; xx [ 13 ] = 1.0 ;
xx [ 14 ] = ( xx [ 12 ] + state [ 4 ] * state [ 4 ] ) * xx [ 2 ] - xx [ 13 ]
; xx [ 15 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [
15 ] == 0.0 && xx [ 14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ;
if ( xx [ 4 ] < 0.0 ) xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15
] = + 1.0 ; else xx [ 15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 6 ] *
state [ 6 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 5
] * state [ 6 ] - state [ 3 ] * state [ 4 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] ==
0.0 && xx [ 4 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] =
0.5 ; xx [ 17 ] = - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [
18 ] = ( xx [ 3 ] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [
18 ] == 0.0 && xx [ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ;
xx [ 0 ] = bb [ 0 ] ? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ]
? xx [ 14 ] : xx [ 15 ] * xx [ 0 ] ; bb [ 0 ] = ! ( fabs ( xx [ 7 ] ) > xx [
10 ] ) ; xx [ 3 ] = origState [ 4 ] * origState [ 5 ] ; xx [ 4 ] = origState
[ 3 ] * origState [ 6 ] ; xx [ 7 ] = origState [ 3 ] * origState [ 3 ] ; xx [
10 ] = ( xx [ 7 ] + origState [ 4 ] * origState [ 4 ] ) * xx [ 2 ] - xx [ 13
] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ] ) ) ; xx [ 10 ] = ( xx [
11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ;
if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx [ 8 ] > 0.0 ) xx [ 11
] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7 ] + origState [ 6 ] *
origState [ 6 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ] = - ( xx [ 2 ] * (
origState [ 5 ] * origState [ 6 ] - origState [ 3 ] * origState [ 4 ] ) ) ;
xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 14 ]
, xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] - xx [ 6 ] ) * xx [ 11 ]
) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] * xx [ 11 ] ; xx [ 7 ] = (
xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 7 ] )
; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [ 7 ] ; xx [ 3 ] = bb [ 0 ]
? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx [ 1 ] ; xx [ 18 ] = xx [
1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ; xx [ 21 ] = xx [ 3 ] ; xx
[ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 17 + ( partialType
) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] =
sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11 ] = xx [ 2 ] ; xx [ 12 ] =
xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 2 ]
; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + ( partialType ) ] ; xx [ 2 ] =
cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = xx [ 3 ] * xx [ 5
] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 3 ] ; xx [
11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 2
] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] = xx [ 6 ] - xx [ 1 ] * xx [ 5
] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5 ] ) ; xx [ 16 ] = xx [ 4 ] *
xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx [ 0 ] + xx [ 2 ] * xx [ 1 ] *
xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 1 ] ; state [ 5 ] = xx [ 2 ] ; state [ 6 ] = xx [ 3
] ; } void ModeloManual_836bb176_1_projectPartiallyTargetedPos ( const void *
mech , size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { case 3 : projectPartiallyTargetedPos_0_3 (
origState , partialType , state ) ; break ; } } void
ModeloManual_836bb176_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 109 ] ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = - state [ 3 ] ; xx [ 1 ] = - state
[ 4 ] ; xx [ 2 ] = - state [ 5 ] ; xx [ 3 ] = - state [ 6 ] ; xx [ 4 ] =
0.06607575757575757 ; xx [ 5 ] = xx [ 4 ] * state [ 5 ] ; xx [ 6 ] = xx [ 4 ]
* state [ 4 ] ; xx [ 7 ] = 2.0 ; xx [ 8 ] = state [ 0 ] + ( xx [ 5 ] * state
[ 3 ] + xx [ 6 ] * state [ 6 ] ) * xx [ 7 ] ; xx [ 9 ] = state [ 1 ] - xx [ 7
] * ( xx [ 6 ] * state [ 3 ] - xx [ 5 ] * state [ 6 ] ) ; xx [ 10 ] = state [
2 ] - ( ( xx [ 6 ] * state [ 4 ] + xx [ 5 ] * state [ 5 ] ) * xx [ 7 ] - xx [
4 ] ) ; xx [ 5 ] = 0.6278899441917698 ; xx [ 6 ] = 0.3252001096560881 ; xx [
7 ] = 0.3252006217244244 ; xx [ 11 ] = 0.6278882562148878 ; xx [ 12 ] = xx [
5 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 11 ] ;
xx [ 16 ] = 0.5 ; xx [ 17 ] = xx [ 16 ] * state [ 13 ] ; xx [ 18 ] =
0.9999999999968887 ; xx [ 19 ] = sin ( xx [ 17 ] ) ; xx [ 20 ] =
2.452774191585849e-6 ; xx [ 21 ] = 4.54817144612818e-7 ; xx [ 22 ] = cos ( xx
[ 17 ] ) ; xx [ 23 ] = xx [ 18 ] * xx [ 19 ] ; xx [ 24 ] = xx [ 20 ] * xx [
19 ] ; xx [ 25 ] = - ( xx [ 21 ] * xx [ 19 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 12 , xx + 22 , xx + 26 ) ; xx [ 17 ] =
0.185 ; xx [ 22 ] = - 0.0295595126783197 ; xx [ 23 ] = 6.051813684849961e-6 ;
xx [ 24 ] = - 2.023318368173079e-6 ; pm_math_Quaternion_xform_ra ( xx + 26 ,
xx + 22 , xx + 30 ) ; xx [ 19 ] = - ( xx [ 17 ] + xx [ 30 ] ) ; xx [ 25 ] =
0.2990000000000001 ; xx [ 33 ] = - ( xx [ 25 ] + xx [ 31 ] ) ; xx [ 34 ] =
0.0314242424242424 ; xx [ 30 ] = xx [ 34 ] - xx [ 32 ] ; xx [ 31 ] = xx [ 16
] * state [ 15 ] ; xx [ 32 ] = sin ( xx [ 31 ] ) ; xx [ 35 ] = cos ( xx [ 31
] ) ; xx [ 36 ] = xx [ 18 ] * xx [ 32 ] ; xx [ 37 ] = xx [ 20 ] * xx [ 32 ] ;
xx [ 38 ] = - ( xx [ 21 ] * xx [ 32 ] ) ; pm_math_Quaternion_compose_ra ( xx
+ 12 , xx + 35 , xx + 39 ) ; pm_math_Quaternion_xform_ra ( xx + 39 , xx + 22
, xx + 12 ) ; xx [ 15 ] = 0.165 - xx [ 12 ] ; xx [ 31 ] = - ( xx [ 25 ] + xx
[ 13 ] ) ; xx [ 12 ] = xx [ 34 ] - xx [ 14 ] ; xx [ 34 ] = - xx [ 11 ] ; xx [
35 ] = - xx [ 7 ] ; xx [ 36 ] = xx [ 6 ] ; xx [ 37 ] = xx [ 5 ] ; xx [ 5 ] =
xx [ 16 ] * state [ 17 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] =
4.548171450569072e-7 ; xx [ 43 ] = cos ( xx [ 5 ] ) ; xx [ 44 ] = - ( xx [ 18
] * xx [ 6 ] ) ; xx [ 45 ] = - ( xx [ 20 ] * xx [ 6 ] ) ; xx [ 46 ] = xx [ 7
] * xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 34 , xx + 43 , xx + 47 )
; pm_math_Quaternion_xform_ra ( xx + 47 , xx + 22 , xx + 43 ) ; xx [ 5 ] = -
( xx [ 17 ] + xx [ 43 ] ) ; xx [ 6 ] = 0.299 ; xx [ 11 ] = xx [ 6 ] - xx [ 44
] ; xx [ 13 ] = 0.02142424242424242 ; xx [ 14 ] = xx [ 13 ] - xx [ 45 ] ; xx
[ 17 ] = xx [ 16 ] * state [ 19 ] ; xx [ 16 ] = sin ( xx [ 17 ] ) ; xx [ 43 ]
= cos ( xx [ 17 ] ) ; xx [ 44 ] = - ( xx [ 18 ] * xx [ 16 ] ) ; xx [ 45 ] = -
( xx [ 20 ] * xx [ 16 ] ) ; xx [ 46 ] = xx [ 7 ] * xx [ 16 ] ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 43 , xx + 51 ) ;
pm_math_Quaternion_xform_ra ( xx + 51 , xx + 22 , xx + 34 ) ; xx [ 16 ] =
0.164 - xx [ 34 ] ; xx [ 17 ] = xx [ 6 ] - xx [ 35 ] ; xx [ 6 ] = xx [ 13 ] -
xx [ 36 ] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 47 , xx + 22 ) ; xx
[ 34 ] = xx [ 5 ] ; xx [ 35 ] = xx [ 11 ] ; xx [ 36 ] = xx [ 14 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 34 , xx + 43 ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 26 , xx + 55 ) ; xx [ 59 ] = xx
[ 19 ] ; xx [ 60 ] = xx [ 33 ] ; xx [ 61 ] = xx [ 30 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 59 , xx + 62 ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 39 , xx + 65 ) ; xx [ 69 ] = xx
[ 15 ] ; xx [ 70 ] = xx [ 31 ] ; xx [ 71 ] = xx [ 12 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 69 , xx + 72 ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 51 , xx + 75 ) ; xx [ 79 ] = xx
[ 16 ] ; xx [ 80 ] = xx [ 17 ] ; xx [ 81 ] = xx [ 6 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 79 , xx + 82 ) ; xx [ 85 ] =
state [ 7 ] ; xx [ 86 ] = state [ 8 ] ; xx [ 87 ] = state [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 0 , xx + 85 , xx + 88 ) ; xx [ 13 ]
= xx [ 88 ] + xx [ 4 ] * state [ 11 ] ; xx [ 32 ] = xx [ 89 ] - xx [ 4 ] *
state [ 10 ] ; xx [ 85 ] = state [ 10 ] ; xx [ 86 ] = state [ 11 ] ; xx [ 87
] = state [ 12 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 26 , xx + 85 ,
xx + 91 ) ; pm_math_Vector3_cross_ra ( xx + 85 , xx + 59 , xx + 94 ) ; xx [
59 ] = xx [ 94 ] + xx [ 13 ] ; xx [ 60 ] = xx [ 95 ] + xx [ 32 ] ; xx [ 61 ]
= xx [ 96 ] + xx [ 90 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 26 , xx +
59 , xx + 94 ) ; xx [ 4 ] = 2.210274454944287e-12 ; xx [ 37 ] =
2.036762541319283e-6 ; xx [ 38 ] = 6.12431649464437e-6 ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 85 , xx + 59 ) ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 69 , xx + 97 ) ; xx [ 69 ] = xx [
97 ] + xx [ 13 ] ; xx [ 70 ] = xx [ 98 ] + xx [ 32 ] ; xx [ 71 ] = xx [ 99 ]
+ xx [ 90 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 69 , xx +
97 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 47 , xx + 85 , xx + 69 ) ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 34 , xx + 100 ) ; xx [ 34 ] = xx [
100 ] + xx [ 13 ] ; xx [ 35 ] = xx [ 101 ] + xx [ 32 ] ; xx [ 36 ] = xx [ 102
] + xx [ 90 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 47 , xx + 34 , xx +
100 ) ; xx [ 34 ] = 2.210274452256742e-12 ; xx [ 35 ] = 2.036762541332411e-6
; pm_math_Quaternion_inverseXform_ra ( xx + 51 , xx + 85 , xx + 103 ) ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 79 , xx + 106 ) ; xx [ 79 ] = xx [
106 ] + xx [ 13 ] ; xx [ 80 ] = xx [ 107 ] + xx [ 32 ] ; xx [ 81 ] = xx [ 108
] + xx [ 90 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 51 , xx + 79 , xx +
85 ) ; motionData [ 0 ] = xx [ 0 ] ; motionData [ 1 ] = xx [ 1 ] ; motionData
[ 2 ] = xx [ 2 ] ; motionData [ 3 ] = xx [ 3 ] ; motionData [ 4 ] = xx [ 8 ]
; motionData [ 5 ] = xx [ 9 ] ; motionData [ 6 ] = xx [ 10 ] ; motionData [ 7
] = xx [ 26 ] ; motionData [ 8 ] = xx [ 27 ] ; motionData [ 9 ] = xx [ 28 ] ;
motionData [ 10 ] = xx [ 29 ] ; motionData [ 11 ] = xx [ 19 ] ; motionData [
12 ] = xx [ 33 ] ; motionData [ 13 ] = xx [ 30 ] ; motionData [ 14 ] = xx [
39 ] ; motionData [ 15 ] = xx [ 40 ] ; motionData [ 16 ] = xx [ 41 ] ;
motionData [ 17 ] = xx [ 42 ] ; motionData [ 18 ] = xx [ 15 ] ; motionData [
19 ] = xx [ 31 ] ; motionData [ 20 ] = xx [ 12 ] ; motionData [ 21 ] = xx [
47 ] ; motionData [ 22 ] = xx [ 48 ] ; motionData [ 23 ] = xx [ 49 ] ;
motionData [ 24 ] = xx [ 50 ] ; motionData [ 25 ] = xx [ 5 ] ; motionData [
26 ] = xx [ 11 ] ; motionData [ 27 ] = xx [ 14 ] ; motionData [ 28 ] = xx [
51 ] ; motionData [ 29 ] = xx [ 52 ] ; motionData [ 30 ] = xx [ 53 ] ;
motionData [ 31 ] = xx [ 54 ] ; motionData [ 32 ] = xx [ 16 ] ; motionData [
33 ] = xx [ 17 ] ; motionData [ 34 ] = xx [ 6 ] ; motionData [ 35 ] = xx [ 22
] ; motionData [ 36 ] = xx [ 23 ] ; motionData [ 37 ] = xx [ 24 ] ;
motionData [ 38 ] = xx [ 25 ] ; motionData [ 39 ] = xx [ 43 ] + xx [ 8 ] ;
motionData [ 40 ] = xx [ 44 ] + xx [ 9 ] ; motionData [ 41 ] = xx [ 45 ] + xx
[ 10 ] ; motionData [ 42 ] = xx [ 55 ] ; motionData [ 43 ] = xx [ 56 ] ;
motionData [ 44 ] = xx [ 57 ] ; motionData [ 45 ] = xx [ 58 ] ; motionData [
46 ] = xx [ 62 ] + xx [ 8 ] ; motionData [ 47 ] = xx [ 63 ] + xx [ 9 ] ;
motionData [ 48 ] = xx [ 64 ] + xx [ 10 ] ; motionData [ 49 ] = xx [ 65 ] ;
motionData [ 50 ] = xx [ 66 ] ; motionData [ 51 ] = xx [ 67 ] ; motionData [
52 ] = xx [ 68 ] ; motionData [ 53 ] = xx [ 72 ] + xx [ 8 ] ; motionData [ 54
] = xx [ 73 ] + xx [ 9 ] ; motionData [ 55 ] = xx [ 74 ] + xx [ 10 ] ;
motionData [ 56 ] = xx [ 75 ] ; motionData [ 57 ] = xx [ 76 ] ; motionData [
58 ] = xx [ 77 ] ; motionData [ 59 ] = xx [ 78 ] ; motionData [ 60 ] = xx [
82 ] + xx [ 8 ] ; motionData [ 61 ] = xx [ 83 ] + xx [ 9 ] ; motionData [ 62
] = xx [ 84 ] + xx [ 10 ] ; motionData [ 63 ] = state [ 10 ] ; motionData [
64 ] = state [ 11 ] ; motionData [ 65 ] = state [ 12 ] ; motionData [ 66 ] =
xx [ 13 ] ; motionData [ 67 ] = xx [ 32 ] ; motionData [ 68 ] = xx [ 90 ] ;
motionData [ 69 ] = xx [ 91 ] + xx [ 18 ] * state [ 14 ] ; motionData [ 70 ]
= xx [ 92 ] + xx [ 20 ] * state [ 14 ] ; motionData [ 71 ] = xx [ 93 ] - xx [
21 ] * state [ 14 ] ; motionData [ 72 ] = xx [ 94 ] + xx [ 4 ] * state [ 14 ]
; motionData [ 73 ] = xx [ 95 ] - xx [ 37 ] * state [ 14 ] ; motionData [ 74
] = xx [ 96 ] - xx [ 38 ] * state [ 14 ] ; motionData [ 75 ] = xx [ 59 ] + xx
[ 18 ] * state [ 16 ] ; motionData [ 76 ] = xx [ 60 ] + xx [ 20 ] * state [
16 ] ; motionData [ 77 ] = xx [ 61 ] - xx [ 21 ] * state [ 16 ] ; motionData
[ 78 ] = xx [ 97 ] + xx [ 4 ] * state [ 16 ] ; motionData [ 79 ] = xx [ 98 ]
- xx [ 37 ] * state [ 16 ] ; motionData [ 80 ] = xx [ 99 ] - xx [ 38 ] *
state [ 16 ] ; motionData [ 81 ] = xx [ 69 ] - xx [ 18 ] * state [ 18 ] ;
motionData [ 82 ] = xx [ 70 ] - xx [ 20 ] * state [ 18 ] ; motionData [ 83 ]
= xx [ 71 ] + xx [ 7 ] * state [ 18 ] ; motionData [ 84 ] = xx [ 100 ] - xx [
34 ] * state [ 18 ] ; motionData [ 85 ] = xx [ 101 ] + xx [ 35 ] * state [ 18
] ; motionData [ 86 ] = xx [ 102 ] + xx [ 38 ] * state [ 18 ] ; motionData [
87 ] = xx [ 103 ] - xx [ 18 ] * state [ 20 ] ; motionData [ 88 ] = xx [ 104 ]
- xx [ 20 ] * state [ 20 ] ; motionData [ 89 ] = xx [ 105 ] + xx [ 7 ] *
state [ 20 ] ; motionData [ 90 ] = xx [ 85 ] - xx [ 34 ] * state [ 20 ] ;
motionData [ 91 ] = xx [ 86 ] + xx [ 35 ] * state [ 20 ] ; motionData [ 92 ]
= xx [ 87 ] + xx [ 38 ] * state [ 20 ] ; } size_t
ModeloManual_836bb176_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { } return 0 ; } size_t
ModeloManual_836bb176_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t ModeloManual_836bb176_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const double * state , const
int * modeVector , const double * motionData , double * J ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
( void ) modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; }
boolean_T ModeloManual_836bb176_1_isInKinematicSingularity ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const
int * modeVector , const double * motionData ) { ( void ) mech ; ( void )
rtdv ; ( void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) {
} return 0 ; } void ModeloManual_836bb176_1_convertStateVector ( const void *
asmMech , const RuntimeDerivedValuesBundle * rtdv , const void * simMech ,
const double * asmState , const int * asmModeVector , const int *
simModeVector , double * simState ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ;
( void ) simModeVector ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] =
asmState [ 1 ] ; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState
[ 3 ] ; simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ;
simState [ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState
[ 8 ] = asmState [ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] =
asmState [ 10 ] ; simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] =
asmState [ 12 ] ; simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] =
asmState [ 14 ] ; simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] =
asmState [ 16 ] ; simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] =
asmState [ 18 ] ; simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] =
asmState [ 20 ] ; }
