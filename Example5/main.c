#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "drawing.h"
#include "button.h"
int main(void) {
	WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();


    gipo_declare();

	 start_LCD();
	 int a=0,b=0;
	 	 while(1)
	 	{


	 			if(((P1IN&BIT6) == 0) && (a==0))
	 				{
	 					rectange_1();
	 					a=1;
	 				}
	 			/*else
	 			{
	 				clear_press1();
	 				a=0;
	 			}*/



	 			if( ((P1IN&BIT7)==0) && (b==0))
	 			{
	 				rectange_2();
	 				b=1;
	 			}
	 			/*else
	 			{
	 				clear_press2();
	 			b=0;
	 			}*/

	 			if(((P1IN&BIT6) != 0) && (a==1))
	 							{
	 				clear_press1();
	 				//rectange_2();
	 								a=0;
	 							}

	 			if( ((P1IN&BIT7)!=0) && (b==1))
	 					{
	 				clear_press2();
	 				//rectange_1();
	 						b=0;
	 					}

	 	}
}
