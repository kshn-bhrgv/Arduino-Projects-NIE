# diff_method

Arduino sketch that controls an LED on pin 13 and pin 8 via ThingSpeak IoT API. Connects an ESP8266 module via SoftwareSerial (AT commands) to read the latest value from a ThingSpeak channel field and turns the LED on for `'H'` or off for `'L'`. Polls every 5 seconds.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** LED on pin 13; ESP8266 via SoftwareSerial RX=3, TX=2
- **Baud rate:** ESP8266 at 57600

## Configuration

Edit `apiKey`, `ssid`, `pswd`, and the ThingSpeak channel ID before uploading.

**Last Modified:** 2017-04-21
