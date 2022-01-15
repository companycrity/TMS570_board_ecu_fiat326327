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

#define D_NUMOFTUNSETS_CNT_U16 	8U
#define D_NUMOFPERS_CNT_U16 	2U

extern CONST(float32, CAL_CONST) k_HwTrqResetThresh_Kph_f32;
extern CONST(float32, CAL_CONST) k_VehSpdResetThresh_Kph_f32;
extern CONST(uint8, CAL_CONST) k_ProxiConfigTunSet_Cnt_u08[8][3];

extern CONST(float32, CAL_CONST) k_SrvcHwTrqLimit_HwNm_f32;
extern CONST(float32, CAL_CONST) k_SrvcVehSpdLimit_Kph_f32;

#endif
