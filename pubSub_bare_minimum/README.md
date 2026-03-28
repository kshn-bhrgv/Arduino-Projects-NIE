# ESP8266 MQTT Light Controller (CloudMQTT)

This sketch connects an ESP8266 to a Wi-Fi network and a CloudMQTT broker. It subscribes to the topic `/light/in` to receive ON/OFF commands that toggle an LED on GPIO 13, and periodically publishes a random 0 or 1 to the topic `/light/out`. It demonstrates a bare-minimum MQTT publish/subscribe pattern using the PubSubClient library.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)
- LED (with current-limiting resistor)

## Pin Connections

| Component | Pin |
|-----------|-----|
| LED | GPIO 13 |

**Last Modified:** 2018-04-03
