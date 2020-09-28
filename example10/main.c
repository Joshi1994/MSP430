#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "timer.h"


int main(void) {

    WDTCTL = WDTPW | WDTHOLD;   // Stop watchdog timer

    XT2_Init();
    GPIO_Init();




     while(1)
        {


         P10OUT^=BIT6;						//toggles  the pin 10.6
         sw_delay_100ms(200);     			// create delay


        }
}
