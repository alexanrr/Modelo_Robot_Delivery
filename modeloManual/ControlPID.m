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
title("Respuesta del Sistema Retroalimentado")

pidtune(Gp, 'PID')