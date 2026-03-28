# IR Remote Toggle with Relay

This sketch uses an IR receiver to learn and store a single IR code at runtime. A push button on pin 6 puts the receiver into "record" mode (indicated by an LED on pin 4); the next received IR code is stored. Subsequent presses of the same button toggle an output LED (pin 3) and relay (pin 2) ON and OFF.

## Hardware

- Arduino Uno
- IR receiver module
- Push button
- LED (record indicator)
- LED or load on output pin
- Relay module

## Pin Connections

| Component | Pin |
|-----------|-----|
| IR Receiver | 11 |
| Record Button | 6 |
| Record Indicator LED | 4 |
| Output LED | 3 |
| Relay | 2 |

**Last Modified:** 2017-01-25
