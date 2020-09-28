#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "lcd.h"

void start_LCD(void)
{
	LCD_InitSPI();
		LCD_Settings();
		LCD_Clear();
}
void rectange_1(void)
{
	 LCD_FillArea(0,20,0,100,LCD_COLOR_BLUE);

}
void rectange_2(void)
{
	 LCD_FillArea(0,50,0,50,LCD_COLOR_RED);

}
void rectange_3(void)
{
	 LCD_FillArea(0,100,0,20,LCD_COLOR_GREEN);

}

