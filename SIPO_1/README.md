# SIPO_1

Controls 8 output channels via a 74HC595 shift register using the Arduino `shiftOut` function. Channels are toggled individually from the Serial Monitor by sending digit characters ('1'-'8'), with '9' turning all on and '0' turning all off.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** Data (serial in) = 9, Clock = 7, Latch = 13
- **IC:** 74HC595 SIPO shift register

## Usage

1. Connect a 74HC595 with DATA on pin 9, CLOCK on pin 7, LATCH on pin 13.
2. Upload and open Serial Monitor at 9600 baud.
3. Send `'1'`-`'8'` to toggle individual outputs, `'9'` for all on, `'0'` for all off.

**Last Modified:** 2018-03-26
