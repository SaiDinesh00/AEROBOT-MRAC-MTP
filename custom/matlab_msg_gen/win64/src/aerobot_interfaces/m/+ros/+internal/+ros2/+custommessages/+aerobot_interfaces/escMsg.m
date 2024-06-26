function [data, info] = escMsg
%EscMsg gives an empty data for aerobot_interfaces/EscMsg
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'aerobot_interfaces/EscMsg';
[data.pulse_width, info.pulse_width] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
info.MessageType = 'aerobot_interfaces/EscMsg';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'pulse_width';
