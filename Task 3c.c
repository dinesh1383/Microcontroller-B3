//Write a program to display the addition result of two 8 bit numbers in LED
//TILAK POOJARY
//NNM24EE127
//TASK 3C

#include<MicroLABlet.h>

unsigned char sum,a=0x1B,b=0x6C;

void main(void)
{
	P2=0x00;    //set as output port
	
	sum=a+b;    //calculate sum of a and b
	P2=sum;     //display sum in port two taht is led array
}

