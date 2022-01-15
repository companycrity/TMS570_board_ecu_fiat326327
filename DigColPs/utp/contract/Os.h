/*****************************************************************************
* Copyright 2011 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Os.h
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
* %date_modified:    Thu Sep 19 12:26:46 2013 %
*---------------------------------------------------------------------------*/
#ifndef OS_H
#define OS_H

#define RES_SCHEDULER 0U

uint8 GetResource(uint16 resource);
uint8 ReleaseResource(uint16 resource);

#endif  /* OS_H */
