int Rd=6;
int Rs=5;
int Ld=4;
int Ls=3;


void setup() {
  pinMode(Rd,OUTPUT);
  pinMode(Ld,OUTPUT);
  pinMode(Ls,OUTPUT);
  pinMode(Rs,OUTPUT);

}

void loop() {
  digitalWrite(Rd,HIGH);
  digitalWrite(Ld,LOW);
 for(int i=0;i<2000;i++){
  digitalWrite(Rs,HIGH);
  delayMicroseconds(500);
  digitalWrite(Ls,LOW);
  digitalWrite(Rs,LOW);
  delayMicroseconds(500);
  digitalWrite(Ls,HIGH);
  delayMicroseconds(500);
 }
delay(5000);
 digitalWrite(Rd,LOW);
  digitalWrite(Ld,HIGH);
 for(int i=0;i<2000;i++){
  digitalWrite(Rs,HIGH);
  delayMicroseconds(500);
  digitalWrite(Ls,LOW);
  digitalWrite(Rs,LOW);
  delayMicroseconds(500);
  digitalWrite(Ls,HIGH);
  delayMicroseconds(500);
 }
 delay(5000);
digitalWrite(Rd,HIGH);
for(int i=0;i<2000;i++){
  digitalWrite(Rs,HIGH);
  delayMicroseconds(500);
  digitalWrite(Rs,LOW);
  delayMicroseconds(500);
}

delay(5000);
digitalWrite(Ld,HIGH);
for(int i=0;i<2000;i++){
  digitalWrite(Ls,HIGH);
  delayMicroseconds(500);
  digitalWrite(Ls,LOW);
  delayMicroseconds(500);
}
delay(10000);
}
