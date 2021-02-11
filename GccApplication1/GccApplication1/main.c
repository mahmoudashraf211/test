/*
 * interface_modules_amit_b27.c
 *
 * Created: 2/6/2021 3:36:47 AM
 * Author : khaled
 */ 

#include "CPU_CONIGURATIONS.h"

int main(void)
{
	//all (3) LED init 
	led0_init();
	led1_init();
	led2_init();
	
	RELAY_init();//Relay init
	
	BUZZER_init(); //buzzer init
	
    /* Replace with your application code */
    while (1) 
    {
		LED0_TGL();
		_delay_ms(1000);
		LED1_TGL();
		_delay_ms(1000);
		LED2_TGL();
		_delay_ms(1000);
		
		RELAY_TGL();
		_delay_ms(1000);
		
		BUZZER_TGL();
		_delay_ms(1000);
		BUZZER_TGL();
		_delay_ms(1000);
    }
}

