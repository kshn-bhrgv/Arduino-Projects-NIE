# ESP8266 MQTT Publisher (Mosquitto)

This sketch connects an ESP8266 to the public `test.mosquitto.org` MQTT broker and repeatedly publishes the message "Stolen!!" to the topic `omkard_proj`. It reconnects automatically if the connection drops and prints connection status to the Serial Monitor. This is a basic IoT alert publisher demonstrating PubSubClient use on an ESP8266.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)

**Last Modified:** 2018-04-03
