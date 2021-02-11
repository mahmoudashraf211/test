/*
 * LED.h
 *
 * Created: 2/6/2021 7:10:10 AM
 *  Author: khaled
 */ 


#ifndef LED_H_
#define LED_H_

//1-Macros 
//2- User Define data types {Struct , Union , Enum } (if exist)
//3-Global Variables (if exist)
//3-Function Prototype

#include "LED_CONFIG.h"

//led0_config_function
void led0_init(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_TGL(void);

//led1_config_function
void led1_init(void);
void LED1_ON(void);
void LED1_OFF(void);
void LED1_TGL(void);

//led2_config_function
void led2_init(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED2_TGL(void);


#endif /* LED_H_ */