//Write a program to check if the number stored in location 30h is even or odd. If even turn ON first four LEDs. If odd turn ON last four LEDs. 
//TILAK POOJARY
//NNM24EE127
//TASK 3D

#include<MicroLABlet.h>

unsigned char idata *internalmemory=0x30;
unsigned char count;
void main(void)
{
	P2=0x00;
	
	for(count=0;count<=10;count++)
	{
		*internalmemory=count;
		if((*internalmemory&0x01)==0)
		{
			P2=0xF0;
		}
		else
		{
			P2=0x0F;
		}
	}
}