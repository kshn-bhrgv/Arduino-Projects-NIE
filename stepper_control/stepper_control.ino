/*     Simple Stepper Motor Control Exaple Code
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 */

// defines pins numbers
const int stepPin = 5; 
const int dirPin = 6; 
const int step2=3;
const int dir2=4;
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(step2,OUTPUT);
}
void loop() {
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  digitalWrite(dir2,LOW);
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 600; x++) {
    digitalWrite(stepPin,HIGH); 
    digitalWrite(step2,HIGH);
    delay(5); 
    digitalWrite(stepPin,LOW);
    digitalWrite(step2,LOW); 
    delay(5); 
  }
  delay(1000); // One second delay
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  digitalWrite(dir2,HIGH);
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 600; x++) {
    digitalWrite(stepPin,HIGH); 
    digitalWrite(step2,HIGH);
    delay(5); 
    digitalWrite(stepPin,LOW);
    digitalWrite(step2,LOW); 
    delay(5); 
  }
  delay(100);
}
