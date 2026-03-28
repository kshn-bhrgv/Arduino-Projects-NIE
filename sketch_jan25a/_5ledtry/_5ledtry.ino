#include <IRremote.h>


int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

//Initialising pins
const int led1=2;
const int led2=3;
const int led3=4;
const int led4=5;
const int led5=7;


//inistialising state of button
unsigned long irvalue=0;
int l1state=0;
int l2state=0;
int l3state=0;
int l4state=0;
int l5state=0;

void setup() {
                Serial.begin(9600);
                irrecv.enableIRIn();
                pinMode(led1,OUTPUT);
                pinMode(led2,OUTPUT);
                pinMode(led3,OUTPUT);
                pinMode(led4,OUTPUT);
                //pinMode(redled,OUTPUT);
                
}

void loop() {
                if(irrecv.decode(&results))
                {
                  
                    irvalue=(results.value);
                    Serial.println(irvalue);
                     
                    if(12582913==irvalue)
                      {
                        if(l1state==0)
                          {
                            digitalWrite(led1,HIGH);
                            l1state=1;
                          }
                         else
                         {
                          digitalWrite(led1,LOW);
                          l1state=0;
                         }
                      }



                      else if(12582914==irvalue)
                      {
                        if(l2state==0)
                          {
                            digitalWrite(led2,HIGH);
                            l2state=1;
                          }
                         else
                         {
                          digitalWrite(led2,LOW);
                          l2state=0;
                         }
                      }



                      else if(12582915==irvalue)
                      {
                        if(l3state==0)
                          {
                            digitalWrite(led3,HIGH);
                            l3state=1;
                          }
                         else
                         {
                          digitalWrite(led3,LOW);
                          l3state=0;
                         }
                      }

                      else if(12582916==irvalue)
                      {
                        if(l4state==0)
                          {
                            digitalWrite(led4,HIGH);
                            l4state=1;
                          }
                         else
                         {
                          digitalWrite(led4,LOW);
                          l4state=0;
                         }
                      }


                      else if(12582917==irvalue)
                      {
                        if(l5state==0)
                          {
                            digitalWrite(led5,HIGH);
                            l5state=1;
                          }
                         else
                         {
                          digitalWrite(led5,LOW);
                          l5state=0;
                         }
                      }
                      irrecv.resume();

                }
}
