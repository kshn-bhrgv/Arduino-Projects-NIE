#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,5,4,3,2);



void setup() {
        lcd.begin(16,2);
        lcd.home();
        
        
        /*lcd.print("Shata");
        lcd.setCursor(0,15);
        lcd.print("thari");*/
        
        
        
     

}

void loop() { 
  lcd.autoscroll();
  lcd.setCursor(0,0);
  lcd.print("Shata Th");
  lcd.setCursor(0,1);
  lcd.print("ari!");
  delay(500);
  
            
              
 /* for(int i=0;i<15;i++)
          {
            
                lcd.setCursor(0,0);
                lcd.print(a[i]);
                delay(500);*/
              
               /*lcd.setCursor(0,15);
                lcd.print(a[i]); 
                delay(200);*/
                //lcd.clear();
              }
             // lcd.noAutoscroll();
          //
          
         
