# SendAnEmail_temboo

Sends a single email via Gmail using the Temboo choreo library on an Arduino Yun. Demonstrates the Google > Gmail > SendEmail Temboo choreo.

> **Note:** Credentials are stored in `TembooAccount.h`. Do not share that file publicly.

## Hardware

- **Platform:** Arduino Yun
- **Libraries:** Bridge, Temboo

## Setup

1. Create a Temboo account and obtain an App Key.
2. Enable Gmail 2-step authentication and generate an App Password.
3. Fill in `TembooAccount.h` and the Gmail credential constants in the sketch.
4. Upload and open Serial Monitor at 9600 baud.

**Last Modified:** 2018-04-03
