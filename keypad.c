#include<avr/io.h>
#define F_CPU16000000UL
#include<util/delay.h>
#define lcd PORTC
#include<mamalib/lcd.h>
#include<mamalib/keypad.h>

int count=0;

void main()
{
 DDRA=0b11100000;
 PORTA=0b00001111;//0b00011111 for calc()
 DDRD=0xff;
 DDRC=0xff;
 lcd_init();
 lcd_command(0x85);
 unsigned char x=0;
 while(1)
 {
  
     x=keypad_pc();//....calling way
    lcd_data(x);
    _delay_ms(4000);

    //keypad_remote();
	
  /* x=keypad_calc();//....calling way
    if(x!='d')
    count++; 
	else
	  count--;
	  if(x=='k')
	  {
	   lcd_command(0x01);
	   count=0;
	  }
  	 else if(x=='d')
	    {
		  lcd_command(0x85+(count));
		  lcd_data(' ');
		}
		else
		{
		    lcd_command(0x85+(count-1));
            lcd_data(x);
		 }*/
 }

}
 
