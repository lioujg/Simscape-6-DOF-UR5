%% Import URDF file to create Simscape Multibody model
addpath([pwd filesep 'Geometry']);
% [mdl_h] = smimport('sm_universalUR5.urdf','ModelName','sm_universalUR5_1_RawImport');
% mdl_name = getfullname(mdl_h);
% 
% %% Update diagram, note initial robot position
% set_param(mdl_h,'SimulationCommand','update')

robot = importrobot('sm_universalUR5.urdf');
% open('sm_universalUR5_1_RawImport.slx');
open('pp.slx');

%% Parameter of Joint
bound = 1e-6;
stiff = 1000;
damping = 10;
tran = 1e-6;
degree = 0.5;

%% Measurement Point
rp = [-0.2 0 0.1];
