#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main ()
{
  DDRC |= 0xFF;

  while(1) 
  {
    PORTC ^= 0xFF;
    _delay_ms(1000);
  }
}