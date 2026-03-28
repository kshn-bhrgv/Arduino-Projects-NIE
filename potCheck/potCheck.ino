#include <Servo.h>
int pot=A0;

Servo myservo;  
int pos = 0;    
void setup() {
  //Serial.begin(9600);
  myservo.attach(9); 
  
}

void loop() {
    //pos=map(analogRead(pot),0,1023,0,180);

    pos=analogRead(pot);
    
    //Serial.println(pos);
    if(pos>=0&&pos<=150){
    myservo.write(0);
    }else if(pos>=150&&pos<=550){
    myservo.write(30);
    }else if(pos>=551&&pos<=900){
    myservo.write(150);
    }else if(pos>=901&&pos<=1023){
    myservo.write(180);
    }else{
      
    }
    delay(150);                       // waits 15ms for the servo to reach the position
}
