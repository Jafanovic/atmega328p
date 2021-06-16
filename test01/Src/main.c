/* Includes -----------------------------------------*/
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD |= (1<<DDD1);
    while (1) 
    {
      PORTD |= (1<<PORTD1);
      _delay_ms(1000);
      PORTD &= ~ (1<<PORTD1);
      _delay_ms(1000);
    }
}