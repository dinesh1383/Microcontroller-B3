//Interfacing Keypad with Seven Segment Display 
//TILAK POOJARY
//NNM24EE127
//EXP 6
//15/10/2025

#include<MicroLABlet.h>

sbit buzzer=P3^5;
unsigned char key_value=0,check_key;
void main()
{
	P2=0x0F;                //set port 1 higher nibble as output and lower nibble as input port
	P1=0x00;                //set as output port
	buzzer=0;               //set buzzer as output
	buzzer=1;                 //tuen off buzzer ensuring it as off
	while(1)
	{
		P2=0x0F;                //set value as 0x0f
		check_key=P2;          //assigning valu eof port 2 to check_key variable
		if(check_key!=0x0F) 
		{
			key_value=readkey();    //getting value returned from readkey function
		}
		display(key_value);       //dispaly returned value
	}
}
