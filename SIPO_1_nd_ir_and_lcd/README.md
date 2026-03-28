# SIPO_1_nd_ir_and_lcd

Extends SIPO_1_nd_ir by adding an 8x2 LCD display. IR remote buttons toggle individual 74HC595 outputs and the LCD shows status ("All off", "All on", or which lights are active).

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** IR receiver on pin 8; Data=9, Clock=7, Latch=13 (74HC595); LCD on RS=12, EN=11, D4=5, D5=4, D6=3, D7=2
- **Libraries:** IRremote, LiquidCrystal

## Usage

1. Wire the 74HC595, IR receiver, and 8x2 LCD to the pins above.
2. Upload and control outputs via IR remote; the LCD reflects current state.

**Last Modified:** 2017-03-15
