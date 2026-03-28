# Dual Stepper Motor Auto-Run Controller

This sketch drives two stepper motors simultaneously using step/direction signals. Both motors rotate in one direction for 600 pulses (5 ms per step), pause for 1 second, then reverse for another 600 pulses. The two motors spin in opposite directions during each phase.

## Hardware

- Arduino Uno
- 2x stepper motors
- 2x stepper motor driver boards (e.g., A4988 or DRV8825)

## Pin Connections

| Component | Pin |
|-----------|-----|
| Motor 1 Step | 5 |
| Motor 1 Dir | 6 |
| Motor 2 Step | 3 |
| Motor 2 Dir | 4 |

**Last Modified:** 2018-05-04
