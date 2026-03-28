
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11,10, 5, 4, 3, 2);
int i;
void setup() {
    lcd.begin(8, 2); 
      //init right hand side
  lcd.home();          
  /*lcd.print("12345678");  //print left side
  lcd.setCursor(0,1);     //go to right
  lcd.print(" rld!");*/ 
}

void loop()
{
  char a[10]="hhh"; 
  for(i=0;i<10;i++);
  {

  
    delay(1000);


      lcd.write(a[i]);
      lcd.setCursor(0,2);
  }
  
  
    }
