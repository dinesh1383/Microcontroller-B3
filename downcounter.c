//DOWN COUNTER
//Tilak POOJARY
//NNM24EE127
//7/10/25
//EXP 5B

#include<MicroLABlet.h>
sbit buzzer=P3^5;
sbit control1=P3^6;
sbit control2=P3^7;
unsigned char array_counter=10,length,fps,higher_nibble,lower_nibble;
void main(void)
{
	//hex codes
	unsigned char hexcode_digit[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7F,0x39,0x3F,0x79,0x71};
	P1=0x00;          //initialized port 1 as output port
	control1=0;                 //set P3.6 as output port
	control2=0;                 //set P3.7 as output port
	buzzer=0;                //set port P3.5 as output port
	buzzer=1;                //ensuring buzzer is off
	while(1)
	{
		for(array_counter=10;array_counter>=0;array_counter--)
		{
			higher_nibble=array_counter/10;      //to get decimal higher nibble value
			lower_nibble=array_counter%10;       //to get decimal lower nibble value
			for(fps=0;fps<=50;fps++)
			{
				control1=1;              //turn on the first 7 segment display
        control2=0;             //turn off the second 7 segment display
				P1=hexcode_digit[higher_nibble];
				delay(10);
				control1=0;             //turn off the second 7 segment display
				control2=1;              //turn on the first 7 segment display
				P1=hexcode_digit[lower_nibble];
				delay(10);
			}
		}
	}
}