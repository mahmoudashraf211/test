/*
 * LED_CONFIG.h
 *
 * Created: 2/6/2021 7:09:56 AM
 *  Author: khaled
 */ 


#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

//1-Macros 
//20Renaming port names 
//3-Renaming pin names 
//4-Renaming status

#include "CPU_CONIGURATIONS.h"

//DDR
#define LED0_DDR DDRC
#define LED1_DDR DDRC
#define LED2_DDR DDRD

//PORT
#define LED0_PORT PORTC
#define LED1_PORT PORTC
#define LED2_PORT PORTD

//led_0_pin
#define LED0_PIN 2
#define LED0_HIGH 1
#define LED0_LOW 0

//led_1_pin
#define LED1_PIN 7
#define LED1_HIGH 1
#define LED1_LOW 0

//led_2_pin
#define LED2_PIN 3
#define LED2_HIGH 1
#define LED2_LOW 0

#endif /* LED_CONFIG_H_ */