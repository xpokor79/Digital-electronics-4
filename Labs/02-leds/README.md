# Lab 02

## Preparation TASK
### LEDs wiring

<img src = "https://github.com/Vojvyp/Digital-electronics-2/blob/master/Labs/02-leds/pictures/LEDs%20wiring.png">

### Pushbuttons wiring

<img src = "https://github.com/Vojvyp/Digital-electronics-2/blob/master/Labs/02-leds/pictures/Pushbuttons%20wiring.png">

### Seriall rezistor for LEDs
<img src = "https://github.com/Vojvyp/Digital-electronics-2/blob/master/Labs/02-leds/pictures/equination.png">


| **LED color** | **Supply voltage** | **LED current** | **LED voltage** | **Resistor value** |
| :-: | :-: | :-: | :-: | :-: |
| red | 5&nbsp;V | 20&nbsp;mA | 1,7&nbsp;V | 660&nbsp;&Omega; |
| blue | 5&nbsp;V | 20&nbsp;mA | 3&nbsp;V| 100&nbsp;&Omega; |

### Lab

| **DDRB** | **Description** |
| :-: | :-- |
| 0 | Input pin |
| 1 | Output pin |

| **PORTB** | **Description** |
| :-: | :-- |
| 0 | Output HIGH |
| 1 | Output HIGH |

| **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
| :-:| :-: | :-: | :-: | :-- |
| 0 | 0 | input | no | Tri-state (Hi-Z) |
| 0 | 1 | input | yes | PBx will source current if ext.pulled low.|
| 0 | 1 | input | no | Tri-state (Hi-Z) |
| 1 | 0 | output | no | Output low (sink) |
| 1 | 1 | output | no | Output high (source) |

| **Port** | **Pin** | **Input/output usage?** |
| :-: | :-: | :-- |
| A | x |  ATmega328P does not contain port A |
| B | 0 | Yes Arduino pin 8,CLKO,ICP1|
|   | 1 | Yes Arduino pin 9,PWM |
|   | 2 | Yes Arduino pin 10,SS,PWM |
|   | 3 | Yes Arduino pin 11,MOSI,PWM |
|   | 4 | Yes Arduino pin 12,MISO |
|   | 5 | Yes Arduino pin 13, internal LED, SCK |
|   | 6 | No Arduino pin OSC1,XTAL1, |
|   | 7 | No Arduino pin OSC2,XTAL2, |
| C | 0 | Yes Arduino pin A0(14) |
|   | 1 | Yes Arduino pin A1(15) |
|   | 2 | Yes Arduino pin A2(16) |
|   | 3 | Yes Arduino pin A3(17) |
|   | 4 | Yes Arduino pin A4(18),SDA |
|   | 5 | Yes Arduino pin A5(19),SCL |
|   | 6 | Yes Arduino pin RST  |
|   | 7 | Input only  |
| D | 0 | Yes Arduino pin 0 RXD |
|   | 1 | Yes (Arduino pin 1 TXD |
|   | 2 | Yes Arduino pin 2 |
|   | 3 | Yes Arduino pin 3,PWM |
|   | 4 | Yes Arduino pin 4 |
|   | 5 | Yes Arduino pin 5, PWM |
|   | 6 | Yes Arduino pin 6. PWM |
|   | 7 | Yes Arduino pin 7, PWM |
