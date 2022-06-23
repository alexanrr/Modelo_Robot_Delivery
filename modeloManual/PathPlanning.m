%% Graficas Planificador de Trayectorias
figure(1)
Pose= out.RobotPose1
PX= Pose(:,1)
PY= Pose(:, 2)
QZ= Pose(:,3)
plot(PX,PY)
hold on;
grid on;
plot(M(:,1), M(:,2), 'md')
%% Mapa

imagen_mapa= 'map.png';
osm_file= 'map.osm';
[parsed_osm, osm_xml]= parse_openstreetmap(osm_file);
[connectivity_matrix, intersection_node_indices]= extract_connectivity(parsed_osm);
intersection_nodes= get_unique_node_xy(parsed_osm,intersection_node_indices);
plot_way(gca, parsed_osm, imagen_mapa)