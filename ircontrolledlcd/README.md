# IR Remote Controlled Output

This sketch listens for a specific IR remote code on pin 10 and drives an output on pin 6 HIGH when that code is received. It uses the IRremote library to decode NEC-style remote signals and prints each received value to the Serial Monitor for debugging.

## Hardware

- Arduino Uno
- IR receiver module
- LED or other output device (with resistor if needed)

## Pin Connections

| Component | Pin |
|-----------|-----|
| IR Receiver | 10 |
| Output (LED) | 6 |

**Last Modified:** 2017-04-07
