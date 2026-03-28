int led1=3;
int led2=4;
int led3=5;
int led4=6;
int led5=7;

int in1,in2,in3,in4,in5;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  //Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  in1=analogRead(A0);
  in2=analogRead(A1);
  in3=analogRead(A2);
  in4=analogRead(A3);
  in5=analogRead(A4);
  //Serial.println(in1);

  if(in1<600)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
    }
    if(in2<500)
     {
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
     }
    if(in3<500)
      {
        digitalWrite(led3,HIGH);
        digitalWrite(led4,HIGH);
      }
     if(in4<500)
      {
        digitalWrite(led4,HIGH);
        digitalWrite(led5,HIGH);
      }
      if(in5<500)
       {
        digitalWrite(led5,HIGH);
       }

      
  delay(50);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  
  
  // put your main code here, to run repeatedly:

}
