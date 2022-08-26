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
parameter_setting;
