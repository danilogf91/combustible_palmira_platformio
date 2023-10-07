#ifndef estados_super_h
#define estados_super_h

#include "Arduino.h"
#include <LiquidCrystal_I2C.h>


int ESTADO_SUPER_1 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_2 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_4 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_5 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
void ESTADO_SUPER_6 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_7 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_8 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_9 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_10 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_SUPER_12 (char& dato, int& pantalla);

#endif
