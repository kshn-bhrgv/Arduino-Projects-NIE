int analog=0;
int maxvalue=0,b;

void setup() {
  Serial.begin(9600);

}

void loop() {
  b=analogRead(analog);
  Serial.println(b);
 /* if(b>maxvalue)
    {
      maxvalue=b;
      Serial.print("Max value changed:");
      Serial.println(maxvalue);
    }*/

}
