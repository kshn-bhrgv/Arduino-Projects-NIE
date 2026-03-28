int in = 8;
int val;
long newtp;
long oldtp;
long tp;

void setup()
{

  pinMode(in, INPUT);
  Serial.begin(9600);
  
}

void loop()
{

  val=digitalRead(in);
  Serial.println(val);

  /*if (val == HIGH)
  {
    oldtp = newtp;
    newtp=millis();
    tp = newtp - oldtp;
    //Serial.println('Time period :' + tp);
    delay(1);
  }*/

}
