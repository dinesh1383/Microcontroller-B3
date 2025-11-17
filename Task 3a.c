//Write a program to blink fifth LED with a 1s delay between each state.
//TILAK POOJARY
//NNM24EE127
//TASK 3A

#include<MicroLABlet.h>
sbit led=P2^4;

void main(void)
{
	P2=0x00;  //set as output port
	
	while(1)
	{
		led=1;             //turn on fifth led
		delay(1000);       //delay
		led=0;             //turn off fifth led
		delay(1000);       //delay
	}

}
