

%% Geometria de la nube de puntos
run('Point_Cloud_Data_Cylinder.m');

%% Datos de la nube de puntos
radius = 0.082;
height = 0.045;
caps = true;
numpts = 50 ;
rueda_ptcld  = Point_Cloud_Data_Cylinder(radius,height,numpts,caps);


%% 
a=0.2;
b=0.15;
R=0.16/2;

m1= [1 -1 -(a+b); 1 1 (a+b); 1 1 -(a+b); 1 -1 (a+b)];
m2= (1/R)*m1;

m3= pinv(m2);
x0= 0;
y0= 0;

%% Ruta a seguir
M= [0,0; 1,1; 4,2; 3,4 ; 5,5];

%%  Simulacion del modelo

%sim("ModeloManual");
