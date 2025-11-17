//Write a program to blink first and second LED alternately with a 1 second delay.
//TILAK POOJARY
//NNM24EE127
//TASK 3B

#include<MicroLABlet.h>
sbit led1=P2^0;
sbit led2=P2^1;

void main(void)
{
	P2=0x00;        //set as output port
	
	while(1)
	{
		led1=1;              //turn on first led
		delay(1000);         //delay
		led1=0;              //turn off first led
		led2=1;             //turn on second led
		delay(1000);        //delay
		led2=0;
	}
}

