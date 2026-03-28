# AnalogRead_Modified

Reads the analog value from a potentiometer on pin A0 and prints it to the Serial Monitor at 9600 baud every 100 ms. Based on the standard Arduino AnalogInput example, modified to remove the LED blink and output only the sensor value over serial.

## Hardware

- **Platform:** Arduino Uno (ATmega328P)
- **Pins:** Potentiometer center wiper to A0

## Usage

1. Connect a potentiometer between 5V, GND, and A0.
2. Upload and open Serial Monitor at 9600 baud to see readings.

**Last Modified:** 2018-12-06
