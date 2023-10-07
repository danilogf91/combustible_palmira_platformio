#ifndef estados_normales_h
#define estados_normales_h

#include "Arduino.h"
#include <LiquidCrystal_I2C.h>


int ESTADO_1 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_2 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, unsigned long& tiempo_espera);
void ESTADO_3 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_4 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
void ESTADO_5 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_6 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
void ESTADO_7 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_8 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, String nombre);
int ESTADO_9 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
void ESTADO_10 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla);
int ESTADO_11 (int& pantalla, int pin);
int ESTADO_12 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, float& Num_gal_valido, float& galones_cargados);
int ESTADO_13 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, String& cedula_fila, String& movil_fila, float& galones_cargados
  , unsigned long& previousMillisWDT, const unsigned long& intervalWDT);

#endif
