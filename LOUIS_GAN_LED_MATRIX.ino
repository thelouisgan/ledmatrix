#include <avr/pgmspace.h>  // Needed to store stuff in Flash using PROGMEM
#include "FastLED.h"       // Fastled library to control the LEDs

// How many leds are connected?
#define NUM_LEDS 256

// Define the Data Pin
#define DATA_PIN 3  // Connected to the data pin of the first LED strip
#define POWER_PIN 4

// Define the array of leds
CRGB leds[NUM_LEDS];

// Create the array of retro arcade characters and store it in Flash memory
const long Array1[] PROGMEM =
{
//PASTE YOUR ARRAY HERE eg. 0xed1c24
};

/*

UNCOMMENT ACCORDINGLY FOR MORE FRAMES

const long Array2[] PROGMEM =
{
//PASTE YOUR ARRAY HERE
};

const long Array3[] PROGMEM =
{
//PASTE YOUR ARRAY HERE
};

const long Array4[] PROGMEM =
{
//PASTE YOUR ARRAY HERE
}
*/


void setup() { 
FastLED.addLeds<NEOPIXEL,DATA_PIN>(leds, NUM_LEDS);  // Init of the Fastled library
FastLED.setBrightness(5);

pinMode(POWER_PIN, OUTPUT);  
digitalWrite(POWER_PIN, HIGH); 
}

void loop() { 



FastLED.clear();
for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = pgm_read_dword(&(Array1[i]));  // Read array from Flash
  }


/*

FOR EXTRA FRAMES, DUPLICATE THIS AND PASTE YOUR NEW ARRAY
FOR LESS FRAMES, DELETE ACCORDINGLY

FastLED.show();
delay(2000);
FastLED.clear();
for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = pgm_read_dword(&(Array2[i]));  // Read array from Flash
  }

FastLED.show();
delay(2000);
FastLED.clear();
for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = pgm_read_dword(&(Array3[i]));  // Read array from Flash
  }

FastLED.show();
delay(2000);
FastLED.clear();
for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = pgm_read_dword(&(Array4[i]));  // Read array from Flash
  }

 */

FastLED.show();
delay(2000);
}
