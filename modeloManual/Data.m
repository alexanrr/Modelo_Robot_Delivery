clear all; clc;

%% Cargar planificacion global
% Planificacion 1
load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_7_29_15_11_9');
% Planificacion 2
% load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_8_18_14_16_13');

%% Datos sobre el contacto rueda
radius = 0.082;
height = 0.045;


%% Cinematica
a=0.2;
b=0.15;
R=0.16/2;

m1= [1 -1 -(a+b); 1 1 (a+b); 1 1 -(a+b); 1 -1 (a+b)];
m2= (1/R)*m1;
m3= pinv(m2);


%factorE = 1.195;
factorE = 0.6;

% Inicial
pos_inicial = start;
x0= pos_inicial(1)*factorE; %358*factorE; %445;
y0= pos_inicial(2)*factorE; %334*factorE; %316; 


% objetivo
pos_final = goal;
%x_obj = pos_final(1);
%y_obj = pos_final(2);

x_obj = pos_final(1)*factorE;
y_obj = pos_final(2)*factorE;

pos_z = ones(numel(u(:,1)),1);
zzz= pos_z*0;

x_environment = u(:,1);
y_environment = u(:,2);
z_environment = zzz;

%Puntos de trayectoria
x_m = x_environment*factorE;
y_m = y_environment*factorE;
z_m = z_environment;

pointCloud = [x_m y_m z_m];


%% Ruta a seguir
M_si = [0,0; 1,1; 4,2; 3,4 ; 5,5];
M = [x_m y_m];


%% Datos fisicos
M_chasis = 3;%3;           %kg

M_rueda =  1;           %kg
D_rueda = 1;            %

M_ruedacontacto= 1;     %kg
D_ruedacontacto= 10;    %

%% Datos de amortiguaciòn
K_M = 2585.125;         %N/m
c_M = 100;              %Nm/s

K_m = 3000;             %N/m


%%  Simulacion del modelo
%sim("ModeloManual");
