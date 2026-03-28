# Serial-Controlled DC Motor Direction

This sketch reads a single character from the Serial Monitor and controls a DC motor direction through an H-bridge. Sending '1' drives the motor forward (pin 8 HIGH, pin 10 LOW) and sending '2' drives it in reverse (pin 8 LOW, pin 10 HIGH). The received character is echoed back to the Serial Monitor.

## Hardware

- Arduino Uno
- DC motor
- H-bridge motor driver (e.g., L298N or L293D)

## Pin Connections

| Component | Pin |
|-----------|-----|
| Motor Input A | 8 |
| Motor Input B | 10 |

**Last Modified:** 2017-06-23
