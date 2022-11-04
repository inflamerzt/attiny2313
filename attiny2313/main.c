/*
 * attiny2313.c
 *
 * Created: 03.11.2022 12:53:59
 * Author : sheiko
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

ISR(INT0_vect){
	asm("nop");
	};
	
ISR(USART_RX_vect){
	asm("nop");
	};

int main(void)
{
	char temp;
    /* Replace with your application code */
	DDRB = 0xFF;
	
    while (1) 
    {
		temp = PORTB;
		temp = ~temp;
		PORTB = temp;
		
    }

}

