/*
 * ATMEGA32_REGISTER_SUMMARY.h
 *
 * Created: 2/6/2021 6:53:41 AM
 *  Author: khaled
 */ 


#ifndef ATMEGA32_REGISTER_SUMMARY_H_
#define ATMEGA32_REGISTER_SUMMARY_H_

/***********DIO Register config ***********/
//PORTA
#define PORTA (*(volatile Uint8t*)(0x3B))
#define DDRA (*(volatile Uint8t*)(0x3A))
#define PINA (*(volatile Uint8t*)(0x39))

//PORTB
#define PORTB (*(volatile Uint8t*)(0x38))
#define DDRB (*(volatile Uint8t*)(0x37))
#define PINB (*(volatile Uint8t*)(0x36))

//PORTC
#define PORTC (*(volatile Uint8t*)(0x35))
#define DDRC (*(volatile Uint8t*)(0x34))
#define PINC (*(volatile Uint8t*)(0x33))

//PORTD
#define PORTD (*(volatile Uint8t*)(0x32))
#define DDRD (*(volatile Uint8t*)(0x31))
#define PIND (*(volatile Uint8t*)(0x30))

/****************************************/

#endif /* ATMEGA32_REGISTER_SUMMARY_H_ */