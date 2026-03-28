# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Overview

This is a personal Arduino project collection spanning hardware control, wireless communication, and IoT. Projects cover ATmega (Uno), ATtiny, and ESP8266 platforms. Each sketch lives in its own folder matching the `.ino` filename.

## Working with Arduino Sketches

Arduino sketches cannot be compiled or uploaded without the Arduino IDE or CLI connected to a board. Common Arduino CLI commands if installed:

```bash
# Compile a sketch
arduino-cli compile --fqbn arduino:avr:uno <sketch_folder>

# Upload to board (replace /dev/ttyUSB0 with actual port)
arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:uno <sketch_folder>

# List connected boards
arduino-cli board list

# Install a library
arduino-cli lib install "LibraryName"
```

For ESP8266 sketches (WiFi, MQTT projects), the board FQBN is `esp8266:esp8266:generic` or `esp8266:esp8266:nodemcuv2`.

## Libraries (in `/libraries`)

| Library | Purpose |
|---|---|
| `Adafruit_NeoPixel` | WS2812B/NeoPixel addressable LEDs |
| `FastLED` | Addressable LED strips (WS2812, APA102, etc.) |
| `irRemote` | IR remote receive/transmit |
| `LiquidCrystal` | HD44780-compatible LCD displays |
| `MPU6050` / `MPU6050_tockn` | Gyroscope/accelerometer IMU |
| `PubSubClient` | MQTT publish/subscribe for ESP8266 |
| `PololuLedStrip` | Pololu LED strip control |
| `Arduino_Uno_WiFi_Dev_Ed_Library` | Arduino Uno WiFi Dev Edition |

## Project Architecture Patterns

**Pin assignments** are defined as `#define` or `const int` at the top of each sketch — always check these before assuming connections.

**WiFi/MQTT sketches** (ESP8266) follow a common pattern:
- WiFi credentials and MQTT broker details as `#define` constants at top of file
- `setup()` connects WiFi then MQTT
- `loop()` calls `client.loop()` for MQTT keepalive and reconnects if disconnected
- See `pubSub_bare_minimum2/` for the most complete reconnection logic

**IR control sketches** use a numeric code comparison (`results.value == <hex_code>`) decoded from a specific remote — the code must be discovered empirically per remote.

**Stepper motor sketches** use direct `digitalWrite` pulse sequences (not the Stepper library) — pulse width and step count are hardcoded per project.

## Hardware Platforms

- **Arduino Uno / ATmega328P** — most projects
- **ATtiny** — `attiny*`, `helmet_attiny*` sketches (requires ATtinyCore board support)
- **ESP8266** — all WiFi/MQTT projects; uses `ESP8266WiFi.h` and `PubSubClient.h`

## Credentials / Sensitive Data

Some sketches contain hardcoded WiFi SSIDs, passwords, and MQTT broker credentials inline. The `TembooAccount.h` files in `SendAnEmail_temboo/` and `temboo_energia/` contain Temboo API credentials — treat these as sensitive.
