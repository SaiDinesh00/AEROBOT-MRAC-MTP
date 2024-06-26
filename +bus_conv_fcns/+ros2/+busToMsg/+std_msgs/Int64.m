function rosmsgOut = Int64(slBusIn, rosmsgOut)
%#codegen
%   Copyright 2021 The MathWorks, Inc.
    rosmsgOut.data = int64(slBusIn.data);
end
