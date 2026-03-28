#include <IRremote.h>

int a=12;
int b=9;
int c=10;
int d=11;

int counter=0;

int RECV_PIN=4;
IRrecv irrecv(RECV_PIN);
decode_results results;

unsigned long inc=12582924;
unsigned long dec=12582912;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  
}

void loop() {
  unsigned long store;
  if(irrecv.decode(&results))
  {
  store=(results.value);
  }
  Serial.println(store);
  irrecv.resume();
  delay(250);
  if(store==inc)
    {
      if(counter<=4)
        {
          if(counter==0)
          {
            digitalWrite(a,HIGH);
            delay(200);
            counter++;
          }
          else if(counter==1)
          {
            digitalWrite(b,HIGH);
            delay(200);
            counter++;
          }
          else if(counter==2)
          {
            digitalWrite(c,HIGH);
            delay(200);
            counter++;
          }
          else           {
            digitalWrite(d,HIGH);
            delay(200);
            counter++;
          }
        }
        else
        {
          if(counter==1)
          {
            digitalWrite(a,LOW);
            delay(200);
            counter--;
          }
          else if(counter==2)
          {
            digitalWrite(b,LOW);
            delay(200);
            counter--;
          }
          else if(counter==3)
          {
            digitalWrite(c,LOW);
            delay(200);
            counter--;
          }
          else           {
            digitalWrite(d,LOW);
            delay(200);
            counter--;
          }
        }
    }
    /*digitalWrite(a,HIGH);
    delay(1000);
    digitalWrite(a,LOW);
    delay(1000);
    digitalWrite(b,HIGH);
    delay(1000);
    digitalWrite(c,HIGH);
    delay(1000);*/
    
  
}
