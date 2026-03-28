# ESP8266 WPS Wi-Fi Connection Test

This sketch tests WPS-based Wi-Fi connection on an ESP8266. On startup it first tries to reconnect using previously stored credentials from flash memory. If not already connected it initiates WPS configuration and waits for the result, printing the IP address, SSID, and MAC address on success or a failure message otherwise. The loop is empty.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)
- Wi-Fi router with WPS support

**Last Modified:** 2017-04-12
