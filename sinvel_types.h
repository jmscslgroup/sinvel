/*
 * sinvel_types.h
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

#ifndef RTW_HEADER_sinvel_types_h_
#define RTW_HEADER_sinvel_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_sinvel_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Twist_

typedef struct {
  SL_Bus_sinvel_geometry_msgs_Vector3 Linear;
  SL_Bus_sinvel_geometry_msgs_Vector3 Angular;
} SL_Bus_sinvel_geometry_msgs_Twist;

#endif

#ifndef struct_tag_KSdGoEc2IyOHz4CLi4rcCD
#define struct_tag_KSdGoEc2IyOHz4CLi4rcCD

struct tag_KSdGoEc2IyOHz4CLi4rcCD
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_KSdGoEc2IyOHz4CLi4rcCD*/

#ifndef typedef_e_robotics_slcore_internal_bl_T
#define typedef_e_robotics_slcore_internal_bl_T

typedef struct tag_KSdGoEc2IyOHz4CLi4rcCD e_robotics_slcore_internal_bl_T;

#endif                               /*typedef_e_robotics_slcore_internal_bl_T*/

#ifndef struct_tag_PzhaB0v2Sx4ikuHWZx5WUB
#define struct_tag_PzhaB0v2Sx4ikuHWZx5WUB

struct tag_PzhaB0v2Sx4ikuHWZx5WUB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                 /*struct_tag_PzhaB0v2Sx4ikuHWZx5WUB*/

#ifndef typedef_ros_slros_internal_block_GetP_T
#define typedef_ros_slros_internal_block_GetP_T

typedef struct tag_PzhaB0v2Sx4ikuHWZx5WUB ros_slros_internal_block_GetP_T;

#endif                               /*typedef_ros_slros_internal_block_GetP_T*/

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_rkSooZHJZnr3Dpfu1LNqfH*/

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                               /*typedef_ros_slros_internal_block_Publ_T*/

/* Parameters (default storage) */
typedef struct P_sinvel_T_ P_sinvel_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_sinvel_T RT_MODEL_sinvel_T;

#endif                                 /* RTW_HEADER_sinvel_types_h_ */
