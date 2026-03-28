#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    1
#define BRIGHTNESS  64
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

int stopPin=8;
uint8_t randHue=0;
uint8_t randSat=0;
uint8_t randVal=0;

void setup() {
    delay( 3000 ); // power-up safety delay
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    pinMode(stopPin,INPUT);
}

void loop(){
  for(int i=20;i<255;i=i+10)
    for(int j=30;j<250;j=j+25)
      for(int k=25;k<200;k++)
      {
        leds[0]=CHSV(i,j,k);
    FastLED.show();
    FastLED.delay(10);
      }
    /*randHue=random(50,250);
    randSat=random(25,255);
    randVal=random(20,200);*/
    

    delay(200);
}

