# esp32 is hard

For this project, I decided to try physical computing for the first time, because I saw what the CDE class was doing and I wanted to see if I could get some experience. The original plan was to connect my ESP32 to my computer and push code to it that would run different light displays, and cycle between the options. However, I ended up struggling a lot. With the help of Jib, I was able to set up some starter code that allowed me to connect the device to  WLED, where I could control the light display from my phone or computer. From here, I tried to focus on coding the lights myself. A lot of the issues I ran into stemmed from the fact that I was using an ESP32 device with the Arduino online editor, and I had difficulty finding any online tutorials for an ESP32 that didn't take me to the WLED app.

Originally, "being successful" for me meant being able to control individual lights and cycle between different displays. I believe I somewhat figured out the first one, and for the second, well, I can do it on the WLED app. After talking with Mush, I have realized that I still found some success in the physical coding aspect, and it definitely was exciting to see the lights connect from the WLED app!

All of my code is explained in the comments. The idea for this program was to first set up different light display functions, and then have the LED strip loop through these different displays. The four displays I have are a solid color that you define, blink (which is a built-in FastLED function), rainbow (which goes from rgb(0,0,0) to rgb(255, 255, 255)), and ran, which just generates a random blinking color.

I used FastLED's Blink() example to get my setup code - essentially lines 1-15. Other than that, it was mainly looking up items in C++'s documentation.

