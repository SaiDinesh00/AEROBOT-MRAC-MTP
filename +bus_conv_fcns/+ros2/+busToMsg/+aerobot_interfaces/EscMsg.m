function rosmsgOut = EscMsg(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.pin_number = int8(slBusIn.pin_number);
    rosmsgOut.pulse_width = int64(slBusIn.pulse_width);
end
