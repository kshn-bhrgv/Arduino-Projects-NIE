# Temboo Gmail Email Sender

This sketch uses the Temboo cloud platform to send a single email via Gmail when the Arduino starts up. It connects to Wi-Fi using a Wi-Fi shield, then invokes the Temboo `Google/Gmail/SendEmail` choreo with configured username, app password, recipient, subject ("ALERT: Greenhouse Temperature"), and body ("Hey! The greenhouse is too cold!"). The email is only sent once per power cycle.

## Hardware

- Arduino Uno or TI LaunchPad
- Wi-Fi shield (compatible with the WiFi library)

## Pin Connections

Wi-Fi shield connects via SPI. No additional pin connections required.

**Last Modified:** 2018-04-03
