//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: untitled1_types.h
//
// Code generated for Simulink model 'untitled1'.
//
// Model version                  : 1.0
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Wed Jun 19 16:58:19 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-A (64-bit)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_untitled1_types_h_
#define RTW_HEADER_untitled1_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_CalibrateRequest_
#define DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_CalibrateRequest_

// MsgType=aerobot_interfaces/CalibrateRequest
struct SL_Bus_aerobot_interfaces_CalibrateRequest
{
  boolean_T get_calibration_parameters;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_CalibrateResponse_
#define DEFINED_TYPEDEF_FOR_SL_Bus_aerobot_interfaces_CalibrateResponse_

// MsgType=aerobot_interfaces/CalibrateResponse
struct SL_Bus_aerobot_interfaces_CalibrateResponse
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

// Custom Type definition for MATLABSystem: '<S3>/ServiceCaller'
#include "rmw/qos_profiles.h"
#ifndef struct_ros_slros2_internal_block_Ser_T
#define struct_ros_slros2_internal_block_Ser_T

struct ros_slros2_internal_block_Ser_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slros2_internal_block_Ser_T

// Parameters (default storage)
typedef struct P_untitled1_T_ P_untitled1_T;

// Forward declaration for rtModel
typedef struct tag_RTM_untitled1_T RT_MODEL_untitled1_T;

#endif                                 // RTW_HEADER_untitled1_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
