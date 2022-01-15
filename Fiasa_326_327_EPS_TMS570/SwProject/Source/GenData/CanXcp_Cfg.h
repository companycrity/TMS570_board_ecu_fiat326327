/* -----------------------------------------------------------------------------
  Filename:    CanXcp_Cfg.h
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: CanXcp
               
               Configuration   : C:\SynergyProjects\Fiasa_326_327_EPS_TMS570-nzx5jd\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-05-29  15:06:43
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

#if !defined(CANXCP_CFG_H)
#define CANXCP_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ 
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"
#include "CanXcp_Types.h"
/* -----------------------------------------------------------------------------
    &&&~ Version Defines
 ----------------------------------------------------------------------------- */

/*  */
#define CP_XCPONCANDLL_VERSION               0x0115u
#define CP_XCPONCANDLL_RELEASE_VERSION       0x02u
#ifndef CANXCP_OSTYPE_AUTOSAR
#define CANXCP_OSTYPE_AUTOSAR
#endif


#ifndef CANXCP_USE_DUMMY_FUNCTIONS
#define CANXCP_USE_DUMMY_FUNCTIONS           STD_OFF
#endif


#ifndef CANXCP_USE_DUMMY_STATEMENT
#define CANXCP_USE_DUMMY_STATEMENT           STD_ON
#endif


#ifndef CANXCP_CPU_TMS470
#define CANXCP_CPU_TMS470
#endif


#ifndef CANXCP_PROCESSOR_TI_TMS470_LS30316U
#define CANXCP_PROCESSOR_TI_TMS470_LS30316U
#endif


#ifndef CANXCP_COMP_TI
#define CANXCP_COMP_TI
#endif


#ifndef CANXCP_CRC_CHECK
#define CANXCP_CRC_CHECK                     STD_OFF
#endif


#ifndef CANXCP_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANXCP_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF
#endif


#ifndef CANXCP_ATOMIC_VARIABLE_ACCESS
#define CANXCP_ATOMIC_VARIABLE_ACCESS        32
#endif


#ifndef CANXCP_AUTOSARVERSION
#define CANXCP_AUTOSARVERSION                3
#endif




/* Transport Layer */
/*  */
#define CANXCP_MULTI_CHANNEL_DISABLED
#define CANXCP_MULTI_CONN_PROT_DISABLED
#define XCP_TRANSPORT_LAYER_TYPE_CAN_ASR
#define CANXCP_TRANSPORT_LAYER_VERSION       0x0100u
#define CANXCP_VARIABLE_DLC_DISABLED
#define kXcpSendQueueMinSize                 1u
#define CANXCP_CONFIG_VARIANT                1
#define CANXCP_PROD_ERROR_DETECT             STD_ON
#define CANXCP_DEV_ERROR_DETECT              STD_OFF
#define CANXCP_VERSION_INFO_API              STD_OFF
/* Enable/Disable transport layer activation control API */
#define CANXCP_ENABLE_CONTROL                STD_OFF
#define CANXCP_NUMBER_OF_CHANNELS            1u
#define kCanXcpMaxCTO                        8u
#define kCanXcpMaxDTO                        8u
#define CANXCP_AMD_RUNTIME_MEASUREMENT       STD_OFF
#define CANXCP_USE_PDUINFOTYPE               STD_OFF
#define CANXCP_CONFIGURATOR  4
#define CANXCP_SILENT_CHECK STD_OFF
#define CANXCP_START_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern CONST(uint8, CANXCP_CONST) CanXcp_NumberOfChannels;
#define CANXCP_STOP_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANXCP_START_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern CONST(CanXcp_XcpPduType, CANXCP_PBCFG) CanXcp_PduIdField[];
extern CONST(CanXcp_ConfigType, CANXCP_PBCFG) CanXcp_Config_EcuMConfiguration;
extern CONST(NetworkHandleType, CANXCP_PBCFG) CanXcp_NwHMapping[];

#define CANXCP_STOP_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ Multiple Configuration Container forwarding to Init Struct
 ----------------------------------------------------------------------------- */

#define CanXcp_Config                        CanXcp_Config_EcuMConfiguration




#endif /* CANXCP_CFG_H */
