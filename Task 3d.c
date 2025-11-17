//Write a program to check if the number stored in location 30h is even or odd. If even turn ON first four LEDs. If odd turn ON last four LEDs. 
//TILAK POOJARY
//NNM24EE127
//TASK 3D

#include<MicroLABlet.h>

unsigned char idata *internalmemory=0x30;
unsigned char count,x;
void main(void)
{
	P2=0x00;
	x=0xfb;                         //value stored to x
	*internalmemory=x;              //storing value of x in 30h location
	
		if((*internalmemory&0x01)==0)    //check if number is even or not
		{
			P2=0x0F;                      //if even lower bit taht is first four led on
		}
		else
		{
			P2=0xF0;                     //if not even than odd means next four led on that is higher bit high 
		}
	
}
