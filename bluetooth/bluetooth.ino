int a=7;
char c;
int d=13;




void setup() {
  pinMode(d,OUTPUT);
  Serial.begin(9600);
  while(!Serial);  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() > 0)
  {
    c=Serial.read();
    //c=c-49;
    Serial.println(c);
    delay(10);
    if (c == '2')
    {
      digitalWrite(d,HIGH);
      digitalWrite(a,LOW);
      delay(100);
    }
    else if(c == '1')
    {
      digitalWrite(d,LOW);
      digitalWrite(a,HIGH);
      delay(200);
    }
    else
    {
      digitalWrite(d,LOW);
      digitalWrite(a,LOW);
    }
  }
 
  // put your main code here, to run repeatedly:

}
