%% Mapa

imagen_mapa= 'map.png';
osm_file= 'map.osm';
[parsed_osm, osm_xml]= parse_openstreetmap(osm_file);
[connectivity_matrix, intersection_node_indices]= extract_connectivity(parsed_osm);
intersection_nodes= get_unique_node_xy(parsed_osm,intersection_node_indices);
plot_way(gca, parsed_osm, imagen_mapa)
