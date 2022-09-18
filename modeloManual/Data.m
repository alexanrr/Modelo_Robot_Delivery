clear all; clc;

%% Cargar planificacion global
% Planificacion
load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_8_25_1_58_41'); %
%load('./GlobalPlanner/TrayectoriaGlobal/Planning_2022_8_26_23_40_29'); %


%% Datos sobre el contacto rueda
radius = 0.175/2;
height = 0.05;

%% Cinematica
a=0.2;
b=0.542;
R=0.175/2;
m1= [1 -1 -(a+b); 1 1 (a+b); 1 1 -(a+b); 1 -1 (a+b)];
m2= (1/R)*m1;
m3= pinv(m2);


%% Coordenadas en el ambiente

%factorE = 1.195;
factorE = 1.1;

% Inicial
pos_inicial = start;

u(1,:) = [];
x_ini= u(1,:);
y_ini= u(1,:);

x0= x_ini(1)*factorE; %445;  %pos_inicial(1); 
y0= y_ini(2)*factorE; %316;  %pos_inicial(2); 

% objetivo
pos_final = goal;
u(end,:) = [];
pos_fin= u(end,:);

x_obj = pos_fin(1)*factorE;
y_obj = pos_fin(2)*factorE;

pos_z = ones(numel(u(:,1)),1);
zzz= pos_z*0;

x_environment = u(:,1);
y_environment = u(:,2);
z_environment = zzz;

%Puntos de trayectoria
x_m = x_environment*factorE;
y_m = y_environment*factorE;
z_m = z_environment;

%M_si = [129.5231,  143.0474; 129.9081 , 143.0771 ; 130.2930 , 143.1069; 130.6779 , 143.1366 ; 131.0628 , 143.1663];

M_ini = [x_m y_m];

pointCloud0 = [x_m y_m z_m];

div= 10;

M2= WaypointsToTrayectory(M_ini,div);

x_new = unique(M2(:,1),'stable');
y_new = unique(M2(:,2),'stable');

numdata= numel(y_new);
tramo1 = zeros(32,1);
tramo2 = [0.13; 0.4; 0.68; 0.96; 1.25; 1.4; 1.55; 1.69; 1.84; 1.98; 2.08];
tramo3 = ones(12,1)*2.10;
tramo4 = ones(5,1)*1.5;
tramo5 = ones(5,1)*0.9;
tramo6 = ones(numdata-32-11-11-6-5,1)*0.45;
z_new = [tramo1; tramo2; tramo3; tramo4; tramo5; tramo6];

M=  [x_new y_new];
pointCloud = [x_new y_new z_new];


%% Ruta Alterna - Rampas
prue=[192.193,250.594;192.2, 254.251;192.351,257.03;192.514,259.4;193.5,261.6;194.4,263.2; 195.3,265.9; 195.69,266.8; 196.11,268; 196.65, 269;197.15,271.297; 197.8,273.86; 198.3, 275.7;199,277.4; 200, 281.2; 202.4,288.25;204.74,294.42;208,296.5 ; 209.63,296;211.1,296];
div= 2;
pruebaM= WaypointsToTrayectory(prue,div);

Kp =0.135293078315631;
Ki= 2.88815347475101;


%% Puntos obstáculo 1
alturaobst= 0.9; %0.01 para que sea solo una tablita y pueda pasar encima
                  %0.6 para que se un obstáculo

M_obst=[ pointCloud(22:30,:); pointCloud(45:53,:)];
puntosobst= numel(M_obst(:,1));

puntomin = 1;
puntomax = puntosobst;
r = (puntomax-puntomin).*rand(1,1);% + a;

valoraletorio= ceil(r);

RandomPos = M_obst(valoraletorio,:);

xobstac= RandomPos(1);
yobstac= RandomPos(2);
zobstac= RandomPos(3);

xp1= xobstac +0.25;
xp2= xobstac -0.25;
yp1= yobstac +0.25;
yp2= yobstac -0.25;

posBordes=[xobstac, yobstac; xp1, yobstac; xp2, yobstac; xobstac, yp1; xobstac, yp2; 
    xp1,yp1; xp1,yp2; xp2, yp1; xp2,yp2];



%% Obstaculo 2

alturaobst2= 0.9; %0.01 para que sea solo una tablita y pueda pasar encima
                  %0.6 para que se un obstáculo

M_obst2=[ pointCloud(5:21,:)];
puntosobst2= numel(M_obst2(:,1));

puntomin2 = 1;
puntomax2 = puntosobst2;
r2 = (puntomax2-puntomin2).*rand(1,1);% + a;

valoraletorio2= ceil(r2);

RandomPos2 = M_obst2(valoraletorio2,:);


xobstac2= RandomPos2(1);
yobstac2= RandomPos2(2);
zobstac2= RandomPos2(3);



%% Datos fisicos
M_chasis = 3.5;%3;           %kg
    
M_rueda =  1;              %kg
D_rueda = 1;               %

M_ruedacontacto= 1;        %kg
D_ruedacontacto= 12;       %

%% Datos de amortiguaciòn
K_M = 2585.125;         %N/m
c_M = 100;              %Nm/s
K_m = 3000;             %N/m



