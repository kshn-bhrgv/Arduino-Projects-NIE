# LightX

WS2812B LED strip controller that receives RGB color and animation commands over SoftwareSerial (Bluetooth). On startup it waits for an initial color + LED-count configuration packet. In the main loop it parses packets to either set a solid color across all LEDs or switch to one of 11 palette-based animations (rainbow, stripe, purple/green, random, B&W, cloud, party, Indian flag, etc.) using FastLED.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** LED data pin 5; SoftwareSerial RX=10, TX=11
- **LEDs:** Up to 100 WS2812B (GRB order)
- **Libraries:** FastLED, SoftwareSerial

## Packet Protocol

Packets are terminated with `':'`.
- Color packet: `XX<RR><GG><BB>-<N>:` (hex RGB + LED count)
- Animation packet: `@<hex-animation-index>:`

**Last Modified:** 2018-10-12
