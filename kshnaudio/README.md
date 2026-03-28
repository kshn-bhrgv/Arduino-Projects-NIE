# Audio Visualizer with WS2812B LED Strip

This project creates a sound-reactive LED visualizer using a 15-LED WS2812B strip driven by the FastLED library. An analog microphone or audio signal connected to pin A0 is read each loop; the value is scaled and compared against thresholds to determine how many LEDs (1 to 15) should light up. LEDs that are active gradually brighten with mixed RGB increments while inactive LEDs fade toward black, producing a smooth VU-meter-style animation.

## Hardware

- Arduino Uno
- WS2812B addressable LED strip (15 LEDs)
- Analog microphone or audio sensor

## Pin Connections

| Component | Pin |
|-----------|-----|
| WS2812B Data | 3 |
| Microphone / Audio In | A0 |

**Last Modified:** 2017-08-10
