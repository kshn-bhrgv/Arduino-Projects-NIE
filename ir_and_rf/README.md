# IR Remote Controlled LED Sequencer

This project uses an IR remote receiver to incrementally turn on or off up to four LEDs based on received IR codes. When the "increment" IR code is received, the sketch turns on the next LED in sequence (pins 12, 9, 10, 11); once all four are on, the same button begins turning them off in reverse order. The decoded IR values and a counter variable track the current state.

## Hardware

- Arduino Uno
- IR receiver module
- 4x LEDs (with current-limiting resistors)

## Pin Connections

| Component | Pin |
|-----------|-----|
| IR Receiver | 4 |
| LED A | 12 |
| LED B | 9 |
| LED C | 10 |
| LED D | 11 |

**Last Modified:** 2017-03-17
