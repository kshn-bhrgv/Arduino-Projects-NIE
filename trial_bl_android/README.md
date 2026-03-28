# Bluetooth Android String Receiver

This sketch uses SoftwareSerial (pins 10/11) to receive strings from a Bluetooth module connected to an Android device. It reads incoming characters until a ':' delimiter is found, assembles them into a string, and prints the result to the hardware Serial Monitor. It is a building block for Bluetooth-based Android app communication.

## Hardware

- Arduino Uno
- HC-05 or HC-06 Bluetooth module

## Pin Connections

| Component | Pin |
|-----------|-----|
| Bluetooth RX (Arduino TX) | 11 |
| Bluetooth TX (Arduino RX) | 10 |

**Last Modified:** 2018-03-28
