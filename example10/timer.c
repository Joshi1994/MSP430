#include <stdint.h>
/*
 * timer.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Joshigasanth
 */


void sw_delay_100ms(uint8_t delay)
{
    uint16_t i,j;

    for(i=0;i<delay;i++)
     for(j=0;j<1000;j++);

}
