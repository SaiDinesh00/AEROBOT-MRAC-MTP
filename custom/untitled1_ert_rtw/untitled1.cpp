//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: untitled1.cpp
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
#include "untitled1.h"
#include "untitled1_types.h"
#include "rtwtypes.h"
#include "rmw/qos_profiles.h"
#include <stddef.h>
#include "untitled1_private.h"
#include "untitled1_dt.h"

// Block signals (default storage)
B_untitled1_T untitled1_B;

// Block states (default storage)
DW_untitled1_T untitled1_DW;

// Real-time model
RT_MODEL_untitled1_T untitled1_M_{ };

RT_MODEL_untitled1_T *const untitled1_M{ &untitled1_M_ };

// Forward declaration for local functions
static void untitled1_SystemCore_setup(ros_slros2_internal_block_Ser_T *obj);
static void untitled1_SystemCore_setup(ros_slros2_internal_block_Ser_T *obj)
{
  static const char_T b_zeroDelimTopic_0[16]{ "/calibrate_gyro" };

  rmw_qos_profile_t qos_profile;
  char_T b_zeroDelimTopic[16];

  // Start for MATLABSystem: '<S3>/ServiceCaller'
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S3>/ServiceCaller'
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE);
  for (int32_T i{0}; i < 16; i++) {
    // Start for MATLABSystem: '<S3>/ServiceCaller'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  ServCall_untitled1_1.createServiceCaller(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

// Model step function
void untitled1_step(void)
{
  SL_Bus_aerobot_interfaces_CalibrateRequest rtb_BusAssignment;
  SL_Bus_aerobot_interfaces_CalibrateResponse b_varargout_1;
  real_T tmp;
  real_T tmp_0;
  boolean_T serverAvailableOnTime;

  // Step: '<S1>/Step' incorporates:
  //   Step: '<S1>/Step1'

  tmp_0 = untitled1_M->Timing.t[0];
  if (tmp_0 < untitled1_P.Step_Time) {
    tmp = untitled1_P.Step_Y0;
  } else {
    tmp = untitled1_P.Step_YFinal;
  }

  // Step: '<S1>/Step1'
  if (tmp_0 < untitled1_P.Step1_Time) {
    tmp_0 = untitled1_P.Step1_Y0;
  } else {
    tmp_0 = untitled1_P.Step1_YFinal;
  }

  // BusAssignment: '<S1>/Bus Assignment' incorporates:
  //   DataTypeConversion: '<S1>/Cast To Boolean'
  //   Step: '<S1>/Step'
  //   Step: '<S1>/Step1'
  //   Sum: '<S1>/Add'

  rtb_BusAssignment.get_calibration_parameters = (tmp - tmp_0 != 0.0);

  // Outputs for Atomic SubSystem: '<S1>/Call Service'
  // MATLABSystem: '<S3>/ServiceCaller'
  serverAvailableOnTime = ServCall_untitled1_1.waitForServer(5.0);
  if (serverAvailableOnTime) {
    ServCall_untitled1_1.call(&rtb_BusAssignment, &b_varargout_1);
  }

  // SignalConversion generated from: '<S1>/Bus Selector' incorporates:
  //   MATLABSystem: '<S3>/ServiceCaller'
  //
  untitled1_B.x = b_varargout_1.x;

  // SignalConversion generated from: '<S1>/Bus Selector' incorporates:
  //   MATLABSystem: '<S3>/ServiceCaller'
  //
  untitled1_B.y = b_varargout_1.y;

  // SignalConversion generated from: '<S1>/Bus Selector' incorporates:
  //   MATLABSystem: '<S3>/ServiceCaller'
  //
  untitled1_B.z = b_varargout_1.z;

  // End of Outputs for SubSystem: '<S1>/Call Service'

  // External mode
  rtExtModeUploadCheckTrigger(2);

  {                                    // Sample time: [0.0s, 0.0s]
    rtExtModeUpload(0, (real_T)untitled1_M->Timing.t[0]);
  }

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(1, (real_T)((untitled1_M->Timing.clockTick1) * 0.01));
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.0s, 0.0s]
    if ((rtmGetTFinal(untitled1_M)!=-1) &&
        !((rtmGetTFinal(untitled1_M)-untitled1_M->Timing.t[0]) >
          untitled1_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled1_M, "Simulation finished");
    }

    if (rtmGetStopRequested(untitled1_M)) {
      rtmSetErrorStatus(untitled1_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  untitled1_M->Timing.t[0] =
    ((time_T)(++untitled1_M->Timing.clockTick0)) * untitled1_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    untitled1_M->Timing.clockTick1++;
  }
}

// Model initialize function
void untitled1_initialize(void)
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&untitled1_M->solverInfo,
                          &untitled1_M->Timing.simTimeStep);
    rtsiSetTPtr(&untitled1_M->solverInfo, &rtmGetTPtr(untitled1_M));
    rtsiSetStepSizePtr(&untitled1_M->solverInfo, &untitled1_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&untitled1_M->solverInfo, (&rtmGetErrorStatus
      (untitled1_M)));
    rtsiSetRTModelPtr(&untitled1_M->solverInfo, untitled1_M);
  }

  rtsiSetSimTimeStep(&untitled1_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&untitled1_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(untitled1_M, &untitled1_M->Timing.tArray[0]);
  rtmSetTFinal(untitled1_M, -1);
  untitled1_M->Timing.stepSize0 = 0.01;

  // External mode info
  untitled1_M->Sizes.checksums[0] = (1087045620U);
  untitled1_M->Sizes.checksums[1] = (3275846864U);
  untitled1_M->Sizes.checksums[2] = (1165431189U);
  untitled1_M->Sizes.checksums[3] = (565567297U);

  {
    static const sysRanDType rtAlwaysEnabled{ SUBSYS_RAN_BC_ENABLE };

    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    untitled1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled1_M->extModeInfo,
      &untitled1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled1_M->extModeInfo, untitled1_M->Sizes.checksums);
    rteiSetTPtr(untitled1_M->extModeInfo, rtmGetTPtr(untitled1_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    untitled1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 26;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  // SystemInitialize for Atomic SubSystem: '<S1>/Call Service'
  // Start for MATLABSystem: '<S3>/ServiceCaller'
  untitled1_SystemCore_setup(&untitled1_DW.obj);

  // End of SystemInitialize for SubSystem: '<S1>/Call Service'
}

// Model terminate function
void untitled1_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S1>/Call Service'
  // Terminate for MATLABSystem: '<S3>/ServiceCaller'
  if (!untitled1_DW.obj.matlabCodegenIsDeleted) {
    untitled1_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/ServiceCaller'
  // End of Terminate for SubSystem: '<S1>/Call Service'
}

//
// File trailer for generated code.
//
// [EOF]
//
