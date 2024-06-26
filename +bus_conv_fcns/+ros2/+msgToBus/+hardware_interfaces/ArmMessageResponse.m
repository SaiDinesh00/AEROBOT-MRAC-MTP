function slBusOut = ArmMessageResponse(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.success = logical(msgIn.success);
end
