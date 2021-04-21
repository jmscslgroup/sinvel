/*
 * sinvel_data.cpp
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

/* Block parameters (default storage) */
P_sinvel_T sinvel_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  {
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    },                                 /* Linear */

    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    }                                  /* Angular */
  },

  /* Expression: 8.0
   * Referenced by: '<Root>/Sine Wave'
   */
  8.0,

  /* Expression: 8.0
   * Referenced by: '<Root>/Sine Wave'
   */
  8.0,

  /* Expression: 0.25
   * Referenced by: '<Root>/Sine Wave'
   */
  0.25,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0
};
