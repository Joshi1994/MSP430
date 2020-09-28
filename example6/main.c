#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "drawing.h"
#include "button.h"
int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();


   // gipo_declare();

	 start_LCD();
	 //int a=0,b=0;
	 conf_interrupt();

	 __enable_interrupt();

	 while(1)
	 	{



	 	}
}
