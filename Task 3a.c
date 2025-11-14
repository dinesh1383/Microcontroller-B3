//Write a program to blink fifth LED with a 1s delay between each state.
//TILAK POOJARY
//NNM24EE127
//TASK 3A

#include<MicroLABlet.h>
sbit led=P2^4;

void main(void)
{
	led=0;
	
	while(1)
	{
		led=1;
		delay(1000);
		led=0;
		delay(1000);
	}
}