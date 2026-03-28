# _2_tsop

Uses two IR receivers (on pins 11 and 5) simultaneously to toggle an LED on pin 7. Each receiver listens for its own hardcoded IR code; a matching code toggles the LED state. Demonstrates reading from two TSOP IR demodulators at once.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** IR receiver 1 on pin 11, IR receiver 2 on pin 5, LED on pin 7
- **Libraries:** IRremote

**Last Modified:** 2017-03-17
