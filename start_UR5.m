clc
close all
cd Robots\universalUR5
addpath([pwd filesep 'Geometry']);
robot = importrobot('sm_universalUR5.urdf');
open('UR5.slx');
parameter_setting;
