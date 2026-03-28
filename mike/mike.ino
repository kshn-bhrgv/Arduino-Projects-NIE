//#include<tone.h>
 int mike=A0;
 int a=2;
 int b=3;
 int c=4;
 int d=5;
 
 
 
 
 
 
 void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(mike,INPUT);
  pinMode(d,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int C=analogRead(mike);
  int D=map(C,0,1023,0,255);
  if(10<D<50 )
  {
    digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      delay(200);
  }
  if(51<D<100 )
  {
    digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      delay(200);
  } 
  
  if(101<D<150 )
  {
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    delay(200);
  }
  if(151<D<200 )
  {
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    delay(200);
  }
   if(201<D<220 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    delay(200);
  }
  if(221<D<250 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
  }
  if(D==255 )
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    delay(200);
  }
}
  
    
     
     
    
     
    
    
    






    
  
  // put your main code here, to run repeatedly:


