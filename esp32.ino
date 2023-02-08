// include the fastLED library so I can use it
#include <FastLED.h>

// define the number of leds in the strip
#define NUM_LEDS 6

// define which pin gives data - this is the only one i need to define for this device
#define DATA_PIN 2

// make an array for the leds
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN, RGB>(leds, NUM_LEDS); // fastLED function that "initializes the array"

}

int solid(){
  
}

int blink() {
  
}

int rainbow() {
  
}

int ran() {
  
}

// set up an array with all of the display types 

/*set up functions for different light movements
    
    eg. 1: solid color
     step 1: find pin that the leds are connected to
     step 2: tell them to turn on w a specific color
    
    2: blink solid color
      make voltage high and low, wait a second in between to make it seem like its blinking
    
    3: cycle between rainbow
      have it fade from one color to another
    
    4: have random ones going off
      random color -> generate random color for each pin every 2 seconds
      OR have each light in the strip change color at its own random time between 1 and 2 seconds
    
    */
    
void loop() {
    for (n = 1; n < 5; n++){
      
    }
    /*  function to cycle through different functions
      for n= 1, n<5, n++
        have display number n run
        wait for 1 minute
        if n = 5, make n = 1 again */
}
