/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          EA3#12 %
 * %derived_by:       nzdx8v %
 * %date_modified:    Fri Dec 13 12:52:16 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 */

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Rte_Type.h"
#include "fixmath.h"
#include "filters.h"
//#include "Ap_DiagMgr_Types.h"
//#include "Metrics.h"

#define D_NUMOFTUNSETS_CNT_U16 	8U
#define D_NUMOFPERS_CNT_U16 	2U

extern CONST(DiagSettings_Str, CAL_CONST) k_SlowADCDiag_Cnt_str;
extern CONST(float32, CAL_CONST) k_TempSensorOffset_Volt_f32;
extern CONST(float32, CAL_CONST) k_TempSensorScale_Uls_f32;
extern CONST(float32, CAL_CONST) k_VbattScale_Uls_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_VrefDiag_Cnt_str;
extern CONST(float32, CAL_CONST) k_VrefMax_Volt_f32;
extern CONST(float32, CAL_CONST) k_VrefMin_Volt_f32;
extern CONST(float32, CAL_CONST) k_VrefScale_Uls_f32;
extern CONST(float32, CAL_CONST) k_VswitchScale_Uls_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_SlowADCValidDiag_Cnt_str;
extern CONST(uint32, CAL_CONST) k_ReadAdcWaitTimeout_uS_u32;

#endif
