# LCD Character Write Trial

This sketch sets up an 8x2 LCD and attempts to write characters from a string array to the display one at a time in a loop with 1-second delays. It is an early experiment with the LiquidCrystal `write()` function and cursor positioning; the display is initialised but no initial text is printed before the loop begins.

## Hardware

- Arduino Uno
- 16x1 or 8x2 character LCD

## Pin Connections

| LCD Pin | Arduino Pin |
|---------|-------------|
| RS | 12 |
| RW | 11 |
| Enable | 10 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |

**Last Modified:** 2017-03-08
