/*
 * fourMatrix
 * Version 1.0 Dec 2015
 */
 
 #include "Arduino.h"

 class fourMatrix
 {


	private:

    byte fontBuffer[80];
    byte buffer[9][9];
    int dataPin;
    int latchPin;
    int clockPin;
    int num;
    

    void setCommand(byte comtmand, byte value);
    void ledClear();
    
    void printCharWithShift(char c, int scrollSpeed);
    void loadPage();
    void loadAndShift(int scrollSpeed);
	void printStringWithShift(char *s, int shift_speed);


	public:

	fourMatrix(int dataPin, int latchPin, int clockPin, int num);
	void init();
	void printMsgToMatrix(String msg, int scrollSpeed);
	












  
 };

