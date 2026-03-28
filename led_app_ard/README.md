# Serial RGB LED Parser

This sketch reads a comma-separated string from the Serial Monitor (format: `R,G,B,N`) and parses it into four integer values representing red, green, blue, and an LED number. The parsed values are printed back to the Serial Monitor. This is a parsing utility intended to be used with an Android app or other serial client that sends colour commands.

## Hardware

- Arduino Uno
- (Optional) RGB LED or NeoPixel strip for downstream use

## Pin Connections

No physical pin connections required for the parser itself; Serial communication is via USB.

**Last Modified:** 2018-03-07
