#include <IRremote.h>
int RECV_PIN=8;
IRrecv irrecv(RECV_PIN);

decode_results results;

unsigned long on=12582924;
unsigned long off=12582912;

unsigned long sw1=12582913;
unsigned long sw2=12582914;
unsigned long sw3=12582915;
unsigned long sw4=12582916;
unsigned long sw5=12582917;
unsigned long sw6=12582918;
unsigned long sw7=12582919;
unsigned long sw8=12582920;

//int prev=0;
//int curstate=0;
int data=9;         //to serial input of IC 74595 14
int clk=7;          //to shift clock pin 11
int show=13;         //to latch pin 5
//int clr=3;          // to MR 10
int a=0;
byte b;

void setup() {
              pinMode(show,OUTPUT);
              //pinMode(clr,OUTPUT);
              pinMode(clk,OUTPUT);
              pinMode(data,OUTPUT);
              irrecv.enableIRIn();
              Serial.begin(9600);
              
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

if(store==sw1)
  {
          a=a^1;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw2)
  {
          a=a^2;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw3)
  {
          a=a^4;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw4)
  {
          a=a^8;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw5)
  {
          a=a^16;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw6)
  {
          a=a^32;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw7)
  {
          a=a^64;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==sw8)
  {
          a=a^128;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==on)
  {
          a=255;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(store==off)
  {
          a=0;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else{
    delay(500);
  }
  
  
  /*if(store==onval)
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
    }*/
  /*if(curstate)
  {
        
   
          digitalWrite(clr,LOW);
          delay(100);
          digitalWrite(clr,HIGH);
          a=a^1;
          b=byte(a);
         //Serial.println(b);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
        }

      else{
        a=0;
          b=byte(a);
         //Serial.println(b);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
      }*/
}
