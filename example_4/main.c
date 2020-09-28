#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "drawing.h"
#include "button.h"
void main(void) {

	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();


    gipo_declare();

	 start_LCD();
	while(1)
	{

			if(Press_button1())
				{
					rectange_1();

				}
			else
			{
				clear_press1();
			}



			if(Press_button2())
			{
				rectange_2();


			}
			else
			{
				clear_press2();
			}


	}

}
