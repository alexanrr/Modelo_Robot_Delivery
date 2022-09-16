%% Gráficas de Torque

%% PID W_RIGHT
% figure(1)
% wr_med= out.w_med(:,1);
% wl_med = out.w_med(:,2);
% 
% wr_ref= out.w_ref(:,1);
% wl_ref= out.w_ref(:,2);
% t= out.tout;
% plot(t, wr_ref,'r')
% hold on;
% grid on;
% plot(t,wr_med, 'b')
% xlabel('Tiempo (s)')
% ylabel('Wr (rad/s)');
% title('Respuesta en la rueda derecha')
% legend('Setpoint','Wr')
% set(gca,'Fontname','Arial','Fontsmoothing','on','fontsize',9.5);
% set(1,'PaperSize' ,[14.4 11.4],'PaperPositionMode','auto')
% %cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
% filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
% nombre = 'PID_wr';  %cambiar nombre para nueva imagen 
% %descomentar para guardar imagen en pdf
% print('-f1','-painters', [filepath, nombre], '-dpdf','-bestfit')

%% PID W_LEFT
figure(1)
plot(t, wl_ref,'r')
hold on;
grid on;
plot(t,wl_med, 'b')
xlabel('Tiempo (s)')
ylabel('Wl (rad/s)');
title('Respuesta en la rueda izquierda')
legend('Setpoint','Wl')

set(gca,'Fontname','Arial','Fontsmoothing','on','fontsize',9.5);
set(1,'PaperSize' ,[14.4 11.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
nombre = 'PIDIzquierda';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf','-bestfit')
%% COMPUTO
N=4365
vel_linear=zeros(N,1);
wz= zeros(N,1);
torque_iz= zeros(N,1);
for i= 1: N
    v_i= out.v_lineal(:,:,i);
    vel_linear(i)= v_i;
    w_i= out.wz(:,:,i);
    wz(i)= w_i;
    t_i= out.torqueIzquierda(:,:,i);
    torque_iz(i) = t_i;

end

%% V_LINEAL
figure(1)
plot(t, vel_linear,'b')
grid on;
xlabel('Tiempo (s)')
ylabel('Vlineal (m/s)')
title('Velocidad lineal del robot')
axis([0.2  45  0  1.4])

set(gca,'Fontname','Arial','Fontsmoothing','on','fontsize',9.5);
set(1,'PaperSize' ,[14.4 11.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
nombre = 'Vlineal';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf','-bestfit')


%% W_z
figure(1)
plot(t, wz,'b')
grid on;
xlabel('Tiempo (s)')
ylabel('W_z (rad/s)')
title('Velocidad angular del robot')
axis([0.2  45  -1.7  1.7])

set(gca,'Fontname','Arial','Fontsmoothing','on','fontsize',9.5);
set(1,'PaperSize' ,[14.4 11.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
nombre = 'Wz';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf','-bestfit')


%% Wr y Wl
figure(1)
plot(t,wr_med, 'b');
grid on;
hold on;
plot(t,wl_med, 'm');
xlabel('Tiempo (s)')
ylabel('W (rad/s)');
title('Velocidades angulares de las ruedas')
legend('W_r','W_l')
axis([0.2 50 -15 20])

set(gca,'Fontname','Arial','Fontsmoothing','on','fontsize',9.5);
set(1,'PaperSize' ,[14.4 11.4],'PaperPositionMode','auto')
%cambiar direccion cuando se quiera guardar una nueva grafica en otra pc
filepath = 'C:\Users\User\OneDrive\Documentos\MATLAB\Modelo Robot Final\Modelo_Robot_Delivery\modeloManual\Plots';
nombre = 'comparativa';  %cambiar nombre para nueva imagen 
%descomentar para guardar imagen en pdf
print('-f1','-painters', [filepath, nombre], '-dpdf','-bestfit')

