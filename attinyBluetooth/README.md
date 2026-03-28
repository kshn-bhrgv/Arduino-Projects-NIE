# attinyBluetooth

ATtiny sketch that receives Bluetooth commands via SoftwareSerial and controls an LED on pin 0. Receiving `'1'` turns the LED on; any other character turns it off. Configures the Bluetooth module (HC-05 style) in slave mode on startup.

## Hardware

- **Platform:** ATtiny (requires ATtinyCore board support)
- **Pins:** RX=1, TX=2 (SoftwareSerial), LED on pin 0

## Usage

1. Select ATtiny board in Arduino IDE with ATtinyCore installed.
2. Pair a phone or device with the Bluetooth module named "Key".
3. Send `'1'` to turn the LED on; any other character turns it off.

**Last Modified:** 2018-08-10
