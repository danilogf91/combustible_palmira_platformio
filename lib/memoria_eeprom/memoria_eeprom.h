#ifndef memoria_eeprom_h
#define memoria_eeprom_h

#include "Arduino.h"

void escribir_password (char* clave);
void borrar_ingrese_nueva_clave (char* nueva_camb_clave, int& nueva_erase_lcd, int& nueva_cont_clave, String& nueva_Camb_clave);

#endif
