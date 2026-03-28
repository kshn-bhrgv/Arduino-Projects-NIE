# Arduino + ESP8266 Web-Controlled Pin Toggle

This sketch uses an Arduino Uno communicating with an ESP8266 via SoftwareSerial (pins 18/19) to create a Wi-Fi web server. The server listens on port 80 for HTTP requests containing a `pin=` parameter; when received, it toggles the specified Arduino digital pin and sends back an HTTP response reporting the new pin state. Pins 10, 11, 12, and 13 are initialised as outputs.

## Hardware

- Arduino Uno (or Mega for pins 18/19)
- ESP8266 Wi-Fi module

## Pin Connections

| Component | Pin |
|-----------|-----|
| ESP8266 TX to Arduino RX | 19 |
| ESP8266 RX to Arduino TX | 18 |
| Controlled Output 1 | 10 |
| Controlled Output 2 | 11 |
| Controlled Output 3 | 12 |
| Controlled Output 4 | 13 |

**Last Modified:** 2017-04-13
