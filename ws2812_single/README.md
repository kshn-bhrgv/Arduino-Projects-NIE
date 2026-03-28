# Single WS2812B Random Color Flasher

This sketch drives a single WS2812B LED using the FastLED library. While a stop button on pin 8 is LOW, it generates random HSV colour values (hue, saturation, brightness) and displays them on the LED with a 100 ms update rate. When the button is held HIGH the LED holds its last colour and updates are paused.

## Hardware

- Arduino Uno
- 1x WS2812B addressable LED
- Push button

## Pin Connections

| Component | Pin |
|-----------|-----|
| WS2812B Data | 5 |
| Stop Button | 8 |

**Last Modified:** 2017-10-25
