# Potentiometer-Controlled Software PWM

This sketch generates a software PWM signal on pin 12 whose duty cycle is controlled by a potentiometer on A0. The potentiometer value (0–1023) sets the LOW time (`t2`), while `t1 = 1000 - t2` sets the HIGH time, so turning the pot varies the duty cycle. The `delayMicroseconds` calls create the pulse timing.

## Hardware

- Arduino Uno
- Potentiometer
- LED or other PWM-compatible load

## Pin Connections

| Component | Pin |
|-----------|-----|
| PWM Output | 12 |
| Potentiometer | A0 |

**Last Modified:** 2017-03-20
