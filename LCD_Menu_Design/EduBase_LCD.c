/**
 * @file EduBase_LCD.c
 *
 * @brief Source code for the EduBase_LCD driver.
 *
 * This file contains the function definitions for the EduBase_LCD driver.
 * It interfaces with the EduBase Board 16x2 Liquid Crystal Display (LCD). 
 * The following pins are used:
 *  - Data Pin 4      [D4]  (PA2)
 *  - Data Pin 5      [D5]  (PA3)
 *  - Data Pin 6      [D6]  (PA4)
 *  - Data Pin 7      [D7]  (PA5)
 *	- LCD Enable      [E]   (PC6)
 *  - Register Select [RS]  (PE0)
 *
 * @note For more information regarding the LCD, refer to the HD44780 LCD Controller Datasheet.
 * Link: https://www.sparkfun.com/datasheets/LCD/HD44780.pdf
 *
 * @author Aaron Nanas
 */
 
#include "EduBase_LCD.h"

void EduBase_LCD_Ports_Init(void)
{

}

void EduBase_LCD_Pulse_Enable(void)
{

}

void EduBase_LCD_Write_4_Bits(uint8_t data, uint8_t control_flag)
{

}

void EduBase_LCD_Send_Command(uint8_t command)
{

}

void EduBase_LCD_Send_Data(uint8_t data)
{

}

void EduBase_LCD_Init(void)
{

}

void EduBase_LCD_Clear_Display(void)
{

}

void EduBase_LCD_Return_Home(void)
{

}

void EduBase_LCD_Set_Cursor(uint8_t col, uint8_t row)
{

}

void EduBase_LCD_Disable_Display(void)
{

}

void EduBase_LCD_Enable_Display(void)
{

}

void EduBase_LCD_Disable_Cursor(void)
{

}

void EduBase_LCD_Enable_Cursor(void)
{

}

void EduBase_LCD_Disable_Cursor_Blink(void)
{

}

void EduBase_LCD_Enable_Cursor_Blink(void)
{

}

void EduBase_LCD_Scroll_Display_Left(void)
{

}

void EduBase_LCD_Scroll_Display_Right(void)
{

}

void EduBase_LCD_Left_to_Right(void)
{

}

void EduBase_LCD_Right_to_Left(void)
{

}

void EduBase_LCD_Create_Custom_Character(uint8_t location, uint8_t character_buffer[])
{

}

void EduBase_LCD_Display_String(char* string)
{

}

void EduBase_LCD_Display_Integer(int value)
{

}

void EduBase_LCD_Display_Double(double value)
{

}
