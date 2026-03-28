#include <IRremote.h>

int b=6;
int RECV_PIN=10;
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long onval=12582924;
unsigned long offval=12582912;
int prevstate=0;
int curstate=0;


void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  
 pinMode(10,OUTPUT);
  
}

void loop() 
{

  unsigned long store;
  if(irrecv.decode(&results))
  {
  store=(results.value);
  }
  delay(500);
  Serial.println(store);
  irrecv.resume();
  if(store==onval)
    {
      digitalWrite(b,HIGH);
    }
}
