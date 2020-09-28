#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "drawing.h"

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();

	 start_LCD();
	while(1)
	{


	 rectange_1();
	 rectange_2();
		rectange_3();

	}

}
