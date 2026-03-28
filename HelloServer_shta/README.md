# HelloServer_shta

Minimal ESP8266 web server that responds with "hello from esp8266!" as plain text at the root URL. Includes a 404 handler that reports the unmatched URI and HTTP method.

## Hardware

- **Platform:** ESP8266 (e.g. NodeMCU)
- **Board FQBN:** `esp8266:esp8266:nodemcuv2`

## Configuration

Edit the `ssid` and `password` constants before uploading.

## Usage

1. Upload to an ESP8266.
2. Open Serial Monitor at 115200 baud and note the IP address.
3. Open `http://<ip>/` in a browser to see the greeting.

**Last Modified:** 2018-04-03
