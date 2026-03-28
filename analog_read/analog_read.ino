int L=9;

void setup() {
  Serial.begin(9600);
  pinMode(L,INPUT);
  // put your setup code here, to run once:

}

void loop() {

  Serial.println(digitalRead(L)*1000);
  delay(1);
  // put your main code here, to run repeatedly:

}
