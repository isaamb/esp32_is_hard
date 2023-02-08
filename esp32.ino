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

#define solid solid() {
  /*function for solid colors
  from arduino:
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  
  from fastLED library:
*/
  int color = RED;  //define what color i want as a variable
  leds[0] = CRGB::color;  //tell the LEDs to turn to that color
  FastLED.show(); //GO
}

int blink()

#define rainbow rainbow(){
  /* cycle between different colors, how do I do this gradually? */
  /* for loop that adds 5 to each RGB color value until it reaches 255? */
  for (var n = 0; n < 255; n += 5){
    //set all of the color values to be n so that they'll change
    int red = n;
    int green = n;
    int blue = n;
    leds[i] = CRGB(red, green, blue); //tell lights to display that color
    if (n = 255){
      n = 0; //reset n to 0 once it reaches 255
    }
    delay(500); //wait
    
    //if it is going to be in the loop, i need to add a for loop within this function to tell it to only run a few times and then exit
  }
}

// help with random values https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus
srand(unsigned int 5); 

#define ran ran() {
  for (k = 1; k < 10; k++){ //have it cycle through this 10 times
  	srand((unsigned) time(NULL)); //figure out a seed value for random function that depends on the time so you get a changing seed value -> different numbers
    int random = (rand() % 256); //generate a random number between 0 and 255 - doesn't include 256
    leds[i] = CRGB(random, random, random); //tell leds to blink color with random (RGB)
  }
}

// set up an array called display with all of the display types 
int display[solid, blink(), rainbow, ran];
    
void loop() {
    for (n = 0; n < 3; n++){
      display[n]; //show whichever display this is
      delay(500) //wait
      if (n = 3){
        n = 0; //reset n so it will continue to loop
      }
    }
    /*  function to cycle through different functions
      for n= 1, n<5, n++
        have display[n] run
        wait 
        if n = 3, make n = 0 again */
}
