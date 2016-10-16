/******************************************************************************/
/* @F_NAME :  Demo_config_UT.c                                                */
/* @F_PURPOSE :  Unit Test Configuration code for DemoModule                  */
/* @F_CREATED_BY :  Syugam WEI                                                */
/* @F_CREATION_DATE :  2016/10/16                                             */
/* @F_LANGUAGE :  C                                                           */
/* @F_MPROC_TYPE :  target independent                                        */
/*************************************** (C) Copyright 2016 Syugam studio ***/

/*______ I N C L U D E - F I L E S ___________________________________________*/
#include "demo_config.h"
#include "demo_appl.h"

#ifdef DEMO_UNIT_TEST
#include "type.h"
#include "CUnit/Basic.h"
#include "CUnit/CUnit.h"
#include "CUnit/Automated.h"

/*______________ D E F I N E S _______________________________________________*/

/*______________ T Y P E S ___________________________________________________*/

/*______________ D A T A _____________________________________________________*/

Demo_SimulInput_t Demo_SimulInput = { 0 };
Demo_SimulOutput_t Demo_SimulOutput = { 0 };

/*______________ M A C R O S _________________________________________________*/

/*______________ F U N C T I O N S - P R O T O T Y P E S _____________________*/

/*______________ F U N C T I O N S - P R O T O T Y P E S _____________________*/

/*______________ F U N C T I O N S ___________________________________________*/

#endif /*DEMO_UNIT_TEST*/

/*______ E N D _____ (Demo_config_UT.c) ______________________________________*/

