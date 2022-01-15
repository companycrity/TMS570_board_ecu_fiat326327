
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : DiagMgr_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 19.09.2012 17:43:54
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          5 %
 * %date_modified:    Fri Feb 28 09:38:38 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/13/12   1       JJW       Initial template creation
 */

#ifndef DIAGMGR_CFG_H
#define DIAGMGR_CFG_H



/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*** Public Part (used by DiagMgr API) *****************************************/

#include "Std_Types.h"                   /* Standard type definitions      */

 



extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgrQM_GetNTCFailed( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCFailed_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgrQM_GetNTCActive( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCActive_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgrQM_GetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08 );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgrQM_SetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgrQM_ReportNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );

   
#endif /* DIAGMGR_CFG_H */

/*** End of file **************************************************************/
