/* Kernbauer Version: 1.15 Konfiguration: Diag_AsrDem_Vector Erzeugungsgangnummer: 1 */

/*********************************************************************************************************************/
/*!
 * \file     Dem.h
 * \brief    Interface of DEM
 * \par      copyright
 * \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH. All rights reserved.
 *
 *  This software is copyright protected and proprietary to Vector Informatik GmbH.
 *  Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *  All other rights remain with Vector Informatik GmbH.
 *
 * \endverbatim
 */
/*  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dem.h
 *      Project:  MICROSAR DEM
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Interface of DEM
 *
 *  Manufacturer: Fiat
 *********************************************************************************************************************/

/******************************************************************************************************************//**
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 * \author                       Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Alexander Ditte              Ade           Vector Informatik GmbH
 *  Stefan Huebner               Hrs           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 * \version  Date        Author  Change Id      Description
 *  -------------------------------------------------------------------------------------------------------------------
 * 01.00.00  2010-11-02  Ade     -              Initial Version
 *                       Ade     ESCAN00044589  Sort list of API IDs
 *                       Ade     ESCAN00045948  Compiler error when using microcontroller with Paged RAM
 *                       Ade     ESCAN00046241  Adapt AUTOSAR version check
 *                       Ade     ESCAN00045037  Unify the call sequence of Dem_TriggerOnEvent() and DemCfg_GetInitMonitorFPtr()
 * 01.01.00  2010-12-01  Hrs     ESCAN00047310  Avoid nesting of Compiler Abstraction macros - P2VAR(P2CONST(...), ...)
 *                       Ade     ESCAN00047367  Remove NvM_GetErrorStatus() from Dem_Init()
 *                       Ade     ESCAN00047642  Modify status bits in their logic order
 *                       Ade     ESCAN00047934  Preprocessor error "#error "Dem: Incompatible AUTOSAR version of Fim!""
 *           2011-01-14  Ade     ESCAN00048024  Neg. Response ConditionNotCorrect in Diagnostic Services 19 0b, 19 0c, 19 0d, 19 0e
 * 01.02.00  2011-04-11  Ade     ESCAN00048454  Discarding of BSW events with status PASSED
 *                       Ade     ESCAN00049982  Change layout of the extended data record
 *                       Ade     ESCAN00049984  Change pending bit behavior
 *                       Ade     ESCAN00049986  Change the behavior of event aging
 *                       Ade     ESCAN00050014  Compiler error: "incompatible pointer types"
 *                       Ade     ESCAN00051170  Rename API ID defines for DET reporting
 *                       Ade     ESCAN00051171  Make the CurrentFailStatus configurable (DEM internal) if internal events shall be considered
 * 01.03.00  2011-06-30  Ade     ESCAN00051376  Remove unused code in Dem
 *                       Ade     ESCAN00051905  Time-based debouncing - DTC will not qualify
 *                       Ade     ESCAN00052128  Event displacement is not working correctly
 *                       Ade     ESCAN00052130  Remove DET check for a severity mask which is out of range
 * 01.04.00  2011-08-22  Ade     ESCAN00052916  The NVRAM block handling was reworked
 *           2011-08-29  Ade     ESCAN00051738  Remove the AUTOSAR Release Version Check
 *                       Ade     ESCAN00048943  Use standard include guard for Dem.h: #if defined (DEM_H)
 *                       Ade     ESCAN00052886  Replace internal error code "DEM_E_INV_SFN" with "DEM_E_PARAM_DATA"
 *           2011-09-19  Ade     ESCAN00053505  AR3-2069: Remove non-SchM code for critical section handling
 *           2011-10-18  Ade     ESCAN00051905  Time-based debouncing - DTC will not qualify
 * 01.04.01  2012-05-29  Ade     ESCAN00059173  Inconsistent usage of Dem_Cfg_AdminCycleStatePtr[]
 *           2013-01-25  Mhe     ESCAN00063880  Compiler error: 'DEM_IS_SET_WARNING_INDICATOR_REQ' undefined
 * 01.05.00  2013-04-11  Ade     -              Update to GENy version 3.12.00
 * 01.06.00  2013-10-18  Ade     -              Update to GENy version 3.13.00
 * 01.06.01	 2014-04-30  Ade     ESCAN00075163  Needless frequent NVRAM commit for pre-/Failed events
 * 01.06.02  2014-05-19  Ade     ESCAN00075717  DTC will not age 
 * 01.06.03  2015-01-15  Ade     ESCAN00080038  Snapshot record data is not persisted in NVRAM
 */                              
/******************************************************************************************************************/

#if !defined (DEM_H)
#define DEM_H

#endif /* DEM_H */

