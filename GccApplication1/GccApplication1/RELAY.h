/*
 * RELAY.h
 *
 * Created: 2/6/2021 12:01:11 PM
 *  Author: khaled
 */ 


#ifndef RELAY_H_
#define RELAY_H_

#include "RELAY_CONFIG.h"

void RELAY_init(void){
	SET_BIT(RELAY_DDR , RELAY_PIN);
}
void RELAY_ON(void){
	SET_BIT(RELAY_PORT, RELAY_PIN);
}
void RELAY_OFF(void){
	CLR_BIT(RELAY_PORT, RELAY_PIN);
}
void RELAY_TGL(void){
	TOGGLE_BIT(RELAY_PORT, RELAY_PIN);
}

#endif /* RELAY_H_ */