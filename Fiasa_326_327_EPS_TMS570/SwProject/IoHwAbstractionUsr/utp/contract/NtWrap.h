/*******************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : NtWrap.h
* Module Description: Non-trusted function call wrapper definitions to allow
*						calling of SCom server functions not located in the
*						application with the Diag service handler.
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*******************************************************************************/
/*******************************************************************************
* Version Control:
* Date Created:      Tue Jan  7 15:00:00 2014
* %version:          2 %
* %derived_by:       nzx5jd %
* %date_modified:    Tue Jan 28 14:35:28 2014 %
*******************************************************************************/
/*******************************************************************************
* Change History:
* Date      Rev      Author    Change Description
* --------  -------  --------  ------------------------------------------------
* 01/07/14   1       OT        Initial version (Ap8 and Ap9)
* 01/28/14   2       OT        Updated polarity non-trusted call per updated polarity component
* 04/21/14   3       OT        Added non-trusted function call for InvalidateSlowADCGroup
*******************************************************************************/

#ifndef NTWRAP_H
#define NTWRAP_H

#include "Std_Types.h"
#include "Rte_Type.h"
//#include "Os.h"
//#include "Wdg_TMS570LS3x.h"
//#include "WdgM.h"


/***** RTE Client Function Prototypes *****/
extern FUNC(void, NTWRAP_CODE) TWrapC_Dma_InvalidateSlowADCGroup(void);


#endif
