# Single WS2812B Color Sweep

This sketch drives a single WS2812B LED and cycles it through a large range of HSV colour combinations by iterating through hue (20–255 step 10), saturation (30–250 step 25), and brightness (25–200 step 1) in nested loops. Each combination is displayed for 10 ms via `FastLED.delay`, producing a smooth continuous colour sweep.

## Hardware

- Arduino Uno
- 1x WS2812B addressable LED

## Pin Connections

| Component | Pin |
|-----------|-----|
| WS2812B Data | 5 |

**Last Modified:** 2017-10-25
