# RF Receiver Input Monitor

This sketch monitors four digital input pins (8, 9, 10, 11) connected to an RF receiver module (e.g., HT12D decoder output lines). Whenever any of the four data lines goes HIGH it prints "HIGH" and the corresponding channel number (0–3) to the Serial Monitor, and also lights the built-in LED on pin 13 for 500 ms. It is used to verify that RF signals are being received correctly.

## Hardware

- Arduino Uno
- RF receiver module with HT12D (or similar) decoder

## Pin Connections

| Component | Pin |
|-----------|-----|
| RF Left Positive (Lp) | 8 |
| RF Left Negative (Ln) | 9 |
| RF Right Positive (Rp) | 10 |
| RF Right Negative (Rn) | 11 |
| Status LED | 13 (built-in) |

**Last Modified:** 2018-05-30
