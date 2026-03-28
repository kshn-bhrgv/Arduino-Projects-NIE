# IR Remote + 74HC595 Shift Register LED Controller

This sketch uses an IR receiver on pin 4 to decode remote button presses and control 8 output bits through a 74HC595 serial-in parallel-out (SIPO) shift register. Each of 8 remote buttons (sw1–sw8) XOR-toggles the corresponding bit in a byte, which is then shifted out to the IC via `shiftOut`. Two special codes turn all 8 outputs ON or OFF at once.

## Hardware

- Arduino Uno
- IR receiver module
- 74HC595 shift register
- Up to 8 LEDs or output devices (with resistors)

## Pin Connections

| Component | Pin |
|-----------|-----|
| IR Receiver | 4 |
| 74HC595 Data (SER / pin 14) | 3 |
| 74HC595 Clock (SRCLK / pin 11) | 4 |
| 74HC595 Latch (RCLK / pin 12) | 5 |

**Last Modified:** 2017-03-19
