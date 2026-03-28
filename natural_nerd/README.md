# Sound-Reactive WS2812B LED Visualizer with Mode Switch

This project drives 20 WS2812B LEDs in two modes selected by a digital switch on pin 3. In music-visualizer mode it reads an analog microphone on A0, computes running short and long averages, and lights a proportional number of LEDs with dynamically shifting RGB colours; loud peaks trigger a "HIGH" mode with warmer colours and faster fading. When the switch is held, the sketch cycles through FastLED colour palettes (Rainbow, Stripe, Purple/Green, etc.) at 10-second intervals instead.

## Hardware

- Arduino Uno
- WS2812B addressable LED strip (20 LEDs)
- Analog microphone/sound sensor
- Toggle switch

## Pin Connections

| Component | Pin |
|-----------|-----|
| WS2812B Data | 6 |
| Microphone | A0 |
| Mode Switch | 3 |

**Last Modified:** 2018-02-13
