#ifndef RTE_AP_DIAGSVC_H
#define RTE_AP_DIAGSVC_H

#include "CalConstants.h"
#include "GlobalMacro.h"
#include "Dcm.h"
#include "Dem.h"
#include "Dem_Cbk.h"
#include "Dem_Lcfg.h"
#include "Mcu.h"
#include "NtWrap.h"
#include "Ap_DfltConfigData.h"
#define NVM_SKIP_API_DECLARATIONS STD_ON
#include "EPS_DiagSrvcs_SrvcLUTbl.h"
#include "Cd_NvMProxy.h"

// Global Proxi check data - used in SrlComOutput
extern VAR(uint8, AP_DIAGSVC_VAR) DiagSvc_ProxiCheckData_Cnt_u08[11];


#endif /* RTE_AP_DIAGSVC_H */
