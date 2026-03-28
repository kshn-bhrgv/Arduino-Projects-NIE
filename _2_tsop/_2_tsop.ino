#include <IRremote.h>

int DEMO_PIN=5;
int RECV_PIN=11;
int led=7;
unsigned long a=12582913;
unsigned long b=12582924;

IRrecv irrecv(RECV_PIN);
IRrecv irrecv1(DEMO_PIN);
decode_results results,results1;

void ledon()
{
  if(digitalRead(led)==HIGH)
  {
    digitalWrite(led,LOW);
    delay(100);
  }
  else{
    digitalWrite(led,HIGH);
    delay(100);
  }
}

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  irrecv1.enableIRIn();// Start the receiver
  pinMode(led,OUTPUT);
}

void loop() {
  unsigned long store,store1;
  irrecv.resume();
  delay(100);
  if (irrecv.decode(&results)){
    store=(results.value);
    
    if(store==a)
      {
         Serial.println(results.value);  
        ledon();
        Serial.println(1);
      }
      delay(50);
  } 
  delay(200);
   if(irrecv1.decode(&results1)){
    store1=(results1.value);
    delay(100);
    if(store1==b)
    {
    Serial.println(results1.value);    
    Serial.println('b');
    ledon();
    }
  delay(50);
}
 irrecv1.resume();
 
}
