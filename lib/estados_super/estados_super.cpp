#include "Arduino.h"
#include "LCD_MESSAGES.h"
#include "estados_super.h"
#include <LiquidCrystal_I2C.h>

int ESTADO_SUPER_1 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION MENU SUPER USUARIO ITEM SELECCIONADO VER # DE GALONES 
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("--> NUMERO GALONES"));
  lcd.setCursor (0, 3);
  lcd.print (F ("    NUEVA CARGA   "));

#ifdef DEBUG 
  Serial.println (F ("pantalla 21 -> "));         // BORRAR
#endif      

  pantalla = 21;
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO
  return pantalla;
}

int ESTADO_SUPER_2 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION MENU SUPER USUARIO ITEM SELECCIONADO NUEVA CARGA  
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("    NUMERO GALONES"));
  lcd.setCursor (0, 3);
  lcd.print (F ("--> NUEVA CARGA   "));

#ifdef DEBUG 
  Serial.println (F ("pantalla 22 -> "));         // BORRAR    
#endif      
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO   
  pantalla = 22;
  return pantalla;
}

int ESTADO_SUPER_4 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION INGRESO DATOS FACTURA     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("INGRESE FACTURA"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 24 -> "));         // BORRAR    
#endif     
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  pantalla = 24;
  return pantalla;
}

int ESTADO_SUPER_5 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION INGRESO DATOS GALONES     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("INGRESE GALONES:"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 25 -> "));         // BORRAR   
#endif    
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  pantalla = 25;
  return pantalla;
}

void ESTADO_SUPER_6 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION INGRESO INCORRECTO GALONES     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("# GAL INCORRECTO!!!"));
  lcd.setCursor (0, 3);
  lcd.print (F ("INGRESE NUEVAMENTE"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 26 -> "));         // BORRAR   
#endif     
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  delay (2000);                                  // RETARDO PARA VIZUALIZAR EL MENSAJE
  pantalla = 0;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA    
}

int ESTADO_SUPER_7 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION MENU SUPER USUARIO ITEM SELECCIONADO CHOFER # 1  
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("--> CEVALLOS E."));
  lcd.setCursor (0, 1);
  lcd.print (F ("    MORENO W."));
#ifdef DEBUG 
  Serial.println (F ("pantalla 27 -> "));         // BORRAR
#endif    
  pantalla = 27;
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO
  return pantalla;
}

int ESTADO_SUPER_8 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION MENU SUPER USUARIO ITEM SELECCIONADO CHOFER # 2 
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("    CEVALLOS E."));
  lcd.setCursor (0, 1);
  lcd.print (F ("--> MORENO W."));
#ifdef DEBUG 
  Serial.println (F ("pantalla 28 -> "));         // BORRAR    
#endif    
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO   
  pantalla = 28;
  return pantalla;
}

int ESTADO_SUPER_9 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION MENU SUPER USUARIO ITEM SELECCIONADO RESPONSABLE # 1  
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("--> BELTRAN J."));
  lcd.setCursor (0, 1);
  lcd.print (F ("    JOSE A. A."));
#ifdef DEBUG 
  Serial.println (F ("pantalla 29 -> "));         // BORRAR
#endif    
  pantalla = 29;
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO
  return pantalla;
}

int ESTADO_SUPER_10 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                              // EJECUCION MENU SUPER USUARIO ITEM SELECCIONADO RESPONSABLE # 2 
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("    BELTRAN J."));
  lcd.setCursor (0, 1);
  lcd.print (F ("--> JOSE A. A."));
#ifdef DEBUG 
  Serial.println (F ("pantalla 30 -> "));         // BORRAR    
#endif    
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO   
  pantalla = 30;
  return pantalla;
}

int ESTADO_SUPER_12 (char& dato, int& pantalla)                             // ESCRIBE EN LA BASE DE DATOS
{
#ifdef DEBUG 
  Serial.println (F ("pantalla 32 -> "));         // BORRAR    
#endif         
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO   
  pantalla = 32;
  return pantalla;
}