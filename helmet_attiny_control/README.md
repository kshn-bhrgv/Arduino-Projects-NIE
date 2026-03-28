# Helmet Turn Signal Serial Controller (helmet_attiny_control)

This project acts as the control-side companion for a helmet turn-signal system. It listens on the hardware Serial port for single characters and translates them into timed pulses on a control pin: 'R' produces a short 50 ms HIGH pulse (right turn) and 'L' produces a longer 200 ms HIGH pulse (left turn). The pin goes LOW again after each pulse. Unrecognised input is rejected with a serial message.

## Hardware

- Arduino (any model)
- Serial connection to a host (PC, Bluetooth module, or another microcontroller)

## Pin Connections

| Pin | Function |
|-----|----------|
| 6   | Control signal output (pulse to helmet ATtiny) |

**Last Modified:** 2018-08-17
