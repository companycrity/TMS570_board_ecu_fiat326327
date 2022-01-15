/* -----------------------------------------------------------------------------
  Filename:    Com_Lcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Com
               
               Configuration   : C:\Synergy\EA3\Working\Fiasa_326_327\Fiasa_326_327_03.05.01\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2016-03-01  14:44:17
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    &&&~ Misra / PClint justifications
 ----------------------------------------------------------------------------- */

/* PRQA S 0342 EOF */ /* MD_Com_0342 */
/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1 */
/* PRQA S 2006 EOF */ /* MD_MSR_14.7 */
/* PRQA S 3109 EOF */ /* MD_MSR_14.3 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7 */
/* PRQA S 3458 EOF */ /* MD_MSR_19.4 */


/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Il_AsrComLinktimeCRC */
#define V_IL_ASRCOM_LCFG_SOURCE
#include "Com.h"
#include "Rte_Cbk.h"
#if (COM_AMD_RUNTIME_MEASUREMENT == STD_ON)
#include "AmdRtm.h"
#endif

#include "Com_Cbk.h" /* PRQA S 0777 */ /* MD_Com_0777_IPduCallouts */
#if (COM_ISSM == STD_ON)
#include "Issm_Cbk.h"
#endif

#if (COM_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/* END of Checksum exclude for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Version Checks
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Il_AsrComLinktimeCRC */
#if !defined(V_SUPPRESS_EXTENDED_VERSION_CHECK)
#if (IL_ASRCOM_GENTOOL_GENY_MAJOR_VERSION != 0x05u)
#error "Com_Lcfg.c : Incompatible IL_ASRCOM_GENTOOL_GENY_MAJOR_VERSION in generated File!"
#endif

#if (IL_ASRCOM_GENTOOL_GENY_MINOR_VERSION != 0x27u)
#error "Com_Lcfg.c : Incompatible IL_ASRCOM_GENTOOL_GENY_MINOR_VERSION in generated File!"
#endif

#if (IL_ASRCOM_GENTOOL_GENY_PATCH_VERSION != 0x01u)
#error "Com_Lcfg.c : Incompatible IL_ASRCOM_GENTOOL_GENY_PATCH_VERSION in generated File!"
#endif

#endif

/* END of Checksum exclude for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Consistency Checks
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Il_AsrComLinktimeCRC */
/* Consistency Check No. 1 */
#if (COM_MAXTXIPDUCNT > COM_SINT16_MAX)
#  error "Com_Lcfg.c : COM_MAXTXIPDUCNT is greater than L_ASRCOM_SINT16_MAX"
#endif


/* Consistency Check No.2 */
#if (COM_MAXRXIPDUCNT > COM_SINT16_MAX)
#  error "Com_Lcfg.c : COM_MAXRXIPDUCNT is greater than L_ASRCOM_SINT16_MAX"
#endif


/* Consistency Check No.3 */
#if (COM_RXUBCNT > COM_SINT16_MAX)
# error "Com_Lcfg.c : COM_RXUBCNT is greater than COM_SINT16_MAX!"
#endif


/* END of Checksum exclude for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Il_AsrCom RAM Arrays
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Layer Management
 ----------------------------------------------------------------------------- */

#define COM_START_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(boolean, COM_VAR_NOINIT) com_LMgt_IPduGroupState[COM_SUBIPDUGROUPCNT];
#define COM_STOP_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define COM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(uint8, COM_VAR_NOINIT) com_LMgt_RxPduGroupState[COM_MAXRXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define COM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(uint8, COM_VAR_NOINIT) com_LMgt_TxPduGroupState[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Rx Update Bit Handler
 ----------------------------------------------------------------------------- */

/* Update Bit Support is disabled */


/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Rx Deadline Monitor
 ----------------------------------------------------------------------------- */

/* Com_RxDlMon_TimeoutTime: No Rx Ipdus configured */


/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Rx Notification Handler
 ----------------------------------------------------------------------------- */

#define COM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(boolean, COM_VAR_NOINIT) com_RxNHdlr_HandleIPduDeferred[COM_MAXRXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Tx Mode Handler
 ----------------------------------------------------------------------------- */

#if (COM_TXMODEHDLR_CYCLIC_TRANSMISSION == STD_ON)
#define COM_START_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(uint16, COM_VAR_NOINIT) com_TxModeHdlr_CycleTimeCnt[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define COM_START_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(boolean, COM_VAR_NOINIT) com_TxModeHdlr_CyclicSendRequest[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif

#if (COM_TXMODEHDLR_MINIMUM_DELAY == STD_ON)
#define COM_START_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

volatile VAR(uint16, COM_VAR_NOINIT) com_TxModeHdlr_DelayTimeCnt[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif

#define COM_START_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(boolean, COM_VAR_NOINIT) com_TxModeHdlr_TransmitRequest[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_BOOLEAN
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define COM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(Com_TxModeHdlr_TxModeHdlType, COM_VAR_NOINIT) com_TxModeHdlr_CurrentTxMode[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#if (COM_TXMODEHDLR_DIRECT_REPETITION == STD_ON)
#define COM_START_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(uint16, COM_VAR_NOINIT) com_TxModeHdlr_RepCycleCnt[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define COM_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

VAR(uint8, COM_VAR_NOINIT) com_TxModeHdlr_RepetitionCnt[COM_MAXTXIPDUCNT];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif



/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Tx Notification Handler
 ----------------------------------------------------------------------------- */

/* Tx notifications disabled */

/* Tx error notifications disabled */



/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Tx Signal Interface
 ----------------------------------------------------------------------------- */

/* Signal Groups are not used */


/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Tx Deadline Monitor
 ----------------------------------------------------------------------------- */

/* Com_TxDlMon_TimeoutTime: No Tx Ipdus configured */


/* -----------------------------------------------------------------------------
    &&&~ Global Arrays: Tx Event Based Deadline Monitor
 ----------------------------------------------------------------------------- */

/* Com_TxEventDlMon: No Tx Ipdus configured */


/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Layer Management Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
#if (COM_CRC_CHECK == STD_ON)
#define COM_START_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(uint32, COM_CONST) Com_LMgt_LinktimeCRC = (uint32) 0x41289E9C;
#define COM_STOP_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif

/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Rx Notification Handler Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ Rx Indication Handling
 ----------------------------------------------------------------------------- */

#define COM_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(Com_RxNHdlr_NotiFuncPtrType, COM_CONST) Com_RxNHdlr_NotificationFuncPtr[COM_RXSIGALLNOTIFICATIONCNT] = 
{
  NULL_PTR /* no notification call back function */, 
  Appl_COMCbk_Com_CmdIgnSts__STATUS_C_BCM2__CCAN /* Signal Handle: 2, Com_CmdIgnSts__STATUS_C_BCM2__CCAN */, 
  Appl_COMCbk_Com_CmdIgn_FailSts__STATUS_C_BCM2__CCAN /* Signal Handle: 3, Com_CmdIgn_FailSts__STATUS_C_BCM2__CCAN */, 
  Appl_COMCbk_Com_Digit_01__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 4, Com_Digit_01__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_02__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 5, Com_Digit_02__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_03__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 6, Com_Digit_03__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_04__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 7, Com_Digit_04__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_05__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 8, Com_Digit_05__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_06__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 9, Com_Digit_06__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_07__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 10, Com_Digit_07__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_08__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 11, Com_Digit_08__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_09__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 12, Com_Digit_09__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_10__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 13, Com_Digit_10__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_Digit_11__CFG_DATA_CODE_REQUEST__CCAN /* Signal Handle: 14, Com_Digit_11__CFG_DATA_CODE_REQUEST__CCAN */, 
  Appl_COMCbk_Com_ElectricSteeringLamp_FailSts__STATUS_C_IPC__CCAN /* Signal Handle: 15, Com_ElectricSteeringLamp_FailSts__STATUS_C_IPC__CCAN */, 
  Appl_COMCbk_Com_EngineStopStartSts__MOT3__CCAN /* Signal Handle: 16, Com_EngineStopStartSts__MOT3__CCAN */, 
  Appl_COMCbk_Com_EngineSts__MOT1__CCAN /* Signal Handle: 17, Com_EngineSts__MOT1__CCAN */, 
  Appl_COMCbk_Com_OperationalModeSts__BCM_COMMAND__CCAN /* Signal Handle: 19, Com_OperationalModeSts__BCM_COMMAND__CCAN */, 
  Appl_COMCbk_Com_VehicleSpeedVSOSigFailSts__BSM1__CCAN /* Signal Handle: 22, Com_VehicleSpeedVSOSigFailSts__BSM1__CCAN */, 
  Appl_COMCbk_Com_VehicleSpeedVSOSig__BSM1__CCAN /* Signal Handle: 23, Com_VehicleSpeedVSOSig__BSM1__CCAN */
};

#define COM_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"





/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Rx Lower Layer Interface Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* No Rx I-PDU callouts configured */
/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Rx Signal Invalidation Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* Rx signal invalidation is deactivated */
/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Tx Notification Handler Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ Tx Confirmation Handling
 ----------------------------------------------------------------------------- */

/* Tx notifications disabled */


/* -----------------------------------------------------------------------------
    &&&~ Tx Error Notification Handling
 ----------------------------------------------------------------------------- */

/* Tx error notifications disabled */


/* -----------------------------------------------------------------------------
    &&&~ Tx Timeout Notification Handling
 ----------------------------------------------------------------------------- */

/* Tx timeout notifications disabled */



/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Tx Signal Interface Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* Tx signal invalidation is deactivated */
/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Tx Lower Layer Interface Configuration Data
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Il_AsrComLinktimeCRC */
/* No Tx I-PDU callouts configured */
/* END of Checksum include for
  - Il_AsrComLinktimeCRC */


