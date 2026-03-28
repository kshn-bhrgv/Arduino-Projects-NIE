#include<stdio.h>
int a=3;
int b=4;
int c=5;
int d=6;
void setup()
{
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);

}
 void loop()
 {
  delay(500);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(300);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(300);
  
 }
