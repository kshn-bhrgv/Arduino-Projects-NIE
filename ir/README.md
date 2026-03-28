# IR Remote LED Controller (ir)

This project uses the IRremote library to receive IR codes from a remote and control a digital output. When the specific code 216002244 is received on pin 11, pin 6 is set HIGH; any other code sets it LOW. Decoded values are printed to the Serial monitor at 9600 baud.

## Hardware

- Arduino (any model)
- TSOP-series IR receiver module (e.g., TSOP1738)
- IR remote control
- LED or other load on pin 6

## Pin Connections

| Pin | Function |
|-----|----------|
| 11  | IR receiver signal output |
| 6   | LED / output (controlled by IR code) |

**Last Modified:** 2017-06-18
