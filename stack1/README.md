# Power Failure Detection with RF and ZCD

This sketch monitors mains power using a Zero Cross Detector (ZCD) on pin 3 and an RF receiver data line on pin 7 (from an HT12D or similar decoder). When the ZCD signal goes LOW for more than 3 seconds it enters an emergency function: if the RF pin is HIGH (indicating the power utility deliberately cut power) the red LED blinks slowly; if the RF pin is LOW (unannounced outage) the red LED stays on and a buzzer pulses, simulating an alert to send a message to the utility technician. A green LED indicates normal mains status.

## Hardware

- Arduino Uno
- Zero Cross Detector circuit
- RF receiver module (e.g., with HT12D decoder)
- Green LED
- Red LED
- Buzzer

## Pin Connections

| Component | Pin |
|-----------|-----|
| Zero Cross Detector | 3 |
| RF Data (HT12D output) | 7 |
| Green LED | 4 |
| Red LED | 5 |
| Buzzer | 6 |

**Last Modified:** 2017-12-18
