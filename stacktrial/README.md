# ZCD and RF Signal Monitor

This sketch reads both a Zero Cross Detector (ZCD) signal on pin 3 and an RF receiver data line on pin 7, printing their digital states to the Serial Monitor every 200 ms. It also briefly activates a buzzer on pin 6 and lights green and red LEDs on startup. This is a diagnostic/test version of the power monitoring circuit used in the stack1 project.

## Hardware

- Arduino Uno
- Zero Cross Detector circuit
- RF receiver module
- Green LED
- Red LED
- Buzzer

## Pin Connections

| Component | Pin |
|-----------|-----|
| Zero Cross Detector | 3 |
| RF Data | 7 |
| Green LED | 4 |
| Red LED | 5 |
| Buzzer | 6 |

**Last Modified:** 2017-12-18
