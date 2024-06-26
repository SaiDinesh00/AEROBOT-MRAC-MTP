function [data, info] = calibrateRequest
%Calibrate gives an empty data for aerobot_interfaces/CalibrateRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'aerobot_interfaces/CalibrateRequest';
[data.get_calibration_parameters, info.get_calibration_parameters] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'aerobot_interfaces/CalibrateRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'get_calibration_parameters';
