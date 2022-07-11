% Startup script for Industrial Robots in Simscape
%
% Copyright 2021 The MathWorks, Inc.

% Set up path
addpath(pwd);
addpath([pwd filesep 'Scripts']);
addpath([pwd filesep 'Scripts' filesep 'Images']);

% Open Overview HTML
% web('sm_industrial_robots_Demo_Script.html');
sm_industrial_robots_import('abbYuMi','path');
cd('Models');
startup_sm_abbYuMi_trajectory;
sm_abbYuMi_trajectory_waypoints;
