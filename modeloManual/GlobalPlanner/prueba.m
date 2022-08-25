%%  Pruebas
data = load('mapa.mat')
map= binaryOccupancyMap(data.matriz_Mapa,1);
%show(map)

inflatedMap = copy(map);
inflate(inflatedMap, 2.2);
%figure;
%show(inflatedMap)


%% PRM

prm= robotics.PRM(inflatedMap);
prm.NumNodes = 1000;
prm.ConnectionDistance= 50;
ax= axes;
start = [119  130]
goal= [196  274]

path= findpath(prm, start, goal)
show(prm, 'Parent', ax)


