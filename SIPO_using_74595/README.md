# SIPO_using_74595

Sequences all 254 byte values (0-253) through a 74HC595 shift register, outputting each for 500 ms and printing the value to Serial. Useful for verifying 74HC595 wiring and shift-register behaviour.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** Store/Latch=5, Clock=7, Data=9
- **IC:** 74HC595 SIPO shift register

## Usage

1. Connect a 74HC595 with LATCH on pin 5, CLOCK on pin 7, DATA on pin 9.
2. Upload and observe the 8 output LEDs cycling through all values.

**Last Modified:** 2017-03-10
