%clear; clc;


%% Camino de n lineas
pxd=[];
pyd=[];

%X=[-2, -1, 1,1, 2.1, 3, 4, 5];
%Y =[-3, 7,8,0.5, 1, 1.5, 2, 2.5];

X= M(:,1);
Y= M(:, 2);
div= 10;
N = length(X);

for i= 1: N-1
    pxd= [pxd,linspace(X(i),X(i+1), div)];
    pyd= [pyd,linspace(Y(i),Y(i+1), div)];
    
end

M2=transpose([pxd; pyd])

figure(1)
plot(pxd,pyd);