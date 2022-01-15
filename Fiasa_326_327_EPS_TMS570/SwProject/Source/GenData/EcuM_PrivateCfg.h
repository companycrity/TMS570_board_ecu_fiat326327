/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2006-2013 by Vector Informatik GmbH, all rights reserved
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  EcuM_PrivateCfg.h
 *    Component:  SysService_AsrEcuM
 *       Module:  EcuM
 *    Generator:  EAD
 *
 *  Description:  This file contains configuration data which is only needed by the module implementation. Do not
 *                this file.
 *********************************************************************************************************************/

/**********************************************************************************************************************
    Bswmd Version : 6.06.01
    Project       : EPS.ecuc
    Generated     : 2017-03-06 01:15 pm
 
    This file is generated by  - MICROSARGEN.EXE V4.2.2.3.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Christian Marchl              Chm           Vector Informatik GmbH
 *  Bethina Mausz                 Bmz           Vector Informatik GmbH
 *  Martin Froschhammer           Mfr           Vector Informatik GmbH
 *  Philipp Ritter                Rpp           Vector Informatik GmbH
 *  Jochen Vorreiter              Vjn           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  03.00.01  2007-09-26  Chm     ESCAN00022372 No Changes here
 *  03.00.02  2007-11-21  Chm     ESCAN00023354 No Changes here
 *  03.00.03  2007-12-06  Chm     ESCAN00022871 No changes here
 *  04.00.00  2008-03-01  Chm     ESCAN00024563 No Changes here
 *                                ESCAN00023356 No changes here
 *                                ESCAN00024323 No Changes here
 *                                ESCAN00027863 No Changes here
 *  04.00.01  2008-04-16  Chm     ESCAN00026037 No Changes here
 *                                ESCAN00026537 No Changes here
 *                                ESCAN00026471 No changes here
 *  04.01.00  2008-05-15  Chm     -             No Changes here
 *  04.01.01  2008-06-02  Chm     -             No Changes here
 *  04.01.02  2008-06-06  Chm     ESCAN00027459 No Changes here
 *                                ESCAN00027313 No changes here
 *  04.01.03  2008-06-17  Chm     ESCAN00027659 No Changes here
 *  04.02.00  2008-06-30  Chm     ESCAN00027955 No Changes here
 *  04.03.00  2008-07-23  Chm     ESCAN00028372 No Changes here
 *                                ESCAN00028511 No Changes here
 *  04.03.01  2008-08-08  Bmz     -             No changes here
 *  04.03.02  2008-08-13  Bmz     ESCAN00029221 No changes here
 *  04.03.03  2008-09-01  Chm     ESCAN00029621 No changes here
 *                                ESCAN00029300 No changes here
 *  04.03.04  2008-09-24  Chm     ESCAN00027708 No changes here
 *                                ESCAN00029799 No changes here
 *                                ESCAN00029815 No changes here
 *                                ESCAN00029313 No changes here
 *  04.04.00  2008-10-22  Chm     ESCAN00030516 No Changes here
 *  05.00.00  2008-11-28  Chm     ESCAN00031216 No changes here
 *                                ESCAN00031214 Added file EcuM_PrivateCfg.h to component
 *                                ESCAN00030497 No changes here
 *                                ESCAN00030132 No changes here
 *                                ESCAN00031520 No changes here
 *                                ESCAN00031786 No changes here
 *                                ESCAN00031787 No changes here
 *  05.01.00  2009-02-19  Chm     ESCAN00032011 No changes here
 *            2009-02-19  Chm     ESCAN00032502 No changes here
 *            2009-02-19  Chm     ESCAN00033069 No changes here
 *            2009-02-20  Chm     ESCAN00031852 No changes here
 *            2009-02-23  Chm     ESCAN00029165 No changes here
 *            2009-02-24  Chm     ESCAN00031789 No changes here
 *            2009-03-04  Chm     ESCAN00033480 Range of EcuM_ModeType missing
 *            2009-03-09  Chm     ESCAN00033718 No changes here
 *            2009-03-16  Chm     ESCAN00033834 No changes here
 *  05.02.00  2009-05-19  Chm     ESCAN00035001 No changes here
 *            2009-07-07  Chm     ESCAN00036192 No changes here
 *  05.03.00  2009-07-13  Chm     ESCAN00036369 No changes here
 *            2009-07-13  Chm     ESCAN00036370 No changes here
 *            2009-07-13  Chm     ESCAN00035287 No changes here
 *            2009-07-15  Chm     ESCAN00036441 No changes here
 *            2009-07-16  Chm     ESCAN00035917 No changes here
 *            2009-07-16  Chm     ESCAN00035535 No changes here
 *            2009-07-17  Chm     ESCAN00036348 No changes here
 *            2009-07-16  Chm     ESCAN00035536 No changes here
 *            2009-07-21  Chm     ESCAN00034788 No changes here
 *  05.03.01  2009-10-22  Chm     ESCAN00037381 No changes here
 *  05.03.02  2009-12-11  Chm     ESCAN00039720 No changes here
 *            2009-12-11  Chm     ESCAN00037612 No changes here
 *            2009-12-14  Chm     ESCAN00039748 No changes here
 *            2009-12-15  Chm     ESCAN00034936 No changes here
 *            2009-12-21  Chm     ESCAN00039882 No changes here
 *            2010-02-19  Chm     ESCAN00040987 No changes here
 *            2010-02-23  Chm     ESCAN00041075 No changes here
 *  05.03.03  2010-04-14  Chm     ESCAN00041836 No changes here
 *            2010-04-19  Chm     ESCAN00041426 No changes here
 *            2010-04-24  Chm     ESCAN00041446 No changes here
 *            2010-04-24  Chm     ESCAN00041827 No changes here
 *  05.03.04  2010-07-29  Bmz     ESCAN00044245 No changes here
 *            2010-07-29  Bmz     ESCAN00044246 No changes here
 *            2010-07-29  Bmz     ESCAN00043065 No changes here
 *  05.04.00  2010-10-18  Bmz     ESCAN00044990 No changes here
 *                                ESCAN00046061 EcuM_Mcu_SetMode removed because it is replaced with the coresponding callout
 *  05.06.00  2010-11-26  Bmz     ESCAN00046158 added Rte wait mechanism
 *                                ESCAN00047183 No changes here
 *                                ESCAN00047434 No changes here
 *                                ESCAN00045138 No changes here
 *            2011-01-26  Bmz     Prefix generation for DEM-ERRORS inserted in GenerationS.xml
 *                                G601 updated
 *            2011-02-03  Bmz     ESCAN00048364 No changes here
 *  05.06.01  2011-03-14  Bmz     ESCAN00049201 update version number
 *  05.07.00  2011-04-26  Bmz     ESCAN00049111 No changes here
 *  06.00.00  2011-07-18  Bmz     ESCAN00044722 updated version number
 *                                ESCAN00049989 No changes here
 *                                ESCAN00049107 No changes here
 *                                ESCAN00048924 No changes here
 *                                ESCAN00047973 No changes here
 *                                ESCAN00045985 No changes here
 *                                ESCAN00049319 No changes here
 *                                ESCAN00050811 No changes here
 *                                ESCAN00050625 No changes here
 *                                ESCAN00039058 No changes here
 *                                ESCAN00046958 No changes here
 *                                ESCAN00051730 No changes here
 *                                ESCAN00052248 SWC-D shall be generated according to AUTOSAR Schema 3.2.1 (Mj-Nr Update)
 *                                ESCAN00052301 No changes here
 *                                ESCAN00052618 No changes here
 *  07.00.00  2011-09-20  Bmz     ESCAN00053281 update MISRA justifications
 *                                ESCAN00053860 No changes here
 *                                ESCAN00052193 No changes here
 *                                ESCAN00052958 Compiler Error: AppModeType undefined -RfC 21545
 *                                              changed AppModeType into EcuM_AppModeType
 *                                ESCAN00054560 No changes here
 *                                ESCAN00042868 No changes here
 *                                ESCAN00052498 EcuM shall abort waiting of pending NvM_WriteAll job
 *                                              added function declaration EcuM_GetNvMWriteAllTimeout
 *                                ESCAN00054279 No changes here
 *            2011-12-09  Mfr     ESCAN00053892 No changes here
 *                                ESCAN00055333 No changes here
 *  07.01.00  2012-03-15  Rpp     ESCAN00057621 No changes here
 *                                ESCAN00057625 No changes here
 *                                ESCAN00057639 No changes here
 *                                ESCAN00057640 No changes here
 * 07.02.00   2012-04-11  Rpp     ESCAN00057924 No changes here
 *                                ESCAN00058216 No changes here
 *                                ESCAN00054793 No changes here
 *                                ESCAN00058041 No changes here
 *                                ESCAN00058225 No changes here
 *                                ESCAN00048077 No changes here
 *                                ESCAN00058257 No changes here
 *                                ESCAN00058258 No changes here
 *                                ESCAN00058263 Compiler error: EcuM_ComMNotifyCtrl_t undeclared identifier
 *                                              EcuM_ComMNotifyCtrl_t is now available when ECUM_IDENTITY_MANAGER_CONFIG==STD_ON
 *                                ESCAN00058340 No changes here
 * 07.03.00   2012-06-23  Rpp     ESCAN00059469 No changes here
 *                                ESCAN00059473 No changes here
 * 07.04.00   2012-10-05  Vjn     ESCAN00061986 No changes here
 *                                ESCAN00061560 Memory mapping of EcuM_ComMNotifyCtrl_t changed
 *                                ESCAN00061857 Compiler abstraction of EcuM_ComMNotifyCtrl_t changed
 *                                ESCAN00061884 No changes here
 * 07.04.01   2013-01-03  Vjn     ESCAN00063627 No changes here
 * 07.05.00   2013-04-08  Vjn     ESCAN00062418 No changes here
 *                                ESCAN00066486 No changes here
 *                                ESCAN00067036 No changes here
 * 07.06.00   2013-10-08  Vjn     ESCAN00070294 Removed prototype of EcuM_StartOs callout
 *                                ESCAN00071016 No changes here
 *********************************************************************************************************************/

#if (!defined ECUM_PRIVATE_CFG_H)
# define ECUM_PRIVATE_CFG_H

# define ECUM_PRIVATE_CFG_MAJOR_VERSION    (7u)
# define ECUM_PRIVATE_CFG_MINOR_VERSION    (6u)
# define ECUM_PRIVATE_CFG_PATCH_VERSION    (0u)

# ifndef ECUM_PRIVATE_CFG_INCLUDE
#  error "EcuM_PrivateCfg.h must not be included outside of EcuM scope"
# endif

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
/*<ECUM_PROD_ERROR_DETECT_INCLUDE_FILE>*/
/*</ECUM_PROD_ERROR_DETECT_INCLUDE_FILE>*/
/*<ECUM_DEV_ERROR_DETECT_INCLUDE_FILE>*/
/*</ECUM_DEV_ERROR_DETECT_INCLUDE_FILE>*/
/*<ECUM_WKUP_ISR_HANDLING_INCLUDE_FILE>*/
#include "Os.h"
/*</ECUM_WKUP_ISR_HANDLING_INCLUDE_FILE>*/
/*<ECUM_INCLUDE_IRQ>*/
#include "SchM_EcuM.h"
/*</ECUM_INCLUDE_IRQ>*/
/*<ECUM_SCHM_INCLUDE_FILE>*/
#include "SchM.h"
/*</ECUM_SCHM_INCLUDE_FILE>*/
/*<ECUM_COMM_CALLBACK_FILE>*/
#include "ComM_EcuM.h"
/*</ECUM_COMM_CALLBACK_FILE>*/
/*<ECUM_COMM_INCLUDE_FILE>*/
#include "ComM.h"
/*</ECUM_COMM_INCLUDE_FILE>*/
/*<ECUM_DET_INCLUDE_FILE>*/
#include "Det.h"
/*</ECUM_DET_INCLUDE_FILE>*/
/*<ECUM_NVM_INCLUDE_FILE>*/
#include "Nvm.h"
/*</ECUM_NVM_INCLUDE_FILE>*/
/*<ECUM_DEM_INCLUDE_FILE>*/
#include "Dem.h"
/*</ECUM_DEM_INCLUDE_FILE>*/
/*<ECUM_RTE_INCLUDE_FILE>*/
#include "Rte_Main.h"
/*</ECUM_RTE_INCLUDE_FILE>*/
/*<ECUM_WDGM_INCLUDE_FILE>*/
/*</ECUM_WDGM_INCLUDE_FILE>*/
/*<ECUM_MCU_INCLUDE_FILE>*/
#include "Mcu.h"
/*</ECUM_MCU_INCLUDE_FILE>*/
/*<ECUM_ADDTIONAL_INCLUDES>*/
#include "EcuStartup.h"
/*</ECUM_ADDTIONAL_INCLUDES>*/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* PRQA S 3453 functiongen *//* MD_MSR_19.7 */
# define EcuM_GlobalSuspend()                                         /*<ECUM_GLOBAL_SUSPEND/>*/ SchM_Enter_EcuM(ECUM_EXCLUSIVE_AREA_0)
# define EcuM_GlobalRestore()                                         /*<ECUM_GLOBAL_RESTORE/>*/ SchM_Exit_EcuM(ECUM_EXCLUSIVE_AREA_0)

# define EcuM_DisableAllWakeupInterrupts()                            /*<ECUM_DISABLE_WAKEUP_INTERRUPTS/>*/ SuspendAllInterrupts()
# define EcuM_EnableAllWakeupInterrupts()                             /*<ECUM_ENABLE_WAKEUP_INTERRUPTS/>*/ ResumeAllInterrupts()

/* Error reporting over Dem */
# define EcuM_SetError(EcuM_EventId, EcuM_EventStatus)                /*<ECUM_DEM_SET_ERROR>*/(Dem_ReportErrorStatus((EcuM_EventId), (EcuM_EventStatus)))/*</ECUM_DEM_SET_ERROR>*/
/* PRQA L:functiongen */

/* Internal defines for execution of the mode switch port */
# if ((ECUM_GEN_MODE_SWITCH_PORT == STD_ON) && (ECUM_INCLUDE_RTE == STD_ON))
  /* The Rte generated symbolic names are only used if rte is used at all and the mode switch port is used */
#  define ECUM_INT_MODE_POST_RUN                                      RTE_MODE_EcuM_Mode_POST_RUN
#  define ECUM_INT_MODE_RUN                                           RTE_MODE_EcuM_Mode_RUN
#  define ECUM_INT_MODE_SHUTDOWN                                      RTE_MODE_EcuM_Mode_SHUTDOWN
#  define ECUM_INT_MODE_SLEEP                                         RTE_MODE_EcuM_Mode_SLEEP
#  define ECUM_INT_MODE_STARTUP                                       RTE_MODE_EcuM_Mode_STARTUP
#  define ECUM_INT_MODE_WAKE_SLEEP                                    RTE_MODE_EcuM_Mode_WAKE_SLEEP
# else
  /* In all other cases use the own definitions. */
#  define ECUM_INT_MODE_POST_RUN                                      ((EcuM_ModeType)ECUM_MODE_POST_RUN)
#  define ECUM_INT_MODE_RUN                                           ((EcuM_ModeType)ECUM_MODE_RUN)
#  define ECUM_INT_MODE_SHUTDOWN                                      ((EcuM_ModeType)ECUM_MODE_SHUTDOWN)
#  define ECUM_INT_MODE_SLEEP                                         ((EcuM_ModeType)ECUM_MODE_SLEEP)
#  define ECUM_INT_MODE_STARTUP                                       ((EcuM_ModeType)ECUM_MODE_STARTUP)
#  define ECUM_INT_MODE_WAKE_SLEEP                                    ((EcuM_ModeType)ECUM_MODE_WAKE_SLEEP)
# endif

/* Function macro used in Precompile variant to notify mode switch events */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
# define ECUM_NOTIFY_MODE_SWITCH(modeEvent)                           /*<ECUM_NOTIFY_MODE_SWITCH/>*/ 

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/
struct EcuM_WakeupSourceDefType
{
  EcuM_WakeupTimeoutType EcuM_ValidationTimeout_t;
  EcuM_WakeupTimeoutType EcuM_CheckWakeupTimeout_t;
  Mcu_ResetType EcuM_McuResetType_t;
  uint8 EcuM_ComMChannel_t;
};

/**********************************************************************************************************************
 *  GLOBAL DATA CONSTANT
 *********************************************************************************************************************/

# define ECUM_START_SEC_CONST_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* constant declaration for setting the mode switch events */
# if ((ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)||( STD_ON == ECUM_IDENTITY_MANAGER_CONFIG ))
  extern CONST(uint8, ECUM_CONST) EcuM_ModePostRun_u8;
  extern CONST(uint8, ECUM_CONST) EcuM_ModeRun_u8;
  extern CONST(uint8, ECUM_CONST) EcuM_ModeShutdown_u8;
  extern CONST(uint8, ECUM_CONST) EcuM_ModeSleep_u8;
  extern CONST(uint8, ECUM_CONST) EcuM_ModeStartup_u8;
  extern CONST(uint8, ECUM_CONST) EcuM_ModeWakeSleep_u8;
# endif

# define ECUM_STOP_SEC_CONST_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define ECUM_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*<ECUM_DEM_CONSTANT_DECLARATION>*/
extern CONST(Dem_EventIdType, ECUM_CONST) EcuM_AllRunRequestKilledError_t;
extern CONST(Dem_EventIdType, ECUM_CONST) EcuM_RamCheckFailedError_t;
/*</ECUM_DEM_CONSTANT_DECLARATION>*/

# define ECUM_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(EcuM_WakeupTimeoutCtrlType, ECUM_VAR_NOINIT) EcuM_WakeupTimeoutTable_at[]; /* PRQA S 3684 */ /* MD_ECUM_14.2 */
extern VAR(EcuM_UserType, ECUM_VAR_NOINIT)          EcuM_UserTable_at[];             /* PRQA S 3684 */ /* MD_ECUM_14.2 */

# define ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define ECUM_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*<ECUM_PRECOMPILE_VARIANT_CONST_EXTERNAL_DECLARATIONS>*/
extern CONST(struct EcuM_WakeupSourceDefType, ECUM_CONST) EcuM_WakeupSourceList_at[]; /* PRQA S 3684 */ /* MD_ECUM_14.2 */
extern CONST(EcuM_WakeupTimeoutType,ECUM_CONST) EcuM_ValidationTimeoutTable_at[]; /* PRQA S 3684 */ /* MD_ECUM_14.2 */
extern CONST(EcuM_SleepModeConfigType,ECUM_CONST) EcuM_SleepModeList_at[]; /* PRQA S 3684 */ /* MD_ECUM_14.2 */
extern CONST(uint8, ECUM_CONST) EcuM_ChannelWakeupSourceIdMap_au8[]; /* PRQA S 3684 */ /* MD_ECUM_14.2 */
/*</ECUM_PRECOMPILE_VARIANT_CONST_EXTERNAL_DECLARATIONS>*/
# define ECUM_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ((ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)||( STD_ON == ECUM_IDENTITY_MANAGER_CONFIG ))
  FUNC(void, ECUM_CODE) EcuM_InternalCall(EcuM_IntFunctionCallType functionId_t);
  FUNC(void, ECUM_CODE) EcuM_ComM_WakeUpIndication(uint8 channel_u8);
  FUNC(void, ECUM_CODE) EcuM_WdgM_SetMode(uint8 mode_u8);
  FUNC(EcuM_WakeupSourceType, ECUM_CODE) EcuM_MapResetReason
  (
    P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_APPL_CONFIG) ConfigPtr
  );
# else
  FUNC(EcuM_WakeupSourceType, ECUM_CODE) EcuM_MapResetReason(void);
  FUNC(void, ECUM_CODE) EcuM_ModeSwitchEvent(uint8 modeEvent_u8);
# endif
  FUNC(boolean, ECUM_CODE) EcuM_ModeRteWaitOnFeedbackEvent(void);

#if (STD_ON == ECUM_INCLUDE_NVRAM_MGR)
  FUNC(uint32, ECUM_CODE) EcuM_GetNvMWriteAllTimeout(void);
  FUNC(uint32, ECUM_CODE) EcuM_GetNvMCancelWriteAllTimeout(void);
  FUNC(void, ECUM_CODE) EcuM_NvMKillWriteAll(void);
#endif

#endif /* ECUM_PRIVATE_CFG_H */
/**********************************************************************************************************************
 *  END OF FILE: ECUM_PRIVATE_CFG.H
 *********************************************************************************************************************/
