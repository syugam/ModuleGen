/******************************************************************************/
/* @F_NAME :  Demo_config.c                                                   */
/* @F_PURPOSE :  Configuration file for DemoModule                            */
/* @F_CREATED_BY :  Syugam WEI                                                */
/* @F_CREATION_DATE :  2016/10/16                                             */
/* @F_LANGUAGE :  C                                                           */
/* @F_MPROC_TYPE :  target independent                                        */
/*************************************** (C) Copyright 2016 Syugam studio ***/

#ifndef DEMO_CONFIG_H
#define DEMO_CONFIG_H

/*______ I N C L U D E - F I L E S ___________________________________________*/
#include "type.h"

#ifndef DEMO_UNIT_TEST
#define DEMO_UNIT_TEST
#endif /*DEMO_UNIT_TEST */

#ifdef DEMO_UNIT_TEST
#include "demo_config_UT.h"

#else

/*______________ D E F I N E S _______________________________________________*/

/*______________ T Y P E S ___________________________________________________*/

/*______________ M A C R O S _________________________________________________*/

/*______________ D A T A _____________________________________________________*/

/*______________ F U N C T I O N S - P R O T O T Y P E S _____________________*/

#endif /*DEMO_UNIT_TEST */

#endif /*DEMO_CONFIG_H */
/*______ E N D _____ (Demo_config.h) _________________________________________*/

