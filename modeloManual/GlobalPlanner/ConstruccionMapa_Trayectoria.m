%clear;clc;
%% Obtención del Mapa desde archivo .shp obtenido de QGis
S = shaperead('mapa.shp');
% figure(1)
% mapshow(S)
% title("Mapa de la ESPOL")
% Limites en x e y del occupancy grid
% xLim=[-79.968  -79.965];
% yLim=[-2.1475  -2.1435];
% set(gca,'XLim', xLim, 'YLim', yLim);
%se define un step, de este depende la resolución del mapa
step= 0.00001;
%se crea la malla para el occupancy grid
[x,y] = meshgrid(-79.96800:step:-79.96500, -2.14750:step:-2.14350);
%Empieza la iteración de los poligonos de S
Ax=[];
Ay=[];
[numRows, numCols] = size(x);
for i=1:length(S)
    Sx = S(i).X;
    Sy= S(i).Y ;
    Ax= [Ax, Sx];
    Ay= [Ay, Sy];
end
s=[0, find(isnan(Ax))];
for p = 2:length(s)
    if p==2
        % create binary map bg using first polygon (indices 1:114)
        bg = poly2mask(Ax(s(p-1)+1:s(p)-1),Ay(s(p-1)+1:s(p)-1),numRows,numCols);
    else
        % determine indices inside the remaining polygons
        tmp = inpolygon(x,y,Ax(s(p-1)+1:s(p)-1),Ay(s(p-1)+1:s(p)-1));
        % Subtract the interior polygons from binary map
        bg = abs(bg - tmp);
    end
end
% matriz_Mapa contiene 1 y 0 que representan los obstaculos y el espacio
% libre
matriz_Mapa = flipud(bg);
%Se crea el occupancy grid con la matriz calculada.
%figure(1)
map= binaryOccupancyMap(matriz_Mapa);
%show(map)
%% Prueba de Planificación Global con A*

% planner = plannerAStarGrid(map);
% [p1,p2]= geotoXY(-79.9668,-2.1462,x,y, numRows, numCols);
% [f1,f2]= geotoXY(-79.9661,-2.14477,x,y, numRows, numCols);
% start=[p2,p1]
% goal=[f2,f1]
% u=plan(planner,start,goal);
% figure(1)
% show(planner);

%% Planificación Global con RRT

% Se infla el mapa a un factor de  2.2 para evitar cruzar cerca de los
% edificios.

inflatedMap = copy(map);
inflate(inflatedMap, 2.2);

%Se implementa el algoritmo RRT en el 
prm= robotics.PRM(inflatedMap);
prm.NumNodes = 1000;
prm.ConnectionDistance= 50;
ax= axes;

%Puntos de Inicio y Fin

start = [119  130]
goal= [196  274]

u= findpath(prm, start, goal);
figure(2)
show(prm, 'Parent', ax)


%% Guardar trayectoria
time = clock;
time_test = strcat(num2str(time(1)),'_',... % Returns year 
    num2str(time(2)),'_',... % Returns month 
    num2str(time(3)),'_',... % Returns day 
    num2str(time(4)),'_',... % returns hour 
    num2str(time(5)),'_',... % returns min 
    num2str(fix(time(6))));

% solo descomentar cuando hay una trayectoria nueva
%save(strcat('.\TrayectoriaGlobal\Planning_',time_test), 'u','start','goal');

%% Plots
xLim=[0  300];
yLim=[0  400];
set(gca,'XLim', xLim, 'YLim', yLim,'fontsize',9.5);
%set(gca,'box','off','Fontname','Arial','Fontsmoothing','on');
set(gca,'Fontname','Arial','Fontsmoothing','on','fontsize',9.5);

%ylabel('$t_d$~(msec)','fontsize',12,'Interpreter','latex')
%xlabel('Frequency (Hz)','fontsize',12,'Interpreter','latex'), 

%title('RRT');%,"Interpreter",'latex')%,'FontSize',14)

%xlabel('$\mathsf{X}$', 'Interpreter', 'latex', 'fontweight','bold','fontsize',10);
%xlabel('x','fontsize',9.5);
%ylabel('y', 'fontsize',9.5);

set(1,'PaperSize' ,[5.4 4.4],'PaperPositionMode','auto')

%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\JamilethPC\Escritorio\MODELO TESIS V6\Modelo_Robot_Delivery\modeloManual\Plots\';
nombre = 'TGlobal_RRT_';  %cambiar nombre para nueva imagen
 
%descomentar para guardar imagen en pdf
%print('-f1','-painters', [filepath, nombre], '-dpdf')
