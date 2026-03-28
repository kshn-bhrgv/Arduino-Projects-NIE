# Dual Stepper Motor Directional Trial

This sketch drives two stepper motors (labeled Right and Left) through four motion sequences: right-forward, left-forward, right-only, and both together. Each sequence pulses the step lines at 500 µs intervals for 2000 steps, with 5-second pauses between sequences. Direction pins Rd and Ld set the movement direction for each motor.

## Hardware

- Arduino Uno
- 2x stepper motors
- 2x stepper motor driver boards

## Pin Connections

| Component | Pin |
|-----------|-----|
| Right Direction (Rd) | 6 |
| Right Step (Rs) | 5 |
| Left Direction (Ld) | 4 |
| Left Step (Ls) | 3 |

**Last Modified:** 2018-05-30
