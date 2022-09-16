clc
close all

t = out.debug.time;

data = out.debug4.signals.values;
wrench_command = data(:,1:6);

data = out.debug2.signals.values;
wrench_sensor = data(:,1:6);


%% Wrench Sensor
figure(1)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, wrench_sensor, 'Linewidth', 2);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$force$ (N)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
% legend('$m$', 'Interpreter', 'latex', 'Location','southeast')
title('Wrench Sensor', 'Fontsize', 11)

%% Wrench Command
figure(2)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, wrench_command, 'Linewidth', 2);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$force$ (N)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
% legend('$m$', 'Interpreter', 'latex', 'Location','southeast')
title('Wrench Comman', 'Fontsize', 11)

%% Wrench Errors
figure(3)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, wrench_sensor - wrench_command, 'Linewidth', 2);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$force$ (N)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
% legend('$m$', 'Interpreter', 'latex', 'Location','southeast')
title('Wrench Error', 'Fontsize', 11)

force_error_norm = vecnorm((wrench_sensor(:,1:3) - wrench_command(:,1:3)),2,2);
torque_error_norm = vecnorm((wrench_sensor(:,4:6) - wrench_command(:,4:6)),2,2);
force_error_mean = mean(force_error_norm);
torque_error_mean = mean(torque_error_norm);


%% Wrench Compare
figure(4)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t(1:8000), wrench_sensor(1:8000,1), 'Linewidth', 1);
hold on
plot(t(1:8000), wrench_command(1:8000,1), 'r--', 'Linewidth', 2);
grid on
% ylim([-0.5 9])
% xlim([0, t(end)])
xlim([0, t(8000)])
y_label = ylabel('$force$ (N)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$sensor$', '$command$', 'Interpreter', 'latex')
title('Wrench Compare', 'Fontsize', 11)
