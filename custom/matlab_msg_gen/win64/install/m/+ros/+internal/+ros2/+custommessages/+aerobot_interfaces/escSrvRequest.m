function [data, info] = escSrvRequest
%EscSrv gives an empty data for aerobot_interfaces/EscSrvRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'aerobot_interfaces/EscSrvRequest';
[data.pin_number, info.pin_number] = ros.internal.ros2.messages.ros2.default_type('int8',1,0);
[data.state, info.state] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'aerobot_interfaces/EscSrvRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'pin_number';
info.MatPath{2} = 'state';
