#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "lcd.h"
#include "button.h"
#include "drawing.h"

	int FLAG_L=0,FLAG_R=0;


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



void clear_press1()
{
	clear_1();
}

void clear_press2()
{
	clear_2();
}



void conf_interrupt()
{
	gipo_declare();
	P1IE |= (BIT6|BIT7);
	P1IFG &=~ (BIT6|BIT7);
	P1IES |= (BIT6|BIT7);

}

#pragma vector = PORT1_VECTOR

__interrupt void handler_port_interrupt(void)
{
	if(P1IFG & BIT6)
	{
		FLAG_L=1;
		P1IFG &=~ BIT6;
	}
	if(P1IFG & BIT7)
	{
		FLAG_R=1;
		P1IFG &=~ BIT7;
	}

}


