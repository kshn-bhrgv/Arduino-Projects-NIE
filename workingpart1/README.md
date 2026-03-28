# LCD Digital Input Status Display

This sketch reads a digital input on pin 8 and displays its state on a 16x2 LCD. When pin 8 is HIGH the LCD shows "hey Light is on"; when LOW it shows "lo Light is off". The display is cleared and updated every 500 ms.

## Hardware

- Arduino Uno
- 16x2 character LCD
- Push button or digital sensor on pin 8

## Pin Connections

| Component | Pin |
|-----------|-----|
| LCD RS | 12 |
| LCD RW | 11 |
| LCD EN | 10 |
| LCD D4 | 5 |
| LCD D5 | 4 |
| LCD D6 | 3 |
| LCD D7 | 2 |
| Digital Input | 8 |

**Last Modified:** 2017-03-09
