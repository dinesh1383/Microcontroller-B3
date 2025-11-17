//Write a program to use LEDs as down-counter to display count from FF to 00. 
//TILAK POOJARY
//NNM24EE127
//TASK 3F

#include<MicroLABlet.h>

unsigned char count;

void main(void)
{
	P2=0x00;                              //set as output port
	
	for(count=0xFF;count<=0x00;count--)  //downcounter
	{
		P2=count;                          //show downcounting value from 0xff to 0x00 with 1s delay
		delay(1000);                      //delay of 1s
	}
}
