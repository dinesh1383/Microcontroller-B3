//Write a program to display the addition result of two 8 bit numbers in LED
//TILAK POOJARY
//NNM24EE127
//TASK 3C

#include<MicroLABlet.h>

unsigned char sum,a=0x1B,b=0x6C;

void main(void)
{
	P2=0x00;
	
	sum=a+b;
	P2=sum;
}
