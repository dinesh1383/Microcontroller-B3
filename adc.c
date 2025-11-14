//To read the voltage through ADC and display in LCD  
//TILAK POOJARY
//NNM24EE127
//EXP 7
//12/5/25

#include <MicroLABlet.h>    
sbit ADC_start= P2^6;                   // ADC Start Conversion Output 
sbit ADC_end_of_conversion= P2^7;      // ADC End of Conversion Input 
sbit ADC_output_enable = P2^5; 
#define ADC_data   P0                  // ADC Data Input 
#define declare_output_port 0x00 
#define declare_input_port 0xFF 
unsigned char ADC_value; 
unsigned char charactor_count; 
void _nop_(void); 
unsigned char message_one[ ] = {"ADC I/P Voltage"}; 
unsigned char message_two[ ] = {"=   V "}; 
unsigned char ascii[ ]="0123456789";

unsigned char read_ADC( ) 
{ 
 ADC_start = 1; 
 _nop_( );_nop_( );_nop_( );_nop_( ); 
  ADC_start = 0; 
 _nop_( );_nop_( );_nop_( ); 
 while(ADC_end_of_conversion ==1); 
 ADC_output_enable=1; 
 _nop_( );_nop_( );_nop_( );_nop_( ); 
 ADC_value=ADC_data; 
 ADC_output_enable=0; 
 _nop_( );_nop_( );_nop_( );_nop_( ); 
 return(ADC_value); 
}
		 
	 
void main (void) 
{ 
 unsigned char ADC_output, Voltage_digit; 
 ADC_data= declare_input_port; 
 P2= declare_output_port; 
 ADC_start=0; 
 ADC_end_of_conversion =1; 
 ADC_output_enable=0; 
 LCD_Initialization(); 
 LCD_command_write (0X80); 
 while(message_one[charactor_count]!='\0') 
 { 
  LCD_message_write(message_one[charactor_count]); 
  charactor_count++; 
 } 
 charactor_count=0; 
 LCD_command_write(0xC7); 
 while(message_two[charactor_count]!='\0') 
 { 
  LCD_message_write(message_two[charactor_count]); 
  charactor_count++; 
 }  
 while (1) 
 { 
  ADC_output= read_ADC( ); 
  Voltage_digit= ADC_output/0x33;        //Voltage_digit=Voltage_digit|0x30; 
  LCD_command_write (0xC8); 
  LCD_message_write (ascii[Voltage_digit]); 
 } 
} 
