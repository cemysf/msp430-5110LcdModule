#include "msp430g2553.h"
#include "lcd.h"

void main()
{
	setupLCD();	//see lcd.h 
	
	writeStringToLCD("welcome my son");
	__delay_cycles(2*DELAY_S);
	clearLCD();
	writeStringToLCD("welcome to the machine");
	__delay_cycles(3*DELAY_S);
	clearLCD();
	
}
