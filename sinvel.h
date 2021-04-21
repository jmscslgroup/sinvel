/*
 * sinvel.h
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

#ifndef RTW_HEADER_sinvel_h_
#define RTW_HEADER_sinvel_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "sinvel_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T SineWave;                     /* '<Root>/Sine Wave' */
} B_sinvel_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ros_slros_internal_block_GetP_T obj; /* '<Root>/Steering angle' */
  ros_slros_internal_block_Publ_T obj_m;/* '<S2>/SinkBlock' */
  boolean_T objisempty;                /* '<S2>/SinkBlock' */
  boolean_T objisempty_h;              /* '<Root>/Steering angle' */
} DW_sinvel_T;

/* Parameters (default storage) */
struct P_sinvel_T_ {
  SL_Bus_sinvel_geometry_msgs_Twist Constant_Value;/* Computed Parameter: Constant_Value
                                                    * Referenced by: '<S1>/Constant'
                                                    */
  real_T SineWave_Amp;                 /* Expression: 8.0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 8.0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 0.25
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_sinvel_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_sinvel_T sinvel_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern B_sinvel_T sinvel_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_sinvel_T sinvel_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void sinvel_initialize(void);
  extern void sinvel_step(void);
  extern void sinvel_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_sinvel_T *const sinvel_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'sinvel'
 * '<S1>'   : 'sinvel/Blank Message Leader'
 * '<S2>'   : 'sinvel/Publish for Leader Vel'
 */
#endif                                 /* RTW_HEADER_sinvel_h_ */
