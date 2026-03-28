#include<IRremote.h>
int RECV_PIN=8;
IRrecv irrecv(RECV_PIN);
int a=5;
decode_results results;



void setup() {
pinMode(a,OUTPUT);
irrecv.enableIRIn();
Serial.begin(9600); 
}

void loop(){
  
  delay(1000);
  digitalWrite(a,LOW);
  delay(1000);
  digitalWrite(a,HIGH);
  
  
  
}
