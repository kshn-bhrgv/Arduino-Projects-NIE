# Temboo Google Sheets Data Logger (ESP8266)

This sketch connects an ESP8266 to Wi-Fi and uses the Temboo platform to append rows of simulated sensor data to a Google Spreadsheet. On each iteration it calls the `Google/Spreadsheets/AppendRow` choreo with a date, incrementing sensor value, and text string. It limits itself to 4 Temboo API calls to avoid exhausting quota during testing.

## Hardware

- ESP8266 module (e.g., NodeMCU or Wemos D1)

**Last Modified:** 2018-04-03
