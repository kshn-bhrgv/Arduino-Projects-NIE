# WiFiWebServer

ESP8266 HTTP server that controls GPIO2 via URL-based requests. Navigating to `http://<ip>/gpio/1` sets GPIO2 HIGH and `/gpio/0` sets it LOW; the current state is returned in the HTML response.

## Hardware

- **Platform:** ESP8266 (e.g. NodeMCU)
- **Board FQBN:** `esp8266:esp8266:nodemcuv2`
- **Pins:** GPIO2 (output)

## Configuration

Edit the `ssid` and `password` constants at the top of the sketch.

## Usage

1. Upload to an ESP8266.
2. Open Serial Monitor at 115200 baud to find the IP address.
3. Use a browser or curl: `http://<ip>/gpio/1` (on) or `http://<ip>/gpio/0` (off).

**Last Modified:** 2018-02-01
