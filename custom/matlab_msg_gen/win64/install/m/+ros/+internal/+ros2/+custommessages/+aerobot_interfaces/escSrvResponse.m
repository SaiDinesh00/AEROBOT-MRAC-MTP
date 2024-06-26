function [data, info] = escSrvResponse
%EscSrv gives an empty data for aerobot_interfaces/EscSrvResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'aerobot_interfaces/EscSrvResponse';
[data.success, info.success] = ros.internal.ros2.messages.ros2.default_type('logical',1,0);
info.MessageType = 'aerobot_interfaces/EscSrvResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'success';
