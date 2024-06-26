function rosmsgOut = CalibrateRequest(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.get_calibration_parameters = logical(slBusIn.get_calibration_parameters);
end
