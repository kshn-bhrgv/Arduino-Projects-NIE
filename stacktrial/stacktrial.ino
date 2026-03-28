
#define zcd 3
#define mainsRF 7
#define greenLED 4
#define redLED 5
#define buzz 6

void setup() {
  pinMode(zcd,INPUT);
  pinMode(mainsRF,INPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(buzz,HIGH);
  delay(500);
  digitalWrite(buzz,LOW);
  Serial.begin(9600);

}

void loop() {
  Serial.print("RF");
  Serial.println(digitalRead(mainsRF));
  Serial.print("ZCD");
  Serial.println(digitalRead(zcd));
  delay(200);
  

}
