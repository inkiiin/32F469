#include "mbed.h"
#include "LCD_DISCO_F469NI.h"
#include "gui/gui.h"

LCD_DISCO_F469NI lcd;

DigitalOut led1(LED1);
uint32_t cColor=0;
char text[255];

int main()
{    
    led1 = 1;
  
    lcd.DisplayStringAt(0, LINE(1), (uint8_t *)"MBED EXAMPLE", CENTER_MODE);
    wait(1);
  
    Button btn1;
    btn1.width=150;
    btn1.height=40;

    Button btn2;
    btn2.x=20;
    btn2.y=80;
    btn2.width=150;
    btn2.height=40;
    btn2.caption=(uint8_t *)"button2";

    Spectrum spec1;

    spec1.Draw(&lcd);
    spec1.Refresh();
    btn1.Draw(&lcd);
    btn2.Draw(&lcd);

    while(1)
    {
      wait(0.1);
      spec1.Refresh();



    }
}

