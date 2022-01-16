#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 15

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 7
//#define CLOCK_PIN 13
int value1 = 0;
int value2 = 0;
int value3 = 0;
int value4 = 0;
int value5 = 0;
int value6 = 0;
float average = 0;

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup()
{
  // Start up the serial port, for communication with the PC.
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  Serial.begin(115200);
  Serial.println("Ready to receive colors.");
  
}

void loop()
{
  // If any digit is received, we will go into integer parsing mode
  // until all three calls to parseInt return an interger or time out.
  if (Serial.available())
  {
    value1 = Serial.parseInt();
    value2 = Serial.parseInt();
    value3 = Serial.parseInt();
    value4 = Serial.parseInt();
    value5 = Serial.parseInt();
    value6 = Serial.parseInt();
    Serial.println("value1");
    Serial.println(value1);
    Serial.println("value2");
    Serial.println(value2);
    Serial.println("value3");
    Serial.println(value3);
    Serial.println("value4");
    Serial.println(value4);
    Serial.println("value5");
    Serial.println(value5);
    Serial.println("value6");
    Serial.println(value6);
    average = (value1+value2+value3+value4+value5+value6)/6;
  }
//  leds[0].setRGB(brightness,brightness,brightness);
//  leds[1].setRGB(brightness2,brightness2,brightness2);
//  leds[2].setRGB(120,120,120);
    leds[0].setRGB(0, 0, 0);
//    leds[1].setRGB(average, average, average);
//    leds[2].setRGB(average, average, average);
//    leds[3].setRGB(average, average, average);
//    leds[4].setRGB(average, average, average);
//    leds[5].setRGB(average, average, average);
//    leds[6].setRGB(average, average, average);
//    leds[7].setRGB(average, average, average);
//    leds[8].setRGB(average, average, average);
//    leds[9].setRGB(value1*0.5, value1*0.5, value2*0.5);
//    leds[10].setRGB(value3*0.5, value2*0.5, value2*0.5);
//    leds[11].setRGB(value3*0.5, value4*0.5, value3*0.5);
//    leds[12].setRGB(value4*0.5, value4*0.5, value5*0.5);
//    leds[13].setRGB(value6*0.5, value5*0.5, value5*0.5);
//    leds[14].setRGB(value6*0.5, value1*0.5, value6*0.5);
    
    
    leds[1].setRGB(value1*0.5, value1*0.5, value2*0.5);
    leds[2].setRGB(value3*0.5, value2*0.5, value2*0.5);
    leds[3].setRGB(value3*0.5, value4*0.5, value3*0.5);
    leds[4].setRGB(value4*0.5, value4*0.5, value5*0.5);
    leds[5].setRGB(value6*0.5, value5*0.5, value5*0.5);
    leds[6].setRGB(value6*0.5, value1*0.5, value6*0.5);
    leds[7].setRGB(value1*0.5, value1*0.5, value3*0.5);
    leds[8].setRGB(value5*0.5, value3*0.5, value3*0.5);
    
    leds[9].setRGB(value1, value1, value1);
    leds[10].setRGB(value2, value2, value2);
    leds[11].setRGB(value3, value3, value3);
    leds[12].setRGB(value4, value4, value4);
    leds[13].setRGB(value5, value5, value5);
    leds[14].setRGB(value6, value6, value6);


    
  FastLED.show();
}
