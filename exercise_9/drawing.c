#include <msp430fg4619.h>

#include "system.h"
#include <stdint.h>

#include "lcd.h"
uint8_t rec_1=0,rec_2=0;
void start_LCD(void)
{
	LCD_InitSPI();
		LCD_Settings();
		LCD_Clear();
}
void rectange_1(void)
{
	 LCD_FillArea(0,20,0,100,LCD_COLOR_BLUE);
	 rec_1=1;
}
void rectange_2(void)
{
	 LCD_FillArea(0,50,0,50,LCD_COLOR_RED);
	 rec_2=1;

}
void rectange_3(void)
{
	 LCD_FillArea(0,100,0,20,LCD_COLOR_GREEN);

}



void clear_1(void)
{
 LCD_FillArea(0,20,0,100 ,LCD_COLOR_WHITE);
}


void clear_2(void)
{
 LCD_FillArea(0, 50, 0, 50 ,LCD_COLOR_WHITE);
}
