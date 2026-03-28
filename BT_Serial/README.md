# BT_Serial

Controls two output pins (13 and 7) via serial commands. Reads single-character commands from the hardware serial port: `'2'` sets pin 13 HIGH, `'1'` sets pin 7 HIGH, any other character turns both off. Uses SoftwareSerial on pins 10/11 for a Bluetooth module.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** Outputs on 7 and 13; SoftwareSerial Bluetooth on RX=10, TX=11

## Usage

1. Connect a Bluetooth module (e.g. HC-05) to SoftwareSerial pins 10 (TX) and 11 (RX).
2. Upload and send `'1'` or `'2'` from a Bluetooth terminal to toggle the outputs.

**Last Modified:** 2017-07-01
