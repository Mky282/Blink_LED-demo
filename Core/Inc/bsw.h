#ifndef __BSW_H
#define __BSW_H

#if Micro == stm
#include "stm32f1xx_hal.h"
#define BLINK_LED() HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);HAL_Delay(100);HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);HAL_Delay(100);
#else
#define  BLINK_LED()    RD0 = 1;__delay_ms(500);RD0=0;__delay_ms(500);    
#endif

void Init_Bsw();

#endif
