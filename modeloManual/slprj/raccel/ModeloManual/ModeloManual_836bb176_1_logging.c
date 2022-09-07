#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "ModeloManual_836bb176_1_geometries.h"
PmfMessageId ModeloManual_836bb176_1_recordLog ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , double * logVector , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
boolean_T bb [ 1 ] ; int ii [ 1 ] ; double xx [ 1161 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) input
; ( void ) inputDot ; ( void ) neDiagMgr ; xx [ 0 ] = 57.29577951308232 ; xx
[ 1 ] = 1.0 ; xx [ 2 ] = state [ 5 ] * state [ 5 ] ; xx [ 3 ] = state [ 6 ] *
state [ 6 ] ; xx [ 4 ] = 2.0 ; xx [ 5 ] = state [ 4 ] * state [ 5 ] ; xx [ 6
] = state [ 3 ] * state [ 6 ] ; xx [ 7 ] = state [ 3 ] * state [ 5 ] ; xx [ 8
] = state [ 4 ] * state [ 6 ] ; xx [ 9 ] = xx [ 1 ] - ( xx [ 2 ] + xx [ 3 ] )
* xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] * ( xx [ 5 ] - xx [ 6 ] ) ; xx [ 11 ] = (
xx [ 7 ] + xx [ 8 ] ) * xx [ 4 ] ; xx [ 12 ] = 0.6278882562148878 ; xx [ 13 ]
= 0.3252006217244244 ; xx [ 14 ] = 0.3252001096560881 ; xx [ 15 ] =
0.6278899441917698 ; xx [ 16 ] = - xx [ 12 ] ; xx [ 17 ] = - xx [ 13 ] ; xx [
18 ] = xx [ 14 ] ; xx [ 19 ] = xx [ 15 ] ; xx [ 20 ] = 0.5 ; xx [ 21 ] = xx [
20 ] * state [ 19 ] ; xx [ 22 ] = 0.9999999999968887 ; xx [ 23 ] = sin ( xx [
21 ] ) ; xx [ 24 ] = 2.452774191585849e-6 ; xx [ 25 ] = 4.548171450569072e-7
; xx [ 26 ] = cos ( xx [ 21 ] ) ; xx [ 27 ] = - ( xx [ 22 ] * xx [ 23 ] ) ;
xx [ 28 ] = - ( xx [ 24 ] * xx [ 23 ] ) ; xx [ 29 ] = xx [ 25 ] * xx [ 23 ] ;
pm_math_Quaternion_compose_ra ( xx + 16 , xx + 26 , xx + 30 ) ; xx [ 21 ] =
xx [ 30 ] * xx [ 30 ] ; xx [ 23 ] = ( xx [ 21 ] + xx [ 31 ] * xx [ 31 ] ) *
xx [ 4 ] - xx [ 1 ] ; xx [ 26 ] = xx [ 31 ] * xx [ 32 ] ; xx [ 27 ] = xx [ 30
] * xx [ 33 ] ; xx [ 28 ] = xx [ 4 ] * ( xx [ 26 ] - xx [ 27 ] ) ; xx [ 29 ]
= xx [ 31 ] * xx [ 33 ] ; xx [ 34 ] = xx [ 30 ] * xx [ 32 ] ; xx [ 35 ] = (
xx [ 29 ] + xx [ 34 ] ) * xx [ 4 ] ; xx [ 36 ] = ( xx [ 26 ] + xx [ 27 ] ) *
xx [ 4 ] ; xx [ 26 ] = ( xx [ 21 ] + xx [ 32 ] * xx [ 32 ] ) * xx [ 4 ] - xx
[ 1 ] ; xx [ 27 ] = xx [ 32 ] * xx [ 33 ] ; xx [ 37 ] = xx [ 30 ] * xx [ 31 ]
; xx [ 38 ] = xx [ 4 ] * ( xx [ 27 ] - xx [ 37 ] ) ; xx [ 39 ] = xx [ 4 ] * (
xx [ 29 ] - xx [ 34 ] ) ; xx [ 29 ] = ( xx [ 27 ] + xx [ 37 ] ) * xx [ 4 ] ;
xx [ 27 ] = ( xx [ 21 ] + xx [ 33 ] * xx [ 33 ] ) * xx [ 4 ] - xx [ 1 ] ; xx
[ 40 ] = xx [ 23 ] ; xx [ 41 ] = xx [ 28 ] ; xx [ 42 ] = xx [ 35 ] ; xx [ 43
] = xx [ 36 ] ; xx [ 44 ] = xx [ 26 ] ; xx [ 45 ] = xx [ 38 ] ; xx [ 46 ] =
xx [ 39 ] ; xx [ 47 ] = xx [ 29 ] ; xx [ 48 ] = xx [ 27 ] ; xx [ 21 ] =
0.01284385052499586 ; xx [ 49 ] = xx [ 21 ] * xx [ 23 ] ; xx [ 50 ] = xx [ 21
] * xx [ 36 ] ; xx [ 51 ] = xx [ 21 ] * xx [ 39 ] ; xx [ 52 ] = xx [ 21 ] *
xx [ 28 ] ; xx [ 53 ] = xx [ 21 ] * xx [ 26 ] ; xx [ 54 ] = xx [ 21 ] * xx [
29 ] ; xx [ 55 ] = xx [ 21 ] * xx [ 35 ] ; xx [ 56 ] = xx [ 21 ] * xx [ 38 ]
; xx [ 57 ] = xx [ 21 ] * xx [ 27 ] ; pm_math_Matrix3x3_compose_ra ( xx + 40
, xx + 49 , xx + 58 ) ; xx [ 34 ] = xx [ 20 ] * state [ 17 ] ; xx [ 37 ] =
sin ( xx [ 34 ] ) ; xx [ 49 ] = cos ( xx [ 34 ] ) ; xx [ 50 ] = - ( xx [ 22 ]
* xx [ 37 ] ) ; xx [ 51 ] = - ( xx [ 24 ] * xx [ 37 ] ) ; xx [ 52 ] = xx [ 25
] * xx [ 37 ] ; pm_math_Quaternion_compose_ra ( xx + 16 , xx + 49 , xx + 53 )
; xx [ 16 ] = xx [ 53 ] * xx [ 53 ] ; xx [ 17 ] = ( xx [ 16 ] + xx [ 54 ] *
xx [ 54 ] ) * xx [ 4 ] - xx [ 1 ] ; xx [ 18 ] = xx [ 54 ] * xx [ 55 ] ; xx [
19 ] = xx [ 53 ] * xx [ 56 ] ; xx [ 34 ] = xx [ 4 ] * ( xx [ 18 ] - xx [ 19 ]
) ; xx [ 37 ] = xx [ 54 ] * xx [ 56 ] ; xx [ 49 ] = xx [ 53 ] * xx [ 55 ] ;
xx [ 50 ] = ( xx [ 37 ] + xx [ 49 ] ) * xx [ 4 ] ; xx [ 51 ] = ( xx [ 18 ] +
xx [ 19 ] ) * xx [ 4 ] ; xx [ 18 ] = ( xx [ 16 ] + xx [ 55 ] * xx [ 55 ] ) *
xx [ 4 ] - xx [ 1 ] ; xx [ 19 ] = xx [ 55 ] * xx [ 56 ] ; xx [ 52 ] = xx [ 53
] * xx [ 54 ] ; xx [ 57 ] = xx [ 4 ] * ( xx [ 19 ] - xx [ 52 ] ) ; xx [ 67 ]
= xx [ 4 ] * ( xx [ 37 ] - xx [ 49 ] ) ; xx [ 37 ] = ( xx [ 19 ] + xx [ 52 ]
) * xx [ 4 ] ; xx [ 19 ] = ( xx [ 16 ] + xx [ 56 ] * xx [ 56 ] ) * xx [ 4 ] -
xx [ 1 ] ; xx [ 68 ] = xx [ 17 ] ; xx [ 69 ] = xx [ 34 ] ; xx [ 70 ] = xx [
50 ] ; xx [ 71 ] = xx [ 51 ] ; xx [ 72 ] = xx [ 18 ] ; xx [ 73 ] = xx [ 57 ]
; xx [ 74 ] = xx [ 67 ] ; xx [ 75 ] = xx [ 37 ] ; xx [ 76 ] = xx [ 19 ] ; xx
[ 77 ] = xx [ 21 ] * xx [ 17 ] ; xx [ 78 ] = xx [ 21 ] * xx [ 51 ] ; xx [ 79
] = xx [ 21 ] * xx [ 67 ] ; xx [ 80 ] = xx [ 21 ] * xx [ 34 ] ; xx [ 81 ] =
xx [ 21 ] * xx [ 18 ] ; xx [ 82 ] = xx [ 21 ] * xx [ 37 ] ; xx [ 83 ] = xx [
21 ] * xx [ 50 ] ; xx [ 84 ] = xx [ 21 ] * xx [ 57 ] ; xx [ 85 ] = xx [ 21 ]
* xx [ 19 ] ; pm_math_Matrix3x3_compose_ra ( xx + 68 , xx + 77 , xx + 86 ) ;
xx [ 77 ] = xx [ 15 ] ; xx [ 78 ] = xx [ 14 ] ; xx [ 79 ] = xx [ 13 ] ; xx [
80 ] = xx [ 12 ] ; xx [ 12 ] = xx [ 20 ] * state [ 15 ] ; xx [ 13 ] = sin (
xx [ 12 ] ) ; xx [ 14 ] = 4.54817144612818e-7 ; xx [ 81 ] = cos ( xx [ 12 ] )
; xx [ 82 ] = xx [ 22 ] * xx [ 13 ] ; xx [ 83 ] = xx [ 24 ] * xx [ 13 ] ; xx
[ 84 ] = - ( xx [ 14 ] * xx [ 13 ] ) ; pm_math_Quaternion_compose_ra ( xx +
77 , xx + 81 , xx + 95 ) ; xx [ 12 ] = xx [ 95 ] * xx [ 95 ] ; xx [ 13 ] = (
xx [ 12 ] + xx [ 96 ] * xx [ 96 ] ) * xx [ 4 ] - xx [ 1 ] ; xx [ 15 ] = xx [
96 ] * xx [ 97 ] ; xx [ 16 ] = xx [ 95 ] * xx [ 98 ] ; xx [ 49 ] = xx [ 4 ] *
( xx [ 15 ] - xx [ 16 ] ) ; xx [ 52 ] = xx [ 96 ] * xx [ 98 ] ; xx [ 81 ] =
xx [ 95 ] * xx [ 97 ] ; xx [ 82 ] = ( xx [ 52 ] + xx [ 81 ] ) * xx [ 4 ] ; xx
[ 83 ] = ( xx [ 15 ] + xx [ 16 ] ) * xx [ 4 ] ; xx [ 15 ] = ( xx [ 12 ] + xx
[ 97 ] * xx [ 97 ] ) * xx [ 4 ] - xx [ 1 ] ; xx [ 16 ] = xx [ 97 ] * xx [ 98
] ; xx [ 84 ] = xx [ 95 ] * xx [ 96 ] ; xx [ 85 ] = xx [ 4 ] * ( xx [ 16 ] -
xx [ 84 ] ) ; xx [ 99 ] = xx [ 4 ] * ( xx [ 52 ] - xx [ 81 ] ) ; xx [ 52 ] =
( xx [ 16 ] + xx [ 84 ] ) * xx [ 4 ] ; xx [ 16 ] = ( xx [ 12 ] + xx [ 98 ] *
xx [ 98 ] ) * xx [ 4 ] - xx [ 1 ] ; xx [ 100 ] = xx [ 13 ] ; xx [ 101 ] = xx
[ 49 ] ; xx [ 102 ] = xx [ 82 ] ; xx [ 103 ] = xx [ 83 ] ; xx [ 104 ] = xx [
15 ] ; xx [ 105 ] = xx [ 85 ] ; xx [ 106 ] = xx [ 99 ] ; xx [ 107 ] = xx [ 52
] ; xx [ 108 ] = xx [ 16 ] ; xx [ 109 ] = xx [ 21 ] * xx [ 13 ] ; xx [ 110 ]
= xx [ 21 ] * xx [ 83 ] ; xx [ 111 ] = xx [ 21 ] * xx [ 99 ] ; xx [ 112 ] =
xx [ 21 ] * xx [ 49 ] ; xx [ 113 ] = xx [ 21 ] * xx [ 15 ] ; xx [ 114 ] = xx
[ 21 ] * xx [ 52 ] ; xx [ 115 ] = xx [ 21 ] * xx [ 82 ] ; xx [ 116 ] = xx [
21 ] * xx [ 85 ] ; xx [ 117 ] = xx [ 21 ] * xx [ 16 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 100 , xx + 109 , xx + 118 ) ; xx [ 12 ] =
2.0625 ; xx [ 81 ] = xx [ 20 ] * state [ 13 ] ; xx [ 84 ] = sin ( xx [ 81 ] )
; xx [ 109 ] = cos ( xx [ 81 ] ) ; xx [ 110 ] = xx [ 22 ] * xx [ 84 ] ; xx [
111 ] = xx [ 24 ] * xx [ 84 ] ; xx [ 112 ] = - ( xx [ 14 ] * xx [ 84 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 77 , xx + 109 , xx + 113 ) ; xx [ 77 ] =
xx [ 113 ] * xx [ 113 ] ; xx [ 78 ] = ( xx [ 77 ] + xx [ 114 ] * xx [ 114 ] )
* xx [ 4 ] - xx [ 1 ] ; xx [ 79 ] = xx [ 114 ] * xx [ 115 ] ; xx [ 80 ] = xx
[ 113 ] * xx [ 116 ] ; xx [ 81 ] = xx [ 4 ] * ( xx [ 79 ] - xx [ 80 ] ) ; xx
[ 84 ] = xx [ 114 ] * xx [ 116 ] ; xx [ 109 ] = xx [ 113 ] * xx [ 115 ] ; xx
[ 110 ] = ( xx [ 84 ] + xx [ 109 ] ) * xx [ 4 ] ; xx [ 111 ] = ( xx [ 79 ] +
xx [ 80 ] ) * xx [ 4 ] ; xx [ 79 ] = ( xx [ 77 ] + xx [ 115 ] * xx [ 115 ] )
* xx [ 4 ] - xx [ 1 ] ; xx [ 80 ] = xx [ 115 ] * xx [ 116 ] ; xx [ 112 ] = xx
[ 113 ] * xx [ 114 ] ; xx [ 117 ] = xx [ 4 ] * ( xx [ 80 ] - xx [ 112 ] ) ;
xx [ 127 ] = xx [ 4 ] * ( xx [ 84 ] - xx [ 109 ] ) ; xx [ 84 ] = ( xx [ 80 ]
+ xx [ 112 ] ) * xx [ 4 ] ; xx [ 80 ] = ( xx [ 77 ] + xx [ 116 ] * xx [ 116 ]
) * xx [ 4 ] - xx [ 1 ] ; xx [ 128 ] = xx [ 78 ] ; xx [ 129 ] = xx [ 81 ] ;
xx [ 130 ] = xx [ 110 ] ; xx [ 131 ] = xx [ 111 ] ; xx [ 132 ] = xx [ 79 ] ;
xx [ 133 ] = xx [ 117 ] ; xx [ 134 ] = xx [ 127 ] ; xx [ 135 ] = xx [ 84 ] ;
xx [ 136 ] = xx [ 80 ] ; xx [ 137 ] = xx [ 21 ] * xx [ 78 ] ; xx [ 138 ] = xx
[ 21 ] * xx [ 111 ] ; xx [ 139 ] = xx [ 21 ] * xx [ 127 ] ; xx [ 140 ] = xx [
21 ] * xx [ 81 ] ; xx [ 141 ] = xx [ 21 ] * xx [ 79 ] ; xx [ 142 ] = xx [ 21
] * xx [ 84 ] ; xx [ 143 ] = xx [ 21 ] * xx [ 110 ] ; xx [ 144 ] = xx [ 21 ]
* xx [ 117 ] ; xx [ 145 ] = xx [ 21 ] * xx [ 80 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 128 , xx + 137 , xx + 146 ) ; xx [ 77 ] =
xx [ 58 ] + xx [ 86 ] + xx [ 118 ] + xx [ 12 ] + xx [ 146 ] ; xx [ 109 ] = xx
[ 59 ] + xx [ 87 ] + xx [ 119 ] + xx [ 147 ] ; xx [ 112 ] = xx [ 61 ] + xx [
89 ] + xx [ 121 ] + xx [ 149 ] ; xx [ 137 ] = xx [ 62 ] + xx [ 90 ] + xx [
122 ] + xx [ 12 ] + xx [ 150 ] ; xx [ 138 ] = xx [ 64 ] + xx [ 92 ] + xx [
124 ] + xx [ 152 ] ; xx [ 139 ] = xx [ 65 ] + xx [ 93 ] + xx [ 125 ] + xx [
153 ] ; xx [ 155 ] = xx [ 77 ] ; xx [ 156 ] = xx [ 109 ] ; xx [ 157 ] = xx [
60 ] + xx [ 88 ] + xx [ 120 ] + xx [ 148 ] ; xx [ 158 ] = xx [ 112 ] ; xx [
159 ] = xx [ 137 ] ; xx [ 160 ] = xx [ 63 ] + xx [ 91 ] + xx [ 123 ] + xx [
151 ] ; xx [ 161 ] = xx [ 138 ] ; xx [ 162 ] = xx [ 139 ] ; xx [ 163 ] = xx [
66 ] + xx [ 94 ] + xx [ 126 ] + xx [ 12 ] + xx [ 154 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 155 , xx + 9 , xx + 140 ) ; xx [ 12 ] =
state [ 4 ] * state [ 4 ] ; xx [ 143 ] = state [ 5 ] * state [ 6 ] ; xx [ 144
] = state [ 3 ] * state [ 4 ] ; xx [ 164 ] = ( xx [ 6 ] + xx [ 5 ] ) * xx [ 4
] ; xx [ 165 ] = xx [ 1 ] - ( xx [ 3 ] + xx [ 12 ] ) * xx [ 4 ] ; xx [ 166 ]
= xx [ 4 ] * ( xx [ 143 ] - xx [ 144 ] ) ; pm_math_Matrix3x3_xform_ra ( xx +
155 , xx + 164 , xx + 167 ) ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 9 , xx
+ 167 ) ; xx [ 170 ] = xx [ 4 ] * ( xx [ 8 ] - xx [ 7 ] ) ; xx [ 171 ] = ( xx
[ 144 ] + xx [ 143 ] ) * xx [ 4 ] ; xx [ 172 ] = xx [ 1 ] - ( xx [ 12 ] + xx
[ 2 ] ) * xx [ 4 ] ; pm_math_Matrix3x3_xform_ra ( xx + 155 , xx + 170 , xx +
5 ) ; xx [ 2 ] = pm_math_Vector3_dot_ra ( xx + 9 , xx + 5 ) ; xx [ 8 ] =
0.06607575757575757 ; xx [ 173 ] = - 0.0295595126783197 ; xx [ 174 ] =
6.051813684849961e-6 ; xx [ 175 ] = - 2.023318368173079e-6 ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 173 , xx + 176 ) ; xx [ 12 ] =
0.299 ; xx [ 143 ] = 0.02142424242424242 ; xx [ 179 ] = 0.164 - xx [ 176 ] ;
xx [ 180 ] = xx [ 12 ] - xx [ 177 ] ; xx [ 181 ] = xx [ 143 ] - xx [ 178 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 58 , xx + 179 , xx + 182 ) ; xx [ 58 ]
= 0.185 ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 173 , xx + 59 ) ; xx [
62 ] = - ( xx [ 58 ] + xx [ 59 ] ) ; xx [ 63 ] = xx [ 12 ] - xx [ 60 ] ; xx [
64 ] = xx [ 143 ] - xx [ 61 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 86 , xx
+ 62 , xx + 191 ) ; pm_math_Quaternion_xform_ra ( xx + 95 , xx + 173 , xx +
59 ) ; xx [ 12 ] = 0.2990000000000001 ; xx [ 65 ] = 0.0314242424242424 ; xx [
86 ] = 0.165 - xx [ 59 ] ; xx [ 87 ] = - ( xx [ 12 ] + xx [ 60 ] ) ; xx [ 88
] = xx [ 65 ] - xx [ 61 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 118 , xx +
86 , xx + 200 ) ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 173 , xx + 59
) ; xx [ 89 ] = - ( xx [ 58 ] + xx [ 59 ] ) ; xx [ 90 ] = - ( xx [ 12 ] + xx
[ 60 ] ) ; xx [ 91 ] = xx [ 65 ] - xx [ 61 ] ; pm_math_Matrix3x3_postCross_ra
( xx + 146 , xx + 89 , xx + 118 ) ; xx [ 12 ] = xx [ 182 ] + xx [ 191 ] + xx
[ 200 ] + xx [ 118 ] ; xx [ 58 ] = - ( xx [ 109 ] * xx [ 8 ] + xx [ 12 ] ) ;
xx [ 59 ] = xx [ 185 ] + xx [ 194 ] + xx [ 203 ] + xx [ 121 ] ; xx [ 60 ] =
xx [ 137 ] * xx [ 8 ] + xx [ 59 ] ; xx [ 61 ] = - xx [ 60 ] ; xx [ 65 ] = xx
[ 188 ] + xx [ 197 ] + xx [ 206 ] + xx [ 124 ] ; xx [ 66 ] = - ( xx [ 139 ] *
xx [ 8 ] + xx [ 65 ] ) ; xx [ 92 ] = xx [ 58 ] ; xx [ 93 ] = xx [ 61 ] ; xx [
94 ] = xx [ 66 ] ; xx [ 109 ] = pm_math_Vector3_dot_ra ( xx + 9 , xx + 92 ) ;
xx [ 137 ] = xx [ 183 ] + xx [ 192 ] + xx [ 201 ] + xx [ 119 ] ; xx [ 139 ] =
xx [ 77 ] * xx [ 8 ] - xx [ 137 ] ; xx [ 77 ] = xx [ 186 ] + xx [ 195 ] + xx
[ 204 ] + xx [ 122 ] ; xx [ 143 ] = xx [ 112 ] * xx [ 8 ] - xx [ 77 ] ; xx [
112 ] = xx [ 189 ] + xx [ 198 ] + xx [ 207 ] + xx [ 125 ] ; xx [ 145 ] = xx [
138 ] * xx [ 8 ] - xx [ 112 ] ; xx [ 146 ] = xx [ 139 ] ; xx [ 147 ] = xx [
143 ] ; xx [ 148 ] = xx [ 145 ] ; xx [ 138 ] = pm_math_Vector3_dot_ra ( xx +
9 , xx + 146 ) ; xx [ 149 ] = xx [ 184 ] + xx [ 193 ] + xx [ 202 ] + xx [ 120
] ; xx [ 150 ] = - xx [ 149 ] ; xx [ 151 ] = xx [ 187 ] + xx [ 196 ] + xx [
205 ] + xx [ 123 ] ; xx [ 152 ] = - xx [ 151 ] ; xx [ 153 ] = - ( xx [ 190 ]
+ xx [ 199 ] + xx [ 208 ] + xx [ 126 ] ) ; xx [ 173 ] = xx [ 150 ] ; xx [ 174
] = xx [ 152 ] ; xx [ 175 ] = xx [ 153 ] ; xx [ 154 ] =
pm_math_Vector3_dot_ra ( xx + 9 , xx + 173 ) ; xx [ 176 ] =
pm_math_Vector3_dot_ra ( xx + 164 , xx + 5 ) ; xx [ 177 ] =
pm_math_Vector3_dot_ra ( xx + 164 , xx + 92 ) ; xx [ 178 ] =
pm_math_Vector3_dot_ra ( xx + 164 , xx + 146 ) ; xx [ 209 ] =
pm_math_Vector3_dot_ra ( xx + 164 , xx + 173 ) ; xx [ 210 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 92 ) ; xx [ 92 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 146 ) ; xx [ 93 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 173 ) ; xx [ 94 ] =
5.688544690599872e-5 ; xx [ 146 ] = 3.061393619671982e-5 ; xx [ 147 ] =
3.061366842237662e-5 ; xx [ 211 ] = xx [ 94 ] * xx [ 23 ] ; xx [ 212 ] = xx [
94 ] * xx [ 36 ] ; xx [ 213 ] = xx [ 94 ] * xx [ 39 ] ; xx [ 214 ] = xx [ 146
] * xx [ 28 ] ; xx [ 215 ] = xx [ 146 ] * xx [ 26 ] ; xx [ 216 ] = xx [ 146 ]
* xx [ 29 ] ; xx [ 217 ] = xx [ 147 ] * xx [ 35 ] ; xx [ 218 ] = xx [ 147 ] *
xx [ 38 ] ; xx [ 219 ] = xx [ 147 ] * xx [ 27 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 211 , xx + 220 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 182 , xx + 179 , xx + 38 ) ; xx [ 182 ]
= xx [ 94 ] * xx [ 17 ] ; xx [ 183 ] = xx [ 94 ] * xx [ 51 ] ; xx [ 184 ] =
xx [ 94 ] * xx [ 67 ] ; xx [ 185 ] = xx [ 146 ] * xx [ 34 ] ; xx [ 186 ] = xx
[ 146 ] * xx [ 18 ] ; xx [ 187 ] = xx [ 146 ] * xx [ 37 ] ; xx [ 188 ] = xx [
147 ] * xx [ 50 ] ; xx [ 189 ] = xx [ 147 ] * xx [ 57 ] ; xx [ 190 ] = xx [
147 ] * xx [ 19 ] ; pm_math_Matrix3x3_compose_ra ( xx + 68 , xx + 182 , xx +
211 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 191 , xx + 62 , xx + 67 ) ; xx [
182 ] = xx [ 94 ] * xx [ 13 ] ; xx [ 183 ] = xx [ 94 ] * xx [ 83 ] ; xx [ 184
] = xx [ 94 ] * xx [ 99 ] ; xx [ 185 ] = xx [ 146 ] * xx [ 49 ] ; xx [ 186 ]
= xx [ 146 ] * xx [ 15 ] ; xx [ 187 ] = xx [ 146 ] * xx [ 52 ] ; xx [ 188 ] =
xx [ 147 ] * xx [ 82 ] ; xx [ 189 ] = xx [ 147 ] * xx [ 85 ] ; xx [ 190 ] =
xx [ 147 ] * xx [ 16 ] ; pm_math_Matrix3x3_compose_ra ( xx + 100 , xx + 182 ,
xx + 191 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 200 , xx + 86 , xx + 99 ) ;
xx [ 182 ] = xx [ 94 ] * xx [ 78 ] ; xx [ 183 ] = xx [ 94 ] * xx [ 111 ] ; xx
[ 184 ] = xx [ 94 ] * xx [ 127 ] ; xx [ 185 ] = xx [ 146 ] * xx [ 81 ] ; xx [
186 ] = xx [ 146 ] * xx [ 79 ] ; xx [ 187 ] = xx [ 146 ] * xx [ 84 ] ; xx [
188 ] = xx [ 147 ] * xx [ 110 ] ; xx [ 189 ] = xx [ 147 ] * xx [ 117 ] ; xx [
190 ] = xx [ 147 ] * xx [ 80 ] ; pm_math_Matrix3x3_compose_ra ( xx + 128 , xx
+ 182 , xx + 200 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 118 , xx + 89 , xx
+ 127 ) ; xx [ 13 ] = 6.392045454545454e-3 ; xx [ 15 ] = xx [ 220 ] - xx [ 38
] + xx [ 211 ] - xx [ 67 ] + xx [ 191 ] - xx [ 99 ] + xx [ 200 ] - xx [ 127 ]
+ xx [ 13 ] + xx [ 59 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 221 ] - xx [ 39 ] + xx
[ 212 ] - xx [ 68 ] + xx [ 192 ] - xx [ 100 ] + xx [ 201 ] - xx [ 128 ] - xx
[ 12 ] * xx [ 8 ] ; xx [ 17 ] = xx [ 16 ] - xx [ 8 ] * xx [ 143 ] ; xx [ 18 ]
= xx [ 222 ] - xx [ 40 ] + xx [ 213 ] - xx [ 69 ] + xx [ 193 ] - xx [ 101 ] +
xx [ 202 ] - xx [ 129 ] ; xx [ 19 ] = xx [ 151 ] * xx [ 8 ] ; xx [ 23 ] = xx
[ 18 ] + xx [ 19 ] ; xx [ 26 ] = xx [ 224 ] - xx [ 42 ] + xx [ 215 ] - xx [
71 ] + xx [ 195 ] - xx [ 103 ] + xx [ 204 ] - xx [ 131 ] + xx [ 13 ] - xx [
137 ] * xx [ 8 ] ; xx [ 27 ] = xx [ 225 ] - xx [ 43 ] + xx [ 216 ] - xx [ 72
] + xx [ 196 ] - xx [ 104 ] + xx [ 205 ] - xx [ 132 ] ; xx [ 28 ] = xx [ 149
] * xx [ 8 ] ; xx [ 29 ] = xx [ 27 ] - xx [ 28 ] ; xx [ 34 ] =
2.604166666666666e-3 ; xx [ 35 ] = xx [ 228 ] - xx [ 46 ] + xx [ 219 ] - xx [
75 ] + xx [ 199 ] - xx [ 107 ] + xx [ 34 ] + xx [ 208 ] - xx [ 135 ] ; xx [
229 ] = pm_math_Vector3_dot_ra ( xx + 9 , xx + 140 ) ; xx [ 230 ] = xx [ 3 ]
; xx [ 231 ] = xx [ 2 ] ; xx [ 232 ] = xx [ 109 ] ; xx [ 233 ] = xx [ 138 ] ;
xx [ 234 ] = xx [ 154 ] ; xx [ 235 ] = xx [ 3 ] ; xx [ 236 ] =
pm_math_Vector3_dot_ra ( xx + 164 , xx + 167 ) ; xx [ 237 ] = xx [ 176 ] ; xx
[ 238 ] = xx [ 177 ] ; xx [ 239 ] = xx [ 178 ] ; xx [ 240 ] = xx [ 209 ] ; xx
[ 241 ] = xx [ 2 ] ; xx [ 242 ] = xx [ 176 ] ; xx [ 243 ] =
pm_math_Vector3_dot_ra ( xx + 170 , xx + 5 ) ; xx [ 244 ] = xx [ 210 ] ; xx [
245 ] = xx [ 92 ] ; xx [ 246 ] = xx [ 93 ] ; xx [ 247 ] = xx [ 109 ] ; xx [
248 ] = xx [ 177 ] ; xx [ 249 ] = xx [ 210 ] ; xx [ 250 ] = xx [ 15 ] + xx [
8 ] * xx [ 60 ] ; xx [ 251 ] = xx [ 17 ] ; xx [ 252 ] = xx [ 23 ] ; xx [ 253
] = xx [ 138 ] ; xx [ 254 ] = xx [ 178 ] ; xx [ 255 ] = xx [ 92 ] ; xx [ 256
] = xx [ 17 ] ; xx [ 257 ] = xx [ 26 ] + xx [ 8 ] * xx [ 139 ] ; xx [ 258 ] =
xx [ 29 ] ; xx [ 259 ] = xx [ 154 ] ; xx [ 260 ] = xx [ 209 ] ; xx [ 261 ] =
xx [ 93 ] ; xx [ 262 ] = xx [ 23 ] ; xx [ 263 ] = xx [ 29 ] ; xx [ 264 ] = xx
[ 35 ] ; ii [ 0 ] = factorSymmetricPosDef ( xx + 229 , 6 , xx + 47 ) ; if (
ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'ModeloManual/ROBOT SS/DOF/6-DOF Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 47 ] = state [ 10 ] ; xx [ 48 ] = state [ 11 ] ; xx [
49 ] = state [ 12 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 47
, xx + 50 ) ; xx [ 2 ] = xx [ 22 ] * state [ 20 ] ; xx [ 3 ] = xx [ 50 ] - xx
[ 2 ] ; xx [ 17 ] = xx [ 24 ] * state [ 20 ] ; xx [ 23 ] = xx [ 51 ] - xx [
17 ] ; xx [ 29 ] = xx [ 25 ] * state [ 20 ] ; xx [ 36 ] = xx [ 52 ] + xx [ 29
] ; xx [ 78 ] = xx [ 50 ] + xx [ 3 ] ; xx [ 79 ] = xx [ 51 ] + xx [ 23 ] ; xx
[ 80 ] = xx [ 52 ] + xx [ 36 ] ; xx [ 37 ] = 2.210274452256742e-12 ; xx [ 57
] = xx [ 37 ] * state [ 20 ] ; xx [ 60 ] = 2.036762541332411e-6 ; xx [ 76 ] =
xx [ 60 ] * state [ 20 ] ; xx [ 81 ] = 6.12431649464437e-6 ; xx [ 82 ] = xx [
81 ] * state [ 20 ] ; xx [ 83 ] = - xx [ 57 ] ; xx [ 84 ] = xx [ 76 ] ; xx [
85 ] = xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 78 , xx + 83 , xx + 108 )
; pm_math_Vector3_cross_ra ( xx + 47 , xx + 179 , xx + 78 ) ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 78 , xx + 83 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 83 , xx + 117 ) ; xx [ 83
] = 0.0 ; xx [ 120 ] = xx [ 1 ] ; xx [ 121 ] = xx [ 83 ] ; xx [ 122 ] = xx [
83 ] ; xx [ 123 ] = xx [ 83 ] ; xx [ 124 ] = xx [ 83 ] ; xx [ 125 ] = xx [ 83
] ; xx [ 126 ] = xx [ 83 ] ; xx [ 84 ] = - state [ 4 ] ; xx [ 85 ] = - state
[ 5 ] ; xx [ 92 ] = - state [ 6 ] ; xx [ 173 ] = - state [ 3 ] ; xx [ 174 ] =
xx [ 84 ] ; xx [ 175 ] = xx [ 85 ] ; xx [ 176 ] = xx [ 92 ] ;
pm_math_Quaternion_compose_ra ( xx + 173 , xx + 30 , xx + 182 ) ; xx [ 93 ] =
- 0.6739364401572719 ; xx [ 111 ] = - 0.2140340345964144 ; xx [ 136 ] =
0.6739356086643653 ; xx [ 138 ] = 0.2140324789295218 ; xx [ 186 ] = xx [ 93 ]
; xx [ 187 ] = xx [ 111 ] ; xx [ 188 ] = xx [ 136 ] ; xx [ 189 ] = xx [ 138 ]
; pm_math_Quaternion_compose_ra ( xx + 182 , xx + 186 , xx + 265 ) ; xx [ 148
] = - 3.469446951942819e-18 ; xx [ 149 ] = - 8.509769942854391e-24 ; xx [ 151
] = 1.577963957063434e-24 ; xx [ 269 ] = xx [ 148 ] ; xx [ 270 ] = xx [ 149 ]
; xx [ 271 ] = xx [ 151 ] ; pm_math_Quaternion_xform_ra ( xx + 182 , xx + 269
, xx + 272 ) ; pm_math_Quaternion_xform_ra ( xx + 173 , xx + 179 , xx + 182 )
; xx [ 154 ] = xx [ 8 ] * state [ 5 ] ; xx [ 177 ] = xx [ 8 ] * state [ 4 ] ;
xx [ 178 ] = state [ 0 ] + ( xx [ 154 ] * state [ 3 ] + xx [ 177 ] * state [
6 ] ) * xx [ 4 ] ; xx [ 185 ] = state [ 1 ] - xx [ 4 ] * ( xx [ 177 ] * state
[ 3 ] - xx [ 154 ] * state [ 6 ] ) ; xx [ 190 ] = state [ 2 ] - ( xx [ 177 ]
* state [ 4 ] + xx [ 154 ] * state [ 5 ] ) * xx [ 4 ] + xx [ 8 ] ; xx [ 275 ]
= xx [ 265 ] ; xx [ 276 ] = xx [ 266 ] ; xx [ 277 ] = xx [ 267 ] ; xx [ 278 ]
= xx [ 268 ] ; xx [ 279 ] = xx [ 272 ] + xx [ 182 ] + xx [ 178 ] ; xx [ 280 ]
= xx [ 273 ] + xx [ 183 ] + xx [ 185 ] ; xx [ 281 ] = xx [ 274 ] + xx [ 184 ]
+ xx [ 190 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoPlaneCylinder
( ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 120 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 154 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ; xx
[ 285 ] = xx [ 93 ] ; xx [ 286 ] = xx [ 111 ] ; xx [ 287 ] = xx [ 136 ] ; xx
[ 288 ] = xx [ 138 ] ; xx [ 289 ] = xx [ 148 ] ; xx [ 290 ] = xx [ 149 ] ; xx
[ 291 ] = xx [ 151 ] ; xx [ 292 ] = state [ 7 ] ; xx [ 293 ] = state [ 8 ] ;
xx [ 294 ] = state [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 173 , xx
+ 292 , xx + 295 ) ; xx [ 93 ] = xx [ 295 ] + xx [ 8 ] * state [ 11 ] ; xx [
111 ] = xx [ 296 ] - xx [ 8 ] * state [ 10 ] ; xx [ 292 ] = xx [ 78 ] + xx [
93 ] ; xx [ 293 ] = xx [ 79 ] + xx [ 111 ] ; xx [ 294 ] = xx [ 80 ] + xx [
297 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 30 , xx + 292 , xx + 78 ) ;
xx [ 298 ] = xx [ 3 ] ; xx [ 299 ] = xx [ 23 ] ; xx [ 300 ] = xx [ 36 ] ; xx
[ 301 ] = xx [ 78 ] - xx [ 57 ] ; xx [ 302 ] = xx [ 79 ] + xx [ 76 ] ; xx [
303 ] = xx [ 80 ] + xx [ 82 ] ; xx [ 57 ] = 1.0e6 ; xx [ 76 ] = 1000.0 ; xx [
78 ] = 1.0e-4 ; xx [ 79 ] = 0.3191834979695327 ; xx [ 80 ] =
9.081201658414948e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , xx +
154 , ( const pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * )
( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) , ( const
pm_math_Vector3 * ) ( xx + 282 ) , ( const pm_math_Transform3 * ) ( xx + 120
) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3
* ) ( xx + 120 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , (
const pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 20 ] , xx [ 79 ] , xx [ 80 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 304 ) ) ; xx [ 82 ] = 0.4156269377774535 ;
xx [ 136 ] = - 0.5720614028176844 ; xx [ 310 ] = xx [ 82 ] ; xx [ 311 ] = xx
[ 82 ] ; xx [ 312 ] = xx [ 136 ] ; xx [ 313 ] = xx [ 136 ] ; xx [ 314 ] =
184.3713383751005 ; xx [ 315 ] = 238.0049127345362 ; xx [ 316 ] =
1.050000000000011 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 310 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ; xx
[ 148 ] = 0.3 ; xx [ 149 ] = 0.2119573811760597 ; xx [ 151 ] =
9.126024771145405e-4 ; sm_core_compiler_computeContactWrenches ( 0 , 1 , xx +
138 , ( const pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * )
( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) , ( const
pm_math_Vector3 * ) ( xx + 282 ) , ( const pm_math_Transform3 * ) ( xx + 310
) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3
* ) ( xx + 310 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , (
const pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 317 ) ) ; xx [ 323 ] = xx [ 82 ] ; xx [ 324
] = xx [ 82 ] ; xx [ 325 ] = xx [ 136 ] ; xx [ 326 ] = xx [ 136 ] ; xx [ 327
] = 166.7069842858238 ; xx [ 328 ] = 193.3478248916344 ; xx [ 329 ] = xx [ 83
] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 323 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 323 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
323 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 330 ) ) ; xx [ 138 ] = 0.9876883405951378 ;
xx [ 154 ] = - 0.1564344650402309 ; xx [ 336 ] = xx [ 138 ] ; xx [ 337 ] = xx
[ 83 ] ; xx [ 338 ] = xx [ 83 ] ; xx [ 339 ] = xx [ 154 ] ; xx [ 340 ] =
193.5164780524027 ; xx [ 341 ] = 260.9730498005379 ; xx [ 342 ] = 0.975 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 336 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 336 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
336 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 343 ) ) ; xx [ 349 ] = xx [ 138 ] ; xx [ 350
] = xx [ 83 ] ; xx [ 351 ] = xx [ 83 ] ; xx [ 352 ] = xx [ 154 ] ; xx [ 353 ]
= 193.7684927545367 ; xx [ 354 ] = 261.1014577049218 ; xx [ 355 ] = 0.9 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 349 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 349 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
349 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 356 ) ) ; xx [ 362 ] = xx [ 138 ] ; xx [ 363
] = xx [ 83 ] ; xx [ 364 ] = xx [ 83 ] ; xx [ 365 ] = xx [ 154 ] ; xx [ 366 ]
= 193.8778489792265 ; xx [ 367 ] = 261.2762181584621 ; xx [ 368 ] = 0.825 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 362 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 362 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
362 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 369 ) ) ; xx [ 375 ] = xx [ 138 ] ; xx [ 376
] = xx [ 83 ] ; xx [ 377 ] = xx [ 83 ] ; xx [ 378 ] = xx [ 154 ] ; xx [ 379 ]
= 198.1903775368156 ; xx [ 380 ] = 273.4809138711777 ; xx [ 381 ] = 0.675 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 375 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 375 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
375 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 382 ) ) ; xx [ 388 ] = xx [ 138 ] ; xx [ 389
] = xx [ 83 ] ; xx [ 390 ] = xx [ 83 ] ; xx [ 391 ] = xx [ 154 ] ; xx [ 392 ]
= 192.7082327603938 ; xx [ 393 ] = 259.1327401668225 ; xx [ 394 ] = 1.05 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 388 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 388 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
388 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 395 ) ) ; xx [ 401 ] = xx [ 82 ] ; xx [ 402
] = xx [ 82 ] ; xx [ 403 ] = xx [ 136 ] ; xx [ 404 ] = xx [ 136 ] ; xx [ 405
] = 196.1739979942743 ; xx [ 406 ] = 266.239593995601 ; xx [ 407 ] =
0.7500000000000142 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 401 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 401 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
401 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 408 ) ) ; xx [ 414 ] = xx [ 138 ] ; xx [ 415
] = xx [ 83 ] ; xx [ 416 ] = xx [ 83 ] ; xx [ 417 ] = xx [ 154 ] ; xx [ 418 ]
= 208.0525850482942 ; xx [ 419 ] = 299.8856646369118 ; xx [ 420 ] = 0.225 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 414 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 414 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
414 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 421 ) ) ; xx [ 427 ] = xx [ 82 ] ; xx [ 428
] = xx [ 82 ] ; xx [ 429 ] = xx [ 136 ] ; xx [ 430 ] = xx [ 136 ] ; xx [ 431
] = 205.2899993283352 ; xx [ 432 ] = 294.2957612263081 ; xx [ 433 ] =
0.2250000000000085 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 427 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 427 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
427 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 434 ) ) ; xx [ 440 ] = xx [ 82 ] ; xx [ 441
] = xx [ 82 ] ; xx [ 442 ] = xx [ 136 ] ; xx [ 443 ] = xx [ 136 ] ; xx [ 444
] = 200.963761407086 ; xx [ 445 ] = 280.9809699981759 ; xx [ 446 ] =
0.4500000000000171 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 440 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 440 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
440 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 447 ) ) ; xx [ 177 ] = - 0.7071067811865476
; xx [ 453 ] = xx [ 177 ] ; xx [ 454 ] = xx [ 177 ] ; xx [ 455 ] = xx [ 83 ]
; xx [ 456 ] = xx [ 83 ] ; xx [ 457 ] = 190.7396915419563 ; xx [ 458 ] =
246.7633282448585 ; xx [ 459 ] = 2.100000000000023 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 453 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 453 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
453 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 460 ) ) ; xx [ 177 ] = 0.3641869153381644 ;
xx [ 182 ] = - 0.6061088109378322 ; xx [ 183 ] = 0.8000000000000043 ; xx [
466 ] = xx [ 177 ] ; xx [ 467 ] = xx [ 177 ] ; xx [ 468 ] = xx [ 182 ] ; xx [
469 ] = xx [ 182 ] ; xx [ 470 ] = 193.6839660581704 ; xx [ 471 ] =
263.1763058730355 ; xx [ 472 ] = xx [ 183 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 466 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 184 , (
pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , (
pm_math_Vector3 * ) ( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 184 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 292 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 466 ) , ( const pm_math_Transform3 * ) ( xx +
275 ) , ( const pm_math_Transform3 * ) ( xx + 466 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 473 ) , NULL ) ; xx [ 184 ] = -
0.1227878039689728 ; xx [ 209 ] = - 0.696364240320019 ; xx [ 479 ] = xx [ 184
] ; xx [ 480 ] = xx [ 184 ] ; xx [ 481 ] = xx [ 209 ] ; xx [ 482 ] = xx [ 209
] ; xx [ 483 ] = - 264.4784728266952 ; xx [ 484 ] = - 185.744817993017 ; xx [
485 ] = xx [ 83 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 479 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , (
pm_math_Vector3 * ) ( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 292 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 479 ) , ( const pm_math_Transform3 * ) ( xx +
275 ) , ( const pm_math_Transform3 * ) ( xx + 479 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 486 ) , NULL ) ; xx [ 492 ] = xx [ 184 ] ;
xx [ 493 ] = xx [ 184 ] ; xx [ 494 ] = xx [ 209 ] ; xx [ 495 ] = xx [ 209 ] ;
xx [ 496 ] = 167.5926053784973 ; xx [ 497 ] = 220.5295098676078 ; xx [ 498 ]
= 0.4499999999999318 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 492 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 184 , (
pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , (
pm_math_Vector3 * ) ( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 184 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 292 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 492 ) , ( const pm_math_Transform3 * ) ( xx +
275 ) , ( const pm_math_Transform3 * ) ( xx + 492 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 499 ) , NULL ) ; xx [ 505 ] = xx [ 82 ] ; xx
[ 506 ] = xx [ 82 ] ; xx [ 507 ] = xx [ 136 ] ; xx [ 508 ] = xx [ 136 ] ; xx
[ 509 ] = 220.7542357687625 ; xx [ 510 ] = - 192.7086427489687 ; xx [ 511 ] =
0.9499999999999886 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 505 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * )
( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 292 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 505 ) , ( const pm_math_Transform3 * ) ( xx +
275 ) , ( const pm_math_Transform3 * ) ( xx + 505 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 512 ) , NULL ) ; xx [ 518 ] = xx [ 138 ] ;
xx [ 519 ] = xx [ 83 ] ; xx [ 520 ] = xx [ 83 ] ; xx [ 521 ] = xx [ 154 ] ;
xx [ 522 ] = 203.1933626757461 ; xx [ 523 ] = 288.8785188699961 ; xx [ 524 ]
= xx [ 148 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder
( ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 518 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * )
( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 292 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 518 ) , ( const pm_math_Transform3 * ) ( xx +
275 ) , ( const pm_math_Transform3 * ) ( xx + 518 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 525 ) , NULL ) ; xx [ 531 ] = xx [ 177 ] ;
xx [ 532 ] = xx [ 177 ] ; xx [ 533 ] = xx [ 182 ] ; xx [ 534 ] = xx [ 182 ] ;
xx [ 535 ] = 194.3380370415185 ; xx [ 536 ] = 263.2136039794473 ; xx [ 537 ]
= xx [ 183 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder
( ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 531 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * )
( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 531 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
531 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 538 ) ) ; xx [ 82 ] = - 0.5720614028176843 ;
xx [ 136 ] = - 0.4156269377774535 ; xx [ 544 ] = xx [ 82 ] ; xx [ 545 ] = xx
[ 82 ] ; xx [ 546 ] = xx [ 136 ] ; xx [ 547 ] = xx [ 136 ] ; xx [ 548 ] =
194.7977288517685 ; xx [ 549 ] = 264.6574488545389 ; xx [ 550 ] =
1.499999999999986 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 544 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 544 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
544 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 551 ) ) ; xx [ 177 ] = 0.8999999999999915 ;
xx [ 557 ] = xx [ 82 ] ; xx [ 558 ] = xx [ 82 ] ; xx [ 559 ] = xx [ 136 ] ;
xx [ 560 ] = xx [ 136 ] ; xx [ 561 ] = 197.9188004949555 ; xx [ 562 ] =
274.2631196691199 ; xx [ 563 ] = xx [ 177 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 557 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 182 , (
pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , (
pm_math_Vector3 * ) ( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 182 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 282 ) , ( const pm_math_Vector3 * ) ( xx +
292 ) , ( const pm_math_Transform3 * ) ( xx + 557 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
557 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 564 ) ) ; xx [ 570 ] = xx [ 82 ] ; xx [ 571
] = xx [ 82 ] ; xx [ 572 ] = xx [ 136 ] ; xx [ 573 ] = xx [ 136 ] ; xx [ 574
] = 198.4132276859554 ; xx [ 575 ] = 275.7848100951922 ; xx [ 576 ] = xx [
177 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 570 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 182 , (
pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 272 ) , (
pm_math_Vector3 * ) ( xx + 282 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 182 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 282 ) , ( const pm_math_Vector3 * ) ( xx +
292 ) , ( const pm_math_Transform3 * ) ( xx + 570 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
570 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 577 ) ) ; xx [ 583 ] = xx [ 82 ] ; xx [ 584
] = xx [ 82 ] ; xx [ 585 ] = xx [ 136 ] ; xx [ 586 ] = xx [ 136 ] ; xx [ 587
] = 198.9076548769553 ; xx [ 588 ] = 277.3065005212644 ; xx [ 589 ] = xx [
177 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 583 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 583 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
583 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 590 ) ) ; xx [ 596 ] = xx [ 82 ] ; xx [ 597
] = xx [ 82 ] ; xx [ 598 ] = xx [ 136 ] ; xx [ 599 ] = xx [ 136 ] ; xx [ 600
] = 203.2740650074733 ; xx [ 601 ] = 290.744929096515 ; xx [ 602 ] =
0.4499999999999886 ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 596 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * )
( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 596 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
596 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 603 ) ) ; xx [ 609 ] = xx [ 138 ] ; xx [ 610
] = xx [ 83 ] ; xx [ 611 ] = xx [ 83 ] ; xx [ 612 ] = xx [ 154 ] ; xx [ 613 ]
= 198.3139843345656 ; xx [ 614 ] = 273.8613364776958 ; xx [ 615 ] = 0.525 ;
bb [ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 609 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * )
( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 609 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
609 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 616 ) ) ; xx [ 622 ] = xx [ 138 ] ; xx [ 623
] = xx [ 83 ] ; xx [ 624 ] = xx [ 83 ] ; xx [ 625 ] = xx [ 154 ] ; xx [ 626 ]
= 198.2521809356906 ; xx [ 627 ] = 273.6711251744367 ; xx [ 628 ] = 0.6 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 622 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * )
( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 622 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
622 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 629 ) ) ; xx [ 635 ] = xx [ 138 ] ; xx [ 636
] = xx [ 83 ] ; xx [ 637 ] = xx [ 83 ] ; xx [ 638 ] = xx [ 154 ] ; xx [ 639 ]
= 203.131559276871 ; xx [ 640 ] = 288.6883075667372 ; xx [ 641 ] = 0.375 ; bb
[ 0 ] = sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 635 ) , ( pm_math_Transform3 * ) ( xx + 275 ) , xx + 82 , ( pm_math_Vector3
* ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * )
( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 282 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 82 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx +
282 ) , ( const pm_math_Transform3 * ) ( xx + 635 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
635 ) , ( const pm_math_Transform3 * ) ( xx + 275 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 642 ) ) ; xx [ 182 ] = ( xx [ 108 ] + xx [
117 ] - xx [ 37 ] * inputDdot [ 3 ] ) * xx [ 21 ] - ( xx [ 307 ] + xx [ 320 ]
+ xx [ 333 ] + xx [ 346 ] + xx [ 359 ] + xx [ 372 ] + xx [ 385 ] + xx [ 398 ]
+ xx [ 411 ] + xx [ 424 ] + xx [ 437 ] + xx [ 450 ] + xx [ 463 ] + xx [ 476 ]
+ xx [ 489 ] + xx [ 489 ] + xx [ 502 ] + xx [ 515 ] + xx [ 528 ] + xx [ 541 ]
+ xx [ 554 ] + xx [ 567 ] + xx [ 580 ] + xx [ 593 ] + xx [ 606 ] + xx [ 619 ]
+ xx [ 632 ] + xx [ 645 ] ) ; xx [ 183 ] = ( xx [ 109 ] + xx [ 118 ] + xx [
60 ] * inputDdot [ 3 ] ) * xx [ 21 ] - ( xx [ 308 ] + xx [ 321 ] + xx [ 334 ]
+ xx [ 347 ] + xx [ 360 ] + xx [ 373 ] + xx [ 386 ] + xx [ 399 ] + xx [ 412 ]
+ xx [ 425 ] + xx [ 438 ] + xx [ 451 ] + xx [ 464 ] + xx [ 477 ] + xx [ 490 ]
+ xx [ 490 ] + xx [ 503 ] + xx [ 516 ] + xx [ 529 ] + xx [ 542 ] + xx [ 555 ]
+ xx [ 568 ] + xx [ 581 ] + xx [ 594 ] + xx [ 607 ] + xx [ 620 ] + xx [ 633 ]
+ xx [ 646 ] ) ; xx [ 184 ] = ( xx [ 110 ] + xx [ 119 ] + xx [ 81 ] *
inputDdot [ 3 ] ) * xx [ 21 ] - ( xx [ 309 ] + xx [ 322 ] + xx [ 335 ] + xx [
348 ] + xx [ 361 ] + xx [ 374 ] + xx [ 387 ] + xx [ 400 ] + xx [ 413 ] + xx [
426 ] + xx [ 439 ] + xx [ 452 ] + xx [ 465 ] + xx [ 478 ] + xx [ 491 ] + xx [
491 ] + xx [ 504 ] + xx [ 517 ] + xx [ 530 ] + xx [ 543 ] + xx [ 556 ] + xx [
569 ] + xx [ 582 ] + xx [ 595 ] + xx [ 608 ] + xx [ 621 ] + xx [ 634 ] + xx [
647 ] ) ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 182 , xx + 108 ) ; xx
[ 117 ] = xx [ 84 ] ; xx [ 118 ] = xx [ 85 ] ; xx [ 119 ] = xx [ 92 ] ; xx [
82 ] = 0.25 ; xx [ 84 ] = 0.2424242424242424 ; xx [ 85 ] = xx [ 82 ] * state
[ 6 ] + xx [ 84 ] * state [ 5 ] ; xx [ 92 ] = xx [ 84 ] * state [ 4 ] ; xx [
182 ] = - xx [ 85 ] ; xx [ 183 ] = xx [ 92 ] ; xx [ 184 ] = xx [ 82 ] * state
[ 4 ] ; pm_math_Vector3_cross_ra ( xx + 117 , xx + 182 , xx + 265 ) ; xx [
272 ] = state [ 3 ] ; xx [ 273 ] = state [ 4 ] ; xx [ 274 ] = state [ 5 ] ;
xx [ 275 ] = state [ 6 ] ; xx [ 276 ] = xx [ 4 ] * ( xx [ 265 ] + xx [ 85 ] *
state [ 3 ] ) + xx [ 178 ] ; xx [ 277 ] = xx [ 4 ] * ( xx [ 266 ] - xx [ 92 ]
* state [ 3 ] ) - xx [ 82 ] + xx [ 185 ] ; xx [ 278 ] = xx [ 84 ] + ( xx [
267 ] - xx [ 82 ] * xx [ 144 ] ) * xx [ 4 ] + xx [ 190 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCxpoly (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 120 ) , ( pm_math_Transform3 * ) ( xx + 272 ) , xx + 85 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ; xx [ 648 ] = - xx [ 1 ]
; xx [ 649 ] = xx [ 83 ] ; xx [ 650 ] = xx [ 83 ] ; xx [ 651 ] = xx [ 83 ] ;
xx [ 652 ] = xx [ 83 ] ; xx [ 653 ] = - xx [ 82 ] ; xx [ 654 ] = xx [ 84 ] ;
xx [ 298 ] = state [ 10 ] ; xx [ 299 ] = state [ 11 ] ; xx [ 300 ] = state [
12 ] ; xx [ 301 ] = xx [ 93 ] ; xx [ 302 ] = xx [ 111 ] ; xx [ 303 ] = xx [
297 ] ; sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 85 , ( const
pm_math_Vector3 * ) ( xx + 117 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx +
279 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
120 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 20 ] , xx [ 79 ] , xx [ 80 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 655 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_1 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 310 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 310 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
310 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 661 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_3 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 323 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 323 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
323 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 667 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_13 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 336 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 336 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
336 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 673 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_14 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 349 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 349 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
349 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 679 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_15 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 362 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 362 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
362 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 685 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_17 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 375 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 375 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
375 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 691 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_7 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 388 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 388 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
388 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 697 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_8 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 401 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 401 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
401 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 703 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_12 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 414 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 414 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
414 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 709 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_9 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 427 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 427 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
427 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 715 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_10 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 440 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 440 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
440 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 721 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_2 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 453 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 453 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
453 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 727 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 466 ) , ( pm_math_Transform3 * ) ( xx + 272 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , ( const
pm_math_Transform3 * ) ( xx + 466 ) , ( const pm_math_Transform3 * ) ( xx +
272 ) , ( const pm_math_Transform3 * ) ( xx + 466 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 733 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 479 ) , ( pm_math_Transform3 * ) ( xx + 272 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , ( const
pm_math_Transform3 * ) ( xx + 479 ) , ( const pm_math_Transform3 * ) ( xx +
272 ) , ( const pm_math_Transform3 * ) ( xx + 479 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 739 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 492 ) , ( pm_math_Transform3 * ) ( xx + 272 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , ( const
pm_math_Transform3 * ) ( xx + 492 ) , ( const pm_math_Transform3 * ) ( xx +
272 ) , ( const pm_math_Transform3 * ) ( xx + 492 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 745 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_6 ( NULL ) , ( pm_math_Transform3 * ) ( xx +
272 ) , ( pm_math_Transform3 * ) ( xx + 505 ) , xx + 1 , ( pm_math_Vector3 *
) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) (
xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 117 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx +
279 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , ( const
pm_math_Transform3 * ) ( xx + 505 ) , ( const pm_math_Transform3 * ) ( xx +
272 ) , ( const pm_math_Transform3 * ) ( xx + 505 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 751 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_26 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 518 ) , ( pm_math_Transform3 * ) ( xx + 272 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , ( const
pm_math_Transform3 * ) ( xx + 518 ) , ( const pm_math_Transform3 * ) ( xx +
272 ) , ( const pm_math_Transform3 * ) ( xx + 518 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 757 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_20 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 531 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 531 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
531 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 763 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_21 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 544 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 544 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
544 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 769 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_22 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 557 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 557 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
557 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 775 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_23 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 570 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 570 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
570 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 781 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_24 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 583 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 583 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
583 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 787 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_25 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 596 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 596 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
596 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 793 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_19 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 609 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 609 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
609 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 799 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_18 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 622 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 622 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
622 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 805 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCxpoly (
ModeloManual_836bb176_1_geometry_26 ( NULL ) ,
ModeloManual_836bb176_1_geometry_16 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 272 ) , ( pm_math_Transform3 * ) ( xx + 635 ) , xx + 1 , ( pm_math_Vector3
* ) ( xx + 117 ) , ( pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * )
( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 279 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 1 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 117 ) ,
( const pm_math_Vector3 * ) ( xx + 279 ) , ( const pm_math_Vector3 * ) ( xx +
265 ) , ( const pm_math_Transform3 * ) ( xx + 635 ) , ( const
pm_math_Transform3 * ) ( xx + 648 ) , ( const pm_math_Transform3 * ) ( xx +
635 ) , ( const pm_math_Transform3 * ) ( xx + 272 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 811 ) ) ; pm_math_Quaternion_inverseXform_ra
( xx + 53 , xx + 47 , xx + 117 ) ; xx [ 1 ] = xx [ 22 ] * state [ 18 ] ; xx [
82 ] = xx [ 117 ] - xx [ 1 ] ; xx [ 84 ] = xx [ 24 ] * state [ 18 ] ; xx [ 85
] = xx [ 118 ] - xx [ 84 ] ; xx [ 92 ] = xx [ 25 ] * state [ 18 ] ; xx [ 136
] = xx [ 119 ] + xx [ 92 ] ; xx [ 182 ] = xx [ 117 ] + xx [ 82 ] ; xx [ 183 ]
= xx [ 118 ] + xx [ 85 ] ; xx [ 184 ] = xx [ 119 ] + xx [ 136 ] ; xx [ 138 ]
= xx [ 37 ] * state [ 18 ] ; xx [ 144 ] = xx [ 60 ] * state [ 18 ] ; xx [ 154
] = xx [ 81 ] * state [ 18 ] ; xx [ 265 ] = - xx [ 138 ] ; xx [ 266 ] = xx [
144 ] ; xx [ 267 ] = xx [ 154 ] ; pm_math_Vector3_cross_ra ( xx + 182 , xx +
265 , xx + 272 ) ; pm_math_Vector3_cross_ra ( xx + 47 , xx + 62 , xx + 182 )
; pm_math_Vector3_cross_ra ( xx + 47 , xx + 182 , xx + 265 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 53 , xx + 265 , xx + 275 ) ;
pm_math_Quaternion_compose_ra ( xx + 173 , xx + 53 , xx + 265 ) ;
pm_math_Quaternion_compose_ra ( xx + 265 , xx + 186 , xx + 278 ) ;
pm_math_Quaternion_xform_ra ( xx + 265 , xx + 269 , xx + 282 ) ;
pm_math_Quaternion_xform_ra ( xx + 173 , xx + 62 , xx + 265 ) ; xx [ 648 ] =
xx [ 278 ] ; xx [ 649 ] = xx [ 279 ] ; xx [ 650 ] = xx [ 280 ] ; xx [ 651 ] =
xx [ 281 ] ; xx [ 652 ] = xx [ 282 ] + xx [ 265 ] + xx [ 178 ] ; xx [ 653 ] =
xx [ 283 ] + xx [ 266 ] + xx [ 185 ] ; xx [ 654 ] = xx [ 284 ] + xx [ 267 ] +
xx [ 190 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 120 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 177 , (
pm_math_Vector3 * ) ( xx + 265 ) , ( pm_math_Vector3 * ) ( xx + 278 ) , (
pm_math_Vector3 * ) ( xx + 281 ) , ( pm_math_Vector3 * ) ( xx + 292 ) ) ; xx
[ 298 ] = xx [ 182 ] + xx [ 93 ] ; xx [ 299 ] = xx [ 183 ] + xx [ 111 ] ; xx
[ 300 ] = xx [ 184 ] + xx [ 297 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
53 , xx + 298 , xx + 182 ) ; xx [ 298 ] = xx [ 82 ] ; xx [ 299 ] = xx [ 85 ]
; xx [ 300 ] = xx [ 136 ] ; xx [ 301 ] = xx [ 182 ] - xx [ 138 ] ; xx [ 302 ]
= xx [ 183 ] + xx [ 144 ] ; xx [ 303 ] = xx [ 184 ] + xx [ 154 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 177 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 278 ) ,
( const pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx +
292 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
120 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 20 ] , xx [ 79 ] , xx [ 80 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 817 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 310 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 310 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
310 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 823 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 323 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 323 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
323 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 829 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 336 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 336 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
336 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 835 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 349 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 349 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
349 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 841 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 362 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 362 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
362 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 847 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 375 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 375 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
375 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 853 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 388 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 388 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
388 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 859 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 401 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 401 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
401 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 865 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 414 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 414 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
414 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 871 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 427 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 427 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
427 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 877 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 440 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 440 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
440 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 883 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 453 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 453 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
453 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 889 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 466 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 466 ) , ( const pm_math_Transform3 * ) ( xx +
648 ) , ( const pm_math_Transform3 * ) ( xx + 466 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 895 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 479 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 479 ) , ( const pm_math_Transform3 * ) ( xx +
648 ) , ( const pm_math_Transform3 * ) ( xx + 479 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 901 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 492 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 492 ) , ( const pm_math_Transform3 * ) ( xx +
648 ) , ( const pm_math_Transform3 * ) ( xx + 492 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 907 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 505 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 505 ) , ( const pm_math_Transform3 * ) ( xx +
648 ) , ( const pm_math_Transform3 * ) ( xx + 505 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 913 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 518 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 265 ) , ( const pm_math_Vector3 * ) ( xx + 182 ) ,
( const pm_math_Vector3 * ) ( xx + 281 ) , ( const pm_math_Vector3 * ) ( xx +
278 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 518 ) , ( const pm_math_Transform3 * ) ( xx +
648 ) , ( const pm_math_Transform3 * ) ( xx + 518 ) , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 919 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 531 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 531 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
531 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 925 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 544 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 544 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
544 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 931 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 557 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 557 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
557 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 937 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 570 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 570 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
570 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 943 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 583 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 583 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
583 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 949 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 596 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 596 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
596 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 955 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 609 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 609 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
609 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 961 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 622 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 622 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
622 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 967 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 635 ) , ( pm_math_Transform3 * ) ( xx + 648 ) , xx + 138 , (
pm_math_Vector3 * ) ( xx + 182 ) , ( pm_math_Vector3 * ) ( xx + 265 ) , (
pm_math_Vector3 * ) ( xx + 278 ) , ( pm_math_Vector3 * ) ( xx + 281 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 138 , ( const
pm_math_Vector3 * ) ( xx + 182 ) , ( const pm_math_Vector3 * ) ( xx + 265 ) ,
( const pm_math_Vector3 * ) ( xx + 278 ) , ( const pm_math_Vector3 * ) ( xx +
281 ) , ( const pm_math_Transform3 * ) ( xx + 635 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
635 ) , ( const pm_math_Transform3 * ) ( xx + 648 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 298 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 973 ) ) ; xx [ 182 ] = ( xx [ 272 ] + xx [
275 ] - xx [ 37 ] * inputDdot [ 2 ] ) * xx [ 21 ] - ( xx [ 820 ] + xx [ 826 ]
+ xx [ 832 ] + xx [ 838 ] + xx [ 844 ] + xx [ 850 ] + xx [ 856 ] + xx [ 862 ]
+ xx [ 868 ] + xx [ 874 ] + xx [ 880 ] + xx [ 886 ] + xx [ 892 ] + xx [ 898 ]
+ xx [ 904 ] + xx [ 904 ] + xx [ 910 ] + xx [ 916 ] + xx [ 922 ] + xx [ 928 ]
+ xx [ 934 ] + xx [ 940 ] + xx [ 946 ] + xx [ 952 ] + xx [ 958 ] + xx [ 964 ]
+ xx [ 970 ] + xx [ 976 ] ) ; xx [ 183 ] = ( xx [ 273 ] + xx [ 276 ] + xx [
60 ] * inputDdot [ 2 ] ) * xx [ 21 ] - ( xx [ 821 ] + xx [ 827 ] + xx [ 833 ]
+ xx [ 839 ] + xx [ 845 ] + xx [ 851 ] + xx [ 857 ] + xx [ 863 ] + xx [ 869 ]
+ xx [ 875 ] + xx [ 881 ] + xx [ 887 ] + xx [ 893 ] + xx [ 899 ] + xx [ 905 ]
+ xx [ 905 ] + xx [ 911 ] + xx [ 917 ] + xx [ 923 ] + xx [ 929 ] + xx [ 935 ]
+ xx [ 941 ] + xx [ 947 ] + xx [ 953 ] + xx [ 959 ] + xx [ 965 ] + xx [ 971 ]
+ xx [ 977 ] ) ; xx [ 184 ] = ( xx [ 274 ] + xx [ 277 ] + xx [ 81 ] *
inputDdot [ 2 ] ) * xx [ 21 ] - ( xx [ 822 ] + xx [ 828 ] + xx [ 834 ] + xx [
840 ] + xx [ 846 ] + xx [ 852 ] + xx [ 858 ] + xx [ 864 ] + xx [ 870 ] + xx [
876 ] + xx [ 882 ] + xx [ 888 ] + xx [ 894 ] + xx [ 900 ] + xx [ 906 ] + xx [
906 ] + xx [ 912 ] + xx [ 918 ] + xx [ 924 ] + xx [ 930 ] + xx [ 936 ] + xx [
942 ] + xx [ 948 ] + xx [ 954 ] + xx [ 960 ] + xx [ 966 ] + xx [ 972 ] + xx [
978 ] ) ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 182 , xx + 265 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 95 , xx + 47 , xx + 182 ) ; xx [ 37
] = xx [ 22 ] * state [ 16 ] ; xx [ 60 ] = xx [ 182 ] + xx [ 37 ] ; xx [ 138
] = xx [ 24 ] * state [ 16 ] ; xx [ 144 ] = xx [ 183 ] + xx [ 138 ] ; xx [
154 ] = xx [ 14 ] * state [ 16 ] ; xx [ 177 ] = xx [ 184 ] - xx [ 154 ] ; xx
[ 272 ] = xx [ 182 ] + xx [ 60 ] ; xx [ 273 ] = xx [ 183 ] + xx [ 144 ] ; xx
[ 274 ] = xx [ 184 ] + xx [ 177 ] ; xx [ 209 ] = 2.210274454944287e-12 ; xx [
210 ] = xx [ 209 ] * state [ 16 ] ; xx [ 268 ] = 2.036762541319283e-6 ; xx [
275 ] = xx [ 268 ] * state [ 16 ] ; xx [ 276 ] = xx [ 81 ] * state [ 16 ] ;
xx [ 277 ] = xx [ 210 ] ; xx [ 278 ] = - xx [ 275 ] ; xx [ 279 ] = - xx [ 276
] ; pm_math_Vector3_cross_ra ( xx + 272 , xx + 277 , xx + 280 ) ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 86 , xx + 272 ) ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 272 , xx + 277 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 95 , xx + 277 , xx + 292 ) ;
pm_math_Quaternion_compose_ra ( xx + 173 , xx + 95 , xx + 298 ) ;
pm_math_Quaternion_compose_ra ( xx + 298 , xx + 186 , xx + 648 ) ;
pm_math_Quaternion_xform_ra ( xx + 298 , xx + 269 , xx + 277 ) ;
pm_math_Quaternion_xform_ra ( xx + 173 , xx + 86 , xx + 298 ) ; xx [ 979 ] =
xx [ 648 ] ; xx [ 980 ] = xx [ 649 ] ; xx [ 981 ] = xx [ 650 ] ; xx [ 982 ] =
xx [ 651 ] ; xx [ 983 ] = xx [ 277 ] + xx [ 298 ] + xx [ 178 ] ; xx [ 984 ] =
xx [ 278 ] + xx [ 299 ] + xx [ 185 ] ; xx [ 985 ] = xx [ 279 ] + xx [ 300 ] +
xx [ 190 ] ; bb [ 0 ] = sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 120 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 277 , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) , (
pm_math_Vector3 * ) ( xx + 648 ) , ( pm_math_Vector3 * ) ( xx + 651 ) ) ; xx
[ 986 ] = xx [ 272 ] + xx [ 93 ] ; xx [ 987 ] = xx [ 273 ] + xx [ 111 ] ; xx
[ 988 ] = xx [ 274 ] + xx [ 297 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
95 , xx + 986 , xx + 272 ) ; xx [ 986 ] = xx [ 60 ] ; xx [ 987 ] = xx [ 144 ]
; xx [ 988 ] = xx [ 177 ] ; xx [ 989 ] = xx [ 272 ] + xx [ 210 ] ; xx [ 990 ]
= xx [ 273 ] - xx [ 275 ] ; xx [ 991 ] = xx [ 274 ] - xx [ 276 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 277 , ( const
pm_math_Vector3 * ) ( xx + 301 ) , ( const pm_math_Vector3 * ) ( xx + 298 ) ,
( const pm_math_Vector3 * ) ( xx + 651 ) , ( const pm_math_Vector3 * ) ( xx +
648 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 120 ) , ( const pm_math_Transform3 * ) ( xx +
979 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , NULL , 0 , 1 , 2585.0 , xx [ 83 ] ,
xx [ 78 ] , 0.7 , 0.2210221665699612 , 8.699237272135131e-4 , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 992 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 310 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 310 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
310 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 648 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 336 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 336 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
336 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 998 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 349 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 349 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
349 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1004 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 362 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 362 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
362 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1010 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 375 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 375 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
375 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1016 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 401 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 401 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
401 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1022 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 388 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 388 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
388 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1028 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 427 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 427 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
427 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1034 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 414 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 414 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
414 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1040 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 440 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 440 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
440 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1046 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 323 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 323 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
323 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1052 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 453 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 453 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
453 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1058 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 466 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 275 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 301 ) , ( const pm_math_Vector3 * ) ( xx +
298 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 466 ) , ( const pm_math_Transform3 * ) ( xx +
979 ) , ( const pm_math_Transform3 * ) ( xx + 466 ) , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1064 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 479 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 275 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 301 ) , ( const pm_math_Vector3 * ) ( xx +
298 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 479 ) , ( const pm_math_Transform3 * ) ( xx +
979 ) , ( const pm_math_Transform3 * ) ( xx + 479 ) , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1070 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 492 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 275 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 301 ) , ( const pm_math_Vector3 * ) ( xx +
298 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 492 ) , ( const pm_math_Transform3 * ) ( xx +
979 ) , ( const pm_math_Transform3 * ) ( xx + 492 ) , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1076 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 505 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 275 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 301 ) , ( const pm_math_Vector3 * ) ( xx +
298 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 505 ) , ( const pm_math_Transform3 * ) ( xx +
979 ) , ( const pm_math_Transform3 * ) ( xx + 505 ) , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1082 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 518 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 275 ) , ( const pm_math_Vector3 * ) ( xx + 272 ) ,
( const pm_math_Vector3 * ) ( xx + 301 ) , ( const pm_math_Vector3 * ) ( xx +
298 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 518 ) , ( const pm_math_Transform3 * ) ( xx +
979 ) , ( const pm_math_Transform3 * ) ( xx + 518 ) , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1088 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 531 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 531 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
531 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1094 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 544 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 544 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
544 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1100 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 557 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 557 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
557 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1106 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 570 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 570 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
570 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1112 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 583 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 583 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
583 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1118 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 596 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 596 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
596 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1124 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 609 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 609 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
609 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1130 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 622 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 622 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
622 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1136 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 635 ) , ( pm_math_Transform3 * ) ( xx + 979 ) , xx + 210 , (
pm_math_Vector3 * ) ( xx + 272 ) , ( pm_math_Vector3 * ) ( xx + 275 ) , (
pm_math_Vector3 * ) ( xx + 298 ) , ( pm_math_Vector3 * ) ( xx + 301 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 210 , ( const
pm_math_Vector3 * ) ( xx + 272 ) , ( const pm_math_Vector3 * ) ( xx + 275 ) ,
( const pm_math_Vector3 * ) ( xx + 298 ) , ( const pm_math_Vector3 * ) ( xx +
301 ) , ( const pm_math_Transform3 * ) ( xx + 635 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
635 ) , ( const pm_math_Transform3 * ) ( xx + 979 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 986 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1142 ) ) ; xx [ 272 ] = ( xx [ 280 ] + xx [
292 ] + xx [ 209 ] * inputDdot [ 1 ] ) * xx [ 21 ] - ( xx [ 995 ] + xx [ 651
] + xx [ 1001 ] + xx [ 1007 ] + xx [ 1013 ] + xx [ 1019 ] + xx [ 1025 ] + xx
[ 1031 ] + xx [ 1037 ] + xx [ 1043 ] + xx [ 1049 ] + xx [ 1055 ] + xx [ 1061
] + xx [ 1067 ] + xx [ 1073 ] + xx [ 1073 ] + xx [ 1079 ] + xx [ 1085 ] + xx
[ 1091 ] + xx [ 1097 ] + xx [ 1103 ] + xx [ 1109 ] + xx [ 1115 ] + xx [ 1121
] + xx [ 1127 ] + xx [ 1133 ] + xx [ 1139 ] + xx [ 1145 ] ) ; xx [ 273 ] = (
xx [ 281 ] + xx [ 293 ] - xx [ 268 ] * inputDdot [ 1 ] ) * xx [ 21 ] - ( xx [
996 ] + xx [ 652 ] + xx [ 1002 ] + xx [ 1008 ] + xx [ 1014 ] + xx [ 1020 ] +
xx [ 1026 ] + xx [ 1032 ] + xx [ 1038 ] + xx [ 1044 ] + xx [ 1050 ] + xx [
1056 ] + xx [ 1062 ] + xx [ 1068 ] + xx [ 1074 ] + xx [ 1074 ] + xx [ 1080 ]
+ xx [ 1086 ] + xx [ 1092 ] + xx [ 1098 ] + xx [ 1104 ] + xx [ 1110 ] + xx [
1116 ] + xx [ 1122 ] + xx [ 1128 ] + xx [ 1134 ] + xx [ 1140 ] + xx [ 1146 ]
) ; xx [ 274 ] = ( xx [ 282 ] + xx [ 294 ] - xx [ 81 ] * inputDdot [ 1 ] ) *
xx [ 21 ] - ( xx [ 997 ] + xx [ 653 ] + xx [ 1003 ] + xx [ 1009 ] + xx [ 1015
] + xx [ 1021 ] + xx [ 1027 ] + xx [ 1033 ] + xx [ 1039 ] + xx [ 1045 ] + xx
[ 1051 ] + xx [ 1057 ] + xx [ 1063 ] + xx [ 1069 ] + xx [ 1075 ] + xx [ 1075
] + xx [ 1081 ] + xx [ 1087 ] + xx [ 1093 ] + xx [ 1099 ] + xx [ 1105 ] + xx
[ 1111 ] + xx [ 1117 ] + xx [ 1123 ] + xx [ 1129 ] + xx [ 1135 ] + xx [ 1141
] + xx [ 1147 ] ) ; pm_math_Quaternion_xform_ra ( xx + 95 , xx + 272 , xx +
275 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 47 , xx + 272 )
; xx [ 210 ] = xx [ 22 ] * state [ 14 ] ; xx [ 278 ] = xx [ 272 ] + xx [ 210
] ; xx [ 279 ] = xx [ 24 ] * state [ 14 ] ; xx [ 280 ] = xx [ 273 ] + xx [
279 ] ; xx [ 281 ] = xx [ 14 ] * state [ 14 ] ; xx [ 282 ] = xx [ 274 ] - xx
[ 281 ] ; xx [ 292 ] = xx [ 272 ] + xx [ 278 ] ; xx [ 293 ] = xx [ 273 ] + xx
[ 280 ] ; xx [ 294 ] = xx [ 274 ] + xx [ 282 ] ; xx [ 283 ] = xx [ 209 ] *
state [ 14 ] ; xx [ 284 ] = xx [ 268 ] * state [ 14 ] ; xx [ 298 ] = xx [ 81
] * state [ 14 ] ; xx [ 299 ] = xx [ 283 ] ; xx [ 300 ] = - xx [ 284 ] ; xx [
301 ] = - xx [ 298 ] ; pm_math_Vector3_cross_ra ( xx + 292 , xx + 299 , xx +
979 ) ; pm_math_Vector3_cross_ra ( xx + 47 , xx + 89 , xx + 292 ) ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 292 , xx + 299 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 299 , xx + 982 ) ;
pm_math_Quaternion_compose_ra ( xx + 173 , xx + 113 , xx + 299 ) ;
pm_math_Quaternion_compose_ra ( xx + 299 , xx + 186 , xx + 985 ) ;
pm_math_Quaternion_xform_ra ( xx + 299 , xx + 269 , xx + 186 ) ;
pm_math_Quaternion_xform_ra ( xx + 173 , xx + 89 , xx + 269 ) ; xx [ 1148 ] =
xx [ 985 ] ; xx [ 1149 ] = xx [ 986 ] ; xx [ 1150 ] = xx [ 987 ] ; xx [ 1151
] = xx [ 988 ] ; xx [ 1152 ] = xx [ 186 ] + xx [ 269 ] + xx [ 178 ] ; xx [
1153 ] = xx [ 187 ] + xx [ 270 ] + xx [ 185 ] ; xx [ 1154 ] = xx [ 188 ] + xx
[ 271 ] + xx [ 190 ] ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoPlaneCylinder (
ModeloManual_836bb176_1_geometry_0 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 120 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 173 , (
pm_math_Vector3 * ) ( xx + 174 ) , ( pm_math_Vector3 * ) ( xx + 185 ) , (
pm_math_Vector3 * ) ( xx + 188 ) , ( pm_math_Vector3 * ) ( xx + 269 ) ) ; xx
[ 299 ] = xx [ 292 ] + xx [ 93 ] ; xx [ 300 ] = xx [ 293 ] + xx [ 111 ] ; xx
[ 301 ] = xx [ 294 ] + xx [ 297 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
113 , xx + 299 , xx + 292 ) ; xx [ 985 ] = xx [ 278 ] ; xx [ 986 ] = xx [ 280
] ; xx [ 987 ] = xx [ 282 ] ; xx [ 988 ] = xx [ 292 ] + xx [ 283 ] ; xx [ 989
] = xx [ 293 ] - xx [ 284 ] ; xx [ 990 ] = xx [ 294 ] - xx [ 298 ] ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 173 , ( const
pm_math_Vector3 * ) ( xx + 174 ) , ( const pm_math_Vector3 * ) ( xx + 185 ) ,
( const pm_math_Vector3 * ) ( xx + 188 ) , ( const pm_math_Vector3 * ) ( xx +
269 ) , ( const pm_math_Transform3 * ) ( xx + 120 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
120 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 20 ] , xx [ 79 ] , xx [ 80 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 298 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_1 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 310 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 310 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
310 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 1155 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 323 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 323 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
323 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 310 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_13 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 336 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 336 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
336 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 323 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_14 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 349 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 349 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
349 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 336 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_15 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 362 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 362 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
362 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 349 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_17 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 375 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 375 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
375 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 362 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_8 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 401 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 401 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
401 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 375 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_7 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 388 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 388 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
388 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 401 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_9 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 427 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 427 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
427 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 388 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_12 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 414 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 414 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
414 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 427 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_10 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 440 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 440 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
440 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 414 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_2 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 453 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 453 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
453 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 440 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_4 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 466 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 120 ) ,
( const pm_math_Vector3 * ) ( xx + 185 ) , ( const pm_math_Vector3 * ) ( xx +
173 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 466 ) , ( const pm_math_Transform3 * ) ( xx +
1148 ) , ( const pm_math_Transform3 * ) ( xx + 466 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 453 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_3 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 479 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 120 ) ,
( const pm_math_Vector3 * ) ( xx + 185 ) , ( const pm_math_Vector3 * ) ( xx +
173 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 479 ) , ( const pm_math_Transform3 * ) ( xx +
1148 ) , ( const pm_math_Transform3 * ) ( xx + 479 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 466 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_5 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 492 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 120 ) ,
( const pm_math_Vector3 * ) ( xx + 185 ) , ( const pm_math_Vector3 * ) ( xx +
173 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 492 ) , ( const pm_math_Transform3 * ) ( xx +
1148 ) , ( const pm_math_Transform3 * ) ( xx + 492 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 479 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoBrickCylinder (
ModeloManual_836bb176_1_geometry_6 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 505 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 120 ) ,
( const pm_math_Vector3 * ) ( xx + 185 ) , ( const pm_math_Vector3 * ) ( xx +
173 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 505 ) , ( const pm_math_Transform3 * ) ( xx +
1148 ) , ( const pm_math_Transform3 * ) ( xx + 505 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 492 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_11 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 518 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 123 ) , ( const pm_math_Vector3 * ) ( xx + 120 ) ,
( const pm_math_Vector3 * ) ( xx + 185 ) , ( const pm_math_Vector3 * ) ( xx +
173 ) , ( const pm_math_Transform3 * ) ( xx + 285 ) , ( const
pm_math_Transform3 * ) ( xx + 518 ) , ( const pm_math_Transform3 * ) ( xx +
1148 ) , ( const pm_math_Transform3 * ) ( xx + 518 ) , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , NULL , 0 , 1 , xx [ 57 ] , xx [ 76 ]
, xx [ 78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 505 ) , NULL ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_20 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 531 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 531 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
531 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 518 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_21 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 544 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 544 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
544 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 531 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_22 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 557 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 557 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
557 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 544 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_23 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 570 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 570 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
570 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 557 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_24 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 583 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 583 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
583 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 570 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_25 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 596 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 596 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
596 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 583 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_19 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 609 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 609 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
609 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 596 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_18 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 622 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 622 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
622 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 609 ) ) ; bb [ 0 ] =
sm_core_compiler_computeProximityInfoCxpolyCylinder (
ModeloManual_836bb176_1_geometry_16 ( NULL ) ,
ModeloManual_836bb176_1_geometry_27 ( NULL ) , ( pm_math_Transform3 * ) ( xx
+ 635 ) , ( pm_math_Transform3 * ) ( xx + 1148 ) , xx + 20 , (
pm_math_Vector3 * ) ( xx + 120 ) , ( pm_math_Vector3 * ) ( xx + 123 ) , (
pm_math_Vector3 * ) ( xx + 173 ) , ( pm_math_Vector3 * ) ( xx + 185 ) ) ;
sm_core_compiler_computeContactWrenches ( 0 , 1 , xx + 20 , ( const
pm_math_Vector3 * ) ( xx + 120 ) , ( const pm_math_Vector3 * ) ( xx + 123 ) ,
( const pm_math_Vector3 * ) ( xx + 173 ) , ( const pm_math_Vector3 * ) ( xx +
185 ) , ( const pm_math_Transform3 * ) ( xx + 635 ) , ( const
pm_math_Transform3 * ) ( xx + 285 ) , ( const pm_math_Transform3 * ) ( xx +
635 ) , ( const pm_math_Transform3 * ) ( xx + 1148 ) , NULL , ( const
pm_math_SpatialVector * ) ( xx + 985 ) , 0 , 1 , xx [ 57 ] , xx [ 76 ] , xx [
78 ] , xx [ 148 ] , xx [ 149 ] , xx [ 151 ] , NULL , NULL , NULL , (
pm_math_SpatialVector * ) ( xx + 622 ) ) ; xx [ 78 ] = ( xx [ 979 ] + xx [
982 ] + xx [ 209 ] * inputDdot [ 0 ] ) * xx [ 21 ] - ( xx [ 301 ] + xx [ 1158
] + xx [ 313 ] + xx [ 326 ] + xx [ 339 ] + xx [ 352 ] + xx [ 365 ] + xx [ 378
] + xx [ 404 ] + xx [ 391 ] + xx [ 430 ] + xx [ 417 ] + xx [ 443 ] + xx [ 456
] + xx [ 469 ] + xx [ 469 ] + xx [ 482 ] + xx [ 495 ] + xx [ 508 ] + xx [ 521
] + xx [ 534 ] + xx [ 547 ] + xx [ 560 ] + xx [ 573 ] + xx [ 586 ] + xx [ 599
] + xx [ 612 ] + xx [ 625 ] ) ; xx [ 79 ] = ( xx [ 980 ] + xx [ 983 ] - xx [
268 ] * inputDdot [ 0 ] ) * xx [ 21 ] - ( xx [ 302 ] + xx [ 1159 ] + xx [ 314
] + xx [ 327 ] + xx [ 340 ] + xx [ 353 ] + xx [ 366 ] + xx [ 379 ] + xx [ 405
] + xx [ 392 ] + xx [ 431 ] + xx [ 418 ] + xx [ 444 ] + xx [ 457 ] + xx [ 470
] + xx [ 470 ] + xx [ 483 ] + xx [ 496 ] + xx [ 509 ] + xx [ 522 ] + xx [ 535
] + xx [ 548 ] + xx [ 561 ] + xx [ 574 ] + xx [ 587 ] + xx [ 600 ] + xx [ 613
] + xx [ 626 ] ) ; xx [ 80 ] = ( xx [ 981 ] + xx [ 984 ] - xx [ 81 ] *
inputDdot [ 0 ] ) * xx [ 21 ] - ( xx [ 303 ] + xx [ 1160 ] + xx [ 315 ] + xx
[ 328 ] + xx [ 341 ] + xx [ 354 ] + xx [ 367 ] + xx [ 380 ] + xx [ 406 ] + xx
[ 393 ] + xx [ 432 ] + xx [ 419 ] + xx [ 445 ] + xx [ 458 ] + xx [ 471 ] + xx
[ 471 ] + xx [ 484 ] + xx [ 497 ] + xx [ 510 ] + xx [ 523 ] + xx [ 536 ] + xx
[ 549 ] + xx [ 562 ] + xx [ 575 ] + xx [ 588 ] + xx [ 601 ] + xx [ 614 ] + xx
[ 627 ] ) ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 78 , xx + 120 ) ;
xx [ 78 ] = xx [ 93 ] ; xx [ 79 ] = xx [ 111 ] ; xx [ 80 ] = xx [ 297 ] ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 78 , xx + 123 ) ; xx [ 78 ] = - xx
[ 295 ] ; xx [ 79 ] = - xx [ 296 ] ; xx [ 80 ] = - xx [ 297 ] ;
pm_math_Vector3_cross_ra ( xx + 47 , xx + 78 , xx + 173 ) ; xx [ 78 ] = xx [
123 ] + xx [ 173 ] ; xx [ 79 ] = xx [ 124 ] + xx [ 174 ] ; xx [ 80 ] = xx [
125 ] + xx [ 175 ] ; pm_math_Matrix3x3_xform_ra ( xx + 155 , xx + 78 , xx +
123 ) ; xx [ 20 ] = xx [ 108 ] - ( xx [ 658 ] + xx [ 664 ] + xx [ 670 ] + xx
[ 676 ] + xx [ 682 ] + xx [ 688 ] + xx [ 694 ] + xx [ 700 ] + xx [ 706 ] + xx
[ 712 ] + xx [ 718 ] + xx [ 724 ] + xx [ 730 ] + xx [ 736 ] + xx [ 742 ] + xx
[ 742 ] + xx [ 748 ] + xx [ 754 ] + xx [ 760 ] + xx [ 766 ] + xx [ 772 ] + xx
[ 778 ] + xx [ 784 ] + xx [ 790 ] + xx [ 796 ] + xx [ 802 ] + xx [ 808 ] + xx
[ 814 ] ) + xx [ 265 ] + xx [ 275 ] + xx [ 120 ] + xx [ 123 ] ; xx [ 21 ] =
xx [ 109 ] - ( xx [ 659 ] + xx [ 665 ] + xx [ 671 ] + xx [ 677 ] + xx [ 683 ]
+ xx [ 689 ] + xx [ 695 ] + xx [ 701 ] + xx [ 707 ] + xx [ 713 ] + xx [ 719 ]
+ xx [ 725 ] + xx [ 731 ] + xx [ 737 ] + xx [ 743 ] + xx [ 743 ] + xx [ 749 ]
+ xx [ 755 ] + xx [ 761 ] + xx [ 767 ] + xx [ 773 ] + xx [ 779 ] + xx [ 785 ]
+ xx [ 791 ] + xx [ 797 ] + xx [ 803 ] + xx [ 809 ] + xx [ 815 ] ) + xx [ 266
] + xx [ 276 ] + xx [ 121 ] + xx [ 124 ] ; xx [ 155 ] = xx [ 20 ] ; xx [ 156
] = xx [ 21 ] ; xx [ 157 ] = xx [ 110 ] - ( xx [ 660 ] + xx [ 666 ] + xx [
672 ] + xx [ 678 ] + xx [ 684 ] + xx [ 690 ] + xx [ 696 ] + xx [ 702 ] + xx [
708 ] + xx [ 714 ] + xx [ 720 ] + xx [ 726 ] + xx [ 732 ] + xx [ 738 ] + xx [
744 ] + xx [ 744 ] + xx [ 750 ] + xx [ 756 ] + xx [ 762 ] + xx [ 768 ] + xx [
774 ] + xx [ 780 ] + xx [ 786 ] + xx [ 792 ] + xx [ 798 ] + xx [ 804 ] + xx [
810 ] + xx [ 816 ] ) + xx [ 267 ] + xx [ 277 ] + xx [ 122 ] + xx [ 125 ] ; xx
[ 123 ] = xx [ 13 ] * state [ 10 ] ; xx [ 124 ] = xx [ 13 ] * state [ 11 ] ;
xx [ 125 ] = xx [ 34 ] * state [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 47 ,
xx + 123 , xx + 158 ) ; xx [ 47 ] = xx [ 3 ] ; xx [ 48 ] = xx [ 23 ] ; xx [
49 ] = xx [ 36 ] ; xx [ 123 ] = xx [ 3 ] * xx [ 94 ] ; xx [ 124 ] = xx [ 23 ]
* xx [ 146 ] ; xx [ 125 ] = xx [ 36 ] * xx [ 147 ] ; pm_math_Vector3_cross_ra
( xx + 47 , xx + 123 , xx + 161 ) ; xx [ 47 ] = - xx [ 2 ] ; xx [ 48 ] = - xx
[ 17 ] ; xx [ 49 ] = xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 50 , xx + 47
, xx + 123 ) ; xx [ 47 ] = xx [ 161 ] - xx [ 304 ] - xx [ 317 ] - xx [ 330 ]
- xx [ 343 ] - xx [ 356 ] - xx [ 369 ] - xx [ 382 ] - xx [ 395 ] - xx [ 408 ]
- xx [ 421 ] - xx [ 434 ] - xx [ 447 ] - xx [ 460 ] - xx [ 473 ] - xx [ 486 ]
- xx [ 486 ] - xx [ 499 ] - xx [ 512 ] - xx [ 525 ] - xx [ 538 ] - xx [ 551 ]
- xx [ 564 ] - xx [ 577 ] - xx [ 590 ] - xx [ 603 ] - xx [ 616 ] - xx [ 629 ]
- xx [ 642 ] + ( xx [ 123 ] - xx [ 22 ] * inputDdot [ 3 ] ) * xx [ 94 ] ; xx
[ 48 ] = xx [ 162 ] - xx [ 305 ] - xx [ 318 ] - xx [ 331 ] - xx [ 344 ] - xx
[ 357 ] - xx [ 370 ] - xx [ 383 ] - xx [ 396 ] - xx [ 409 ] - xx [ 422 ] - xx
[ 435 ] - xx [ 448 ] - xx [ 461 ] - xx [ 474 ] - xx [ 487 ] - xx [ 487 ] - xx
[ 500 ] - xx [ 513 ] - xx [ 526 ] - xx [ 539 ] - xx [ 552 ] - xx [ 565 ] - xx
[ 578 ] - xx [ 591 ] - xx [ 604 ] - xx [ 617 ] - xx [ 630 ] - xx [ 643 ] + (
xx [ 124 ] - xx [ 24 ] * inputDdot [ 3 ] ) * xx [ 146 ] ; xx [ 49 ] = xx [
163 ] - xx [ 306 ] - xx [ 319 ] - xx [ 332 ] - xx [ 345 ] - xx [ 358 ] - xx [
371 ] - xx [ 384 ] - xx [ 397 ] - xx [ 410 ] - xx [ 423 ] - xx [ 436 ] - xx [
449 ] - xx [ 462 ] - xx [ 475 ] - xx [ 488 ] - xx [ 488 ] - xx [ 501 ] - xx [
514 ] - xx [ 527 ] - xx [ 540 ] - xx [ 553 ] - xx [ 566 ] - xx [ 579 ] - xx [
592 ] - xx [ 605 ] - xx [ 618 ] - xx [ 631 ] - xx [ 644 ] + ( xx [ 125 ] + xx
[ 25 ] * inputDdot [ 3 ] ) * xx [ 147 ] ; pm_math_Quaternion_xform_ra ( xx +
30 , xx + 47 , xx + 50 ) ; pm_math_Vector3_cross_ra ( xx + 179 , xx + 108 ,
xx + 29 ) ; xx [ 32 ] = xx [ 82 ] ; xx [ 33 ] = xx [ 85 ] ; xx [ 34 ] = xx [
136 ] ; xx [ 47 ] = xx [ 82 ] * xx [ 94 ] ; xx [ 48 ] = xx [ 85 ] * xx [ 146
] ; xx [ 49 ] = xx [ 136 ] * xx [ 147 ] ; pm_math_Vector3_cross_ra ( xx + 32
, xx + 47 , xx + 108 ) ; xx [ 32 ] = - xx [ 1 ] ; xx [ 33 ] = - xx [ 84 ] ;
xx [ 34 ] = xx [ 92 ] ; pm_math_Vector3_cross_ra ( xx + 117 , xx + 32 , xx +
1 ) ; xx [ 32 ] = xx [ 108 ] - xx [ 817 ] - xx [ 823 ] - xx [ 829 ] - xx [
835 ] - xx [ 841 ] - xx [ 847 ] - xx [ 853 ] - xx [ 859 ] - xx [ 865 ] - xx [
871 ] - xx [ 877 ] - xx [ 883 ] - xx [ 889 ] - xx [ 895 ] - xx [ 901 ] - xx [
901 ] - xx [ 907 ] - xx [ 913 ] - xx [ 919 ] - xx [ 925 ] - xx [ 931 ] - xx [
937 ] - xx [ 943 ] - xx [ 949 ] - xx [ 955 ] - xx [ 961 ] - xx [ 967 ] - xx [
973 ] + ( xx [ 1 ] - xx [ 22 ] * inputDdot [ 2 ] ) * xx [ 94 ] ; xx [ 33 ] =
xx [ 109 ] - xx [ 818 ] - xx [ 824 ] - xx [ 830 ] - xx [ 836 ] - xx [ 842 ] -
xx [ 848 ] - xx [ 854 ] - xx [ 860 ] - xx [ 866 ] - xx [ 872 ] - xx [ 878 ] -
xx [ 884 ] - xx [ 890 ] - xx [ 896 ] - xx [ 902 ] - xx [ 902 ] - xx [ 908 ] -
xx [ 914 ] - xx [ 920 ] - xx [ 926 ] - xx [ 932 ] - xx [ 938 ] - xx [ 944 ] -
xx [ 950 ] - xx [ 956 ] - xx [ 962 ] - xx [ 968 ] - xx [ 974 ] + ( xx [ 2 ] -
xx [ 24 ] * inputDdot [ 2 ] ) * xx [ 146 ] ; xx [ 34 ] = xx [ 110 ] - xx [
819 ] - xx [ 825 ] - xx [ 831 ] - xx [ 837 ] - xx [ 843 ] - xx [ 849 ] - xx [
855 ] - xx [ 861 ] - xx [ 867 ] - xx [ 873 ] - xx [ 879 ] - xx [ 885 ] - xx [
891 ] - xx [ 897 ] - xx [ 903 ] - xx [ 903 ] - xx [ 909 ] - xx [ 915 ] - xx [
921 ] - xx [ 927 ] - xx [ 933 ] - xx [ 939 ] - xx [ 945 ] - xx [ 951 ] - xx [
957 ] - xx [ 963 ] - xx [ 969 ] - xx [ 975 ] + ( xx [ 3 ] + xx [ 25 ] *
inputDdot [ 2 ] ) * xx [ 147 ] ; pm_math_Quaternion_xform_ra ( xx + 53 , xx +
32 , xx + 1 ) ; pm_math_Vector3_cross_ra ( xx + 62 , xx + 265 , xx + 32 ) ;
xx [ 47 ] = xx [ 60 ] ; xx [ 48 ] = xx [ 144 ] ; xx [ 49 ] = xx [ 177 ] ; xx
[ 53 ] = xx [ 60 ] * xx [ 94 ] ; xx [ 54 ] = xx [ 144 ] * xx [ 146 ] ; xx [
55 ] = xx [ 177 ] * xx [ 147 ] ; pm_math_Vector3_cross_ra ( xx + 47 , xx + 53
, xx + 62 ) ; xx [ 47 ] = xx [ 37 ] ; xx [ 48 ] = xx [ 138 ] ; xx [ 49 ] = -
xx [ 154 ] ; pm_math_Vector3_cross_ra ( xx + 182 , xx + 47 , xx + 53 ) ; xx [
47 ] = xx [ 62 ] - xx [ 992 ] - xx [ 648 ] - xx [ 998 ] - xx [ 1004 ] - xx [
1010 ] - xx [ 1016 ] - xx [ 1022 ] - xx [ 1028 ] - xx [ 1034 ] - xx [ 1040 ]
- xx [ 1046 ] - xx [ 1052 ] - xx [ 1058 ] - xx [ 1064 ] - xx [ 1070 ] - xx [
1070 ] - xx [ 1076 ] - xx [ 1082 ] - xx [ 1088 ] - xx [ 1094 ] - xx [ 1100 ]
- xx [ 1106 ] - xx [ 1112 ] - xx [ 1118 ] - xx [ 1124 ] - xx [ 1130 ] - xx [
1136 ] - xx [ 1142 ] + ( xx [ 53 ] + xx [ 22 ] * inputDdot [ 1 ] ) * xx [ 94
] ; xx [ 48 ] = xx [ 63 ] - xx [ 993 ] - xx [ 649 ] - xx [ 999 ] - xx [ 1005
] - xx [ 1011 ] - xx [ 1017 ] - xx [ 1023 ] - xx [ 1029 ] - xx [ 1035 ] - xx
[ 1041 ] - xx [ 1047 ] - xx [ 1053 ] - xx [ 1059 ] - xx [ 1065 ] - xx [ 1071
] - xx [ 1071 ] - xx [ 1077 ] - xx [ 1083 ] - xx [ 1089 ] - xx [ 1095 ] - xx
[ 1101 ] - xx [ 1107 ] - xx [ 1113 ] - xx [ 1119 ] - xx [ 1125 ] - xx [ 1131
] - xx [ 1137 ] - xx [ 1143 ] + ( xx [ 54 ] + xx [ 24 ] * inputDdot [ 1 ] ) *
xx [ 146 ] ; xx [ 49 ] = xx [ 64 ] - xx [ 994 ] - xx [ 650 ] - xx [ 1000 ] -
xx [ 1006 ] - xx [ 1012 ] - xx [ 1018 ] - xx [ 1024 ] - xx [ 1030 ] - xx [
1036 ] - xx [ 1042 ] - xx [ 1048 ] - xx [ 1054 ] - xx [ 1060 ] - xx [ 1066 ]
- xx [ 1072 ] - xx [ 1072 ] - xx [ 1078 ] - xx [ 1084 ] - xx [ 1090 ] - xx [
1096 ] - xx [ 1102 ] - xx [ 1108 ] - xx [ 1114 ] - xx [ 1120 ] - xx [ 1126 ]
- xx [ 1132 ] - xx [ 1138 ] - xx [ 1144 ] + ( xx [ 55 ] - xx [ 14 ] *
inputDdot [ 1 ] ) * xx [ 147 ] ; pm_math_Quaternion_xform_ra ( xx + 95 , xx +
47 , xx + 53 ) ; pm_math_Vector3_cross_ra ( xx + 86 , xx + 275 , xx + 47 ) ;
xx [ 62 ] = xx [ 278 ] ; xx [ 63 ] = xx [ 280 ] ; xx [ 64 ] = xx [ 282 ] ; xx
[ 84 ] = xx [ 278 ] * xx [ 94 ] ; xx [ 85 ] = xx [ 280 ] * xx [ 146 ] ; xx [
86 ] = xx [ 282 ] * xx [ 147 ] ; pm_math_Vector3_cross_ra ( xx + 62 , xx + 84
, xx + 95 ) ; xx [ 62 ] = xx [ 210 ] ; xx [ 63 ] = xx [ 279 ] ; xx [ 64 ] = -
xx [ 281 ] ; pm_math_Vector3_cross_ra ( xx + 272 , xx + 62 , xx + 84 ) ; xx [
62 ] = xx [ 95 ] - xx [ 298 ] - xx [ 1155 ] - xx [ 310 ] - xx [ 323 ] - xx [
336 ] - xx [ 349 ] - xx [ 362 ] - xx [ 375 ] - xx [ 401 ] - xx [ 388 ] - xx [
427 ] - xx [ 414 ] - xx [ 440 ] - xx [ 453 ] - xx [ 466 ] - xx [ 466 ] - xx [
479 ] - xx [ 492 ] - xx [ 505 ] - xx [ 518 ] - xx [ 531 ] - xx [ 544 ] - xx [
557 ] - xx [ 570 ] - xx [ 583 ] - xx [ 596 ] - xx [ 609 ] - xx [ 622 ] + ( xx
[ 84 ] + xx [ 22 ] * inputDdot [ 0 ] ) * xx [ 94 ] ; xx [ 63 ] = xx [ 96 ] -
xx [ 299 ] - xx [ 1156 ] - xx [ 311 ] - xx [ 324 ] - xx [ 337 ] - xx [ 350 ]
- xx [ 363 ] - xx [ 376 ] - xx [ 402 ] - xx [ 389 ] - xx [ 428 ] - xx [ 415 ]
- xx [ 441 ] - xx [ 454 ] - xx [ 467 ] - xx [ 467 ] - xx [ 480 ] - xx [ 493 ]
- xx [ 506 ] - xx [ 519 ] - xx [ 532 ] - xx [ 545 ] - xx [ 558 ] - xx [ 571 ]
- xx [ 584 ] - xx [ 597 ] - xx [ 610 ] - xx [ 623 ] + ( xx [ 85 ] + xx [ 24 ]
* inputDdot [ 0 ] ) * xx [ 146 ] ; xx [ 64 ] = xx [ 97 ] - xx [ 300 ] - xx [
1157 ] - xx [ 312 ] - xx [ 325 ] - xx [ 338 ] - xx [ 351 ] - xx [ 364 ] - xx
[ 377 ] - xx [ 403 ] - xx [ 390 ] - xx [ 429 ] - xx [ 416 ] - xx [ 442 ] - xx
[ 455 ] - xx [ 468 ] - xx [ 468 ] - xx [ 481 ] - xx [ 494 ] - xx [ 507 ] - xx
[ 520 ] - xx [ 533 ] - xx [ 546 ] - xx [ 559 ] - xx [ 572 ] - xx [ 585 ] - xx
[ 598 ] - xx [ 611 ] - xx [ 624 ] + ( xx [ 86 ] - xx [ 14 ] * inputDdot [ 0 ]
) * xx [ 147 ] ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 62 , xx + 22 )
; pm_math_Vector3_cross_ra ( xx + 89 , xx + 120 , xx + 62 ) ; xx [ 84 ] = -
xx [ 12 ] ; xx [ 85 ] = - xx [ 59 ] ; xx [ 86 ] = - xx [ 65 ] ; xx [ 87 ] = -
xx [ 137 ] ; xx [ 88 ] = - xx [ 77 ] ; xx [ 89 ] = - xx [ 112 ] ; xx [ 90 ] =
xx [ 150 ] ; xx [ 91 ] = xx [ 152 ] ; xx [ 92 ] = xx [ 153 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 84 , xx + 78 , xx + 12 ) ; xx [ 93 ] = -
pm_math_Vector3_dot_ra ( xx + 9 , xx + 155 ) ; xx [ 94 ] = -
pm_math_Vector3_dot_ra ( xx + 164 , xx + 155 ) ; xx [ 95 ] = -
pm_math_Vector3_dot_ra ( xx + 170 , xx + 155 ) ; xx [ 96 ] = - ( xx [ 158 ] -
xx [ 655 ] - xx [ 661 ] - xx [ 667 ] - xx [ 673 ] - xx [ 679 ] - xx [ 685 ] -
xx [ 691 ] - xx [ 697 ] - xx [ 703 ] - xx [ 709 ] - xx [ 715 ] - xx [ 721 ] -
xx [ 727 ] - xx [ 733 ] - xx [ 739 ] - xx [ 739 ] - xx [ 745 ] - xx [ 751 ] -
xx [ 757 ] - xx [ 763 ] - xx [ 769 ] - xx [ 775 ] - xx [ 781 ] - xx [ 787 ] -
xx [ 793 ] - xx [ 799 ] - xx [ 805 ] - xx [ 811 ] + xx [ 50 ] + xx [ 29 ] +
xx [ 1 ] + xx [ 32 ] + xx [ 53 ] + xx [ 47 ] + xx [ 22 ] + xx [ 62 ] + xx [
12 ] - xx [ 21 ] * xx [ 8 ] ) ; xx [ 97 ] = - ( xx [ 159 ] - xx [ 656 ] - xx
[ 662 ] - xx [ 668 ] - xx [ 674 ] - xx [ 680 ] - xx [ 686 ] - xx [ 692 ] - xx
[ 698 ] - xx [ 704 ] - xx [ 710 ] - xx [ 716 ] - xx [ 722 ] - xx [ 728 ] - xx
[ 734 ] - xx [ 740 ] - xx [ 740 ] - xx [ 746 ] - xx [ 752 ] - xx [ 758 ] - xx
[ 764 ] - xx [ 770 ] - xx [ 776 ] - xx [ 782 ] - xx [ 788 ] - xx [ 794 ] - xx
[ 800 ] - xx [ 806 ] - xx [ 812 ] + xx [ 51 ] + xx [ 30 ] + xx [ 2 ] + xx [
33 ] + xx [ 54 ] + xx [ 48 ] + xx [ 23 ] + xx [ 63 ] + xx [ 13 ] + xx [ 20 ]
* xx [ 8 ] ) ; xx [ 98 ] = - ( xx [ 160 ] - xx [ 657 ] - xx [ 663 ] - xx [
669 ] - xx [ 675 ] - xx [ 681 ] - xx [ 687 ] - xx [ 693 ] - xx [ 699 ] - xx [
705 ] - xx [ 711 ] - xx [ 717 ] - xx [ 723 ] - xx [ 729 ] - xx [ 735 ] - xx [
741 ] - xx [ 741 ] - xx [ 747 ] - xx [ 753 ] - xx [ 759 ] - xx [ 765 ] - xx [
771 ] - xx [ 777 ] - xx [ 783 ] - xx [ 789 ] - xx [ 795 ] - xx [ 801 ] - xx [
807 ] - xx [ 813 ] + xx [ 52 ] + xx [ 31 ] + xx [ 3 ] + xx [ 34 ] + xx [ 55 ]
+ xx [ 49 ] + xx [ 24 ] + xx [ 64 ] + xx [ 14 ] ) ; solveSymmetricPosDef ( xx
+ 229 , xx + 93 , 6 , 1 , xx + 20 , xx + 29 ) ; pm_math_Matrix3x3_xform_ra (
xx + 84 , xx + 9 , xx + 1 ) ; pm_math_Matrix3x3_xform_ra ( xx + 84 , xx + 164
, xx + 9 ) ; pm_math_Matrix3x3_xform_ra ( xx + 84 , xx + 170 , xx + 12 ) ; xx
[ 265 ] = xx [ 1 ] ; xx [ 266 ] = xx [ 9 ] ; xx [ 267 ] = xx [ 12 ] ; xx [
268 ] = xx [ 15 ] ; xx [ 269 ] = xx [ 16 ] ; xx [ 270 ] = xx [ 18 ] ; xx [
271 ] = xx [ 2 ] ; xx [ 272 ] = xx [ 10 ] ; xx [ 273 ] = xx [ 13 ] ; xx [ 274
] = xx [ 223 ] - xx [ 41 ] + xx [ 214 ] - xx [ 70 ] + xx [ 194 ] - xx [ 102 ]
+ xx [ 203 ] - xx [ 130 ] + xx [ 77 ] * xx [ 8 ] ; xx [ 275 ] = xx [ 26 ] ;
xx [ 276 ] = xx [ 27 ] ; xx [ 277 ] = xx [ 3 ] ; xx [ 278 ] = xx [ 11 ] ; xx
[ 279 ] = xx [ 14 ] ; xx [ 280 ] = xx [ 226 ] - xx [ 44 ] + xx [ 217 ] - xx [
73 ] + xx [ 197 ] - xx [ 105 ] + xx [ 206 ] - xx [ 133 ] + xx [ 19 ] ; xx [
281 ] = xx [ 227 ] - xx [ 45 ] + xx [ 218 ] - xx [ 74 ] + xx [ 198 ] - xx [
106 ] + xx [ 207 ] - xx [ 134 ] - xx [ 28 ] ; xx [ 282 ] = xx [ 35 ] ; xx [
283 ] = xx [ 140 ] ; xx [ 284 ] = xx [ 167 ] ; xx [ 285 ] = xx [ 5 ] ; xx [
286 ] = xx [ 58 ] ; xx [ 287 ] = xx [ 139 ] ; xx [ 288 ] = xx [ 150 ] ; xx [
289 ] = xx [ 141 ] ; xx [ 290 ] = xx [ 168 ] ; xx [ 291 ] = xx [ 6 ] ; xx [
292 ] = xx [ 61 ] ; xx [ 293 ] = xx [ 143 ] ; xx [ 294 ] = xx [ 152 ] ; xx [
295 ] = xx [ 142 ] ; xx [ 296 ] = xx [ 169 ] ; xx [ 297 ] = xx [ 7 ] ; xx [
298 ] = xx [ 66 ] ; xx [ 299 ] = xx [ 145 ] ; xx [ 300 ] = xx [ 153 ] ;
solveSymmetricPosDef ( xx + 229 , xx + 265 , 6 , 6 , xx + 26 , xx + 5 ) ; xx
[ 1 ] = xx [ 44 ] ; xx [ 2 ] = xx [ 50 ] ; xx [ 3 ] = xx [ 56 ] ; xx [ 5 ] =
9.806649999999999 ; xx [ 6 ] = xx [ 5 ] * state [ 4 ] ; xx [ 7 ] = xx [ 5 ] *
state [ 5 ] ; xx [ 8 ] = xx [ 4 ] * ( xx [ 6 ] * state [ 6 ] - xx [ 7 ] *
state [ 3 ] ) ; xx [ 9 ] = ( xx [ 6 ] * state [ 3 ] + xx [ 7 ] * state [ 6 ]
) * xx [ 4 ] ; xx [ 10 ] = xx [ 5 ] - ( xx [ 6 ] * state [ 4 ] + xx [ 7 ] *
state [ 5 ] ) * xx [ 4 ] ; xx [ 4 ] = xx [ 45 ] ; xx [ 5 ] = xx [ 51 ] ; xx [
6 ] = xx [ 57 ] ; xx [ 11 ] = xx [ 46 ] ; xx [ 12 ] = xx [ 52 ] ; xx [ 13 ] =
xx [ 58 ] ; xx [ 14 ] = xx [ 47 ] ; xx [ 15 ] = xx [ 53 ] ; xx [ 16 ] = xx [
59 ] ; xx [ 17 ] = xx [ 48 ] ; xx [ 18 ] = xx [ 54 ] ; xx [ 19 ] = xx [ 60 ]
; xx [ 26 ] = xx [ 49 ] ; xx [ 27 ] = xx [ 55 ] ; xx [ 28 ] = xx [ 61 ] ;
logVector [ 0 ] = state [ 0 ] ; logVector [ 1 ] = state [ 1 ] ; logVector [ 2
] = state [ 2 ] ; logVector [ 3 ] = state [ 3 ] ; logVector [ 4 ] = state [ 4
] ; logVector [ 5 ] = state [ 5 ] ; logVector [ 6 ] = state [ 6 ] ; logVector
[ 7 ] = state [ 7 ] ; logVector [ 8 ] = state [ 8 ] ; logVector [ 9 ] = state
[ 9 ] ; logVector [ 10 ] = xx [ 0 ] * state [ 10 ] ; logVector [ 11 ] = xx [
0 ] * state [ 11 ] ; logVector [ 12 ] = xx [ 0 ] * state [ 12 ] ; logVector [
13 ] = xx [ 0 ] * state [ 13 ] ; logVector [ 14 ] = xx [ 0 ] * state [ 14 ] ;
logVector [ 15 ] = xx [ 0 ] * state [ 15 ] ; logVector [ 16 ] = xx [ 0 ] *
state [ 16 ] ; logVector [ 17 ] = xx [ 0 ] * state [ 17 ] ; logVector [ 18 ]
= xx [ 0 ] * state [ 18 ] ; logVector [ 19 ] = xx [ 0 ] * state [ 19 ] ;
logVector [ 20 ] = xx [ 0 ] * state [ 20 ] ; logVector [ 21 ] = xx [ 20 ] -
pm_math_Vector3_dot_ra ( xx + 1 , xx + 8 ) ; logVector [ 22 ] = xx [ 21 ] -
pm_math_Vector3_dot_ra ( xx + 4 , xx + 8 ) ; logVector [ 23 ] = xx [ 22 ] -
pm_math_Vector3_dot_ra ( xx + 11 , xx + 8 ) ; logVector [ 24 ] = xx [ 0 ] * (
xx [ 23 ] - pm_math_Vector3_dot_ra ( xx + 14 , xx + 8 ) ) ; logVector [ 25 ]
= xx [ 0 ] * ( xx [ 24 ] - pm_math_Vector3_dot_ra ( xx + 17 , xx + 8 ) ) ;
logVector [ 26 ] = xx [ 0 ] * ( xx [ 25 ] - pm_math_Vector3_dot_ra ( xx + 26
, xx + 8 ) ) ; logVector [ 27 ] = xx [ 0 ] * inputDdot [ 0 ] ; logVector [ 28
] = xx [ 0 ] * inputDdot [ 1 ] ; logVector [ 29 ] = xx [ 0 ] * inputDdot [ 2
] ; logVector [ 30 ] = xx [ 0 ] * inputDdot [ 3 ] ; errorResult [ 0 ] = xx [
83 ] ; return NULL ; }
