/*
 * BUZZER.c
 *
 * Created: 2/6/2021 1:30:10 PM
 *  Author: khaled
 */ 

#include "BUZZER.h"

void BUZZER_init(void){
	SET_BIT(BUZZER_DDR , BUZZER_PIN);
}
void BUZZER_ON(void){
	SET_BIT(BUZZER_PORT , BUZZER_PIN);
}
void BUZZER_OFF(void){
	CLR_BIT(BUZZER_PORT , BUZZER_PIN);
}
void BUZZER_TGL(void){
	TOGGLE_BIT(BUZZER_PORT , BUZZER_PIN);
}
