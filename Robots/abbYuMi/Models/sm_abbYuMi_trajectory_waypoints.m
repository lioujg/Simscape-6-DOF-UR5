%% Generate joint angle waypoints for sm_abbYuMi model using inverse kinematics
% Copyright 2021 The MathWorks, Inc.
%% attached parameters
stiff = 80;
damping = 10;
lower_bound = -0.008;
upper_bound = 0.008;

%% Load model and generate kinematic solver object
sys = 'sm_abbYuMi_trajectory';
open_system(sys);
waypointsL = ones(7,1);
waypointsR = ones(7,1);
ks = simscape.multibody.KinematicsSolver(sys);
segment_duration = 1.5;
iterative = 6;
% size(waypointsL, 2) * segment_duration

%% List joints
ks.jointPositionVariables;

%% Add frame variable for end effector relative to world
base = [sys '/Robot/World/W'];

followerL = [sys '/Robot/Arm L/gripper_l_base/GC'];
addFrameVariables(ks,'HandL','Translation',base,followerL);
addFrameVariables(ks,'HandL','Rotation',base,followerL);

followerR = [sys '/Robot/Arm R/gripper_r_base/GC'];
addFrameVariables(ks,'HandR','Translation',base,followerR);
addFrameVariables(ks,'HandR','Rotation',base,followerR);

%% Set x-y-z position of LEFT gripper as input target
%  and set desired position
frameVariables(ks)
targetIDsL = ["HandL.Translation.x";"HandL.Translation.y";"HandL.Translation.z";"HandL.Rotation.x";"HandL.Rotation.y";"HandL.Rotation.z"];
addTargetVariables(ks,targetIDsL);

%% Left Arm
% targetsL1 = [0.0 0.225 0.392   0  90 -90]; % m, deg
% x direction
targetsL2 = [-0.1, 0.1, 0.45  0 180 -90]; % m, deg
targetsL3 = [-0.15, 0.1, 0.45  0 180 -90]; % m, deg
% y direction
targetsL4 = [-0.15, 0.2, 0.4  0 180 -90]; % m, deg
targetsL5 = [-0.15, 0.2, 0.4  0 180 -90]; % m, deg
targetsL6 = [-0.15, 0.1, 0.4  0 180 -90]; % m, deg
% z direction
targetsL7 = [-0.15, 0.1, 0.3  0 180 -90]; % m, deg
targetsL8 = [-0.15, 0.1, 0.4  0 180 -90]; % m, deg
% rotation
targetsL9 = [-0.15, 0.1, 0.4        0  180 -90]; % m, deg
targetsL10 = [-0.15, 0.1, 0.2    -15  180 -90]; % m, deg
targetsL11 = [-0.15, 0.1, 0.4       0  165 -90]; % m, deg
targetsL12 = [-0.15, 0.2, 0.3     0  180 -105]; % m, deg
% aggressive
targetsL13 = [-0.25, 0.15, 0.25     -15  170 -120]; % m, deg
targetsL14 = [0.15, -0.20, 0.4     -15 190 -90]; % m, deg

% debug
% targetsL9 = [0.1, 0.3, 0.3   0   180 -90]; % m, deg
% targetsL10 = [0.1, 0.3, 0.3   -45   210 -90]; % m, deg
% targetsL11 = [0.1, 0.3, 0.3   -45   150 -90]; % m, deg

%% Right Arm
% targetsR1 = [0.4, -0.4, 0.4  0  0 0]; % m, deg
% x direction
targetsR2 = [-0.1, -0.18, 0.45  0 180  90]; % m, deg
targetsR3 = [-0.15, -0.18, 0.45 0 180  90]; % m, deg
% y direction
targetsR4 = [-0.15, -0.05, 0.4  0 180 90]; % m, deg
targetsR5 = [-0.15, -0.11, 0.4  0 170 90]; % m, deg
targetsR6 = [-0.15,  -0.18, 0.4  0 180 90]; % m, deg
% z direction
targetsR7 = [-0.15, -0.17, 0.3  0 180 90]; % m, deg
targetsR8 = [-0.15, -0.17, 0.4  0 180 90]; % m, deg
% rotation
targetsR9 = [-0.15, -0.17, 0.4        0  180 90]; % m, deg
targetsR10 = [-0.12, -0.17, 0.27    -15  180 90]; % m, deg
targetsR11 = [-0.15, -0.17, 0.4       0  165 90]; % m, deg
targetsR12 = [-0.05, -0.07, 0.3     0  180 75]; % m, deg
% aggressive
targetsR13 = [-0.11, -0.08, 0.32     -15  170 60]; % m, deg
targetsR14 = [0.13, -0.28, 0.4     -15  190 90]; % m, deg


%% Set joint angles as desired analysis outputs
jointPositionVariables(ks)

% outputIDsL = ["j4.Rz.q";"j5.Rz.q";"j10.Rz.q";"j6.Rz.q";"j7.Rz.q";"j8.Rz.q";"j9.Rz.q"];
outputIDsL = ["j3.Rz.q";"j4.Rz.q";"j9.Rz.q";"j5.Rz.q";"j6.Rz.q";"j7.Rz.q";"j8.Rz.q"];
addOutputVariables(ks,outputIDsL);
addInitialGuessVariables(ks,outputIDsL);


%% Use kinematic solver to get joint angles
guessesL = [50 30 0 0 0 0 -130]; % initial state

clear waypoint*
% waypointL1 = ks.solve(targetsL1,guessesL);
% viewSolution(ks);
waypointL1 = [45; 0; 0; 0; 0; 0; 0];

waypointL2 = ks.solve(targetsL2,waypointL1);
% viewSolution(ks);

waypointL3 = ks.solve(targetsL3,waypointL2);
% viewSolution(ks);

waypointL4 = ks.solve(targetsL4,waypointL3);
% viewSolution(ks);

waypointL5 = ks.solve(targetsL5,waypointL4);
% viewSolution(ks);

waypointL6 = ks.solve(targetsL6,waypointL5);
% viewSolution(ks);

waypointL7 = ks.solve(targetsL7,waypointL6);
% viewSolution(ks);

waypointL8 = ks.solve(targetsL8,waypointL7);
% viewSolution(ks);

waypointL9 = ks.solve(targetsL9,waypointL8);
% viewSolution(ks);

waypointL10 = ks.solve(targetsL10,waypointL9);
% viewSolution(ks);

waypointL11 = ks.solve(targetsL11,waypointL9);
% viewSolution(ks);

waypointL12 = ks.solve(targetsL12,waypointL11);
% viewSolution(ks);

waypointL13 = ks.solve(targetsL13,waypointL9);
% viewSolution(ks);

waypointL14 = ks.solve(targetsL14,waypointL13);
% viewSolution(ks);

waypointsL_ri    =  [
                     waypointL1'
                     waypointL2'
                     waypointL3'
                     waypointL4'
                     waypointL5'
                     waypointL6'
                     waypointL7'
                     waypointL8'
                     waypointL9'
                     waypointL10'
                     waypointL9'
                     waypointL11'
                     waypointL9'
                     ];
for i=1:iterative
    waypointsL_ri = [waypointsL_ri
                     
                     waypointL13'
                     waypointL14'
                     waypointL13'
                     waypointL9'
                     waypointL13'
                     waypointL14'
                     waypointL13'
                     waypointL9'
                     waypointL13'
                     waypointL14'
                     waypointL13'
                     waypointL9'
%                      waypointL8'
%                      waypointL7'
%                      waypointL6'
%                      waypointL5'
%                      waypointL4'
%                      waypointL3'
%                      waypointL2'
%                      waypointL1'
                     ];
end

waypointsL = (waypointsL_ri')*pi/180;
% waypointsL = ([waypointL1 waypointL2 waypointL3 waypointL2 waypointL3 waypointL4 waypointL5 waypointL6 waypointL5 waypointL4 waypointL5 waypointL6 waypointL7 waypointL8 waypointL7 waypointL8 waypointL1])*pi/180;

%% Clear ks to prepare calculation for right gripper
clearOutputVariables(ks);
clearInitialGuessVariables(ks);
clearTargetVariables(ks);

%% Set x-y-z position of RIGHT gripper as input target
%  and set desired position
targetIDsR = ["HandR.Translation.x";"HandR.Translation.y";"HandR.Translation.z";"HandR.Rotation.x";"HandR.Rotation.y";"HandR.Rotation.z"];
addTargetVariables(ks,targetIDsR);

outputIDsR = ["j12.Rz.q";"j13.Rz.q";"j18.Rz.q";"j14.Rz.q";"j15.Rz.q";"j16.Rz.q";"j17.Rz.q"];
% outputIDsR = ["j14.Rz.q";"j15.Rz.q";"j20.Rz.q";"j16.Rz.q";"j17.Rz.q";"j18.Rz.q";"j19.Rz.q"];
% outputIDsR = ["j13.Rz.q";"j14.Rz.q";"j19.Rz.q";"j15.Rz.q";"j16.Rz.q";"j17.Rz.q";"j18.Rz.q"];
addOutputVariables(ks,outputIDsR);
addInitialGuessVariables(ks,outputIDsR);

%% Use kinematic solver to get joint angles
guessesR = [15 -35 -63 24 65 80 20];
% waypointR1 = ks.solve(targetsR1,guessesR);
% viewSolution(ks);
waypointR1 = [-45; 0; 0; 0; 0; 0; 0];

waypointR2 = ks.solve(targetsR2,waypointR1);
% viewSolution(ks);

waypointR3 = ks.solve(targetsR3,waypointR2);
% viewSolution(ks);

waypointR4 = ks.solve(targetsR4,waypointR3);
% viewSolution(ks);

waypointR5 = ks.solve(targetsR5,waypointR4);
% viewSolution(ks);

waypointR6 = ks.solve(targetsR6,waypointR5);
% viewSolution(ks);

waypointR7 = ks.solve(targetsR7,waypointR6);
% viewSolution(ks);

waypointR8 = ks.solve(targetsR8,waypointR7);
% viewSolution(ks);

waypointR9 = ks.solve(targetsR9,waypointR8);
% viewSolution(ks);

waypointR10 = ks.solve(targetsR10,waypointR9);
% viewSolution(ks);

waypointR11 = ks.solve(targetsR11,waypointR9);
% viewSolution(ks);

waypointR12 = ks.solve(targetsR12,waypointR11);
% viewSolution(ks);

waypointR13 = ks.solve(targetsR13,waypointR9);
% viewSolution(ks);

waypointR14 = ks.solve(targetsR14,waypointR13);

waypointsR_ri    =  [
                     waypointR1'
                     waypointR2'
                     waypointR3'
                     waypointR4'
                     waypointR5'
                     waypointR6'
                     waypointR7'
                     waypointR8'
                     waypointR9'
                     waypointR10'
                     waypointR9'
                     waypointR11'
                     waypointR9'
                     ];
for i=1:iterative
    waypointsR_ri = [waypointsR_ri
                     
                     waypointR13'
                     waypointR14'
                     waypointR13'
                     waypointR9'
                     waypointR13'
                     waypointR14'
                     waypointR13'
                     waypointR9'
                     waypointR13'
                     waypointR14'
                     waypointR13'
                     waypointR9'
%                      waypointR8'
%                      waypointR7'
%                      waypointR6'
%                      waypointR5'
%                      waypointR4'
%                      waypointR3'
%                      waypointR2'
%                      waypointR1'
                     ];
end

waypointsR = (waypointsR_ri')*pi/180;

% waypointsR = ([waypointR1';waypointR2';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3';waypointR3']')*pi/180;

