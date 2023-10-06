#ifndef LCD_CABECERA_h
#define LCD_CABECERA_h

#include "Arduino.h"
#include <LiquidCrystal_I2C.h>

void cabecera_lcd (LiquidCrystal_I2C& lcd);
void mensaje_iniciar_sistema (LiquidCrystal_I2C& lcd);
void mensaje_incio (LiquidCrystal_I2C& lcd);

#endif
