/*
 * LED.c
 *
 * Created: 2/6/2021 7:10:33 AM
 *  Author: khaled
 */ 


//1-Macros
//2-Functions implementations 

#include "LED.h"

/***** LED 0 *****/
void led0_init(void){//define dir
	SET_BIT(LED0_DDR , LED0_PIN);
}
void LED0_ON(void){//enable led
	SET_BIT(LED0_PORT , LED0_PIN);
}
void LED0_OFF(void){//disable led
	CLR_BIT(LED0_PORT , LED0_PIN);
}
void LED0_TGL(void){//toggle led
	TOGGLE_BIT(LED0_PORT , LED0_PIN);
}
/******************/

/***** LED 1 *****/
void led1_init(void){//define dir
	SET_BIT(LED1_DDR , LED1_PIN);
}
void LED1_ON(void){//enable led
	SET_BIT(LED1_PORT , LED1_PIN);
}
void LED1_OFF(void){//disable led
	CLR_BIT(LED1_PORT , LED1_PIN);
}
void LED1_TGL(void){//toggle led
	TOGGLE_BIT(LED1_PORT , LED1_PIN);
}
/******************/

/***** LED 2 *****/
void led2_init(void){//define dir
	SET_BIT(LED2_DDR , LED2_PIN);
}
void LED2_ON(void){//enable led
	SET_BIT(LED2_PORT , LED2_PIN);
}
void LED2_OFF(void){//disable led
	CLR_BIT(LED2_PORT , LED2_PIN);
}
void LED2_TGL(void){//toggle led
	TOGGLE_BIT(LED2_PORT , LED2_PIN);
}
/******************/