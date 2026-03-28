# IR Remote Toggle Switch

This sketch receives IR remote signals on pin 8 and toggles an output on pin 5 between HIGH and LOW each time a specific IR code is received. State is tracked with `prevstate` and `curstate` variables to implement a toggle rather than a hold. Received IR values are printed to the Serial Monitor.

## Hardware

- Arduino Uno
- IR receiver module
- LED or relay on output pin

## Pin Connections

| Component | Pin |
|-----------|-----|
| IR Receiver | 8 |
| Output (LED/Relay) | 5 |

**Last Modified:** 2017-03-16
