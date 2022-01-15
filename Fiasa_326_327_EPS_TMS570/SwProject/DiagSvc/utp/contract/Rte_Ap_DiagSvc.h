/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_DiagSvc.h
 *     Workspace:  C:/Users/mzjphh/Desktop/Fiasa_326_327_05.01.00/Fiasa_326_327_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *     SW-C Type:  Ap_DiagSvc
 *  Generated at:  Mon Mar  6 13:53:49 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_DiagSvc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_DIAGSVC_H
# define _RTE_AP_DIAGSVC_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_DiagSvc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CityModeSts_Cnt_lgc (FALSE)
# define Rte_InitValue_CityUserEnableDisable_Cnt_enum (0U)
# define Rte_InitValue_CmdIgnFailSts_Cnt_u8 (0U)
# define Rte_InitValue_CmdIgnSts_Cnt_u16 (0U)
# define Rte_InitValue_DesiredTunSet_Cnt_u16 (0U)
# define Rte_InitValue_DisableFailSafeReaction_Cnt_lgc (FALSE)
# define Rte_InitValue_ElectricStrFailSts_Cnt_lgc (FALSE)
# define Rte_InitValue_HwPos_HwDeg_f32 (0.0F)
# define Rte_InitValue_HwTrq_HwNm_f32 (0.0F)
# define Rte_InitValue_IgnitionPreStart_Cnt_lgc (FALSE)
# define Rte_InitValue_MEC_Cnt_enum (0U)
# define Rte_InitValue_OperationalModeSts_Cnt_u16 (0U)
# define Rte_InitValue_PowerLatchTimeDID191D_Cnt_u16 (0U)
# define Rte_InitValue_ProxiValid_Cnt_lgc (FALSE)
# define Rte_InitValue_StartStopLogicEnable_Cnt_lgc (FALSE)
# define Rte_InitValue_Temperature_DegC_f32_DegC_f32 (0.0F)
# define Rte_InitValue_TotalOdometerIPC_Cnt_u32 (0U)
# define Rte_InitValue_Vecu_Volt_f32_Volt_f32 (5.0F)
# define Rte_InitValue_VehSpd_Kph_f32 (0.0F)
# define Rte_InitValue_VehicleSpeedValid_Cnt_lgc (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_CityModeSts_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_CmdIgnFailSts_Cnt_u8(P2VAR(DT_CmdIgn_FailSts, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_CmdIgnSts_Cnt_u16(P2VAR(DT_CmdIgnSts, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_ElectricStrFailSts_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_HwPos_HwDeg_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_HwTrq_HwNm_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_MEC_Cnt_enum(P2VAR(ManufModeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_OperationalModeSts_Cnt_u16(P2VAR(DT_OperationalModeSts, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_PowerLatchTimeDID191D_Cnt_u16(P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_Temperature_DegC_f32_DegC_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_TotalOdometerIPC_Cnt_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_Vecu_Volt_f32_Volt_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_VehSpd_Kph_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagSvc_VehicleSpeedValid_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_DiagSvc_CityUserEnableDisable_Cnt_enum(CityUserEnableDisable data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Ap_DiagSvc_DisableFailSafeReaction_Cnt_lgc(Boolean data);
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_DiagSvc_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_AbsHwPos_SCom_CustClrTrim(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_AbsHwPos_SCom_CustSetTrim(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_AppSwFingerPrint_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_AppSwFingerPrint_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_AppSwFingerPrint_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_BootSwFingerPrint_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_BootSwFingerPrint_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_BootSwFingerPrint_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_CalSwFingerPrint_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_CalSwFingerPrint_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_CalSwFingerPrint_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_DCMServices_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) SecLevel);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_DigColPs_SCom_CustClearTrim(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_DigColPs_SCom_CustSetTrim(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECULifeTimeMins_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECULifeTimeMins_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECULifeTimeMins_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECULifeTimeMins_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECULifeTimeMins_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSerialNumberData_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSerialNumberData_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSerialNumberData_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSerialNumberData_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSerialNumberData_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSparePartNo_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSparePartNo_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSparePartNo_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ECUSparePartNo_SetRamBlockStatus(Boolean RamBlockStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EOLConfiguration_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EOLConfiguration_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EOLConfiguration_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EOLConfiguration_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EOLConfiguration_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EraseRoutineStatus_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EraseRoutineStatus_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_EraseRoutineStatus_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_LrnEOT_Scom_ResetEOT(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_NxtrDiagMgr_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) NTCFailed_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_OdometerFlashProg_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_OdometerFlashProg_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_OdometerFlashProg_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProgrammingAttemptCounter_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProgrammingAttemptCounter_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProgrammingAttemptCounter_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProgrammingStatus_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProgrammingStatus_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProgrammingStatus_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiConfiguration_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiConfiguration_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiConfiguration_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiConfiguration_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiConfiguration_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiCounter_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiCounter_ReadBlock(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiCounter_ReadBlock(P2VAR(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DstPtr);
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiCounter_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_ProxiCounter_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, P2VAR(UInt32, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ElapsedTime);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_SystemTime_GetSystemTime_mS_u32(P2VAR(UInt32, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) CurrentTime);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_TotalOdometer_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_TotalOdometer_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_TuningSetSelect_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_TuningSetSelect_InvalidateNvBlock(void);
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_TuningSetSelect_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_TuningSetSelect_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_AP_DIAGSVC_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagSvc_VehDyn_SCom_ResetCenter(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_DiagSvc_Init1_MEC_Cnt_enum() \
  (Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_MEC_Cnt_enum->value)

# define Rte_IWrite_DiagSvc_Init1_DesiredTunSet_Cnt_u16(data) \
  ( \
  Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_DesiredTunSet_Cnt_u16->value = (data) \
  )

# define Rte_IWriteRef_DiagSvc_Init1_DesiredTunSet_Cnt_u16() \
  (&Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_DesiredTunSet_Cnt_u16->value)

# define Rte_IWrite_DiagSvc_Init1_IgnitionPreStart_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_IgnitionPreStart_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_DiagSvc_Init1_IgnitionPreStart_Cnt_lgc() \
  (&Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_IgnitionPreStart_Cnt_lgc->value)

# define Rte_IWrite_DiagSvc_Init1_ProxiValid_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_ProxiValid_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_DiagSvc_Init1_ProxiValid_Cnt_lgc() \
  (&Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_ProxiValid_Cnt_lgc->value)

# define Rte_IWrite_DiagSvc_Init1_StartStopLogicEnable_Cnt_lgc(data) \
  ( \
  Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_StartStopLogicEnable_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_DiagSvc_Init1_StartStopLogicEnable_Cnt_lgc() \
  (&Rte_Inst_Ap_DiagSvc->DiagSvc_Init1_StartStopLogicEnable_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CityModeSts_Cnt_lgc Rte_Read_Ap_DiagSvc_CityModeSts_Cnt_lgc
# define Rte_Read_CmdIgnFailSts_Cnt_u8 Rte_Read_Ap_DiagSvc_CmdIgnFailSts_Cnt_u8
# define Rte_Read_CmdIgnSts_Cnt_u16 Rte_Read_Ap_DiagSvc_CmdIgnSts_Cnt_u16
# define Rte_Read_ElectricStrFailSts_Cnt_lgc Rte_Read_Ap_DiagSvc_ElectricStrFailSts_Cnt_lgc
# define Rte_Read_HwPos_HwDeg_f32 Rte_Read_Ap_DiagSvc_HwPos_HwDeg_f32
# define Rte_Read_HwTrq_HwNm_f32 Rte_Read_Ap_DiagSvc_HwTrq_HwNm_f32
# define Rte_Read_MEC_Cnt_enum Rte_Read_Ap_DiagSvc_MEC_Cnt_enum
# define Rte_Read_OperationalModeSts_Cnt_u16 Rte_Read_Ap_DiagSvc_OperationalModeSts_Cnt_u16
# define Rte_Read_PowerLatchTimeDID191D_Cnt_u16 Rte_Read_Ap_DiagSvc_PowerLatchTimeDID191D_Cnt_u16
# define Rte_Read_Temperature_DegC_f32_DegC_f32 Rte_Read_Ap_DiagSvc_Temperature_DegC_f32_DegC_f32
# define Rte_Read_TotalOdometerIPC_Cnt_u32 Rte_Read_Ap_DiagSvc_TotalOdometerIPC_Cnt_u32
# define Rte_Read_Vecu_Volt_f32_Volt_f32 Rte_Read_Ap_DiagSvc_Vecu_Volt_f32_Volt_f32
# define Rte_Read_VehSpd_Kph_f32 Rte_Read_Ap_DiagSvc_VehSpd_Kph_f32
# define Rte_Read_VehicleSpeedValid_Cnt_lgc Rte_Read_Ap_DiagSvc_VehicleSpeedValid_Cnt_lgc


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CityUserEnableDisable_Cnt_enum Rte_Write_Ap_DiagSvc_CityUserEnableDisable_Cnt_enum
# define Rte_Write_DisableFailSafeReaction_Cnt_lgc Rte_Write_Ap_DiagSvc_DisableFailSafeReaction_Cnt_lgc


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_DiagSvc_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_AbsHwPos_SCom_CustClrTrim Rte_Call_Ap_DiagSvc_AbsHwPos_SCom_CustClrTrim
# define Rte_Call_AbsHwPos_SCom_CustSetTrim Rte_Call_Ap_DiagSvc_AbsHwPos_SCom_CustSetTrim
# define Rte_Call_AppSwFingerPrint_GetErrorStatus Rte_Call_Ap_DiagSvc_AppSwFingerPrint_GetErrorStatus
# define Rte_Call_AppSwFingerPrint_ReadBlock Rte_Call_Ap_DiagSvc_AppSwFingerPrint_ReadBlock
# define Rte_Call_BootSwFingerPrint_GetErrorStatus Rte_Call_Ap_DiagSvc_BootSwFingerPrint_GetErrorStatus
# define Rte_Call_BootSwFingerPrint_ReadBlock Rte_Call_Ap_DiagSvc_BootSwFingerPrint_ReadBlock
# define Rte_Call_CalSwFingerPrint_GetErrorStatus Rte_Call_Ap_DiagSvc_CalSwFingerPrint_GetErrorStatus
# define Rte_Call_CalSwFingerPrint_ReadBlock Rte_Call_Ap_DiagSvc_CalSwFingerPrint_ReadBlock
# define Rte_Call_DCMServices_GetSecurityLevel Rte_Call_Ap_DiagSvc_DCMServices_GetSecurityLevel
# define Rte_Call_DigColPs_SCom_CustClearTrim Rte_Call_Ap_DiagSvc_DigColPs_SCom_CustClearTrim
# define Rte_Call_DigColPs_SCom_CustSetTrim Rte_Call_Ap_DiagSvc_DigColPs_SCom_CustSetTrim
# define Rte_Call_ECULifeTimeMins_GetErrorStatus Rte_Call_Ap_DiagSvc_ECULifeTimeMins_GetErrorStatus
# define Rte_Call_ECULifeTimeMins_ReadBlock Rte_Call_Ap_DiagSvc_ECULifeTimeMins_ReadBlock
# define Rte_Call_ECULifeTimeMins_WriteBlock Rte_Call_Ap_DiagSvc_ECULifeTimeMins_WriteBlock
# define Rte_Call_ECUSerialNumberData_GetErrorStatus Rte_Call_Ap_DiagSvc_ECUSerialNumberData_GetErrorStatus
# define Rte_Call_ECUSerialNumberData_ReadBlock Rte_Call_Ap_DiagSvc_ECUSerialNumberData_ReadBlock
# define Rte_Call_ECUSerialNumberData_WriteBlock Rte_Call_Ap_DiagSvc_ECUSerialNumberData_WriteBlock
# define Rte_Call_ECUSparePartNo_GetErrorStatus Rte_Call_Ap_DiagSvc_ECUSparePartNo_GetErrorStatus
# define Rte_Call_ECUSparePartNo_ReadBlock Rte_Call_Ap_DiagSvc_ECUSparePartNo_ReadBlock
# define Rte_Call_ECUSparePartNo_SetRamBlockStatus Rte_Call_Ap_DiagSvc_ECUSparePartNo_SetRamBlockStatus
# define Rte_Call_EOLConfiguration_GetErrorStatus Rte_Call_Ap_DiagSvc_EOLConfiguration_GetErrorStatus
# define Rte_Call_EOLConfiguration_ReadBlock Rte_Call_Ap_DiagSvc_EOLConfiguration_ReadBlock
# define Rte_Call_EOLConfiguration_WriteBlock Rte_Call_Ap_DiagSvc_EOLConfiguration_WriteBlock
# define Rte_Call_EraseRoutineStatus_GetErrorStatus Rte_Call_Ap_DiagSvc_EraseRoutineStatus_GetErrorStatus
# define Rte_Call_EraseRoutineStatus_ReadBlock Rte_Call_Ap_DiagSvc_EraseRoutineStatus_ReadBlock
# define Rte_Call_FirstDTCDetectMins_GetErrorStatus Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_GetErrorStatus
# define Rte_Call_FirstDTCDetectMins_ReadBlock Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_ReadBlock
# define Rte_Call_FirstDTCDetectMins_WriteBlock Rte_Call_Ap_DiagSvc_FirstDTCDetectMins_WriteBlock
# define Rte_Call_FirstDTCDetectSecs_GetErrorStatus Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_GetErrorStatus
# define Rte_Call_FirstDTCDetectSecs_ReadBlock Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_ReadBlock
# define Rte_Call_FirstDTCDetectSecs_WriteBlock Rte_Call_Ap_DiagSvc_FirstDTCDetectSecs_WriteBlock
# define Rte_Call_LrnEOT_Scom_ResetEOT Rte_Call_Ap_DiagSvc_LrnEOT_Scom_ResetEOT
# define Rte_Call_NxtrDiagMgr_GetNTCFailed Rte_Call_Ap_DiagSvc_NxtrDiagMgr_GetNTCFailed
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Ap_DiagSvc_NxtrDiagMgr_SetNTCStatus
# define Rte_Call_OdometerFlashProg_GetErrorStatus Rte_Call_Ap_DiagSvc_OdometerFlashProg_GetErrorStatus
# define Rte_Call_OdometerFlashProg_ReadBlock Rte_Call_Ap_DiagSvc_OdometerFlashProg_ReadBlock
# define Rte_Call_ProgrammingAttemptCounter_GetErrorStatus Rte_Call_Ap_DiagSvc_ProgrammingAttemptCounter_GetErrorStatus
# define Rte_Call_ProgrammingAttemptCounter_ReadBlock Rte_Call_Ap_DiagSvc_ProgrammingAttemptCounter_ReadBlock
# define Rte_Call_ProgrammingStatus_GetErrorStatus Rte_Call_Ap_DiagSvc_ProgrammingStatus_GetErrorStatus
# define Rte_Call_ProgrammingStatus_ReadBlock Rte_Call_Ap_DiagSvc_ProgrammingStatus_ReadBlock
# define Rte_Call_ProxiConfiguration_GetErrorStatus Rte_Call_Ap_DiagSvc_ProxiConfiguration_GetErrorStatus
# define Rte_Call_ProxiConfiguration_ReadBlock Rte_Call_Ap_DiagSvc_ProxiConfiguration_ReadBlock
# define Rte_Call_ProxiConfiguration_WriteBlock Rte_Call_Ap_DiagSvc_ProxiConfiguration_WriteBlock
# define Rte_Call_ProxiCounter_GetErrorStatus Rte_Call_Ap_DiagSvc_ProxiCounter_GetErrorStatus
# define Rte_Call_ProxiCounter_ReadBlock Rte_Call_Ap_DiagSvc_ProxiCounter_ReadBlock
# define Rte_Call_ProxiCounter_WriteBlock Rte_Call_Ap_DiagSvc_ProxiCounter_WriteBlock
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16 Rte_Call_Ap_DiagSvc_SystemTime_DtrmnElapsedTime_mS_u16
# define Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32 Rte_Call_Ap_DiagSvc_SystemTime_DtrmnElapsedTime_mS_u32
# define Rte_Call_SystemTime_GetSystemTime_mS_u32 Rte_Call_Ap_DiagSvc_SystemTime_GetSystemTime_mS_u32
# define Rte_Call_TotalOdometer_WriteBlock Rte_Call_Ap_DiagSvc_TotalOdometer_WriteBlock
# define Rte_Call_TuningSetSelect_GetErrorStatus Rte_Call_Ap_DiagSvc_TuningSetSelect_GetErrorStatus
# define Rte_Call_TuningSetSelect_InvalidateNvBlock Rte_Call_Ap_DiagSvc_TuningSetSelect_InvalidateNvBlock
# define Rte_Call_TuningSetSelect_WriteBlock Rte_Call_Ap_DiagSvc_TuningSetSelect_WriteBlock
# define Rte_Call_VehDyn_SCom_ResetCenter Rte_Call_Ap_DiagSvc_VehDyn_SCom_ResetCenter


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_ECULifeTimeMinsData() (Rte_Inst_Ap_DiagSvc->Pim_ECULifeTimeMinsData)

# define Rte_Pim_FirstDTCDetectMinsData() (Rte_Inst_Ap_DiagSvc->Pim_FirstDTCDetectMinsData)

# define Rte_Pim_FirstDTCDetectSecsData() (Rte_Inst_Ap_DiagSvc->Pim_FirstDTCDetectSecsData)

# define Rte_Pim_OdometerFlashProgData() (Rte_Inst_Ap_DiagSvc->Pim_OdometerFlashProgData)

# define Rte_Pim_TotalOdometerData() (Rte_Inst_Ap_DiagSvc->Pim_TotalOdometerData)

# define Rte_Pim_TuningSetSelectData() (Rte_Inst_Ap_DiagSvc->Pim_TuningSetSelectData)

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_AppSwFingerPrintData() (*Rte_Inst_Ap_DiagSvc->Pim_AppSwFingerPrintData)
# else
#  define Rte_Pim_AppSwFingerPrintData() (Rte_Inst_Ap_DiagSvc->Pim_AppSwFingerPrintData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_BootSwFingerPrintData() (*Rte_Inst_Ap_DiagSvc->Pim_BootSwFingerPrintData)
# else
#  define Rte_Pim_BootSwFingerPrintData() (Rte_Inst_Ap_DiagSvc->Pim_BootSwFingerPrintData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_CalSwFingerPrintData() (*Rte_Inst_Ap_DiagSvc->Pim_CalSwFingerPrintData)
# else
#  define Rte_Pim_CalSwFingerPrintData() (Rte_Inst_Ap_DiagSvc->Pim_CalSwFingerPrintData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ECUSerialNumberData() (*Rte_Inst_Ap_DiagSvc->Pim_ECUSerialNumberData)
# else
#  define Rte_Pim_ECUSerialNumberData() (Rte_Inst_Ap_DiagSvc->Pim_ECUSerialNumberData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ECUSparePartNoData() (*Rte_Inst_Ap_DiagSvc->Pim_ECUSparePartNoData)
# else
#  define Rte_Pim_ECUSparePartNoData() (Rte_Inst_Ap_DiagSvc->Pim_ECUSparePartNoData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_EOLConfigurationData() (*Rte_Inst_Ap_DiagSvc->Pim_EOLConfigurationData)
# else
#  define Rte_Pim_EOLConfigurationData() (Rte_Inst_Ap_DiagSvc->Pim_EOLConfigurationData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_EraseRoutineStatusData() (*Rte_Inst_Ap_DiagSvc->Pim_EraseRoutineStatusData)
# else
#  define Rte_Pim_EraseRoutineStatusData() (Rte_Inst_Ap_DiagSvc->Pim_EraseRoutineStatusData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ProgrammingAttemptCounterData() (*Rte_Inst_Ap_DiagSvc->Pim_ProgrammingAttemptCounterData)
# else
#  define Rte_Pim_ProgrammingAttemptCounterData() (Rte_Inst_Ap_DiagSvc->Pim_ProgrammingAttemptCounterData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ProgrammingStatusData() (*Rte_Inst_Ap_DiagSvc->Pim_ProgrammingStatusData)
# else
#  define Rte_Pim_ProgrammingStatusData() (Rte_Inst_Ap_DiagSvc->Pim_ProgrammingStatusData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ProxiConfigurationData() (*Rte_Inst_Ap_DiagSvc->Pim_ProxiConfigurationData)
# else
#  define Rte_Pim_ProxiConfigurationData() (Rte_Inst_Ap_DiagSvc->Pim_ProxiConfigurationData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_ProxiCounterData() (*Rte_Inst_Ap_DiagSvc->Pim_ProxiCounterData)
# else
#  define Rte_Pim_ProxiCounterData() (Rte_Inst_Ap_DiagSvc->Pim_ProxiCounterData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_VINCurrentData() (*Rte_Inst_Ap_DiagSvc->Pim_VINCurrentData)
# else
#  define Rte_Pim_VINCurrentData() (Rte_Inst_Ap_DiagSvc->Pim_VINCurrentData)
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_VINOriginalData() (*Rte_Inst_Ap_DiagSvc->Pim_VINOriginalData)
# else
#  define Rte_Pim_VINOriginalData() (Rte_Inst_Ap_DiagSvc->Pim_VINOriginalData)
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   UInt32 *Rte_Pim_ECULifeTimeMinsData(void)
 *   UInt32 *Rte_Pim_FirstDTCDetectMinsData(void)
 *   UInt16 *Rte_Pim_FirstDTCDetectSecsData(void)
 *   UInt16 *Rte_Pim_OdometerFlashProgData(void)
 *   UInt16 *Rte_Pim_TotalOdometerData(void)
 *   UInt16 *Rte_Pim_TuningSetSelectData(void)
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_AppSwFingerPrintData(void)
# else
 *   Dcm_14Byte_Type *Rte_Pim_AppSwFingerPrintData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_BootSwFingerPrintData(void)
# else
 *   Dcm_14Byte_Type *Rte_Pim_BootSwFingerPrintData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_CalSwFingerPrintData(void)
# else
 *   Dcm_14Byte_Type *Rte_Pim_CalSwFingerPrintData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_ECUSerialNumberData(void)
# else
 *   Dcm_16Byte_Type *Rte_Pim_ECUSerialNumberData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_ECUSparePartNoData(void)
# else
 *   Dcm_11Byte_Type *Rte_Pim_ECUSparePartNoData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_EOLConfigurationData(void)
# else
 *   Dcm_9Byte_Type *Rte_Pim_EOLConfigurationData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_EraseRoutineStatusData(void)
# else
 *   Dcm_1Byte_Type *Rte_Pim_EraseRoutineStatusData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_ProgrammingAttemptCounterData(void)
# else
 *   Dcm_8Byte_Type *Rte_Pim_ProgrammingAttemptCounterData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_ProgrammingStatusData(void)
# else
 *   Dcm_1Byte_Type *Rte_Pim_ProgrammingStatusData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_ProxiConfigurationData(void)
# else
 *   Dcm_255Byte_Type *Rte_Pim_ProxiConfigurationData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_ProxiCounterData(void)
# else
 *   Dcm_1Byte_Type *Rte_Pim_ProxiCounterData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_VINCurrentData(void)
# else
 *   Dcm_17Byte_Type *Rte_Pim_VINCurrentData(void)
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   UInt8 *Rte_Pim_VINOriginalData(void)
# else
 *   Dcm_17Byte_Type *Rte_Pim_VINOriginalData(void)
# endif
 *
 *********************************************************************************************************************/


# define RTE_START_SEC_AP_DIAGSVC_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ComControlService_CheckCondition
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CheckCondition> of PortPrototype <ComControlService>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType ComControlService_CheckCondition(UInt8 subNetId, UInt8 msgType, Boolean rxState, Boolean txState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ComControlService_E_COM_CTRL_NOT_ACCEPTED
 *   RTE_E_ComControlService_E_PENDING
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) ComControlService_CheckCondition(UInt8 subNetId, UInt8 msgType, Boolean rxState, Boolean txState);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagSvc_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   ManufModeType Rte_IRead_DiagSvc_Init1_MEC_Cnt_enum(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_DiagSvc_Init1_DesiredTunSet_Cnt_u16(UInt16 data)
 *   UInt16 *Rte_IWriteRef_DiagSvc_Init1_DesiredTunSet_Cnt_u16(void)
 *   void Rte_IWrite_DiagSvc_Init1_IgnitionPreStart_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_DiagSvc_Init1_IgnitionPreStart_Cnt_lgc(void)
 *   void Rte_IWrite_DiagSvc_Init1_ProxiValid_Cnt_lgc(ProxiValid_Cnt_lgc data)
 *   ProxiValid_Cnt_lgc *Rte_IWriteRef_DiagSvc_Init1_ProxiValid_Cnt_lgc(void)
 *   void Rte_IWrite_DiagSvc_Init1_StartStopLogicEnable_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_DiagSvc_Init1_StartStopLogicEnable_Cnt_lgc(void)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, Boolean *NTCFailed_Ptr_T_lgc)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *   Std_ReturnType Rte_Call_ProxiConfiguration_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProxiConfiguration_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProxiConfiguration_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_TuningSetSelect_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGSVC_APPL_CODE) DiagSvc_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagSvc_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u16(UInt32 InitialTime, UInt16 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SystemTime_GetSystemTime_mS_u32(UInt32 *CurrentTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGSVC_APPL_CODE) DiagSvc_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagSvc_SCom_GetTuningSet
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetTuningSet> of PortPrototype <DiagSvc_SCom>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_TuningSetSelect_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagSvc_SCom_GetTuningSet(UInt8 *TuningSet_Cnt_T_u08)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGSVC_APPL_CODE) DiagSvc_SCom_GetTuningSet(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) TuningSet_Cnt_T_u08);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagSvc_SCom_SetTuningSet
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetTuningSet> of PortPrototype <DiagSvc_SCom>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MEC_Cnt_enum(ManufModeType *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_TuningSetSelect_InvalidateNvBlock(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TuningSetSelect_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TuningSetSelect_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DiagSvc_SCom_SetTuningSet(UInt8 TuningSet_Cnt_T_u08)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagSvc_SCom_E_OUTOFRANGE
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DiagSvc_SCom_SetTuningSet(UInt8 TuningSet_Cnt_T_u08);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagSvc_Trns1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <OFF> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_TotalOdometerIPC_Cnt_u32(UInt32 *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TotalOdometer_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TotalOdometer_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGSVC_APPL_CODE) DiagSvc_Trns1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0100_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0100>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_TuningSetSelect_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0100_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0100_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0100_E_NOT_OK
 *   RTE_E_DidServices_0x0100_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0100_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0100_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0100_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0x0100>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MEC_Cnt_enum(ManufModeType *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_TuningSetSelect_InvalidateNvBlock(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TuningSetSelect_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TuningSetSelect_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0100_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x0100_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0100_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0100_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0100_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0885_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0885>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwPos_HwDeg_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0885_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0885_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0885_E_NOT_OK
 *   RTE_E_DidServices_0x0885_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0885_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0885_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0ad9_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0ad9>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0ad9_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0ad9_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0ad9_E_NOT_OK
 *   RTE_E_DidServices_0x0ad9_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0ad9_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0ad9_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0ada_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0ada>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ElectricStrFailSts_Cnt_lgc(Boolean *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0ada_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0ada_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0ada_E_NOT_OK
 *   RTE_E_DidServices_0x0ada_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0ada_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0ada_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0adb_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0adb>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTrq_HwNm_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0adb_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0adb_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0adb_E_NOT_OK
 *   RTE_E_DidServices_0x0adb_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0adb_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0adb_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0adc_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0adc>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CityModeSts_Cnt_lgc(Boolean *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0adc_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0adc_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0adc_E_NOT_OK
 *   RTE_E_DidServices_0x0adc_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0adc_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0adc_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x0ade_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x0ade>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Temperature_DegC_f32_DegC_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x0ade_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x0ade_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0ade_E_NOT_OK
 *   RTE_E_DidServices_0x0ade_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0ade_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x0ade_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x1002_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x1002>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Kph_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x1002_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x1002_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x1002_E_NOT_OK
 *   RTE_E_DidServices_0x1002_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1002_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1002_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x1004_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x1004>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Vecu_Volt_f32_Volt_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x1004_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x1004_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x1004_E_NOT_OK
 *   RTE_E_DidServices_0x1004_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1004_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1004_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x1006_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x1006>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Vecu_Volt_f32_Volt_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x1006_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x1006_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x1006_E_NOT_OK
 *   RTE_E_DidServices_0x1006_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1006_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1006_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x1008_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x1008>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x1008_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x1008_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x1008_E_NOT_OK
 *   RTE_E_DidServices_0x1008_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1008_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1008_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x1009_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x1009>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x1009_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x1009_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x1009_E_NOT_OK
 *   RTE_E_DidServices_0x1009_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1009_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1009_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x102a_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x102a>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EOLConfiguration_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_EOLConfiguration_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_EOLConfiguration_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x102a_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x102a_ReadData(Dcm_9Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x102a_E_NOT_OK
 *   RTE_E_DidServices_0x102a_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x102a_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x102a_ReadData(P2VAR(Dcm_9Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x191d_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x191d>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PowerLatchTimeDID191D_Cnt_u16(UInt16 *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x191d_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x191d_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x191d_E_NOT_OK
 *   RTE_E_DidServices_0x191d_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x191d_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x191d_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x1921_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x1921>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CmdIgnFailSts_Cnt_u8(DT_CmdIgn_FailSts *data)
 *   Std_ReturnType Rte_Read_CmdIgnSts_Cnt_u16(DT_CmdIgnSts *data)
 *   Std_ReturnType Rte_Read_OperationalModeSts_Cnt_u16(DT_OperationalModeSts *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x1921_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x1921_ReadData(Dcm_9Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x1921_E_NOT_OK
 *   RTE_E_DidServices_0x1921_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1921_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x1921_ReadData(P2VAR(Dcm_9Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2001_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2001>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_TotalOdometerIPC_Cnt_u32(UInt32 *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2001_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2001_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2001_E_NOT_OK
 *   RTE_E_DidServices_0x2001_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2001_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2001_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2002_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2002>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_OdometerFlashProg_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_OdometerFlashProg_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_OdometerFlashProg_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2002_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2002_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2002_E_NOT_OK
 *   RTE_E_DidServices_0x2002_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2002_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2002_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2003_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2003>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ProgrammingAttemptCounter_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProgrammingAttemptCounter_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProgrammingAttemptCounter_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2003_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2003_ReadData(Dcm_8Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2003_E_NOT_OK
 *   RTE_E_DidServices_0x2003_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2003_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2003_ReadData(P2VAR(Dcm_8Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2008_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2008>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2008_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2008_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2008_E_NOT_OK
 *   RTE_E_DidServices_0x2008_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2008_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2008_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x200a_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x200a>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x200a_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x200a_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x200a_E_NOT_OK
 *   RTE_E_DidServices_0x200a_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x200a_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x200a_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x200b_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x200b>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FirstDTCDetectMins_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_FirstDTCDetectMins_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_FirstDTCDetectMins_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_FirstDTCDetectMins_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_FirstDTCDetectMins_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x200b_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x200b_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x200b_E_NOT_OK
 *   RTE_E_DidServices_0x200b_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x200b_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x200b_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x200c_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x200c>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FirstDTCDetectSecs_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_FirstDTCDetectSecs_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_FirstDTCDetectSecs_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_FirstDTCDetectSecs_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_FirstDTCDetectSecs_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x200c_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x200c_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x200c_E_NOT_OK
 *   RTE_E_DidServices_0x200c_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x200c_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x200c_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2010_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2010>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ProgrammingStatus_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProgrammingStatus_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProgrammingStatus_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2010_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2010_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2010_E_NOT_OK
 *   RTE_E_DidServices_0x2010_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2010_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2010_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2014_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2014>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_EraseRoutineStatus_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_EraseRoutineStatus_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_EraseRoutineStatus_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2014_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2014_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2014_E_NOT_OK
 *   RTE_E_DidServices_0x2014_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2014_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2014_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2023_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0x2023>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_EOLConfiguration_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_EOLConfiguration_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProxiConfiguration_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProxiConfiguration_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProxiCounter_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProxiCounter_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TuningSetSelect_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TuningSetSelect_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2023_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x2023_WriteData(Dcm_255Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2023_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2023_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2023_WriteData(P2VAR(Dcm_255Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x2024_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x2024>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ProxiConfiguration_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProxiConfiguration_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProxiConfiguration_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x2024_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x2024_ReadData(Dcm_6Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x2024_E_NOT_OK
 *   RTE_E_DidServices_0x2024_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2024_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x2024_ReadData(P2VAR(Dcm_6Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x292e_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0x292e>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ProxiCounter_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProxiCounter_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProxiCounter_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x292e_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0x292e_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x292e_E_NOT_OK
 *   RTE_E_DidServices_0x292e_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x292e_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x292e_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5051_ResetToDefault
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetToDefault> of PortPrototype <DidServices_0x5051>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5051_ResetToDefault(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5051_ResetToDefault(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5051_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5051_ResetToDefault(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5051_ResetToDefault(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5051_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DidServices_0x5051>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5051_ReturnControlToECU(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5051_ReturnControlToECU(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5051_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5051_ReturnControlToECU(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5051_ReturnControlToECU(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5051_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DidServices_0x5051>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5051_ShortTermAdjustment(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5051_ShortTermAdjustment(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5051_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5051_ShortTermAdjustment(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5051_ShortTermAdjustment(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5052_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DidServices_0x5052>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ProxiConfiguration_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ProxiConfiguration_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ProxiConfiguration_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5052_ReturnControlToECU(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5052_ReturnControlToECU(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5052_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5052_ReturnControlToECU(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5052_ReturnControlToECU(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5052_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DidServices_0x5052>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5052_ShortTermAdjustment(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5052_ShortTermAdjustment(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5052_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5052_ShortTermAdjustment(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5052_ShortTermAdjustment(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5aab_ResetToDefault
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetToDefault> of PortPrototype <DidServices_0x5aab>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CityUserEnableDisable_Cnt_enum(CityUserEnableDisable data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5aab_ResetToDefault(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5aab_ResetToDefault(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5aab_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5aab_ResetToDefault(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5aab_ResetToDefault(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5aab_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DidServices_0x5aab>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CityUserEnableDisable_Cnt_enum(CityUserEnableDisable data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5aab_ReturnControlToECU(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5aab_ReturnControlToECU(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5aab_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5aab_ReturnControlToECU(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5aab_ReturnControlToECU(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0x5aab_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DidServices_0x5aab>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CityUserEnableDisable_Cnt_enum(CityUserEnableDisable data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0x5aab_ShortTermAdjustment(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0x5aab_ShortTermAdjustment(Dcm_1Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x5aab_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5aab_ShortTermAdjustment(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0x5aab_ShortTermAdjustment(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf100_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf100>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf100_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf100_ReadData(Dcm_7Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf100_E_NOT_OK
 *   RTE_E_DidServices_0xf100_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf100_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf100_ReadData(P2VAR(Dcm_7Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf10b_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf10b>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf10b_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf10b_ReadData(Dcm_4092Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf10b_E_NOT_OK
 *   RTE_E_DidServices_0xf10b_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf10b_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf10b_ReadData(P2VAR(Dcm_4092Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf10b_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DidServices_0xf10b>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DidServices_0xf10b_ReadDataLength(UInt16 *DidLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf10b_E_PENDING
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf10b_ReadDataLength(P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) DidLength);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf10d_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf10d>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf10d_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf10d_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf10d_E_NOT_OK
 *   RTE_E_DidServices_0xf10d_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf10d_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf10d_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf154_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf154>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf154_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf154_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf154_E_NOT_OK
 *   RTE_E_DidServices_0xf154_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf154_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf154_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf155_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf155>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf155_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf155_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf155_E_NOT_OK
 *   RTE_E_DidServices_0xf155_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf155_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf155_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf158_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf158>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf158_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf158_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf158_E_NOT_OK
 *   RTE_E_DidServices_0xf158_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf158_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf158_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf180_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf180>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf180_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf180_ReadData(Dcm_14Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf180_E_NOT_OK
 *   RTE_E_DidServices_0xf180_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf180_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf180_ReadData(P2VAR(Dcm_14Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf181_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf181>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf181_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf181_ReadData(Dcm_14Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf181_E_NOT_OK
 *   RTE_E_DidServices_0xf181_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf181_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf181_ReadData(P2VAR(Dcm_14Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf182_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf182>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf182_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf182_ReadData(Dcm_14Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf182_E_NOT_OK
 *   RTE_E_DidServices_0xf182_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf182_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf182_ReadData(P2VAR(Dcm_14Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf183_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf183>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_BootSwFingerPrint_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_BootSwFingerPrint_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_BootSwFingerPrint_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf183_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf183_ReadData(Dcm_15Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf183_E_NOT_OK
 *   RTE_E_DidServices_0xf183_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf183_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf183_ReadData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf183_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xf183>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf183_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xf183_WriteData(Dcm_15Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf183_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf183_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf183_WriteData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf184_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf184>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_AppSwFingerPrint_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_AppSwFingerPrint_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_AppSwFingerPrint_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf184_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf184_ReadData(Dcm_15Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf184_E_NOT_OK
 *   RTE_E_DidServices_0xf184_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf184_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf184_ReadData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf184_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xf184>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf184_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xf184_WriteData(Dcm_15Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf184_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf184_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf184_WriteData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf185_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf185>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CalSwFingerPrint_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_CalSwFingerPrint_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_CalSwFingerPrint_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf185_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf185_ReadData(Dcm_15Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf185_E_NOT_OK
 *   RTE_E_DidServices_0xf185_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf185_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf185_ReadData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf185_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xf185>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf185_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xf185_WriteData(Dcm_15Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf185_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf185_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf185_WriteData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf186_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf186>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf186_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf186_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf186_E_NOT_OK
 *   RTE_E_DidServices_0xf186_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf186_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf186_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf187_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf187>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ECUSparePartNo_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECUSparePartNo_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECUSparePartNo_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf187_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf187_ReadData(Dcm_11Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf187_E_NOT_OK
 *   RTE_E_DidServices_0xf187_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf187_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf187_ReadData(P2VAR(Dcm_11Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf187_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xf187>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ECUSparePartNo_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf187_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xf187_WriteData(Dcm_11Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf187_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf187_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf187_WriteData(P2VAR(Dcm_11Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf188_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf188>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf188_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf188_ReadData(Dcm_11Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf188_E_NOT_OK
 *   RTE_E_DidServices_0xf188_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf188_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf188_ReadData(P2VAR(Dcm_11Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf18c_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf18c>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ECUSerialNumberData_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECUSerialNumberData_ReadBlock(UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECUSerialNumberData_ReadBlock(NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf18c_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf18c_ReadData(Dcm_15Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf18c_E_NOT_OK
 *   RTE_E_DidServices_0xf18c_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf18c_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf18c_ReadData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf18c_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xf18c>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECUSerialNumberData_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECUSerialNumberData_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf18c_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xf18c_WriteData(Dcm_15Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf18c_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf18c_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf18c_WriteData(P2VAR(Dcm_15Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf191_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf191>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf191_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf191_ReadData(Dcm_11Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf191_E_NOT_OK
 *   RTE_E_DidServices_0xf191_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf191_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf191_ReadData(P2VAR(Dcm_11Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf192_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf192>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf192_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf192_ReadData(Dcm_11Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf192_E_NOT_OK
 *   RTE_E_DidServices_0xf192_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf192_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf192_ReadData(P2VAR(Dcm_11Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf193_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf193>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf193_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf193_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf193_E_NOT_OK
 *   RTE_E_DidServices_0xf193_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf193_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf193_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf194_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf194>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf194_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf194_ReadData(Dcm_11Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf194_E_NOT_OK
 *   RTE_E_DidServices_0xf194_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf194_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf194_ReadData(P2VAR(Dcm_11Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf195_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf195>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf195_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf195_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf195_E_NOT_OK
 *   RTE_E_DidServices_0xf195_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf195_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf195_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf1a0_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf1a0>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf1a0_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf1a0_ReadData(Dcm_67Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf1a0_E_NOT_OK
 *   RTE_E_DidServices_0xf1a0_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf1a0_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf1a0_ReadData(P2VAR(Dcm_67Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf1a3_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf1a3>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf1a3_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf1a3_ReadData(Dcm_6Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf1a3_E_NOT_OK
 *   RTE_E_DidServices_0xf1a3_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf1a3_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf1a3_ReadData(P2VAR(Dcm_6Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xf1a4_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xf1a4>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xf1a4_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xf1a4_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xf1a4_E_NOT_OK
 *   RTE_E_DidServices_0xf1a4_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf1a4_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xf1a4_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd01_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd01>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd01_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd01_ReadData(Dcm_322Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd01_E_NOT_OK
 *   RTE_E_DidServices_0xfd01_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd01_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd01_ReadData(P2VAR(Dcm_322Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd02_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd02>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd02_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd02_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd02_E_NOT_OK
 *   RTE_E_DidServices_0xfd02_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd02_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd02_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd02_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd02>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd02_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd02_WriteData(Dcm_4Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd02_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd02_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd02_WriteData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd03_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd03>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd03_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd03_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd03_E_NOT_OK
 *   RTE_E_DidServices_0xfd03_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd03_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd03_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd03_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd03>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd03_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd03_WriteData(Dcm_4Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd03_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd03_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd03_WriteData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd07_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd07>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd07_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd07_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd07_E_NOT_OK
 *   RTE_E_DidServices_0xfd07_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd07_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd07_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd07_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd07>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd07_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd07_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd07_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd07_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd07_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd0d_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DidServices_0xfd0d>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd0d_ReturnControlToECU(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd0d_ReturnControlToECU(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd0d_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd0d_ReturnControlToECU(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd0d_ReturnControlToECU(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd0d_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DidServices_0xfd0d>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd0d_ShortTermAdjustment(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd0d_ShortTermAdjustment(Dcm_2Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd0d_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd0d_ShortTermAdjustment(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd0d_ShortTermAdjustment(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd0e_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd0e>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd0e_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd0e_ReadData(Dcm_8Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd0e_E_NOT_OK
 *   RTE_E_DidServices_0xfd0e_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd0e_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd0e_ReadData(P2VAR(Dcm_8Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd10_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd10>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd10_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd10_ReadData(Dcm_10Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd10_E_NOT_OK
 *   RTE_E_DidServices_0xfd10_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd10_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd10_ReadData(P2VAR(Dcm_10Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd11_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DidServices_0xfd11>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd11_ReturnControlToECU(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd11_ReturnControlToECU(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd11_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd11_ReturnControlToECU(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd11_ReturnControlToECU(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd11_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DidServices_0xfd11>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd11_ShortTermAdjustment(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd11_ShortTermAdjustment(Dcm_2Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd11_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd11_ShortTermAdjustment(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd11_ShortTermAdjustment(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd12_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd12>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd12_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd12_ReadData(Dcm_28Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd12_E_NOT_OK
 *   RTE_E_DidServices_0xfd12_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd12_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd12_ReadData(P2VAR(Dcm_28Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd12_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd12>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd12_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd12_WriteData(Dcm_28Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd12_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd12_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd12_WriteData(P2VAR(Dcm_28Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd13_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd13>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd13_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd13_ReadData(Dcm_75Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd13_E_NOT_OK
 *   RTE_E_DidServices_0xfd13_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd13_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd13_ReadData(P2VAR(Dcm_75Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd14_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd14>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd14_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd14_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd14_E_NOT_OK
 *   RTE_E_DidServices_0xfd14_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd14_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd14_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd17_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd17>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd17_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd17_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd17_E_NOT_OK
 *   RTE_E_DidServices_0xfd17_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd17_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd17_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd19_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd19>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd19_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd19_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd19_E_NOT_OK
 *   RTE_E_DidServices_0xfd19_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd19_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd19_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd19_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd19>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd19_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd19_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd19_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd19_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd19_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd1a_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd1a>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd1a_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd1a_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd1a_E_NOT_OK
 *   RTE_E_DidServices_0xfd1a_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1a_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1a_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd1b_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd1b>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd1b_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd1b_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd1b_E_NOT_OK
 *   RTE_E_DidServices_0xfd1b_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1b_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1b_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd1b_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd1b>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd1b_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd1b_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd1b_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1b_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1b_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd1c_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd1c>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd1c_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd1c_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd1c_E_NOT_OK
 *   RTE_E_DidServices_0xfd1c_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1c_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1c_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd1e_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd1e>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd1e_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd1e_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd1e_E_NOT_OK
 *   RTE_E_DidServices_0xfd1e_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1e_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1e_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd1e_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd1e>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd1e_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd1e_WriteData(Dcm_2Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd1e_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1e_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd1e_WriteData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd20_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd20>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd20_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd20_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd20_E_NOT_OK
 *   RTE_E_DidServices_0xfd20_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd20_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd20_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd21_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd21>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd21_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd21_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd21_E_NOT_OK
 *   RTE_E_DidServices_0xfd21_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd21_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd21_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd21_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd21>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd21_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd21_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd21_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd21_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd21_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd23_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd23>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd23_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd23_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd23_E_NOT_OK
 *   RTE_E_DidServices_0xfd23_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd23_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd23_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd23_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd23>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd23_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd23_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd23_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd23_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd23_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd25_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd25>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd25_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd25_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd25_E_NOT_OK
 *   RTE_E_DidServices_0xfd25_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd25_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd25_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd25_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd25>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd25_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd25_WriteData(Dcm_2Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd25_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd25_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd25_WriteData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd26_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd26>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd26_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd26_ReadData(Dcm_3Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd26_E_NOT_OK
 *   RTE_E_DidServices_0xfd26_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd26_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd26_ReadData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd26_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd26>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd26_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd26_WriteData(Dcm_3Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd26_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd26_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd26_WriteData(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd27_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd27>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd27_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd27_ReadData(Dcm_1Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd27_E_NOT_OK
 *   RTE_E_DidServices_0xfd27_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd27_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd27_ReadData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd27_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd27>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd27_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd27_WriteData(Dcm_1Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd27_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd27_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd27_WriteData(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd29_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd29>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd29_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd29_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd29_E_NOT_OK
 *   RTE_E_DidServices_0xfd29_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd29_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd29_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd29_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd29>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd29_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd29_WriteData(Dcm_2Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd29_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd29_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd29_WriteData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd30_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd30>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd30_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd30_ReadData(Dcm_5Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd30_E_NOT_OK
 *   RTE_E_DidServices_0xfd30_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd30_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd30_ReadData(P2VAR(Dcm_5Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd30_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfd30>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd30_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfd30_WriteData(Dcm_5Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd30_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd30_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd30_WriteData(P2VAR(Dcm_5Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfd31_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfd31>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfd31_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfd31_ReadData(Dcm_12Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfd31_E_NOT_OK
 *   RTE_E_DidServices_0xfd31_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd31_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfd31_ReadData(P2VAR(Dcm_12Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfda1_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfda1>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfda1_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfda1_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfda1_E_NOT_OK
 *   RTE_E_DidServices_0xfda1_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda1_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda1_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfda1_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfda1>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfda1_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfda1_WriteData(Dcm_4Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfda1_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda1_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda1_WriteData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfda2_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfda2>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfda2_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfda2_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfda2_E_NOT_OK
 *   RTE_E_DidServices_0xfda2_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda2_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda2_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfda2_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfda2>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfda2_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfda2_WriteData(Dcm_4Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfda2_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda2_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda2_WriteData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfda3_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfda3>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfda3_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfda3_ReadData(Dcm_12Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfda3_E_NOT_OK
 *   RTE_E_DidServices_0xfda3_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda3_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda3_ReadData(P2VAR(Dcm_12Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfda3_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfda3>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfda3_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfda3_WriteData(Dcm_12Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfda3_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda3_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfda3_WriteData(P2VAR(Dcm_12Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdac_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdac>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdac_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdac_ReadData(Dcm_64Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdac_E_NOT_OK
 *   RTE_E_DidServices_0xfdac_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdac_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdac_ReadData(P2VAR(Dcm_64Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdac_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdac>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdac_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdac_WriteData(Dcm_64Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdac_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdac_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdac_WriteData(P2VAR(Dcm_64Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdad_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdad>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdad_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdad_ReadData(Dcm_7Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdad_E_NOT_OK
 *   RTE_E_DidServices_0xfdad_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdad_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdad_ReadData(P2VAR(Dcm_7Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdae_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdae>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdae_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdae_ReadData(Dcm_2Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdae_E_NOT_OK
 *   RTE_E_DidServices_0xfdae_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdae_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdae_ReadData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdae_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdae>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdae_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdae_WriteData(Dcm_2Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdae_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdae_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdae_WriteData(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdaf_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdaf>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdaf_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdaf_ReadData(Dcm_176Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdaf_E_NOT_OK
 *   RTE_E_DidServices_0xfdaf_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdaf_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdaf_ReadData(P2VAR(Dcm_176Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb0_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb0>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb0_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb0_ReadData(Dcm_256Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb0_E_NOT_OK
 *   RTE_E_DidServices_0xfdb0_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb0_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb0_ReadData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb0_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb0>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb0_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb0_WriteData(Dcm_256Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb0_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb0_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb0_WriteData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb1_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb1>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb1_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb1_ReadData(Dcm_256Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb1_E_NOT_OK
 *   RTE_E_DidServices_0xfdb1_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb1_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb1_ReadData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb1_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb1>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb1_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb1_WriteData(Dcm_256Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb1_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb1_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb1_WriteData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb2_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb2>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb2_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb2_ReadData(Dcm_256Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb2_E_NOT_OK
 *   RTE_E_DidServices_0xfdb2_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb2_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb2_ReadData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb2_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb2>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb2_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb2_WriteData(Dcm_256Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb2_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb2_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb2_WriteData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb3_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb3>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb3_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb3_ReadData(Dcm_256Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb3_E_NOT_OK
 *   RTE_E_DidServices_0xfdb3_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb3_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb3_ReadData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb3_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb3>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb3_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb3_WriteData(Dcm_256Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb3_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb3_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb3_WriteData(P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb4_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb4>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb4_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb4_ReadData(Dcm_8Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb4_E_NOT_OK
 *   RTE_E_DidServices_0xfdb4_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb4_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb4_ReadData(P2VAR(Dcm_8Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb4_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb4>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb4_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb4_WriteData(Dcm_8Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb4_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb4_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb4_WriteData(P2VAR(Dcm_8Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb5_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb5>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb5_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb5_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb5_E_NOT_OK
 *   RTE_E_DidServices_0xfdb5_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb5_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb5_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb5_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb5>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb5_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb5_WriteData(Dcm_4Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb5_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb5_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb5_WriteData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb6_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb6>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb6_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb6_ReadData(Dcm_4Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb6_E_NOT_OK
 *   RTE_E_DidServices_0xfdb6_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb6_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb6_ReadData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb6_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb6>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb6_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb6_WriteData(Dcm_4Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb6_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb6_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb6_WriteData(P2VAR(Dcm_4Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb7_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DidServices_0xfdb7>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb7_ReadData(UInt8 *data)
# else
 *   Std_ReturnType DidServices_0xfdb7_ReadData(Dcm_18Byte_Type *data)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb7_E_NOT_OK
 *   RTE_E_DidServices_0xfdb7_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb7_ReadData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb7_ReadData(P2VAR(Dcm_18Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_0xfdb7_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DidServices_0xfdb7>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType DidServices_0xfdb7_WriteData(UInt8 *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType DidServices_0xfdb7_WriteData(Dcm_18Byte_Type *data, UInt16 dataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0xfdb7_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb7_WriteData(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_0xfdb7_WriteData(P2VAR(Dcm_18Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) data, UInt16 dataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0100>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0885>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0ad9>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0ada>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0adb>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0adc>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x0ade>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x1002>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x1004>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x1006>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x1008>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x1009>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x102a>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x191d>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x1921>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2001>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2002>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2003>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2008>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x200a>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x200b>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x200c>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2010>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2014>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x2024>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0x292e>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf100>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf10b>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf10d>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf154>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf155>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf158>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf180>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf181>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf182>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf183>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf184>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf185>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf186>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf187>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf188>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf18c>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf191>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf192>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf193>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf194>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf195>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf1a0>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf1a3>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xf1a4>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd01>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd02>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd03>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd07>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd0e>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd10>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd12>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd13>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd14>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd17>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd19>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd1a>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd1b>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd1c>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd1e>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd20>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd21>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd23>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd25>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd26>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd27>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd29>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd30>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfd31>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfda1>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfda2>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfda3>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdac>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdad>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdae>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdaf>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb0>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb1>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb2>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb3>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb4>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb5>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb6>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DidServices_0xfdb7>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DidServices_ConditionCheckRead(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0100_E_PENDING
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DidServices_ConditionCheckWrite
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0x0100>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0x2023>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xf183>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xf184>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xf185>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xf187>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xf18c>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd02>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd03>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd07>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd12>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd19>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd1b>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd1e>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd21>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd23>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd25>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd26>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd27>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd29>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfd30>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfda1>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfda2>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfda3>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdac>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdae>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb0>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb1>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb2>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb3>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb4>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb5>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb6>
 *   - triggered by server invocation for OperationPrototype <ConditionCheckWrite> of PortPrototype <DidServices_0xfdb7>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DidServices_ConditionCheckWrite(Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DidServices_0x0100_E_PENDING
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) DidServices_ConditionCheckWrite(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResetService_EcuReset
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <EcuReset> of PortPrototype <ResetService>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType ResetService_EcuReset(UInt8 resetType, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_ResetService_E_NOT_OK
 *   RTE_E_ResetService_E_PENDING
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) ResetService_EcuReset(UInt8 resetType, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0x0200_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_0x0200>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTrq_HwNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_VehSpd_Kph_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, Boolean *NTCFailed_Ptr_T_lgc)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0x0200_RequestResults(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0x0200_RequestResults(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_1Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0x0200_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0x0200_RequestResults(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0x0200_RequestResults(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0x0200_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0x0200>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTrq_HwNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_VehSpd_Kph_f32(Float *data)
 *   Std_ReturnType Rte_Read_VehicleSpeedValid_Cnt_lgc(Boolean *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DigColPs_SCom_CustClearTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_DigColPs_SCom_CustSetTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0x0200_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0x0200_Start(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0x0200_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0x0200_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0x0200_Start(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xd001_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xd001>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DisableFailSafeReaction_Cnt_lgc(Boolean data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xd001_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xd001_Start(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xd001_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xd001_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xd001_Start(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xd001_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_0xd001>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DisableFailSafeReaction_Cnt_lgc(Boolean data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xd001_Stop(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xd001_Stop(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xd001_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xd001_Stop(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xd001_Stop(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xd002_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xd002>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTrq_HwNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_Temperature_DegC_f32_DegC_f32(Float *data)
 *   Std_ReturnType Rte_Read_Vecu_Volt_f32_Volt_f32(Float *data)
 *   Std_ReturnType Rte_Read_VehSpd_Kph_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xd002_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xd002_Start(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_256Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xd002_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xd002_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xd002_Start(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_256Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf000_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf000>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf000_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf000_Start(Dcm_3Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf000_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf000_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf000_Start(P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf001_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf001>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf001_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf001_Start(Dcm_2Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf001_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf001_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf001_Start(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf003_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf003>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf003_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf003_Start(Dcm_1Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf003_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf003_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf003_Start(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf004_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf004>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf004_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf004_Start(Dcm_1Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf004_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf004_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf004_Start(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf005_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf005>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf005_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf005_Start(Dcm_2Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_3Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf005_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf005_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf005_Start(P2VAR(Dcm_2Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_3Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf008_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf008>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf008_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf008_Start(Dcm_1Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf008_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf008_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf008_Start(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf009_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_0xf009>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf009_RequestResults(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf009_RequestResults(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf009_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf009_RequestResults(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf009_RequestResults(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf009_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf009>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf009_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf009_Start(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf009_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf009_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf009_Start(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf009_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_0xf009>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf009_Stop(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf009_Stop(Dcm_0Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf009_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf009_Stop(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf009_Stop(P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xf0ff_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xf0ff>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xf0ff_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xf0ff_Start(Dcm_6Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xf0ff_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf0ff_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xf0ff_Start(P2VAR(Dcm_6Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_0xfee0_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_0xfee0>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_AbsHwPos_SCom_CustClrTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_AbsHwPos_SCom_CustSetTrim(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_AbsHwPos_SCom_TrimNotPerformed
 *   Std_ReturnType Rte_Call_LrnEOT_Scom_ResetEOT(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_VehDyn_SCom_ResetCenter(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType RoutineServices_0xfee0_Start(UInt8 *RequestData, UInt16 RequestDataLength, UInt8 *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType RoutineServices_0xfee0_Start(Dcm_1Byte_Type *RequestData, UInt16 RequestDataLength, Dcm_0Byte_Type *ResponseData, UInt16 *ResponseDataLength, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_0xfee0_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xfee0_Start(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) RoutineServices_0xfee0_Start(P2VAR(Dcm_1Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) RequestData, UInt16 RequestDataLength, P2VAR(Dcm_0Byte_Type, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseData, P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ResponseDataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_1_CompareKey
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CompareKey> of PortPrototype <SecurityAccess_1>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType SecurityAccess_1_CompareKey(UInt8 *Key)
# else
 *   Std_ReturnType SecurityAccess_1_CompareKey(Dcm_SecAccess_1_KeyType *Key)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_1_E_COMPARE_KEY_FAILED
 *   RTE_E_SecurityAccess_1_E_NOT_OK
 *   RTE_E_SecurityAccess_1_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SecurityAccess_1_CompareKey(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) Key);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SecurityAccess_1_CompareKey(P2VAR(Dcm_SecAccess_1_KeyType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) Key);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_1_GetSeed
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSeed> of PortPrototype <SecurityAccess_1>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DCMServices_GetSecurityLevel(Dcm_SecLevelType *SecLevel)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DCMServices_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType SecurityAccess_1_GetSeed(UInt8 *securityAccessDataRecord, UInt8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
# else
 *   Std_ReturnType SecurityAccess_1_GetSeed(Dcm_SecAccess_1_DataRecType *securityAccessDataRecord, Dcm_SecAccess_1_SeedType *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
# endif
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_1_E_NOT_OK
 *   RTE_E_SecurityAccess_1_E_PENDING
 *
 *********************************************************************************************************************/

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SecurityAccess_1_GetSeed(P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) securityAccessDataRecord, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# else
FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SecurityAccess_1_GetSeed(P2VAR(Dcm_SecAccess_1_DataRecType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) securityAccessDataRecord, P2VAR(Dcm_SecAccess_1_SeedType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_AP_DIAGSVC_APPL_VAR) ErrorCode);
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SessionControl_ChangeIndication
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ChangeIndication> of PortPrototype <SessionControl>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_TotalOdometerIPC_Cnt_u32(UInt32 *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TotalOdometer_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TotalOdometer_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SessionControl_ChangeIndication(Dcm_SesCtrlType SesCtrlTypeOld, Dcm_SesCtrlType SesCtrlTypeNew)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SessionControl_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SessionControl_ChangeIndication(Dcm_SesCtrlType SesCtrlTypeOld, Dcm_SesCtrlType SesCtrlTypeNew);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SessionControl_ConfirmationRespPending
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConfirmationRespPending> of PortPrototype <SessionControl>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_TotalOdometerIPC_Cnt_u32(UInt32 *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_ECULifeTimeMins_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *   Std_ReturnType Rte_Call_SystemTime_DtrmnElapsedTime_mS_u32(UInt32 InitialTime, UInt32 *ElapsedTime)
 *     Synchronous Service Invocation. Timeout: None
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_TotalOdometer_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_TotalOdometer_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SessionControl_ConfirmationRespPending(Dcm_ConfirmationStatusType status)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SessionControl_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SessionControl_ConfirmationRespPending(Dcm_ConfirmationStatusType status);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SessionControl_GetSesChgPermission
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSesChgPermission> of PortPrototype <SessionControl>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SessionControl_GetSesChgPermission(Dcm_SesCtrlType SesCtrlTypeActive, Dcm_SesCtrlType SesCtrlTypeNew)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SessionControl_E_FORCE_RCRRP
 *   RTE_E_SessionControl_E_NOT_OK
 *   RTE_E_SessionControl_E_PENDING
 *   RTE_E_SessionControl_E_SESSION_NOT_ALLOWED
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGSVC_APPL_CODE) SessionControl_GetSesChgPermission(Dcm_SesCtrlType SesCtrlTypeActive, Dcm_SesCtrlType SesCtrlTypeNew);

# define RTE_STOP_SEC_AP_DIAGSVC_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_AbsHwPos_SCom_TrimNotPerformed (34U)

# define RTE_E_ComControlService_E_COM_CTRL_NOT_ACCEPTED (40U)

# define RTE_E_ComControlService_E_PENDING (10U)

# define RTE_E_DCMServices_E_NOT_OK (1U)

# define RTE_E_DiagSvc_SCom_E_OUTOFRANGE (49U)

# define RTE_E_DidServices_0x0100_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0100_E_PENDING (10U)

# define RTE_E_DidServices_0x0885_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0885_E_PENDING (10U)

# define RTE_E_DidServices_0x0ad9_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0ad9_E_PENDING (10U)

# define RTE_E_DidServices_0x0ada_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0ada_E_PENDING (10U)

# define RTE_E_DidServices_0x0adb_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0adb_E_PENDING (10U)

# define RTE_E_DidServices_0x0adc_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0adc_E_PENDING (10U)

# define RTE_E_DidServices_0x0ade_E_NOT_OK (1U)

# define RTE_E_DidServices_0x0ade_E_PENDING (10U)

# define RTE_E_DidServices_0x1002_E_NOT_OK (1U)

# define RTE_E_DidServices_0x1002_E_PENDING (10U)

# define RTE_E_DidServices_0x1004_E_NOT_OK (1U)

# define RTE_E_DidServices_0x1004_E_PENDING (10U)

# define RTE_E_DidServices_0x1006_E_NOT_OK (1U)

# define RTE_E_DidServices_0x1006_E_PENDING (10U)

# define RTE_E_DidServices_0x1008_E_NOT_OK (1U)

# define RTE_E_DidServices_0x1008_E_PENDING (10U)

# define RTE_E_DidServices_0x1009_E_NOT_OK (1U)

# define RTE_E_DidServices_0x1009_E_PENDING (10U)

# define RTE_E_DidServices_0x102a_E_NOT_OK (1U)

# define RTE_E_DidServices_0x102a_E_PENDING (10U)

# define RTE_E_DidServices_0x191d_E_NOT_OK (1U)

# define RTE_E_DidServices_0x191d_E_PENDING (10U)

# define RTE_E_DidServices_0x1921_E_NOT_OK (1U)

# define RTE_E_DidServices_0x1921_E_PENDING (10U)

# define RTE_E_DidServices_0x2001_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2001_E_PENDING (10U)

# define RTE_E_DidServices_0x2002_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2002_E_PENDING (10U)

# define RTE_E_DidServices_0x2003_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2003_E_PENDING (10U)

# define RTE_E_DidServices_0x2008_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2008_E_PENDING (10U)

# define RTE_E_DidServices_0x200a_E_NOT_OK (1U)

# define RTE_E_DidServices_0x200a_E_PENDING (10U)

# define RTE_E_DidServices_0x200b_E_NOT_OK (1U)

# define RTE_E_DidServices_0x200b_E_PENDING (10U)

# define RTE_E_DidServices_0x200c_E_NOT_OK (1U)

# define RTE_E_DidServices_0x200c_E_PENDING (10U)

# define RTE_E_DidServices_0x2010_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2010_E_PENDING (10U)

# define RTE_E_DidServices_0x2014_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2014_E_PENDING (10U)

# define RTE_E_DidServices_0x2023_E_PENDING (10U)

# define RTE_E_DidServices_0x2024_E_NOT_OK (1U)

# define RTE_E_DidServices_0x2024_E_PENDING (10U)

# define RTE_E_DidServices_0x292e_E_NOT_OK (1U)

# define RTE_E_DidServices_0x292e_E_PENDING (10U)

# define RTE_E_DidServices_0x5051_E_PENDING (10U)

# define RTE_E_DidServices_0x5052_E_PENDING (10U)

# define RTE_E_DidServices_0x5aab_E_PENDING (10U)

# define RTE_E_DidServices_0xf100_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf100_E_PENDING (10U)

# define RTE_E_DidServices_0xf10b_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf10b_E_PENDING (10U)

# define RTE_E_DidServices_0xf10d_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf10d_E_PENDING (10U)

# define RTE_E_DidServices_0xf154_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf154_E_PENDING (10U)

# define RTE_E_DidServices_0xf155_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf155_E_PENDING (10U)

# define RTE_E_DidServices_0xf158_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf158_E_PENDING (10U)

# define RTE_E_DidServices_0xf180_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf180_E_PENDING (10U)

# define RTE_E_DidServices_0xf181_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf181_E_PENDING (10U)

# define RTE_E_DidServices_0xf182_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf182_E_PENDING (10U)

# define RTE_E_DidServices_0xf183_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf183_E_PENDING (10U)

# define RTE_E_DidServices_0xf184_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf184_E_PENDING (10U)

# define RTE_E_DidServices_0xf185_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf185_E_PENDING (10U)

# define RTE_E_DidServices_0xf186_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf186_E_PENDING (10U)

# define RTE_E_DidServices_0xf187_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf187_E_PENDING (10U)

# define RTE_E_DidServices_0xf188_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf188_E_PENDING (10U)

# define RTE_E_DidServices_0xf18c_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf18c_E_PENDING (10U)

# define RTE_E_DidServices_0xf191_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf191_E_PENDING (10U)

# define RTE_E_DidServices_0xf192_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf192_E_PENDING (10U)

# define RTE_E_DidServices_0xf193_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf193_E_PENDING (10U)

# define RTE_E_DidServices_0xf194_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf194_E_PENDING (10U)

# define RTE_E_DidServices_0xf195_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf195_E_PENDING (10U)

# define RTE_E_DidServices_0xf1a0_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf1a0_E_PENDING (10U)

# define RTE_E_DidServices_0xf1a3_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf1a3_E_PENDING (10U)

# define RTE_E_DidServices_0xf1a4_E_NOT_OK (1U)

# define RTE_E_DidServices_0xf1a4_E_PENDING (10U)

# define RTE_E_DidServices_0xfd01_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd01_E_PENDING (10U)

# define RTE_E_DidServices_0xfd02_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd02_E_PENDING (10U)

# define RTE_E_DidServices_0xfd03_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd03_E_PENDING (10U)

# define RTE_E_DidServices_0xfd07_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd07_E_PENDING (10U)

# define RTE_E_DidServices_0xfd0d_E_PENDING (10U)

# define RTE_E_DidServices_0xfd0e_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd0e_E_PENDING (10U)

# define RTE_E_DidServices_0xfd10_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd10_E_PENDING (10U)

# define RTE_E_DidServices_0xfd11_E_PENDING (10U)

# define RTE_E_DidServices_0xfd12_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd12_E_PENDING (10U)

# define RTE_E_DidServices_0xfd13_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd13_E_PENDING (10U)

# define RTE_E_DidServices_0xfd14_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd14_E_PENDING (10U)

# define RTE_E_DidServices_0xfd17_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd17_E_PENDING (10U)

# define RTE_E_DidServices_0xfd19_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd19_E_PENDING (10U)

# define RTE_E_DidServices_0xfd1a_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd1a_E_PENDING (10U)

# define RTE_E_DidServices_0xfd1b_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd1b_E_PENDING (10U)

# define RTE_E_DidServices_0xfd1c_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd1c_E_PENDING (10U)

# define RTE_E_DidServices_0xfd1e_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd1e_E_PENDING (10U)

# define RTE_E_DidServices_0xfd20_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd20_E_PENDING (10U)

# define RTE_E_DidServices_0xfd21_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd21_E_PENDING (10U)

# define RTE_E_DidServices_0xfd23_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd23_E_PENDING (10U)

# define RTE_E_DidServices_0xfd25_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd25_E_PENDING (10U)

# define RTE_E_DidServices_0xfd26_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd26_E_PENDING (10U)

# define RTE_E_DidServices_0xfd27_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd27_E_PENDING (10U)

# define RTE_E_DidServices_0xfd29_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd29_E_PENDING (10U)

# define RTE_E_DidServices_0xfd30_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd30_E_PENDING (10U)

# define RTE_E_DidServices_0xfd31_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfd31_E_PENDING (10U)

# define RTE_E_DidServices_0xfda1_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfda1_E_PENDING (10U)

# define RTE_E_DidServices_0xfda2_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfda2_E_PENDING (10U)

# define RTE_E_DidServices_0xfda3_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfda3_E_PENDING (10U)

# define RTE_E_DidServices_0xfdac_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdac_E_PENDING (10U)

# define RTE_E_DidServices_0xfdad_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdad_E_PENDING (10U)

# define RTE_E_DidServices_0xfdae_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdae_E_PENDING (10U)

# define RTE_E_DidServices_0xfdaf_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdaf_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb0_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb0_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb1_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb1_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb2_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb2_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb3_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb3_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb4_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb4_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb5_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb5_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb6_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb6_E_PENDING (10U)

# define RTE_E_DidServices_0xfdb7_E_NOT_OK (1U)

# define RTE_E_DidServices_0xfdb7_E_PENDING (10U)

# define RTE_E_DigColPs_SCom_ConditionsNotCorrect (34U)

# define RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK (1U)

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# define RTE_E_ResetService_E_NOT_OK (1U)

# define RTE_E_ResetService_E_PENDING (10U)

# define RTE_E_RoutineServices_0x0200_E_PENDING (10U)

# define RTE_E_RoutineServices_0xd001_E_PENDING (10U)

# define RTE_E_RoutineServices_0xd002_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf000_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf001_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf003_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf004_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf005_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf008_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf009_E_PENDING (10U)

# define RTE_E_RoutineServices_0xf0ff_E_PENDING (10U)

# define RTE_E_RoutineServices_0xfee0_E_PENDING (10U)

# define RTE_E_SecurityAccess_1_E_COMPARE_KEY_FAILED (11U)

# define RTE_E_SecurityAccess_1_E_NOT_OK (1U)

# define RTE_E_SecurityAccess_1_E_PENDING (10U)

# define RTE_E_SessionControl_E_FORCE_RCRRP (12U)

# define RTE_E_SessionControl_E_NOT_OK (1U)

# define RTE_E_SessionControl_E_PENDING (10U)

# define RTE_E_SessionControl_E_SESSION_NOT_ALLOWED (4U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1488824210
#    error "The magic number of the generated file <C:/Users/mzjphh/Desktop/Fiasa_326_327_05.01.00/Fiasa_326_327_EPS_TMS570/SwProject/DiagSvc/utp/contract/Ap_DiagSvc/Rte_Ap_DiagSvc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1488824210
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_DIAGSVC_H */
