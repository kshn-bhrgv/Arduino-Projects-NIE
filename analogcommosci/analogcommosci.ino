int in = 8;
int val;
long newtime;
long oldtime;
long tp;

void setup()
{

	pinMode(in, INPUT);
	Serial.begin(9600);
	
}

void loop()
{

	val=digitalRead(in);

	if (val == HIGH)
	{
		oldtp = newtp;
		newtp=millis();
		tp = newtp - oldtp;
		Serial.println('Time period :' + tp);
		delay(1);
	}

}
