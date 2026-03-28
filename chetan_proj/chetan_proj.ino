#include <SoftwareSerial.h>


SoftwareSerial blu(10, 11); // RX, TX

int led=5;
char c;

void setup() {
  pinMode(led,OUTPUT);
  blu.begin(9600);
}
void loop() {
  delay(10);
  if (blu.available()) {
    c=blu.read();
    if(c=='1')
      {
        digitalWrite(led,HIGH);
        delay(10);
      }
    if(c=='0')
     {
        digitalWrite(led,LOW);
        delay(10);
     }
  }
  

