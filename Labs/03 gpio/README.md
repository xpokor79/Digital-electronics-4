# Lab 03

## Preparation TASK
| **Data type** | **Number of bits** | **Range** | **Description** |
| :-: | :-: | :-: | :-- | 
| `uint8_t`  | 8 | 0, 1, ..., 255 | Unsigned 8-bit integer |
| `int8_t`   | 8 | -128 .. 127 | signed char |
| `uint16_t` | 16 | 0 .. 4,294,967,295 | short |
| `int16_t`  | 16 | -2,147,483,648 .. 2,147,483,647 | unsigned int |
| `float`    | 32 | -3.4e+38, ..., 3.4e+38 | Single-precision floating-point |
| `void`     |  |  | Return data type |

```C
#include <avr/io.h>

// Function declaration (prototype)
uint16_t calculate(uint8_t,uint8_t);

int main(void)
{
    uint8_t a = 156;
    uint8_t b = 14;
    uint16_t c;

    // Function call
    c = calculate(a, b);

    while (1)
    {
    }
    return 0;
}

// Function definition (body)
uint16_t  calculate(uint8_t x, uint8_t y)
{
    uint16_t result;    // result = x^2 + 2xy + y^2

    result = x*x + 2*x*y + y*y;
    ...
    ...
    return result;
}
```
