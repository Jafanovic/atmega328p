/*
 * Ledblinking.c
 *
 * Created: 09.06.2021 15:44:05
 * Author : z0037rdx
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1<<DDB1);
	while (1)
	{
		PORTB |= (1<<PORTB5);
		_delay_ms(1000);
		PORTB &= ~ (1<<PORTB5);
		_delay_ms(1000);
	}
}

