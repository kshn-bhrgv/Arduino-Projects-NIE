int data=9;
int clk=7;
int show=5;
int clr=3;
int a,z;
String s; 
byte b;



void setup() {
pinMode(show,OUTPUT);
pinMode(clr,OUTPUT);
pinMode(clk,OUTPUT);
pinMode(data,OUTPUT);
//Serial.begin(9600);

}

void loop() 
{
      
          z=0;
          a=0;
          //a=Serial.parseInt();
          digitalWrite(clr,LOW);
          delay(100);
          digitalWrite(clr,HIGH);
          for(int i=0;i<11;i++)
          {
         b=byte(i);
         //Serial.println(b);
          digitalWrite(show,LOW);
          shiftOut(data,clk,LSBFIRST,b);
          digitalWrite(show,HIGH);
          delay(1000);
            }
        
 
}
