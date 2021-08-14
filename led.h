#ifndef __LED_H
#define __LED_H	 
#include "sys.h"

#define digitalToggle(p,i) {p->ODR ^=i;} //反转
#define LED0 PCout(13)	// PC13
#define LEDOFF GPIO_SetBits(GPIOC,GPIO_Pin_13)
#define LEDON  GPIO_ResetBits(GPIOC,GPIO_Pin_13)
#define LedToggle	digitalToggle(GPIOC,GPIO_Pin_14)

void LED_Init(void);//初始化

#endif
