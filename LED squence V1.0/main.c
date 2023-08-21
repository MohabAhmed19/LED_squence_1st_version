/*
 * LED squence V1.0.c
 *
 * Created: 4/6/2023 6:50:47 AM
 * Author : mohab
 */ 

#include "utils/registers.h"
#include "utils/STD_TYPES.h"
#include "utils/utilities.h"
#include "ECUAL/LED/LED.h"
#include "ECUAL/Push Botton/Push_bottun.h"

int main(void)
{
    /* Replace with your application code */
	app_init();
	
    while (1) 
    {
		app();
    }
}

