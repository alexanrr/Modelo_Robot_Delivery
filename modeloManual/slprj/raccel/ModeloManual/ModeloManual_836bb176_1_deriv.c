#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ModeloManual_836bb176_1_geometries.h"
PmfMessageId ModeloManual_836bb176_1_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 1176 ] ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector
; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = state [ 3 ] ; xx [
1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] = state [ 6 ] ; xx [ 4
] = state [ 10 ] ; xx [ 5 ] = state [ 11 ] ; xx [ 6 ] = state [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] = 1.0
; xx [ 1 ] = state [ 5 ] * state [ 5 ] ; xx [ 2 ] = state [ 6 ] * state [ 6 ]
; xx [ 3 ] = 2.0 ; xx [ 11 ] = state [ 4 ] * state [ 5 ] ; xx [ 12 ] = state
[ 3 ] * state [ 6 ] ; xx [ 13 ] = state [ 3 ] * state [ 5 ] ; xx [ 14 ] =
state [ 4 ] * state [ 6 ] ; xx [ 15 ] = xx [ 0 ] - ( xx [ 1 ] + xx [ 2 ] ) *
xx [ 3 ] ; xx [ 16 ] = xx [ 3 ] * ( xx [ 11 ] - xx [ 12 ] ) ; xx [ 17 ] = (
xx [ 13 ] + xx [ 14 ] ) * xx [ 3 ] ; xx [ 18 ] = 0.6278882562148878 ; xx [ 19
] = 0.3252006217244244 ; xx [ 20 ] = 0.3252001096560881 ; xx [ 21 ] =
0.6278899441917698 ; xx [ 22 ] = - xx [ 18 ] ; xx [ 23 ] = - xx [ 19 ] ; xx [
24 ] = xx [ 20 ] ; xx [ 25 ] = xx [ 21 ] ; xx [ 26 ] = 0.5 ; xx [ 27 ] = xx [
26 ] * input [ 3 ] ; xx [ 28 ] = 0.9999999999968887 ; xx [ 29 ] = sin ( xx [
27 ] ) ; xx [ 30 ] = 2.452774191585849e-6 ; xx [ 31 ] = 4.548171450569072e-7
; xx [ 32 ] = cos ( xx [ 27 ] ) ; xx [ 33 ] = - ( xx [ 28 ] * xx [ 29 ] ) ;
xx [ 34 ] = - ( xx [ 30 ] * xx [ 29 ] ) ; xx [ 35 ] = xx [ 31 ] * xx [ 29 ] ;
pm_math_Quaternion_compose_ra ( xx + 22 , xx + 32 , xx + 36 ) ; xx [ 27 ] =
xx [ 36 ] * xx [ 36 ] ; xx [ 29 ] = ( xx [ 27 ] + xx [ 37 ] * xx [ 37 ] ) *
xx [ 3 ] - xx [ 0 ] ; xx [ 32 ] = xx [ 37 ] * xx [ 38 ] ; xx [ 33 ] = xx [ 36
] * xx [ 39 ] ; xx [ 34 ] = xx [ 3 ] * ( xx [ 32 ] - xx [ 33 ] ) ; xx [ 35 ]
= xx [ 37 ] * xx [ 39 ] ; xx [ 40 ] = xx [ 36 ] * xx [ 38 ] ; xx [ 41 ] = (
xx [ 35 ] + xx [ 40 ] ) * xx [ 3 ] ; xx [ 42 ] = ( xx [ 32 ] + xx [ 33 ] ) *
xx [ 3 ] ; xx [ 32 ] = ( xx [ 27 ] + xx [ 38 ] * xx [ 38 ] ) * xx [ 3 ] - xx
[ 0 ] ; xx [ 33 ] = xx [ 38 ] * xx [ 39 ] ; xx [ 43 ] = xx [ 36 ] * xx [ 37 ]
; xx [ 44 ] = xx [ 3 ] * ( xx [ 33 ] - xx [ 43 ] ) ; xx [ 45 ] = xx [ 3 ] * (
xx [ 35 ] - xx [ 40 ] ) ; xx [ 35 ] = ( xx [ 33 ] + xx [ 43 ] ) * xx [ 3 ] ;
xx [ 33 ] = ( xx [ 27 ] + xx [ 39 ] * xx [ 39 ] ) * xx [ 3 ] - xx [ 0 ] ; xx
[ 46 ] = xx [ 29 ] ; xx [ 47 ] = xx [ 34 ] ; xx [ 48 ] = xx [ 41 ] ; xx [ 49
] = xx [ 42 ] ; xx [ 50 ] = xx [ 32 ] ; xx [ 51 ] = xx [ 44 ] ; xx [ 52 ] =
xx [ 45 ] ; xx [ 53 ] = xx [ 35 ] ; xx [ 54 ] = xx [ 33 ] ; xx [ 27 ] =
0.01284385052499586 ; xx [ 55 ] = xx [ 27 ] * xx [ 29 ] ; xx [ 56 ] = xx [ 27
] * xx [ 42 ] ; xx [ 57 ] = xx [ 27 ] * xx [ 45 ] ; xx [ 58 ] = xx [ 27 ] *
xx [ 34 ] ; xx [ 59 ] = xx [ 27 ] * xx [ 32 ] ; xx [ 60 ] = xx [ 27 ] * xx [
35 ] ; xx [ 61 ] = xx [ 27 ] * xx [ 41 ] ; xx [ 62 ] = xx [ 27 ] * xx [ 44 ]
; xx [ 63 ] = xx [ 27 ] * xx [ 33 ] ; pm_math_Matrix3x3_compose_ra ( xx + 46
, xx + 55 , xx + 64 ) ; xx [ 40 ] = xx [ 26 ] * input [ 2 ] ; xx [ 43 ] = sin
( xx [ 40 ] ) ; xx [ 55 ] = cos ( xx [ 40 ] ) ; xx [ 56 ] = - ( xx [ 28 ] *
xx [ 43 ] ) ; xx [ 57 ] = - ( xx [ 30 ] * xx [ 43 ] ) ; xx [ 58 ] = xx [ 31 ]
* xx [ 43 ] ; pm_math_Quaternion_compose_ra ( xx + 22 , xx + 55 , xx + 59 ) ;
xx [ 22 ] = xx [ 59 ] * xx [ 59 ] ; xx [ 23 ] = ( xx [ 22 ] + xx [ 60 ] * xx
[ 60 ] ) * xx [ 3 ] - xx [ 0 ] ; xx [ 24 ] = xx [ 60 ] * xx [ 61 ] ; xx [ 25
] = xx [ 59 ] * xx [ 62 ] ; xx [ 40 ] = xx [ 3 ] * ( xx [ 24 ] - xx [ 25 ] )
; xx [ 43 ] = xx [ 60 ] * xx [ 62 ] ; xx [ 55 ] = xx [ 59 ] * xx [ 61 ] ; xx
[ 56 ] = ( xx [ 43 ] + xx [ 55 ] ) * xx [ 3 ] ; xx [ 57 ] = ( xx [ 24 ] + xx
[ 25 ] ) * xx [ 3 ] ; xx [ 24 ] = ( xx [ 22 ] + xx [ 61 ] * xx [ 61 ] ) * xx
[ 3 ] - xx [ 0 ] ; xx [ 25 ] = xx [ 61 ] * xx [ 62 ] ; xx [ 58 ] = xx [ 59 ]
* xx [ 60 ] ; xx [ 63 ] = xx [ 3 ] * ( xx [ 25 ] - xx [ 58 ] ) ; xx [ 73 ] =
xx [ 3 ] * ( xx [ 43 ] - xx [ 55 ] ) ; xx [ 43 ] = ( xx [ 25 ] + xx [ 58 ] )
* xx [ 3 ] ; xx [ 25 ] = ( xx [ 22 ] + xx [ 62 ] * xx [ 62 ] ) * xx [ 3 ] -
xx [ 0 ] ; xx [ 74 ] = xx [ 23 ] ; xx [ 75 ] = xx [ 40 ] ; xx [ 76 ] = xx [
56 ] ; xx [ 77 ] = xx [ 57 ] ; xx [ 78 ] = xx [ 24 ] ; xx [ 79 ] = xx [ 63 ]
; xx [ 80 ] = xx [ 73 ] ; xx [ 81 ] = xx [ 43 ] ; xx [ 82 ] = xx [ 25 ] ; xx
[ 83 ] = xx [ 27 ] * xx [ 23 ] ; xx [ 84 ] = xx [ 27 ] * xx [ 57 ] ; xx [ 85
] = xx [ 27 ] * xx [ 73 ] ; xx [ 86 ] = xx [ 27 ] * xx [ 40 ] ; xx [ 87 ] =
xx [ 27 ] * xx [ 24 ] ; xx [ 88 ] = xx [ 27 ] * xx [ 43 ] ; xx [ 89 ] = xx [
27 ] * xx [ 56 ] ; xx [ 90 ] = xx [ 27 ] * xx [ 63 ] ; xx [ 91 ] = xx [ 27 ]
* xx [ 25 ] ; pm_math_Matrix3x3_compose_ra ( xx + 74 , xx + 83 , xx + 92 ) ;
xx [ 83 ] = xx [ 21 ] ; xx [ 84 ] = xx [ 20 ] ; xx [ 85 ] = xx [ 19 ] ; xx [
86 ] = xx [ 18 ] ; xx [ 18 ] = xx [ 26 ] * input [ 1 ] ; xx [ 19 ] = sin ( xx
[ 18 ] ) ; xx [ 20 ] = 4.54817144612818e-7 ; xx [ 87 ] = cos ( xx [ 18 ] ) ;
xx [ 88 ] = xx [ 28 ] * xx [ 19 ] ; xx [ 89 ] = xx [ 30 ] * xx [ 19 ] ; xx [
90 ] = - ( xx [ 20 ] * xx [ 19 ] ) ; pm_math_Quaternion_compose_ra ( xx + 83
, xx + 87 , xx + 101 ) ; xx [ 18 ] = xx [ 101 ] * xx [ 101 ] ; xx [ 19 ] = (
xx [ 18 ] + xx [ 102 ] * xx [ 102 ] ) * xx [ 3 ] - xx [ 0 ] ; xx [ 21 ] = xx
[ 102 ] * xx [ 103 ] ; xx [ 22 ] = xx [ 101 ] * xx [ 104 ] ; xx [ 55 ] = xx [
3 ] * ( xx [ 21 ] - xx [ 22 ] ) ; xx [ 58 ] = xx [ 102 ] * xx [ 104 ] ; xx [
87 ] = xx [ 101 ] * xx [ 103 ] ; xx [ 88 ] = ( xx [ 58 ] + xx [ 87 ] ) * xx [
3 ] ; xx [ 89 ] = ( xx [ 21 ] + xx [ 22 ] ) * xx [ 3 ] ; xx [ 21 ] = ( xx [
18 ] + xx [ 103 ] * xx [ 103 ] ) * xx [ 3 ] - xx [ 0 ] ; xx [ 22 ] = xx [ 103
] * xx [ 104 ] ; xx [ 90 ] = xx [ 101 ] * xx [ 102 ] ; xx [ 91 ] = xx [ 3 ] *
( xx [ 22 ] - xx [ 90 ] ) ; xx [ 105 ] = xx [ 3 ] * ( xx [ 58 ] - xx [ 87 ] )
; xx [ 58 ] = ( xx [ 22 ] + xx [ 90 ] ) * xx [ 3 ] ; xx [ 22 ] = ( xx [ 18 ]
+ xx [ 104 ] * xx [ 104 ] ) * xx [ 3 ] - xx [ 0 ] ; xx [ 106 ] = xx [ 19 ] ;
xx [ 107 ] = xx [ 55 ] ; xx [ 108 ] = xx [ 88 ] ; xx [ 109 ] = xx [ 89 ] ; xx
[ 110 ] = xx [ 21 ] ; xx [ 111 ] = xx [ 91 ] ; xx [ 112 ] = xx [ 105 ] ; xx [
113 ] = xx [ 58 ] ; xx [ 114 ] = xx [ 22 ] ; xx [ 115 ] = xx [ 27 ] * xx [ 19
] ; xx [ 116 ] = xx [ 27 ] * xx [ 89 ] ; xx [ 117 ] = xx [ 27 ] * xx [ 105 ]
; xx [ 118 ] = xx [ 27 ] * xx [ 55 ] ; xx [ 119 ] = xx [ 27 ] * xx [ 21 ] ;
xx [ 120 ] = xx [ 27 ] * xx [ 58 ] ; xx [ 121 ] = xx [ 27 ] * xx [ 88 ] ; xx
[ 122 ] = xx [ 27 ] * xx [ 91 ] ; xx [ 123 ] = xx [ 27 ] * xx [ 22 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 106 , xx + 115 , xx + 124 ) ; xx [ 18 ] =
2.0625 ; xx [ 87 ] = xx [ 26 ] * input [ 0 ] ; xx [ 90 ] = sin ( xx [ 87 ] )
; xx [ 115 ] = cos ( xx [ 87 ] ) ; xx [ 116 ] = xx [ 28 ] * xx [ 90 ] ; xx [
117 ] = xx [ 30 ] * xx [ 90 ] ; xx [ 118 ] = - ( xx [ 20 ] * xx [ 90 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 83 , xx + 115 , xx + 119 ) ; xx [ 83 ] =
xx [ 119 ] * xx [ 119 ] ; xx [ 84 ] = ( xx [ 83 ] + xx [ 120 ] * xx [ 120 ] )
* xx [ 3 ] - xx [ 0 ] ; xx [ 85 ] = xx [ 120 ] * xx [ 121 ] ; xx [ 86 ] = xx
[ 119 ] * xx [ 122 ] ; xx [ 87 ] = xx [ 3 ] * ( xx [ 85 ] - xx [ 86 ] ) ; xx
[ 90 ] = xx [ 120 ] * xx [ 122 ] ; xx [ 115 ] = xx [ 119 ] * xx [ 121 ] ; xx
[ 116 ] = ( xx [ 90 ] + xx [ 115 ] ) * xx [ 3 ] ; xx [ 117 ] = ( xx [ 85 ] +
xx [ 86 ] ) * xx [ 3 ] ; xx [ 85 ] = ( xx [ 83 ] + xx [ 121 ] * xx [ 121 ] )
* xx [ 3 ] - xx [ 0 ] ; xx [ 86 ] = xx [ 121 ] * xx [ 122 ] ; xx [ 118 ] = xx
[ 119 ] * xx [ 120 ] ; xx [ 123 ] = xx [ 3 ] * ( xx [ 86 ] - xx [ 118 ] ) ;
xx [ 133 ] = xx [ 3 ] * ( xx [ 90 ] - xx [ 115 ] ) ; xx [ 90 ] = ( xx [ 86 ]
+ xx [ 118 ] ) * xx [ 3 ] ; xx [ 86 ] = ( xx [ 83 ] + xx [ 122 ] * xx [ 122 ]
) * xx [ 3 ] - xx [ 0 ] ; xx [ 134 ] = xx [ 84 ] ; xx [ 135 ] = xx [ 87 ] ;
xx [ 136 ] = xx [ 116 ] ; xx [ 137 ] = xx [ 117 ] ; xx [ 138 ] = xx [ 85 ] ;
xx [ 139 ] = xx [ 123 ] ; xx [ 140 ] = xx [ 133 ] ; xx [ 141 ] = xx [ 90 ] ;
xx [ 142 ] = xx [ 86 ] ; xx [ 143 ] = xx [ 27 ] * xx [ 84 ] ; xx [ 144 ] = xx
[ 27 ] * xx [ 117 ] ; xx [ 145 ] = xx [ 27 ] * xx [ 133 ] ; xx [ 146 ] = xx [
27 ] * xx [ 87 ] ; xx [ 147 ] = xx [ 27 ] * xx [ 85 ] ; xx [ 148 ] = xx [ 27
] * xx [ 90 ] ; xx [ 149 ] = xx [ 27 ] * xx [ 116 ] ; xx [ 150 ] = xx [ 27 ]
* xx [ 123 ] ; xx [ 151 ] = xx [ 27 ] * xx [ 86 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 134 , xx + 143 , xx + 152 ) ; xx [ 83 ] =
xx [ 64 ] + xx [ 92 ] + xx [ 124 ] + xx [ 18 ] + xx [ 152 ] ; xx [ 115 ] = xx
[ 65 ] + xx [ 93 ] + xx [ 125 ] + xx [ 153 ] ; xx [ 118 ] = xx [ 67 ] + xx [
95 ] + xx [ 127 ] + xx [ 155 ] ; xx [ 143 ] = xx [ 68 ] + xx [ 96 ] + xx [
128 ] + xx [ 18 ] + xx [ 156 ] ; xx [ 144 ] = xx [ 70 ] + xx [ 98 ] + xx [
130 ] + xx [ 158 ] ; xx [ 145 ] = xx [ 71 ] + xx [ 99 ] + xx [ 131 ] + xx [
159 ] ; xx [ 161 ] = xx [ 83 ] ; xx [ 162 ] = xx [ 115 ] ; xx [ 163 ] = xx [
66 ] + xx [ 94 ] + xx [ 126 ] + xx [ 154 ] ; xx [ 164 ] = xx [ 118 ] ; xx [
165 ] = xx [ 143 ] ; xx [ 166 ] = xx [ 69 ] + xx [ 97 ] + xx [ 129 ] + xx [
157 ] ; xx [ 167 ] = xx [ 144 ] ; xx [ 168 ] = xx [ 145 ] ; xx [ 169 ] = xx [
72 ] + xx [ 100 ] + xx [ 132 ] + xx [ 18 ] + xx [ 160 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 161 , xx + 15 , xx + 146 ) ; xx [ 18 ] =
state [ 4 ] * state [ 4 ] ; xx [ 149 ] = state [ 5 ] * state [ 6 ] ; xx [ 150
] = state [ 3 ] * state [ 4 ] ; xx [ 170 ] = ( xx [ 12 ] + xx [ 11 ] ) * xx [
3 ] ; xx [ 171 ] = xx [ 0 ] - ( xx [ 2 ] + xx [ 18 ] ) * xx [ 3 ] ; xx [ 172
] = xx [ 3 ] * ( xx [ 149 ] - xx [ 150 ] ) ; pm_math_Matrix3x3_xform_ra ( xx
+ 161 , xx + 170 , xx + 173 ) ; xx [ 2 ] = pm_math_Vector3_dot_ra ( xx + 15 ,
xx + 173 ) ; xx [ 176 ] = xx [ 3 ] * ( xx [ 14 ] - xx [ 13 ] ) ; xx [ 177 ] =
( xx [ 150 ] + xx [ 149 ] ) * xx [ 3 ] ; xx [ 178 ] = xx [ 0 ] - ( xx [ 18 ]
+ xx [ 1 ] ) * xx [ 3 ] ; pm_math_Matrix3x3_xform_ra ( xx + 161 , xx + 176 ,
xx + 11 ) ; xx [ 1 ] = pm_math_Vector3_dot_ra ( xx + 15 , xx + 11 ) ; xx [ 14
] = 0.06607575757575757 ; xx [ 179 ] = - 0.0295595126783197 ; xx [ 180 ] =
6.051813684849961e-6 ; xx [ 181 ] = - 2.023318368173079e-6 ;
pm_math_Quaternion_xform_ra ( xx + 36 , xx + 179 , xx + 182 ) ; xx [ 18 ] =
0.299 ; xx [ 149 ] = 0.02142424242424242 ; xx [ 185 ] = 0.164 - xx [ 182 ] ;
xx [ 186 ] = xx [ 18 ] - xx [ 183 ] ; xx [ 187 ] = xx [ 149 ] - xx [ 184 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 64 , xx + 185 , xx + 188 ) ; xx [ 64 ]
= 0.185 ; pm_math_Quaternion_xform_ra ( xx + 59 , xx + 179 , xx + 65 ) ; xx [
68 ] = - ( xx [ 64 ] + xx [ 65 ] ) ; xx [ 69 ] = xx [ 18 ] - xx [ 66 ] ; xx [
70 ] = xx [ 149 ] - xx [ 67 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 92 , xx
+ 68 , xx + 197 ) ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 179 , xx +
65 ) ; xx [ 18 ] = 0.2990000000000001 ; xx [ 71 ] = 0.0314242424242424 ; xx [
92 ] = 0.165 - xx [ 65 ] ; xx [ 93 ] = - ( xx [ 18 ] + xx [ 66 ] ) ; xx [ 94
] = xx [ 71 ] - xx [ 67 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 124 , xx +
92 , xx + 206 ) ; pm_math_Quaternion_xform_ra ( xx + 119 , xx + 179 , xx + 65
) ; xx [ 95 ] = - ( xx [ 64 ] + xx [ 65 ] ) ; xx [ 96 ] = - ( xx [ 18 ] + xx
[ 66 ] ) ; xx [ 97 ] = xx [ 71 ] - xx [ 67 ] ; pm_math_Matrix3x3_postCross_ra
( xx + 152 , xx + 95 , xx + 124 ) ; xx [ 18 ] = xx [ 188 ] + xx [ 197 ] + xx
[ 206 ] + xx [ 124 ] ; xx [ 64 ] = - ( xx [ 115 ] * xx [ 14 ] + xx [ 18 ] ) ;
xx [ 65 ] = xx [ 191 ] + xx [ 200 ] + xx [ 209 ] + xx [ 127 ] ; xx [ 66 ] =
xx [ 143 ] * xx [ 14 ] + xx [ 65 ] ; xx [ 67 ] = - xx [ 66 ] ; xx [ 71 ] = xx
[ 194 ] + xx [ 203 ] + xx [ 212 ] + xx [ 130 ] ; xx [ 72 ] = - ( xx [ 145 ] *
xx [ 14 ] + xx [ 71 ] ) ; xx [ 98 ] = xx [ 64 ] ; xx [ 99 ] = xx [ 67 ] ; xx
[ 100 ] = xx [ 72 ] ; xx [ 115 ] = pm_math_Vector3_dot_ra ( xx + 15 , xx + 98
) ; xx [ 143 ] = xx [ 189 ] + xx [ 198 ] + xx [ 207 ] + xx [ 125 ] ; xx [ 145
] = xx [ 83 ] * xx [ 14 ] - xx [ 143 ] ; xx [ 83 ] = xx [ 192 ] + xx [ 201 ]
+ xx [ 210 ] + xx [ 128 ] ; xx [ 149 ] = xx [ 118 ] * xx [ 14 ] - xx [ 83 ] ;
xx [ 118 ] = xx [ 195 ] + xx [ 204 ] + xx [ 213 ] + xx [ 131 ] ; xx [ 151 ] =
xx [ 144 ] * xx [ 14 ] - xx [ 118 ] ; xx [ 152 ] = xx [ 145 ] ; xx [ 153 ] =
xx [ 149 ] ; xx [ 154 ] = xx [ 151 ] ; xx [ 144 ] = pm_math_Vector3_dot_ra (
xx + 15 , xx + 152 ) ; xx [ 155 ] = xx [ 190 ] + xx [ 199 ] + xx [ 208 ] + xx
[ 126 ] ; xx [ 156 ] = - xx [ 155 ] ; xx [ 157 ] = xx [ 193 ] + xx [ 202 ] +
xx [ 211 ] + xx [ 129 ] ; xx [ 158 ] = - xx [ 157 ] ; xx [ 159 ] = - ( xx [
196 ] + xx [ 205 ] + xx [ 214 ] + xx [ 132 ] ) ; xx [ 179 ] = xx [ 156 ] ; xx
[ 180 ] = xx [ 158 ] ; xx [ 181 ] = xx [ 159 ] ; xx [ 160 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 179 ) ; xx [ 182 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 11 ) ; xx [ 183 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 98 ) ; xx [ 184 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 152 ) ; xx [ 215 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 179 ) ; xx [ 216 ] =
pm_math_Vector3_dot_ra ( xx + 176 , xx + 98 ) ; xx [ 98 ] =
pm_math_Vector3_dot_ra ( xx + 176 , xx + 152 ) ; xx [ 99 ] =
pm_math_Vector3_dot_ra ( xx + 176 , xx + 179 ) ; xx [ 100 ] =
5.688544690599872e-5 ; xx [ 152 ] = 3.061393619671982e-5 ; xx [ 153 ] =
3.061366842237662e-5 ; xx [ 217 ] = xx [ 100 ] * xx [ 29 ] ; xx [ 218 ] = xx
[ 100 ] * xx [ 42 ] ; xx [ 219 ] = xx [ 100 ] * xx [ 45 ] ; xx [ 220 ] = xx [
152 ] * xx [ 34 ] ; xx [ 221 ] = xx [ 152 ] * xx [ 32 ] ; xx [ 222 ] = xx [
152 ] * xx [ 35 ] ; xx [ 223 ] = xx [ 153 ] * xx [ 41 ] ; xx [ 224 ] = xx [
153 ] * xx [ 44 ] ; xx [ 225 ] = xx [ 153 ] * xx [ 33 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 46 , xx + 217 , xx + 226 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 188 , xx + 185 , xx + 44 ) ; xx [ 188 ]
= xx [ 100 ] * xx [ 23 ] ; xx [ 189 ] = xx [ 100 ] * xx [ 57 ] ; xx [ 190 ] =
xx [ 100 ] * xx [ 73 ] ; xx [ 191 ] = xx [ 152 ] * xx [ 40 ] ; xx [ 192 ] =
xx [ 152 ] * xx [ 24 ] ; xx [ 193 ] = xx [ 152 ] * xx [ 43 ] ; xx [ 194 ] =
xx [ 153 ] * xx [ 56 ] ; xx [ 195 ] = xx [ 153 ] * xx [ 63 ] ; xx [ 196 ] =
xx [ 153 ] * xx [ 25 ] ; pm_math_Matrix3x3_compose_ra ( xx + 74 , xx + 188 ,
xx + 217 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 197 , xx + 68 , xx + 73 ) ;
xx [ 188 ] = xx [ 100 ] * xx [ 19 ] ; xx [ 189 ] = xx [ 100 ] * xx [ 89 ] ;
xx [ 190 ] = xx [ 100 ] * xx [ 105 ] ; xx [ 191 ] = xx [ 152 ] * xx [ 55 ] ;
xx [ 192 ] = xx [ 152 ] * xx [ 21 ] ; xx [ 193 ] = xx [ 152 ] * xx [ 58 ] ;
xx [ 194 ] = xx [ 153 ] * xx [ 88 ] ; xx [ 195 ] = xx [ 153 ] * xx [ 91 ] ;
xx [ 196 ] = xx [ 153 ] * xx [ 22 ] ; pm_math_Matrix3x3_compose_ra ( xx + 106
, xx + 188 , xx + 197 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 206 , xx + 92
, xx + 105 ) ; xx [ 188 ] = xx [ 100 ] * xx [ 84 ] ; xx [ 189 ] = xx [ 100 ]
* xx [ 117 ] ; xx [ 190 ] = xx [ 100 ] * xx [ 133 ] ; xx [ 191 ] = xx [ 152 ]
* xx [ 87 ] ; xx [ 192 ] = xx [ 152 ] * xx [ 85 ] ; xx [ 193 ] = xx [ 152 ] *
xx [ 90 ] ; xx [ 194 ] = xx [ 153 ] * xx [ 116 ] ; xx [ 195 ] = xx [ 153 ] *
xx [ 123 ] ; xx [ 196 ] = xx [ 153 ] * xx [ 86 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 134 , xx + 188 , xx + 206 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 124 , xx + 95 , xx + 133 ) ; xx [ 19 ] =
6.392045454545454e-3 ; xx [ 21 ] = xx [ 226 ] - xx [ 44 ] + xx [ 217 ] - xx [
73 ] + xx [ 197 ] - xx [ 105 ] + xx [ 206 ] - xx [ 133 ] + xx [ 19 ] + xx [
65 ] * xx [ 14 ] ; xx [ 22 ] = xx [ 227 ] - xx [ 45 ] + xx [ 218 ] - xx [ 74
] + xx [ 198 ] - xx [ 106 ] + xx [ 207 ] - xx [ 134 ] - xx [ 18 ] * xx [ 14 ]
; xx [ 23 ] = xx [ 22 ] - xx [ 14 ] * xx [ 149 ] ; xx [ 24 ] = xx [ 228 ] -
xx [ 46 ] + xx [ 219 ] - xx [ 75 ] + xx [ 199 ] - xx [ 107 ] + xx [ 208 ] -
xx [ 135 ] ; xx [ 25 ] = xx [ 157 ] * xx [ 14 ] ; xx [ 29 ] = xx [ 24 ] + xx
[ 25 ] ; xx [ 32 ] = xx [ 230 ] - xx [ 48 ] + xx [ 221 ] - xx [ 77 ] + xx [
201 ] - xx [ 109 ] + xx [ 210 ] - xx [ 137 ] + xx [ 19 ] - xx [ 143 ] * xx [
14 ] ; xx [ 33 ] = xx [ 231 ] - xx [ 49 ] + xx [ 222 ] - xx [ 78 ] + xx [ 202
] - xx [ 110 ] + xx [ 211 ] - xx [ 138 ] ; xx [ 34 ] = xx [ 155 ] * xx [ 14 ]
; xx [ 35 ] = xx [ 33 ] - xx [ 34 ] ; xx [ 40 ] = 2.604166666666666e-3 ; xx [
41 ] = xx [ 234 ] - xx [ 52 ] + xx [ 225 ] - xx [ 81 ] + xx [ 205 ] - xx [
113 ] + xx [ 40 ] + xx [ 214 ] - xx [ 141 ] ; xx [ 235 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 146 ) ; xx [ 236 ] = xx [ 2 ] ; xx [
237 ] = xx [ 1 ] ; xx [ 238 ] = xx [ 115 ] ; xx [ 239 ] = xx [ 144 ] ; xx [
240 ] = xx [ 160 ] ; xx [ 241 ] = xx [ 2 ] ; xx [ 242 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 173 ) ; xx [ 243 ] = xx [ 182 ] ; xx
[ 244 ] = xx [ 183 ] ; xx [ 245 ] = xx [ 184 ] ; xx [ 246 ] = xx [ 215 ] ; xx
[ 247 ] = xx [ 1 ] ; xx [ 248 ] = xx [ 182 ] ; xx [ 249 ] =
pm_math_Vector3_dot_ra ( xx + 176 , xx + 11 ) ; xx [ 250 ] = xx [ 216 ] ; xx
[ 251 ] = xx [ 98 ] ; xx [ 252 ] = xx [ 99 ] ; xx [ 253 ] = xx [ 115 ] ; xx [
254 ] = xx [ 183 ] ; xx [ 255 ] = xx [ 216 ] ; xx [ 256 ] = xx [ 21 ] + xx [
14 ] * xx [ 66 ] ; xx [ 257 ] = xx [ 23 ] ; xx [ 258 ] = xx [ 29 ] ; xx [ 259
] = xx [ 144 ] ; xx [ 260 ] = xx [ 184 ] ; xx [ 261 ] = xx [ 98 ] ; xx [ 262
] = xx [ 23 ] ; xx [ 263 ] = xx [ 32 ] + xx [ 14 ] * xx [ 145 ] ; xx [ 264 ]
= xx [ 35 ] ; xx [ 265 ] = xx [ 160 ] ; xx [ 266 ] = xx [ 215 ] ; xx [ 267 ]
= xx [ 99 ] ; xx [ 268 ] = xx [ 29 ] ; xx [ 269 ] = xx [ 35 ] ; xx [ 270 ] =
xx [ 41 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 235 , 6 , xx + 53 ) ; if
( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ModeloManual/ROBOT SS/DOF/6-DOF Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } pm_math_Quaternion_inverseXform_ra ( xx + 36 , xx + 4 , xx
+ 53 ) ; xx [ 1 ] = xx [ 28 ] * inputDot [ 3 ] ; xx [ 2 ] = xx [ 53 ] - xx [
1 ] ; xx [ 23 ] = xx [ 30 ] * inputDot [ 3 ] ; xx [ 29 ] = xx [ 54 ] - xx [
23 ] ; xx [ 35 ] = xx [ 31 ] * inputDot [ 3 ] ; xx [ 42 ] = xx [ 55 ] + xx [
35 ] ; xx [ 56 ] = xx [ 53 ] + xx [ 2 ] ; xx [ 57 ] = xx [ 54 ] + xx [ 29 ] ;
xx [ 58 ] = xx [ 55 ] + xx [ 42 ] ; xx [ 43 ] = 2.210274452256742e-12 ; xx [
63 ] = xx [ 43 ] * inputDot [ 3 ] ; xx [ 66 ] = 2.036762541332411e-6 ; xx [
82 ] = xx [ 66 ] * inputDot [ 3 ] ; xx [ 84 ] = 6.12431649464437e-6 ; xx [ 85
] = xx [ 84 ] * inputDot [ 3 ] ; xx [ 86 ] = - xx [ 63 ] ; xx [ 87 ] = xx [
82 ] ; xx [ 88 ] = xx [ 85 ] ; pm_math_Vector3_cross_ra ( xx + 56 , xx + 86 ,
xx + 89 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 185 , xx + 56 ) ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 56 , xx + 86 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 36 , xx + 86 , xx + 114 ) ; xx [ 86
] = 0.0 ; xx [ 123 ] = xx [ 0 ] ; xx [ 124 ] = xx [ 86 ] ; xx [ 125 ] = xx [
86 ] ; xx [ 126 ] = xx [ 86 ] ; xx [ 127 ] = xx [ 86 ] ; xx [ 128 ] = xx [ 86
] ; xx [ 129 ] = xx [ 86 ] ; xx [ 87 ] = - state [ 4 ] ; xx [ 88 ] = - state
[ 5 ] ; xx [ 98 ] = - state [ 6 ] ; xx [ 179 ] = - state [ 3 ] ; xx [ 180 ] =
xx [ 87 ] ; xx [ 181 ] = xx [ 88 ] ; xx [ 182 ] = xx [ 98 ] ;
pm_math_Quaternion_compose_ra ( xx + 179 , xx + 36 , xx + 188 ) ; xx [ 99 ] =
- 0.6739364401572719 ; xx [ 117 ] = - 0.2140340345964144 ; xx [ 130 ] =
0.6739356086643653 ; xx [ 131 ] = 0.2140324789295218 ; xx [ 192 ] = xx [ 99 ]
; xx [ 193 ] = xx [ 117 ] ; xx [ 194 ] = xx [ 130 ] ; xx [ 195 ] = xx [ 131 ]
; pm_math_Quaternion_compose_ra ( xx + 188 , xx + 192 , xx + 271 ) ; xx [ 132
] = - 3.469446951942819e-18 ; xx [ 142 ] = - 8.509769942854391e-24 ; xx [ 144
] = 1.577963957063434e-24 ; xx [ 275 ] = xx [ 132 ] ; xx [ 276 ] = xx [ 142 ]
; xx [ 277 ] = xx [ 144 ] ; pm_math_Quaternion_xform_ra ( xx + 188 , xx + 275
, xx + 278 ) ; pm_math_Quaternion_xform_ra ( xx + 179 , xx + 185 , xx + 188 )
; xx [ 154 ] = xx [ 14 ] * state [ 5 ] ; xx [ 155 ] = xx [ 14 ] * state [ 4 ]
; xx [ 157 ] = state [ 0 ] + ( xx [ 154 ] * state [ 3 ] + xx [ 155 ] * state
[ 6 ] ) * xx [ 3 ] ; xx [ 160 ] = state [ 1 ] - xx [ 3 ] * ( xx [ 155 ] *
state [ 3 ] - xx [ 154 ] * state [ 6 ] ) ; xx [ 183 ] = state [ 2 ] - ( xx [
155 ] * state [ 4 ] + xx [ 154 ] * state [ 5 ] ) * xx [ 3 ] + xx [ 14 ] ; xx
[ 281 ] = xx [ 271 ] ; xx [ 282 ] = xx [ 272 ] ; xx [ 283 ] = xx [ 273 ] ; xx
[ 284 ] = xx [ 274 ] ; xx [ 285 ] = xx [ 278 ] + xx [ 188 ] + xx [ 157 ] ; xx
[ 286 ] = xx [ 279 ] + xx [ 189 ] + xx [ 160 ] ; xx [ 287 ] = xx [ 280 ] + xx
[ 190 ] + xx [ 183 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 123 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 154 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ; xx
[ 291 ] = xx [ 99 ] ; xx [ 292 ] = xx [ 117 ] ; xx [ 293 ] = xx [ 130 ] ; xx
[ 294 ] = xx [ 131 ] ; xx [ 295 ] = xx [ 132 ] ; xx [ 296 ] = xx [ 142 ] ; xx
[ 297 ] = xx [ 144 ] ; xx [ 130 ] = state [ 7 ] ; xx [ 131 ] = state [ 8 ] ;
xx [ 132 ] = state [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 179 , xx
+ 130 , xx + 298 ) ; xx [ 99 ] = xx [ 298 ] + xx [ 14 ] * state [ 11 ] ; xx [
117 ] = xx [ 299 ] - xx [ 14 ] * state [ 10 ] ; xx [ 130 ] = xx [ 56 ] + xx [
99 ] ; xx [ 131 ] = xx [ 57 ] + xx [ 117 ] ; xx [ 132 ] = xx [ 58 ] + xx [
300 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 36 , xx + 130 , xx + 56 ) ;
xx [ 301 ] = xx [ 2 ] ; xx [ 302 ] = xx [ 29 ] ; xx [ 303 ] = xx [ 42 ] ; xx
[ 304 ] = xx [ 56 ] - xx [ 63 ] ; xx [ 305 ] = xx [ 57 ] + xx [ 82 ] ; xx [
306 ] = xx [ 58 ] + xx [ 85 ] ; xx [ 56 ] = 1.0e6 ; xx [ 57 ] = 1000.0 ; xx [
58 ] = 1.0e-4 ; xx [ 63 ] = 0.3191834979695327 ; xx [ 82 ] =
9.081201658414948e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , xx +
154 , ( const pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * )
( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) , ( const
pm_math_Vector3 * ) ( xx + 288 ) , ( const pm_math_Transform3 * ) ( xx + 123
) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3
* ) ( xx + 123 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , (
const pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 26 ] , xx [ 63 ] , xx [ 82 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 307 ) ) ; xx [ 85 ] = 0.4156269377774535 ;
xx [ 130 ] = - 0.5720614028176844 ; xx [ 313 ] = xx [ 85 ] ; xx [ 314 ] = xx
[ 85 ] ; xx [ 315 ] = xx [ 130 ] ; xx [ 316 ] = xx [ 130 ] ; xx [ 317 ] =
184.3713383751005 ; xx [ 318 ] = 238.0049127345362 ; xx [ 319 ] =
1.050000000000011 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 313 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ; xx
[ 132 ] = 0.3 ; xx [ 142 ] = 0.2119573811760597 ; xx [ 144 ] =
9.126024771145405e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , xx +
131 , ( const pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * )
( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) , ( const
pm_math_Vector3 * ) ( xx + 288 ) , ( const pm_math_Transform3 * ) ( xx + 313
) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3
* ) ( xx + 313 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , (
const pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 320 ) ) ; xx [ 326 ] = xx [ 85 ] ; xx [ 327
] = xx [ 85 ] ; xx [ 328 ] = xx [ 130 ] ; xx [ 329 ] = xx [ 130 ] ; xx [ 330
] = 166.7069842858238 ; xx [ 331 ] = 193.3478248916344 ; xx [ 332 ] = xx [ 86
] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 326 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 326 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
326 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 333 ) ) ; xx [ 131 ] = 0.9876883405951378 ;
xx [ 154 ] = - 0.1564344650402309 ; xx [ 339 ] = xx [ 131 ] ; xx [ 340 ] = xx
[ 86 ] ; xx [ 341 ] = xx [ 86 ] ; xx [ 342 ] = xx [ 154 ] ; xx [ 343 ] =
193.5164780524027 ; xx [ 344 ] = 260.9730498005379 ; xx [ 345 ] = 0.975 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 339 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 339 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
339 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 346 ) ) ; xx [ 352 ] = xx [ 131 ] ; xx [ 353
] = xx [ 86 ] ; xx [ 354 ] = xx [ 86 ] ; xx [ 355 ] = xx [ 154 ] ; xx [ 356 ]
= 193.7684927545367 ; xx [ 357 ] = 261.1014577049218 ; xx [ 358 ] = 0.9 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 352 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 352 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
352 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 359 ) ) ; xx [ 365 ] = xx [ 131 ] ; xx [ 366
] = xx [ 86 ] ; xx [ 367 ] = xx [ 86 ] ; xx [ 368 ] = xx [ 154 ] ; xx [ 369 ]
= 193.8778489792265 ; xx [ 370 ] = 261.2762181584621 ; xx [ 371 ] = 0.825 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 365 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 365 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
365 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 372 ) ) ; xx [ 378 ] = xx [ 131 ] ; xx [ 379
] = xx [ 86 ] ; xx [ 380 ] = xx [ 86 ] ; xx [ 381 ] = xx [ 154 ] ; xx [ 382 ]
= 198.1903775368156 ; xx [ 383 ] = 273.4809138711777 ; xx [ 384 ] = 0.675 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 378 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 378 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
378 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 385 ) ) ; xx [ 391 ] = xx [ 131 ] ; xx [ 392
] = xx [ 86 ] ; xx [ 393 ] = xx [ 86 ] ; xx [ 394 ] = xx [ 154 ] ; xx [ 395 ]
= 192.7082327603938 ; xx [ 396 ] = 259.1327401668225 ; xx [ 397 ] = 1.05 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 391 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 391 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
391 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 398 ) ) ; xx [ 404 ] = xx [ 85 ] ; xx [ 405
] = xx [ 85 ] ; xx [ 406 ] = xx [ 130 ] ; xx [ 407 ] = xx [ 130 ] ; xx [ 408
] = 196.1739979942743 ; xx [ 409 ] = 266.239593995601 ; xx [ 410 ] =
0.7500000000000142 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 404 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 404 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
404 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 411 ) ) ; xx [ 417 ] = xx [ 131 ] ; xx [ 418
] = xx [ 86 ] ; xx [ 419 ] = xx [ 86 ] ; xx [ 420 ] = xx [ 154 ] ; xx [ 421 ]
= 208.0525850482942 ; xx [ 422 ] = 299.8856646369118 ; xx [ 423 ] = 0.225 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 417 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 417 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
417 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 424 ) ) ; xx [ 430 ] = xx [ 85 ] ; xx [ 431
] = xx [ 85 ] ; xx [ 432 ] = xx [ 130 ] ; xx [ 433 ] = xx [ 130 ] ; xx [ 434
] = 205.2899993283352 ; xx [ 435 ] = 294.2957612263081 ; xx [ 436 ] =
0.2250000000000085 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 430 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 430 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
430 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 437 ) ) ; xx [ 443 ] = xx [ 85 ] ; xx [ 444
] = xx [ 85 ] ; xx [ 445 ] = xx [ 130 ] ; xx [ 446 ] = xx [ 130 ] ; xx [ 447
] = 200.963761407086 ; xx [ 448 ] = 280.9809699981759 ; xx [ 449 ] =
0.4500000000000171 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 443 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 443 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
443 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 450 ) ) ; xx [ 155 ] = - 0.7071067811865476
; xx [ 456 ] = xx [ 155 ] ; xx [ 457 ] = xx [ 155 ] ; xx [ 458 ] = xx [ 86 ]
; xx [ 459 ] = xx [ 86 ] ; xx [ 460 ] = 190.7396915419563 ; xx [ 461 ] =
246.7633282448585 ; xx [ 462 ] = 2.100000000000023 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 456 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 456 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
456 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 463 ) ) ; xx [ 155 ] = 0.3641869153381644 ;
xx [ 184 ] = - 0.6061088109378322 ; xx [ 188 ] = 0.8000000000000043 ; xx [
469 ] = xx [ 155 ] ; xx [ 470 ] = xx [ 155 ] ; xx [ 471 ] = xx [ 184 ] ; xx [
472 ] = xx [ 184 ] ; xx [ 473 ] = 193.6839660581704 ; xx [ 474 ] =
263.1763058730355 ; xx [ 475 ] = xx [ 188 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 469 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 189 , (
pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 278 ) , (
pm_math_Vector3 * ) ( xx + 288 ) , ( pm_math_Vector3 * ) ( xx + 476 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 189 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 469 ) , ( const pm_math_Transform3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 469 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 479 ) , NULL ) ; xx [ 189 ] = -
0.1227878039689728 ; xx [ 190 ] = - 0.696364240320019 ; xx [ 485 ] = xx [ 189
] ; xx [ 486 ] = xx [ 189 ] ; xx [ 487 ] = xx [ 190 ] ; xx [ 488 ] = xx [ 190
] ; xx [ 489 ] = - 264.4784728266952 ; xx [ 490 ] = - 185.744817993017 ; xx [
491 ] = xx [ 86 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 485 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 278 ) , (
pm_math_Vector3 * ) ( xx + 288 ) , ( pm_math_Vector3 * ) ( xx + 476 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 485 ) , ( const pm_math_Transform3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 485 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 492 ) , NULL ) ; xx [ 498 ] = xx [ 189 ] ;
xx [ 499 ] = xx [ 189 ] ; xx [ 500 ] = xx [ 190 ] ; xx [ 501 ] = xx [ 190 ] ;
xx [ 502 ] = 167.5926053784973 ; xx [ 503 ] = 220.5295098676078 ; xx [ 504 ]
= 0.4499999999999318 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 498 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 189 , (
pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 278 ) , (
pm_math_Vector3 * ) ( xx + 288 ) , ( pm_math_Vector3 * ) ( xx + 476 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 189 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 498 ) , ( const pm_math_Transform3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 498 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 505 ) , NULL ) ; xx [ 511 ] = xx [ 85 ] ; xx
[ 512 ] = xx [ 85 ] ; xx [ 513 ] = xx [ 130 ] ; xx [ 514 ] = xx [ 130 ] ; xx
[ 515 ] = 220.7542357687625 ; xx [ 516 ] = - 192.7086427489687 ; xx [ 517 ] =
0.9499999999999886 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 511 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 189 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 189 ) ,
( const pm_math_Vector3 * ) ( xx + 288 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 511 ) , ( const pm_math_Transform3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 511 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 518 ) , NULL ) ; xx [ 524 ] = xx [ 131 ] ;
xx [ 525 ] = xx [ 86 ] ; xx [ 526 ] = xx [ 86 ] ; xx [ 527 ] = xx [ 154 ] ;
xx [ 528 ] = 203.1933626757461 ; xx [ 529 ] = 288.8785188699961 ; xx [ 530 ]
= xx [ 132 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder
( ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 524 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 189 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 189 ) ,
( const pm_math_Vector3 * ) ( xx + 288 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 524 ) , ( const pm_math_Transform3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 524 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 531 ) , NULL ) ; xx [ 537 ] = xx [ 155 ] ;
xx [ 538 ] = xx [ 155 ] ; xx [ 539 ] = xx [ 184 ] ; xx [ 540 ] = xx [ 184 ] ;
xx [ 541 ] = 194.3380370415185 ; xx [ 542 ] = 263.2136039794473 ; xx [ 543 ]
= xx [ 188 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder
( ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 537 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 537 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
537 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 544 ) ) ; xx [ 85 ] = - 0.5720614028176843 ;
xx [ 130 ] = - 0.4156269377774535 ; xx [ 550 ] = xx [ 85 ] ; xx [ 551 ] = xx
[ 85 ] ; xx [ 552 ] = xx [ 130 ] ; xx [ 553 ] = xx [ 130 ] ; xx [ 554 ] =
194.7977288517685 ; xx [ 555 ] = 264.6574488545389 ; xx [ 556 ] =
1.499999999999986 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 550 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 550 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
550 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 557 ) ) ; xx [ 155 ] = 0.8999999999999915 ;
xx [ 563 ] = xx [ 85 ] ; xx [ 564 ] = xx [ 85 ] ; xx [ 565 ] = xx [ 130 ] ;
xx [ 566 ] = xx [ 130 ] ; xx [ 567 ] = 197.9188004949555 ; xx [ 568 ] =
274.2631196691199 ; xx [ 569 ] = xx [ 155 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 563 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 184 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 184 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 563 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
563 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 570 ) ) ; xx [ 576 ] = xx [ 85 ] ; xx [ 577
] = xx [ 85 ] ; xx [ 578 ] = xx [ 130 ] ; xx [ 579 ] = xx [ 130 ] ; xx [ 580
] = 198.4132276859554 ; xx [ 581 ] = 275.7848100951922 ; xx [ 582 ] = xx [
155 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 576 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 184 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 184 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 576 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
576 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 583 ) ) ; xx [ 589 ] = xx [ 85 ] ; xx [ 590
] = xx [ 85 ] ; xx [ 591 ] = xx [ 130 ] ; xx [ 592 ] = xx [ 130 ] ; xx [ 593
] = 198.9076548769553 ; xx [ 594 ] = 277.3065005212644 ; xx [ 595 ] = xx [
155 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 589 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 589 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
589 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 596 ) ) ; xx [ 602 ] = xx [ 85 ] ; xx [ 603
] = xx [ 85 ] ; xx [ 604 ] = xx [ 130 ] ; xx [ 605 ] = xx [ 130 ] ; xx [ 606
] = 203.2740650074733 ; xx [ 607 ] = 290.744929096515 ; xx [ 608 ] =
0.4499999999999886 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 602 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 602 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
602 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 609 ) ) ; xx [ 615 ] = xx [ 131 ] ; xx [ 616
] = xx [ 86 ] ; xx [ 617 ] = xx [ 86 ] ; xx [ 618 ] = xx [ 154 ] ; xx [ 619 ]
= 198.3139843345656 ; xx [ 620 ] = 273.8613364776958 ; xx [ 621 ] = 0.525 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 615 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 615 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
615 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 622 ) ) ; xx [ 628 ] = xx [ 131 ] ; xx [ 629
] = xx [ 86 ] ; xx [ 630 ] = xx [ 86 ] ; xx [ 631 ] = xx [ 154 ] ; xx [ 632 ]
= 198.2521809356906 ; xx [ 633 ] = 273.6711251744367 ; xx [ 634 ] = 0.6 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 628 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 628 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
628 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 635 ) ) ; xx [ 641 ] = xx [ 131 ] ; xx [ 642
] = xx [ 86 ] ; xx [ 643 ] = xx [ 86 ] ; xx [ 644 ] = xx [ 154 ] ; xx [ 645 ]
= 203.131559276871 ; xx [ 646 ] = 288.6883075667372 ; xx [ 647 ] = 0.375 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 641 ) , ( pm_math_Transform3 * ) ( xx + 281 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * )
( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 288 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
288 ) , ( const pm_math_Transform3 * ) ( xx + 641 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
641 ) , ( const pm_math_Transform3 * ) ( xx + 281 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 648 ) ) ; xx [ 188 ] = ( xx [ 89 ] + xx [
114 ] - xx [ 43 ] * inputDdot [ 3 ] ) * xx [ 27 ] - ( xx [ 310 ] + xx [ 323 ]
+ xx [ 336 ] + xx [ 349 ] + xx [ 362 ] + xx [ 375 ] + xx [ 388 ] + xx [ 401 ]
+ xx [ 414 ] + xx [ 427 ] + xx [ 440 ] + xx [ 453 ] + xx [ 466 ] + xx [ 482 ]
+ xx [ 495 ] + xx [ 495 ] + xx [ 508 ] + xx [ 521 ] + xx [ 534 ] + xx [ 547 ]
+ xx [ 560 ] + xx [ 573 ] + xx [ 586 ] + xx [ 599 ] + xx [ 612 ] + xx [ 625 ]
+ xx [ 638 ] + xx [ 651 ] ) ; xx [ 189 ] = ( xx [ 90 ] + xx [ 115 ] + xx [ 66
] * inputDdot [ 3 ] ) * xx [ 27 ] - ( xx [ 311 ] + xx [ 324 ] + xx [ 337 ] +
xx [ 350 ] + xx [ 363 ] + xx [ 376 ] + xx [ 389 ] + xx [ 402 ] + xx [ 415 ] +
xx [ 428 ] + xx [ 441 ] + xx [ 454 ] + xx [ 467 ] + xx [ 483 ] + xx [ 496 ] +
xx [ 496 ] + xx [ 509 ] + xx [ 522 ] + xx [ 535 ] + xx [ 548 ] + xx [ 561 ] +
xx [ 574 ] + xx [ 587 ] + xx [ 600 ] + xx [ 613 ] + xx [ 626 ] + xx [ 639 ] +
xx [ 652 ] ) ; xx [ 190 ] = ( xx [ 91 ] + xx [ 116 ] + xx [ 84 ] * inputDdot
[ 3 ] ) * xx [ 27 ] - ( xx [ 312 ] + xx [ 325 ] + xx [ 338 ] + xx [ 351 ] +
xx [ 364 ] + xx [ 377 ] + xx [ 390 ] + xx [ 403 ] + xx [ 416 ] + xx [ 429 ] +
xx [ 442 ] + xx [ 455 ] + xx [ 468 ] + xx [ 484 ] + xx [ 497 ] + xx [ 497 ] +
xx [ 510 ] + xx [ 523 ] + xx [ 536 ] + xx [ 549 ] + xx [ 562 ] + xx [ 575 ] +
xx [ 588 ] + xx [ 601 ] + xx [ 614 ] + xx [ 627 ] + xx [ 640 ] + xx [ 653 ] )
; pm_math_Quaternion_xform_ra ( xx + 36 , xx + 188 , xx + 89 ) ; xx [ 114 ] =
xx [ 87 ] ; xx [ 115 ] = xx [ 88 ] ; xx [ 116 ] = xx [ 98 ] ; xx [ 85 ] =
0.25 ; xx [ 87 ] = 0.2424242424242424 ; xx [ 88 ] = xx [ 85 ] * state [ 6 ] +
xx [ 87 ] * state [ 5 ] ; xx [ 98 ] = xx [ 87 ] * state [ 4 ] ; xx [ 188 ] =
- xx [ 88 ] ; xx [ 189 ] = xx [ 98 ] ; xx [ 190 ] = xx [ 85 ] * state [ 4 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 188 , xx + 271 ) ; xx [ 278 ] =
state [ 3 ] ; xx [ 279 ] = state [ 4 ] ; xx [ 280 ] = state [ 5 ] ; xx [ 281
] = state [ 6 ] ; xx [ 282 ] = xx [ 3 ] * ( xx [ 271 ] + xx [ 88 ] * state [
3 ] ) + xx [ 157 ] ; xx [ 283 ] = xx [ 3 ] * ( xx [ 272 ] - xx [ 98 ] * state
[ 3 ] ) - xx [ 85 ] + xx [ 160 ] ; xx [ 284 ] = xx [ 87 ] + ( xx [ 273 ] - xx
[ 85 ] * xx [ 150 ] ) * xx [ 3 ] + xx [ 183 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCxpoly (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 123 ) , ( pm_math_Transform3 * ) ( xx + 278 ) , xx + 88 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ; xx [ 654 ] = - xx [ 0 ]
; xx [ 655 ] = xx [ 86 ] ; xx [ 656 ] = xx [ 86 ] ; xx [ 657 ] = xx [ 86 ] ;
xx [ 658 ] = xx [ 86 ] ; xx [ 659 ] = - xx [ 85 ] ; xx [ 660 ] = xx [ 87 ] ;
xx [ 301 ] = state [ 10 ] ; xx [ 302 ] = state [ 11 ] ; xx [ 303 ] = state [
12 ] ; xx [ 304 ] = xx [ 99 ] ; xx [ 305 ] = xx [ 117 ] ; xx [ 306 ] = xx [
300 ] ; sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 88 , ( const
pm_math_Vector3 * ) ( xx + 114 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx +
285 ) , ( const pm_math_Transform3 * ) ( xx + 123 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
123 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 26 ] , xx [ 63 ] , xx [ 82 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 661 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 313 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 313 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
313 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 667 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_3 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 326 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 326 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
326 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 673 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_13 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 339 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 339 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
339 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 679 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_14 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 352 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 352 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
352 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 685 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_15 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 365 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 365 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
365 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 691 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_17 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 378 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 378 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
378 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 697 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_7 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 391 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 391 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
391 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 703 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_8 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 404 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 404 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
404 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 709 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_12 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 417 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 417 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
417 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 715 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_9 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 430 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 430 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
430 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 721 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_10 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 443 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 443 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
443 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 727 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_2 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 456 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 456 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
456 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 733 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 469 ) , ( pm_math_Transform3 * ) ( xx + 278 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , ( const
pm_math_Transform3 * ) ( xx + 469 ) , ( const pm_math_Transform3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 469 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 739 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 485 ) , ( pm_math_Transform3 * ) ( xx + 278 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , ( const
pm_math_Transform3 * ) ( xx + 485 ) , ( const pm_math_Transform3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 485 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 745 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 498 ) , ( pm_math_Transform3 * ) ( xx + 278 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , ( const
pm_math_Transform3 * ) ( xx + 498 ) , ( const pm_math_Transform3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 498 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 751 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_6 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
278 ) , ( pm_math_Transform3 * ) ( xx + 511 ) , xx + 0 , ( pm_math_Vector3 *
) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) (
xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 114 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx +
285 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , ( const
pm_math_Transform3 * ) ( xx + 511 ) , ( const pm_math_Transform3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 511 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 757 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 524 ) , ( pm_math_Transform3 * ) ( xx + 278 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , ( const
pm_math_Transform3 * ) ( xx + 524 ) , ( const pm_math_Transform3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 524 ) , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 763 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_20 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 537 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 537 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
537 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 769 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_21 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 550 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 550 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
550 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 775 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_22 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 563 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 563 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
563 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 781 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_23 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 576 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 576 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
576 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 787 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_24 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 589 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 589 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
589 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 793 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_25 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 602 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 602 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
602 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 799 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_19 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 615 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 615 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
615 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 805 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_18 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 628 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 628 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
628 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 811 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_16 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 278 ) , ( pm_math_Transform3 * ) ( xx + 641 ) , xx + 0 , ( pm_math_Vector3
* ) ( xx + 114 ) , ( pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * )
( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 285 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 0 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 114 ) ,
( const pm_math_Vector3 * ) ( xx + 285 ) , ( const pm_math_Vector3 * ) ( xx +
271 ) , ( const pm_math_Transform3 * ) ( xx + 641 ) , ( const
pm_math_Transform3 * ) ( xx + 654 ) , ( const pm_math_Transform3 * ) ( xx +
641 ) , ( const pm_math_Transform3 * ) ( xx + 278 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 301 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 817 ) ) ; pm_math_Quaternion_inverseXform_ra
( xx + 59 , xx + 4 , xx + 114 ) ; xx [ 0 ] = xx [ 28 ] * inputDot [ 2 ] ; xx
[ 85 ] = xx [ 114 ] - xx [ 0 ] ; xx [ 87 ] = xx [ 30 ] * inputDot [ 2 ] ; xx
[ 88 ] = xx [ 115 ] - xx [ 87 ] ; xx [ 98 ] = xx [ 31 ] * inputDot [ 2 ] ; xx
[ 130 ] = xx [ 116 ] + xx [ 98 ] ; xx [ 188 ] = xx [ 114 ] + xx [ 85 ] ; xx [
189 ] = xx [ 115 ] + xx [ 88 ] ; xx [ 190 ] = xx [ 116 ] + xx [ 130 ] ; xx [
131 ] = xx [ 43 ] * inputDot [ 2 ] ; xx [ 150 ] = xx [ 66 ] * inputDot [ 2 ]
; xx [ 154 ] = xx [ 84 ] * inputDot [ 2 ] ; xx [ 271 ] = - xx [ 131 ] ; xx [
272 ] = xx [ 150 ] ; xx [ 273 ] = xx [ 154 ] ; pm_math_Vector3_cross_ra ( xx
+ 188 , xx + 271 , xx + 278 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 68 ,
xx + 188 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 188 , xx + 271 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 59 , xx + 271 , xx + 281 ) ;
pm_math_Quaternion_compose_ra ( xx + 179 , xx + 59 , xx + 271 ) ;
pm_math_Quaternion_compose_ra ( xx + 271 , xx + 192 , xx + 284 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 275 , xx + 288 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 68 , xx + 271 ) ; xx [ 654 ] =
xx [ 284 ] ; xx [ 655 ] = xx [ 285 ] ; xx [ 656 ] = xx [ 286 ] ; xx [ 657 ] =
xx [ 287 ] ; xx [ 658 ] = xx [ 288 ] + xx [ 271 ] + xx [ 157 ] ; xx [ 659 ] =
xx [ 289 ] + xx [ 272 ] + xx [ 160 ] ; xx [ 660 ] = xx [ 290 ] + xx [ 273 ] +
xx [ 183 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 123 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 155 , (
pm_math_Vector3 * ) ( xx + 271 ) , ( pm_math_Vector3 * ) ( xx + 284 ) , (
pm_math_Vector3 * ) ( xx + 287 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ; xx
[ 304 ] = xx [ 188 ] + xx [ 99 ] ; xx [ 305 ] = xx [ 189 ] + xx [ 117 ] ; xx
[ 306 ] = xx [ 190 ] + xx [ 300 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
59 , xx + 304 , xx + 188 ) ; xx [ 823 ] = xx [ 85 ] ; xx [ 824 ] = xx [ 88 ]
; xx [ 825 ] = xx [ 130 ] ; xx [ 826 ] = xx [ 188 ] - xx [ 131 ] ; xx [ 827 ]
= xx [ 189 ] + xx [ 150 ] ; xx [ 828 ] = xx [ 190 ] + xx [ 154 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 155 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 284 ) ,
( const pm_math_Vector3 * ) ( xx + 287 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 123 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
123 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 26 ] , xx [ 63 ] , xx [ 82 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 829 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 313 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 313 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
313 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 301 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 326 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 326 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
326 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 835 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 339 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 339 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
339 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 841 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 352 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 352 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
352 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 847 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 365 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 365 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
365 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 853 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 378 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 378 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
378 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 859 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 391 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 391 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
391 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 865 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 404 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 404 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
404 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 871 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 417 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 417 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
417 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 877 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 430 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 430 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
430 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 883 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 443 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 443 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
443 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 889 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 456 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 456 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
456 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 895 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 469 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 287 ) , ( const pm_math_Vector3 * ) ( xx +
284 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 469 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 469 ) , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 901 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 485 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 287 ) , ( const pm_math_Vector3 * ) ( xx +
284 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 485 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 485 ) , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 907 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 498 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 287 ) , ( const pm_math_Vector3 * ) ( xx +
284 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 498 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 498 ) , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 913 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 511 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 287 ) , ( const pm_math_Vector3 * ) ( xx +
284 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 511 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 511 ) , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 919 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 524 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 271 ) , ( const pm_math_Vector3 * ) ( xx + 188 ) ,
( const pm_math_Vector3 * ) ( xx + 287 ) , ( const pm_math_Vector3 * ) ( xx +
284 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 524 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 524 ) , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 925 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 537 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 537 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
537 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 931 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 550 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 550 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
550 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 937 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 563 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 563 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
563 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 943 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 576 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 576 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
576 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 949 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 589 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 589 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
589 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 955 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 602 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 602 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
602 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 961 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 615 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 615 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
615 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 967 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 628 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 628 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
628 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 973 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 641 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 131 , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 271 ) , (
pm_math_Vector3 * ) ( xx + 284 ) , ( pm_math_Vector3 * ) ( xx + 287 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 131 , ( const
pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx + 271 ) ,
( const pm_math_Vector3 * ) ( xx + 284 ) , ( const pm_math_Vector3 * ) ( xx +
287 ) , ( const pm_math_Transform3 * ) ( xx + 641 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
641 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 823 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 979 ) ) ; xx [ 188 ] = ( xx [ 278 ] + xx [
281 ] - xx [ 43 ] * inputDdot [ 2 ] ) * xx [ 27 ] - ( xx [ 832 ] + xx [ 304 ]
+ xx [ 838 ] + xx [ 844 ] + xx [ 850 ] + xx [ 856 ] + xx [ 862 ] + xx [ 868 ]
+ xx [ 874 ] + xx [ 880 ] + xx [ 886 ] + xx [ 892 ] + xx [ 898 ] + xx [ 904 ]
+ xx [ 910 ] + xx [ 910 ] + xx [ 916 ] + xx [ 922 ] + xx [ 928 ] + xx [ 934 ]
+ xx [ 940 ] + xx [ 946 ] + xx [ 952 ] + xx [ 958 ] + xx [ 964 ] + xx [ 970 ]
+ xx [ 976 ] + xx [ 982 ] ) ; xx [ 189 ] = ( xx [ 279 ] + xx [ 282 ] + xx [
66 ] * inputDdot [ 2 ] ) * xx [ 27 ] - ( xx [ 833 ] + xx [ 305 ] + xx [ 839 ]
+ xx [ 845 ] + xx [ 851 ] + xx [ 857 ] + xx [ 863 ] + xx [ 869 ] + xx [ 875 ]
+ xx [ 881 ] + xx [ 887 ] + xx [ 893 ] + xx [ 899 ] + xx [ 905 ] + xx [ 911 ]
+ xx [ 911 ] + xx [ 917 ] + xx [ 923 ] + xx [ 929 ] + xx [ 935 ] + xx [ 941 ]
+ xx [ 947 ] + xx [ 953 ] + xx [ 959 ] + xx [ 965 ] + xx [ 971 ] + xx [ 977 ]
+ xx [ 983 ] ) ; xx [ 190 ] = ( xx [ 280 ] + xx [ 283 ] + xx [ 84 ] *
inputDdot [ 2 ] ) * xx [ 27 ] - ( xx [ 834 ] + xx [ 306 ] + xx [ 840 ] + xx [
846 ] + xx [ 852 ] + xx [ 858 ] + xx [ 864 ] + xx [ 870 ] + xx [ 876 ] + xx [
882 ] + xx [ 888 ] + xx [ 894 ] + xx [ 900 ] + xx [ 906 ] + xx [ 912 ] + xx [
912 ] + xx [ 918 ] + xx [ 924 ] + xx [ 930 ] + xx [ 936 ] + xx [ 942 ] + xx [
948 ] + xx [ 954 ] + xx [ 960 ] + xx [ 966 ] + xx [ 972 ] + xx [ 978 ] + xx [
984 ] ) ; pm_math_Quaternion_xform_ra ( xx + 59 , xx + 188 , xx + 271 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 101 , xx + 4 , xx + 188 ) ; xx [ 43
] = xx [ 28 ] * inputDot [ 1 ] ; xx [ 66 ] = xx [ 188 ] + xx [ 43 ] ; xx [
131 ] = xx [ 30 ] * inputDot [ 1 ] ; xx [ 150 ] = xx [ 189 ] + xx [ 131 ] ;
xx [ 154 ] = xx [ 20 ] * inputDot [ 1 ] ; xx [ 155 ] = xx [ 190 ] - xx [ 154
] ; xx [ 278 ] = xx [ 188 ] + xx [ 66 ] ; xx [ 279 ] = xx [ 189 ] + xx [ 150
] ; xx [ 280 ] = xx [ 190 ] + xx [ 155 ] ; xx [ 184 ] = 2.210274454944287e-12
; xx [ 191 ] = xx [ 184 ] * inputDot [ 1 ] ; xx [ 196 ] =
2.036762541319283e-6 ; xx [ 215 ] = xx [ 196 ] * inputDot [ 1 ] ; xx [ 216 ]
= xx [ 84 ] * inputDot [ 1 ] ; xx [ 281 ] = xx [ 191 ] ; xx [ 282 ] = - xx [
215 ] ; xx [ 283 ] = - xx [ 216 ] ; pm_math_Vector3_cross_ra ( xx + 278 , xx
+ 281 , xx + 284 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 92 , xx + 278 )
; pm_math_Vector3_cross_ra ( xx + 4 , xx + 278 , xx + 281 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 101 , xx + 281 , xx + 287 ) ;
pm_math_Quaternion_compose_ra ( xx + 179 , xx + 101 , xx + 654 ) ;
pm_math_Quaternion_compose_ra ( xx + 654 , xx + 192 , xx + 823 ) ;
pm_math_Quaternion_xform_ra ( xx + 654 , xx + 275 , xx + 281 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 92 , xx + 476 ) ; xx [ 654 ] =
xx [ 823 ] ; xx [ 655 ] = xx [ 824 ] ; xx [ 656 ] = xx [ 825 ] ; xx [ 657 ] =
xx [ 826 ] ; xx [ 658 ] = xx [ 281 ] + xx [ 476 ] + xx [ 157 ] ; xx [ 659 ] =
xx [ 282 ] + xx [ 477 ] + xx [ 160 ] ; xx [ 660 ] = xx [ 283 ] + xx [ 478 ] +
xx [ 183 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 123 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 274 , (
pm_math_Vector3 * ) ( xx + 281 ) , ( pm_math_Vector3 * ) ( xx + 476 ) , (
pm_math_Vector3 * ) ( xx + 823 ) , ( pm_math_Vector3 * ) ( xx + 826 ) ) ; xx
[ 985 ] = xx [ 278 ] + xx [ 99 ] ; xx [ 986 ] = xx [ 279 ] + xx [ 117 ] ; xx
[ 987 ] = xx [ 280 ] + xx [ 300 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
101 , xx + 985 , xx + 278 ) ; xx [ 985 ] = xx [ 66 ] ; xx [ 986 ] = xx [ 150
] ; xx [ 987 ] = xx [ 155 ] ; xx [ 988 ] = xx [ 278 ] + xx [ 191 ] ; xx [ 989
] = xx [ 279 ] - xx [ 215 ] ; xx [ 990 ] = xx [ 280 ] - xx [ 216 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 274 , ( const
pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 826 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 123 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 123 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , 2585.0 , xx [ 86 ] ,
xx [ 58 ] , 0.7 , 0.2210221665699612 , 8.699237272135131e-4 , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 991 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 313 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 313 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
313 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 997 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 339 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 339 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
339 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1003 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 352 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 352 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
352 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1009 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 365 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 365 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
365 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1015 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 378 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 378 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
378 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1021 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 404 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 404 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
404 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1027 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 391 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 391 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
391 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1033 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 430 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 430 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
430 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1039 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 417 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 417 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
417 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1045 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 443 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 443 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
443 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1051 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 326 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 326 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
326 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1057 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 456 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 456 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
456 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1063 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 469 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) ,
( const pm_math_Vector3 * ) ( xx + 823 ) , ( const pm_math_Vector3 * ) ( xx +
476 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 469 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 469 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1069 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 485 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) ,
( const pm_math_Vector3 * ) ( xx + 823 ) , ( const pm_math_Vector3 * ) ( xx +
476 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 485 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 485 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1075 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 498 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) ,
( const pm_math_Vector3 * ) ( xx + 823 ) , ( const pm_math_Vector3 * ) ( xx +
476 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 498 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 498 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1081 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 511 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) ,
( const pm_math_Vector3 * ) ( xx + 823 ) , ( const pm_math_Vector3 * ) ( xx +
476 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 511 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 511 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1087 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 524 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) ,
( const pm_math_Vector3 * ) ( xx + 823 ) , ( const pm_math_Vector3 * ) ( xx +
476 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 524 ) , ( const pm_math_Transform3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 524 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1093 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 537 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 537 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
537 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1099 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 550 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 550 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
550 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1105 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 563 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 563 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
563 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1111 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 576 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 576 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
576 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1117 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 589 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 589 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
589 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1123 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 602 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 602 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
602 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1129 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 615 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 615 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
615 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1135 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 628 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 628 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
628 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1141 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 641 ) , ( pm_math_Transform3 * ) ( xx + 654 ) , xx + 191 , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) , (
pm_math_Vector3 * ) ( xx + 476 ) , ( pm_math_Vector3 * ) ( xx + 823 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 191 , ( const
pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx + 281 ) ,
( const pm_math_Vector3 * ) ( xx + 476 ) , ( const pm_math_Vector3 * ) ( xx +
823 ) , ( const pm_math_Transform3 * ) ( xx + 641 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
641 ) , ( const pm_math_Transform3 * ) ( xx + 654 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1147 ) ) ; xx [ 278 ] = ( xx [ 284 ] + xx [
287 ] + xx [ 184 ] * inputDdot [ 1 ] ) * xx [ 27 ] - ( xx [ 994 ] + xx [ 1000
] + xx [ 1006 ] + xx [ 1012 ] + xx [ 1018 ] + xx [ 1024 ] + xx [ 1030 ] + xx
[ 1036 ] + xx [ 1042 ] + xx [ 1048 ] + xx [ 1054 ] + xx [ 1060 ] + xx [ 1066
] + xx [ 1072 ] + xx [ 1078 ] + xx [ 1078 ] + xx [ 1084 ] + xx [ 1090 ] + xx
[ 1096 ] + xx [ 1102 ] + xx [ 1108 ] + xx [ 1114 ] + xx [ 1120 ] + xx [ 1126
] + xx [ 1132 ] + xx [ 1138 ] + xx [ 1144 ] + xx [ 1150 ] ) ; xx [ 279 ] = (
xx [ 285 ] + xx [ 288 ] - xx [ 196 ] * inputDdot [ 1 ] ) * xx [ 27 ] - ( xx [
995 ] + xx [ 1001 ] + xx [ 1007 ] + xx [ 1013 ] + xx [ 1019 ] + xx [ 1025 ] +
xx [ 1031 ] + xx [ 1037 ] + xx [ 1043 ] + xx [ 1049 ] + xx [ 1055 ] + xx [
1061 ] + xx [ 1067 ] + xx [ 1073 ] + xx [ 1079 ] + xx [ 1079 ] + xx [ 1085 ]
+ xx [ 1091 ] + xx [ 1097 ] + xx [ 1103 ] + xx [ 1109 ] + xx [ 1115 ] + xx [
1121 ] + xx [ 1127 ] + xx [ 1133 ] + xx [ 1139 ] + xx [ 1145 ] + xx [ 1151 ]
) ; xx [ 280 ] = ( xx [ 286 ] + xx [ 289 ] - xx [ 84 ] * inputDdot [ 1 ] ) *
xx [ 27 ] - ( xx [ 996 ] + xx [ 1002 ] + xx [ 1008 ] + xx [ 1014 ] + xx [
1020 ] + xx [ 1026 ] + xx [ 1032 ] + xx [ 1038 ] + xx [ 1044 ] + xx [ 1050 ]
+ xx [ 1056 ] + xx [ 1062 ] + xx [ 1068 ] + xx [ 1074 ] + xx [ 1080 ] + xx [
1080 ] + xx [ 1086 ] + xx [ 1092 ] + xx [ 1098 ] + xx [ 1104 ] + xx [ 1110 ]
+ xx [ 1116 ] + xx [ 1122 ] + xx [ 1128 ] + xx [ 1134 ] + xx [ 1140 ] + xx [
1146 ] + xx [ 1152 ] ) ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 278 ,
xx + 281 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 4 , xx +
278 ) ; xx [ 191 ] = xx [ 28 ] * inputDot [ 0 ] ; xx [ 215 ] = xx [ 278 ] +
xx [ 191 ] ; xx [ 216 ] = xx [ 30 ] * inputDot [ 0 ] ; xx [ 274 ] = xx [ 279
] + xx [ 216 ] ; xx [ 284 ] = xx [ 20 ] * inputDot [ 0 ] ; xx [ 285 ] = xx [
280 ] - xx [ 284 ] ; xx [ 286 ] = xx [ 278 ] + xx [ 215 ] ; xx [ 287 ] = xx [
279 ] + xx [ 274 ] ; xx [ 288 ] = xx [ 280 ] + xx [ 285 ] ; xx [ 289 ] = xx [
184 ] * inputDot [ 0 ] ; xx [ 290 ] = xx [ 196 ] * inputDot [ 0 ] ; xx [ 476
] = xx [ 84 ] * inputDot [ 0 ] ; xx [ 654 ] = xx [ 289 ] ; xx [ 655 ] = - xx
[ 290 ] ; xx [ 656 ] = - xx [ 476 ] ; pm_math_Vector3_cross_ra ( xx + 286 ,
xx + 654 , xx + 657 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 95 , xx +
286 ) ; pm_math_Vector3_cross_ra ( xx + 4 , xx + 286 , xx + 654 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 119 , xx + 654 , xx + 823 ) ;
pm_math_Quaternion_compose_ra ( xx + 179 , xx + 119 , xx + 985 ) ;
pm_math_Quaternion_compose_ra ( xx + 985 , xx + 192 , xx + 1153 ) ;
pm_math_Quaternion_xform_ra ( xx + 985 , xx + 275 , xx + 192 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 95 , xx + 275 ) ; xx [ 1157 ] =
xx [ 1153 ] ; xx [ 1158 ] = xx [ 1154 ] ; xx [ 1159 ] = xx [ 1155 ] ; xx [
1160 ] = xx [ 1156 ] ; xx [ 1161 ] = xx [ 192 ] + xx [ 275 ] + xx [ 157 ] ;
xx [ 1162 ] = xx [ 193 ] + xx [ 276 ] + xx [ 160 ] ; xx [ 1163 ] = xx [ 194 ]
+ xx [ 277 ] + xx [ 183 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 123 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 157 , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) , (
pm_math_Vector3 * ) ( xx + 275 ) , ( pm_math_Vector3 * ) ( xx + 654 ) ) ; xx
[ 826 ] = xx [ 286 ] + xx [ 99 ] ; xx [ 827 ] = xx [ 287 ] + xx [ 117 ] ; xx
[ 828 ] = xx [ 288 ] + xx [ 300 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
119 , xx + 826 , xx + 286 ) ; xx [ 985 ] = xx [ 215 ] ; xx [ 986 ] = xx [ 274
] ; xx [ 987 ] = xx [ 285 ] ; xx [ 988 ] = xx [ 286 ] + xx [ 289 ] ; xx [ 989
] = xx [ 287 ] - xx [ 290 ] ; xx [ 990 ] = xx [ 288 ] - xx [ 476 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 157 , ( const
pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx + 192 ) ,
( const pm_math_Vector3 * ) ( xx + 275 ) , ( const pm_math_Vector3 * ) ( xx +
654 ) , ( const pm_math_Transform3 * ) ( xx + 123 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
123 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 26 ] , xx [ 63 ] , xx [ 82 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1164 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 313 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 313 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
313 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1170 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 326 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 326 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
326 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 313 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 339 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 339 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
339 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 326 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 352 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 352 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
352 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 339 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 365 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 365 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
365 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 352 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 378 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 378 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
378 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 365 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 404 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 404 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
404 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 378 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 391 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 391 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
391 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 404 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 430 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 430 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
430 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 391 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 417 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 417 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
417 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 430 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 443 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 443 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
443 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 417 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 456 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 456 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
456 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 443 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 469 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 126 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 192 ) , ( const pm_math_Vector3 * ) ( xx +
179 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 469 ) , ( const pm_math_Transform3 * ) ( xx +
1157 ) , ( const pm_math_Transform3 * ) ( xx + 469 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 456 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 485 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 126 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 192 ) , ( const pm_math_Vector3 * ) ( xx +
179 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 485 ) , ( const pm_math_Transform3 * ) ( xx +
1157 ) , ( const pm_math_Transform3 * ) ( xx + 485 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 469 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 498 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 126 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 192 ) , ( const pm_math_Vector3 * ) ( xx +
179 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 498 ) , ( const pm_math_Transform3 * ) ( xx +
1157 ) , ( const pm_math_Transform3 * ) ( xx + 498 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 485 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 511 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 126 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 192 ) , ( const pm_math_Vector3 * ) ( xx +
179 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 511 ) , ( const pm_math_Transform3 * ) ( xx +
1157 ) , ( const pm_math_Transform3 * ) ( xx + 511 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 498 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 524 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 126 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 192 ) , ( const pm_math_Vector3 * ) ( xx +
179 ) , ( const pm_math_Transform3 * ) ( xx + 291 ) , ( const
pm_math_Transform3 * ) ( xx + 524 ) , ( const pm_math_Transform3 * ) ( xx +
1157 ) , ( const pm_math_Transform3 * ) ( xx + 524 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 56 ] , xx [ 57 ]
, xx [ 58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 511 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 537 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 537 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
537 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 524 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 550 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 550 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
550 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 537 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 563 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 563 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
563 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 550 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 576 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 576 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
576 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 563 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 589 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 589 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
589 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 576 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 602 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 602 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
602 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 589 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 615 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 615 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
615 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 602 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 628 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 628 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
628 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 615 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 641 ) , ( pm_math_Transform3 * ) ( xx + 1157 ) , xx + 26 , (
pm_math_Vector3 * ) ( xx + 123 ) , ( pm_math_Vector3 * ) ( xx + 126 ) , (
pm_math_Vector3 * ) ( xx + 179 ) , ( pm_math_Vector3 * ) ( xx + 192 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 26 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 126 ) ,
( const pm_math_Vector3 * ) ( xx + 179 ) , ( const pm_math_Vector3 * ) ( xx +
192 ) , ( const pm_math_Transform3 * ) ( xx + 641 ) , ( const
pm_math_Transform3 * ) ( xx + 291 ) , ( const pm_math_Transform3 * ) ( xx +
641 ) , ( const pm_math_Transform3 * ) ( xx + 1157 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 56 ] , xx [ 57 ] , xx [
58 ] , xx [ 132 ] , xx [ 142 ] , xx [ 144 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 628 ) ) ; xx [ 56 ] = ( xx [ 657 ] + xx [
823 ] + xx [ 184 ] * inputDdot [ 0 ] ) * xx [ 27 ] - ( xx [ 1167 ] + xx [
1173 ] + xx [ 316 ] + xx [ 329 ] + xx [ 342 ] + xx [ 355 ] + xx [ 368 ] + xx
[ 381 ] + xx [ 407 ] + xx [ 394 ] + xx [ 433 ] + xx [ 420 ] + xx [ 446 ] + xx
[ 459 ] + xx [ 472 ] + xx [ 472 ] + xx [ 488 ] + xx [ 501 ] + xx [ 514 ] + xx
[ 527 ] + xx [ 540 ] + xx [ 553 ] + xx [ 566 ] + xx [ 579 ] + xx [ 592 ] + xx
[ 605 ] + xx [ 618 ] + xx [ 631 ] ) ; xx [ 57 ] = ( xx [ 658 ] + xx [ 824 ] -
xx [ 196 ] * inputDdot [ 0 ] ) * xx [ 27 ] - ( xx [ 1168 ] + xx [ 1174 ] + xx
[ 317 ] + xx [ 330 ] + xx [ 343 ] + xx [ 356 ] + xx [ 369 ] + xx [ 382 ] + xx
[ 408 ] + xx [ 395 ] + xx [ 434 ] + xx [ 421 ] + xx [ 447 ] + xx [ 460 ] + xx
[ 473 ] + xx [ 473 ] + xx [ 489 ] + xx [ 502 ] + xx [ 515 ] + xx [ 528 ] + xx
[ 541 ] + xx [ 554 ] + xx [ 567 ] + xx [ 580 ] + xx [ 593 ] + xx [ 606 ] + xx
[ 619 ] + xx [ 632 ] ) ; xx [ 58 ] = ( xx [ 659 ] + xx [ 825 ] - xx [ 84 ] *
inputDdot [ 0 ] ) * xx [ 27 ] - ( xx [ 1169 ] + xx [ 1175 ] + xx [ 318 ] + xx
[ 331 ] + xx [ 344 ] + xx [ 357 ] + xx [ 370 ] + xx [ 383 ] + xx [ 409 ] + xx
[ 396 ] + xx [ 435 ] + xx [ 422 ] + xx [ 448 ] + xx [ 461 ] + xx [ 474 ] + xx
[ 474 ] + xx [ 490 ] + xx [ 503 ] + xx [ 516 ] + xx [ 529 ] + xx [ 542 ] + xx
[ 555 ] + xx [ 568 ] + xx [ 581 ] + xx [ 594 ] + xx [ 607 ] + xx [ 620 ] + xx
[ 633 ] ) ; pm_math_Quaternion_xform_ra ( xx + 119 , xx + 56 , xx + 123 ) ;
xx [ 56 ] = xx [ 99 ] ; xx [ 57 ] = xx [ 117 ] ; xx [ 58 ] = xx [ 300 ] ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 56 , xx + 126 ) ; xx [ 56 ] = - xx [
298 ] ; xx [ 57 ] = - xx [ 299 ] ; xx [ 58 ] = - xx [ 300 ] ;
pm_math_Vector3_cross_ra ( xx + 4 , xx + 56 , xx + 179 ) ; xx [ 56 ] = xx [
126 ] + xx [ 179 ] ; xx [ 57 ] = xx [ 127 ] + xx [ 180 ] ; xx [ 58 ] = xx [
128 ] + xx [ 181 ] ; pm_math_Matrix3x3_xform_ra ( xx + 161 , xx + 56 , xx +
126 ) ; xx [ 26 ] = xx [ 89 ] - ( xx [ 664 ] + xx [ 670 ] + xx [ 676 ] + xx [
682 ] + xx [ 688 ] + xx [ 694 ] + xx [ 700 ] + xx [ 706 ] + xx [ 712 ] + xx [
718 ] + xx [ 724 ] + xx [ 730 ] + xx [ 736 ] + xx [ 742 ] + xx [ 748 ] + xx [
748 ] + xx [ 754 ] + xx [ 760 ] + xx [ 766 ] + xx [ 772 ] + xx [ 778 ] + xx [
784 ] + xx [ 790 ] + xx [ 796 ] + xx [ 802 ] + xx [ 808 ] + xx [ 814 ] + xx [
820 ] ) + xx [ 271 ] + xx [ 281 ] + xx [ 123 ] + xx [ 126 ] ; xx [ 27 ] = xx
[ 90 ] - ( xx [ 665 ] + xx [ 671 ] + xx [ 677 ] + xx [ 683 ] + xx [ 689 ] +
xx [ 695 ] + xx [ 701 ] + xx [ 707 ] + xx [ 713 ] + xx [ 719 ] + xx [ 725 ] +
xx [ 731 ] + xx [ 737 ] + xx [ 743 ] + xx [ 749 ] + xx [ 749 ] + xx [ 755 ] +
xx [ 761 ] + xx [ 767 ] + xx [ 773 ] + xx [ 779 ] + xx [ 785 ] + xx [ 791 ] +
xx [ 797 ] + xx [ 803 ] + xx [ 809 ] + xx [ 815 ] + xx [ 821 ] ) + xx [ 272 ]
+ xx [ 282 ] + xx [ 124 ] + xx [ 127 ] ; xx [ 160 ] = xx [ 26 ] ; xx [ 161 ]
= xx [ 27 ] ; xx [ 162 ] = xx [ 91 ] - ( xx [ 666 ] + xx [ 672 ] + xx [ 678 ]
+ xx [ 684 ] + xx [ 690 ] + xx [ 696 ] + xx [ 702 ] + xx [ 708 ] + xx [ 714 ]
+ xx [ 720 ] + xx [ 726 ] + xx [ 732 ] + xx [ 738 ] + xx [ 744 ] + xx [ 750 ]
+ xx [ 750 ] + xx [ 756 ] + xx [ 762 ] + xx [ 768 ] + xx [ 774 ] + xx [ 780 ]
+ xx [ 786 ] + xx [ 792 ] + xx [ 798 ] + xx [ 804 ] + xx [ 810 ] + xx [ 816 ]
+ xx [ 822 ] ) + xx [ 273 ] + xx [ 283 ] + xx [ 125 ] + xx [ 128 ] ; xx [ 126
] = xx [ 19 ] * state [ 10 ] ; xx [ 127 ] = xx [ 19 ] * state [ 11 ] ; xx [
128 ] = xx [ 40 ] * state [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 4 , xx +
126 , xx + 163 ) ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 29 ] ; xx [ 6 ] = xx
[ 42 ] ; xx [ 126 ] = xx [ 2 ] * xx [ 100 ] ; xx [ 127 ] = xx [ 29 ] * xx [
152 ] ; xx [ 128 ] = xx [ 42 ] * xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx +
4 , xx + 126 , xx + 166 ) ; xx [ 4 ] = - xx [ 1 ] ; xx [ 5 ] = - xx [ 23 ] ;
xx [ 6 ] = xx [ 35 ] ; pm_math_Vector3_cross_ra ( xx + 53 , xx + 4 , xx + 126
) ; xx [ 4 ] = xx [ 166 ] - xx [ 307 ] - xx [ 320 ] - xx [ 333 ] - xx [ 346 ]
- xx [ 359 ] - xx [ 372 ] - xx [ 385 ] - xx [ 398 ] - xx [ 411 ] - xx [ 424 ]
- xx [ 437 ] - xx [ 450 ] - xx [ 463 ] - xx [ 479 ] - xx [ 492 ] - xx [ 492 ]
- xx [ 505 ] - xx [ 518 ] - xx [ 531 ] - xx [ 544 ] - xx [ 557 ] - xx [ 570 ]
- xx [ 583 ] - xx [ 596 ] - xx [ 609 ] - xx [ 622 ] - xx [ 635 ] - xx [ 648 ]
+ ( xx [ 126 ] - xx [ 28 ] * inputDdot [ 3 ] ) * xx [ 100 ] ; xx [ 5 ] = xx [
167 ] - xx [ 308 ] - xx [ 321 ] - xx [ 334 ] - xx [ 347 ] - xx [ 360 ] - xx [
373 ] - xx [ 386 ] - xx [ 399 ] - xx [ 412 ] - xx [ 425 ] - xx [ 438 ] - xx [
451 ] - xx [ 464 ] - xx [ 480 ] - xx [ 493 ] - xx [ 493 ] - xx [ 506 ] - xx [
519 ] - xx [ 532 ] - xx [ 545 ] - xx [ 558 ] - xx [ 571 ] - xx [ 584 ] - xx [
597 ] - xx [ 610 ] - xx [ 623 ] - xx [ 636 ] - xx [ 649 ] + ( xx [ 127 ] - xx
[ 30 ] * inputDdot [ 3 ] ) * xx [ 152 ] ; xx [ 6 ] = xx [ 168 ] - xx [ 309 ]
- xx [ 322 ] - xx [ 335 ] - xx [ 348 ] - xx [ 361 ] - xx [ 374 ] - xx [ 387 ]
- xx [ 400 ] - xx [ 413 ] - xx [ 426 ] - xx [ 439 ] - xx [ 452 ] - xx [ 465 ]
- xx [ 481 ] - xx [ 494 ] - xx [ 494 ] - xx [ 507 ] - xx [ 520 ] - xx [ 533 ]
- xx [ 546 ] - xx [ 559 ] - xx [ 572 ] - xx [ 585 ] - xx [ 598 ] - xx [ 611 ]
- xx [ 624 ] - xx [ 637 ] - xx [ 650 ] + ( xx [ 128 ] + xx [ 31 ] * inputDdot
[ 3 ] ) * xx [ 153 ] ; pm_math_Quaternion_xform_ra ( xx + 36 , xx + 4 , xx +
53 ) ; pm_math_Vector3_cross_ra ( xx + 185 , xx + 89 , xx + 4 ) ; xx [ 35 ] =
xx [ 85 ] ; xx [ 36 ] = xx [ 88 ] ; xx [ 37 ] = xx [ 130 ] ; xx [ 38 ] = xx [
85 ] * xx [ 100 ] ; xx [ 39 ] = xx [ 88 ] * xx [ 152 ] ; xx [ 40 ] = xx [ 130
] * xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 38 , xx + 88 ) ;
xx [ 35 ] = - xx [ 0 ] ; xx [ 36 ] = - xx [ 87 ] ; xx [ 37 ] = xx [ 98 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 35 , xx + 0 ) ; xx [ 35 ] = xx [
88 ] - xx [ 829 ] - xx [ 301 ] - xx [ 835 ] - xx [ 841 ] - xx [ 847 ] - xx [
853 ] - xx [ 859 ] - xx [ 865 ] - xx [ 871 ] - xx [ 877 ] - xx [ 883 ] - xx [
889 ] - xx [ 895 ] - xx [ 901 ] - xx [ 907 ] - xx [ 907 ] - xx [ 913 ] - xx [
919 ] - xx [ 925 ] - xx [ 931 ] - xx [ 937 ] - xx [ 943 ] - xx [ 949 ] - xx [
955 ] - xx [ 961 ] - xx [ 967 ] - xx [ 973 ] - xx [ 979 ] + ( xx [ 0 ] - xx [
28 ] * inputDdot [ 2 ] ) * xx [ 100 ] ; xx [ 36 ] = xx [ 89 ] - xx [ 830 ] -
xx [ 302 ] - xx [ 836 ] - xx [ 842 ] - xx [ 848 ] - xx [ 854 ] - xx [ 860 ] -
xx [ 866 ] - xx [ 872 ] - xx [ 878 ] - xx [ 884 ] - xx [ 890 ] - xx [ 896 ] -
xx [ 902 ] - xx [ 908 ] - xx [ 908 ] - xx [ 914 ] - xx [ 920 ] - xx [ 926 ] -
xx [ 932 ] - xx [ 938 ] - xx [ 944 ] - xx [ 950 ] - xx [ 956 ] - xx [ 962 ] -
xx [ 968 ] - xx [ 974 ] - xx [ 980 ] + ( xx [ 1 ] - xx [ 30 ] * inputDdot [ 2
] ) * xx [ 152 ] ; xx [ 37 ] = xx [ 90 ] - xx [ 831 ] - xx [ 303 ] - xx [ 837
] - xx [ 843 ] - xx [ 849 ] - xx [ 855 ] - xx [ 861 ] - xx [ 867 ] - xx [ 873
] - xx [ 879 ] - xx [ 885 ] - xx [ 891 ] - xx [ 897 ] - xx [ 903 ] - xx [ 909
] - xx [ 909 ] - xx [ 915 ] - xx [ 921 ] - xx [ 927 ] - xx [ 933 ] - xx [ 939
] - xx [ 945 ] - xx [ 951 ] - xx [ 957 ] - xx [ 963 ] - xx [ 969 ] - xx [ 975
] - xx [ 981 ] + ( xx [ 2 ] + xx [ 31 ] * inputDdot [ 2 ] ) * xx [ 153 ] ;
pm_math_Quaternion_xform_ra ( xx + 59 , xx + 35 , xx + 0 ) ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 271 , xx + 35 ) ; xx [ 38 ] = xx [
66 ] ; xx [ 39 ] = xx [ 150 ] ; xx [ 40 ] = xx [ 155 ] ; xx [ 59 ] = xx [ 66
] * xx [ 100 ] ; xx [ 60 ] = xx [ 150 ] * xx [ 152 ] ; xx [ 61 ] = xx [ 155 ]
* xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx + 59 , xx + 68 ) ; xx
[ 38 ] = xx [ 43 ] ; xx [ 39 ] = xx [ 131 ] ; xx [ 40 ] = - xx [ 154 ] ;
pm_math_Vector3_cross_ra ( xx + 188 , xx + 38 , xx + 59 ) ; xx [ 38 ] = xx [
68 ] - xx [ 991 ] - xx [ 997 ] - xx [ 1003 ] - xx [ 1009 ] - xx [ 1015 ] - xx
[ 1021 ] - xx [ 1027 ] - xx [ 1033 ] - xx [ 1039 ] - xx [ 1045 ] - xx [ 1051
] - xx [ 1057 ] - xx [ 1063 ] - xx [ 1069 ] - xx [ 1075 ] - xx [ 1075 ] - xx
[ 1081 ] - xx [ 1087 ] - xx [ 1093 ] - xx [ 1099 ] - xx [ 1105 ] - xx [ 1111
] - xx [ 1117 ] - xx [ 1123 ] - xx [ 1129 ] - xx [ 1135 ] - xx [ 1141 ] - xx
[ 1147 ] + ( xx [ 59 ] + xx [ 28 ] * inputDdot [ 1 ] ) * xx [ 100 ] ; xx [ 39
] = xx [ 69 ] - xx [ 992 ] - xx [ 998 ] - xx [ 1004 ] - xx [ 1010 ] - xx [
1016 ] - xx [ 1022 ] - xx [ 1028 ] - xx [ 1034 ] - xx [ 1040 ] - xx [ 1046 ]
- xx [ 1052 ] - xx [ 1058 ] - xx [ 1064 ] - xx [ 1070 ] - xx [ 1076 ] - xx [
1076 ] - xx [ 1082 ] - xx [ 1088 ] - xx [ 1094 ] - xx [ 1100 ] - xx [ 1106 ]
- xx [ 1112 ] - xx [ 1118 ] - xx [ 1124 ] - xx [ 1130 ] - xx [ 1136 ] - xx [
1142 ] - xx [ 1148 ] + ( xx [ 60 ] + xx [ 30 ] * inputDdot [ 1 ] ) * xx [ 152
] ; xx [ 40 ] = xx [ 70 ] - xx [ 993 ] - xx [ 999 ] - xx [ 1005 ] - xx [ 1011
] - xx [ 1017 ] - xx [ 1023 ] - xx [ 1029 ] - xx [ 1035 ] - xx [ 1041 ] - xx
[ 1047 ] - xx [ 1053 ] - xx [ 1059 ] - xx [ 1065 ] - xx [ 1071 ] - xx [ 1077
] - xx [ 1077 ] - xx [ 1083 ] - xx [ 1089 ] - xx [ 1095 ] - xx [ 1101 ] - xx
[ 1107 ] - xx [ 1113 ] - xx [ 1119 ] - xx [ 1125 ] - xx [ 1131 ] - xx [ 1137
] - xx [ 1143 ] - xx [ 1149 ] + ( xx [ 61 ] - xx [ 20 ] * inputDdot [ 1 ] ) *
xx [ 153 ] ; pm_math_Quaternion_xform_ra ( xx + 101 , xx + 38 , xx + 59 ) ;
pm_math_Vector3_cross_ra ( xx + 92 , xx + 281 , xx + 38 ) ; xx [ 68 ] = xx [
215 ] ; xx [ 69 ] = xx [ 274 ] ; xx [ 70 ] = xx [ 285 ] ; xx [ 87 ] = xx [
215 ] * xx [ 100 ] ; xx [ 88 ] = xx [ 274 ] * xx [ 152 ] ; xx [ 89 ] = xx [
285 ] * xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx + 68 , xx + 87 , xx + 90 )
; xx [ 68 ] = xx [ 191 ] ; xx [ 69 ] = xx [ 216 ] ; xx [ 70 ] = - xx [ 284 ]
; pm_math_Vector3_cross_ra ( xx + 278 , xx + 68 , xx + 87 ) ; xx [ 68 ] = xx
[ 90 ] - xx [ 1164 ] - xx [ 1170 ] - xx [ 313 ] - xx [ 326 ] - xx [ 339 ] -
xx [ 352 ] - xx [ 365 ] - xx [ 378 ] - xx [ 404 ] - xx [ 391 ] - xx [ 430 ] -
xx [ 417 ] - xx [ 443 ] - xx [ 456 ] - xx [ 469 ] - xx [ 469 ] - xx [ 485 ] -
xx [ 498 ] - xx [ 511 ] - xx [ 524 ] - xx [ 537 ] - xx [ 550 ] - xx [ 563 ] -
xx [ 576 ] - xx [ 589 ] - xx [ 602 ] - xx [ 615 ] - xx [ 628 ] + ( xx [ 87 ]
+ xx [ 28 ] * inputDdot [ 0 ] ) * xx [ 100 ] ; xx [ 69 ] = xx [ 91 ] - xx [
1165 ] - xx [ 1171 ] - xx [ 314 ] - xx [ 327 ] - xx [ 340 ] - xx [ 353 ] - xx
[ 366 ] - xx [ 379 ] - xx [ 405 ] - xx [ 392 ] - xx [ 431 ] - xx [ 418 ] - xx
[ 444 ] - xx [ 457 ] - xx [ 470 ] - xx [ 470 ] - xx [ 486 ] - xx [ 499 ] - xx
[ 512 ] - xx [ 525 ] - xx [ 538 ] - xx [ 551 ] - xx [ 564 ] - xx [ 577 ] - xx
[ 590 ] - xx [ 603 ] - xx [ 616 ] - xx [ 629 ] + ( xx [ 88 ] + xx [ 30 ] *
inputDdot [ 0 ] ) * xx [ 152 ] ; xx [ 70 ] = xx [ 92 ] - xx [ 1166 ] - xx [
1172 ] - xx [ 315 ] - xx [ 328 ] - xx [ 341 ] - xx [ 354 ] - xx [ 367 ] - xx
[ 380 ] - xx [ 406 ] - xx [ 393 ] - xx [ 432 ] - xx [ 419 ] - xx [ 445 ] - xx
[ 458 ] - xx [ 471 ] - xx [ 471 ] - xx [ 487 ] - xx [ 500 ] - xx [ 513 ] - xx
[ 526 ] - xx [ 539 ] - xx [ 552 ] - xx [ 565 ] - xx [ 578 ] - xx [ 591 ] - xx
[ 604 ] - xx [ 617 ] - xx [ 630 ] + ( xx [ 89 ] - xx [ 20 ] * inputDdot [ 0 ]
) * xx [ 153 ] ; pm_math_Quaternion_xform_ra ( xx + 119 , xx + 68 , xx + 28 )
; pm_math_Vector3_cross_ra ( xx + 95 , xx + 123 , xx + 68 ) ; xx [ 87 ] = -
xx [ 18 ] ; xx [ 88 ] = - xx [ 65 ] ; xx [ 89 ] = - xx [ 71 ] ; xx [ 90 ] = -
xx [ 143 ] ; xx [ 91 ] = - xx [ 83 ] ; xx [ 92 ] = - xx [ 118 ] ; xx [ 93 ] =
xx [ 156 ] ; xx [ 94 ] = xx [ 158 ] ; xx [ 95 ] = xx [ 159 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 87 , xx + 56 , xx + 18 ) ; xx [ 96 ] = -
pm_math_Vector3_dot_ra ( xx + 15 , xx + 160 ) ; xx [ 97 ] = -
pm_math_Vector3_dot_ra ( xx + 170 , xx + 160 ) ; xx [ 98 ] = -
pm_math_Vector3_dot_ra ( xx + 176 , xx + 160 ) ; xx [ 99 ] = - ( xx [ 163 ] -
xx [ 661 ] - xx [ 667 ] - xx [ 673 ] - xx [ 679 ] - xx [ 685 ] - xx [ 691 ] -
xx [ 697 ] - xx [ 703 ] - xx [ 709 ] - xx [ 715 ] - xx [ 721 ] - xx [ 727 ] -
xx [ 733 ] - xx [ 739 ] - xx [ 745 ] - xx [ 745 ] - xx [ 751 ] - xx [ 757 ] -
xx [ 763 ] - xx [ 769 ] - xx [ 775 ] - xx [ 781 ] - xx [ 787 ] - xx [ 793 ] -
xx [ 799 ] - xx [ 805 ] - xx [ 811 ] - xx [ 817 ] + xx [ 53 ] + xx [ 4 ] + xx
[ 0 ] + xx [ 35 ] + xx [ 59 ] + xx [ 38 ] + xx [ 28 ] + xx [ 68 ] + xx [ 18 ]
- xx [ 27 ] * xx [ 14 ] ) ; xx [ 100 ] = - ( xx [ 164 ] - xx [ 662 ] - xx [
668 ] - xx [ 674 ] - xx [ 680 ] - xx [ 686 ] - xx [ 692 ] - xx [ 698 ] - xx [
704 ] - xx [ 710 ] - xx [ 716 ] - xx [ 722 ] - xx [ 728 ] - xx [ 734 ] - xx [
740 ] - xx [ 746 ] - xx [ 746 ] - xx [ 752 ] - xx [ 758 ] - xx [ 764 ] - xx [
770 ] - xx [ 776 ] - xx [ 782 ] - xx [ 788 ] - xx [ 794 ] - xx [ 800 ] - xx [
806 ] - xx [ 812 ] - xx [ 818 ] + xx [ 54 ] + xx [ 5 ] + xx [ 1 ] + xx [ 36 ]
+ xx [ 60 ] + xx [ 39 ] + xx [ 29 ] + xx [ 69 ] + xx [ 19 ] + xx [ 26 ] * xx
[ 14 ] ) ; xx [ 101 ] = - ( xx [ 165 ] - xx [ 663 ] - xx [ 669 ] - xx [ 675 ]
- xx [ 681 ] - xx [ 687 ] - xx [ 693 ] - xx [ 699 ] - xx [ 705 ] - xx [ 711 ]
- xx [ 717 ] - xx [ 723 ] - xx [ 729 ] - xx [ 735 ] - xx [ 741 ] - xx [ 747 ]
- xx [ 747 ] - xx [ 753 ] - xx [ 759 ] - xx [ 765 ] - xx [ 771 ] - xx [ 777 ]
- xx [ 783 ] - xx [ 789 ] - xx [ 795 ] - xx [ 801 ] - xx [ 807 ] - xx [ 813 ]
- xx [ 819 ] + xx [ 55 ] + xx [ 6 ] + xx [ 2 ] + xx [ 37 ] + xx [ 61 ] + xx [
40 ] + xx [ 30 ] + xx [ 70 ] + xx [ 20 ] ) ; solveSymmetricPosDef ( xx + 235
, xx + 96 , 6 , 1 , xx + 26 , xx + 35 ) ; pm_math_Matrix3x3_xform_ra ( xx +
87 , xx + 15 , xx + 0 ) ; pm_math_Matrix3x3_xform_ra ( xx + 87 , xx + 170 ,
xx + 4 ) ; pm_math_Matrix3x3_xform_ra ( xx + 87 , xx + 176 , xx + 15 ) ; xx [
271 ] = xx [ 0 ] ; xx [ 272 ] = xx [ 4 ] ; xx [ 273 ] = xx [ 15 ] ; xx [ 274
] = xx [ 21 ] ; xx [ 275 ] = xx [ 22 ] ; xx [ 276 ] = xx [ 24 ] ; xx [ 277 ]
= xx [ 1 ] ; xx [ 278 ] = xx [ 5 ] ; xx [ 279 ] = xx [ 16 ] ; xx [ 280 ] = xx
[ 229 ] - xx [ 47 ] + xx [ 220 ] - xx [ 76 ] + xx [ 200 ] - xx [ 108 ] + xx [
209 ] - xx [ 136 ] + xx [ 83 ] * xx [ 14 ] ; xx [ 281 ] = xx [ 32 ] ; xx [
282 ] = xx [ 33 ] ; xx [ 283 ] = xx [ 2 ] ; xx [ 284 ] = xx [ 6 ] ; xx [ 285
] = xx [ 17 ] ; xx [ 286 ] = xx [ 232 ] - xx [ 50 ] + xx [ 223 ] - xx [ 79 ]
+ xx [ 203 ] - xx [ 111 ] + xx [ 212 ] - xx [ 139 ] + xx [ 25 ] ; xx [ 287 ]
= xx [ 233 ] - xx [ 51 ] + xx [ 224 ] - xx [ 80 ] + xx [ 204 ] - xx [ 112 ] +
xx [ 213 ] - xx [ 140 ] - xx [ 34 ] ; xx [ 288 ] = xx [ 41 ] ; xx [ 289 ] =
xx [ 146 ] ; xx [ 290 ] = xx [ 173 ] ; xx [ 291 ] = xx [ 11 ] ; xx [ 292 ] =
xx [ 64 ] ; xx [ 293 ] = xx [ 145 ] ; xx [ 294 ] = xx [ 156 ] ; xx [ 295 ] =
xx [ 147 ] ; xx [ 296 ] = xx [ 174 ] ; xx [ 297 ] = xx [ 12 ] ; xx [ 298 ] =
xx [ 67 ] ; xx [ 299 ] = xx [ 149 ] ; xx [ 300 ] = xx [ 158 ] ; xx [ 301 ] =
xx [ 148 ] ; xx [ 302 ] = xx [ 175 ] ; xx [ 303 ] = xx [ 13 ] ; xx [ 304 ] =
xx [ 72 ] ; xx [ 305 ] = xx [ 151 ] ; xx [ 306 ] = xx [ 159 ] ;
solveSymmetricPosDef ( xx + 235 , xx + 271 , 6 , 6 , xx + 32 , xx + 11 ) ; xx
[ 0 ] = xx [ 50 ] ; xx [ 1 ] = xx [ 56 ] ; xx [ 2 ] = xx [ 62 ] ; xx [ 4 ] =
9.806649999999999 ; xx [ 5 ] = xx [ 4 ] * state [ 4 ] ; xx [ 6 ] = xx [ 4 ] *
state [ 5 ] ; xx [ 11 ] = xx [ 3 ] * ( xx [ 5 ] * state [ 6 ] - xx [ 6 ] *
state [ 3 ] ) ; xx [ 12 ] = ( xx [ 5 ] * state [ 3 ] + xx [ 6 ] * state [ 6 ]
) * xx [ 3 ] ; xx [ 13 ] = xx [ 4 ] - ( xx [ 5 ] * state [ 4 ] + xx [ 6 ] *
state [ 5 ] ) * xx [ 3 ] ; xx [ 3 ] = xx [ 51 ] ; xx [ 4 ] = xx [ 57 ] ; xx [
5 ] = xx [ 63 ] ; xx [ 14 ] = xx [ 52 ] ; xx [ 15 ] = xx [ 58 ] ; xx [ 16 ] =
xx [ 64 ] ; xx [ 17 ] = xx [ 53 ] ; xx [ 18 ] = xx [ 59 ] ; xx [ 19 ] = xx [
65 ] ; xx [ 20 ] = xx [ 54 ] ; xx [ 21 ] = xx [ 60 ] ; xx [ 22 ] = xx [ 66 ]
; xx [ 23 ] = xx [ 55 ] ; xx [ 24 ] = xx [ 61 ] ; xx [ 25 ] = xx [ 67 ] ;
deriv [ 0 ] = state [ 7 ] ; deriv [ 1 ] = state [ 8 ] ; deriv [ 2 ] = state [
9 ] ; deriv [ 3 ] = xx [ 7 ] ; deriv [ 4 ] = xx [ 8 ] ; deriv [ 5 ] = xx [ 9
] ; deriv [ 6 ] = xx [ 10 ] ; deriv [ 7 ] = xx [ 26 ] -
pm_math_Vector3_dot_ra ( xx + 0 , xx + 11 ) ; deriv [ 8 ] = xx [ 27 ] -
pm_math_Vector3_dot_ra ( xx + 3 , xx + 11 ) ; deriv [ 9 ] = xx [ 28 ] -
pm_math_Vector3_dot_ra ( xx + 14 , xx + 11 ) ; deriv [ 10 ] = xx [ 29 ] -
pm_math_Vector3_dot_ra ( xx + 17 , xx + 11 ) ; deriv [ 11 ] = xx [ 30 ] -
pm_math_Vector3_dot_ra ( xx + 20 , xx + 11 ) ; deriv [ 12 ] = xx [ 31 ] -
pm_math_Vector3_dot_ra ( xx + 23 , xx + 11 ) ; errorResult [ 0 ] = xx [ 86 ]
; return NULL ; } PmfMessageId ModeloManual_836bb176_1_numJacPerturbLoBounds
( const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags ,
const double * state , const int * modeVector , const double * input , const
double * inputDot , const double * inputDdot , const double * discreteState ,
double * bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) {
const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv
-> mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input
; ( void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-9 ; xx [ 1 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ;
bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 1 ] ;
bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx [ 1 ] ;
bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ;
bounds [ 10 ] = xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] = xx [ 1
] ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
ModeloManual_836bb176_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = + pmf_get_inf ( ) ; xx [ 1 ] = 0.1 ; bounds [ 0 ] = xx
[ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx
[ 1 ] ; bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx
[ 1 ] ; bounds [ 7 ] = xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx
[ 0 ] ; bounds [ 10 ] = xx [ 0 ] ; bounds [ 11 ] = xx [ 0 ] ; bounds [ 12 ] =
xx [ 0 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
