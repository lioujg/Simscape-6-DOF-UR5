clc
close all
addpath('../data');
mark = 5000;
switch_time = 5;

%% Load ICL data
ICL = load('estimate_plot.mat');
data = ICL.out.debug8.signals.values;
ICL_mass = data(:,1);
ICL_center_of_mass = data(:,2:4);
ICL_moment_of_inertia = data(:,5:10);
ICL_grasp_point_1 = data(:,11:13);
ICL_grasp_point_2 = data(:,14:16);
t = ICL.out.debug.time;

%% Load adaptive data
adaptive = load('adaptive.mat');
data = adaptive.out.debug8.signals.values;
adaptive_mass = data(:,1);
adaptive_center_of_mass = data(:,2:4);
adaptive_moment_of_inertia = data(:,5:10);
adaptive_grasp_point_1 = data(:,11:13);
adaptive_grasp_point_2 = data(:,14:16);

%% Ground truth set
if exist("rp","var") ~= 1
    rp = [-0.1 0 0.1];
end
ground_truth_m = 2;
ground_truth_COM = rp * ground_truth_m;
I = [0.0133333, 0, 0;
     0, 0.0483333, 0;
     0, 0, 0.0483333];
I_p = I + ground_truth_m * ((rp * rp.') * diag(ones(1,3)) - rp.' * rp);
ground_truth_I = [I_p(1) I_p(2) I_p(3) I_p(5) I_p(6) I_p(9)];
ground_truth_r1 = [-0.25 0 0] - rp;
ground_truth_r2 = [0.25 0 0] - rp;

%% Mass
figure(1)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, ICL_mass, 'Linewidth', 2);
hold on
plot(t, adaptive_mass, '-.', 'Linewidth', 2);
yline(ground_truth_m,'--', 'Linewidth', 2);
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$m$ (kg)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('mass with $ICL$', 'mass with $adaptive$', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
title('Mass', 'Fontsize', 11)

%% Center of Mass
figure(2)
set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
plot(t, ICL_center_of_mass(:,1), '-', 'Linewidth', 1);
hold on
plot(t, adaptive_center_of_mass(:,1), '-.', 'Linewidth', 1);
hold on
yline(ground_truth_COM(1),'--');
grid on
ylim([-0.25, 0.06])
xlim([0, t(end)])
y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
legend('CoM with $ICL$', 'CoM with $adaptive$', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
title('Center of Mass', 'Fontsize', 11)

set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
plot(t, ICL_center_of_mass(:,2), '-', 'Linewidth', 1);
hold on
plot(t, adaptive_center_of_mass(:,2), '-.', 'Linewidth', 1);
hold on
yline(ground_truth_COM(2),'--');
grid on
% ylim([-0.006, 0.02])
xlim([0, t(end)])
y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
legend('CoM with $ICL$', 'CoM with $adaptive$', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')

set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
plot(t, ICL_center_of_mass(:,3), '-', 'Linewidth', 1);
hold on
plot(t, adaptive_center_of_mass(:,3), '-.', 'Linewidth', 1);
hold on
yline(ground_truth_COM(3),'--');
grid on
ylim([-0.05, 0.25])
xlim([0, t(end)])
y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('CoM with $ICL$', 'CoM with $adaptive$', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')

%% Moment of Inertia
figure(3)
subplot(321)
plot(t, ICL_moment_of_inertia(:,1), '-', 'Linewidth', 1.5);
hold on
plot(t, adaptive_moment_of_inertia(:,1), '-.', 'Linewidth', 1.5);
hold on
yline(ground_truth_I(1),'--');
grid on
legend('$I_{xx}$ with ICL', '$I_{xx}$ with adaptive', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
xlim([0, t(end)])
y_label = ylabel('$I_{xx}$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.16, 0.41]);

subplot(323)
plot(t, ICL_moment_of_inertia(:,4), '-', 'Linewidth', 1.5);
hold on
plot(t, adaptive_moment_of_inertia(:,4), '-.', 'Linewidth', 1.5);
hold on
yline(ground_truth_I(4),'--');
grid on
legend('$I_{yy}$ with ICL', '$I_{yy}$ with adaptive', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
xlim([0, t(end)])
y_label = ylabel('$I_{yy}$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.16, 0.41]);

subplot(325)
plot(t, ICL_moment_of_inertia(:,6), '-', 'Linewidth', 1.5);
hold on
plot(t, adaptive_moment_of_inertia(:,6), '-.', 'Linewidth', 1.5);
hold on
yline(ground_truth_I(6),'--');
grid on
legend('$I_{zz}$ with ICL', '$I_{zz}$ with adaptive', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
xlim([0, t(end)])
y_label = ylabel('$I_{zz}$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.16, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)

subplot(322)
plot(t, ICL_moment_of_inertia(:,2), '-', 'Linewidth', 1.5);
hold on
plot(t, adaptive_moment_of_inertia(:,2), '-.', 'Linewidth', 1.5);
hold on
yline(ground_truth_I(2),'--');
grid on
legend('$I_{xy}$ with ICL', '$I_{xy}$ with adaptive', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
xlim([0, t(end)])
y_label = ylabel('$I_{xy}$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.16, 0.41]);

subplot(324)
plot(t, ICL_moment_of_inertia(:,3), '-', 'Linewidth', 1.5);
hold on
plot(t, adaptive_moment_of_inertia(:,3), '-.', 'Linewidth', 1.5);
hold on
yline(ground_truth_I(3),'--');
grid on
legend('$I_{xz}$ with ICL', '$I_{xz}$ with adaptive', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
xlim([0, t(end)])
y_label = ylabel('$I_{xz}$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.16, 0.41]);

subplot(326)
plot(t, ICL_moment_of_inertia(:,5), '-', 'Linewidth', 1.5);
hold on
plot(t, adaptive_moment_of_inertia(:,5), '-.', 'Linewidth', 1.5);
hold on
yline(ground_truth_I(5),'--');
grid on
legend('$I_{yz}$ with ICL', '$I_{yz}$ with adaptive', 'ground truth', 'Interpreter', 'latex', 'Location','southeast')
xlim([0, t(end)])
y_label = ylabel('$I_{yz}$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.16, 0.41]);
grid on
xlim([0, t(end)])
xlabel('Time (sec)', 'Fontsize', 11)
sgtitle('Moment of Inertia', 'Fontsize', 15)

%% Grasp points Normalize
figure(4)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, abs(vecnorm((ICL_grasp_point_1 - ground_truth_r1), 2, 2)), 'r-', 'Linewidth', 2);
hold on
plot(t, abs(vecnorm((ICL_grasp_point_2 - ground_truth_r2), 2, 2)), 'g--', 'Linewidth', 2);
hold on
plot(t, abs(vecnorm((adaptive_grasp_point_1 - ground_truth_r1), 2, 2)), 'b-o', 'Linewidth', 2, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, abs(vecnorm((adaptive_grasp_point_2 - ground_truth_r2), 2, 2)), 'c--+', 'Linewidth', 2, 'MarkerIndices',1:mark:length(t));
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('Distance (m)', 'Interpreter', 'latex', 'rotation', 90);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$e_{r1}$ with ICL', '$e_{r2}$ with ICL', '$e_{r1}$ with adaptive', '$e_{r2}$ with adaptive', 'Interpreter', 'latex', 'Location','northeast')
title('Grasping points Errors', 'Fontsize', 11)

%% Grasp points
% figure(4)
% set(subplot(211), 'Position', [0.17, 0.55, 0.76, 0.35])
% plot(t, grasp_point_1(:,1), 'b-*', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
% hold on
% plot(t, grasp_point_1(:,2), 'r-s', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
% hold on
% plot(t, grasp_point_1(:,3), 'g->', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
% hold on
% for switch_star = switch_time:switch_time:t(end)
%     scatter(switch_star,grasp_point_1(find(t==switch_star),:),80,'filled','p','k');
% end
% 
% hold on
% yline(ground_truth_r1,'--','ground truth');
% grid on
% ylim([-0.4 0.06])
% xlim([0, t(end)])
% y_label = ylabel('$r_1$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.44]);
% legend('$r_{1x}$', '$r_{1y}$', '$r_{1z}$', 'leader switch', 'Interpreter', 'latex')
% title('Grasp points', 'Fontsize', 11)
% 
% set(subplot(212), 'Position', [0.17, 0.1, 0.76, 0.35])
% plot(t, grasp_point_2(:,1), 'b-*', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
% hold on
% plot(t, grasp_point_2(:,2), 'r-s', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
% hold on
% plot(t, grasp_point_2(:,3), 'g->', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
% hold on
% for switch_star = switch_time:switch_time:t(end)
%     scatter(switch_star,grasp_point_2(find(t==switch_star),:),80,'filled','p','k');
% end
% hold on
% yline(ground_truth_r2,'--','ground truth');
% grid on
% ylim([-0.15 0.45])
% xlim([0, t(end)])
% y_label = ylabel('$r_2$', 'Interpreter', 'latex', 'rotation', 0);
% set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.44]);
% xlabel('Time (sec)', 'Fontsize', 11)
% legend('$r_{2x}$', '$r_{2y}$','$r_{2z}$', 'leader switch', 'Interpreter', 'latex', 'Location','southeast')

%% Normalized estimate errors
% calculate
adaptive_mass_err_nor = abs((adaptive_mass - ground_truth_m) / ground_truth_m);
adaptive_COM_err_nor = abs(vecnorm((adaptive_center_of_mass - ground_truth_COM), 2, 2) / norm(ground_truth_COM));
adaptive_I_err_nor = abs(vecnorm((adaptive_moment_of_inertia - ground_truth_I), 2, 2) / norm(ground_truth_I));
adaptive_r1_err_nor = abs(vecnorm((adaptive_grasp_point_1 - ground_truth_r1), 2, 2) / norm(ground_truth_r1));
adaptive_r2_err_nor = abs(vecnorm((adaptive_grasp_point_2 - ground_truth_r2), 2, 2) / norm(ground_truth_r2));

est_err_nor = ["mass", "center of mass", "moment of inertia", "r1", "r2";
               adaptive_mass_err_nor(end), adaptive_COM_err_nor(end), adaptive_I_err_nor(end), adaptive_r1_err_nor(end), adaptive_r2_err_nor(end)];

% plot
figure(5)
semilogy(t, adaptive_mass_err_nor, 'Linewidth', 2)
hold on
semilogy(t, adaptive_COM_err_nor, 'Linewidth', 2)
hold on
semilogy(t, adaptive_I_err_nor, 'Linewidth', 2)
hold on
semilogy(t, adaptive_r1_err_nor, 'Linewidth', 2)
hold on
semilogy(t, adaptive_r2_err_nor, 'Linewidth', 2)
grid on
ylim([1e-8, 10])
xlim([0, t(end)])
y_label = ylabel('$\frac{\left\Vert{\widetilde \theta}_o\right\Vert}{\left\Vert \theta_o\right\Vert}$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41], 'FontSize',14);
xlabel('Time (sec)', 'Fontsize', 11)
m_lab = '$\frac{\left\Vert\widetilde m\right\Vert}{\left\Vert m\right\Vert}$';
COM_lab = '$\frac{\left\Vert{\widetilde r}_p\right\Vert}{\left\Vert r_p\right\Vert}$';
I_lab = '$\frac{\left\Vert\widetilde I\right\Vert}{\left\Vert I\right\Vert}$';
r1_lab = '$\frac{\left\Vert{\widetilde r}_1\right\Vert}{\left\Vert r_1\right\Vert}$';
r2_lab = '$\frac{\left\Vert{\widetilde r}_2\right\Vert}{\left\Vert r_2\right\Vert}$';
legend(m_lab, COM_lab, I_lab, r1_lab, r2_lab, 'Interpreter', 'latex', 'FontSize',14)
