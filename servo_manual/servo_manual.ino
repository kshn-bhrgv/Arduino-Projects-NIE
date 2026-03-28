int servo=9;


void setup() {
 pinMode(servo,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(float i=1.0;i<2.0;i=i+0.001)
  {
    digitalWrite(servo,HIGH);
    delay(i);
    Serial.println(digitalRead(servo));
    digitalWrite(servo,LOW);
    delay(20.0-i);
    Serial.println(digitalRead(servo));
  }
}
