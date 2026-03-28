# ESP8266 Wi-Fi Web Server Setup (Partial)

This sketch initialises an ESP8266 via SoftwareSerial on pins 2 and 3, calls a `wifi_init()` function to configure the module (using AT commands), and then prints "System Ready..". The sketch is incomplete — only the `setup()` function is present with no `loop()` body or `wifi_init()` implementation visible in the file.

## Hardware

- Arduino Uno
- ESP8266 Wi-Fi module (connected via SoftwareSerial)

## Pin Connections

| Component | Pin |
|-----------|-----|
| ESP8266 RX | 2 |
| ESP8266 TX | 3 |

**Last Modified:** 2018-02-01
