/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2010 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Sa_DigColPs.h
 *     Workspace:  C:/Rijvi_Synergy/Working/DigColPs-jzk9cc/DigColPs/autosar
 *     SW-C Type:  Sa_DigColPs
 *  Generated at:  Wed Mar  5 12:45:56 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  Application header file for SW-C <Sa_DigColPs> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SA_DIGCOLPS_H
# define _RTE_SA_DIGCOLPS_H

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

typedef P2CONST(struct Rte_CDS_Sa_DigColPs, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_I2CHwAbsPos_HwDeg_f32 ((Float)0)
# define Rte_InitValue_I2CHwAbsPosValid_Cnt_lgc ((Boolean)FALSE)
# define Rte_InitValue_MecState_Cnt_enum ((ManufModeType)0u)
# define Rte_InitValue_TrimComp_Cnt_lgc ((Boolean)FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_DigColPs_EOLDigColPosCals_WriteBlock(P2CONST(UInt8, AUTOMATIC, RTE_SA_DIGCOLPS_APPL_DATA) DstPtr);
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_DigColPs_EOLDigColPosCals_WriteBlock(P2CONST(NvM_DestPtr, AUTOMATIC, RTE_SA_DIGCOLPS_APPL_DATA) DstPtr);
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_DigColPs_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_SA_DIGCOLPS_APPL_VAR) NTCActive_Ptr_T_lgc);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Sa_DigColPs_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

# define Rte_IRead_DigColPs_Per2_MecState_Cnt_enum() \
  (Rte_Inst_Sa_DigColPs->DigColPs_Per2_MecState_Cnt_enum->value)

# define Rte_IWrite_DigColPs_Per2_I2CHwAbsPosValid_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_DigColPs->DigColPs_Per2_I2CHwAbsPosValid_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_DigColPs_Per2_I2CHwAbsPosValid_Cnt_lgc() \
  (&Rte_Inst_Sa_DigColPs->DigColPs_Per2_I2CHwAbsPosValid_Cnt_lgc->value)

# define Rte_IWrite_DigColPs_Per2_I2CHwAbsPos_HwDeg_f32(data) \
  ( \
  Rte_Inst_Sa_DigColPs->DigColPs_Per2_I2CHwAbsPos_HwDeg_f32->value = (data) \
  )

# define Rte_IWriteRef_DigColPs_Per2_I2CHwAbsPos_HwDeg_f32() \
  (&Rte_Inst_Sa_DigColPs->DigColPs_Per2_I2CHwAbsPos_HwDeg_f32->value)

# define Rte_IWrite_DigColPs_Per2_TrimComp_Cnt_lgc(data) \
  ( \
  Rte_Inst_Sa_DigColPs->DigColPs_Per2_TrimComp_Cnt_lgc->value = (data) \
  )

# define Rte_IWriteRef_DigColPs_Per2_TrimComp_Cnt_lgc() \
  (&Rte_Inst_Sa_DigColPs->DigColPs_Per2_TrimComp_Cnt_lgc->value)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_EOLDigColPosCals_WriteBlock Rte_Call_Sa_DigColPs_EOLDigColPosCals_WriteBlock
# define Rte_Call_NxtrDiagMgr_GetNTCActive Rte_Call_Sa_DigColPs_NxtrDiagMgr_GetNTCActive
# define Rte_Call_NxtrDiagMgr_SetNTCStatus Rte_Call_Sa_DigColPs_NxtrDiagMgr_SetNTCStatus


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_DigColPsEOL() (Rte_Inst_Sa_DigColPs->Pim_DigColPsEOL)




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   DigColPsEOLType *Rte_Pim_DigColPsEOL(void)
 *
 *********************************************************************************************************************/


# define RTE_START_SEC_SA_DIGCOLPS_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_EOLDigColPosCals_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_EOLDigColPosCals_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_Init1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_Per1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_Per2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   ManufModeType Rte_IRead_DigColPs_Per2_MecState_Cnt_enum(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_DigColPs_Per2_I2CHwAbsPosValid_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_DigColPs_Per2_I2CHwAbsPosValid_Cnt_lgc(void)
 *   void Rte_IWrite_DigColPs_Per2_I2CHwAbsPos_HwDeg_f32(Float data)
 *   Float *Rte_IWriteRef_DigColPs_Per2_I2CHwAbsPos_HwDeg_f32(void)
 *   void Rte_IWrite_DigColPs_Per2_TrimComp_Cnt_lgc(Boolean data)
 *   Boolean *Rte_IWriteRef_DigColPs_Per2_TrimComp_Cnt_lgc(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_GetNTCActive(NTCNumber NTC_Cnt_T_enum, Boolean *NTCActive_Ptr_T_lgc)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrDiagMgr_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_Per2(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_CustClrTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CustClearTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_EOLDigColPosCals_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_EOLDigColPosCals_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DigColPs_SCom_CustClrTrim(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_CustClrTrim(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_CustSetTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CustSetTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
 *   Std_ReturnType Rte_Call_EOLDigColPosCals_WriteBlock(const UInt8 *DstPtr)
# else
 *   Std_ReturnType Rte_Call_EOLDigColPosCals_WriteBlock(const NvM_DestPtr *DstPtr)
# endif
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DigColPs_SCom_CustSetTrim(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_CustSetTrim(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_NxtClrTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <NxtClrTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DigColPs_SCom_NxtClrTrim(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_NxtClrTrim(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DigColPs_SCom_NxtSetTrim
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <NxtSetTrim> of PortPrototype <DigColPs_SCom>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DigColPs_SCom_NxtSetTrim(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DigColPs_SCom_ConditionsNotCorrect
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_SA_DIGCOLPS_APPL_CODE) DigColPs_SCom_NxtSetTrim(void);

# define RTE_STOP_SEC_SA_DIGCOLPS_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DigColPs_SCom_ConditionsNotCorrect (34u)

# define RTE_E_NvM_AC3_SRBS_Srv_E_NOT_OK (1u)

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1u)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1394032927
#    error "The magic number of the generated file <C:/Rijvi_Synergy/Working/DigColPs-jzk9cc/DigColPs/utp/contract/Sa_DigColPs/Rte_Sa_DigColPs.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1394032927
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SA_DIGCOLPS_H */
