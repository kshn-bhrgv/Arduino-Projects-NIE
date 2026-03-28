#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11,10, 5, 4, 3, 2);
int a=8;

void setup() {
  lcd.begin(16, 2);
  pinMode(8,INPUT);
}

void loop() 
{
  lcd.clear();
  if(digitalRead(a)==HIGH)
  {
    
  lcd.print(" hey Light is on");
  delay(500);
    
  }
  else
  {
   lcd.print("lo Light is off");
   delay(500);
  }
}



