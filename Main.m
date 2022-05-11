clc, clear, close all

%% 
run('nuevo_DataFile.m') ; 

%% Rigid Terrain Params
run('rigid_terrain_params.m');

%%
sim('nuevo');
