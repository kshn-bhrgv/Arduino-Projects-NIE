# Ultrasonic Distance Sensor with Servo and Warning LED

This sketch measures distance using an HC-SR04 ultrasonic sensor and reacts with a servo motor and warning LED based on three distance zones. At less than 40 cm the servo moves to 180° and the warning LED stays on (accident detected). Between 40 and 70 cm the servo sweeps incrementally from 0° to 89° and the LED blinks as a caution. Beyond 70 cm the servo returns to 0° and the LED turns off. Designed for a Wemos D1 (ESP8266) board.

## Hardware

- Wemos D1 (ESP8266) or compatible board
- HC-SR04 ultrasonic sensor
- Servo motor
- LED (warning indicator)

## Pin Connections

| Component | Wemos D1 Pin | GPIO |
|-----------|-------------|------|
| Ultrasonic Trig | D1 | 5 |
| Ultrasonic Echo | D2 | 4 |
| Warning LED | D4 | 2 |
| Servo Signal | D5 | 14 |

**Last Modified:** 2018-04-10
