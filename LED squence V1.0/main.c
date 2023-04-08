/*
 * LED squence V1.0.c
 *
 * Created: 4/6/2023 6:50:47 AM
 * Author : mohab
 */ 

#include "utils/registers.h"
#include "utils/STD_TYPES.h"
#include "utils/utilities.h"
#include "MCAL/DIO/DIO.h"
#include "ECUAL/LED/LED.h"
#include "ECUAL/Push Botton/Push_bottun.h"

int main(void)
{
    /* Replace with your application code */
	LED_init(Port_A,PIN_0);
	LED_init(Port_A,PIN_1);
	LED_init(Port_A,PIN_2);
	LED_init(Port_A,PIN_3);
	PB_init(Port_D,PIN_0);
	
    while (1) 
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
}

