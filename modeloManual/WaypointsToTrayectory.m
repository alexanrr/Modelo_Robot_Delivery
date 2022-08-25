function [M2] = WaypointsToTrayectory(M, div)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here

pxd=[];
pyd=[];
X= M(:,1);
Y= M(:, 2);
N = length(X);

for i= 1: N-1
    pxd= [pxd,linspace(X(i),X(i+1), div)];
    pyd= [pyd,linspace(Y(i),Y(i+1), div)];
    
end

M2=transpose([pxd; pyd]);
end