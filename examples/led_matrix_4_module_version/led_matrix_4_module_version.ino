#include "Arduino.h"
#include <fourMatrix.h>

//arduino uno
int latchPin = 10;
int clockPin = 13;
int dataPin = 12;

fourMatrix m(12,10,13,4);   // (datapin,latchpinn, clockpin,number of modules)

void setup() {
   Serial.begin(9600);
   m.init(); //initialise instance 
}

void loop() {
    m.printMsgToMatrix("  ABCD..", 30); //display scrolling message, scroll speed
    delay(2000);
     m.printMsgToMatrix("  1234..", 2);
    delay(2000);
    m.printMsgToMatrix("  Hello", 30);
    delay(2000);
     m.printMsgToMatrix("  World", 2);
    delay(2000);
}







