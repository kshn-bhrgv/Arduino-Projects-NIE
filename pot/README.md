# Potentiometer-Controlled Motor Direction

This sketch reads a potentiometer on A0, stores 1023 samples, and compares consecutive samples to detect whether the value is rising or falling. A rising value drives a motor forward (pin 7 HIGH) via an H-bridge enable on pin EN1; a falling value drives it in the opposite direction (pin 9 HIGH). This is an early experimental sketch and contains a syntax error (incomplete array declaration).

## Hardware

- Arduino Uno
- Potentiometer
- DC motor
- H-bridge motor driver

## Pin Connections

| Component | Pin |
|-----------|-----|
| Potentiometer | A0 |
| Motor In1 | 7 |
| Motor In2 | 8 |
| Motor In3 | 9 |
| Motor In4 | 11 |
| Enable 1 (PWM) | 3 |
| Enable 2 (PWM) | 5 |

**Last Modified:** 2017-06-14
