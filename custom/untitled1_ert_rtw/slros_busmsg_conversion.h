#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <aerobot_interfaces/srv/calibrate.hpp>
#include <aerobot_interfaces/srv/calibrate.hpp>
#include "untitled1_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(aerobot_interfaces::srv::Calibrate::Request& msgPtr, SL_Bus_aerobot_interfaces_CalibrateRequest const* busPtr);
void convertToBus(SL_Bus_aerobot_interfaces_CalibrateRequest* busPtr, const aerobot_interfaces::srv::Calibrate::Request& msgPtr);

void convertFromBus(aerobot_interfaces::srv::Calibrate::Response& msgPtr, SL_Bus_aerobot_interfaces_CalibrateResponse const* busPtr);
void convertToBus(SL_Bus_aerobot_interfaces_CalibrateResponse* busPtr, const aerobot_interfaces::srv::Calibrate::Response& msgPtr);


#endif
