function ros1msg = aerobot_interfaces_msg_EscMsg_2To1_Converter(message,ros1msg)
%aerobot_interfaces_msg_EscMsg_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.PulseWidth = message.pulse_width;
end