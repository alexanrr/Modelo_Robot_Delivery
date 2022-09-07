#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ModeloManual_836bb176_1_geometries.h"
PmfMessageId ModeloManual_836bb176_1_compOutputs ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 1 ]
; double xx [ 118 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ;
( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] =
state [ 6 ] ; xx [ 4 ] = state [ 10 ] ; xx [ 5 ] = state [ 11 ] ; xx [ 6 ] =
state [ 12 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx
[ 7 ] = 1.0 ; xx [ 8 ] = 0.0 ; xx [ 10 ] = xx [ 7 ] ; xx [ 11 ] = xx [ 8 ] ;
xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15
] = xx [ 8 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = - state [ 3 ] ; xx [ 18 ] =
- state [ 4 ] ; xx [ 19 ] = - state [ 5 ] ; xx [ 20 ] = - state [ 6 ] ; xx [
21 ] = 0.6278882562148878 ; xx [ 22 ] = 0.3252006217244244 ; xx [ 23 ] =
0.3252001096560881 ; xx [ 24 ] = 0.6278899441917698 ; xx [ 25 ] = - xx [ 21 ]
; xx [ 26 ] = - xx [ 22 ] ; xx [ 27 ] = xx [ 23 ] ; xx [ 28 ] = xx [ 24 ] ;
xx [ 29 ] = 0.5 ; xx [ 30 ] = xx [ 29 ] * input [ 2 ] ; xx [ 31 ] =
0.9999999999968887 ; xx [ 32 ] = sin ( xx [ 30 ] ) ; xx [ 33 ] =
2.452774191585849e-6 ; xx [ 34 ] = 4.548171450569072e-7 ; xx [ 35 ] = cos (
xx [ 30 ] ) ; xx [ 36 ] = - ( xx [ 31 ] * xx [ 32 ] ) ; xx [ 37 ] = - ( xx [
33 ] * xx [ 32 ] ) ; xx [ 38 ] = xx [ 34 ] * xx [ 32 ] ;
pm_math_Quaternion_compose_ra ( xx + 25 , xx + 35 , xx + 39 ) ;
pm_math_Quaternion_compose_ra ( xx + 17 , xx + 39 , xx + 35 ) ; xx [ 30 ] = -
0.6739364401572719 ; xx [ 32 ] = - 0.2140340345964144 ; xx [ 43 ] =
0.6739356086643653 ; xx [ 44 ] = 0.2140324789295218 ; xx [ 45 ] = xx [ 30 ] ;
xx [ 46 ] = xx [ 32 ] ; xx [ 47 ] = xx [ 43 ] ; xx [ 48 ] = xx [ 44 ] ;
pm_math_Quaternion_compose_ra ( xx + 35 , xx + 45 , xx + 49 ) ; xx [ 53 ] = -
3.469446951942819e-18 ; xx [ 54 ] = - 8.509769942854391e-24 ; xx [ 55 ] =
1.577963957063434e-24 ; pm_math_Quaternion_xform_ra ( xx + 35 , xx + 53 , xx
+ 56 ) ; xx [ 35 ] = 0.185 ; xx [ 36 ] = - 0.0295595126783197 ; xx [ 37 ] =
6.051813684849961e-6 ; xx [ 38 ] = - 2.023318368173079e-6 ;
pm_math_Quaternion_xform_ra ( xx + 39 , xx + 36 , xx + 59 ) ; xx [ 62 ] =
0.299 ; xx [ 63 ] = 0.02142424242424242 ; xx [ 64 ] = - ( xx [ 35 ] + xx [ 59
] ) ; xx [ 65 ] = xx [ 62 ] - xx [ 60 ] ; xx [ 66 ] = xx [ 63 ] - xx [ 61 ] ;
pm_math_Quaternion_xform_ra ( xx + 17 , xx + 64 , xx + 59 ) ; xx [ 67 ] =
0.06607575757575757 ; xx [ 68 ] = xx [ 67 ] * state [ 5 ] ; xx [ 69 ] = xx [
67 ] * state [ 4 ] ; xx [ 70 ] = 2.0 ; xx [ 71 ] = ( xx [ 68 ] * state [ 3 ]
+ xx [ 69 ] * state [ 6 ] ) * xx [ 70 ] ; xx [ 72 ] = state [ 0 ] + xx [ 71 ]
; xx [ 73 ] = xx [ 70 ] * ( xx [ 69 ] * state [ 3 ] - xx [ 68 ] * state [ 6 ]
) ; xx [ 74 ] = state [ 1 ] - xx [ 73 ] ; xx [ 75 ] = ( xx [ 69 ] * state [ 4
] + xx [ 68 ] * state [ 5 ] ) * xx [ 70 ] ; xx [ 68 ] = state [ 2 ] - xx [ 75
] + xx [ 67 ] ; xx [ 76 ] = xx [ 49 ] ; xx [ 77 ] = xx [ 50 ] ; xx [ 78 ] =
xx [ 51 ] ; xx [ 79 ] = xx [ 52 ] ; xx [ 80 ] = xx [ 56 ] + xx [ 59 ] + xx [
72 ] ; xx [ 81 ] = xx [ 57 ] + xx [ 60 ] + xx [ 74 ] ; xx [ 82 ] = xx [ 58 ]
+ xx [ 61 ] + xx [ 68 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 10 ) , ( pm_math_Transform3 * ) ( xx + 76 ) , xx + 49 , ( pm_math_Vector3 *
) ( xx + 50 ) , ( pm_math_Vector3 * ) ( xx + 56 ) , ( pm_math_Vector3 * ) (
xx + 59 ) , ( pm_math_Vector3 * ) ( xx + 83 ) ) ; xx [ 86 ] = xx [ 30 ] ; xx
[ 87 ] = xx [ 32 ] ; xx [ 88 ] = xx [ 43 ] ; xx [ 89 ] = xx [ 44 ] ; xx [ 90
] = xx [ 53 ] ; xx [ 91 ] = xx [ 54 ] ; xx [ 92 ] = xx [ 55 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 4 , xx + 93 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 64 , xx + 96 ) ; xx [ 64 ] = state [
7 ] ; xx [ 65 ] = state [ 8 ] ; xx [ 66 ] = state [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 17 , xx + 64 , xx + 99 ) ; xx [ 30
] = xx [ 67 ] * state [ 11 ] ; xx [ 32 ] = xx [ 99 ] + xx [ 30 ] ; xx [ 43 ]
= xx [ 67 ] * state [ 10 ] ; xx [ 44 ] = xx [ 100 ] - xx [ 43 ] ; xx [ 64 ] =
xx [ 96 ] + xx [ 32 ] ; xx [ 65 ] = xx [ 97 ] + xx [ 44 ] ; xx [ 66 ] = xx [
98 ] + xx [ 101 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 64 ,
xx + 96 ) ; xx [ 39 ] = 2.210274452256742e-12 ; xx [ 40 ] =
2.036762541332411e-6 ; xx [ 41 ] = 6.12431649464437e-6 ; xx [ 102 ] = xx [ 93
] - xx [ 31 ] * inputDot [ 2 ] ; xx [ 103 ] = xx [ 94 ] - xx [ 33 ] *
inputDot [ 2 ] ; xx [ 104 ] = xx [ 95 ] + xx [ 34 ] * inputDot [ 2 ] ; xx [
105 ] = xx [ 96 ] - xx [ 39 ] * inputDot [ 2 ] ; xx [ 106 ] = xx [ 97 ] + xx
[ 40 ] * inputDot [ 2 ] ; xx [ 107 ] = xx [ 98 ] + xx [ 41 ] * inputDot [ 2 ]
; xx [ 42 ] = 1.0e6 ; xx [ 64 ] = 1000.0 ; xx [ 65 ] = 1.0e-4 ; xx [ 66 ] =
0.3191834979695327 ; xx [ 69 ] = 9.081201658414948e-4 ;
sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 49 ] , xx + 50 , xx +
56 , xx + 59 , xx + 83 , xx + 10 , xx + 86 , xx + 10 , xx + 76 , NULL , xx +
102 , 0 , 1 , xx [ 42 ] , xx [ 64 ] , xx [ 65 ] , xx [ 29 ] , xx [ 66 ] , xx
[ 69 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx + 93 , xx
+ 94 ) ; xx [ 49 ] = xx [ 24 ] ; xx [ 50 ] = xx [ 23 ] ; xx [ 51 ] = xx [ 22
] ; xx [ 52 ] = xx [ 21 ] ; xx [ 21 ] = xx [ 29 ] * input [ 0 ] ; xx [ 22 ] =
sin ( xx [ 21 ] ) ; xx [ 23 ] = 4.54817144612818e-7 ; xx [ 56 ] = cos ( xx [
21 ] ) ; xx [ 57 ] = xx [ 31 ] * xx [ 22 ] ; xx [ 58 ] = xx [ 33 ] * xx [ 22
] ; xx [ 59 ] = - ( xx [ 23 ] * xx [ 22 ] ) ; pm_math_Quaternion_compose_ra (
xx + 49 , xx + 56 , xx + 76 ) ; pm_math_Quaternion_compose_ra ( xx + 17 , xx
+ 76 , xx + 56 ) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 45 , xx +
80 ) ; pm_math_Quaternion_xform_ra ( xx + 56 , xx + 53 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 76 , xx + 36 , xx + 56 ) ; xx [ 21 ] =
0.2990000000000001 ; xx [ 22 ] = 0.0314242424242424 ; xx [ 59 ] = - ( xx [ 35
] + xx [ 56 ] ) ; xx [ 60 ] = - ( xx [ 21 ] + xx [ 57 ] ) ; xx [ 61 ] = xx [
22 ] - xx [ 58 ] ; pm_math_Quaternion_xform_ra ( xx + 17 , xx + 59 , xx + 56
) ; xx [ 102 ] = xx [ 80 ] ; xx [ 103 ] = xx [ 81 ] ; xx [ 104 ] = xx [ 82 ]
; xx [ 105 ] = xx [ 83 ] ; xx [ 106 ] = xx [ 95 ] + xx [ 56 ] + xx [ 72 ] ;
xx [ 107 ] = xx [ 96 ] + xx [ 57 ] + xx [ 74 ] ; xx [ 108 ] = xx [ 97 ] + xx
[ 58 ] + xx [ 68 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 10 ) , ( pm_math_Transform3 * ) ( xx + 102 ) , xx + 24 , ( pm_math_Vector3
* ) ( xx + 56 ) , ( pm_math_Vector3 * ) ( xx + 80 ) , ( pm_math_Vector3 * ) (
xx + 83 ) , ( pm_math_Vector3 * ) ( xx + 95 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 76 , xx + 4 , xx + 98 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 59 , xx + 109 ) ; xx [ 59 ] = xx [
109 ] + xx [ 32 ] ; xx [ 60 ] = xx [ 110 ] + xx [ 44 ] ; xx [ 61 ] = xx [ 111
] + xx [ 101 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 76 , xx + 59 , xx
+ 109 ) ; xx [ 35 ] = 2.210274454944287e-12 ; xx [ 59 ] =
2.036762541319283e-6 ; xx [ 112 ] = xx [ 98 ] + xx [ 31 ] * inputDot [ 0 ] ;
xx [ 113 ] = xx [ 99 ] + xx [ 33 ] * inputDot [ 0 ] ; xx [ 114 ] = xx [ 100 ]
- xx [ 23 ] * inputDot [ 0 ] ; xx [ 115 ] = xx [ 109 ] + xx [ 35 ] * inputDot
[ 0 ] ; xx [ 116 ] = xx [ 110 ] - xx [ 59 ] * inputDot [ 0 ] ; xx [ 117 ] =
xx [ 111 ] - xx [ 41 ] * inputDot [ 0 ] ;
sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 24 ] , xx + 56 , xx +
80 , xx + 83 , xx + 95 , xx + 10 , xx + 86 , xx + 10 , xx + 102 , NULL , xx +
112 , 0 , 1 , xx [ 42 ] , xx [ 64 ] , xx [ 65 ] , xx [ 29 ] , xx [ 66 ] , xx
[ 69 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx + 60 , xx
+ 61 ) ; xx [ 24 ] = xx [ 29 ] * input [ 1 ] ; xx [ 56 ] = sin ( xx [ 24 ] )
; xx [ 76 ] = cos ( xx [ 24 ] ) ; xx [ 77 ] = xx [ 31 ] * xx [ 56 ] ; xx [ 78
] = xx [ 33 ] * xx [ 56 ] ; xx [ 79 ] = - ( xx [ 23 ] * xx [ 56 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 49 , xx + 76 , xx + 80 ) ;
pm_math_Quaternion_compose_ra ( xx + 17 , xx + 80 , xx + 49 ) ;
pm_math_Quaternion_compose_ra ( xx + 49 , xx + 45 , xx + 76 ) ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 53 , xx + 56 ) ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 36 , xx + 49 ) ; xx [ 95 ] =
0.165 - xx [ 49 ] ; xx [ 96 ] = - ( xx [ 21 ] + xx [ 50 ] ) ; xx [ 97 ] = xx
[ 22 ] - xx [ 51 ] ; pm_math_Quaternion_xform_ra ( xx + 17 , xx + 95 , xx +
49 ) ; xx [ 102 ] = xx [ 76 ] ; xx [ 103 ] = xx [ 77 ] ; xx [ 104 ] = xx [ 78
] ; xx [ 105 ] = xx [ 79 ] ; xx [ 106 ] = xx [ 56 ] + xx [ 49 ] + xx [ 72 ] ;
xx [ 107 ] = xx [ 57 ] + xx [ 50 ] + xx [ 74 ] ; xx [ 108 ] = xx [ 58 ] + xx
[ 51 ] + xx [ 68 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 10 ) , ( pm_math_Transform3 * ) ( xx + 102 ) , xx + 21 , ( pm_math_Vector3
* ) ( xx + 49 ) , ( pm_math_Vector3 * ) ( xx + 56 ) , ( pm_math_Vector3 * ) (
xx + 76 ) , ( pm_math_Vector3 * ) ( xx + 98 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 80 , xx + 4 , xx + 109 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 95 , xx + 112 ) ; xx [ 95 ] = xx [
112 ] + xx [ 32 ] ; xx [ 96 ] = xx [ 113 ] + xx [ 44 ] ; xx [ 97 ] = xx [ 114
] + xx [ 101 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 80 , xx + 95 , xx
+ 112 ) ; xx [ 79 ] = xx [ 109 ] + xx [ 31 ] * inputDot [ 1 ] ; xx [ 80 ] =
xx [ 110 ] + xx [ 33 ] * inputDot [ 1 ] ; xx [ 81 ] = xx [ 111 ] - xx [ 23 ]
* inputDot [ 1 ] ; xx [ 82 ] = xx [ 112 ] + xx [ 35 ] * inputDot [ 1 ] ; xx [
83 ] = xx [ 113 ] - xx [ 59 ] * inputDot [ 1 ] ; xx [ 84 ] = xx [ 114 ] - xx
[ 41 ] * inputDot [ 1 ] ; sm_core_compiler_computeContactOutputs ( 1 , 0 , xx
[ 21 ] , xx + 56 , xx + 49 , xx + 98 , xx + 76 , xx + 86 , xx + 10 , xx + 102
, xx + 10 , xx + 79 , NULL , 0 , 1 , 2585.0 , xx [ 8 ] , xx [ 65 ] , 0.7 ,
0.2210221665699612 , 8.699237272135131e-4 , NULL , NULL , NULL , NULL , NULL
, NULL , NULL , NULL , xx + 22 , xx + 23 ) ; xx [ 21 ] = xx [ 29 ] * input [
3 ] ; xx [ 24 ] = sin ( xx [ 21 ] ) ; xx [ 49 ] = cos ( xx [ 21 ] ) ; xx [ 50
] = - ( xx [ 31 ] * xx [ 24 ] ) ; xx [ 51 ] = - ( xx [ 33 ] * xx [ 24 ] ) ;
xx [ 52 ] = xx [ 34 ] * xx [ 24 ] ; pm_math_Quaternion_compose_ra ( xx + 25 ,
xx + 49 , xx + 56 ) ; pm_math_Quaternion_compose_ra ( xx + 17 , xx + 56 , xx
+ 24 ) ; pm_math_Quaternion_compose_ra ( xx + 24 , xx + 45 , xx + 49 ) ;
pm_math_Quaternion_xform_ra ( xx + 24 , xx + 53 , xx + 45 ) ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 36 , xx + 24 ) ; xx [ 35 ] =
0.164 - xx [ 24 ] ; xx [ 36 ] = xx [ 62 ] - xx [ 25 ] ; xx [ 37 ] = xx [ 63 ]
- xx [ 26 ] ; pm_math_Quaternion_xform_ra ( xx + 17 , xx + 35 , xx + 24 ) ;
xx [ 76 ] = xx [ 49 ] ; xx [ 77 ] = xx [ 50 ] ; xx [ 78 ] = xx [ 51 ] ; xx [
79 ] = xx [ 52 ] ; xx [ 80 ] = xx [ 45 ] + xx [ 24 ] + xx [ 72 ] ; xx [ 81 ]
= xx [ 46 ] + xx [ 25 ] + xx [ 74 ] ; xx [ 82 ] = xx [ 47 ] + xx [ 26 ] + xx
[ 68 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 10 ) , ( pm_math_Transform3 * ) ( xx + 76 ) , xx + 17 , ( pm_math_Vector3 *
) ( xx + 18 ) , ( pm_math_Vector3 * ) ( xx + 24 ) , ( pm_math_Vector3 * ) (
xx + 45 ) , ( pm_math_Vector3 * ) ( xx + 48 ) ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 56 , xx + 4 , xx + 51 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 35 , xx + 83 ) ; xx [ 4 ] = xx [ 83
] + xx [ 32 ] ; xx [ 5 ] = xx [ 84 ] + xx [ 44 ] ; xx [ 6 ] = xx [ 85 ] + xx
[ 101 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 56 , xx + 4 , xx + 35 ) ;
xx [ 54 ] = xx [ 51 ] - xx [ 31 ] * inputDot [ 3 ] ; xx [ 55 ] = xx [ 52 ] -
xx [ 33 ] * inputDot [ 3 ] ; xx [ 56 ] = xx [ 53 ] + xx [ 34 ] * inputDot [ 3
] ; xx [ 57 ] = xx [ 35 ] - xx [ 39 ] * inputDot [ 3 ] ; xx [ 58 ] = xx [ 36
] + xx [ 40 ] * inputDot [ 3 ] ; xx [ 59 ] = xx [ 37 ] + xx [ 41 ] * inputDot
[ 3 ] ; sm_core_compiler_computeContactOutputs ( 1 , 0 , xx [ 17 ] , xx + 18
, xx + 24 , xx + 45 , xx + 48 , xx + 10 , xx + 86 , xx + 10 , xx + 76 , NULL
, xx + 54 , 0 , 1 , xx [ 42 ] , xx [ 64 ] , xx [ 65 ] , xx [ 29 ] , xx [ 66 ]
, xx [ 69 ] , NULL , NULL , NULL , NULL , NULL , NULL , NULL , NULL , xx + 4
, xx + 5 ) ; xx [ 6 ] = state [ 3 ] * state [ 3 ] ; xx [ 8 ] = state [ 4 ] *
state [ 5 ] ; xx [ 10 ] = state [ 3 ] * state [ 6 ] ; xx [ 11 ] = state [ 4 ]
* state [ 6 ] ; xx [ 12 ] = state [ 3 ] * state [ 5 ] ; xx [ 13 ] = state [ 5
] * state [ 6 ] ; xx [ 14 ] = state [ 3 ] * state [ 4 ] ; xx [ 15 ] = xx [ 32
] - xx [ 30 ] ; xx [ 16 ] = xx [ 44 ] + xx [ 43 ] ; xx [ 17 ] = xx [ 101 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 15 , xx + 18 ) ; output [ 0 ] =
state [ 0 ] ; output [ 1 ] = state [ 7 ] ; output [ 2 ] = state [ 1 ] ;
output [ 3 ] = state [ 8 ] ; output [ 4 ] = state [ 2 ] ; output [ 5 ] =
state [ 3 ] ; output [ 6 ] = state [ 4 ] ; output [ 7 ] = state [ 5 ] ;
output [ 8 ] = state [ 6 ] ; output [ 9 ] = xx [ 9 ] ; output [ 10 ] =
inputDot [ 0 ] ; output [ 11 ] = inputDot [ 1 ] ; output [ 12 ] = inputDot [
2 ] ; output [ 13 ] = inputDot [ 3 ] ; output [ 14 ] = xx [ 93 ] ; output [
15 ] = xx [ 94 ] ; output [ 16 ] = xx [ 60 ] ; output [ 17 ] = xx [ 61 ] ;
output [ 18 ] = xx [ 22 ] ; output [ 19 ] = xx [ 23 ] ; output [ 20 ] = xx [
4 ] ; output [ 21 ] = xx [ 5 ] ; output [ 22 ] = ( xx [ 6 ] + state [ 4 ] *
state [ 4 ] ) * xx [ 70 ] - xx [ 7 ] ; output [ 23 ] = ( xx [ 8 ] + xx [ 10 ]
) * xx [ 70 ] ; output [ 24 ] = xx [ 70 ] * ( xx [ 11 ] - xx [ 12 ] ) ;
output [ 25 ] = xx [ 70 ] * ( xx [ 8 ] - xx [ 10 ] ) ; output [ 26 ] = ( xx [
6 ] + state [ 5 ] * state [ 5 ] ) * xx [ 70 ] - xx [ 7 ] ; output [ 27 ] = (
xx [ 13 ] + xx [ 14 ] ) * xx [ 70 ] ; output [ 28 ] = ( xx [ 11 ] + xx [ 12 ]
) * xx [ 70 ] ; output [ 29 ] = xx [ 70 ] * ( xx [ 13 ] - xx [ 14 ] ) ;
output [ 30 ] = ( xx [ 6 ] + state [ 6 ] * state [ 6 ] ) * xx [ 70 ] - xx [ 7
] ; output [ 31 ] = xx [ 72 ] - xx [ 71 ] ; output [ 32 ] = xx [ 73 ] + xx [
74 ] ; output [ 33 ] = xx [ 75 ] - xx [ 67 ] + xx [ 68 ] ; output [ 34 ] = xx
[ 18 ] ; output [ 35 ] = xx [ 19 ] ; return NULL ; }
