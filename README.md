# Keypad Library


//for pc
unsigned char keypad_pc()
 {  


   /* variable_to_store_returning_value=keypad_pc();....calling way
    lcd_data(x);
    _delay_ms(4000);*/
    
	while(1)
	{
    PORTD=0b00001110;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00001111)==0b00001110)
	{
	  return '1';
	 }
     

	if((PINA&0b00001111)==0b00001101)
	{
	return '2';
	}

	if((PINA&0b00001111)==0b00001011)
	{
	return '3';
    }

    if((PINA&0b00001111)==0b00000111)
	{
	return '4';
	}

	 PORTD=0b00001101;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00001111)==0b00001110)
	{
	return '5';
	}
     

	if((PINA&0b00001111)==0b00001101)
	{
	return '6';
	}

	if((PINA&0b00001111)==0b00001011)
	{
	return '7';
	}

    if((PINA&0b00001111)==0b00000111)
	{
	return '8';
	}

	 PORTD=0b00001011;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00001111)==0b00001110)
	{
	return '9';
	}
     

	if((PINA&0b00001111)==0b00001101)
	{
	return 'A';
	}

	if((PINA&0b00001111)==0b00001011)
	{
	return 'B';
	}

    if((PINA&0b00001111)==0b00000111)
	{
	return 'C';
	}

	 PORTD=0b00000111;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00001111)==0b00001110)
	{
	return 'D';
	}
     

	if((PINA&0b00001111)==0b00001101)
	{
	return 'E';
	}

	if((PINA&0b00001111)==0b00001011)
	{
	return 'F';
    }

    if((PINA&0b00001111)==0b00000111)
	{
     return '0';
	}


    }


 }

 //for remote 

 unsigned char keypad_remote()
 {  
    
	while(1)
	{

	  //keypad_remote();...calling way
	 
    PORTD=0b00001110;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

    if((PINA&0b00000001)==0)
	{
     lcd_data('1');while(!(PINA&(0b00000001)));break;
	}
     

	if((PINA&0b00000010)==0)
	{
	 lcd_data('2');while(!(PINA&0b00000010));break;
	}

	if((PINA&0b00000100)==0)
	{
	lcd_data('3');while(!(PINA&0b00000100));break;
    }

    if((PINA&0b00001000)==0)
	{
	lcd_data('4');while(!(PINA&0b00001000));break;
	
	}

	 PORTD=0b00001101;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00000001)==0)
	{
     lcd_data('5');while(!(PINA&0b00000001));break;
	}
     

	if((PINA&0b00000010)==0)
	{
	lcd_data('6');while(!(PINA&0b00000010));break;
	}

	if((PINA&0b00000100)==0)
	{
	lcd_data('7');while(!(PINA&0b00000100));break;
    }

    if((PINA&0b00001000)==0)
	{
	lcd_data('8');while(!(PINA&0b00001000));break;
	
	}

	 PORTD=0b00001011;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00000001)==0)
	{
    lcd_data('9');while(!(PINA&0b00000001));break;
	}
     

	if((PINA&0b00000010)==0)
	{
	lcd_data('A');while(!(PINA&0b00000010));break;
	}

	if((PINA&0b00000100)==0)
	{
	lcd_data('B');while(!(PINA&0b00000100));break;
    }

    if((PINA&0b00001000)==0)
	{
	lcd_data('C');while(!(PINA&0b00001000));break;
	
	}

	 PORTD=0b00000111;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00000001)==0)
	{
    lcd_data('D');while(!(PINA&0b00000001));break;
	}
     

	if((PINA&0b00000010)==0)
	{
	lcd_data('E');while(!(PINA&0b00000010));break;
	}

	if((PINA&0b00000100)==0)
	{
	lcd_data('F');while(!(PINA&0b00000100));break;
    }

    if((PINA&0b00001000)==0)
	{
	lcd_data('0');while(!(PINA&0b00001000));break;
	
	}


    }


 }

 //for calculator

  unsigned char keypad_calc()
 {  

   /* variable_to_store_returning_value=keypad_calc();....calling way
     lcd_data(x);*/
    
	while(1)
	{
    PORTD=0b00001110;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00000001)==0)
	{
	while(!(PINA&0b00000001));return '7';
	}
     

	if((PINA&0b00000010)==0)
	{
	while(!(PINA&0b00000010));return '8';
	}

	if((PINA&0b00000100)==0)
	{
	while(!(PINA&0b00000100));return '9';
     }

    if((PINA&0b00001000)==0)
	{
	while(!(PINA&0b00001000));return '/';
	}

	 PORTD=0b00001101;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

if((PINA&0b00000001)==0)
	{
	while(!(PINA&0b00000001));return '4';
	}
     

	if((PINA&0b00000010)==0)
	{
	while(!(PINA&0b00000010));return '5';
	}

	if((PINA&0b00000100)==0)
	{
	while(!(PINA&0b00000100));return '6';
     }

    if((PINA&0b00001000)==0)
	{
	while(!(PINA&0b00001000));return '*';
	}

	 PORTD=0b00001011;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00000001)==0)
	{
	while(!(PINA&0b00000001));return '1';
	}
     

	if((PINA&0b00000010)==0)
	{
	while(!(PINA&0b00000010));return '2';
	}

	if((PINA&0b00000100)==0)
	{
	while(!(PINA&0b00000100));return '3';
     }

    if((PINA&0b00001000)==0)
	{
	while(!(PINA&0b00001000));return '-';
	}



	 PORTD=0b00000111;
	_delay_ms(5);//have to give this 5ms time delay to check all four key...which one is press...otherwisw keypad wont work

	if((PINA&0b00000001)==0)
	{
	while(!(PINA&0b00000001));lcd_command(0x01);return 'k';
	}
     

	if((PINA&0b00000010)==0)
	{
	while(!(PINA&0b00000010));return '0';
	}

	if((PINA&0b00000100)==0)
	{
	while(!(PINA&0b00000100));return '=';
     }

    if((PINA&0b00001000)==0)
	{
	while(!(PINA&0b00001000));return '+';
	}

    /*PORTD=0b00001111;///////////////////////////////////////////////
	 _delay_ms(5);
	 if((PINA&0b11110000)==0)
	 {
	  while(!(PINA&0b11110000));return 'd';
	 }*/



    }


 }
