/*#include <IRremote.h>
int RECV_PIN=4;
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
unsigned long sw8=12582920;*/




char s;
int z[8]={0};

//int prev=0;
//int curstate=0;
int data=3;         //to serial input of IC 74595 14
int clk=4;          //to shift clock pin 11
int show=5;         //to latch pin 12
//int clr=3;          // to MR 10
int a=0;
byte b;

void setup() {
              pinMode(show,OUTPUT);
              //pinMode(clr,OUTPUT);
              pinMode(clk,OUTPUT);
              pinMode(data,OUTPUT);
              //irrecv.enableIRIn();
              Serial.begin(9600);
              
}

void loop() 
              {
             s=Serial.read();

if(s=='1')
  {
         /* a=a^1;
          b=byte(a);
          digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);*/
          if(z[0]==0)
            {
              z[0]=1;
            }
            else{
              z[0]=0;
            }
          digitalWrite(show,LOW);
          delay(500);
          for(int i=0;i<8;i++)
            {
              if(z[i]==1){
              digitalWrite(data,HIGH);
              digitalWrite(clk,HIGH);
              delay(1000);
              digitalWrite(clk,LOW);
              digitalWrite(data,LOW);
              delay(500);
              }
              else if(z[i]==0){
                 digitalWrite(data,LOW);
              digitalWrite(clk,HIGH);
              delay(1000);
              digitalWrite(clk,LOW);
              delay(500);
                }
               else{
                //fuck it
               }
            }
            delay(200);
            digitalWrite(show,HIGH);
          
    
  }

  else if(s=='2')
  {
          a=a^2;
          b=byte(a);
           digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);
  }

  else if(s=='3')
  {
          a=a^4;
          b=byte(a);
           digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(s=='4')
  {
          a=a^8;
          b=byte(a);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(s=='5')
  {
          a=a^16;
          b=byte(a);
           digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);
    
  }

  else if(s=='6')
  {
          a=a^32;
          b=byte(a);
          digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);
  }

  else if(s=='7')
  {
          a=a^64;
          b=byte(a);
          digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);
  }

  else if(s=='8')
  {
          a=a^128;
          b=byte(a);
           digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);
  }

  else if(s=='9')
  {
         /* a=255;
          b=byte(a);
           digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
          digitalWrite(show,HIGH);
          delay(500);*/

          digitalWrite(show,LOW);
          delay(500);
          for(int i=0;i<8;i++)
            {
              digitalWrite(data,HIGH);
              digitalWrite(clk,HIGH);
              delay(200);
              digitalWrite(clk,LOW);
              digitalWrite(data,LOW);
              delay(200);
              }
              digitalWrite(show,HIGH);
    
  }

  else if(s=='0')
  {
          a=0;
          b=byte(a);
           digitalWrite(show,LOW);
          delay(200);
          shiftOut(data,clk,LSBFIRST,b);
          delay(200);
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
