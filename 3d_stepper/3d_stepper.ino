int dir = 6;  // direction, clockwise or counter clockwise
int stp = 5;  // step command 

int del=200;  // delay between each loop, determines the speed of the motor
float angle = 0;  // the current angle is held in this
int angleEnd=50; // the furthest angle that the motor will turn to 

 int pass = 0;// the number of times that the scanner has spun in each direction
int repeat = 2; // the number of times the scanner will turn in eech direction. Repeat of 2 returns it to it's starting position

void setup(){
  Serial.begin(9600);
  pinMode(dir, OUTPUT);
  pinMode(stp, OUTPUT);
  digitalWrite(dir,LOW);
  digitalWrite(stp,LOW);
  pass=1;
}

void loop(){
  if(pass==1){
  digitalWrite(dir, HIGH); // setting the steppers direction
  delay(10);
for(angle=0;angle<=angleEnd;angle=angle+(1.8/4)){
   digitalWrite(stp, HIGH);  // Start telling the stepper driver to take a step
    delayMicroseconds(300);   // tell it for a bit longer...
    digitalWrite(stp, LOW);
    delayMicroseconds(300);// stop telling it so take a step
    Serial.println(angle);
    delay(100);
}
digitalWrite(dir,LOW);
delay(10);
Serial.println(500);
for(angle=0;angle<=angleEnd;angle=angle+(1.8/4)){
   digitalWrite(stp, HIGH);  // Start telling the stepper driver to take a step
    delayMicroseconds(300);   // tell it for a bit longer...
    digitalWrite(stp, LOW);
    delayMicroseconds(300);// stop telling it so take a step
}
  pass++;
  }else{
    delay(100);
  }
  
}

  

