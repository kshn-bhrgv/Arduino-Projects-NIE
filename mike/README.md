# Microphone Level to LED Display

This sketch reads an analog microphone on pin A0, maps the raw value (0–1023) to a 0–255 range, and drives three LEDs on pins 2, 3, and 4 in different combinations depending on which amplitude range is detected. Seven distinct level bands each light a different combination of the three LEDs, creating a simple 3-bit audio level indicator.

## Hardware

- Arduino Uno
- Analog microphone module
- 3x LEDs (with current-limiting resistors)

## Pin Connections

| Component | Pin |
|-----------|-----|
| Microphone | A0 |
| LED A | 2 |
| LED B | 3 |
| LED C | 4 |
| LED D | 5 |

**Last Modified:** 2017-06-14
