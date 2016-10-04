#include "LedControl.h"

LedControl lc=LedControl(12,11,10,1);

unsigned long delaytime=500;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}


void WriteRanaOnMatrix() {
  // put your main code here, to run repeatedly:
  /* letter 'R' : */
byte a[8] = {B00000000,
            B00111000,
            B00100100,
            B00100100,
            B00111000,
            B00100100,
            B00100100,
            B00000000};
/* Letter 'a': */
byte b[8] = {B00000000,
              B00111000,
              B00000100,
              B00111100,
              B01000100,
              B01000100,
              B00111010,
              B00000000};
/* Letter 'n' : */
byte c[8] = {B00000000,
             B00000000,
             B01011000,
             B01100100,
             B01000100,
             B01000100,
             B01000100,
             B00000000};



lc.setRow(0,0,a[0]);
  lc.setRow(0,1,a[1]);
  lc.setRow(0,2,a[2]);
  lc.setRow(0,3,a[3]);
  lc.setRow(0,4,a[4]);
  lc.setRow(0,5,a[5]);
  lc.setRow(0,6,a[6]);
  lc.setRow(0,7,a[7]);
  delay(delaytime);
  lc.setRow(0,0,b[0]);
  lc.setRow(0,1,b[1]);
  lc.setRow(0,2,b[2]);
  lc.setRow(0,3,b[3]);
  lc.setRow(0,4,b[4]);
  lc.setRow(0,5,b[5]);
  lc.setRow(0,6,b[6]);
  lc.setRow(0,7,b[7]);
  delay(delaytime);
    lc.setRow(0,0,c[0]);
  lc.setRow(0,1,c[1]);
  lc.setRow(0,2,c[2]);
  lc.setRow(0,3,c[3]);
  lc.setRow(0,4,c[4]);
  lc.setRow(0,5,c[5]);
  lc.setRow(0,6,c[6]);
  lc.setRow(0,7,c[7]);
  delay(delaytime);
    lc.setRow(0,0,b[0]);
  lc.setRow(0,1,b[1]);
  lc.setRow(0,2,b[2]);
  lc.setRow(0,3,b[3]);
  lc.setRow(0,4,b[4]);
  lc.setRow(0,5,b[5]);
  lc.setRow(0,6,b[6]);
  lc.setRow(0,7,b[7]);
  delay(delaytime);
}


void loop() { 
  WriteRanaOnMatrix();
  delay(3 * delaytime);
}


