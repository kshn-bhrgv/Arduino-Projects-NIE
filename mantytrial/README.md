# Five-Sensor LED Display

This sketch reads five analog inputs (A0–A4) and lights up corresponding pairs of LEDs on pins 3–7 when each sensor value drops below a threshold (500 or 600). LEDs are turned on for each triggered sensor and then all turned off after a 50 ms delay, creating a flicker effect that reflects sensor activity. It appears designed for a touch or pressure sensor array.

## Hardware

- Arduino Uno
- 5x analog sensors (e.g., touch or pressure sensors)
- 5x LEDs (with current-limiting resistors)

## Pin Connections

| Component | Pin |
|-----------|-----|
| LED 1 | 3 |
| LED 2 | 4 |
| LED 3 | 5 |
| LED 4 | 6 |
| LED 5 | 7 |
| Sensor 1 | A0 |
| Sensor 2 | A1 |
| Sensor 3 | A2 |
| Sensor 4 | A3 |
| Sensor 5 | A4 |

**Last Modified:** 2017-12-18
