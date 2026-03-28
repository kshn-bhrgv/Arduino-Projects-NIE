# ESP8266 ThingSpeak IoT LED Controller (esp8266_pub)

This project uses an Arduino with a SoftwareSerial-connected ESP8266 module to periodically fetch the latest field value from a ThingSpeak channel via HTTP GET. If the retrieved value contains 'H' the on-board LED (pin 13) is driven HIGH; if it contains 'L' it is driven LOW. The ESP8266 is configured to join a Wi-Fi network using AT commands at 57600 baud, and data is fetched every 5 seconds.

## Hardware

- Arduino Uno or compatible
- ESP8266 Wi-Fi module
- LED on pin 13 (built-in LED on most boards)

## Pin Connections

| Pin | Function |
|-----|----------|
| 2   | SoftwareSerial TX to ESP8266 RX |
| 3   | SoftwareSerial RX from ESP8266 TX |
| 13  | LED output |

**Last Modified:** 2018-04-03
