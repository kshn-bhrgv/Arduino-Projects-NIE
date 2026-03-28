# ESP8266 Web Server GPIO Control

This sketch runs a web server on an ESP8266 that serves an HTML page with ON/OFF buttons for two GPIO outputs (GPIO 0 and GPIO 2). Navigating to `/socket1On` or `/socket1Off` toggles GPIO 0, and `/socket2On` or `/socket2Off` toggles GPIO 2. The page is served at port 80 and mDNS is enabled under the hostname `esp8266`.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)
- Up to 2 relays or LEDs

## Pin Connections

| Component | Pin |
|-----------|-----|
| Output Socket 1 | GPIO 0 |
| Output Socket 2 | GPIO 2 |

**Last Modified:** 2017-04-28
