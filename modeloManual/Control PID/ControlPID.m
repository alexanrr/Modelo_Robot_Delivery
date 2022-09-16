%clear; clc;
%% Ingreso de la Planta y uso de auto-tunning

Gp =tf([392867.65],[1 1176.47 18382.35]);
Gc= pidtune(Gp, 'PID')

%% Respuesta al escalon en lazo abierto sin controlador
figure(1)
plot(out.tout, out.Planta)
hold on;
plot(out.tout, out.SetPoint, 'r')
grid on;
xlabel("Tiempo (s)")
ylabel("Voltaje (V)")
title("Respuesta del Sistema Retroalimentado",'Fontname','Arial')

pidtune(Gp, 'PID')
%% grafica exportada
set(1,'PaperSize' ,[15.4 14.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
nombre = 'Prueba1';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf')
