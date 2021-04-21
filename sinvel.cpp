/*
 * sinvel.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "sinvel".
 *
 * Model version              : 1.57
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Wed Apr 21 01:50:50 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "sinvel.h"
#include "sinvel_private.h"

/* Block signals (default storage) */
B_sinvel_T sinvel_B;

/* Block states (default storage) */
DW_sinvel_T sinvel_DW;

/* Real-time model */
RT_MODEL_sinvel_T sinvel_M_ = RT_MODEL_sinvel_T();
RT_MODEL_sinvel_T *const sinvel_M = &sinvel_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabCod_o(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_o(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void sinvel_step(void)
{
  real_T value;
  SL_Bus_sinvel_geometry_msgs_Twist rtb_BusAssignment;

  /* Sin: '<Root>/Sine Wave' */
  sinvel_B.SineWave = sin(sinvel_P.SineWave_Freq * sinvel_M->Timing.t[0] +
    sinvel_P.SineWave_Phase) * sinvel_P.SineWave_Amp + sinvel_P.SineWave_Bias;

  /* MATLABSystem: '<Root>/Steering angle' */
  ParamGet_sinvel_92.get_parameter(&value);

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<S1>/Constant'
   *  MATLABSystem: '<Root>/Steering angle'
   */
  rtb_BusAssignment = sinvel_P.Constant_Value;
  rtb_BusAssignment.Linear.X = sinvel_B.SineWave;
  rtb_BusAssignment.Angular.Z = value;

  /* Outputs for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
  /* MATLABSystem: '<S2>/SinkBlock' */
  Pub_sinvel_27.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish for Leader Vel' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++sinvel_M->Timing.clockTick0)) {
    ++sinvel_M->Timing.clockTickH0;
  }

  sinvel_M->Timing.t[0] = sinvel_M->Timing.clockTick0 *
    sinvel_M->Timing.stepSize0 + sinvel_M->Timing.clockTickH0 *
    sinvel_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.05s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.05, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    sinvel_M->Timing.clockTick1++;
    if (!sinvel_M->Timing.clockTick1) {
      sinvel_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void sinvel_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&sinvel_M->solverInfo, &sinvel_M->Timing.simTimeStep);
    rtsiSetTPtr(&sinvel_M->solverInfo, &rtmGetTPtr(sinvel_M));
    rtsiSetStepSizePtr(&sinvel_M->solverInfo, &sinvel_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&sinvel_M->solverInfo, (&rtmGetErrorStatus(sinvel_M)));
    rtsiSetRTModelPtr(&sinvel_M->solverInfo, sinvel_M);
  }

  rtsiSetSimTimeStep(&sinvel_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&sinvel_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(sinvel_M, &sinvel_M->Timing.tArray[0]);
  sinvel_M->Timing.stepSize0 = 0.05;

  /* block I/O */
  (void) memset((static_cast<void *>(&sinvel_B)), 0,
                sizeof(B_sinvel_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&sinvel_DW), 0,
                sizeof(DW_sinvel_T));

  {
    char_T tmp[9];
    char_T tmp_0[8];
    int32_T i;
    static const char_T tmp_1[8] = { 's', 't', 'r', 'A', 'n', 'g', 'l', 'e' };

    static const char_T tmp_2[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    /* Start for MATLABSystem: '<Root>/Steering angle' */
    sinvel_DW.obj.matlabCodegenIsDeleted = false;
    sinvel_DW.objisempty_h = true;
    sinvel_DW.obj.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[8] = '\x00';
    ParamGet_sinvel_92.initialize(tmp);
    ParamGet_sinvel_92.initialize_error_codes(0, 1, 2, 3);
    ParamGet_sinvel_92.set_initial_value(0.0);
    sinvel_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Steering angle' */

    /* Start for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
    /* Start for MATLABSystem: '<S2>/SinkBlock' */
    sinvel_DW.obj_m.matlabCodegenIsDeleted = false;
    sinvel_DW.objisempty = true;
    sinvel_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      tmp_0[i] = tmp_2[i];
    }

    tmp_0[7] = '\x00';
    Pub_sinvel_27.createPublisher(tmp_0, 1);
    sinvel_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish for Leader Vel' */
  }
}

/* Model terminate function */
void sinvel_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Steering angle' */
  matlabCodegenHandle_matlabCodeg(&sinvel_DW.obj);

  /* Terminate for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
  /* Terminate for MATLABSystem: '<S2>/SinkBlock' */
  matlabCodegenHandle_matlabCod_o(&sinvel_DW.obj_m);

  /* End of Terminate for SubSystem: '<Root>/Publish for Leader Vel' */
}
