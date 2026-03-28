# electronicscomplete1

Sound-reactive WS2812B LED visualizer using FastLED. Reads a microphone on A0 and lights up a proportional number of the 20 LEDs with dynamically changing colors. Includes a "HIGH" beat-detection mode with faster fading. A mode switch on pin 3 (INPUT_PULLUP) toggles between sound-reactive mode and a rotating color-palette animation. Also includes an Indian flag color palette.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** LED strip data on pin 6, microphone on A0, mode switch on pin 3
- **LEDs:** 20x WS2812B (GRB)
- **Libraries:** FastLED

**Last Modified:** 2017-12-24
