# SIPO_1_nd_ir

Controls 8 output channels via a 74HC595 shift register using an IR remote. Each remote button (sw1-sw8) XOR-toggles a corresponding output bit. Special codes turn all outputs on or off at once.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** IR receiver on pin 8; Data=9, Clock=7, Latch=13 (74HC595)
- **Libraries:** IRremote

## Usage

1. Wire a 74HC595 and an IR receiver (TSOP) to the pins above.
2. Upload and use the IR remote to toggle individual outputs or all on/off.

**Last Modified:** 2017-03-11
