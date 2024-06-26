#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_aerobot_interfaces_CalibrateRequest and aerobot_interfaces::srv::Calibrate::Request

void convertFromBus(aerobot_interfaces::srv::Calibrate::Request& msgPtr, SL_Bus_aerobot_interfaces_CalibrateRequest const* busPtr)
{
  const std::string rosMessageType("aerobot_interfaces/CalibrateRequest");

  msgPtr.get_calibration_parameters =  busPtr->get_calibration_parameters;
}

void convertToBus(SL_Bus_aerobot_interfaces_CalibrateRequest* busPtr, const aerobot_interfaces::srv::Calibrate::Request& msgPtr)
{
  const std::string rosMessageType("aerobot_interfaces/CalibrateRequest");

  busPtr->get_calibration_parameters =  msgPtr.get_calibration_parameters;
}


// Conversions between SL_Bus_aerobot_interfaces_CalibrateResponse and aerobot_interfaces::srv::Calibrate::Response

void convertFromBus(aerobot_interfaces::srv::Calibrate::Response& msgPtr, SL_Bus_aerobot_interfaces_CalibrateResponse const* busPtr)
{
  const std::string rosMessageType("aerobot_interfaces/CalibrateResponse");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

void convertToBus(SL_Bus_aerobot_interfaces_CalibrateResponse* busPtr, const aerobot_interfaces::srv::Calibrate::Response& msgPtr)
{
  const std::string rosMessageType("aerobot_interfaces/CalibrateResponse");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}

