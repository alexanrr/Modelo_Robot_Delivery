%clear;clc;
S = shaperead('file2.shp');
%figure(1)
%mapshow(S)
xLim=[-79.968  -79.965];
yLim=[-2.1475  -2.1435];
set(gca,'XLim', xLim, 'YLim', yLim);
step= 0.00001
[x,y] = meshgrid(-79.96800:step:-79.96500, -2.14750:step:-2.14350);
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

%figure(2)
map= binaryOccupancyMap(flipud(bg));
%show(map)

planner = plannerAStarGrid(map);

[p1,p2]= geotoXY(-79.9668,-2.1462,x,y, numRows, numCols);
[f1,f2]= geotoXY(-79.9661,-2.14477,x,y, numRows, numCols);

start=[p2,p1]
goal=[f2,f1]

u=plan(planner,start,goal);
xlim([0 5])

figure(1)
show(planner);

%prm = mobileRobotPRM(map,200);
%prm.ConnectionDistance= 30;

%show(prm)


%% Guardar trayectoria

time = clock;
time_test = strcat(num2str(time(1)),'_',... % Returns year 
    num2str(time(2)),'_',... % Returns month 
    num2str(time(3)),'_',... % Returns day 
    num2str(time(4)),'_',... % returns hour 
    num2str(time(5)),'_',... % returns min 
    num2str(fix(time(6))));

save(strcat('.\TrayectoriaGlobal\Planning_',time_test), 'u','start','goal');
