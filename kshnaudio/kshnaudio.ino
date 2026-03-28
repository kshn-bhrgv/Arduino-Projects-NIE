#include "FastLED.h"

int A = 0;
float input;

int numLEDlit;

#define NUM_LEDS 15
#define DATA_PIN 3

CRGB leds[NUM_LEDS];


void setup() {
 Serial.begin(9600);
 FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
for(int i=0;i<255;i++)
  {
 leds[0].r=i;
 FastLED.show();
 delay(10);
  }
FastLED.show();
delay(3000);
 
 }

void loop() {
  input = (analogRead(A)-500)*100;

   Serial.println(input);
   Serial.println(600);
   Serial.println(-600);

    if (((input > 10000) || (input < -10000))&& ((input < 15000)|| (input > -15000)))
  {  
    numLEDlit=15;
    LEDlit();
  }
  else if (((input > 6000) || (input < -6000)) && ((input < 10000)|| (input > -10000)))
 {  
 numLEDlit=13;
 LEDlit();
 }
  else if (((input > 3000) || (input < -3000)) && ((input < 6000)|| (input > -6000)))
 {
  numLEDlit=10;
 LEDlit();
 }
  else if (((input > 1500) || (input < -1500)) && ((input < 3000)|| (input > -3000)))
 {  
 numLEDlit=7;
 LEDlit();
 }
  else if (((input > 1200) || (input < -1200)) && ((input < 1500)|| (input > -1500)))
  { 
    numLEDlit=6;
 LEDlit();
  }
  else if (((input > 950) || (input < -950)) && ((input <1200 )|| (input > -1200)))
   {
    numLEDlit=5;
 LEDlit();
   }
  else if (((input > 800) || (input < -800)) && ((input < 950)|| (input > -950)))
 {  
   numLEDlit=4;
 LEDlit();
 }
  else if (((input > 700) || (input < -700)) && ((input < 800)|| (input > -800)))
 {  
  numLEDlit=3;
 LEDlit();
 }
  else if (((input > 680) || (input < -680)) && ((input < 700)|| (input > -700)))
  {
    numLEDlit=2;
 LEDlit();
  }
  else if (((input > 620) || (input < -620)) && ((input < 650)|| (input > -650)))
   {
    numLEDlit=1;
 LEDlit();
   }
  /* else
   {
   //numLEDlit=0;
   LEDoff();
   }*/
// Serial.println(numLEDlit);
 delay(10);
  FastLED.show();
  delay(10);
}


void LEDoff()
    {
      for(int i=0;i<NUM_LEDS;i++)
        {
          leds[i].r-=20;
          leds[i].g-=20;
          leds[i].b-=20;
          if(leds[i].r<0) leds[i].r=0;
          if(leds[i].g<0) leds[i].g=0;
          if(leds[i].b<0) leds[i].b=0;
          
        }
    }

void LEDlit()
  {
    for(int i=0;i<numLEDlit;i++)
        {
          if(i==0)
            {
              leds[i].r+=3;
              leds[i].g+=2;
              leds[i].b+=4;
            }
            else if(i<=3)
            {
              leds[i].r+=1;
              leds[i].g+=4;
              leds[i].b+=3;
            }
            else if(i<=6)
              {
                leds[i].r+=1;
              leds[i].g+=5;
              leds[i].b+=2;
              }
             else if(i<=8)
              {
                leds[i].r+=2;
              leds[i].g+=3;
              leds[i].b+=1;
              }
              else if(i<=9)
              {
                leds[i].r+=2;
              leds[i].g+=2;
              leds[i].b+=1;
              }
              else if(i<=10)
              {
                leds[i].r+=5;
              leds[i].g+=1;
              leds[i].b+=4;
              }
              else if(i<=11)
              {
                leds[i].r+=4;
              leds[i].g+=1;
              leds[i].b+=1;
              }
              /*else if(i<=12)
              {
                leds[i].r+=45;
              leds[i].g+=10;
              leds[i].b+=5;
              }
              else if(i<=13)
              {
                leds[i].r+=50;
              leds[i].g+=10;
              leds[i].b+=2;
              }
              else if(i<=14)
              {
                leds[i].r+=70;
              leds[i].g+=0;
              leds[i].b+=0;
              }*/
              
              else
              {
                
              }
              if(leds[i].r>255) {leds[i].r=255;}
              if(leds[i].g>255) {leds[i].g=255;}
              if(leds[i].b>255) {leds[i].b=255;}

              FastLED.show();
        }
        for(int i=numLEDlit;i<15;i++)
          {
            if(i==1)
              {
              leds[i].r-=4;
              leds[i].g-=3;
              leds[i].b-=2;
              }
              else if(i<=3)
               {
              leds[i].r-=2;
              leds[i].g-=2;
              leds[i].b-=1;
              }
              else if(i<=6)
                {
              leds[i].r-=1;
              leds[i].g-=5;
              leds[i].b-=2;
                }
              else if(i<=8)
                {
              leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;
                }
               else if(i<=9)
               {
            leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;
               }
               else if(i<=10)
               {
               leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;
               }
               else if(i<=11)
               {
             leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;
               }
               else if(i<=12)
               {
                leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;
               }
               else if(i<=13)
               {
              leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;
               }
               else if(i<=14)
               {
              leds[i].r=0;
              leds[i].g=0;
              leds[i].b=0;

             // Serial.println(leds[i].r);
               }
               /*else if(i<=15)
               {
                leds[i].r-=1;
              leds[i].g-=2;
              leds[i].b-=5;
               }*/
               else
               {
                
               }
               if(leds[i].r<0) {leds[i].r=0;}
               if(leds[i].g<0) {leds[i].g=0;}
               if(leds[i].b<0) {leds[i].b=0;}

                FastLED.show();
               
          }

    
  }

