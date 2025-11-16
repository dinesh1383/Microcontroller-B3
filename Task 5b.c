//Write a program to move a block of 10 data stored from [40h] location onwards to [30h] location onwards using loop instructions.
//TILAK POOJARY
//NNM24EE127
//TASK 2B

#include<reg51.h>

unsigned char idata *internalmemory=0x40;
unsigned char count,a[10];

void main(void)
{
	for(count=0;count<10;count++)
	{
		*internalmemory=count;
		*internalmemory++;
	}
	
	*internalmemory=0x40;
	
	for(count=0;count<10;count++)
	{
		a[count]=*internalmemory;
		*internalmemory++;
	}
	
	*internalmemory=0x30;
	
	for(count=0;count<10;count++)
	{
		*internalmemory=a[count];
		*internalmemory++;
	}
}