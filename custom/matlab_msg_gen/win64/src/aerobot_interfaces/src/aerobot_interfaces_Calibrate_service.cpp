// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for aerobot_interfaces/CalibrateRequest
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "aerobot_interfaces/srv/calibrate.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ServiceTemplates.hpp"
class AEROBOT_INTERFACES_EXPORT ros2_aerobot_interfaces_msg_CalibrateRequest_common : public MATLABROS2MsgInterface<aerobot_interfaces::srv::Calibrate::Request> {
  public:
    virtual ~ros2_aerobot_interfaces_msg_CalibrateRequest_common(){}
    virtual void copy_from_struct(aerobot_interfaces::srv::Calibrate::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::Calibrate::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_aerobot_interfaces_msg_CalibrateRequest_common::copy_from_struct(aerobot_interfaces::srv::Calibrate::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //get_calibration_parameters
        const matlab::data::TypedArray<bool> get_calibration_parameters_arr = arr["get_calibration_parameters"];
        msg->get_calibration_parameters = get_calibration_parameters_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'get_calibration_parameters' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'get_calibration_parameters' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_aerobot_interfaces_msg_CalibrateRequest_common::get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::Calibrate::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","get_calibration_parameters"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("aerobot_interfaces/CalibrateRequest");
    // get_calibration_parameters
    auto currentElement_get_calibration_parameters = (msg + ctr)->get_calibration_parameters;
    outArray[ctr]["get_calibration_parameters"] = factory.createScalar(currentElement_get_calibration_parameters);
    }
    return std::move(outArray);
  }
class AEROBOT_INTERFACES_EXPORT ros2_aerobot_interfaces_msg_CalibrateResponse_common : public MATLABROS2MsgInterface<aerobot_interfaces::srv::Calibrate::Response> {
  public:
    virtual ~ros2_aerobot_interfaces_msg_CalibrateResponse_common(){}
    virtual void copy_from_struct(aerobot_interfaces::srv::Calibrate::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::Calibrate::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_aerobot_interfaces_msg_CalibrateResponse_common::copy_from_struct(aerobot_interfaces::srv::Calibrate::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //x
        const matlab::data::TypedArray<double> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    try {
        //y
        const matlab::data::TypedArray<double> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    try {
        //z
        const matlab::data::TypedArray<double> z_arr = arr["z"];
        msg->z = z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_aerobot_interfaces_msg_CalibrateResponse_common::get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::Calibrate::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","x","y","z"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("aerobot_interfaces/CalibrateResponse");
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // z
    auto currentElement_z = (msg + ctr)->z;
    outArray[ctr]["z"] = factory.createScalar(currentElement_z);
    }
    return std::move(outArray);
  } 
class AEROBOT_INTERFACES_EXPORT ros2_aerobot_interfaces_Calibrate_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_aerobot_interfaces_Calibrate_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_aerobot_interfaces_Calibrate_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<aerobot_interfaces::srv::Calibrate::Request,ros2_aerobot_interfaces_msg_CalibrateRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<aerobot_interfaces::srv::Calibrate::Response,ros2_aerobot_interfaces_msg_CalibrateResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_aerobot_interfaces_Calibrate_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<aerobot_interfaces::srv::Calibrate::Request,ros2_aerobot_interfaces_msg_CalibrateRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<aerobot_interfaces::srv::Calibrate::Response,ros2_aerobot_interfaces_msg_CalibrateResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_aerobot_interfaces_Calibrate_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<aerobot_interfaces::srv::Calibrate::Request>();
        ros2_aerobot_interfaces_msg_CalibrateRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<aerobot_interfaces::srv::Calibrate::Response>();
        ros2_aerobot_interfaces_msg_CalibrateResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_aerobot_interfaces_Calibrate_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<aerobot_interfaces::srv::Calibrate,aerobot_interfaces::srv::Calibrate::Request,aerobot_interfaces::srv::Calibrate::Response,ros2_aerobot_interfaces_msg_CalibrateRequest_common,ros2_aerobot_interfaces_msg_CalibrateResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_aerobot_interfaces_Calibrate_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<aerobot_interfaces::srv::Calibrate,aerobot_interfaces::srv::Calibrate::Request,aerobot_interfaces::srv::Calibrate::Response,ros2_aerobot_interfaces_msg_CalibrateRequest_common,ros2_aerobot_interfaces_msg_CalibrateResponse_common,rclcpp::Client<aerobot_interfaces::srv::Calibrate>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_aerobot_interfaces_Calibrate_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_aerobot_interfaces_msg_CalibrateRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (aerobot_interfaces::srv::Calibrate::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_aerobot_interfaces_msg_CalibrateResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (aerobot_interfaces::srv::Calibrate::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_aerobot_interfaces_msg_CalibrateRequest_common, MATLABROS2MsgInterface<aerobot_interfaces::srv::Calibrate::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_aerobot_interfaces_msg_CalibrateResponse_common, MATLABROS2MsgInterface<aerobot_interfaces::srv::Calibrate::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_aerobot_interfaces_Calibrate_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
