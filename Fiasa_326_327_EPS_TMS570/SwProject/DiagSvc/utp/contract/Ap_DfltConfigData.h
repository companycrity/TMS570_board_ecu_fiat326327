/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Ap_DfltConfigData.h
* Module Description:
* Product           : Gen II Plus - EA3.0
* Author            : Owen Tosh
*****************************************************************************/
/* Version Control:
 * Date Created:      Thu Jun 20 10:00:00 2013
 * %version:          EA3#6 %
 * %derived_by:       nzdx8v %
 * %date_modified:    Tue Sep 24 11:27:18 2013 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date       Rev     Author   Change Description                                                               SCR #
 * --------   ------  -------  ------------------------------------------------------------------------------  -------
 * 07/16/15    2      PS       Added T_SwVer_Cnt_u8 and T_SwDataVer_Cnt_u8 for DID's 0xF181 and 0xF182		  CR#13482
 * 10/30/15    3      PS       Implemented software according to SCIR 4A and DSR 3A						  	  EA3#4252
 * 11/16/15    4      PS       Implemented software according to SCIR 5A and DSR 5A	 						  EA3#4579
 * 12/01/15    5      PS       Implemented software according to SCIR 7A and DSR 6A	 						  EA3#4681, EA3#4686
 * 03/16/16    6      PS       Implemented software according to SCIR 8A and DSR 7A	 						  EA3#6773, EA3#6775
 * 04/01/16    7      PS       Update to DID 0xF181	 						  								  EA3#6773, EA3#6775
 */


#ifndef RTE_AP_DFLTCONFIGDATA_H
#define RTE_AP_DFLTCONFIGDATA_H


typedef struct
{
	uint8 DiagnosticIdentification_DIDF100_ASCII_u08[7];
	uint8 CalibrationSwIdentification_DIDF181_ASCII_u08[14];
	uint8 CalibrationSwIdentification_DIDF182_ASCII_u08[14];
	uint8 ECUSparePartNoTAS_DIDF187_ASCII_u08[11];
	uint8 ECUSparePartNoTOS_DIDF187_ASCII_u08[11];
	uint8 VehicleManfECUSwNo_DIDF188_ASCII_u08[11];
	uint8 VehicleManfECUHwNo_DIDF191_ASCII_u08[11];
	uint8 SupplierManfECUHwPartNo_DIDF192_ASCII_u08[11];
	uint8 SupplierManfECUHwVerNo_DIDF193_ASCII_u08;
	boolean AbsAngleSensorType_Cnt_lgc;
} CustDIDCals_str;


extern CONST(uint8, CDD_PARTNUMBER) k_SWRelNum_Cnt_u8[50];
extern CONST(CustDIDCals_str, CAL_CONST) k_CustDIDCals_Cnt_u08;

#endif /* RTE_AP_DFLTCONFIGDATA_H */
