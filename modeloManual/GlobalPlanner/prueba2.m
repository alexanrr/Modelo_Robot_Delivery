clear;clc;
S = shaperead('file.shp','UseGeoCoords',true);

figure(1)
geoshow(S);
xLim=[-79.97  -79.96];
yLim=[-2.152  -2.14];
set(gca,'XLim', xLim, 'YLim', yLim);
hold on;
grid on;
p_inicio= [-79.96658   -2.14615 ];
p_goal =[-79.9661, -2.14496 ];
plot(p_inicio(1),p_inicio(2),'LineStyle','none','Marker','o','MarkerSize',5,'Color','black')
plot(p_goal(1),p_goal(2),'LineStyle','none','Marker','o','MarkerSize',5,'Color','black')

 %% Generar Trayectorias
%Localizar vecindad en el punto de origen.

puntosLa=[p_inicio(1)];
puntosLo=[p_inicio(2)];
p_actual= p_inicio;

% ubicar el punto exacto de origen.
    for i = 1:309
        A= S(i,:).Lat;
        B= S(i,:).Lon;
        estado= false;
        d=[];
        Lat=[];
        Long=[];
        
        for j= 1:(length(A)-1)
            C=[B(j) A(j)];
            dist=norm(p_actual-C);
            if dist <= 0.0002
                d=[d,dist];
                Lat=[Lat, C(1)];
                Long=[Long, C(2)];
                %plot(C(1),C(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
            end 
        end
        if length(d)>0
            u=find(d==min(d));
            v= u(1);
            p_actual = [Lat(v),Long(v)];
            %plot(Lat(v),Long(v),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
            %break
        
            for j= 1:(length(A)-1)
                C=[B(j) A(j)];
                if norm(C-p_actual)==0
                    if (j>1)&(j< (length(A)-1))
                        C0=[B(j-1) A(j-1)];
                        C1=[B(j) A(j)];
                        C2=[B(j+1) A(j+1)];
                        plot(C0(1),C0(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
                        plot(C1(1),C1(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
                        plot(C2(1),C2(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
                    end
                    if (j==1)&(j== (length(A)-1))
                        C1=[B(j) A(j)];
                        plot(C1(1),C1(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
                    end
                    if (j>1)&(j< (length(A)-1))
                        C1=[B(j) A(j)];
                        C2=[B(j+1) A(j+1)];
                        plot(C1(1),C1(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
                        plot(C2(1),C2(2),'LineStyle','-','Marker','o','MarkerSize',5,'Color','red')
                    end

                   
                end
            end

        end




    end







