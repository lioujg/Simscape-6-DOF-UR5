clc
close all
ICL_update = "online";
% ICL_update = "offline";
if ICL_update == "online"
    data = out.debug8.signals.values;
    t = out.debug.time;
    mark = 4000;
    switch_time = 5;
elseif ICL_update == "offline"
    data = estimate.';
    t = t_;
    mark = 2000;
end

mass = data(:,1);
center_of_mass = data(:,2:4);
moment_of_inertia = data(:,5:10);
grasp_point_1 = data(:,11:13);
grasp_point_2 = data(:,14:16);

ground_truth_m = 2;
% ground_truth_COM = [-0.1, 0, 0.1];
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
plot(t, mass, 'Linewidth', 2);
yline(ground_truth_m,'--','ground truth');
grid on
% ylim([-0.5 9])
xlim([0, t(end)])
y_label = ylabel('$m$ (kg)', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
% legend('$m$', 'Interpreter', 'latex', 'Location','southeast')
title('Mass', 'Fontsize', 11)

%% Center of Mass
figure(2)
set(subplot(311), 'Position', [0.17, 0.7, 0.76, 0.2])
plot(t, center_of_mass(:,1), 'k', 'Linewidth', 1);
hold on
yline(ground_truth_COM(1),'--','ground truth');
grid on
% ylim([-0.003, 0.003])
xlim([0, t(end)])
y_label = ylabel('$X$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
title('Center of Mass', 'Fontsize', 11)

set(subplot(312), 'Position', [0.17, 0.4, 0.76, 0.2])
plot(t, center_of_mass(:,2), 'k', 'Linewidth', 1);
hold on
yline(ground_truth_COM(2),'--','ground truth');
grid on
% ylim([-0.006, 0.02])
xlim([0, t(end)])
y_label = ylabel('$Y$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);

set(subplot(313), 'Position', [0.17, 0.1, 0.76, 0.2])
plot(t, center_of_mass(:,3), 'k', 'Linewidth', 1);
hold on
yline(ground_truth_COM(3),'--','ground truth');
grid on
% ylim([-0.003, 0.003])
xlim([0, t(end)])
y_label = ylabel('$Z$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.41]);
xlabel('Time (sec)', 'Fontsize', 11)

%% Moment of Inertia
figure(3)
subplot('Position', [0.17, 0.1, 0.76, 0.8]);
plot(t, moment_of_inertia(:,1), 'b-*', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, moment_of_inertia(:,2), 'r-s', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, moment_of_inertia(:,3), 'g->', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, moment_of_inertia(:,4), 'm--+', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, moment_of_inertia(:,5), 'y-h', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, moment_of_inertia(:,6), 'k:o', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
yline(ground_truth_I,'--','ground truth');
grid on
% ylim([-0.002 0.017])
xlim([0, t(end)])
y_label = ylabel('$I$ $(kg\cdot m^2)$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.47]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$I_{xx}$', '$I_{xy}$', '$I_{xz}$', '$I_{yy}$', '$I_{yz}$','$I_{zz}$', 'Interpreter', 'latex', 'Location','southeast')
title('Moment of Inertia', 'Fontsize', 11)

%% Grasp points
figure(4)
set(subplot(211), 'Position', [0.17, 0.55, 0.76, 0.35])
plot(t, grasp_point_1(:,1), 'b-*', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, grasp_point_1(:,2), 'r-s', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, grasp_point_1(:,3), 'g->', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
for switch_star = switch_time:switch_time:t(end)
    scatter(switch_star,grasp_point_1(find(t==switch_star),:),200,'filled','p','k');
end

hold on
yline(ground_truth_r1,'--','ground truth');
grid on
ylim([-0.4 0.06])
xlim([0, t(end)])
y_label = ylabel('$r_1$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.44]);
legend('$r_{1x}$', '$r_{1y}$', '$r_{1z}$', 'leader switch', 'Interpreter', 'latex')
title('Grasp points', 'Fontsize', 11)

set(subplot(212), 'Position', [0.17, 0.1, 0.76, 0.35])
plot(t, grasp_point_2(:,1), 'b-*', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, grasp_point_2(:,2), 'r-s', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
plot(t, grasp_point_2(:,3), 'g->', 'Linewidth', 1.5, 'MarkerIndices',1:mark:length(t));
hold on
for switch_star = switch_time:switch_time:t(end)
    scatter(switch_star,grasp_point_2(find(t==switch_star),:),200,'filled','p','k');
end
hold on
yline(ground_truth_r2,'--','ground truth');
grid on
ylim([-0.15 0.45])
xlim([0, t(end)])
y_label = ylabel('$r_2$', 'Interpreter', 'latex', 'rotation', 0);
set(y_label, 'Units', 'Normalized', 'Position', [-0.13, 0.44]);
xlabel('Time (sec)', 'Fontsize', 11)
legend('$r_{2x}$', '$r_{2y}$','$r_{2z}$', 'leader switch', 'Interpreter', 'latex', 'Location','southeast')

%% Normalized estimate errors
% calculate
mass_err_nor = abs((mass - ground_truth_m) / ground_truth_m);
COM_err_nor = abs(vecnorm((center_of_mass - ground_truth_COM), 2, 2) / norm(ground_truth_COM));
I_err_nor = abs(vecnorm((moment_of_inertia - ground_truth_I), 2, 2) / norm(ground_truth_I));
r1_err_nor = abs(vecnorm((grasp_point_1 - ground_truth_r1), 2, 2) / norm(ground_truth_r1));
r2_err_nor = abs(vecnorm((grasp_point_2 - ground_truth_r2), 2, 2) / norm(ground_truth_r2));

est_err_nor = ["mass", "center of mass", "moment of inertia", "r1", "r2";
               mass_err_nor(end), COM_err_nor(end), min(I_err_nor), r1_err_nor(end), r2_err_nor(end)];

% plot
figure(5)
semilogy(t, mass_err_nor, 'Linewidth', 2)
hold on
semilogy(t, COM_err_nor, 'Linewidth', 2)
hold on
semilogy(t, I_err_nor, 'Linewidth', 2)
hold on
semilogy(t, r1_err_nor, 'Linewidth', 2)
hold on
semilogy(t, r2_err_nor, 'Linewidth', 2)
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
