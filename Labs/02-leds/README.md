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
| 0 | 0 | input | no | Tri-state, high-impedance |
| 0 | 1 | input | yes | PBx will source current if ext.pulled low.|
| 0 | 1 | input | no | Tri-state, high-impedance |
| 1 | 0 | output | no | Output low (sink) |
| 1 | 1 | output | no | Output high (source) |

