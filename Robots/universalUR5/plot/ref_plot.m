clc
close all

t = 0:0.1:duration;
%% Linear Velocity
figure(1)
set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
plot(t, vx_amp*sin(vx_f*2*pi*t), 'k', 'Linewidth', 1);
grid on
xlim([0, t(end)])
y_label = ylabel('$v_x$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label,'FontSize',14, 'Units', 'Normalized', 'Position', [-0.08, 0.41]);
title('Reference Velocity', 'Fontsize', 11)

set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
plot(t, vy_amp*sin(vy_f*2*pi*t), 'k', 'Linewidth', 1);
grid on
xlim([0, t(end)])
y_label = ylabel('$v_y$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label,'FontSize',14, 'Units', 'Normalized', 'Position', [-0.08, 0.41]);

set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
plot(t, vz_amp*sin(vz_f*2*pi*t), 'k', 'Linewidth', 1);
grid on
xlim([0, t(end)])
y_label = ylabel('$v_z$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label,'FontSize',14, 'Units', 'Normalized', 'Position', [-0.08, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)

%% Angular Velocity
figure(2)
set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
plot(t, wx_amp*sin(wx_f*2*pi*t), 'k', 'Linewidth', 1);
grid on
xlim([0, t(end)])
y_label = ylabel('$w_x$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label,'FontSize',14, 'Units', 'Normalized', 'Position', [-0.08, 0.41]);
title('Reference Angular Velocity', 'Fontsize', 11)

set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
plot(t, wy_amp*sin(wy_f*2*pi*t), 'k', 'Linewidth', 1);
grid on
xlim([0, t(end)])
y_label = ylabel('$w_y$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label,'FontSize',14, 'Units', 'Normalized', 'Position', [-0.08, 0.41]);

set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
plot(t, wz_amp*sin(wz_f*2*pi*t), 'k', 'Linewidth', 1);
grid on
xlim([0, t(end)])
y_label = ylabel('$w_z$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label,'FontSize',14, 'Units', 'Normalized', 'Position', [-0.08, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)