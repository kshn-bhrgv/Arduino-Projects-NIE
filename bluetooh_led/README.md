# bluetooh_led

Controls an LED on pin 7 via Bluetooth serial commands. Receiving `'1'` turns the LED on; `'0'` turns it off. Uses the hardware serial port so the Bluetooth module connects directly to the Arduino TX/RX pins.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** LED on pin 7; Bluetooth module on hardware serial (pins 0/1)
- **Baud rate:** 38400

**Last Modified:** 2017-03-20
