int led=13;
char a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    
      a=Serial.read();
    
    Serial.println(a);
    if(a=='O'){
      digitalWrite(led,HIGH);
    }else if(a=='N'){
      digitalWrite(led,LOW);
    }else{
      
    }
    a="";
  }
}
