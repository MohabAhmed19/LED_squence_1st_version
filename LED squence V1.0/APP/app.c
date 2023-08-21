/*
 * app.c
 *
 * Created: 8/21/2023 5:36:47 PM
 *  Author: mohab
 */ 
#include"APP.h"

void app_init(void)
{
	LED_init(Port_A,PIN_0);
	LED_init(Port_A,PIN_1);
	LED_init(Port_A,PIN_2);
	LED_init(Port_A,PIN_3);
	PB_init(Port_D,PIN_0);
}

void app(void)
{
	uint8_t error=0;
	uint8_t state=0;
	error = PB_state(Port_D, PIN_0, &state);
	if(state==Pressed)
	{
		LED_ON(Port_A,PIN_0);
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_ON(Port_A,PIN_1);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_ON(Port_A,PIN_2);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_ON(Port_A,PIN_3);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_OFF(Port_A,PIN_0);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_OFF(Port_A,PIN_1);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_OFF(Port_A,PIN_2);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		if(state==Pressed)
		{
			LED_OFF(Port_A,PIN_3);
		}
		while(state==Pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
		while(state==Not_pressed)
		{
			PB_state(Port_D, PIN_0, &state);
		}
	}
}