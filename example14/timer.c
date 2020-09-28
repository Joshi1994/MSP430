#include <msp430fg4619.h>

#include <stdint.h>

/*
 * timer.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Joshigasanth
 */


void Init_timer_interrupts(void)
{
    TACCR0 = 10000;                 // LOAD TACCRO WITH 10000D
    TACTL=0;                        //CLEARING TACTL
    TACTL|=TASSEL_2|ID_3;           //SELECT TIMER CLOCK SOURCE AS SMCLK / 8
}


void Run_Timer_Interrupt_TAIFG(void)
{
	TACTL|=MC_1|TACLR|TAIE;
}

void Init_timer_interrupt_10ms_CCIFG()
{
		TACCR0 = 10000;                 // LOAD TACCRO WITH 10000D
	    TACTL=0;                        //CLEARING TACTL
	    TACTL|=TASSEL_2|ID_3;           //SELECT TIMER CLOCK SOURCE AS SMCLK / 8
	    TACCTL0|=CCIE;
}

void Run_timer_interrupt_CCIFG()
{
	TACTL &=~TAIFG;
	TACTL|= MC_1|TACLR;
}


#pragma vector=TIMER0_A0_VECTOR
__interrupt void TimerA0_ISR(void)
{

    	  P10OUT^=BIT6;

}
