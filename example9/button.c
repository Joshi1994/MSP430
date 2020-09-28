#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "lcd.h"
#include "button.h"
#include "drawing.h"

static int FLAG_L=0,FLAG_R=0;

uint8_t	aInt;
uint8_t	bInt;

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
uint8_t Copy_state1()
{
	uint8_t copy_Flag_l = 0;

	uint8_t status;
	copy_Flag_l = FLAG_L;
	status = (P1IE & BIT6);
	FLAG_L = 0;
	P1IE |= status;


	return copy_Flag_l;
}

uint8_t Copy_state2()
{
	uint8_t copy_Flag_R = 0;
	uint8_t status;
	copy_Flag_R = FLAG_R;
	status = (P1IE & BIT7);
	FLAG_R = 0;
	P1IE |= status;
	return copy_Flag_R;
}

void clear_rec_1()
{
	if(rec_1 == 1)
	{
		clear_press1();
	}
}
void clear_rec_2()
{
	if(rec_2 == 1)
	{
		clear_press2();
	}
}


//--------------------------------------

void rec_clr1()
{
	 uint8_t flag1 = 0;
    if(flag1 == 0)
    {
    	rectange_1();
    	flag1=1;
    }
    else
    {
   	 clear_press1();
   	 flag1=0;
    }
}


void rec_clr2()
{
	 uint8_t flag2 = 0;;
    if(flag2 == 0)
    {
    	rectange_2();
    	flag2=1;
    }
    else
    {
   	 clear_press2();
   	 flag2=0;
    }
}




#pragma vector = PORT1_VECTOR

__interrupt void handler_port_interrupt(void)
{
	if(P1IFG & BIT6)
	{
		FLAG_L=1;
		P1IFG &=~ BIT6;
		aInt=1;

	}
	if(P1IFG & BIT7)
	{
		FLAG_R=1;
		P1IFG &=~ BIT7;
		bInt=1;
	}

}


