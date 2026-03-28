#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int a=7;
int b=8;
int c=9;
int d=11;
int pot=A0;
int EN1=10;
int EN2=6;
int i;
int j;
int C;
int D;
int arr[20];

void setup() 
{

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
  while(! Serial);
  pinMode(EN1,OUTPUT);
  lcd.begin(16,2);
  pinMode(EN1,OUTPUT);
}

void loop() 
{
 
  for(i=0;i<1023;i++)
  {
    lcd.setCursor(0,1);
    int A=analogRead(pot);
    Serial.println(A);
    arr[i]=A;
    
  }
  for(i=0;i<1023;i++)
  {
      j=i+1;
     if(arr[j]>arr[i])
    {
       
     C=(255*arr[i])/1023;
       analogWrite(EN1,255);
       digitalWrite(a,HIGH);
       digitalWrite(b,LOW);
      // digitalWrite(c,LOW);
      // digitalWrite(d,LOW);
       lcd.print("Turning Right");
    }
     //lcd.clear();
      else
    {
         lcd.print("Turning Left");  
       analogWrite(EN1,255);
       digitalWrite(a,LOW);
       digitalWrite(b,HIGH);
     //  digitalWrite(c,HIGH);
      // digitalWrite(d,LOW);     
    }
    lcd.clear();
      
  }
}  
 
