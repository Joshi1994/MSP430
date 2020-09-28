#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "lcd.h"
#include "button.h"


void gipo_declare()
{
	P1SEL&=~BIT6;
	P1SEL&=~BIT7;

	P1DIR&=~BIT6;
    P1DIR&=~BIT7;

}


int Press_button1()
{

	return ((P1IN&BIT6)==0);
}


int Press_button2()
{

	return ((P1IN&BIT7)==0);
}



int clear_press1()
{
	clear_1();
}

int clear_press2()
{
	clear_2();
}
