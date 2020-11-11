# Lab 7: ADC and UART serial communication

<img src = https://raw.githubusercontent.com/Vojvyp/Digital-electronics-2/master/Labs/07-uart/pictures/pushbuttons.png >


 | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** |
   | :-: | :-: | :-: | :-: |
   | Right  | 0 V | 0   |  |
   | Up     | 0.495 V | 101 |  |
   | Down   | 1.203 V | 246 |  |
   | Left   | 1.970 V | 403 |  |
   | Select | 3.182 V | 651 |  |
   | none   |  5 V    | 1023 |  |
   
   
   
   
   | **Operation** | **Register(s)** | **Bit(s)** | **Description** |
   | :-: | :-- | :-- | :-- |
   | Voltage reference | ADMUX | REFS1:0 | 01: AVcc voltage reference, 5V |
   | Input channel |  | MUX3:0 | 0000: ADC0, 0001: ADC1, ... |
   | ADC enable | ADCSRA |  |  |
   | Start conversion |  |  |  |
   | ADC interrupt enable |  |  |  |
   | ADC clock prescaler |  | ADPS2:0 | 000: Division factor 2, 001: 2, 010: 4, ...|
   | ADC result |  |  |  |


