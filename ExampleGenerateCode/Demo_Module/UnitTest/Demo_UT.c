/******************************************************************************/
/* @F_NAME :  Demo_UT.c                                                       */
/* @F_PURPOSE :  Unit Test for DemoModule                                     */
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

/*__________________ D E F I N E S ___________________________________________*/

/*__________________ T Y P E S _______________________________________________*/

/*__________________ D A T A _________________________________________________*/


/*_________________  M A C R O S _____________________________________________*/

/*_________________  F U N C T I O N S - P R O T O T Y P E S _________________*/

static int Demo_initDefaultSuite(void);
static int Demo_cleanDefaultSuite(void);

/*__________________  F U N C T I O N S ______________________________________*/

 
/*----------------------------------------------------------------------------*/
/*Name :  DEMO_UnitTest                                                       */
/*Role :  Set up unit test for Module DEMO                                    */
/*Interface :                                                                 */
/*  - IN   :  None                                                            */
/*  - OUT  :  None                                                            */
/*----------------------------------------------------------------------------*/
ulong DEMO_UnitTest(void)
{
  CU_pSuite pSuite = NULL;
  CU_initialize_registry();
  printf("DEMO Unit Test Initial...\n");
  pSuite = CU_add_suite("DEMO Initialization", Demo_initDefaultSuite, Demo_cleanDefaultSuite);
  /*CU_add_test(pSuite, " ToDo ", ToDo);*/
  CU_set_output_filename("Demo");

  CU_list_tests_to_file();
  CU_automated_run_tests();
  CU_cleanup_registry();
  return CU_get_error();
}

 
/*----------------------------------------------------------------------------*/
/*Name :  Demo_initDefaultSuite                                               */
/*Role :  Default function to initial a Unit Test                             */
/*Interface :                                                                 */
/*  - IN   :  None                                                            */
/*  - OUT  :  None                                                            */
/*----------------------------------------------------------------------------*/
static int Demo_initDefaultSuite(void)
{
  return 0;
}
 
/*----------------------------------------------------------------------------*/
/*Name :  Demo_cleanDefaultSuite                                              */
/*Role :  Default function to clean up a Unit Test Suite                      */
/*Interface :                                                                 */
/*  - IN   :  None                                                            */
/*  - OUT  :  None                                                            */
/*----------------------------------------------------------------------------*/
static int Demo_cleanDefaultSuite(void)
{
  return 0;
}
#endif /*DEMO_UNIT_TEST*/

/*______ E N D _____ (Demo_config_UT.c) ______________________________________*/

