#include<EEPROM.h>
#include <Keypad.h>
char key,key1;
int enter=0,adr,change_access=0,mode;
String password="",password1="";

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the symbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {5, 4, 3, 2 }; //connect to the row pinouts of the keypad
byte colPins[COLS] = {A0, A1, A2, A3}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 13, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



void setup()
{
  Serial.begin(9600);
  for(adr=0;adr<10;adr++)
  {
    EEPROM.write(adr,1);
    delay(200);
  }
  lcd.begin(16, 2);
  lcd.print("heo, world!");
  lcd.setCursor(0, 1);
}
  
void loop()
{
  key1='0';
  lcd.clear();
  lcd.setCursor(0, 0);
  Serial.println("1.enter password");
  lcd.print("1.enter password");
  lcd.setCursor(0, 1);
  Serial.println("2.change password");
  lcd.print("2.change password");
  
  while (key1!='1' && key1!='2')
  {
    key1 = customKeypad.getKey();
  }
  
  if(key1=='1')
  {
    mode=0;
    Serial.println("Enter the password to gain access");
    lcd.clear();
    lcd.print("Enter Pwd");
    keyscan();
  }
  
  if(key1=='2')
  {
    mode=1;
    Serial.println("Enter the existing password ");
    keyscan();
  }
  
  if(enter==1)
  {
    enter=0;
    ROM_read();
  }
  if(change_access==1)
  {
    Serial.println("ENTER NEW PASSWORD");
    keyscan();
    ROM_write();  
  }
}

void keyscan()
{
  password="";
  lcd.setCursor(0,1);
  while(key!='D')
  {
  key = customKeypad.getKey();  
  if(key)
  {
    if(key!='D')
     {
       Serial.print(key);
       lcd.print(key);
       password+=key;
     }
  }
  
   if(key=='D')
  {
    Serial.println("You pressed Enter");
     lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("pressed enter");
  enter=1;
  }
  }
}

void ROM_read()
{
  for(adr=0;adr<10;adr++)
  {
    password1+=EEPROM.read(adr);
    delay(500);
     while((password.length())!=10)
  {
    password+='0';
  }
  }
  lcd.clear();
  Serial.println("password saved in ROM is : " + password1);
  lcd.print("password saved");
  
  
  Serial.println("password you entered is : " + password);
  lcd.print("ur password");
  lcd.setCursor(0,1);
  lcd.print("**********");
  
  
  key='0';
  compare();
}
   
void compare()
{
  if(password==password1)
  {
    Serial.println("Password is right");
    lcd.clear();
    lcd.print("password correct");
    
    
    if(mode)
    {
      change_access=1;
    }
  }
  else
  {
    lcd.clear();
    Serial.println("Password is wrong");
    lcd.print("password wrong");
  }
    password="";
    password1="";
}

void ROM_write()
{
  while((password.length())!=10)
  {
    password+='0';
  }
    for(adr=0;adr<10;adr++)
  {
    EEPROM.write(adr,(password[adr]-48));
    delay(200);
  }
    change_access=0;
    key='0';
    lcd.clear();
    Serial.println("Your new password is :" + password);
    lcd.print("password changed");
}
