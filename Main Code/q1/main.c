/*
 * q1.c
 *
 * Created: 2/7/2020 10:18:21 AM
 * Author : KUNWARJIT SINGH
 */ 

#include<avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRB = 0b00100010;
    /* Replace with your application code */
    while (1) 
    {
	PORTB = 0b00100000;
	_delay_ms(4000);
	PORTB = 0b00000000;
	_delay_ms(4000);
		PORTB = 0b00000010;
		_delay_ms(2000);
		PORTB = 0b00000000;
		
    }
}
 
