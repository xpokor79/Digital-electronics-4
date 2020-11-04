# Lab 6: LCD display

| **LCD signal(s)** | **AVR pin(s)** | **Description** |
   | :-: | :-: | :-- |
   | RS | PB0 | Register selection signal. Selection between Instruction register (RS=0) and Data register (RS=1) |
   | R/W | GND | read/write mode|
   | E | PB1 | enable, This load the data into the lcd chip    |
   | D[3:0] | not concected |  |
   | D[7:4] | PD[4:7] | 4-bit data |

What is the ASCII table? What are the values for uppercase letters `A` to `Z`, lowercase letters `a` to `z`, and numbers `0` to `9` in this table?

 Jde o kódovou tabulku, písmen anglické abecedy a znaků. A - Z [41:5a]; a - z [61:7a]; 0 - 9[30:39];

| **Function name** | **Function parameters** | **Description** | **Example** |
   | :-- | :-- | :-- | :-- |
   | `lcd_init` | `LCD_DISP_OFF`<br>`LCD_DISP_ON`<br>`LCD_DISP_ON_CURSOR`<br>`LCD_DISP_ON_CURSOR_BLINK` | Display off&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp; | `lcd_init(LCD_DISP_OFF);`<br>&nbsp;<br>&nbsp;<br>&nbsp; |
   | `lcd_clrscr` |  |Clear display and set cursor to home position.  | `lcd_clrscr();` |
   | `lcd_gotoxy` | |Set cursor to specified position.  | `lcd_gotoxy(uint8_t x,uint8_t y);`|
   | `lcd_putc` | | | |
   | `lcd_puts` | | | |
   | `lcd_command` | | | |
   | `lcd_data` | | | |
