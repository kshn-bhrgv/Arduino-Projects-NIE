# Helmet ATtiny Turn Signal (helmet_attiny)

This project runs on an ATtiny microcontroller as part of a helmet turn-signal system. It reads a control pin and drives left and right indicator outputs: a sustained HIGH triggers the right indicator, while a quick pulse triggers the left indicator. Outputs hold for 1 second. A serial debug message is printed for unrecognised input.

## Hardware

- ATtiny microcontroller (e.g., ATtiny85)
- 2 × LEDs (left and right indicators)
- Push button or tilt sensor (control input)

## Pin Connections

| Pin | Function |
|-----|----------|
| 6   | Control input |

**Last Modified:** 2018-08-17
