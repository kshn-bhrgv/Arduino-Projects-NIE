# Analog Threshold Monitor with LED Indicator

This sketch reads an analog value from pin A0, prints it to the Serial Monitor, and drives an LED on pin 12 LOW when the value exceeds an upper threshold (600). A lower threshold (50) is also defined but its action is not implemented. This appears to be a test sketch for calibrating an RF or analog signal input.

## Hardware

- Arduino Uno
- Analog sensor or RF signal detector
- LED (with current-limiting resistor)

## Pin Connections

| Component | Pin |
|-----------|-----|
| Analog Input | A0 |
| LED | 12 |

**Last Modified:** 2017-04-10
