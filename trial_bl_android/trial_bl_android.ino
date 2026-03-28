#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX
char command;
String string;

void setup() {
   mySerial.begin(9600);
 Serial.begin(9600);
}

void loop() {
  if (mySerial.available() > 0) 
    { string="";
    
        while(mySerial.available() > 0)
        {
          Serial.print("LEngth of string recieved:");
    Serial.println(mySerial.available());
        command = ((byte)mySerial.read());
        if(command == ':')
        {
        break;
        }
        else
        {
        string += command;
        delay(10);
        }
     }
   Serial.println(string);
    }
   

}
