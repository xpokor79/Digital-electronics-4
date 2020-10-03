


#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions

/* Functions ---------------------------------------------------------*/

int main(void)
{
    DDRC = (0b00011111);

    // Infinite loop
    while (1)
    {
       for (PORTC = 0x01; PORTC != 0x10; PORTC <<= 1)   //shift left
       _delay_ms(500);                             
       
       for (PORTC = 0x10; PORTB != 0x01; PORTC >>= 1)   //shift right
       _delay_ms(500);
	   
      // nevím proè mi podmínka while probìhne jen jednou 
    }

    // Will never reach this
    return 0;
 }