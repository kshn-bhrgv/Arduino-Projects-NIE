# Manual Servo PWM Generator

This sketch manually generates a servo control PWM signal on pin 9 without using the Servo library. It sweeps the HIGH pulse width from 1 ms to 2 ms in 0.001 ms steps, with a 20 ms total period, gradually rotating the servo from its minimum to maximum position. The pin state is printed to the Serial Monitor each step.

## Hardware

- Arduino Uno
- Servo motor

## Pin Connections

| Component | Pin |
|-----------|-----|
| Servo Signal | 9 |

**Last Modified:** 2018-12-06
