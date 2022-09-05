clc
close all
%% robot number
N = 2;

%% state collect
t_ = out.debug.time;
state = out.debug1.signals.values;
R_ = [state(:,1) state(:,2) state(:,3) state(:,4) state(:,5) state(:,6) state(:,7) state(:,8) state(:,9)].';
w_ = [state(:,10) state(:,11) state(:,12)].';
x_ = [state(:,13) state(:,14) state(:,15)].';
v_ = [state(:,16) state(:,17) state(:,18)].';
a_ = [state(:,19) state(:,20) state(:,21)].';
wrench = out.debug2.signals.values;
wrench1_b_ = [wrench(:,1) wrench(:,2) wrench(:,3) wrench(:,4) wrench(:,5) wrench(:,6)].';
if N == 2
    wrench2_b_ = [wrench(:,7) wrench(:,8) wrench(:,9) wrench(:,10) wrench(:,11) wrench(:,12)].';
end

%% smooth data
window = 100;
R_ = smoothdata(R_,2,'gaussian',window);
w_ = smoothdata(w_,2,'gaussian',window);
x_ = smoothdata(x_,2,'gaussian',window);
v_ = smoothdata(v_,2,'gaussian',window);
a_ = smoothdata(a_,2,'gaussian',window);
wrench1_b_ = smoothdata(wrench1_b_,2,'gaussian',window);
if N == 2
    wrench2_b_ = smoothdata(wrench2_b_,2,'gaussian',window);
end

% figure(1)
% plot(t_,a_(1,:),'-o',t_,a_sm(1,:),'-x');
% legend('Original Data','Smoothed Data')

%% gains
% ICL gain
N_o = 150;
eason_integral = 3;%5;
ICL_switcher = true;
k_cl_m = 9;
k_cl_rp = 6;%18000
k_cl_I = 15;
k_cl_Ixx = 5; %10
k_cl_Iyy = 12;
k_cl_Izz = 14;
k_cl_ri_1 = 10;
k_cl_ri_2 = 10;
if N == 1
    k_cl = [k_cl_m k_cl_rp*ones(1,3) k_cl_Ixx k_cl_I k_cl_I k_cl_Iyy k_cl_I k_cl_Izz k_cl_ri_1*ones(1,3)];
else
    k_cl = [k_cl_m k_cl_rp*ones(1,3) k_cl_Ixx k_cl_I k_cl_I k_cl_Iyy k_cl_I k_cl_Izz k_cl_ri_1*ones(1,3) k_cl_ri_2*ones(1,3)];
end
k_cl_gain = diag(k_cl);

%% initialize
% ground truth
mass = 2;
center_of_mass = rp;
I = [0.0133333, 0, 0;
      0, 0.0483333, 0;
      0, 0, 0.0483333];
I_p = I + mass * ((rp * rp.') * diag(ones(1,3)) - rp.' * rp);
inertia_matrix = [I_p(1) I_p(2) I_p(3) I_p(5) I_p(6) I_p(9)];

r1 = [-0.25 0 0] - rp;
r2 = [0.25 0 0] - rp;
r = [r1, r2];
if N == 1
    theta_o = [mass mass*center_of_mass inertia_matrix r1].';
else
    theta_o = [mass mass*center_of_mass inertia_matrix r].';
end

% initial guess
theta_o_hat = zeros(10 + 3 * N, 1);
theta_o_hat = theta_o;
% mass
theta_o_hat(1) = 0;
% COG
theta_o_hat(2) = 0;
theta_o_hat(3) = 0;
theta_o_hat(4) = 0;
% Inertia
theta_o_hat(5) = 0.0;
theta_o_hat(6) = 0.0;
theta_o_hat(7) = 0.0;
theta_o_hat(8) = 0.0;
theta_o_hat(9) = 0.0;
theta_o_hat(10) = 0.0;
% 1st grasp point
theta_o_hat(11) = 0;
theta_o_hat(12) = 0;
theta_o_hat(13) = 0;
% 2nd grasp point
if N == 2
    theta_o_hat(14) = 0;
    theta_o_hat(15) = 0;
    theta_o_hat(16) = 0;
end
        
% without ICL first time
ICL_update = false;

Rd = [1  0  0;
      0  1  0;
      0  0  1];

xd = [0.7250; 0.1092; 0.42] + rp.';
index = 1;
v_last = zeros(3, 1);
w_last = zeros(3, eason_integral);
mat_matrix = zeros(size(theta_o_hat, 1), N_o);
t_last = 0;
eason_ptr = 1;
condition = 1;

mat_sum = zeros(size(theta_o_hat, 1), 1);
debug_msg = zeros(6, 1);
G = [0; 0; -9.80665];

estimate = zeros(10 + 3 * N, t_(end));
estimate(:,1) = theta_o_hat;

%% start offline estimate
for i = 2:1:size(t_,1)
    %% unpack state
    t = t_(i);
    dt = t_(i) - t_(i-1);
    % quat = [state(1) state(2) state(3) state(4)];
    R = [R_(1,i), R_(4,i), R_(7,i);
         R_(2,i), R_(5,i), R_(8,i);
         R_(3,i), R_(6,i), R_(9,i)];
    w = [w_(1,i); w_(2,i); w_(3,i)];
    x = [x_(1,i); x_(2,i); x_(3,i)];
    v = [v_(1,i); v_(2,i); v_(3,i)];
    a = [a_(1,i); a_(2,i); a_(3,i)];

    %% Wrench frame convert
    wrench_rotation = [         R, zeros(3,3);
                       zeros(3,3),          R];
    wrench1_b = [wrench1_b_(1,i); wrench1_b_(2,i); wrench1_b_(3,i); wrench1_b_(4,i); wrench1_b_(5,i); wrench1_b_(6,i)];
    wrench_1 = wrench_rotation * wrench1_b;
    force_1 = [wrench_1(1); wrench_1(2); wrench_1(3)];
    if N == 2
        wrench2_b = [wrench2_b_(1,i); wrench2_b_(2,i); wrench2_b_(3,i); wrench2_b_(4,i); wrench2_b_(5,i); wrench2_b_(6,i)];
        wrench_2 = wrench_rotation * wrench2_b;
        force_2 = [wrench_2(1); wrench_2(2); wrench_2(3)];
    end

    %% ICL
    y_l = [(a - G) * eason_integral * dt, -skew(w - w_last(:,eason_ptr)) * R - (skew(w) * skew(w) * R) * eason_integral * dt, zeros(3,6 + 3 * N)];
    if N == 1
        y_r = [zeros(3,1), skew(a - G) * R * eason_integral * dt, R * L(R.' * (w - w_last(:,eason_ptr))) + (skew(w) * R * L(R.' * w)) * eason_integral * dt, skew(force_1) * R * eason_integral * dt];
    else
        y_r = [zeros(3,1), skew(a - G) * R * eason_integral * dt, R * L(R.' * (w - w_last(:,eason_ptr))) + (skew(w) * R * L(R.' * w)) * eason_integral * dt, skew(force_1) * R * eason_integral * dt, skew(force_2) * R * eason_integral * dt];
    end

    y_o_cl_integral = [y_l;
                       y_r];

    if index > N_o
        index = 1;
    end

    if N == 1
        true_tau_integral = wrench_1 * eason_integral * dt;
    else
        true_tau_integral = (wrench_1 + wrench_2) * eason_integral * dt;
    end

    y_o_cl_integral_a_hat = y_o_cl_integral * theta_o_hat;
    mat_now = y_o_cl_integral.' * (y_o_cl_integral_a_hat - true_tau_integral);

    debug_msg = y_o_cl_integral * theta_o - true_tau_integral;


    mat_matrix(:, index) = mat_now;

    mat_sum = sum(mat_matrix, 2);

    index = index + 1;

    v_last = v;
    w_last(:,eason_ptr) = w;
    if eason_ptr >= eason_integral
        eason_ptr = 1;
    else
        eason_ptr = eason_ptr + 1;
    end

    theta_o_hat_dot = -k_cl_gain * mat_sum;

    %% update law
    theta_o_hat = theta_o_hat + theta_o_hat_dot * dt;
    estimate(:,i) = theta_o_hat;
    % theta_o_hat(5:10) = max(theta_o_hat(5:10), 0);
end
est_err = estimate - theta_o;
figure(2)
plot(t_(1:end), est_err);
legend('mass','COM x','COM y','COM z','Ixx','Ixy','Ixz','Iyy','Iyz','Izz','r1x','r1y','r1z','r2x','r2y','r2z');
figure(3)
plot(t_(1:end), est_err(1,:));
figure(4)
plot(t_(1:end), est_err(2:4,:));
legend('COM x','COM y','COM z');
figure(5)
plot(t_(1:end), est_err(5:10,:));
legend('Ixx','Ixy','Ixz','Iyy','Iyz','Izz');
figure(6)
plot(t_(1:end), est_err(11:13,:));
legend('r1x','r1y','r1z');
figure(7)
plot(t_(1:end), est_err(14:16,:));
legend('r2x','r2y','r2z');

%% function definition
function output = skew(v)
   output =  [    0 -v(3)   v(2)
               v(3)     0  -v(1)
              -v(2)  v(1)      0];
end

function output = L(v)
    output = [v(1)  v(2)  v(3)     0     0     0
                 0  v(1)     0  v(2)  v(3)     0
                 0     0  v(1)     0  v(2)  v(3)];
end
