# LCD Hello World (16x1 Display)

This sketch initialises a 16x1 character LCD (addressed as an 8x2 display) using the LiquidCrystal library and prints "hello world" split across both halves of the display. The left half shows "hello wo" and the right half shows "rld!", and the right-side text is refreshed every loop iteration.

## Hardware

- Arduino Uno
- 16x1 (or compatible) character LCD

## Pin Connections

| LCD Pin | Arduino Pin |
|---------|-------------|
| RS | 12 |
| Enable | 11 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |

**Last Modified:** 2017-03-07
