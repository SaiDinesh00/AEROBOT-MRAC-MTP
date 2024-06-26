function [data, info] = calibrateResponse
%Calibrate gives an empty data for aerobot_interfaces/CalibrateResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'aerobot_interfaces/CalibrateResponse';
[data.x, info.x] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.y, info.y] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
[data.z, info.z] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'aerobot_interfaces/CalibrateResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'x';
info.MatPath{2} = 'y';
info.MatPath{3} = 'z';
