# ESP8266 Wi-Fi Device Control Web Server

This sketch runs a web server on an ESP8266 that serves an HTML page to control four GPIO outputs (pins 5, 4, 0, 13) labeled Device 1–4. URL routes `/light1on`–`/light4off` turn individual outputs on or off. The page displays the current ON/OFF state of each device in an HTML table and refreshes after each command.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)
- Up to 4 relays or loads

## Pin Connections

| Component | GPIO |
|-----------|------|
| Device 1 | 5 |
| Device 2 | 4 |
| Device 3 | 0 |
| Device 4 | 13 |

**Last Modified:** 2017-05-03
