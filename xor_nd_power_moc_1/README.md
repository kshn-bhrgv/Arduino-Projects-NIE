# Serial Two-Channel Toggle Controller

This sketch reads single characters from the Serial Monitor and toggles two independent digital outputs. Sending '1' toggles pin 7 (XOR with its current state); sending '2' toggles pin 8. Each output retains its state between commands. This is a minimal serial-controlled switch for two channels.

## Hardware

- Arduino Uno
- 2x LEDs, relays, or other digital loads

## Pin Connections

| Component | Pin |
|-----------|-----|
| Output Channel 1 | 7 |
| Output Channel 2 | 8 |

**Last Modified:** 2017-04-04
