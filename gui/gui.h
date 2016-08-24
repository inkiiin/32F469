#ifndef _GUI_H_
#define _GUI_H_

#include "mbed.h"
#include "LCD_DISCO_F469NI.h"

class Button{
public:
	int x;
	int y;
	int width;
	int height;
	uint8_t *caption;
	uint32_t BackColor;
	uint32_t TextColor;

	Button();
	~Button(void);
	void Draw(LCD_DISCO_F469NI *lcd);
	void SetBackColor(uint32_t Color);
	void SetTextColor(uint32_t Color);
	void Press(void);
	void UnPress(void);
private:
	LCD_DISCO_F469NI *_lcd;
};

class Spectrum{
public:
	int x;
	int y;
	int width;
	int height;
	uint32_t BackColor;
	uint32_t SpectColor;
	uint16_t Data[512];

	Spectrum();
	~Spectrum(void);
	void Draw(LCD_DISCO_F469NI *lcd);
	void Refresh(void);
	void SetBackColor(uint32_t Color);
	void SetSpectColor(uint32_t Color);
private:
	LCD_DISCO_F469NI *_lcd;
};

#endif
