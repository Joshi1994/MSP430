#include <msp430fg4619.h>
/*
 * port.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Joshigasanth
 */


void Toggle()
{
    P10OUT^=BIT6;
}
