/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EPS_DiagSrvcs_XCP.h file
* Module Description: Common Manufacturing Program Interface for XCP and ISO services
* Product           : Gen II Plus - EA3.0
* Author            : Kevin Smith
*
* Notes:
* This file contains configurations for the XCP services.
*
*****************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/* Version Control:
 * Date Created:      Mon Apr 12 10:20:00 2012
 * %version:          12 %
 * %derived_by:       lz4p8n %
 * %date_modified:    Thu Aug 29 16:55:37 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 06/06/12     1       KS      Initial Component Release
 * 09/28/12     2       Jared   Updates for changes to RID function structure
 * 01/14/13     3       LN      Added Static DAQ 0107                                                           6931
 * 03/16/13     4       VK      Added Static DAQ 0108, 0109                                                     7625
 * 03/16/13     5       VK      Added Static DAQ 010A, 010B                                                     7625
 * 03/18/13     6       Jared   Added function prototypes for new DAQs                                          7628
 * 05/23/13     7       KJS     Anomaly correction for limiting DAQ ODT lengths and QAC corrections
 * 08/29/13     8       JWJ     Added XCP write function and code to handle calling write block after download  9610
 * 04/10/14		9		SP		Added Static DAQ 0x0C															11736
 * 08/29/14		10		KJS		Added static DAQ 0x0D															12406
 * 11/12/14     11      JWJ     Added static DAQs 0x10E and 0x10F                                               12664
 * 11/19/14		13		SP		Corrected static DAQ 0x0D													  	12733
 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include area >>		                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "EPS_DiagSrvcs_SrvcLUTbl.h"
#include "EPS_DiagSrvcs_XCP.Interface.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include area >>   		      		    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#ifndef EPS_DIAGSRVCS_XCP_H
#define EPS_DIAGSRVCS_XCP_H

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom include area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom include area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of custom define area >>   		  	    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of custom define area >>	                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, EPSXCPDIAGSRVCS_CODE) ProcessXCPPID(VAR(uint8, EPSDIAGSRVCS_VAR) Size_Cnt_T_u08);

/* Function Prototypes */

/* User XCP Services */
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpUserDynamicDaqSetup( VAR(uint8, EPSDIAGSRVCS_VAR) Prescale_Uls_T_u08,
																 VAR(uint8, EPSDIAGSRVCS_VAR) Event_Cnt_T_u08,
																 P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08);

STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpUserStaticDaqSetup( VAR(uint8, EPSDIAGSRVCS_VAR) Prescale_Uls_T_u08,
																 VAR(uint8, EPSDIAGSRVCS_VAR) Event_Cnt_T_u08,
																 VAR(uint8, EPSDIAGSRVCS_VAR) PreBltDaqNum_T_Cnt_u08);

STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpUserRoutineCmd(VAR(uint16, EPSDIAGSRVCS_VAR) SysCmdID_Cnt_T_u16,
														 P2VAR(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08);

STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpUserPIDSrvc(VAR(uint16, EPSDIAGSRVCS_VAR) PID_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) SrvcType_Cnt_T_u08,
														 P2CONST(uint8, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_Param_Uls_T_u08);

/* User XCP Services Supporting Functions */
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpPIDReadResp(VAR(uint16, EPSDIAGSRVCS_VAR) PIDSize_Cnt_T_u16, P2CONST(uint32, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) ReadValue_Cnt_T_ptr,
														VAR(uint8, EPSDIAGSRVCS_VAR) Type_Cnt_T_u08);

STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpErrorHandler(VAR(uint8, EPSDIAGSRVCS_VAR) ErrorCode_Uls_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpODTEntrySetup(	P2CONST(uint16, EPSDIAGSRVCS_VAR, EPSDIAGSRVCS_VAR) t_PIDs_Uls_T_u16,
															VAR(uint16, EPSDIAGSRVCS_VAR) PIDCount_Cnt_T_u08,
															VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);

STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) XcpISOErrorConverter(VAR(uint8, EPSDIAGSRVCS_VAR) ErrorCode_Cnt_T_u08);

/* Static DAQ functions */
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_MtrLearning(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_TrqRatio(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_TrqSweep(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_StaticEffnLongSweep(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_RotorStiffness(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_Noise(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_Position(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_TurnsCounterSPIData(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_MotorCurrent(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_AnlgTrqSnsrInfo(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_StaticEffnLongSweepAnalog(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_DigTrqAndPosition(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_VernErrAndPositionAndTrq(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_Position2(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);
STATIC FUNC(uint8, EPSXCPDIAGSRVCS_CODE) StaticDAQ_ManufSrvc_Torque(VAR(uint16, EPSDIAGSRVCS_VAR) PIDidx_Cnt_T_u16, VAR(uint8, EPSDIAGSRVCS_VAR) DAQNum_Cnt_T_u08);

#endif /*EPS_DIAGSRVCS_XCP_H*/
