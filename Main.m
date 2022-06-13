clc, clear, close all

%% 
%run('nuevo_DataFile.m') ; 

%% Rigid Terrain Params
run('rigid_terrain_params.m');

sphere_radius = 0.1;
sphere_ptcld  = Point_Cloud_Data_Sphere(sphere_radius,200);


%%
sim('nuevo');
