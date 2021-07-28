/*
 * INTERRUPT CONTROL(Enable PC2 pin as external interrupt pin )
 *  
 * Created: 7/28/2021 11:14:04 AM
 *  
 * Author:RAJAT MISHRA
 
 * Hardware:AVR128DA64 
 *  
 */ 

#include <xc.h>
#define  F_CPU	4000000UL

#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define FALLING_EDGE 0x3
void interrupt_init(void);
int main(void)
{   interrupt_init();
    while(1)
    {
        //TODO:: Please write your application code 
    }
}


void interrupt_init(void)
{
   	PORTC_PIN2CTRL |= FALLING_EDGE; //Enabling Falling Edge Interrupt for PC2 
}
ISR (PORTC_PORT_vect)
{
	 PORTC.INTFLAGS |=0x4;              //Reset interrupt flag 
}