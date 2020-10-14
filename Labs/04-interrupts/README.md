# Lab 4: Interrupts, timers

| **Module** | **Number of bits** | **1** | **8** | **32** | **64** | **128** | **256** | **1024** |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
| Timer/Counter0 | 8  | 16u | 128u | -- |1,024m | -- |4m | 16m|
| Timer/Counter1 | 16 | 33m |131m| -- | 262m | -- |1m |4,19m |
| Timer/Counter2 | 8  | 16u|128u|512u|1m|2m|4m|16m |


|     |       |                 
| :-: |  :-:  | 
| D1 | PB5[13] | 
| D2 | PB4[12] | 
| D3 | PB3[11] | 
| D4 | PB2[10] |

|     |       |                 
| :-: |  :-:  | 
| S1-A1 | PC1[A1] | 
| S2-A2 | PC2[A2] | 
| S3-A3 | PC3[A3] | 

| **Module** | **Operation** | **I/O register(s)** | **Bit(s)** |
| :-: | :-- | :-: | :-- |
| Timer/Counter0 | Prescaler<br><br>8-bit data value<br>Overflow interrupt enable | <br><br><br> | <br><br><br> |
| Timer/Counter1 | Prescaler<br><br>16-bit data value<br>Overflow interrupt enable | TCCR1B<br><br>TCNT1H, TCNT1L<br>TIMSK1 | CS12, CS11, CS10<br>(000: stopped, 001: 1, 010: 8, 011: 64, 100: 256, 101: 1024)<br>TCNT1[15:0]<br>TOIE1 (1: enable, 0: disable) |
| Timer/Counter2 | Prescaler<br><br>8-bit data value<br>Overflow interrupt enable | <br><br><br> | <br><br><br> |
