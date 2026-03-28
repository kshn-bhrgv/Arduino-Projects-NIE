# 3d_stepper

Controls a stepper motor driver (STEP/DIR interface) to perform a back-and-forth scan through a fixed angle. The motor steps forward to `angleEnd` degrees in quarter-step increments, then reverses back to the starting position, and halts after one complete pass.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** DIR pin 6, STEP pin 5
- **Step size:** 1.8 deg / 4 (quarter-step)

## Usage

1. Connect a STEP/DIR stepper driver (e.g. A4988) with STEP on pin 5, DIR on pin 6.
2. Upload the sketch.
3. The motor sweeps forward then back once, then stops.

**Last Modified:** 2018-06-03
