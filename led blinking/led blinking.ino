#define a 11
#define b 5
int sw=4;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(sw,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(sw==HIGH)
  {
  digitalWrite(a,HIGH);
  delay(500);
  digitalWrite(b,HIGH);
  delay(500);
  digitalWrite(a,LOW);
  delay(500);
  digitalWrite(b,LOW);
  delay(500);
  }
  else
  {
    digitalWrite(b,HIGH);
  }
  // put your main code here, to run repeatedly:

}
