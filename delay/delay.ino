int a=8;

void setup() 
{
  pinMode(a,OUTPUT);
 

}

void loop() 
{
  digitalWrite(a,HIGH);
  delay(1500);
  digitalWrite(a,LOW);
  delay(1500);

}
