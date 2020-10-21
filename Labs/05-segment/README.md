# Lab 5: Display devices, 7-segment display

| **Digit** | **A** | **B** | **C** | **D** | **E** | **F** | **G** | **DP** |
   | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
   | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1 |
   | 1 | 1  | 0  | 0 | 1 |  1 |  1 | 1  | 1  |
   | 2 | 0  | 0  | 1  | 0  |  0 | 1  | 0  | 0  |
   | 3 | 0 | 0 | 0 | 0 | 1 | 1 | 0 | 1 |
   | 4 | 1  | 0  |  0 |  1 | 1  | 0  | 0  | 1  |
   | 5 | 0  |  1 | 0  |  0 | 1  | 0  |  0 | 1  |
   | 6 |  0 | 1  |  0 |  0 | 0  |  0 |  0 |  1 |
   | 7 |  0 | 0  | 0  |  1 |  1 | 1 |  1 | 1  |
   | 8 |  0 | 0  | 0  |  0 | 0  | 0  | 0  |  1 |
   | 9 |  0 | 0  | 0  | 0  |  1 |  0 | 0  | 1  |

* Common Cathode 7-segment display (CC SSD) všech 7 LED má společnou katodu => LED ON HI STATE
* Common Anode 7-segment display (CA SSD)   všech 7 LED má společnou anodu => LED ON LOW STATE

  | PORT | PIN |
  |:-: | :-: |
  | PB0 [8] | SER |
  | PD7 [7] | SRCLK  | 
  | PD4 [4] | RCLK  |
   
Shift registr slouží ke zobrazení číslic na více segmentovkách, tak že hodnotu číslice pošle na segmentovku kde se má zobrazit


| **Interrupt** | **Vector name** | **Pins** | **Operation** | **I/O register** | **Bit(s)** |
| :-: | :-: | :-: | :-- | :-: | :-: |
| Pin Change Interrupt 0 | `PCINT0_vect` | PB[7:0] | Interrupt enable<br>Select pins | PCICR<br>PCMSK0 | PCIE0<br>PCINT[7:0] |
| Pin Change Interrupt 1 | `PCINT1_vect`|  | Interrupt enable<br>Select pins | <br> | <br> |
| Pin Change Interrupt 2 | `PCINT2_vect`|  | Interrupt enable<br>Select pins | <br> | <br> |
