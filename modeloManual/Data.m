clear all; clc

%% Cargar planificacion global
load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_7_29_15_11_9');


%% Datos sobre el contacto rueda
radius = 0.082;
height = 0.045;

%% Ruta a seguir
M_si = [0,0; 1,1; 4,2; 3,4 ; 5,5];
M = u;


%% Cinematica
a=0.2;
b=0.15;
R=0.16/2;

m1= [1 -1 -(a+b); 1 1 (a+b); 1 1 -(a+b); 1 -1 (a+b)];
m2= (1/R)*m1;
m3= pinv(m2);

% Inicial
pos_inicial = start;
x0= 445; %pos_inicial(1);
y0= 316; %pos_inicial(2);


% objetivo
pos_final = goal;
x_obj = pos_final(1);
y_obj = pos_final(2);

pos_z = zeros(numel(u(:,1)),1);
%zzz= pos_z*5;

%Puntos de trayectoria
pointCloud = [u(:,1)  u(:,2) pos_z];


%% Datos fisicos
M_chasis = 35;          %kg
M_rueda =  0.9;         %kg
K_M = 2585.125;         %N/m
c_M = 100;              %Nm/s

m_rueda = 0.9;          %kg
K_m = 3000;             %N/m


%%  Simulacion del modelo
%sim("ModeloManual");
