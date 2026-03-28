# Sound-Reactive WS2812B LED Visualizer (15 LEDs)

This sketch drives a 15-LED WS2812B strip as a sound-reactive visualizer. An analog microphone on A0 is read continuously; short and long running averages determine how many LEDs light up and whether the strip is in NORMAL or HIGH (loud beat) mode, with different colour behaviours for each. When the microphone is not connected (analog value above 600), the sketch falls back to cycling through FastLED Rainbow and Party colour palettes instead.

## Hardware

- Arduino Uno
- WS2812B addressable LED strip (15 LEDs)
- Analog microphone/sound sensor

## Pin Connections

| Component | Pin |
|-----------|-----|
| WS2812B Data | 6 |
| Microphone | A0 |

**Last Modified:** 2017-08-17
