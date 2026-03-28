# HelloServer

ESP8266 web server that serves a canvas-based JavaScript game at the root URL. The game features a red player piece navigating around a green obstacle; movement is controlled by on-screen UP/DOWN/LEFT/RIGHT buttons. An `/inline` endpoint and a 404 handler are also registered. The built-in LED (pin 13) pulses on each request.

## Hardware

- **Platform:** ESP8266 (e.g. NodeMCU)
- **Board FQBN:** `esp8266:esp8266:nodemcuv2`

## Configuration

Edit the `ssid` and `password` constants at the top of the sketch before uploading.

## Usage

1. Upload to an ESP8266.
2. Open Serial Monitor at 115200 baud and note the assigned IP address.
3. Navigate to `http://<ip>/` in a browser to play the game.

**Last Modified:** 2018-02-01
