int storepin=5;
int clockpin=7;
int datapin=9;

byte a;


void setup() {
  pinMode(storepin,OUTPUT);
  pinMode(clockpin,OUTPUT);
  pinMode(datapin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<254;i++)
      {
        a=(byte)i;
        digitalWrite(storepin,LOW);
        shiftOut(datapin,clockpin,LSBFIRST,a);
        digitalWrite(storepin,HIGH);
        Serial.println(a);
        delay(500);
        
      }

}
