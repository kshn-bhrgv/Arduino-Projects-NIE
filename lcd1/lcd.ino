
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
   // set up the LCD's number of columns and rows:
   lcd.begin(8,2);     //is 16x1, adressed as 8x2
   lcd.setCursor(0,0);  //init right hand side
   lcd.clear();
   // Print a message to the LCD.
   lcd.print("hello wo");  //print left side
   lcd.setCursor(0,1);     //go to right
   lcd.print("rld!");      //print right side
}

void loop()
{
  
   lcd.setCursor(0,1);     
   lcd.print("rld!");
}
