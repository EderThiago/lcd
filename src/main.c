#include"lcd.h"
#include"stm32f103xb.h"
#include "delay.h"
int main(void){
    LCD_t* lcd;
    lcd_init(lcd);
    lcd_backlight();
    while(1){

    }
}