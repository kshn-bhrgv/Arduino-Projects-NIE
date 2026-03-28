# Serial + 74HC595 Shift Register LED Controller

This sketch reads single-character commands ('0'–'9') from the Serial Monitor and controls 8 outputs through a 74HC595 SIPO shift register. Characters '2'–'8' XOR-toggle individual bits using `shiftOut`; character '1' manually clocks each bit individually to toggle output 0; character '9' sets all outputs HIGH; character '0' clears all outputs. This is an updated version of the rf_nd_sipo project using serial input instead of IR.

## Hardware

- Arduino Uno
- 74HC595 shift register
- Up to 8 LEDs or output devices (with resistors)

## Pin Connections

| Component | Pin |
|-----------|-----|
| 74HC595 Data (SER / pin 14) | 3 |
| 74HC595 Clock (SRCLK / pin 11) | 4 |
| 74HC595 Latch (RCLK / pin 12) | 5 |

**Last Modified:** 2017-03-19
