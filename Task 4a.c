//Write a program to add two 16 bit numbers. If the sum generates a carry turn on buzzer for 5second, if not buzzer to beep for 1 second.  Display the given number and the corresponding result in LCD.
//TILAK POOJARY
//NNM24EE127
//TASK 4A

#include<MicroLABlet.h>
sbit buzzer=P3^5;

unsigned char msg1[]={"0x6FA8 + 0x89AB"};
unsigned char msg2[]={"Result = F953"};
unsigned int a=0x6FA8,b=0x89AB,sum;
unsigned char count,carry;
	
void main()	
{
	P1=0x00;
	buzzer=0;
	buzzer=1;
	
	LCD_Initialization();
	
	while(msg1!='\0')
	{
		LCD_message_write(msg1[count]);
		count++;
	}
	count=0;
	
	while(msg2!='\0')
	{
		LCD_message_write(msg2[count]);
		count++;
	}
	
	sum=a+b;
	carry=PSW>>7;
	if(carry==0x01)
	{
		buzzer=0;
		delay(5000);
		buzzer=1;
	}
	else
	{
		buzzer=0;
		delay(1000);
		buzzer=1;
	}
	buzzer=1;
}
	