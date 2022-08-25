%% Graficas Planificador de Trayectorias
figure(1)
Pose= out.RobotPose
PX= Pose(:,1)
PY= Pose(:, 2)
QZ= Pose(:,3)
plot(PX,PY,'b')
hold on;
grid on;
plot(M(:,1), M(:,2), 'md')
xlabel('eje X')
ylabel('eje y')
title('Trayectoria del robot')
legend('Trayectoria', 'Waypoints')

