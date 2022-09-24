clc
close all
addpath('../data');
mark = 5000;
switch_time = 5;

%% Load ICL data
ICL = load('estimate_plot.mat');
t = ICL.out.debug.time;
ICL_x = ICL.out.debug.signals.values;
ICL_v = ICL.out.debug2.signals.values;
ICL_w = ICL.out.debug4.signals.values;
ICL_s_norm = ICL.out.debug6.signals.values;
ICL_Re = ICL.out.debug7.signals.values;

%% Load adaptive data
adaptive = load('adaptive.mat');
adaptive_x = adaptive.out.debug.signals.values;
adaptive_v = adaptive.out.debug2.signals.values;
adaptive_w = adaptive.out.debug4.signals.values;
adaptive_s_norm = adaptive.out.debug6.signals.values;
adaptive_Re = adaptive.out.debug7.signals.values;

%% Load PD data
PD = load('PD.mat');
PD_x = PD.out.debug.signals.values;
PD_v = PD.out.debug2.signals.values;
PD_w = PD.out.debug4.signals.values;
PD_s_norm = PD.out.debug6.signals.values;
PD_Re = PD.out.debug7.signals.values;

%% Load desired data
xd = ICL.out.debug1.signals.values;
vd = ICL.out.debug3.signals.values;
wd = ICL.out.debug5.signals.values;

%% Position
% figure(1)
% set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
% plot(t, ICL_x(:,1), 'r', 'Linewidth', 1);
% hold on
% % plot(t, adaptive_x(:,1), 'r', 'Linewidth', 1);
% % hold on
% plot(t, PD_x(:,1), 'r', 'Linewidth', 1);
% hold on
% plot(t, xd(:,1), 'b--', 'Linewidth', 1);
% grid on
% ylim([0.6, 0.9])
% xlim([0, t(end)])
% y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% legend('$x$', '$x_d$', 'Interpreter', 'latex')
% title('Position', 'Fontsize', 11)
% 
% set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
% plot(t, x(:,2), 'r', 'Linewidth', 1);
% hold on
% plot(t, xd(:,2), 'b--', 'Linewidth', 1);
% grid on
% ylim([-0.25, 0.25])
% xlim([0, t(end)])
% y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% legend('$x$', '$x_d$', 'Interpreter', 'latex')
% 
% set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
% plot(t, x(:,3), 'r', 'Linewidth', 1);
% hold on
% plot(t, xd(:,3), 'b--', 'Linewidth', 1);
% grid on
% ylim([-0.2, 0.7])
% xlim([0, t(end)])
% y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% xlabel('Time (sec)', 'Fontsize', 11)
% legend('$x$', '$x_d$', 'Interpreter', 'latex')
% 
% %% Velocity
% figure(2)
% set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
% plot(t, v(:,1), 'r', 'Linewidth', 1);
% hold on
% plot(t, vd(:,1), 'b--', 'Linewidth', 1);
% grid on
% ylim([-0.5, 0.7])
% xlim([0, t(end)])
% y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% legend('$v$', '$v_d$', 'Interpreter', 'latex')
% title('Velocity', 'Fontsize', 11)
% 
% set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
% plot(t, v(:,2), 'r', 'Linewidth', 1);
% hold on
% plot(t, vd(:,2), 'b--', 'Linewidth', 1);
% grid on
% ylim([-1, 1.3])
% xlim([0, t(end)])
% y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% legend('$v$', '$v_d$', 'Interpreter', 'latex')
% 
% set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
% plot(t, v(:,3), 'r', 'Linewidth', 1);
% hold on
% plot(t, vd(:,3), 'b--', 'Linewidth', 1);
% grid on
% ylim([-1.3, 1.3])
% xlim([0, t(end)])
% y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% xlabel('Time (sec)', 'Fontsize', 11)
% legend('$v$', '$v_d$', 'Interpreter', 'latex')
% 
% %% Angular Velocity
% figure(3)
% set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
% plot(t, w(:,1), 'r', 'Linewidth', 1);
% hold on
% plot(t, wd(:,1), 'b--', 'Linewidth', 1);
% grid on
% ylim([-1.5, 2])
% xlim([0, t(end)])
% y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% legend('$\omega$', '$\omega_d$', 'Interpreter', 'latex')
% title('Angular Velocity', 'Fontsize', 11)
% 
% set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
% plot(t, w(:,2), 'r', 'Linewidth', 1);
% hold on
% plot(t, wd(:,2), 'b--', 'Linewidth', 1);
% grid on
% ylim([-3, 3])
% xlim([0, t(end)])
% y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% legend('$\omega$', '$\omega_d$', 'Interpreter', 'latex')
% 
% set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
% plot(t, w(:,3), 'r', 'Linewidth', 1);
% hold on
% plot(t, wd(:,3), 'b--', 'Linewidth', 1);
% grid on
% ylim([-1.5, 1.5])
% xlim([0, t(end)])
% y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
% xlabel('Time (sec)', 'Fontsize', 11)
% legend('$\omega$', '$\omega_d$', 'Interpreter', 'latex')

%% Composite Error
figure(4)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, ICL_s_norm, 'Linewidth', 1);
hold on
plot(t, PD_s_norm, 'Linewidth', 1);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$\left\Vert s\right\Vert$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$\left\Vert s\right\Vert$ with ICL', '$\left\Vert s\right\Vert$ with PD', 'Interpreter', 'latex', 'Location','southeast')
title('Composite Error', 'Fontsize', 11)

% %% Rotation Error
% figure(5)
% subplot('Position', [0.17, 0.1, 0.76, 0.8]);
% plot(t, Re, 'Linewidth', 1);
% grid on
% ylim([-0.02 0.45])
% xlim([0, t(end)])
% y_label = ylabel('$tr(I-R_e)$', 'Interpreter', 'latex', 'rotation', 90);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
% xlabel('Time (sec)', 'Fontsize', 11)
% title('Rotation Error', 'Fontsize', 11)