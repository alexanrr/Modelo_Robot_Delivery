%% Graficas Planificador de Trayectorias
figure(1)
Pose= out.RobotPose;
PX= Pose(:,1);
PY= Pose(:, 2);
QZ= Pose(:,3);
plot(PX,PY,'r')
hold on;
grid on;
plot(M(:,1), M(:,2), 'bo')
grid on;
hold on;
plot(pruebaM(:,1), pruebaM(:,2), 'go')
xlabel('eje X')
ylabel('eje y')
title('Ruta del robot','Fontname','Arial')
legend('Posición del Robot', 'Ruta Global', 'Ruta Rampas')

%% grafica exportada
set(1,'PaperSize' ,[50.4 45.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
nombre = 'Pose';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf','-bestfit')
