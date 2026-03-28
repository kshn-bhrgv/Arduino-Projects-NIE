#include<SoftwareSerial.h>
SoftwareSerial client(2,3); //RX, TX

String webpage="";
int i=0,k=0;
String readString;
int x=0;

boolean No_IP=false;
String IP="";
char temp1='0';

void setup() 
{
   Serial.begin(9600);
   client.begin(9600);
   wifi_init();
   Serial.println("System Ready..");
}
