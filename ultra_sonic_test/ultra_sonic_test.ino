#include<Servo.h>
// defines pins numbers
const int trigPin = 5;  //trig to D1 of Wemos
const int echoPin = 4;  //echo to D2 of Wemos
const int warnLED = 2;  //D4 of Wemos to LED
// defines variables
long duration;
int distance;
bool accident;
Servo myServo;
int i=0;

void setup() {
  myServo.attach(14);   //D5 pin of Wemos to data pin of Servo
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(warnLED,OUTPUT);
Serial.begin(9600); // Starts the serial communication
myServo.write(0);
delay(1000);
}


void loop() {
measure();
if(distance<40){
  myServo.write(180);
  digitalWrite(warnLED,HIGH);
  accident=true;
}else if(distance<70){
  if(accident){
    accident=false;
    myServo.write(0);
    i=0;
    delay(50);
  }
  digitalWrite(warnLED,!digitalRead(warnLED));
  myServo.write(i);
  delay(50);
  i=i+1;
  if(i>=89){
    i=89;
  }
}else{
  digitalWrite(warnLED,LOW);
  myServo.write(0);
}

}

void measure(){
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
if(distance>200){
  distance=200;
}
Serial.print("Distance: ");
Serial.println(distance);
delay(50);
}

