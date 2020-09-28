#include <msp430fg4619.h>

#include "system.h"


#include "timer.h"


int main(void) {

    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer

    XT2_Init();
    GPIO_Init();
    __enable_interrupt();
    Init_timer_interrupt_10ms_CCIFG();
    Run_timer_interrupt_CCIFG();
    while(1)
    {

    }

}
