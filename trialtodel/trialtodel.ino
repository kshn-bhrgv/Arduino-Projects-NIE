int a=8;
int b=9;
int c=13;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH);
  delay(1000);
  digitalWrite(a,LOW);
  delay(500);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(b,LOW);
  delay(500);
  digitalWrite(c,HIGH);
  delay(1000);
  digitalWrite(c,LOW);
  delay(500);
  }
