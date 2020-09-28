/* Defines -----------------------------------------------------------*/
#define LED_GREEN   PB5     // AVR pin where green LED is connected
#define SHORT_DELAY 50      // Delay in milliseconds
#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions

/* Functions ---------------------------------------------------------*/
/**
 * Main function where the program execution begins. Toggle one LED 
 * and use function from the delay library.
 */
int main(void)
{
    // Set pin as output in Data Direction Register
    // DDRB = DDRB or 0010 0000
    DDRB = DDRB | (1<<LED_GREEN);

    // Set pin LOW in Data Register (LED off)
    // PORTB = PORTB and 1101 1111
    PORTB = PORTB & ~(1<<LED_GREEN);

    // Infinite loop
    while (1)
    {
        
        //_delay_ms(2000);
		PORTB = PORTB ^ (1<<LED_GREEN); //carka
		_delay_ms(900);
        PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(300);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //tecka    D
		_delay_ms(300);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(300);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //tecka
		_delay_ms(300);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(900);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //tecka   E
		_delay_ms(300);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(900);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //tecka    
		_delay_ms(300);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(300);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //tecka    
		_delay_ms(300);
		PORTB = PORTB & ~(1<<LED_GREEN);		
		_delay_ms(300);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //carka   2 
		_delay_ms(900);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(300);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //carka    
		_delay_ms(900);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(300);
		
		PORTB = PORTB ^ (1<<LED_GREEN); //carka    
		_delay_ms(900);
		PORTB = PORTB & ~(1<<LED_GREEN);
		_delay_ms(2100);
		
		
		
		
		
    }

    // Will never reach this
    return 0;
}