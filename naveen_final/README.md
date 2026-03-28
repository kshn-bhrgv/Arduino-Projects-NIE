# Keypad Password Lock with LCD and EEPROM

This project implements a numeric password entry system using a 4x4 matrix keypad, a 16x2 LCD, and EEPROM storage. The user can choose to enter the password for access or change the stored password. Passwords up to 10 digits are stored in EEPROM (padded with zeros). On entry, the input is compared against the stored value and the LCD shows whether it is correct or incorrect. Pressing 'D' on the keypad confirms entry.

## Hardware

- Arduino Uno
- 4x4 matrix keypad
- 16x2 character LCD
- Built-in EEPROM

## Pin Connections

| Component | Pin |
|-----------|-----|
| Keypad Rows | 5, 4, 3, 2 |
| Keypad Columns | A0, A1, A2, A3 |
| LCD RS | 12 |
| LCD EN | 13 |
| LCD D4 | 8 |
| LCD D5 | 9 |
| LCD D6 | 10 |
| LCD D7 | 11 |

**Last Modified:** 2018-05-31
