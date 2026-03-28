/*
 * In KEB side there will be a switch and a relay to control the flow of mains AC
 * If KEB itself switches off the circuit then by using RF transmitter we will be sending a signal that KEB itself has switched off
 * In reciever side whenever power failure happens , the Microcontroller first checks if the KEB has sent any message 
 * If KEB has sent the message then no action will be taken as they people know about it.
 * But if power fails because of natural disaster or fall of poles then Microcontroller will send a message to KEB operator telling about where the outage has occured.
 * Arduino will be connected to a power Suplly source other than the mains
 * The mains will be used to drive a light bulb 
 * The KEB side will be controlled by a relay . The input to this relay is given by a switch having 2 states(outputs).
 * State-1 will be conducting stage where the mains AC is supplied to the house. (this state when the button is pressed)
 * State-2 is switching the relay off and sending a signal through HT12E to other devices. (this state when the button is released)
 */




#define zcd 3 //output of zcd
#define mainsRF 7 //Data of ht12d
#define greenLED 4
#define redLED 5
#define buzz 6

long timeLimit=3000;
long presentTime;


void setup() {
  pinMode(zcd,INPUT);
  pinMode(mainsRF,INPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  digitalWrite(greenLED,HIGH);
  delay(500);
  
}

void loop() {
  //millis.start();
 if(digitalRead(zcd)==LOW)
  {
   presentTime=millis();
   while(digitalRead(zcd)==LOW)
    {
      if(millis()-presentTime>timeLimit)
        {
          emergency();
        }
      else
        delay(50);
    }
  }
  if(digitalRead(zcd)==HIGH)
  {
    digitalWrite(greenLED,HIGH);
    digitalWrite(redLED,LOW);
    delay(50);
  }

}

void emergency()
  {
    digitalWrite(greenLED,LOW);
    if(digitalRead(mainsRF)==HIGH)
      {
        while((digitalRead(mainsRF)==HIGH)&&(digitalRead(zcd)==LOW)) //they know about the loss
          {
            digitalWrite(redLED,!digitalRead(redLED));
            delay(500);
          }
      }
      else
      {
        while((digitalRead(mainsRF)==LOW)&&(digitalRead(zcd)==LOW))
        {
          digitalWrite(redLED,HIGH);
          digitalWrite(buzz,HIGH);
          delay(500);
          digitalWrite(buzz,LOW);
          delay(4000);//message to be sent to KEB technician
        }
      }
     delay(5000);
  }

