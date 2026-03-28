# Arduino Projects — NIE

A collection of Arduino sketches written during college at NIE (2017–2019). The projects span basic electronics, wireless communication, IoT/cloud integration, and embedded systems. Each folder is a self-contained Arduino sketch with its own README.

---

## Project Index

### LED & Light Control

| Folder | Description | Date |
|--------|-------------|------|
| [led](led/) | Basic LED on/off | 2017-06-18 |
| [led blinking](led%20blinking/) | LED blink with delay | 2017-08-28 |
| [led_app_ard](led_app_ard/) | App-controlled LED via Bluetooth | 2018-03-07 |
| [LightX](LightX/) | Bluetooth-controlled WS2812B strip with 11 animations (FastLED) | 2018-10-12 |
| [ws2812_single](ws2812_single/) | WS2812B single LED random color with stop button | 2017-10-25 |
| [ws2812_single1](ws2812_single1/) | WS2812B strip color cycle | 2017-10-25 |
| [ws2812btrial](ws2812btrial/) | Audio-reactive WS2812B visualiser (microphone) | 2017-08-17 |
| [kshnaudio](kshnaudio/) | Sound-reactive WS2812B audio visualiser | 2017-08-10 |
| [natural_nerd](natural_nerd/) | WS2812B LED strip effects | 2018-02-13 |
| [final](final/) | Sound-reactive WS2812B visualiser (microphone + FastLED) | 2017-06-14 |
| [pin13trial](pin13trial/) | Pin 13 LED blink test | 2017-03-07 |
| [abhi](abhi/) | 1-second LED blink (pin 13) | 2017-11-28 |

### LCD Display

| Folder | Description | Date |
|--------|-------------|------|
| [HelloWorld](HelloWorld/) | LiquidCrystal "Hello World" on 16×2 LCD | 2017-03-08 |
| [lcd1](lcd1/) | Basic LCD text display | 2017-03-07 |
| [lcd2](lcd2/) | LCD with custom characters | 2017-03-11 |
| [lcd3](lcd3/) | LCD scrolling text | 2017-03-08 |
| [lcd4](lcd4/) | LCD autoscroll demo | 2017-03-11 |
| [workingpart1](workingpart1/) | LCD display working example | 2017-03-09 |

### IR Remote Control

| Folder | Description | Date |
|--------|-------------|------|
| [ir](ir/) | IR receiver LED toggle (IRremote library) | 2017-06-18 |
| [_2_tsop](_2_tsop/) | Dual TSOP IR receiver LED toggle | 2017-03-17 |
| [_2_way_trial](_2_way_trial/) | Single IR receiver LED on/off | 2017-04-04 |
| [ir_and_rf](ir_and_rf/) | IR remote 4-LED sequencer | 2017-03-17 |
| [ircontrolledlcd](ircontrolledlcd/) | IR remote controls LCD display | 2017-04-07 |
| [triac_1](triac_1/) | IR-triggered triac/relay control | 2017-03-16 |
| [traic_nd_ir](traic_nd_ir/) | Triac + IR remote control | 2017-03-16 |
| [sketch_jan25a](sketch_jan25a/) | IR remote LED control sketch | 2017-01-25 |

### Shift Registers (74HC595)

| Folder | Description | Date |
|--------|-------------|------|
| [SIPO_1](SIPO_1/) | 74HC595 shift register 0–10 counter | 2018-03-26 |
| [SIPO_using_74595](SIPO_using_74595/) | 74HC595 sequential byte counter (0–253) | 2017-03-10 |
| [SIPO_1_nd_ir](SIPO_1_nd_ir/) | IR remote toggles 8 shift register outputs | 2017-03-11 |
| [SIPO_1_nd_ir_and_lcd](SIPO_1_nd_ir_and_lcd/) | IR + shift register + LCD status display | 2017-03-15 |
| [SIPO_2_nd_ir_3_4_17](SIPO_2_nd_ir_3_4_17/) | Two-pin HIGH test sketch | 2017-04-10 |
| [rf_nd_sipo](rf_nd_sipo/) | RF remote drives 74HC595 to toggle 8 outputs | 2017-03-19 |
| [rf_nd_sipo_try2](rf_nd_sipo_try2/) | RF + shift register variation | 2017-03-19 |

### RF (Radio Frequency)

| Folder | Description | Date |
|--------|-------------|------|
| [rf](rf/) | RF receiver basic decode | 2017-04-10 |
| [rf_trial](rf_trial/) | RF receiver trial | 2017-03-19 |
| [mech_final_rf](mech_final_rf/) | RF-controlled mechanical system (final) | 2018-05-30 |

### Stepper Motors

| Folder | Description | Date |
|--------|-------------|------|
| [3d_stepper](3d_stepper/) | Stepper motor sweep for a 3D scanner (STEP/DIR) | 2018-06-03 |
| [STEP_21](STEP_21/) | Bidirectional stepper rotation (STEP/DIR, pins 3/4) | 2018-02-23 |
| [stepper_control](stepper_control/) | Stepper motor speed/direction control | 2018-05-04 |
| [stepper_mech_finalyear](stepper_mech_finalyear/) | Dual stepper serial command interface (final year project) | 2018-05-30 |
| [stepper_mech_trial](stepper_mech_trial/) | Dual stepper trial | 2018-05-30 |
| [steppertry](steppertry/) | Stepper motor trial | 2018-01-17 |

### Bluetooth

| Folder | Description | Date |
|--------|-------------|------|
| [bluetooth](bluetooth/) | Hardware serial Bluetooth LED switch | 2017-06-23 |
| [bluetooh_led](bluetooh_led/) | Bluetooth '1'/'0' LED controller (SoftwareSerial) | 2017-03-20 |
| [BT_Serial](BT_Serial/) | Bluetooth serial two-output controller (pins 7, 13) | 2017-07-01 |
| [attinyBluetooth](attinyBluetooth/) | ATtiny Bluetooth LED slave controller | 2018-08-10 |
| [trial_bl_android](trial_bl_android/) | Android Bluetooth LED control trial | 2018-03-28 |

### WiFi & Web Server (ESP8266)

| Folder | Description | Date |
|--------|-------------|------|
| [WiFiWebServer](WiFiWebServer/) | ESP8266 HTTP server GPIO toggle | 2018-02-01 |
| [HelloServer](HelloServer/) | ESP8266 web server serving a browser canvas game | 2018-02-01 |
| [HelloServer_shta](HelloServer_shta/) | ESP8266 minimal "hello" web server | 2018-04-03 |
| [wifi](wifi/) | ESP8266 WiFi connection test | 2017-04-13 |
| [wifi1](wifi1/) | WiFi connection variation | 2017-04-12 |
| [working_of_wifi_from_net](working_of_wifi_from_net/) | WiFi operation example from documentation | 2017-05-03 |
| [trialwebpage](trialwebpage/) | ESP8266 trial webpage server | 2017-04-28 |
| [sketch_feb01a](sketch_feb01a/) | ESP8266 WiFi sketch (incomplete) | 2018-02-01 |

### MQTT / PubSub (ESP8266)

| Folder | Description | Date |
|--------|-------------|------|
| [pubSub_bare_minimum](pubSub_bare_minimum/) | Minimal MQTT publish/subscribe | 2018-04-03 |
| [pubSub_bare_minimum2](pubSub_bare_minimum2/) | MQTT security alert system (`/security_system` topic) | 2018-04-04 |
| [publisher_esp8266](publisher_esp8266/) | ESP8266 MQTT publisher | 2018-04-03 |
| [esp8266_pub](esp8266_pub/) | Arduino + ESP8266 fetches ThingSpeak to control LED | 2018-04-03 |

### Cloud / Email (Temboo)

| Folder | Description | Date |
|--------|-------------|------|
| [SendAnEmail_temboo](SendAnEmail_temboo/) | Arduino Yún Gmail sender via Temboo | 2018-04-03 |
| [temboo_energia](temboo_energia/) | Temboo email via Energia (MSP430) | 2018-04-03 |
| [tembooooooo](tembooooooo/) | Temboo email trial | 2018-04-03 |

### Sensors

| Folder | Description | Date |
|--------|-------------|------|
| [analogread](analogread/) | A0 potentiometer voltage logger to Serial | 2017-08-22 |
| [analog_read](analog_read/) | Digital pin 9 state logger | 2017-08-02 |
| [AnalogRead_Modified](AnalogRead_Modified/) | Potentiometer logger to Serial (A0) | 2018-12-06 |
| [analogcommosci](analogcommosci/) | Pulse period measurement via `millis()` | 2017-10-27 |
| [analogcommosci1](analogcommosci1/) | Digital pin 8 continuous state logger | 2017-10-27 |
| [pot](pot/) | Potentiometer read and Serial print | 2017-06-14 |
| [potCheck](potCheck/) | Potentiometer value check | 2019-01-03 |
| [pot__speed_motor](pot__speed_motor/) | Potentiometer-controlled motor speed | 2017-06-19 |
| [maxvaluetesting](maxvaluetesting/) | Max analog value detection test | 2017-08-17 |
| [mpu6050_real_val](mpu6050_real_val/) | MPU6050 I2C accelerometer/gyroscope real values | 2018-06-04 |
| [ultra_sonic_test](ultra_sonic_test/) | HC-SR04 ultrasonic sensor with servo and warning LED | 2018-04-10 |
| [mike](mike/) | Microphone analog input test | 2017-06-14 |

### Motors & PWM

| Folder | Description | Date |
|--------|-------------|------|
| [motor](motor/) | DC motor control | 2017-06-23 |
| [diff_method](diff_method/) | Dual potentiometer H-bridge DC motor controller | 2017-04-21 |
| [pwm](pwm/) | PWM output test | 2017-06-23 |
| [pwm_trial](pwm_trial/) | PWM trial | 2017-03-20 |
| [servo_manual](servo_manual/) | Manual servo position control | 2018-12-06 |

### ATtiny Projects

| Folder | Description | Date |
|--------|-------------|------|
| [attinyserial](attinyserial/) | ATtiny analog-to-SoftwareSerial logger | 2017-09-16 |
| [helmet_attiny](helmet_attiny/) | ATtiny side of helmet turn-signal system | 2018-08-17 |
| [helmet_attiny_control](helmet_attiny_control/) | Serial 'R'/'L' pulse encoder for helmet turn signals | 2018-08-17 |

### Complex / Final Year Projects

| Folder | Description | Date |
|--------|-------------|------|
| [naveen_final](naveen_final/) | EEPROM keypad password lock with LCD | 2018-05-31 |
| [stack1](stack1/) | Power failure detection with ZCD + RF alert | 2017-12-18 |
| [electronicscomplete1](electronicscomplete1/) | Helmet turn-signal long/short pulse detection | 2017-12-24 |
| [chetan_proj](chetan_proj/) | Serial '1'/'2' two-output controller | 2017-11-18 |
| [mantytrial](mantytrial/) | Trial project | 2017-12-18 |
| [xor_nd_power_moc_1](xor_nd_power_moc_1/) | XOR gate + power MOSFET control | 2017-04-04 |
| [_7447](_7447/) | 7447 BCD-to-7-segment decoder input sequencer | 2017-03-09 |

### Miscellaneous / Sketches

| Folder | Description | Date |
|--------|-------------|------|
| [delay](delay/) | 1.5-second LED blink (pin 8) | 2017-03-07 |
| [uno_check](uno_check/) | Arduino Uno connectivity check | 2019-01-03 |
| [trial](trial/) | General trial sketch | 2017-06-22 |
| [trialtodel](trialtodel/) | Trial sketch (to delete) | 2017-03-30 |
| [sketch_mar04b](sketch_mar04b/) | March 2017 LCD sketch | 2017-03-04 |
| [sketch_feb03a](sketch_feb03a/) | February 2018 sketch | 2018-02-04 |
| [sketch_feb05a](sketch_feb05a/) | Stepper motor February 2018 sketch | 2018-02-05 |
| [sketch_mar09a](sketch_mar09a/) | Empty sketch | 2017-03-09 |
| [stacktrial](stacktrial/) | Stack/power trial | 2017-12-18 |
| [temp_waste](temp_waste/) | Commented-out temp sketch | 2018-03-27 |
| [DEL](DEL/) | Empty placeholder sketch | 2017-04-13 |

---

## Libraries

Third-party libraries are in the [`libraries/`](libraries/) folder:

- **Adafruit_NeoPixel** — WS2812B/NeoPixel addressable LEDs
- **FastLED** (v3.1) — Addressable LED strips (WS2812, APA102, etc.)
- **irRemote** — IR remote receive/transmit
- **LiquidCrystal** — HD44780-compatible LCD displays
- **MPU6050 / MPU6050_tockn** — Gyroscope/accelerometer IMU
- **PubSubClient** — MQTT publish/subscribe for ESP8266
- **PololuLedStrip** — Pololu LED strip control
- **Adafruit_Circuit_Playground** — Adafruit Circuit Playground board support
- **Arduino_Uno_WiFi_Dev_Ed_Library** — Arduino Uno WiFi Dev Edition

## Platforms Used

- **Arduino Uno** (ATmega328P) — majority of projects
- **ATtiny** — `attiny*`, `helmet_attiny*` sketches
- **ESP8266** (NodeMCU / Wemos D1) — all WiFi and MQTT projects
- **Arduino Yún** — Temboo email projects
