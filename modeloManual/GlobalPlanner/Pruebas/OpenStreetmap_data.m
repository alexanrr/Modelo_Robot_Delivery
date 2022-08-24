%%Datos
p_inicial=0;
p_final= 0;
%% name file
openstreetmap_filename = 'mapa_espol.osm';
map_img_filename = 'mapa_espol.png'; % image file saved from online, if available
%% convert XML -> MATLAB struct
[parsed_osm, osm_xml] = parse_openstreetmap(openstreetmap_filename);
%% find connectivity
[connectivity_matrix, intersection_node_indices] = extract_connectivity(parsed_osm);
intersection_nodes = get_unique_node_xy(parsed_osm, intersection_node_indices);

%% Operaciones
X= parsed_osm.node.xy;
x= X(1,:);
y= X(2,:);
[i,j,v]= find(connectivity_matrix);
enlaces= [i j]
indX=unique([enlaces(:,1) enlaces(:,2)]);
fig = figure;

hold(gca, 'on');

plot_way(gca,parsed_osm,map_img_filename)
start= 51;
target=53;
dg= connectivity_matrix;
[route,dist]=route_planner(dg,start,target);
plot_route(gca,route,parsed_osm)


