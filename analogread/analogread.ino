int A=0;
float b;

void setup() {
  while(!Serial);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  b=analogRead(A0);
   Serial.println(b);
  delay(10);
  // put your main code here, to run repeatedly:

}
