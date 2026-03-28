int a=8;
int b=10;
//int c=11;
char e;


void setup() {
  
  Serial.begin(9600);
  while(!Serial);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()> 0)
  
    e=Serial.read();
    delay(100);
    Serial.println(e);
 if(e=='1')
 { 
  int i=50;
  //while ( i<255)
 
 // analogWrite(c,255);
       digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  delay(200);
 //i=i+50; 
 }
 //delay(100);
 if(e=='2') 
 {
 // int h=255;
//  while (h>50)
  
  //analogWrite(c,255);
 digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  delay(200);

  
 }
  

 
  // put your main code here, to run repeatedly:

}
