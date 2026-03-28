# Analog-Input PWM LED

This sketch reads an analog sensor (potentiometer or similar) on pin A0, collects 1023 samples into an array, and then compares consecutive samples. When the next sample is larger than the current one, it maps the value to a 0–255 PWM range and writes it to pin 10 via `analogWrite`. It is a basic experiment in reading analog values and driving an LED at variable brightness.

## Hardware

- Arduino Uno
- Potentiometer or analog sensor
- LED (with current-limiting resistor)

## Pin Connections

| Component | Pin |
|-----------|-----|
| Analog Sensor | A0 |
| LED (PWM output) | 10 |

**Last Modified:** 2017-06-18
