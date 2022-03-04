#include <stdio.h>
// global variable, consisting of three three by three bitmaps
uint8_t bitArray[3][3][3] = 
  {  
      { {255,255,255},
        {127,0,1},
        {255,255,255} },// this makes a box  
        
      { {255,255,255},
        {0,31,0},
        {255,255,255} }, // this makes a capital I
    
      { {127,0,1},
        {127,0,1},
        {255,255,255} } // this makes a U 
  };

void print_bitmap(uint8_t bitmap); //declare function

void setup() {
  Serial.begin(9600);
}

void loop() {
 uint8_t bitmap;
 for (bitmap=0; bitmap < 3; bitmap++)  // for each bitmap
 {
  print_bitmap(bitmap);  //call bitmap print routine
 }
}


void print_bitmap(uint8_t bitmap)
{
  uint8_t xval, yval;
  for (yval = 0; yval < 3; yval++) //vertical rows
  {
    for (xval = 0; xval < 3; xval++) // horizontal rows
    {
      Serial.print(bitArray[bitmap][yval][xval]); print the value
    }
    Serial.println();
  }
}
