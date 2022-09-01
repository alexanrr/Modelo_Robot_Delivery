%clear; clc;

Gp =tf([21.372],[0.000054383 0.06398 1]);
Gc= pidtune(Gp, 'PID')

%Respuesta al escalon en lazo abierto sin controlador
figure(1)
plot(out.tout, out.Planta)
hold on;
plot(out.tout, out.SetPoint, 'r')
grid on;
xlabel("Tiempo (s)")
ylabel("Voltaje (V)")
title("Respuesta del Sistema Retroalimentado",'Fontname','Arial')

pidtune(Gp, 'PID')

set(1,'PaperSize' ,[5.4 4.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\JamilethPC\Escritorio\MODELO TESIS V6\Modelo_Robot_Delivery\modeloManual\Plots\';
nombre = 'PID';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf')
