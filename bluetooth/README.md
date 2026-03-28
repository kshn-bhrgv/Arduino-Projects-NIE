# bluetooth

Controls two output pins via serial (Bluetooth) commands. Sending `'2'` drives pin 13 HIGH; `'1'` drives pin 7 HIGH; any other character turns both off. Identical in logic to BT_Serial but without SoftwareSerial.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** Outputs on 7 and 13; Bluetooth module on hardware serial

**Last Modified:** 2017-06-23
