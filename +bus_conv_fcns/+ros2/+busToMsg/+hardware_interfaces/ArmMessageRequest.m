function rosmsgOut = ArmMessageRequest(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.pin = int8(slBusIn.pin);
end
