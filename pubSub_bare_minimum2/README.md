# ESP8266 MQTT Security Alert Publisher

This sketch connects an ESP8266 to a CloudMQTT broker and continuously publishes the message "ITEM STOLEN!" to the topic `/security_system` every two seconds. It also listens on `/light/in` to toggle an LED on GPIO 13 based on incoming commands. It is designed as the transmitter side of a simple security notification system.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)
- LED (with current-limiting resistor)

## Pin Connections

| Component | Pin |
|-----------|-----|
| LED | GPIO 13 |

**Last Modified:** 2018-04-04
