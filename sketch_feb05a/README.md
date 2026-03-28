# Serial-Controlled Stepper Motor

This sketch drives a stepper motor via the Arduino Stepper library by reading integer step counts from the Serial Monitor. Whatever integer value is sent is passed directly to `stepper.step()`, allowing forward or reverse rotation by sending positive or negative numbers. Motor speed is set to 200 RPM.

## Hardware

- Arduino Uno
- Stepper motor (64-step)
- Stepper motor driver or ULN2003 board

## Pin Connections

| Component | Pin |
|-----------|-----|
| Stepper IN1 | 8 |
| Stepper IN2 | 10 |
| Stepper IN3 | 9 |
| Stepper IN4 | 11 |

**Last Modified:** 2018-02-05
