# R-2R ladder Digital to Analog Converter (DAC)
Vojtěch Vyplel; Aleš Pokorný

### Project objectives
Naprogramovat generátor funkcí v rozsahu frekvencí 10Hz - 10kHz s průběhy: sin, square, ramp a generování signálu DTMF. Informace o aktuálním nastavení se budou zobrazovat na LCD. Zadávání hodnot bude realizováno pomocí klávesnice 4x3.Generátor bude možné ovládat pomocí UART.

## Hardware description
Základem našeho generátoru funkcí bude mikroprocesor atmega328p a D/A převodík typu R2R postavený z odporové sítě.
#### R2R D/A převodník
U tohoto typu převodníku se vstupní bitstream převádí na výstupní napětí pomocí rezistorové sítě. Převodník podle hodnoty bitstreamu přiřazuje jednotlivým odporovým sítím napětí 0V nebo Vref. Výstupní napětí je poté rovno součtem všech napětí na jednotlivých rezistorových sítích. Jednotlivé hodnoty rezitorů se stanovují pomocí 
Theveninova modelu a pravidla R2R. Jako referenční napětí je stanoveno plné napětí na výstupu z mikroprocesoru tj. 5V

&nbsp;

&nbsp;

<img src = "https://github.com/Vojvyp/Digital-electronics-2/blob/master/Labs/project/pictures/bitteor.png">

&nbsp;

&nbsp;

Pro náš převodník jsme jako zálkadní rozsah hodnot rezistorů zvolili hodnoty RA = 1000 ohm RB = 2000 ohm. Vypočítané hodnoty pro jednotlivé rezistory v síti jsou uvedeny v tabulce.

&nbsp;

&nbsp;

| **bit** | **Rax [ohm]** |**Rbx [ohm]** |
| :-: | :-: |:-: | 
| 0 | 2076 |1953 |  
| 1 | 1034 |1956|
| 2 | 1080 |2145|
| 3 | 1061 | 1986|
| 4 | 1023 | 1842|
| 5 | 972 | 1781| 
| 6 | 986 | 2025|
| 7 | 1026 |1952 |

&nbsp;

&nbsp;
Schéma zapojení reálného převodníku
&nbsp;

&nbsp;
<img src = "">

&nbsp;

&nbsp;

Rozlišení pro náš převodník je:
&nbsp;

&nbsp;
<img src = "https://github.com/Vojvyp/Digital-electronics-2/blob/master/Labs/project/pictures/CodeCogsEqn.gif">
&nbsp;
<img src = "https://github.com/Vojvyp/Digital-electronics-2/blob/master/Labs/project/pictures/CodeCogsEqn2.gif">





## Code description and simulations

*Write your text here*


## Video/Animation

*Write your text here*


## References

*Write your text here*
