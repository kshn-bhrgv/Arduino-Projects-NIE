# 28BYJ-48 Stepper Motor Driver

This sketch drives a 28BYJ-48 stepper motor using a half-step sequence (8 steps per cycle) with a 1 ms timing between steps. The motor runs 4095 steps in one direction, pauses 2 seconds, then reverses for another 4095 steps, continuously alternating. Step timing is measured using `micros()` and the total time per direction is printed to the Serial Monitor.

## Hardware

- Arduino Uno
- 28BYJ-48 stepper motor
- ULN2003 driver board

## Pin Connections

| Component | Pin |
|-----------|-----|
| IN1 | 8 |
| IN2 | 9 |
| IN3 | 10 |
| IN4 | 11 |

**Last Modified:** 2018-01-17
