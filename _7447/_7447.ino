
int a=8;
int b=7;
int c=10;
int d=4;
void setup()
{
    pinMode(a,HIGH);
       pinMode(b,HIGH);
         pinMode(c,HIGH);
       pinMode(d,HIGH);



    
}
void loop()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(500);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  delay(500);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  delay(500);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(500);
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(500);
}

 





 
