/**
 * @file
 * @brief
 * @author raiden00
 * @date 2015-09-28
 **/

/******************************************************************************
 * project: UniSP
 * chip: STM32F334x8
 * compiler: arm-none-eabi-gcc
 *
 ******************************************************************************/

/*
  +=============================================================================+
  | includes
  +=============================================================================+
*/

#include "unisp/inc/ui_slave/ui_slave_struct.h"

/*
  +=============================================================================+
  | local definitions
  +=============================================================================+
*/

/*
  +=============================================================================+
  | global definitions
  +=============================================================================+
*/

/*
  +=============================================================================+
  | module variables
  +=============================================================================+
*/

/*
  +=============================================================================+
  | global variables
  +=============================================================================+
*/

/*
  +=============================================================================+
  | local functions' declarations
  +=============================================================================+
*/

/*
  +=============================================================================+
  | global functions' declarations
  +=============================================================================+
*/

/*
  +=============================================================================+
  | global functions
  +=============================================================================+
*/

/**
 * @brief
 * @details @todo calosc
 **/
void ui_struct_init(volatile struct UI_slave_status* stat){

    stat->ui_call = 0;
    stat->configuration = 0;

}

/**
 * @brief
 * @details
 **/
void ui_cmd_struct_init(volatile struct UI_cmd* cmd){

    cmd->rw = '\0';
    cmd->reg[0] = '\0';
    cmd->param[0] = '\0';
    cmd->mantisa[0]  = '\0';
    cmd->exp[0] = '\0';
    cmd->crc = 0;

    cmd->sep1 = UI_FRAME_SEPARATOR[0];
    cmd->sep2 = UI_FRAME_SEPARATOR[0];
    cmd->sep3 = UI_FRAME_SEPARATOR[0];
    cmd->sep4 = UI_FRAME_SEPARATOR[0];
    cmd->sep5 = UI_FRAME_SEPARATOR[0];

}

/******************************************************************************
 * END OF FILE
 ******************************************************************************/