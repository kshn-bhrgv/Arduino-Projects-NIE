const int control=0;//  Pin-5
//const int straight=;
const int left=1;//   Pin-6
const int right=2;//  Pin-7


void setup() {
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
  pinMode(control,INPUT);
  
}

void loop() {
  if(digitalRead(control)){
    delay(100);
    if(digitalRead(control)){
      digitalWrite(right,HIGH);
      digitalWrite(left,LOW);
    }
    else{
      digitalWrite(right,LOW);
      digitalWrite(left,HIGH);
    }
    delay(1000);
  }

}
