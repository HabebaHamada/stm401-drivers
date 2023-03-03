/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "STD_TYPES.h"
#include "BIT_Manipulation.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "PORT_interface.h"
#include "STK_interface.h"

#include "DAC_interface.h"


int main(void)
{
	RCC_voidSysClkInit();

	RCC_voidPeripheralClockEnable(RCC_AHB1,GPIOA);

	PORT_voidInit();
	DAC_voidStartAudio();
}