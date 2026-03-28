# Potentiometer Motor Direction Controller with LCD

This sketch reads a potentiometer on A0, collects 1023 samples, and compares consecutive readings to determine if the value is rising or falling. Rising values drive the motor forward (pin 7 HIGH, "Turning Right") and falling values drive it in reverse (pin 8 HIGH, "Turning Left"); the direction text is shown on a 16x2 LCD. Motor speed is fixed at full power via `analogWrite(EN1, 255)`.

## Hardware

- Arduino Uno
- DC motor
- H-bridge motor driver (e.g., L298N)
- Potentiometer
- 16x2 character LCD

## Pin Connections

| Component | Pin |
|-----------|-----|
| LCD RS | 12 |
| LCD EN | 11 |
| LCD D4 | 5 |
| LCD D5 | 4 |
| LCD D6 | 3 |
| LCD D7 | 2 |
| Motor In1 | 7 |
| Motor In2 | 8 |
| Motor Enable (PWM) | 10 |
| Potentiometer | A0 |

**Last Modified:** 2017-06-19
