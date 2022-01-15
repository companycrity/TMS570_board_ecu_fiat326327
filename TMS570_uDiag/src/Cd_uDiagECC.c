/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Cd_uDiagECC.c
 *     Workspace:  C:/ccmwa/sag_EPS/Projects/EA3/CBDs/TMS570_uDiag/autosar
 *     SW-C Type:  Cd_uDiag
 *  Generated at:  Thu Jan  9 14:18:53 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.17.2
 *       License:  License CBD1010122 valid for CBD1010122 Nexteer  GM MSR_SLP3_BSW_RTE_wGMLAN TexasInstruments TMS570 Texas Instruments
 *
 *   Description:  C-Code implementation template for SW-C <Cd_uDiag>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*---------------------------------------------------------------------------
 * Version Control:
 * Date Created:      Mon Jul  3 09:12:09 2012
 * %version:          8 %
 * %derived_by:       nz63rn %
 * %date_modified:    Mon Jan  6 10:39:07 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/03/12   1       LN      		Initial Version																5769
 * 07/11/12   2       LN      		General Updates																5769
 * 07/13/12   3       LWW      		Changed flash single bit to read flashwrapper address register				5769
 * 07/18/12   4       LN      		Added #defines																5769
 * 07/19/12   5       LN      		Added updates to allow for error recovery									5769
 * 09/27/12   6       LN      		Ensured SERR is enabled during initialization								6059
 * 10/06/12   7                     uDiag Runnable Rate Standardization                                         6458
 * 01/06/14	  8       KMC           Changed uDiagECC_Init to non-RTE function                                  11158
 *                                  Added checking for flash ECC multibit error on speculative fetch           11176
 *                                  QAC cleanup
 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Cd_uDiag.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define UDIAG_C /* Expose uDiag internal elements in header file */
#include "uDiag.h"
#include "ResetCause.h"
#include "esm_regs.h"
#include "flash_regs.h"
#include "tcram_regs.h"
#include "RednRpdShtdn.h"
#include "GlobalMacro.h"
#include "CalConstants.h"

#define D_CORRBUFFSIZE_CNT_U16			8U
#define D_NOMATCH_CNT_U8				99U
#define D_ECCRAMOFFSET_CNT_U32			0x08000000U
#define D_NULLFLASHADDRESS_CNT_U32		0xFFFFFFFFU
#define D_NULLRAMADDRESS_CNT_U32		0xFFFFFFFFU
#define D_RESETERRZEROFLAG_CNT_U32  	0x00000002U


typedef volatile struct
{
  uint32 addr;
  uint16 errorAccum;
} CorrBuffStruct ;

#define UDIAG_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */
STATIC VAR(CorrBuffStruct, AP_UDIAG_VAR_NOINIT) FlashSingleBitCorrBuff_Cnt_M_str[D_CORRBUFFSIZE_CNT_U16];
STATIC VAR(CorrBuffStruct, AP_UDIAG_VAR_NOINIT) RAMSingleBitCorrBuff_Cnt_M_str[D_CORRBUFFSIZE_CNT_U16];
#define UDIAG_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean (standard type)
 * UInt16: Integer in interval [0...65535] (standard type)
 * UInt32: Integer in interval [0...4294967295] (standard type)
 * UInt8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NTCNumber: Enumeration of integer in interval [0...511] with enumerators
 *   NTC_Num_FlashWrapperLgcFlt (1u)
 *   NTC_Num_FlashECCCorr (2u)
 *   NTC_Num_FlashECCMemFlt (3u)
 *   NTC_Num_FlashCRCMemFault (4u)
 *   NTC_Num_NvMBlkDftActA (6u)
 *   NTC_Num_NvMBlkDftActB (7u)
 *   NTC_Num_NvMBlkDftActC (8u)
 *   NTC_Num_CurrentSensorCalOutOfRange (9u)
 *   NTC_Num_EEPROMDiag (10u)
 *   NTC_Num_EEPROMDiagMtrStr (11u)
 *   NTC_Num_PriSnsrTrqStorFlt (12u)
 *   NTC_Num_EEPROMDiagPosTrimStr (13u)
 *   NTC_Num_SecSnsrTrqStorFlt (14u)
 *   NTC_Num_EEPROMDiagPolarityStr (15u)
 *   NTC_Num_RAMDiag_GeneralFlt (16u)
 *   NTC_Num_RAMDiag_WrprLgcFlt (17u)
 *   NTC_Num_RAMDiag_ECCCorrIndFlt (18u)
 *   NTC_Num_RAMDiag_ECCMemFlt (19u)
 *   NTC_Num_RAMDiag_CRCMemFlt (20u)
 *   NTC_Num_RAMDiag_VIMRamFlt (23u)
 *   NTC_Num_RAMDiag_NHET1RamFlt (24u)
 *   NTC_Num_RAMDiag_NHET2RamFlt (25u)
 *   NTC_Num_RAMDiag_ADC1RamFlt (26u)
 *   NTC_Num_RAMDiag_DCANRamFault (27u)
 *   NTC_Num_RAMDiag_ADC2RamFlt (28u)
 *   NTC_Num_RAMDiag_HETTU1RamFlt (29u)
 *   NTC_Num_RAMDiag_HETTU2RamFlt (30u)
 *   NTC_Num_CPU_RegVer (32u)
 *   NTC_Num_CPU_CoreInitFlt (33u)
 *   NTC_Num_CPU_CoreRunTimeFlt (34u)
 *   NTC_Num_CPU_ClockMon (35u)
 *   NTC_Num_CPU_eFuseFlt (36u)
 *   NTC_Num_CPU_MPUViolation (37u)
 *   NTC_Num_CPU_FactPrcsErr (40u)
 *   NTC_Num_PropExeDiag_InitDiag (41u)
 *   NTC_Num_PrgFlwDeadlnFlt (42u)
 *   NTC_Num_PropExeDiag_RunTimeDiag (43u)
 *   NTC_Num_PropExeDiag_COPTimeout (44u)
 *   NTC_Num_PropExeDiag_PrefetchAbort (48u)
 *   NTC_Num_PropExeDiag_DataAbort (49u)
 *   NTC_Num_PerDiag_ADC1Flt (50u)
 *   NTC_Num_PerDiag_ADC2Flt (51u)
 *   NTC_Num_PerDiag_ADCCrossChkFlt (52u)
 *   NTC_Num_PerDiag_IllegalAccess (53u)
 *   NTC_Num_PerDiag_DMAFlt (54u)
 *   NTC_Num_PerDiag_CPUWarning (63u)
 *   NTC_Num_TmpMonFunc (64u)
 *   NTC_Num_TmpMonRunTimeFlt (65u)
 *   NTC_Num_PowerRelayInitFlt (66u)
 *   NTC_Num_PrechargeFailure (67u)
 *   NTC_Num_PowerRelayRunFlt (68u)
 *   NTC_Num_Thermistor (69u)
 *   NTC_Num_RefSupplyVltg (70u)
 *   NTC_Num_TrcvrInterfaceFlt (71u)
 *   NTC_Num_CPUSupplyOvervoltage (72u)
 *   NTC_Num_GateDrvFlt (77u)
 *   NTC_Num_OnStateSingleFET (78u)
 *   NTC_Num_OnStateMultiFET (79u)
 *   NTC_Num_PhaseVoltageVerf (80u)
 *   NTC_Num_PhaseDscnt (81u)
 *   NTC_Num_DigPhaseVoltageVerf (82u)
 *   NTC_Num_PhaseDscntFailedDisable (83u)
 *   NTC_Num_CurrentMeas1 (84u)
 *   NTC_Num_CurrentMeas2 (85u)
 *   NTC_Num_CurrentMeasCrossChk (86u)
 *   NTC_Num_PDSupplyOverVoltage (87u)
 *   NTC_Num_ChargePumpUnderVoltage (88u)
 *   NTC_Num_HwTrqSensor (96u)
 *   NTC_Num_AnaVsDigHwTrq (97u)
 *   NTC_Num_TrqSensorRecoveryFlt (98u)
 *   NTC_Num_TrqSensorScaleInvalid (100u)
 *   NTC_Num_T1vsT2 (101u)
 *   NTC_Num_T1OutofRange (102u)
 *   NTC_Num_T2OutofRange (103u)
 *   NTC_Num_DigT1vsT2 (104u)
 *   NTC_Num_DigT1OutofRange (105u)
 *   NTC_Num_DigT2OutofRange (106u)
 *   NTC_Num_RedT1vsT2 (107u)
 *   NTC_Num_HWACrossChecks (108u)
 *   NTC_Num_HWASnsrCommFault (109u)
 *   NTC_Num_HWASensorRel (110u)
 *   NTC_Num_HWASensorAbs (111u)
 *   NTC_Num_PriMSB_SinCosCorr (112u)
 *   NTC_Num_SecMSB_SinCosCorr (113u)
 *   NTC_Num_PriVsSec_SinCosCorr (114u)
 *   NTC_Num_DigMSBFlt (115u)
 *   NTC_Num_MtrVelFlt (116u)
 *   NTC_Num_HWAtoMtrAngleCorr (117u)
 *   NTC_Num_RedPriVsSec_SinCosCorr (118u)
 *   NTC_Num_TurnCntr_PosLoss (128u)
 *   NTC_Num_TurnCntr_MicroProcFlt (129u)
 *   NTC_Num_TurnCntr_SensorPosFlt (130u)
 *   NTC_Num_TurnCntr_SpiComFlt (131u)
 *   NTC_Num_TurnCntr_HighQuiescCur (132u)
 *   NTC_Num_TurnCntr_MainResets (133u)
 *   NTC_Num_TurnCntr_PosLossNotSpdDep (134u)
 *   NTC_Num_KinematicIntDiag (144u)
 *   NTC_Num_HighFriction (145u)
 *   NTC_Num_DutyCycleExceeded (148u)
 *   NTC_Num_AbsTempThermLimit (149u)
 *   NTC_Num_LatchActive (160u)
 *   NTC_Num_OpTrqVsHwTrq (168u)
 *   NTC_Num_CurrentReas (169u)
 *   NTC_Num_OpVoltage (176u)
 *   NTC_Num_ExVoltageLow (177u)
 *   NTC_Num_ReducedAsstLowVoltage (178u)
 *   NTC_Num_ExVoltageHigh (180u)
 *   NTC_Num_OpVoltageOvrMax (181u)
 *   NTC_Num_BattTransOverVolt (182u)
 *   NTC_Num_IgnConfDiag (184u)
 *   NTC_Num_TurnCntr_LowBattery (185u)
 *   NTC_Num_EEPROMCloseFailed (191u)
 *   NTC_Num_SigPath1CrossChk (192u)
 *   NTC_Num_SigPath2CrossChk (193u)
 *   NTC_Num_SigPath3CrossChk (194u)
 *   NTC_Num_SigPath4CrossChk (195u)
 *   NTC_Num_SigPath5CrossChk (196u)
 *   NTC_Num_DampingFWReached (197u)
 *   NTC_Num_AssistFWReached (198u)
 *   NTC_Num_ReturnFWReached (199u)
 *   NTC_Num_DampingFWFltMode (200u)
 *   NTC_Num_AssistFWFltMode (201u)
 *   NTC_Num_VBICFltMode (202u)
 *   NTC_Num_StaMdsSysC (203u)
 *   NTC_NUM_SysFailureForRotVel (204u)
 *   NTC_NUM_SysFailForRedntRotVel (205u)
 *   NTC_Num_SysFailureForTrqSnsr (206u)
 *   NTC_Num_SysFailureForRedTrqSnsr (207u)
 *   NTC_NUM_SysFailureForCtrlVolt (209u)
 *   NTC_Num_GlblSgnlOvrwrtDet (223u)
 *   NTC_Num_VLF_00 (224u)
 *   NTC_Num_VLF_01 (225u)
 *   NTC_Num_VLF_02 (226u)
 *   NTC_Num_VLF_03 (227u)
 *   NTC_Num_VLF_04 (228u)
 *   NTC_Num_VLF_05 (229u)
 *   NTC_Num_VLF_06 (230u)
 *   NTC_Num_VLF_07 (231u)
 *   NTC_Num_VLF_08 (232u)
 *   NTC_Num_VLF_09 (233u)
 *   NTC_Num_VLF_10 (234u)
 *   NTC_Num_VLF_11 (235u)
 *   NTC_Num_VLF_12 (236u)
 *   NTC_Num_VLF_13 (237u)
 *   NTC_Num_VLF_14 (238u)
 *   NTC_Num_VLF_15 (239u)
 *   NTC_Num_VLF_16 (240u)
 *   NTC_Num_VLF_17 (241u)
 *   NTC_Num_VLF_18 (242u)
 *   NTC_Num_VLF_19 (243u)
 *   NTC_Num_VLF_20 (244u)
 *   NTC_Num_VLF_21 (245u)
 *   NTC_Num_VLF_22 (246u)
 *   NTC_Num_VLF_23 (247u)
 *   NTC_Num_VLF_24 (248u)
 *   NTC_Num_VLF_25 (249u)
 *   NTC_Num_VLF_26 (250u)
 *   NTC_Num_VLF_27 (251u)
 *   NTC_Num_VLF_28 (252u)
 *   NTC_Num_VLF_29 (253u)
 *   NTC_Num_VLF_30 (254u)
 *   NTC_Num_VLF_31 (255u)
 *   NTC_Num_BusOffCh1 (256u)
 *   NTC_Num_BusOffCh1NodeMute (257u)
 *   NTC_Num_Node1AAbsent (258u)
 *   NTC_Num_Node1AFaulty (259u)
 *   NTC_Num_Node1BAbsent (260u)
 *   NTC_Num_Node1BFaulty (261u)
 *   NTC_Num_Node1CAbsent (262u)
 *   NTC_Num_Node1CFaulty (263u)
 *   NTC_Num_Node1DAbsent (264u)
 *   NTC_Num_Node1DFaulty (265u)
 *   NTC_Num_Node1EAbsent (266u)
 *   NTC_Num_Node1EFaulty (267u)
 *   NTC_Num_Node1FAbsent (268u)
 *   NTC_Num_Node1FFaulty (269u)
 *   NTC_Num_Node1GAbsent (270u)
 *   NTC_Num_Node1GFaulty (271u)
 *   NTC_Num_BusOffCh2 (272u)
 *   NTC_Num_Node2AAbsent (273u)
 *   NTC_Num_Node2AFaulty (274u)
 *   NTC_Num_Node2BAbsent (275u)
 *   NTC_Num_Node2BFaulty (276u)
 *   NTC_Num_Node2CAbsent (277u)
 *   NTC_Num_Node2CFaulty (278u)
 *   NTC_Num_Node2DAbsent (279u)
 *   NTC_Num_Node2DFaulty (280u)
 *   NTC_Num_Node2EAbsent (281u)
 *   NTC_Num_Node2EFaulty (282u)
 *   NTC_Num_Node2FAbsent (283u)
 *   NTC_Num_Node2FFaulty (284u)
 *   NTC_Num_Node2GAbsent (285u)
 *   NTC_Num_Node2GFaulty (286u)
 *   NTC_Num_InvalidMsg_M (288u)
 *   NTC_Num_MissingMsg_M (289u)
 *   NTC_Num_CRCFltMsg_M (290u)
 *   NTC_Num_PgrsCntFltMsg_M (291u)
 *   NTC_Num_DataRngFltMsg_M (292u)
 *   NTC_Num_DataRateFltMsg_M (293u)
 *   NTC_Num_DataOtherFltMsg_M (294u)
 *   NTC_Num_DataOther2FltMsg_M (295u)
 *   NTC_Num_InvalidMsg_N (296u)
 *   NTC_Num_MissingMsg_N (297u)
 *   NTC_Num_CRCFltMsg_N (298u)
 *   NTC_Num_PgrsCntFltMsg_N (299u)
 *   NTC_Num_DataRngFltMsg_N (300u)
 *   NTC_Num_DataRateFltMsg_N (301u)
 *   NTC_Num_DataOtherFltMsg_N (302u)
 *   NTC_Num_DataOtherFlt2Msg_N (303u)
 *   NTC_Num_InvalidMsg_O (304u)
 *   NTC_Num_MissingMsg_O (305u)
 *   NTC_Num_CRCFltMsg_O (306u)
 *   NTC_Num_PgrsCntFltMsg_O (307u)
 *   NTC_Num_DataRngFltMsg_O (308u)
 *   NTC_Num_DataRateFltMsg_O (309u)
 *   NTC_Num_DataOtherFltMsg_O (310u)
 *   NTC_Num_InvalidMsg_P (312u)
 *   NTC_Num_MissingMsg_P (313u)
 *   NTC_Num_CRCFltMsg_P (314u)
 *   NTC_Num_PgrsCntFltMsg_P (315u)
 *   NTC_Num_DataRngFltMsg_P (316u)
 *   NTC_Num_DataRateFltMsg_P (317u)
 *   NTC_Num_DataOtherFltMsg_P (318u)
 *   NTC_Num_InvalidMsg_Q (320u)
 *   NTC_Num_MissingMsg_Q (321u)
 *   NTC_Num_CRCFltMsg_Q (322u)
 *   NTC_Num_PgrsCntFltMsg_Q (323u)
 *   NTC_Num_DataRngFltMsg_Q (324u)
 *   NTC_Num_DataRateFltMsg_Q (325u)
 *   NTC_Num_DataOtherFltMsg_Q (326u)
 *   NTC_Num_InvalidMsg_R (328u)
 *   NTC_Num_MissingMsg_R (329u)
 *   NTC_Num_CRCFltMsg_R (330u)
 *   NTC_Num_PgrsCntFltMsg_R (331u)
 *   NTC_Num_DataRngFltMsg_R (332u)
 *   NTC_Num_DataRateFltMsg_R (333u)
 *   NTC_Num_DataOtherFltMsg_R (334u)
 *   NTC_Num_DataOtherFlt2Msg_R (335u)
 *   NTC_Num_InvalidMsg_S (336u)
 *   NTC_Num_MissingMsg_S (337u)
 *   NTC_Num_CRCFltMsg_S (338u)
 *   NTC_Num_PgrsCntFltMsg_S (339u)
 *   NTC_Num_DataRngFltMsg_S (340u)
 *   NTC_Num_DataRateFltMsg_S (341u)
 *   NTC_Num_DataOtherFltMsg_S (342u)
 *   NTC_Num_InvalidMsg_T (344u)
 *   NTC_Num_MissingMsg_T (345u)
 *   NTC_Num_CRCFltMsg_T (346u)
 *   NTC_Num_PgrsCntFltMsg_T (347u)
 *   NTC_Num_DataRngFltMsg_T (348u)
 *   NTC_Num_DataRateFltMsg_T (349u)
 *   NTC_Num_DataOtherFltMsg_T (350u)
 *   NTC_Num_InvalidMsg_U (352u)
 *   NTC_Num_MissingMsg_U (353u)
 *   NTC_Num_CRCFltMsg_U (354u)
 *   NTC_Num_PgrsCntFltMsg_U (355u)
 *   NTC_Num_DataRngFltMsg_U (356u)
 *   NTC_Num_DataRateFltMsg_U (357u)
 *   NTC_Num_DataOtherFltMsg_U (358u)
 *   NTC_Num_InvalidMsg_V (360u)
 *   NTC_Num_MissingMsg_V (361u)
 *   NTC_Num_CRCFltMsg_V (362u)
 *   NTC_Num_PgrsCntFltMsg_V (363u)
 *   NTC_Num_DataRngFltMsg_V (364u)
 *   NTC_Num_DataRateFltMsg_V (365u)
 *   NTC_Num_DataOtherFltMsg_V (366u)
 *   NTC_Num_InvalidMsg_W (368u)
 *   NTC_Num_MissingMsg_W (369u)
 *   NTC_Num_CRCFltMsg_W (370u)
 *   NTC_Num_PgrsCntFltMsg_W (371u)
 *   NTC_Num_DataRngFltMsg_W (372u)
 *   NTC_Num_DataRateFltMsg_W (373u)
 *   NTC_Num_DataOtherFltMsg_W (374u)
 *   NTC_Num_InvalidMsg_X (376u)
 *   NTC_Num_MissingMsg_X (377u)
 *   NTC_Num_CRCFltMsg_X (378u)
 *   NTC_Num_PgrsCntFltMsg_X (379u)
 *   NTC_Num_DataRngFltMsg_X (380u)
 *   NTC_Num_DataRateFltMsg_X (381u)
 *   NTC_Num_DataOtherFltMsg_X (382u)
 *   NTC_Num_InvalidMsg_Y (384u)
 *   NTC_Num_MissingMsg_Y (385u)
 *   NTC_Num_CRCFltMsg_Y (386u)
 *   NTC_Num_PgrsCntFltMsg_Y (387u)
 *   NTC_Num_DataRngFltMsg_Y (388u)
 *   NTC_Num_DataRateFltMsg_Y (389u)
 *   NTC_Num_DataOtherFltMsg_Y (390u)
 *   NTC_Num_InvalidMsg_Z (392u)
 *   NTC_Num_MissingMsg_Z (393u)
 *   NTC_Num_CRCFltMsg_Z (394u)
 *   NTC_Num_PgrsCntFltMsg_Z (395u)
 *   NTC_Num_DataRngFltMsg_Z (396u)
 *   NTC_Num_DataRateFltMsg_Z (397u)
 *   NTC_Num_DataOtherFltMsg_Z (398u)
 *   NTC_Num_DSTXORActive (399u)
 *   NTC_Num_InvalidMsg_AA (400u)
 *   NTC_Num_MissingMsg_AA (401u)
 *   NTC_Num_CRCFltMsg_AA (402u)
 *   NTC_Num_PgrsCntFltMsg_AA (403u)
 *   NTC_Num_DataRngFltMsg_AA (404u)
 *   NTC_Num_DataRateFltMsg_AA (405u)
 *   NTC_Num_DataOtherFltMsg_AA (406u)
 *   NTC_Num_InvalidMsg_AB (408u)
 *   NTC_Num_MissingMsg_AB (409u)
 *   NTC_Num_CRCFltMsg_AB (410u)
 *   NTC_Num_PgrsCntFltMsg_AB (411u)
 *   NTC_Num_DataRngFltMsg_AB (412u)
 *   NTC_Num_DataRateFltMsg_AB (413u)
 *   NTC_Num_DataOtherFltMsg_AB (414u)
 *   NTC_Num_InvalidMsg_AC (416u)
 *   NTC_Num_MissingMsg_AC (417u)
 *   NTC_Num_CRCFltMsg_AC (418u)
 *   NTC_Num_PgrsCntFltMsg_AC (419u)
 *   NTC_Num_DataRngFltMsg_AC (420u)
 *   NTC_Num_DataRateFltMsg_AC (421u)
 *   NTC_Num_DataOtherFltMsg_AC (422u)
 *   NTC_Num_InvalidMsg_AD (424u)
 *   NTC_Num_MissingMsg_AD (425u)
 *   NTC_Num_CRCFltMsg_AD (426u)
 *   NTC_Num_PgrsCntFltMsg_AD (427u)
 *   NTC_Num_DataRngFltMsg_AD (428u)
 *   NTC_Num_DataRateFltMsg_AD (429u)
 *   NTC_Num_DataOtherFltMsg_AD (430u)
 *   NTC_Num_InvalidMsg_AE (432u)
 *   NTC_Num_MissingMsg_AE (433u)
 *   NTC_Num_CRCFltMsg_AE (434u)
 *   NTC_Num_PgrsCntFltMsg_AE (435u)
 *   NTC_Num_DataRngFltMsg_AE (436u)
 *   NTC_Num_DataRateFltMsg_AE (437u)
 *   NTC_Num_DataOtherFltMsg_AE (438u)
 *   NTC_Num_InvalidMsg_AF (440u)
 *   NTC_Num_MissingMsg_AF (441u)
 *   NTC_Num_CRCFltMsg_AF (442u)
 *   NTC_Num_PgrsCntFltMsg_AF (443u)
 *   NTC_Num_DataRngFltMsg_AF (444u)
 *   NTC_Num_DataRateFltMsg_AF (445u)
 *   NTC_Num_DataOtherFltMsg_AF (446u)
 *   NTC_Num_InvalidMsg_AG (448u)
 *   NTC_Num_MissingMsg_AG (449u)
 *   NTC_Num_CRCFltMsg_AG (450u)
 *   NTC_Num_PgrsCntFltMsg_AG (451u)
 *   NTC_Num_DataRngFltMsg_AG (452u)
 *   NTC_Num_DataRateFltMsg_AG (453u)
 *   NTC_Num_DataOtherFltMsg_AG (454u)
 *   NTC_Num_InvalidMsg_AH (456u)
 *   NTC_Num_MissingMsg_AH (457u)
 *   NTC_Num_CRCFltMsg_AH (458u)
 *   NTC_Num_PgrsCntFltMsg_AH (459u)
 *   NTC_Num_DataRngFltMsg_AH (460u)
 *   NTC_Num_DataRateFltMsg_AH (461u)
 *   NTC_Num_DataOtherFltMsg_AH (462u)
 *   NTC_Num_FlexrayCommunicationError (465u)
 *   NTC_Num_InvalidMsg_AI (466u)
 *   NTC_Num_MissingMsg_AI (467u)
 *   NTC_Num_MissingMsg_AJ (473u)
 *   NTC_Num_MissingMsg_AK (481u)
 *   NTC_Num_MissingMsg_AL (489u)
 *   NTC_Num_SysConsistencyVerf (496u)
 *   NTC_Num_ConfigMisMatch (497u)
 *   NTC_Num_CalNotPrgmd (498u)
 *   NTC_Num_TunSetNotPrgmd (499u)
 *   NTC_Num_EOLVehTunNtPerf (501u)
 *   NTC_Num_MtrSensorNotTrimmed (502u)
 *   NTC_Num_HWASensorNotTrimmed (504u)
 *   NTC_Num_HWASensorTrimNoAttempt (505u)
 *   NTC_Num_TrqSensorScaleNotSet (506u)
 *   NTC_Num_TrqSensorNotTrimmed (507u)
 *   NTC_Num_DigTrqSensorScaleNotSet (509u)
 *   NTC_Num_DigTrqSensorNotTrimmed (510u)
 * NxtrDiagMgrStatus: Enumeration of integer in interval [0...255] with enumerators
 *   NTC_STATUS_PASSED (0u)
 *   NTC_STATUS_FAILED (1u)
 *   NTC_STATUS_PREPASSED (2u)
 *   NTC_STATUS_PREFAILED (3u)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Defined Constants
 *
 **********************************************************************************************************************
 *
 * Primitive Type Constants:
 * =========================
 * Boolean: D_FALSE_CNT_LGC = FALSE
 * Boolean: D_TRUE_CNT_LGC = TRUE
 * UInt16: D_ZERO_CNT_U16 = 0u
 * UInt32: D_ONE_CNT_U32 = 1u
 * UInt32: D_ZERO_CNT_U32 = 0u
 * UInt8: D_ZERO_CNT_U8 = 0u
 *
 *********************************************************************************************************************/



#define RTE_START_SEC_CD_UDIAG_APPL_CODE
#include "MemMap.h" /* PRQA S 5087 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: uDiagECC_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/

FUNC(void, RTE_CD_UDIAG_APPL_CODE) uDiagECC_Per(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: uDiagECC_Per
 *********************************************************************************************************************/
	VAR(uint8, AUTOMATIC) index_Cnt_T_u08;
	VAR(ENUM_ResetCause, AUTOMATIC) ResetCause_Cnt_T_Enum;

	/* Configurable Start of Runnable Checkpoint */
	Rte_Call_uDiagECC_Per_CP0_CheckpointReached();
	
	ResetCause_Cnt_T_Enum = ResetCause_Cnt_Enum;

	for (index_Cnt_T_u08 = D_ZERO_CNT_U8; (index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16); index_Cnt_T_u08++)
	{
		FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum = DiagNStep_m(FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum, k_FlashECCDiag_Cnt_str);
	}

	for (index_Cnt_T_u08 = D_ZERO_CNT_U8; (index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16); index_Cnt_T_u08++)
	{
		RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum = DiagNStep_m(RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum, k_RAMECCDiag_Cnt_str);
	}

	/* Flash ECC multibit error occurred on speculative fetch? */
	if ((0UL != (ESMREGS->ESMSR3 & D_FMCUNCECCESMCHANNEL_CNT_U32)) && (DATAMULBITFLSECCFAILED != ResetCause_Cnt_T_Enum))
	{
#if(BC_UDIAG_UDIAGECCPERTRUSTED == STD_OFF)
			TWrapC_uDiagECC_RednRpdShtdn();
#else
			uDiagECC_RednRpdShtdn();
#endif		
	}

	/* Configurable Start of Runnable Checkpoint */
	Rte_Call_uDiagECC_Per_CP1_CheckpointReached();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}



#define RTE_STOP_SEC_CD_UDIAG_APPL_CODE
#include "MemMap.h" /* PRQA S 5087 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /*****************************************************************************
* Name:        uDiagECC_Init
* Description: Flash ECC Error Handling uDiag Initialization
* Inputs:      None
* Outputs:     None
*****************************************************************************/

FUNC(void, CD_UDIAG_APPL_CODE) uDiagECC_Init(void)
{
	VAR(uint8, AUTOMATIC) index_Cnt_T_u08;

	/* Configure FLASH ECC Registers */
	/* Set Single Bit Error Threshold to 1*/
	flashWREG->FEDACCTRL2 = D_ONE_CNT_U32;

	/* Disable the automatic nError Pin response */
	ESMREGS->ESMDEPAPR1 = D_FMCCORESMCHANNEL_CNT_U32;

	/* Enable Correctable ECC ESM Interrupt (Map to ESML) */
	ESMREGS->ESMIESR1 = D_FMCCORESMCHANNEL_CNT_U32;
	ESMREGS->ESMILCR1 = D_FMCCORESMCHANNEL_CNT_U32;


	/* Configure RAM ECC Registers */
	/* Set Single Bit Error Threshold to 1 for both Even and Odd Addresses*/
	TCRAM0->RAMTHRESHOLD = D_ONE_CNT_U32;
	TCRAM1->RAMTHRESHOLD = D_ONE_CNT_U32;

	/* allow SERR to be reported to ESM */
	TCRAM0->RAMINTCTRL = D_ONE_CNT_U32;
	TCRAM1->RAMINTCTRL = D_ONE_CNT_U32;

	/* Disable the automatic nError Pin response */
	ESMREGS->ESMDEPAPR1 = D_RAMEVENCORESMCHANNEL_CNT_U32 | D_RAMODDCORESMCHANNEL_CNT_U32;

	/* Enable Correctable ECC ESM Interrupts (Map to ESML) */
	ESMREGS->ESMIESR1 = D_RAMEVENCORESMCHANNEL_CNT_U32 | D_RAMODDCORESMCHANNEL_CNT_U32;
	ESMREGS->ESMILCR1 = D_RAMEVENCORESMCHANNEL_CNT_U32 | D_RAMODDCORESMCHANNEL_CNT_U32;

	for (index_Cnt_T_u08 = D_ZERO_CNT_U8; (index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16); index_Cnt_T_u08++)
	{
		FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr = D_NULLFLASHADDRESS_CNT_U32;
		FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum = D_ZERO_CNT_U16;
	}

	for (index_Cnt_T_u08 = D_ZERO_CNT_U8; (index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16); index_Cnt_T_u08++)
	{
		RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr = D_NULLRAMADDRESS_CNT_U32;
		RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum = D_ZERO_CNT_U16;
	}

}

/*****************************************************************************
* Name:        FlashECCCorrErr
* Description: Flash ECC Correctable Error Handling
* Inputs:      None
* Outputs:     None
*****************************************************************************/
FUNC(void, CD_UDIAG_APPL_CODE) FlashECCCorrErr(void)
{
	VAR(uint32, AUTOMATIC) FailedAddress_Cnt_T_u32;
	VAR(uint8, AUTOMATIC) addrMatchIndex_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) emptyMatchIndex_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) zeroMatchIndex_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) index_Cnt_T_u08;

	/* Set Single Bit Soft Fault */
	(void)Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_FlashECCCorr, D_NTCPARMBIT0_CNT_U8, NTC_STATUS_FAILED);

	/* Read location of memory fault */
	FailedAddress_Cnt_T_u32 = flashWREG->FCORERRADD;

	/* Store in Buffer, process over threshold events */
	addrMatchIndex_Cnt_T_u08 = D_NOMATCH_CNT_U8;
	emptyMatchIndex_Cnt_T_u08 = D_NOMATCH_CNT_U8;
	zeroMatchIndex_Cnt_T_u08 = D_NOMATCH_CNT_U8;

	for (index_Cnt_T_u08 = D_ZERO_CNT_U8; ((addrMatchIndex_Cnt_T_u08 == D_NOMATCH_CNT_U8) && (index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)); index_Cnt_T_u08++)
	{
		if(FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr == FailedAddress_Cnt_T_u32)
		{
			addrMatchIndex_Cnt_T_u08 = index_Cnt_T_u08;
		}
		else
		{
			if(FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr == D_NULLFLASHADDRESS_CNT_U32)
			{
				emptyMatchIndex_Cnt_T_u08 = index_Cnt_T_u08;
			}
			if(FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum == D_ZERO_CNT_U16)
			{
				zeroMatchIndex_Cnt_T_u08 = index_Cnt_T_u08;
			}
		}
	}
	if( addrMatchIndex_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
	{
		index_Cnt_T_u08 = addrMatchIndex_Cnt_T_u08;
	}
	else if (emptyMatchIndex_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
	{
		index_Cnt_T_u08 = emptyMatchIndex_Cnt_T_u08;
	}
	else
	{
		if (zeroMatchIndex_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
		{
			index_Cnt_T_u08 = zeroMatchIndex_Cnt_T_u08;
		}
	}

	if(index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
	{
		FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr = FailedAddress_Cnt_T_u32;
		FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum = DiagPStep_m(FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum, k_FlashECCDiag_Cnt_str);
		if (DiagFailed_m(FlashSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum, k_FlashECCDiag_Cnt_str) == D_TRUE_CNT_LGC)
		{
			/* Set Single Bit Hard Fault */
			(void)Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_FlashECCMemFlt, D_NTCPARMBIT0_CNT_U8, NTC_STATUS_FAILED);
		}
	}
	else
	{
		/* Set Single Bit Hard Fault */
		(void)Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_FlashECCMemFlt, D_NTCPARMBIT0_CNT_U8, NTC_STATUS_FAILED);
	}

	/* Clear Single Bit Error Flag */
	flashWREG->FEDACSTATUS = D_RESETERRZEROFLAG_CNT_U32;

	/* No Need to reset the Occurence Accumlator, it will be automatically cleared */
}

/*****************************************************************************
* Name:        RAMECCCorrErr
* Description: RAM ECC Correctable Error Handling
* Inputs:      None
* Outputs:     None
*****************************************************************************/
FUNC(void, CD_UDIAG_APPL_CODE) RAMECCCorrErr(uint8 BANK)
{
	VAR(uint32, AUTOMATIC) FailedAddress_Cnt_T_u32;
	VAR(uint8, AUTOMATIC) addrMatchIndex_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) emptyMatchIndex_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) zeroMatchIndex_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) index_Cnt_T_u08;

	/* Set Single Bit Soft Fault */
	(void)Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_RAMDiag_ECCCorrIndFlt, D_NTCPARMBIT0_CNT_U8, NTC_STATUS_FAILED);

	/* Read location of memory fault */
	if (D_EVENBANK_CNT_U8 == BANK)
	{
		FailedAddress_Cnt_T_u32 = TCRAM0->RAMSERRADDR | D_ECCRAMOFFSET_CNT_U32;
	}
	else
	{
		FailedAddress_Cnt_T_u32 = TCRAM1->RAMSERRADDR | D_ECCRAMOFFSET_CNT_U32;
	}
	/* Store in Buffer, process over threshold events */
	addrMatchIndex_Cnt_T_u08 = D_NOMATCH_CNT_U8;
	emptyMatchIndex_Cnt_T_u08 = D_NOMATCH_CNT_U8;
	zeroMatchIndex_Cnt_T_u08 = D_NOMATCH_CNT_U8;

	for (index_Cnt_T_u08 = D_ZERO_CNT_U8; ((addrMatchIndex_Cnt_T_u08 == D_NOMATCH_CNT_U8) && (index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)); index_Cnt_T_u08++)
	{
		if(RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr == FailedAddress_Cnt_T_u32)
		{
			addrMatchIndex_Cnt_T_u08 = index_Cnt_T_u08;
		}
		else
		{
			if(RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr == D_NULLRAMADDRESS_CNT_U32)
			{
				emptyMatchIndex_Cnt_T_u08 = index_Cnt_T_u08;
			}
			if(RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum == D_ZERO_CNT_U16)
			{
				zeroMatchIndex_Cnt_T_u08 = index_Cnt_T_u08;
			}
		}
	}
	if( addrMatchIndex_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
	{
		index_Cnt_T_u08 = addrMatchIndex_Cnt_T_u08;
	}
	else if (emptyMatchIndex_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
	{
		index_Cnt_T_u08 = emptyMatchIndex_Cnt_T_u08;
	}
	else
	{
		if (zeroMatchIndex_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
		{
			index_Cnt_T_u08 = zeroMatchIndex_Cnt_T_u08;
		}
	}

	if(index_Cnt_T_u08 < D_CORRBUFFSIZE_CNT_U16)
	{
		RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].addr = FailedAddress_Cnt_T_u32;
		RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum = DiagPStep_m(RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum, k_RAMECCDiag_Cnt_str);
		if (DiagFailed_m(RAMSingleBitCorrBuff_Cnt_M_str[index_Cnt_T_u08].errorAccum, k_RAMECCDiag_Cnt_str) == D_TRUE_CNT_LGC)
		{
			/* Set Single Bit Hard Fault */
			(void)Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_RAMDiag_ECCMemFlt, D_NTCPARMBIT0_CNT_U8, NTC_STATUS_FAILED);
		}
	}
	else
	{
		/* Set Single Bit Hard Fault */
		(void)Rte_Call_NxtrDiagMgr_SetNTCStatus(NTC_Num_RAMDiag_ECCMemFlt, D_NTCPARMBIT0_CNT_U8, NTC_STATUS_FAILED);
	}

	/* Reset Occurrence Counter and Clear SERR Flag */
	if (D_EVENBANK_CNT_U8 == BANK)
	{
		TCRAM0->RAMOCCUR = D_ZERO_CNT_U32;
		TCRAM0->RAMERRSTATUS = D_ONE_CNT_U32;
	}
	else
	{
		TCRAM1->RAMOCCUR = D_ZERO_CNT_U32;
		TCRAM1->RAMERRSTATUS = D_ONE_CNT_U32;
	}
}

/*****************************************************************************
* Name:        FlashECCUncorrErr
* Description: Flash ECC Uncorrectable Address Parity Error Handling
* Inputs:      None
* Outputs:     None
*****************************************************************************/
FUNC(void, CD_UDIAG_APPL_CODE) FlashECCUncorrErr(void)
{
	/* Software Reset and Try to log fault on startup */
	RednRpdShtdn(FMCUNCORRERR);
}

/*****************************************************************************
* Name:        RAMECCUncorrErr
* Description: RAM ECC Uncorrectable Error Handling
* Inputs:      None
* Outputs:     None
*****************************************************************************/
FUNC(void, CD_UDIAG_APPL_CODE) RAMECCUncorrErr(uint8 BANK)
{
	if (D_EVENBANK_CNT_U8 == BANK)
	{
		/* Software Reset and Try to log fault on startup */
		RednRpdShtdn(B0UNCORRERR);
	}
	else
	{
		/* Software Reset and Try to log fault on startup */
	 	RednRpdShtdn(B1UNCORRERR);
	}
}

/*****************************************************************************
* Name:        FlashECCLiveLockErr
* Description: Flash ECC Live Lock Error Handling
* Inputs:      None
* Outputs:     None
*****************************************************************************/
FUNC(void, CD_UDIAG_APPL_CODE) FlashECCLiveLockErr(void)
{
	/* Software Reset and Try to log fault on startup */
	RednRpdShtdn(FLSECCLIVELOCK);
}

/*****************************************************************************
* Name:        uDiagECC_RednRpdShtdn
* Description: uDiagECC call to RednRpdShtdn with Flash ECC Multibit reset cause
* Inputs:      None
* Outputs:     None
*****************************************************************************/
FUNC(void, CD_UDIAG_APPL_CODE) uDiagECC_RednRpdShtdn(void)
{
	/* Software Reset and Try to log fault on startup */
	RednRpdShtdn (DATAMULBITFLSECCFAILED);
}

#if(BC_UDIAG_UDIAGECCPERTRUSTED == STD_OFF)
	/* uDiagECC_RedRpdShtdn Trusted Function Call Support */
	void TWrapC_uDiagECC_RednRpdShtdn(void)
	{
		(void)CallTrustedFunction((TrustedFunctionIndexType)TWrapS_uDiagECC_RednRpdShtdn, (TrustedFunctionParameterRefType)0);
	}
	void TRUSTED_TWrapS_uDiagECC_RednRpdShtdn(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams)
	{
		/* TODO: Do any parameter checking here if needed */
		uDiagECC_RednRpdShtdn();
	}
#endif





/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
