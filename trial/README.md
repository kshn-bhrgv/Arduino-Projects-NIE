# Analog Sensor Threshold Controller

This sketch reads an analog value from pin A0 and uses it to control two outputs. When the scaled value (`h = e * 50`) exceeds 200, pin 7 is driven HIGH and pin 9 receives a full PWM value of 250. When below 200, pin 7 is LOW and pin 9 receives a PWM proportional to the analog reading. The raw and scaled values are printed to the Serial Monitor.

## Hardware

- Arduino Uno
- Analog sensor or potentiometer
- LED or motor on PWM output

## Pin Connections

| Component | Pin |
|-----------|-----|
| Analog Sensor | A0 |
| Digital Output | 7 |
| PWM Output | 9 |

**Last Modified:** 2017-06-22
