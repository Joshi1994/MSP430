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

#pragma vector=TIMERA1_VECTOR
__interrupt void TimerA1_ISR(void)
{
    uint16_t copy_taiv;
    copy_taiv= TAIV;
    if(copy_taiv == TAIV_TAIFG)
    {
    	  P10OUT^=BIT6;
    }
}
