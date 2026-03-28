#include <IRremote.h>

int b=7;
int RECV_PIN=11;
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long onval=12582924;
unsigned long offval=12582912;
int prevstate=0;
int curstate=0;


void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  
 pinMode(7,OUTPUT);
  
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
 
   if(store!=onval)
  {
        digitalWrite(7,LOW);
  }
  else
  {
    digitalWrite(7,HIGH);
  }
    
  irrecv.resume();
  }
  
 
        
        
         





