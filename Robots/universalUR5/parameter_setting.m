%% Parameter of Joint
bound = 1e-6;
stiff = 1000;
damping = 10;
tran = 1e-6;
degree = 0.5;

%% Gimbal Joint
stiff_g = 0.3;
damp_g = 0.05;

%% Measurement Point
rp = [-0.1 0 0.1];

%% Ref Signal
% translation
% x
vx_amp = 0.15;
vx_f = 0.45;
vx_start = 0;
vx_end = 50;
% y
vy_amp = -0.25;
vy_f = 0.35;
vy_start = 0;
vy_end = 50;
% z
vz_amp = -0.25;
vz_f = 0.35;
vz_start = 0;
vz_end = 50;

% rotation
% x
wx_amp = 0.7;
wx_f = 0.55;
wx_start = 0;
wx_end = 50;
% y
wy_amp = 0.7;
wy_f = 0.75;
wy_start = 0;
wy_end = 50;
% z
wz_amp = 1.2;
wz_f = 0.7;
wz_start = 0;
wz_end = 50;
