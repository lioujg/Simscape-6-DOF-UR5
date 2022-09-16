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
ref_sample = 0.1; %0.0001
duration = 100;
t = [0:ref_sample:duration]';
% translation
% x
vx_amp = 0.45;
vx_f = 0.7;
vx_start = 0;
vx_end = 50;
% y
vy_amp = -0.9;
vy_f = 0.85;
vy_start = 0;
vy_end = 50;
% z
vz_amp = -0.4;
vz_f = 0.75;
vz_start = 0;
vz_end = 50;

vx = vx_amp * sin(vx_f * 2 * pi * t);
vy = vy_amp * sin(vy_f * 2 * pi * t);
vz = vz_amp * sin(vz_f * 2 * pi * t);

ax = vx_f * 2 * pi * vx_amp * cos(vx_f * 2 * pi * t);
ay = vy_f * 2 * pi * vy_amp * cos(vy_f * 2 * pi * t);
az = vz_f * 2 * pi * vz_amp * cos(vz_f * 2 * pi * t);

% rotation
% x
wx_amp = 0.7;
wx_f = 0.55;
wx_start = 0;
wx_end = 50;
% y
wy_amp = 1.0;
wy_f = 0.9;
wy_start = 0;
wy_end = 50;
% z
wz_amp = 0.7;
wz_f = 0.7;
wz_start = 0;
wz_end = 50;

wx = wx_amp * sin(wx_f * 2 * pi * t);
wy = wy_amp * sin(wy_f * 2 * pi * t);
wz = wz_amp * sin(wz_f * 2 * pi * t);

alx = wx_f * 2 * pi * wx_amp * cos(wx_f * 2 * pi * t);
aly = wy_f * 2 * pi * wy_amp * cos(wy_f * 2 * pi * t);
alz = wz_f * 2 * pi * wz_amp * cos(wz_f * 2 * pi * t);
