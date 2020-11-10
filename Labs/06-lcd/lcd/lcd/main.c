/***********************************************************************
 * 
 * Stopwatch with LCD display output.
 * ATmega328P (Arduino Uno), 16 MHz, AVR 8-bit Toolchain 3.6.2
 *
 * Copyright (c) 2017-2020 Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/

/* Includes ----------------------------------------------------------*/
#include <avr/io.h>         // AVR device-specific IO definitions
#include <avr/interrupt.h>  // Interrupts standard C library for AVR-GCC
#include "timer.h"          // Timer library for AVR-GCC
#include "lcd.h"            // Peter Fleury's LCD library
#include <stdlib.h>         // C library. Needed for conversion function


uint8_t customChar[8] = {
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111,
	0b11111
};

/* Function definitions ----------------------------------------------*/
/**
 * Main function where the program execution begins. Update stopwatch
 * value on LCD display when 8-bit Timer/Counter2 overflows.
 */
int main(void)
{
	
    // Initialize LCD display
    lcd_init(LCD_DISP_ON);


	

	// Set pointer to beginning of CGRAM memory
	lcd_command(1 << LCD_CGRAM);
	for (uint8_t i = 0; i < 8; i++)
	{
	   //Store all new chars to memory line by line
		lcd_data(customChar[i]);
	}
	// Set DDRAM address
	lcd_command(1 << LCD_DDRAM);
	
	// Display first custom character
	//lcd_gotoxy(1, 1);
	//lcd_putc(0);
	
    // Put string(s) at LCD display
    lcd_gotoxy(1, 0);
    lcd_puts("00:00.0");
	//lcd_gotoxy(11, 0);
    //lcd_putc('a');
	//lcd_gotoxy(1, 1);
	//lcd_putc('b');
	//lcd_gotoxy(11, 1);
	//lcd_putc('c');

    // Configure 8-bit Timer/Counter2 for Stopwatch
    // Set prescaler and enable overflow interrupt every 16 ms
	
	TIM2_overflow_16ms();
	TIM2_overflow_interrupt_enable();

    // Enables interrupts by setting the global interrupt mask
    sei();

    // Infinite loop
    while (1)
    {
        /* Empty loop. All subsequent operations are performed exclusively 
         * inside interrupt service routines ISRs */
    }

    // Will never reach this
    return 0;
}

/* Interrupt service routines ----------------------------------------*/
/**
 * ISR starts when Timer/Counter2 overflows. Update the stopwatch on
 * LCD display every sixth overflow, ie approximately every 100 ms
 * (6 x 16 ms = 100 ms).
 */
ISR(TIMER2_OVF_vect)
{
    static uint8_t number_of_overflows = 0;
	static uint8_t tens = 0;        // tenths of a second
	static uint8_t sec = 0;        // seconds
	static uint8_t min = 0;			// minutes
	static uint16_t square = 0;		// square value
	static uint8_t position = 0;     // bargraf position
	char lcd_string[2] = "  ";      // String for converting numbers by itoa()
	
	
    number_of_overflows++;
    if (number_of_overflows >= 6)
    {
        // Do this every 6 x 16 ms = 100 ms
        number_of_overflows = 0;

        // WRITE YOUR CODE HERE
		tens++;
		
		position++;				//bargraf
		if (position > 10)
		{
			position = 0;
			
		}
		
		if ( position < 10)
		{
			lcd_gotoxy(position, 1);
			lcd_putc(0);
		} 
		else
		{
			position = 0;
			lcd_gotoxy(0, 1);
			for (uint8_t i = 1; i < 10; i++)
			{
				lcd_gotoxy(1+i,1);
				lcd_putc(20);
			}
							
		}
		
						
		if (tens > 9)
		{
			tens = 0;
			sec++;
		}
		
		if (sec > 59)
		{
			sec = 0;
			min++;
			lcd_gotoxy(4, 0);
			lcd_putc('0');
		}
		
		itoa(tens, lcd_string, 10);
		lcd_gotoxy(7, 0);
		lcd_puts(lcd_string);
		
		
		
		
		
		
		
		square = sec*sec;					//square calculation 
		itoa(square, lcd_string, 10);
		if (square > 9)
		{
			lcd_gotoxy(11, 0);
		}
		else
		{
			lcd_gotoxy(12, 0);
		}
		
		lcd_puts(lcd_string);
		
		
		
		itoa(sec, lcd_string, 10);
		if (sec > 9)
		{
			lcd_gotoxy(4, 0);
		}
		else
		{
			lcd_gotoxy(5, 0);
		}
		
		lcd_puts(lcd_string);
		
		if (min > 59)
		{
			min = 0;
			lcd_gotoxy(1, 0);
			lcd_putc('0');
		}
		
		itoa(min, lcd_string, 10);
		if (min > 9)
		{
			lcd_gotoxy(1, 0);
		}
		else
		{
			lcd_gotoxy(2, 0);
		}
		
		lcd_puts(lcd_string);
		
		
    }
}

