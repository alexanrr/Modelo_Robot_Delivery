%clear; clc;

M_si = [129.5231,  143.0474; 129.9081 , 143.0771 ; 130.2930 , 143.1069; 
     130.6779 , 143.1366 ; 131.0628 , 143.1663];
M_W = WaypointsToTrayectory(M_si, 10);

%% Camino deseado
p_X = M_W(:,1);
p_Y = M_W(:,2);

%% Computo de beta 
beta = [];
N= length(p_X)
for i= 1:(N)

    if i==1
        u = atan((p_Y(i+1)-p_Y(i))/(p_X(i+1) - p_X(i)));
        beta = [beta, u];
    else
        u = atan((p_Y(i)-p_Y(i-1))/(p_X(i) - p_X(i-1)));
        beta = [beta, u];
    end
end



