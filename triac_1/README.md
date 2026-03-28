# IR Receiver LED Blink Test

This sketch initialises an IR receiver on pin 8 but does not actually use any received data. Instead, the loop simply blinks an LED on pin 5 with a 1-second on / 1-second off pattern. It appears to be a basic hardware sanity-check sketch confirming the IR receiver is wired before the full IR logic is added.

## Hardware

- Arduino Uno
- IR receiver module
- LED (with current-limiting resistor)

## Pin Connections

| Component | Pin |
|-----------|-----|
| IR Receiver | 8 |
| LED | 5 |

**Last Modified:** 2017-03-16
