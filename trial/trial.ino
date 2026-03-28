int a=A0;
float b;
int c=7;
int d=9;

void setup() {
  Serial.begin(9600);
  while(! Serial);
  pinMode(a,INPUT);
   pinMode(c,OUTPUT);
    pinMode(d,OUTPUT); 

 // pinMode(
  // put your setup code here, to run once:

}

void loop() {
  b=analogRead(a);
  Serial.println(b);
  delay(100);
  float e=(255*b)/1023;
  Serial.println(e);
  int h=(e*50);
  Serial.println(h);
  delay(100);
  if(h>200)
  {
    digitalWrite(c,HIGH);
    analogWrite(d,250);
    delay(100);
  }
  else if(h<200)
  {
    digitalWrite(c,LOW); 
    analogWrite(d,e);
    delay(100);
  }
  else
  {
    digitalWrite(c,LOW);
    analogWrite(d,200);
  }
  
  // put your main code here, to run repeatedly:

}
