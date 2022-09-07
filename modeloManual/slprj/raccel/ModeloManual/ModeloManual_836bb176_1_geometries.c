#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
const sm_core_compiler_Plane * ModeloManual_836bb176_1_geometry_0 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Plane
plane = { 0 } ; ( void ) rtdv ; return & plane ; } const
sm_core_compiler_Brick * ModeloManual_836bb176_1_geometry_1 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Brick
brick = { 46.0 , 2.1 , 20.0 } ; ( void ) rtdv ; return & brick ; } const
sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_2 (
const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points [
24 ] = { 0.5 , 0.9 , 0.25 , 0.0 , 0.9 , 0.25 , 0.5 , 0.0 , 0.25 , 0.5 , 0.9 ,
- 0.25 , 0.0 , 0.0 , 0.25 , 0.0 , 0.9 , - 0.25 , 0.0 , 0.0 , - 0.25 , 0.5 ,
0.0 , - 0.25 } ; static const int vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 , 23
, 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3
, 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3
, 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 ,
7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const int seed_vx_ids [
8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 1.14455231422596 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_3 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 18 ] = { 10.0 , 0.0 , 7.0 , - 24.94 ,
2.1 , 7.0 , - 24.94 , 0.0 , 7.0 , 10.0 , 0.0 , - 7.0 , - 24.94 , 2.1 , - 7.0
, - 24.94 , 0.0 , - 7.0 } ; static const int vx_index [ 6 ] = { 0 , 3 , 7 ,
12 , 17 , 21 } ; static const int vx_valency [ 6 ] = { 3 , 4 , 5 , 5 , 4 , 3
} ; static const int vx_adjacency_graph [ 24 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 4
, 0 , 1 , 4 , 5 , 3 , 0 , 2 , 5 , 4 , 1 , 1 , 3 , 5 , 2 , 2 , 4 , 3 } ;
static const int seed_vx_ids [ 8 ] = { 0 , 1 , 2 , 0 , 3 , 4 , 5 , 3 } ;
static sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points
; cxh . vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh .
numHullPoints = 6 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh .
graphSize = 24 ; cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB =
37.69898672378343 ; ( void ) rtdv ; return & cxh ; } const
sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_4 (
const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points [
24 ] = { 3.8 , 1.4 , 0.05 , 0.0 , 1.1 , 0.05 , 3.8 , - 0.0 , 0.05 , 3.8 , 1.4
, - 0.05 , 0.0 , - 0.0 , 0.05 , 0.0 , 1.1 , - 0.05 , 0.0 , - 0.0 , - 0.05 ,
3.8 , - 0.0 , - 0.05 } ; static const int vx_index [ 8 ] = { 0 , 3 , 8 , 13 ,
18 , 23 , 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5
, 5 , 3 , 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2
, 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 ,
1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const int
seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 4.050925820105819 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_5 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 1.0 , 0.1 , 0.05 , - 2.0 ,
0.55 , 0.05 , - 2.0 , 0.0 , 0.05 , 1.0 , 0.0 , 0.05 , 1.0 , 0.1 , - 0.05 , -
2.0 , 0.55 , - 0.05 , - 2.0 , 0.0 , - 0.05 , 1.0 , 0.0 , - 0.05 } ; static
const int vx_index [ 8 ] = { 0 , 4 , 8 , 14 , 18 , 24 , 28 , 32 } ; static
const int vx_valency [ 8 ] = { 4 , 4 , 6 , 4 , 6 , 4 , 4 , 4 } ; static const
int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 4 , 2 , 0 , 4 , 5 , 0 , 1 , 5 ,
6 , 7 , 3 , 0 , 2 , 7 , 4 , 0 , 3 , 7 , 6 , 5 , 1 , 1 , 4 , 6 , 2 , 2 , 5 , 4
, 7 , 2 , 6 , 4 , 3 } ; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 2 , 3
, 4 , 5 , 6 , 7 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 8 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 3.051638903933426 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_Brick * ModeloManual_836bb176_1_geometry_6 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Brick
brick = { 1.0 , 1.5 , 10.0 } ; ( void ) rtdv ; return & brick ; } const
sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_7 (
const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points [
24 ] = { 8.6 , 2.0 , 1.05 , 0.4 , 2.0 , 1.05 , 8.6 , 0.0 , 1.05 , 8.6 , 2.0 ,
- 1.05 , 0.0 , 0.0 , 1.05 , 0.4 , 2.0 , - 1.05 , 0.0 , 0.0 , - 1.05 , 8.6 ,
0.0 , - 1.05 } ; static const int vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 , 23
, 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3
, 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3
, 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 ,
7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const int seed_vx_ids [
8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 9.075791976461337 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_Brick *
ModeloManual_836bb176_1_geometry_8 ( const RuntimeDerivedValuesBundle * rtdv
) { static const sm_core_compiler_Brick brick = { 15.0 , 1.5 , 15.0 } ; (
void ) rtdv ; return & brick ; } const sm_core_compiler_Brick *
ModeloManual_836bb176_1_geometry_9 ( const RuntimeDerivedValuesBundle * rtdv
) { static const sm_core_compiler_Brick brick = { 13.0 , 0.45 , 15.0 } ; (
void ) rtdv ; return & brick ; } const sm_core_compiler_Brick *
ModeloManual_836bb176_1_geometry_10 ( const RuntimeDerivedValuesBundle * rtdv
) { static const sm_core_compiler_Brick brick = { 16.0 , 0.9 , 15.0 } ; (
void ) rtdv ; return & brick ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_11 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 7.81 , 0.2 , 0.3 , 0.0 , 0.2 ,
0.3 , 7.81 , 0.0 , 0.3 , 7.81 , 0.2 , - 0.3 , 0.0 , 0.0 , 0.3 , 0.0 , 0.2 , -
0.3 , 0.0 , 0.0 , - 0.3 , 7.81 , 0.0 , - 0.3 } ; static const int vx_index [
8 ] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const int vx_valency [
8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph
[ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5
, 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 }
; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ;
static sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points
; cxh . vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh .
numHullPoints = 8 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh .
graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB =
7.835566348388609 ; ( void ) rtdv ; return & cxh ; } const
sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_12 (
const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points [
24 ] = { 20.0 , 18.0 , 0.225 , 3.0 , 18.0 , 0.225 , 20.0 , 0.0 , 0.225 , 20.0
, 18.0 , - 0.225 , 0.0 , 0.0 , 0.225 , 3.0 , 18.0 , - 0.225 , 0.0 , 0.0 , -
0.225 , 20.0 , 0.0 , - 0.225 } ; static const int vx_index [ 8 ] = { 0 , 3 ,
8 , 13 , 18 , 23 , 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 ,
5 , 5 , 5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 ,
2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5
, 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const
int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 26.91101075768058 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_13 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 8.359999999999999 , 0.2 ,
0.975 , 0.2 , 0.2 , 0.975 , 8.359999999999999 , 0.0 , 0.975 ,
8.359999999999999 , 0.2 , - 0.975 , 0.0 , 0.0 , 0.975 , 0.2 , 0.2 , - 0.975 ,
0.0 , 0.0 , - 0.975 , 8.359999999999999 , 0.0 , - 0.975 } ; static const int
vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const int
vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int
vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 ,
3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4
, 6 , 5 , 3 , 2 } ; static const int seed_vx_ids [ 8 ] = { 0 , 4 , 4 , 2 , 3
, 6 , 6 , 7 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 8 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 8.586739777121466 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_14
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 24 ] = { 8.220000000000001 , 0.2 , 0.9 , 0.05 , 0.2 , 0.9 ,
8.220000000000001 , 0.0 , 0.9 , 8.220000000000001 , 0.2 , - 0.9 , 0.0 , 0.0 ,
0.9 , 0.05 , 0.2 , - 0.9 , 0.0 , 0.0 , - 0.9 , 8.220000000000001 , 0.0 , -
0.9 } ; static const int vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 ,
31 } ; static const int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 }
; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 ,
4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6
, 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const int seed_vx_ids [ 8 ] =
{ 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static sm_core_compiler_ConvexPolyhedron
cxh ; cxh . hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh .
vxValency = vx_valency ; cxh . numHullPoints = 8 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 8.417149161087739 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_15
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 24 ] = { 8.140000000000001 , 0.2 , 0.825 , 0.03 , 0.2 , 0.825 ,
8.140000000000001 , 0.0 , 0.825 , 8.140000000000001 , 0.2 , - 0.825 , 0.0 ,
0.0 , 0.825 , 0.03 , 0.2 , - 0.825 , 0.0 , 0.0 , - 0.825 , 8.140000000000001
, 0.0 , - 0.825 } ; static const int vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 ,
23 , 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5
, 3 , 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0
, 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 ,
3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const int
seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 8.307954020094238 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_16 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 7.81 , 0.2 , 0.375 , 0.0 , 0.2
, 0.375 , 7.81 , 0.0 , 0.375 , 7.81 , 0.2 , - 0.375 , 0.0 , 0.0 , 0.375 , 0.0
, 0.2 , - 0.375 , 0.0 , 0.0 , - 0.375 , 7.81 , 0.0 , - 0.375 } ; static const
int vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const
int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int
vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 ,
3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4
, 6 , 5 , 3 , 2 } ; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3
, 5 , 6 , 7 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 8 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 7.848477559374174 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_17
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 24 ] = { 7.81 , 0.2 , 0.675 , 0.0 , 0.2 , 0.675 , 7.81 , 0.0 , 0.675 , 7.81
, 0.2 , - 0.675 , 0.0 , 0.0 , 0.675 , 0.0 , 0.2 , - 0.675 , 0.0 , 0.0 , -
0.675 , 7.81 , 0.0 , - 0.675 } ; static const int vx_index [ 8 ] = { 0 , 3 ,
8 , 13 , 18 , 23 , 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 ,
5 , 5 , 5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 ,
2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5
, 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const
int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 7.928341566809542 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_18 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 7.81 , 0.2 , 0.6 , 0.0 , 0.2 ,
0.6 , 7.81 , 0.0 , 0.6 , 7.81 , 0.2 , - 0.6 , 0.0 , 0.0 , 0.6 , 0.0 , 0.2 , -
0.6 , 0.0 , 0.0 , - 0.6 , 7.81 , 0.0 , - 0.6 } ; static const int vx_index [
8 ] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const int vx_valency [
8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph
[ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5
, 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 }
; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ;
static sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points
; cxh . vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh .
numHullPoints = 8 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh .
graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB =
7.904182437165781 ; ( void ) rtdv ; return & cxh ; } const
sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_19 (
const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points [
24 ] = { 7.81 , 0.2 , 0.525 , 0.0 , 0.2 , 0.525 , 7.81 , 0.0 , 0.525 , 7.81 ,
0.2 , - 0.525 , 0.0 , 0.0 , 0.525 , 0.0 , 0.2 , - 0.525 , 0.0 , 0.0 , - 0.525
, 7.81 , 0.0 , - 0.525 } ; static const int vx_index [ 8 ] = { 0 , 3 , 8 , 13
, 18 , 23 , 28 , 31 } ; static const int vx_valency [ 8 ] = { 3 , 5 , 5 , 5 ,
5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 ,
2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7
, 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ; static const int
seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 7.882804069618881 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_20 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 4.2 , 1.3 , 0.5 , 0.0 , 1.0 ,
0.5 , 4.2 , - 0.0 , 0.5 , 4.2 , 1.3 , - 0.5 , 0.0 , - 0.0 , 0.5 , 0.0 , 1.0 ,
- 0.5 , 0.0 , - 0.0 , - 0.5 , 4.2 , - 0.0 , - 0.5 } ; static const int
vx_index [ 8 ] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const int
vx_valency [ 8 ] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int
vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 ,
3 , 0 , 2 , 7 , 5 , 1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4
, 6 , 5 , 3 , 2 } ; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3
, 5 , 6 , 7 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 8 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 4.508880127038198 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_21
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 18 ] = { 1.0 , 0.0 , 0.5 , - 1.6 , 0.3 , 0.5 , - 1.6 , 0.0 , 0.5 , 1.0 ,
0.0 , - 0.5 , - 1.6 , 0.3 , - 0.5 , - 1.6 , 0.0 , - 0.5 } ; static const int
vx_index [ 6 ] = { 0 , 3 , 7 , 12 , 17 , 21 } ; static const int vx_valency [
6 ] = { 3 , 4 , 5 , 5 , 4 , 3 } ; static const int vx_adjacency_graph [ 24 ]
= { 1 , 2 , 3 , 2 , 0 , 3 , 4 , 0 , 1 , 4 , 5 , 3 , 0 , 2 , 5 , 4 , 1 , 1 , 3
, 5 , 2 , 2 , 4 , 3 } ; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 2 , 0
, 3 , 4 , 5 , 3 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 6 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 24 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 2.80178514522438 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_22
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 24 ] = { 1.6 , 0.3 , 0.5 , - 1.0 , 0.6 , 0.5 , - 1.0 , 0.0 , 0.5 , 1.6 ,
0.0 , 0.5 , 1.6 , 0.3 , - 0.5 , - 1.0 , 0.6 , - 0.5 , - 1.0 , 0.0 , - 0.5 ,
1.6 , 0.0 , - 0.5 } ; static const int vx_index [ 8 ] = { 0 , 4 , 8 , 14 , 18
, 24 , 28 , 32 } ; static const int vx_valency [ 8 ] = { 4 , 4 , 6 , 4 , 6 ,
4 , 4 , 4 } ; static const int vx_adjacency_graph [ 36 ] = { 1 , 2 , 3 , 4 ,
2 , 0 , 4 , 5 , 0 , 1 , 5 , 6 , 7 , 3 , 0 , 2 , 7 , 4 , 0 , 3 , 7 , 6 , 5 , 1
, 1 , 4 , 6 , 2 , 2 , 5 , 4 , 7 , 2 , 6 , 4 , 3 } ; static const int
seed_vx_ids [ 8 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 } ; static
sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points ; cxh
. vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh . numHullPoints = 8
; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh . graphSize = 36 ; cxh .
seedVxIds = seed_vx_ids ; cxh . diagonalAABB = 2.849561369755002 ; ( void )
rtdv ; return & cxh ; } const sm_core_compiler_ConvexPolyhedron *
ModeloManual_836bb176_1_geometry_23 ( const RuntimeDerivedValuesBundle * rtdv
) { static const double hull_points [ 24 ] = { 0.6 , 0.3 , 0.5 , 0.0 , 0.3 ,
0.5 , 0.6 , 0.0 , 0.5 , 0.6 , 0.3 , - 0.5 , 0.0 , 0.0 , 0.5 , 0.0 , 0.3 , -
0.5 , 0.0 , 0.0 , - 0.5 , 0.6 , 0.0 , - 0.5 } ; static const int vx_index [ 8
] = { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const int vx_valency [ 8
] = { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph [
36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 ,
1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ;
static const int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ;
static sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points
; cxh . vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh .
numHullPoints = 8 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh .
graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB =
1.20415945787923 ; ( void ) rtdv ; return & cxh ; } const
sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_24 (
const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points [
18 ] = { 0.8 , 0.0 , 0.5 , - 1.0 , 0.3 , 0.5 , - 1.0 , 0.0 , 0.5 , 0.8 , 0.0
, - 0.5 , - 1.0 , 0.3 , - 0.5 , - 1.0 , 0.0 , - 0.5 } ; static const int
vx_index [ 6 ] = { 0 , 3 , 7 , 12 , 17 , 21 } ; static const int vx_valency [
6 ] = { 3 , 4 , 5 , 5 , 4 , 3 } ; static const int vx_adjacency_graph [ 24 ]
= { 1 , 2 , 3 , 2 , 0 , 3 , 4 , 0 , 1 , 4 , 5 , 3 , 0 , 2 , 5 , 4 , 1 , 1 , 3
, 5 , 2 , 2 , 4 , 3 } ; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 2 , 0
, 3 , 4 , 5 , 3 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 6 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 24 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 2.080865204668481 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_25
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 18 ] = { 1.0 , 0.0 , 0.5 , - 2.0 , 0.45 , 0.5 , - 2.0 , 0.0 , 0.5 , 1.0 ,
0.0 , - 0.5 , - 2.0 , 0.45 , - 0.5 , - 2.0 , 0.0 , - 0.5 } ; static const int
vx_index [ 6 ] = { 0 , 3 , 7 , 12 , 17 , 21 } ; static const int vx_valency [
6 ] = { 3 , 4 , 5 , 5 , 4 , 3 } ; static const int vx_adjacency_graph [ 24 ]
= { 1 , 2 , 3 , 2 , 0 , 3 , 4 , 0 , 1 , 4 , 5 , 3 , 0 , 2 , 5 , 4 , 1 , 1 , 3
, 5 , 2 , 2 , 4 , 3 } ; static const int seed_vx_ids [ 8 ] = { 0 , 1 , 2 , 0
, 3 , 4 , 5 , 3 } ; static sm_core_compiler_ConvexPolyhedron cxh ; cxh .
hullPoints = hull_points ; cxh . vxIndex = vx_index ; cxh . vxValency =
vx_valency ; cxh . numHullPoints = 6 ; cxh . vxAdjacencyGraph =
vx_adjacency_graph ; cxh . graphSize = 24 ; cxh . seedVxIds = seed_vx_ids ;
cxh . diagonalAABB = 3.194135250736888 ; ( void ) rtdv ; return & cxh ; }
const sm_core_compiler_ConvexPolyhedron * ModeloManual_836bb176_1_geometry_26
( const RuntimeDerivedValuesBundle * rtdv ) { static const double hull_points
[ 24 ] = { 0.25 , 0.5 , 0.25 , - 0.25 , 0.5 , 0.25 , 0.25 , - 0.0 , 0.25 ,
0.25 , 0.5 , - 0.25 , - 0.25 , - 0.0 , 0.25 , - 0.25 , 0.5 , - 0.25 , - 0.25
, - 0.0 , - 0.25 , 0.25 , - 0.0 , - 0.25 } ; static const int vx_index [ 8 ]
= { 0 , 3 , 8 , 13 , 18 , 23 , 28 , 31 } ; static const int vx_valency [ 8 ]
= { 3 , 5 , 5 , 5 , 5 , 5 , 3 , 5 } ; static const int vx_adjacency_graph [
36 ] = { 1 , 2 , 3 , 2 , 0 , 3 , 5 , 4 , 0 , 1 , 4 , 7 , 3 , 0 , 2 , 7 , 5 ,
1 , 2 , 1 , 5 , 6 , 7 , 1 , 3 , 7 , 6 , 4 , 4 , 5 , 7 , 4 , 6 , 5 , 3 , 2 } ;
static const int seed_vx_ids [ 8 ] = { 0 , 1 , 4 , 2 , 3 , 5 , 6 , 7 } ;
static sm_core_compiler_ConvexPolyhedron cxh ; cxh . hullPoints = hull_points
; cxh . vxIndex = vx_index ; cxh . vxValency = vx_valency ; cxh .
numHullPoints = 8 ; cxh . vxAdjacencyGraph = vx_adjacency_graph ; cxh .
graphSize = 36 ; cxh . seedVxIds = seed_vx_ids ; cxh . diagonalAABB =
0.8660254037844386 ; ( void ) rtdv ; return & cxh ; } const
sm_core_compiler_Cylinder * ModeloManual_836bb176_1_geometry_27 ( const
RuntimeDerivedValuesBundle * rtdv ) { static const sm_core_compiler_Cylinder
cylinder = { 0.0935 , 0.045 } ; ( void ) rtdv ; return & cylinder ; } void
ModeloManual_836bb176_1_initializeGeometries ( const struct
RuntimeDerivedValuesBundleTag * rtdv ) { ModeloManual_836bb176_1_geometry_0 (
rtdv ) ; ModeloManual_836bb176_1_geometry_1 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_2 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_3 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_4 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_5 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_6 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_7 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_8 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_9 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_10 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_11 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_12 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_13 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_14 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_15 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_16 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_17 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_18 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_19 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_20 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_21 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_22 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_23 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_24 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_25 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_26 ( rtdv ) ;
ModeloManual_836bb176_1_geometry_27 ( rtdv ) ; }
