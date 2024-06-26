function ros2msg = aerobot_interfaces_msg_EscMsg_1To2_Converter(message,ros2msg)
%aerobot_interfaces_msg_EscMsg_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.pulse_width = message.PulseWidth;
end