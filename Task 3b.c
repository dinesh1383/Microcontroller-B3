//Write a program to blink first and second LED alternately with a 1 second delay.
//TILAK POOJARY
//NNM24EE127
//TASK 3B

#include<MicroLABlet.h>
sbit led1=P2^0;
sbit led2=P2^1;

void main(void)
{
	P2=0x00;
	
	while(1)
	{
		led1=1;
		delay(1000);
		led1=0;
		led2=1;
		delay(1000);
	}
}
