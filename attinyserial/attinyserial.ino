#include<SoftwareSerial.h>
#define analogP A1
#define RX 3
#define TX 4

SoftwareSerial Serial1(RX,TX);

void setup() {
  Serial1.begin(9600);
  Serial1.println(".......");

}

void loop() {
 Serial1.println(analogRead(analogP));
 delay(50);
 

}
