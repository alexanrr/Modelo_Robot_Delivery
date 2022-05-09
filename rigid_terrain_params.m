%% Get xyz points from STL representing the rigid terrain
loadx = load('varX.mat');
loady = load('varY.mat');

% seperate them into x, y, and z variables
x = [loadx.x];
y = [loady.y];

%x = terrain_points_new(:,1); 
%y = terrain_points_new(:,2);
z = zeros(31878,1);

% Create Grid Vectors & Z height parameters for grid surface block

xg = linspace(min(x), max(x), 100); % x-grid vector
yg = linspace(min(y), max(y), 100); % y-grid vector

% Create an interpolant that fits a surface of the form z = F(x,y)  
F = scatteredInterpolant(x,y,z);
z_heights = F({xg,yg}); %  Using this syntax to conserve memory when querying a large grid of points.


%% Coeficientes

K = 200000; 
D_contact = 1e4;
TW = 0.3;
Mu = 0.8;
Mud = 0.6;
Cv = 1e-2;

%%ruedas 
points = stlread('RUEDA16CM_ipt_849a4f95.stl') ;
all_pts = unique(points.Points,'Rows');

sorted_rows = sortrows(all_pts,2);

outer_rim_pts = sorted_rows((sorted_rows(:,2)== min(sorted_rows(:,2))),:);
r = [sqrt(outer_rim_pts(:,1).^2+ outer_rim_pts(:,3).^2)];
outer_rim_pts = outer_rim_pts(r> 20.801,:);

middle_rim_pts_1 = sorted_rows((sorted_rows(:,2)== median(sorted_rows(:,2))),:);

inner_rim_pts = sorted_rows((sorted_rows(:,2)== max(sorted_rows(:,2))),:);
r = [sqrt(inner_rim_pts(:,1).^2+ inner_rim_pts(:,3).^2)];
inner_rim_pts = inner_rim_pts(r> 20.801,:);

new_wheel_points = [outer_rim_pts ; middle_rim_pts_1; inner_rim_pts];

