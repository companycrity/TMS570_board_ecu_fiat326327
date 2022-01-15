/*****************************************************************************
* Copyright 2013 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Jared Julien
*****************************************************************************/
/* Version Control:
 * Date Created:      Tue Jul 9 12:17:00 2013
 * %version:          2 %
 * %derived_by:       nzt9hv %
 * %date_modified:    Fri Aug 23 15:04:35 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 */

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Std_Types.h"

/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 5/12/2014 9:53:57 AM *******************/
/**************** Digitial Column Position Sensor I2C - Rev 6 ****************/


extern CONST(float32, CAL_CONST) k_ColAngSenseLPFFc_Hz_f32;
extern CONST(float32, CAL_CONST) k_SpurAngSenseLPFFc_Hz_f32;
extern CONST(boolean, CAL_CONST) k_SelectFromColumn_Cnt_lgc;
extern CONST(float32, CAL_CONST) k_StepDetect_Deg_f32;
extern CONST(float32, CAL_CONST) k_VernCorrErrorThresh_Deg_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_VernCorrErrorDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_SkipStepErrDiag_Cnt_str;
extern CONST(float32, CAL_CONST) k_VernOORangeThresh_Deg_f32;
extern CONST(DiagSettings_Str, CAL_CONST) k_SenseDetErrDiag_Cnt_str;
extern CONST(DiagSettings_Str, CAL_CONST) k_SenseParityErrDiag_Cnt_str;
extern CONST(uint8, CAL_CONST) k_ColSensorI2CAddress_Cnt_u08;
extern CONST(uint8, CAL_CONST) k_SpurSensorI2CAddress_Cnt_u08;
extern CONST(float32, CAL_CONST) k_I2CHWInitTransactionTime_Sec_f32;
#endif
