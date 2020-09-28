#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "drawing.h"
#include "button.h"

int main(void) {

	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();

    uint8_t flag1 = 0, flag2 = 0;
   // gipo_declare();

	 start_LCD();
	// int a=0,b=0;
	 conf_interrupt();

	 __enable_interrupt();

	 while(1)
	 	{

		 if((Copy_state1() == 1)&&(flag1 == 0))       // printing rectangle 1
		 {
			 rectange_1();
			 flag1 = 1;

		 }
		 if((Copy_state1() == 1)&&(flag1 == 1))     // clearing rectange 1
		 {
		     clear_1();
		     flag1 = 0;
		 }




		 if((Copy_state2() == 1)&&(flag2 == 0))   // printing rectangle 2
		 {
			 rectange_2();
			 flag2 = 1;

		 }

		 if((Copy_state2() == 1)&&(flag2 == 1))     // clearing rectange 2
	     {
		     clear_2();
		     flag2 = 0;

	      }



	 	}
}
