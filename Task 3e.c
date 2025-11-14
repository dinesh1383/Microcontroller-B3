//Write a program to use LEDs as up-counter to display count from 00 to FF.
//TILAK POOJARY
//NNM24EE127
//TASK 3E

#include<MicroLABlet.h>

unsigned char count;

void main(void)
{
	P2=0x00;
	
	for(count=0x00;count<=0xFF;count++)
	{
		P2=count;
	}
}