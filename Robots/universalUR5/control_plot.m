clc
close all

t = out.debug.time;

data = out.debug.signals.values;
x = data;

data = out.debug1.signals.values;
xd = data;

data = out.debug2.signals.values;
v = data;

data = out.debug3.signals.values;
vd = data;

data = out.debug4.signals.values;
s_norm = data;

data = out.debug5.signals.values;
Re = data;

%% Position
figure(1)
set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
plot(t, x(:,1), 'r', 'Linewidth', 1);
hold on
plot(t, xd(:,1), 'b--', 'Linewidth', 1);
grid on
% ylim([-0.003, 0.003])
xlim([0, t(end)])
y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
legend('$x$', '$x_d$', 'Interpreter', 'latex')
title('Position', 'Fontsize', 11)

set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
plot(t, x(:,2), 'r', 'Linewidth', 1);
hold on
plot(t, xd(:,2), 'b--', 'Linewidth', 1);
grid on
% ylim([-0.006, 0.02])
xlim([0, t(end)])
y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
legend('$x$', '$x_d$', 'Interpreter', 'latex')

set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
plot(t, x(:,3), 'r', 'Linewidth', 1);
hold on
plot(t, xd(:,3), 'b--', 'Linewidth', 1);
grid on
% ylim([-0.003, 0.003])
xlim([0, t(end)])
y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$x$', '$x_d$', 'Interpreter', 'latex')

%% Velocity
figure(2)
set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
plot(t, v(:,1), 'r', 'Linewidth', 1);
hold on
plot(t, vd(:,1), 'b--', 'Linewidth', 1);
grid on
% ylim([-0.003, 0.003])
xlim([0, t(end)])
y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
legend('$v$', '$v_d$', 'Interpreter', 'latex')
title('Velocity', 'Fontsize', 11)

set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
plot(t, v(:,2), 'r', 'Linewidth', 1);
hold on
plot(t, vd(:,2), 'b--', 'Linewidth', 1);
grid on
% ylim([-0.006, 0.02])
xlim([0, t(end)])
y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
legend('$v$', '$v_d$', 'Interpreter', 'latex')

set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
plot(t, v(:,3), 'r', 'Linewidth', 1);
hold on
plot(t, vd(:,3), 'b--', 'Linewidth', 1);
grid on
% ylim([-0.003, 0.003])
xlim([0, t(end)])
y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$v$', '$v_d$', 'Interpreter', 'latex')

%% Composite Error
figure(3)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, s_norm, 'Linewidth', 1);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$||s||$ (N)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
% legend('$m$', 'Interpreter', 'latex', 'Location','southeast')
title('Composite Error', 'Fontsize', 11)

%% Rotation Error
figure(4)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, Re, 'Linewidth', 1);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$R_e$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
title('Rotation Error', 'Fontsize', 11)
