#include <IRremote.h>

int b=5;
int RECV_PIN=8;
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long onval=12582924;
unsigned long offval=12582912;
int prevstate=0;
int curstate=0;


void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  
 pinMode(b,OUTPUT);
  
}

void loop() 
{

  unsigned long store;
  if(irrecv.decode(&results))
  {
  store=(results.value);
  }
  Serial.println(store);
  irrecv.resume();
  if(store==onval)
    {
      if(prevstate==0)
      {
        curstate=1;
        prevstate=1;
      }
      else
        {
          curstate=0;
          prevstate=0;
        }
    }
  if(curstate)
  {
        digitalWrite(b,HIGH);
        delay(200);    
  }
  else 
  {
    digitalWrite(b,LOW);  
   delay(200);
  }
  
}



