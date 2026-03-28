const int stepPin1 = 3; 
const int dirPin1 = 4; 
const int stepPin2 = 5;
const int dirPin2 = 6;
char a;
String cmd;
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin1,OUTPUT); 
  pinMode(dirPin1,OUTPUT);
  pinMode(stepPin2,OUTPUT); 
  pinMode(dirPin2,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if(Serial.available()){
    while(Serial.available()){
    a=Serial.read();
    cmd=cmd+a;
    }
    if(cmd=="h1"){
      digitalWrite(dirPin1,HIGH);
      for(int x = 0; x < 5000; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(1000); 
    }
    }
    else if(cmd=="l1"){
      digitalWrite(dirPin1,LOW);
      for(int x = 0; x < 5000; x++) {
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(1000); 
      }
    }
    else if(cmd=="h2"){
      digitalWrite(dirPin2,HIGH);
      for(int x = 0; x < 5000; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(1000); 
    }
    }
    else if(cmd=="l2"){
      digitalWrite(dirPin2,LOW);
      for(int x = 0; x < 5000; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(1000); 
    }
    }
    else if(cmd=="hh"){
      digitalWrite(dirPin2,HIGH);
      digitalWrite(dirPin1,HIGH);
      for(int x = 0; x < 5000; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(1000); 
    }
    }
    else if(cmd=="ll"){
      digitalWrite(dirPin2,LOW);
      digitalWrite(dirPin1,LOW);
      for(int x = 0; x < 5000; x++) {
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(1000); 
    }
    }
    else{
      Serial.println("invalid commands.\n Commands are h1,h2,l1,l2,hh,ll");
    }
     cmd=""; 
    }
 
  delay(100);
}
