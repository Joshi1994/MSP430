#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "lcd.h"

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    XT2_Init();
    GPIO_Init();
    LCD_InitSPI();
	LCD_Settings();
	LCD_Clear();
	while(1)
	{
	 LCD_FillArea(0,20,0,100,LCD_COLOR_BLUE);
	 LCD_FillArea(0,50,0,50,LCD_COLOR_RED);
	 LCD_FillArea(0,100,0,20,LCD_COLOR_YELLOW);
	}

}
