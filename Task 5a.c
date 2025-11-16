//Write a program to count number of zero’s of a data stored in accumulator. The count is to be stored in register R5.
//TILAK POOJARY
//NNM24EE127
//TASK 2

#include<reg51.h>
unsigned char idata *R5;
unsigned char value,i,count=0;

void main(void)
{
	P1=0x00;
	P2=0x00;
	P3=0x00;
	
	
	for(i=0;i<8;i++)
	{
		ACC=(0xAB>>i)&0x01;
		P1=ACC;
		if(ACC==0)
	   {
			 count++;
		 }
		 P2=count;
	}
	R5=count;
	P3=count;
}