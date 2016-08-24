#include "gui.h"
#include "mbed.h"
#include "LCD_DISCO_F469NI.h"

AnalogIn ain0(A0);

Button::Button(){
	x=20;
	y=20;
	width=40;
	height=10;
	BackColor=LCD_COLOR_BLUE;
	TextColor=LCD_COLOR_YELLOW;
	caption=(uint8_t*)"Test";
	_lcd=NULL;
}

Button::~Button(){

}

void Button::Draw(LCD_DISCO_F469NI *lcd){
	_lcd=lcd;
	_lcd->SetFont(&Font24);
	_lcd->SetTextColor(BackColor);
    _lcd->FillRect(x+3, y+3, width, height);
    _lcd->SetBackColor(BackColor);
    _lcd->SetTextColor(TextColor);
    _lcd->DisplayStringAt(x+(width/2)-(_lcd->GetFont()->Width*strlen((char *)caption)/2),y+(int)height/2-_lcd->GetFont()->Height/2,caption,LEFT_MODE);
    _lcd->SetTextColor(LCD_COLOR_DARKGRAY);
    _lcd->FillRect(x, y, 3, height);
    _lcd->FillRect(x, y+height, width, 3);
    _lcd->SetTextColor(LCD_COLOR_LIGHTGRAY);
    _lcd->FillRect(x+width, y, 3, height);
    _lcd->FillRect(x, y, width, 3);
}

void Button::SetBackColor(uint32_t Color){
	BackColor=Color;
	Draw(_lcd);
}

void Button::SetTextColor(uint32_t Color){
	TextColor=Color;
	Draw(_lcd);
}

void Button::Press(void){
	_lcd->SetFont(&Font24);
	_lcd->SetTextColor(BackColor);
	_lcd->FillRect(x+3, y+3, width, height);
	_lcd->SetBackColor(BackColor);
	_lcd->SetTextColor(TextColor);
	_lcd->DisplayStringAt(x+(width/2)-(_lcd->GetFont()->Width*strlen((char *)caption)/2)+3,y+(int)height/2-_lcd->GetFont()->Height/2-3,caption,LEFT_MODE);

	_lcd->SetTextColor(LCD_COLOR_LIGHTGRAY);
    _lcd->FillRect(x, y, 3, height);
    _lcd->FillRect(x, y+height, width, 3);
    _lcd->SetTextColor(LCD_COLOR_DARKGRAY);
    _lcd->FillRect(x+width, y, 3, height);
    _lcd->FillRect(x, y, width, 3);
}

void Button::UnPress(void){
	_lcd->SetFont(&Font24);
	_lcd->SetTextColor(BackColor);
	_lcd->FillRect(x+3, y+3, width, height);
	_lcd->SetBackColor(BackColor);
	_lcd->SetTextColor(TextColor);
	_lcd->DisplayStringAt(x+(width/2)-(_lcd->GetFont()->Width*strlen((char *)caption)/2),y+(int)height/2-_lcd->GetFont()->Height/2,caption,LEFT_MODE);
	_lcd->SetTextColor(LCD_COLOR_DARKGRAY);
    _lcd->FillRect(x, y, 3, height);
    _lcd->FillRect(x, y+height, width, 3);
    _lcd->SetTextColor(LCD_COLOR_LIGHTGRAY);
    _lcd->FillRect(x+width, y, 3, height);
    _lcd->FillRect(x, y, width, 3);
}

Spectrum::Spectrum(){
	x=20;
	y=200;
	width=520;
	height=255;
	BackColor=LCD_COLOR_DARKGRAY;
	SpectColor=LCD_COLOR_LIGHTGREEN;
	memset(Data,0,512);
	for (uint16_t _j=0;_j<512;_j++)
		{
			Data[_j]=rand() % 255 +1;
		}
	_lcd=NULL;
}

Spectrum::~Spectrum(){

}

void Spectrum::Draw(LCD_DISCO_F469NI *lcd){
	_lcd=lcd;
	_lcd->SetFont(&Font24);
	_lcd->SetTextColor(BackColor);
    _lcd->FillRect(x, y, width, height);
}

void Spectrum::SetBackColor(uint32_t Color){
	BackColor=Color;
	Draw(_lcd);
}

void Spectrum::SetSpectColor(uint32_t Color){
	SpectColor=Color;
	Draw(_lcd);
}

void Spectrum::Refresh(){
	for (uint16_t _i=0;_i<512;_i++)
	{
		Data[_i]=ain0.read_u16()>>8;
		_lcd->SetTextColor(SpectColor);
		_lcd->DrawVLine(x+_i,y,Data[_i]);
		_lcd->SetTextColor(LCD_COLOR_TRANSPARENT);
		_lcd->DrawVLine(x+_i,y+Data[_i],255-Data[_i]);
	}
}
