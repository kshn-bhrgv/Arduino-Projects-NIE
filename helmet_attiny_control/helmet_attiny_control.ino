const int control=6;

void setup() {
 digitalWrite(control,OUTPUT);
 Serial.begin(9600);

}

void loop() {
 if(Serial.available()){
  char c=Serial.read();
  if(c=='R'){
    digitalWrite(control,HIGH);
    delay(50);
    digitalWrite(control,LOW);
  }else if(c=='L'){
    digitalWrite(control,HIGH);
    delay(200);
    digitalWrite(control,LOW);
  }else{
    Serial.println("Gandu sariyag hako");
  }
 }

}
