int Lp=8;
int Ln=9;
int Rp=10;
int Rn=11;

void setup() {
pinMode(Lp,INPUT);
pinMode(Ln,INPUT);
pinMode(Rp,INPUT);
pinMode(Rn,INPUT);
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
if(digitalRead(Lp)||digitalRead(Ln)||digitalRead(Rp)||digitalRead(Rn))
{
  Serial.println("HIGH");
  if(digitalRead(Lp)) Serial.println("0");
  if(digitalRead(Ln)) Serial.println("1");
  if(digitalRead(Rp)) Serial.println("2");
  if(digitalRead(Rn)) Serial.println("3");
  digitalWrite(13,HIGH);
  delay(500);
}
delay(500);
digitalWrite(13,LOW);
}
