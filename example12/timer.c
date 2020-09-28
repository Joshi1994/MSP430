#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>
/*
 * timer.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Joshigasanth
 */


void Init_timer_no_interrupts(void)
{
    TACCR0 = 20000;                 // LOAD TACCRO WITH 20000D
    TACTL=0;                        //CLEARING TACTL
    TACTL|=TASSEL_2|ID_3;           //SELECT TIMER CLOCK SOURCE AS SMCLK / 8
}


void Timer_Delay_20ms(void)
{
    TACTL|=MC_1|TACLR;              //set timer clear bit and mode control as up mode
    while((TACTL&TAIFG)==0);        //while condition to wait until timer interrupt pending flag is set
    TACTL&=~TAIFG;                  //reset the timer interrupt flag bit
    TACTL&=~(MC1|MC0);              //halt timer / stop mode

}

void Timer_Delay_300ms(uint8_t delay)
{
    uint8_t i;

    for(i=0;i<delay;i++){
   Timer_Delay_20ms();
    }


}
