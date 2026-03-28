# Potentiometer-Controlled Servo

This sketch reads a potentiometer on pin A0 and maps its value into four discrete servo positions (0°, 30°, 150°, 180°) based on four voltage ranges. The servo position is updated every 150 ms. It is a basic threshold-based servo position controller.

## Hardware

- Arduino Uno
- Servo motor
- Potentiometer

## Pin Connections

| Component | Pin |
|-----------|-----|
| Servo Signal | 9 |
| Potentiometer | A0 |

**Last Modified:** 2019-01-03
