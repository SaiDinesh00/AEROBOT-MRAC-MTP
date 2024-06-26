// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for aerobot_interfaces/EscSrvRequest
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
#include "aerobot_interfaces/srv/esc_srv.hpp"
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
class AEROBOT_INTERFACES_EXPORT ros2_aerobot_interfaces_msg_EscSrvRequest_common : public MATLABROS2MsgInterface<aerobot_interfaces::srv::EscSrv::Request> {
  public:
    virtual ~ros2_aerobot_interfaces_msg_EscSrvRequest_common(){}
    virtual void copy_from_struct(aerobot_interfaces::srv::EscSrv::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::EscSrv::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_aerobot_interfaces_msg_EscSrvRequest_common::copy_from_struct(aerobot_interfaces::srv::EscSrv::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //pin_number
        const matlab::data::TypedArray<int8_t> pin_number_arr = arr["pin_number"];
        msg->pin_number = pin_number_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pin_number' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pin_number' is wrong type; expected a int8.");
    }
    try {
        //state
        const matlab::data::TypedArray<bool> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_aerobot_interfaces_msg_EscSrvRequest_common::get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::EscSrv::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","pin_number","state"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("aerobot_interfaces/EscSrvRequest");
    // pin_number
    auto currentElement_pin_number = (msg + ctr)->pin_number;
    outArray[ctr]["pin_number"] = factory.createScalar(currentElement_pin_number);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    }
    return std::move(outArray);
  }
class AEROBOT_INTERFACES_EXPORT ros2_aerobot_interfaces_msg_EscSrvResponse_common : public MATLABROS2MsgInterface<aerobot_interfaces::srv::EscSrv::Response> {
  public:
    virtual ~ros2_aerobot_interfaces_msg_EscSrvResponse_common(){}
    virtual void copy_from_struct(aerobot_interfaces::srv::EscSrv::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::EscSrv::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_aerobot_interfaces_msg_EscSrvResponse_common::copy_from_struct(aerobot_interfaces::srv::EscSrv::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_aerobot_interfaces_msg_EscSrvResponse_common::get_arr(MDFactory_T& factory, const aerobot_interfaces::srv::EscSrv::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("aerobot_interfaces/EscSrvResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    }
    return std::move(outArray);
  } 
class AEROBOT_INTERFACES_EXPORT ros2_aerobot_interfaces_EscSrv_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_aerobot_interfaces_EscSrv_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_aerobot_interfaces_EscSrv_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<aerobot_interfaces::srv::EscSrv::Request,ros2_aerobot_interfaces_msg_EscSrvRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<aerobot_interfaces::srv::EscSrv::Response,ros2_aerobot_interfaces_msg_EscSrvResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_aerobot_interfaces_EscSrv_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<aerobot_interfaces::srv::EscSrv::Request,ros2_aerobot_interfaces_msg_EscSrvRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<aerobot_interfaces::srv::EscSrv::Response,ros2_aerobot_interfaces_msg_EscSrvResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_aerobot_interfaces_EscSrv_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<aerobot_interfaces::srv::EscSrv::Request>();
        ros2_aerobot_interfaces_msg_EscSrvRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<aerobot_interfaces::srv::EscSrv::Response>();
        ros2_aerobot_interfaces_msg_EscSrvResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_aerobot_interfaces_EscSrv_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<aerobot_interfaces::srv::EscSrv,aerobot_interfaces::srv::EscSrv::Request,aerobot_interfaces::srv::EscSrv::Response,ros2_aerobot_interfaces_msg_EscSrvRequest_common,ros2_aerobot_interfaces_msg_EscSrvResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_aerobot_interfaces_EscSrv_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<aerobot_interfaces::srv::EscSrv,aerobot_interfaces::srv::EscSrv::Request,aerobot_interfaces::srv::EscSrv::Response,ros2_aerobot_interfaces_msg_EscSrvRequest_common,ros2_aerobot_interfaces_msg_EscSrvResponse_common,rclcpp::Client<aerobot_interfaces::srv::EscSrv>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_aerobot_interfaces_EscSrv_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_aerobot_interfaces_msg_EscSrvRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (aerobot_interfaces::srv::EscSrv::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_aerobot_interfaces_msg_EscSrvResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (aerobot_interfaces::srv::EscSrv::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_aerobot_interfaces_msg_EscSrvRequest_common, MATLABROS2MsgInterface<aerobot_interfaces::srv::EscSrv::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_aerobot_interfaces_msg_EscSrvResponse_common, MATLABROS2MsgInterface<aerobot_interfaces::srv::EscSrv::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_aerobot_interfaces_EscSrv_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
