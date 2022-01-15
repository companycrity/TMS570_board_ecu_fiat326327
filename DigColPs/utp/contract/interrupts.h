/*****************************************************************************
* Copyright 2011 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : interrupt.h
* Module Description: This file contains a stub header for UTP and QAC 
*                     projects
* Product           : Gen II Plus EA3.0
* Author            : Jared Julien
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Fri May  9 16:48:22 2003
* %version:          1 %
* %derived_by:       kzdyfh %
* %date_modified:    Fri Aug 23 15:04:54 2013 %
*---------------------------------------------------------------------------*/
#ifndef INTERRUPTS_H
#define INTERRUPTS_H

void EnableI2CInterrupt(void);
void DisableI2CInterrupt(void);
void EnableSysTickInterrupt(void);
void DisableSysTickInterrupt(void);

#endif  /* INTERRUPTS_H */
