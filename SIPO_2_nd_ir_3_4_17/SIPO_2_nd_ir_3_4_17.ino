#define dataout 2
#define ledPin 7


 void setup()
 {
   pinMode(dataout, OUTPUT);     
   pinMode(ledPin, OUTPUT);    
   
 }

 void loop()
 {
   
     digitalWrite(dataout, HIGH);
     digitalWrite(ledPin, HIGH);
//     digitalWrite(b,HIGH);
     
 }
