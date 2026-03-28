/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

int RECV_PIN = 11;
int a=6;
long int d;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
 // pinMode(a,OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    delay(100);
    d=results.value;
    if(d==216002244)
    { 
      digitalWrite(a,HIGH);
    }
    else
    {
      digitalWrite(a,LOW);
    }
     irrecv.resume(); // Receive the next value
  }
  delay(100);
}
