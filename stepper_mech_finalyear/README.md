# Serial-Commanded Dual Stepper Motor Controller

This sketch receives string commands from the Serial Monitor to independently control two stepper motors. Commands "h1"/"l1" move motor 1 forward/backward, "h2"/"l2" move motor 2 forward/backward, and "hh"/"ll" move both motors together in the same direction. Each command drives 5000 microsteps at 1000 µs per step. Invalid commands trigger an error message.

## Hardware

- Arduino Uno
- 2x stepper motors
- 2x stepper motor driver boards (e.g., A4988 or DRV8825)

## Pin Connections

| Component | Pin |
|-----------|-----|
| Motor 1 Step | 3 |
| Motor 1 Dir | 4 |
| Motor 2 Step | 5 |
| Motor 2 Dir | 6 |

**Last Modified:** 2018-05-30
