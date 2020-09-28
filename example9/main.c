#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "drawing.h"
#include "button.h"

int main(void) {

	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();

    static uint8_t flag1 = 0;
    static uint8_t	flag2 = 0;
   // gipo_declare();

	 start_LCD();
	// int a=0,b=0;
	 conf_interrupt();

	 __enable_interrupt();

	 while(1)
	 	{

		 if(Copy_state1() == 1)
		 {
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



		 if(Copy_state2() == 1)
		 {
			 rec_clr2();
		 }




	 	}
}
