clear all; clc;

%% Cargar planificacion global
% Planificacion
load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_8_25_1_58_41'); %Si pero sin el primer y ultimo punto
%load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_8_26_23_40_29'); %si pero el punto final no va


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
factorE = 1.1;

% Inicial
pos_inicial = start;
u(1,:) = [];
x_ini= u(1,:);
y_ini= u(1,:);

x0= x_ini(1)*factorE; %pos_inicial(1) %358*factorE; %445;
y0= y_ini(2)*factorE; %pos_inicial(2) %334*factorE; %316; 

% objetivo
pos_final = goal;

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

M_si = [0,0; 1,1; 4,2; 3,4 ; 5,5];
M_ini = [x_m y_m];

pointCloud0 = [x_m y_m z_m];

div= 10;
M2= WaypointsToTrayectory(M_ini,div);

x_new = unique(M2(:,1),'stable');
y_new = unique(M2(:,2),'stable');
z_new = zeros(numel(y_new),1);

M=  [x_new y_new];

pointCloud = [x_new y_new z_new];

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
