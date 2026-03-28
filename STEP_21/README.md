# STEP_21

Continuously rotates a stepper motor one full revolution clockwise, waits 1 second, then rotates one full revolution counter-clockwise and repeats. Uses a STEP/DIR driver interface.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** STEP=3, DIR=4
- **Steps per revolution:** 200 (1.8 deg full step)

## Usage

1. Connect a STEP/DIR driver with STEP on pin 3 and DIR on pin 4.
2. Upload; the motor will rotate back and forth continuously.

**Last Modified:** 2018-02-23
