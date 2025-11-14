//Write a program to use LEDs as down-counter to display count from FF to 00. 
//TILAK POOJARY
//NNM24EE127
//TASK 3F

#include<MicroLABlet.h>

unsigned char count;

void main(void)
{
	P2=0x00;
	
	for(count=0xFF;count=0x00;count--)
	{
		P2=count;
		delay(500);
	}
}