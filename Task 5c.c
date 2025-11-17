//Write a program to find smallest number in an array of 10 numbers stored from memory location [20h] onwards. Display the result in P2 register.
//TILAK POOJARY
//NNM24EE127
//TASK 2C

#include<reg51.h>

unsigned char idata *internalmemory=0x20;
unsigned char count,a[10],temp;

void main(void)
{

	P2=0x00;
	
	for(count=0;count<10;count++)
	{
		a[count]=*internalmemory;
		*internalmemory++;
	}
	
	temp=a[0];
	
	for(count=0;count<10;count++)
	{
    if(a[count]<temp)
		{
			temp=a[count];
		}
	}
	P2=temp;
}
	
	
