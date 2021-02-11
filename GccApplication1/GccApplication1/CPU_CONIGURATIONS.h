/*
 * CPU_CONIGURATIONS.h
 *
 * Created: 2/6/2021 4:39:31 AM
 *  Author: khaled
 */ 


#ifndef CPU_CONIGURATIONS_H_
#define CPU_CONIGURATIONS_H_

#undef F_CPU //Neglect internal Oscillator 
#define F_CPU 16000000 //Define External Oscillator

#include <avr/io.h> //Predefined library - define input and output 
#include <util/delay.h> //Predefined library - define delay function
#include <avr/interrupt.h> //Predefined library - define interrupts vectors

#include "BIT_MATH.h" //User defined library - bit functions
#include "STD_TYPE.h" //User defined library - Stander types 
#include "ATMEGA32_REGISTER_SUMMARY.h" 


#endif /* CPU_CONIGURATIONS_H_ */