#include <SoftwareSerial.h>
#include <FastLED.h>

SoftwareSerial mySerial(10, 11); // RX, TX
#define LED_PIN 5
#define BRIGHTNESS  64
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB leds[100];
#define UPDATES_PER_SECOND 100


int NUM_LEDS;
char command;
String string;
String rString,bString,gString,numString;
String animString;
int Red,Green,Blue,number;
char r[3],g[3],b[3];
bool animation;
int animVal;
char anim[2];

String ANIM_STRING="@";

/////////////
CRGBPalette16 currentPalette;
TBlendType    currentBlending;

extern CRGBPalette16 myRedWhiteBluePalette;
extern const TProgmemPalette16 IND_FLAG PROGMEM;
/////////////

unsigned int currVal,pastVal=0;

void setup()
  {
    mySerial.begin(9600);
    Serial.begin(9600);
    while(!mySerial.available());
   
    if (mySerial.available() > 0) 
    {
        while(mySerial.available() > 0)
        {
        command = ((byte)mySerial.read());
        if(command == ':')
        {
        break;
        }
        else
        {
        string += command;
          delay(10);
        }
     }
   Serial.println(string);
   
      rString=string.substring(2,4);
   gString=string.substring(4,6);
   bString=string.substring(6,8);
   numString=string.substring(9);

  rString.toCharArray(r,3);
  Red=(int)strtol(r, NULL, 16);

  gString.toCharArray(g,3);
  Green=(int)strtol(g, NULL, 16);

  bString.toCharArray(b,3);
  Blue=(int)strtol(b, NULL, 16);

   number=numString.toInt();
    Serial.print("RED:");
    Serial.println(Red);
    Serial.print("BLUE:");
    Serial.println(Blue);
    Serial.print("GREEN:");
    Serial.println(Green);
    Serial.print("LED NUMBER:");
    Serial.println(number);
    delay(10); 
    for(int i=0;i<NUM_LEDS;i++){
      leds[i]=CRGB(Red,Green,Blue);
      
    }
    
    string="";
    } 
 
    NUM_LEDS=number;
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    FastLED.setBrightness(  BRIGHTNESS );
    currentPalette = RainbowColors_p;
    currentBlending = LINEARBLEND;
    
  }





void loop()
  {
     if (mySerial.available() > 0) 
    {
        while(mySerial.available() > 0)
        {
        command = ((byte)mySerial.read());
        if(command == ':')
        {
        break;
        }
        else
        {
        string += command;
          delay(10);
        }
     }
     Serial.print("String Starting Value:");
     Serial.println(string.substring(0,1));
     Serial.print("Recieved String:");
     Serial.println(string);
     if(string.substring(0,1)!=ANIM_STRING){
      animation=false;
   
   
      rString=string.substring(2,4);
   gString=string.substring(4,6);
   bString=string.substring(6,8);
   numString=string.substring(9);

  rString.toCharArray(r,3);
  Red=(int)strtol(r, NULL, 16);

  gString.toCharArray(g,3);
  Green=(int)strtol(g, NULL, 16);

  bString.toCharArray(b,3);
  Blue=(int)strtol(b, NULL, 16);

   number=numString.toInt();
    Serial.print("RED:");
    Serial.println(Red);
    Serial.print("BLUE:");
    Serial.println(Blue);
    Serial.print("GREEN:");
    Serial.println(Green);
    Serial.print("LED NUMBER:");
    Serial.println(number);
    delay(10); 
    for(int i=0;i<NUM_LEDS;i++){
      leds[i]=CRGB(Red,Green,Blue);
    }
     FastLED.show();
    FastLED.delay(1000 / UPDATES_PER_SECOND);
    string="";
    } 
    else{
      animation=true;
      animString=string.substring(1,2);
      animString.toCharArray(anim,2);
      animVal=(int)strtol(anim,NULL,16);
      Serial.print("Present running animation:");
      Serial.println(animVal);
     if( animVal ==  0)  { currentPalette = RainbowColors_p;         currentBlending = LINEARBLEND; }
        if( animVal == 1)  { currentPalette = RainbowStripeColors_p;   currentBlending = NOBLEND;  }
        if( animVal == 2)  { currentPalette = RainbowStripeColors_p;   currentBlending = LINEARBLEND; }
        if( animVal == 3)  { SetupPurpleAndGreenPalette();             currentBlending = LINEARBLEND; }
        if( animVal == 4)  { SetupTotallyRandomPalette();              currentBlending = LINEARBLEND; }
        if( animVal == 5)  { SetupBlackAndWhiteStripedPalette();       currentBlending = NOBLEND; }
        if( animVal == 6)  { SetupBlackAndWhiteStripedPalette();       currentBlending = LINEARBLEND; }
        if( animVal == 7)  { currentPalette = CloudColors_p;           currentBlending = LINEARBLEND; }
        if( animVal == 8)  { currentPalette = PartyColors_p;           currentBlending = LINEARBLEND; }
        if( animVal == 9)  { currentPalette = IND_FLAG; currentBlending = NOBLEND;  }
        if( animVal == 10)  { currentPalette = IND_FLAG; currentBlending = LINEARBLEND; }
        string="";
    }
 }
 if(animation){
  currVal=millis();
  if((currVal-pastVal)>100){
    pastVal=millis();
  }
   static uint8_t startIndex = 0;
    startIndex = startIndex + 1; /* motion speed */
    
    FillLEDsFromPaletteColors( startIndex);
    
    FastLED.show();
    FastLED.delay(1000 / UPDATES_PER_SECOND);
 }
}



//////////////////Animation functions
void FillLEDsFromPaletteColors( uint8_t colorIndex)
{
    uint8_t brightness = 255;
    
    for( int i = 0; i < NUM_LEDS; i++) {
        leds[i] = ColorFromPalette( currentPalette, colorIndex, brightness, currentBlending);
        colorIndex += 3;
    }
}
//////////////////////////////
void SetupTotallyRandomPalette()
{
    for( int i = 0; i < 16; i++) {
        currentPalette[i] = CHSV( random8(), 255, random8());
    }
}

// This function sets up a palette of black and white stripes,
// using code.  Since the palette is effectively an array of
// sixteen CRGB colors, the various fill_* functions can be used
// to set them up.
void SetupBlackAndWhiteStripedPalette()
{
    // 'black out' all 16 palette entries...
    fill_solid( currentPalette, 16, CRGB::Black);
    // and set every fourth one to white.
    currentPalette[0] = CRGB::White;
    currentPalette[4] = CRGB::White;
    currentPalette[8] = CRGB::White;
    currentPalette[12] = CRGB::White;
    
}

// This function sets up a palette of purple and green stripes.
void SetupPurpleAndGreenPalette()
{
    CRGB purple = CHSV( HUE_PURPLE, 255, 255);
    CRGB green  = CHSV( HUE_GREEN, 255, 255);
    CRGB black  = CRGB::Black;
    
    currentPalette = CRGBPalette16(
                                   green,  green,  black,  black,
                                   purple, purple, black,  black,
                                   green,  green,  black,  black,
                                   purple, purple, black,  black );
}


// This example shows how to set up a static color palette
// which is stored in PROGMEM (flash), which is almost always more
// plentiful than RAM.  A static PROGMEM palette like this
// takes up 64 bytes of flash.
const TProgmemPalette16 IND_FLAG PROGMEM =
{
    CRGB::Orange,
    CRGB::Gray, // 'white' is too bright compared to red and blue
    CRGB::Green,
    CRGB::Black,
    
    CRGB::Orange,
    CRGB::Gray,
    CRGB::Green,
    CRGB::Black,
    
    CRGB::Orange,
    CRGB::Orange,
    CRGB::Gray,
    CRGB::Gray,
    CRGB::Green,
    CRGB::Green,
    CRGB::Black,
    CRGB::Black
};


