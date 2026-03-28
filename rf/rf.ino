 #define datain A0
 #define ledPin 12

 unsigned int temp = 0;
 const unsigned int upperThreshold = 600;
 const unsigned int lowerThreshold = 50;

 void setup()
 {
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
 }

 void loop(){
   temp=analogRead(datain);
   Serial.print(temp);
   
    if(temp<lowerThreshold)
    {
//     digitalWrite(ledPin, );
    }
   
   else if(temp>upperThreshold)
   {
     digitalWrite(ledPin, LOW);
   }
 }
