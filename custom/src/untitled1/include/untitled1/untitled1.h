//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: untitled1.h
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
#ifndef RTW_HEADER_untitled1_h_
#define RTW_HEADER_untitled1_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "slros2_initialize.h"
#include "untitled1_types.h"
#include <cfloat>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

// Block signals (default storage)
struct B_untitled1_T {
  real_T x;        // '<S1>/BusConversion_InsertedFor_Bus Selector_at_inport_0'
  real_T y;        // '<S1>/BusConversion_InsertedFor_Bus Selector_at_inport_0'
  real_T z;        // '<S1>/BusConversion_InsertedFor_Bus Selector_at_inport_0'
};

// Block states (default storage) for system '<Root>'
struct DW_untitled1_T {
  ros_slros2_internal_block_Ser_T obj; // '<S3>/ServiceCaller'
};

// Parameters (default storage)
struct P_untitled1_T_ {
  SL_Bus_aerobot_interfaces_CalibrateResponse Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S3>/Constant'

  SL_Bus_aerobot_interfaces_CalibrateRequest Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                 //  Referenced by: '<S2>/Constant'

  real_T Step_Time;                    // Expression: 1
                                          //  Referenced by: '<S1>/Step'

  real_T Step_Y0;                      // Expression: 0
                                          //  Referenced by: '<S1>/Step'

  real_T Step_YFinal;                  // Expression: 1
                                          //  Referenced by: '<S1>/Step'

  real_T Step1_Time;                   // Expression: 1.01
                                          //  Referenced by: '<S1>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                          //  Referenced by: '<S1>/Step1'

  real_T Step1_YFinal;                 // Expression: 1
                                          //  Referenced by: '<S1>/Step1'

};

// Real-time Model Data Structure
struct tag_RTM_untitled1_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_untitled1_T untitled1_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_untitled1_T untitled1_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_untitled1_T untitled1_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void untitled1_initialize(void);
  extern void untitled1_step(void);
  extern void untitled1_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_untitled1_T *const untitled1_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'untitled1'
//  '<S1>'   : 'untitled1/Subsystem'
//  '<S2>'   : 'untitled1/Subsystem/Blank Message'
//  '<S3>'   : 'untitled1/Subsystem/Call Service'

#endif                                 // RTW_HEADER_untitled1_h_

//
// File trailer for generated code.
//
// [EOF]
//
