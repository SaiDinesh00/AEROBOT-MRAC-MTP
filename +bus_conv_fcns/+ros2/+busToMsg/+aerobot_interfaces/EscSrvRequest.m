function rosmsgOut = EscSrvRequest(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.pin_number = int8(slBusIn.pin_number);
    rosmsgOut.state = logical(slBusIn.state);
end
