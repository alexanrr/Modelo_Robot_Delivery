   %Extracting edges from gml file graph
clear;clc
S = shaperead('file.shp','UseGeoCoords',true);

figure(1)
geoshow(S);
xLim=[-79.97  -79.96];
yLim=[-2.152  -2.14];
set(gca,'XLim', xLim, 'YLim', yLim);
hold on;
grid on;
p_inicio= [-79.9668   -2.14622 ];
p_goal =[-79.9661, -2.14496];
plot(p_inicio(1),p_inicio(2),'LineStyle','none','Marker','o','MarkerSize',5,'Color','black')
plot(p_goal(1),p_goal(2),'LineStyle','none','Marker','o','MarkerSize',5,'Color','black')

 %% Generar Trayectorias
%Localizar vecindad en el punto de origen.
puntosLa=[p_inicio(1)];
puntosLo=[p_inicio(2)];
p_actual= p_inicio;
while norm(p_actual-p_goal)>= 0.0002
    Lat=[];
    Long=[];
    for i = 1:309
        A= S(i,:).Lat;
        B= S(i,:).Lon;
        estado= false;
        for j= 1:(length(A)-1)
            C=[B(j) A(j)];
            dist=norm(p_actual-C);
            if dist <= 0.0005
                Lat= [Lat, C(1)];
                Long= [Long, C(2)];
            end
        end

    end

 
    d=[]
    for k= 1:length(Long)
        D= [Lat(k), Long(k)];
        normaf= norm(p_goal-D);
        d=[d,normaf];     
    end
    
    
    u=find(d==min(d));
    v= u(1);
    
    p_actual = [Lat(v),Long(v)];
    puntosLa= [puntosLa, Lat(v)];
    puntosLo= [puntosLo, Long(v)];
    plot(Lat(v),Long(v),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
end

plot(puntosLa,puntosLo,'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')




