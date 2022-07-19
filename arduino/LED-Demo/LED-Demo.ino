

//Besonderheiten der FastLED Bibliothek im Zusammenspiel mit ESP8266
#define FASTLED_ALLOW_INTERRUPTS 0
#define FASTLED_ESP8266_RAW_PIN_ORDER

//Bibliothek einbinden
//https://github.com/FastLED/FastLED/wiki/Pixel-reference
#include "FastLED.h"
#include "FastLED_RGBW.h"

// ???
#define DATA_PIN    D1
//???
#define NUM_LEDS    15
//LED Array mit NUM_LEDS Elementen
CRGBW leds[NUM_LEDS];
CRGB *ledsRGB = (CRGB *) &leds[0];


// ????
void setup() {
  //???
  delay(3000);
  //Init
 FastLED.addLeds<WS2812B, DATA_PIN, RGB>(ledsRGB, getRGBWsize(NUM_LEDS));
  //?????
  FastLED.setBrightness(50);
  //?????
  FastLED.setMaxPowerInVoltsAndMilliamps(5,400);
  // ???
  // ???
  FastLED.show();
  // ???
  delay(30); 
  
}

void loop() {
 for (int i = 0; i <= 14; i++) {
    leds[i] = CRGB ( 255, 0, 0);
    FastLED.show();
     }
}
