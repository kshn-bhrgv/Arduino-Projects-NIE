int x=7;
int y=8;
char b;

void setup() {
  pinMode(x,OUTPUT);
  pinMode(y,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  if(Serial.available())
    {
      b=Serial.read();
      if(b=='1')
        {
          if(digitalRead(x)==LOW)
              digitalWrite(x,HIGH);
          else
              digitalWrite(x,LOW);    
        }
       else if(b=='2')
        {
           if(digitalRead(y)==LOW)
              digitalWrite(y,HIGH);
          else
              digitalWrite(y,LOW);    
        }
    }

}
