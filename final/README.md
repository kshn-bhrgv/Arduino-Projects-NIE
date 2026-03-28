# Sound-Reactive WS2812B LED Visualiser (final)

This project creates a music-reactive light display using a WS2812B addressable LED strip and a microphone or sound sensor. It samples audio from an analog pin, maintains short and long running averages to detect "HIGH" (beat/loud) versus "NORMAL" modes, and maps sound intensity to how many LEDs light up and in what colours. A switch on pin 3 toggles between the sound-reactive mode and an auto-cycling colour palette animation (Rainbow, Cloud, Party, etc.). LED colours shift randomly every 500 ms and unlit LEDs gradually fade to black.

## Hardware

- Arduino Uno or compatible
- WS2812B addressable LED strip (20 LEDs configured)
- Electret microphone with amplifier module (e.g., MAX4466, KY-038)
- Momentary push button or slide switch

## Pin Connections

| Pin | Function |
|-----|----------|
| 6   | WS2812B data line |
| A0  | Microphone / sound sensor analog output |
| 3   | Mode switch input (INPUT_PULLUP) |

**Last Modified:** 2017-06-14
