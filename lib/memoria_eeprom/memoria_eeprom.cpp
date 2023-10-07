#include "Arduino.h"
#include "memoria_eeprom.h"
#include  <EEPROM.h>

void borrar_ingrese_nueva_clave (char* nueva_camb_clave, int& nueva_erase_lcd, int& nueva_cont_clave, String& nueva_Camb_clave)
{
  nueva_camb_clave[0] = 0;
  nueva_camb_clave[1] = 0;
  nueva_camb_clave[2] = 0;
  nueva_camb_clave[3] = 0;
  nueva_erase_lcd = 0;
  nueva_cont_clave = 0;
  nueva_Camb_clave = "";
}

void escribir_password (char* clave)
{

  EEPROM.write (0, clave[0]);
  EEPROM.write (1, clave[1]);
  EEPROM.write (2, clave[2]);
  EEPROM.write (3, clave[3]);

  String prueba = String (clave[0]) + String (clave[1]) + String (clave[2]) + String (clave[3]);

#ifdef DEBUG 
  Serial.println ("");
  Serial.println ("****** MEMORIA EEPROM DEBUG ******");
  Serial.println ("ESCRIBIR EN MEMORIA EEPROM");
  Serial.print ("CLAVE INGRESADA EN MEMORIA EPPROM ");
  Serial.println (prueba);
  Serial.println ("");
#endif           
  delay (2000);
}