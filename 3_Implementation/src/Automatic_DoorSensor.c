#define F_CPU 8000000UL
#include <avr/io.h>
#include <stdio.h>
int main(void)
{
  DDRB=DDRB&0b11111101;
  DDRD=DDRD|0b01000000;
  while(1)
  {
if(PINB & 0b00000010)
  PORTD=PORTD|0b01000000;
    else
    PORTD=PORTD&0b10111111;
  }
  return 0;
  }