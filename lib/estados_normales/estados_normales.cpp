#include "Arduino.h"
#include "estados_normales.h"
#include "LCD_MESSAGES.h"
#include "funciones_helpers.h"

int ESTADO_1 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                    // EJECUCION DEL ESTADO 1 PANTALLA DE INICIO 
{
  //digitalWrite(BOMBA, LOW);
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("   HIDROELECTRICA"));
  lcd.setCursor (0, 1);
  lcd.print (F (" PALMIRA - NANEGAL"));
  lcd.setCursor (0, 3);
  lcd.print (F ("BOMBA DE COMBUSTIBLE"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 1 -> "));          // BORRAR
#endif    
  pantalla = 1;
  dato = 0;
  return pantalla;
}

int ESTADO_2 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, unsigned long& tiempo_espera)                                    // EJECUCION DEL ESTADO 1 PANTALLA DE INGRESO CEDULA 
{
  tiempo_espera = millis ();                                  // ACTUALIZA TEMPORIZADOR    
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("INGRESE # DE CEDULA"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 2 -> "));          // BORRAR
#endif    
  pantalla = 2;
  dato = 0;
  return pantalla;
}

void ESTADO_3 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                  // EJECUCION INGRESO INCORRECTO CEDULA     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("CEDULA INCORRECTA!!!"));
  lcd.setCursor (0, 3);
  lcd.print (F ("INGRESE NUEVAMENTE"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 3 -> "));          // BORRAR   
#endif
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  delay (2000);                                  // RETARDO PARA VIZUALIZAR EL MENSAJE
  pantalla = 0;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA    
}


int ESTADO_4 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                    // EJECUCION INGRESO MÓVIL     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("INGRESE MOVIL: "));
#ifdef DEBUG 
  Serial.println (F ("pantalla 4 -> "));          // BORRAR   
#endif
  pantalla = 4;
  dato = 0;
  return pantalla;
}

void ESTADO_5 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                   // EJECUCION INGRESO INCORRECTO CEDULA     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("MOVIL INCORRECTO!!!"));
  lcd.setCursor (0, 3);
  lcd.print (F ("INGRESE NUEVAMENTE"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 5 -> "));          // BORRAR   
#endif
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  delay (2000);                                  // RETARDO PARA VIZUALIZAR EL MENSAJE
  pantalla = 0;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA    
}

int ESTADO_6 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                     // EJECUCION DEL ESTADO 6 PANTALLA DE INGRESO GALONES 
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("INGRESE GALONES:"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 6 -> "));          // BORRAR
#endif
  pantalla = 6;
  dato = 0;
  return pantalla;
}

void ESTADO_7 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                     // EJECUCION INGRESO INCORRECTO GALONES     
{
  cabecera_lcd (lcd);
  lcd.setCursor (0, 2);
  lcd.print (F ("# GALONES INCORRECTO"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 7 -> "));          // BORRAR   
#endif         
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  delay (2000);                                  // RETARDO PARA VIZUALIZAR EL MENSAJE
  pantalla = 0;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA    
}

int ESTADO_8 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, String nombre)                                     // EJECUCION DEL ESTADO 8 PANTALLA DE INGRESO CLAVE 
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print ("INGRESE SU CLAVE");  // IMPRIME EL NOMBRE DEL USUARIO EN EL LCD
  lcd.setCursor (0, 1);
  lcd.print (nombre);  // IMPRIME EL NOMBRE DEL USUARIO EN EL LCD
#ifdef DEBUG 
  Serial.println (F ("pantalla 8 -> "));          // BORRAR
#endif    
  pantalla = 8;
  dato = 0;
  return pantalla;
}

int ESTADO_9 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                    // EJECUCION INGRESO INCORRECTO CLAVE     
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("CLAVE INCORRECTA!!!"));
  lcd.setCursor (0, 1);
  lcd.print (F ("INGRESE NUEVAMENTE"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 9 -> "));          // BORRAR   
#endif           
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  delay (2000);                                  // RETARDO PARA VIZUALIZAR EL MENSAJE
  pantalla = 9;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA         
  return pantalla;
}


void ESTADO_10 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla)                                   // EJECUCION INGRESO USUARIO BLOQUEAD     
{
  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("USUARIO BLOQUEADO"));
#ifdef DEBUG 
  Serial.println (F ("pantalla 10 -> "));         // BORRAR   
#endif          
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  delay (2000);                                  // RETARDO PARA VIZUALIZAR EL MENSAJE
  pantalla = 0;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA    
}

int ESTADO_11 (int& pantalla, int pin)                                    // EJECUCION INGRESO INCORRECTO CLAVE     
{
#ifdef DEBUG 
  Serial.println (F ("pantalla 11 -> "));         // BORRAR   
#endif

  digitalWrite (pin, HIGH);

  pantalla = 11;                                  // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA         
  return pantalla;
}

int ESTADO_12 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, float& Num_gal_valido, float& galones_cargados)                                   // EJECUCION CARGANDO GALONES     
{
  if ( Num_gal_valido < 10 )
  {
    lcd.setCursor (4, 1);
    lcd.print (F ("="));
    lcd.setCursor (5, 1);
    lcd.print (galones_cargados);
  }
  if ( Num_gal_valido >= 10 && Num_gal_valido < 100 )
  {
    lcd.setCursor (5, 1);
    lcd.print (F ("="));
    lcd.setCursor (6, 1);
    lcd.print (galones_cargados);
  }
  if ( Num_gal_valido >= 100 && Num_gal_valido <= 500 )
  {
    lcd.setCursor (6, 1);
    lcd.print (F ("="));
    lcd.setCursor (7, 1);
    lcd.print (galones_cargados);
  }
#ifdef DEBUG 
  Serial.println (F ("pantalla 12 -> "));          // BORRAR   
#endif                         
  dato = 0;                                       // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO    
  pantalla = 12;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA         
  return pantalla;
}

int ESTADO_13 (LiquidCrystal_I2C& lcd, char& dato, int& pantalla, String& cedula_fila, String& movil_fila, float& galones_cargados
  , unsigned long& previousMillisWDT, const unsigned long& intervalWDT)                                   // EJECUCION CARGANDO GALONES     
{
  reiniciar_wdt (previousMillisWDT, intervalWDT);

  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("CEDULA"));
  lcd.setCursor (0, 1);
  lcd.print (( cedula_fila ));
  delay (3000);

  reiniciar_wdt (previousMillisWDT, intervalWDT);

  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("GALONES"));
  lcd.setCursor (0, 1);
  lcd.print (( galones_cargados ));
  delay (3000);

  reiniciar_wdt (previousMillisWDT, intervalWDT);

  lcd.clear ();
  lcd.setCursor (0, 0);
  lcd.print (F ("MOVIL"));
  lcd.setCursor (0, 1);
  lcd.print (( movil_fila ));
  delay (3000);

#ifdef DEBUG 
  Serial.println (F ("pantalla 13 -> "));          // BORRAR    
#endif    
  dato = 0;                                        // DATO SE CARGA CON CERO PARA QUE NO INGRESE DE NUEVO        
  pantalla = 13;                                   // CARGA EL VALOR DE 0 PORQUE NO IMPORTA EN ESTA ETAPA         
  return pantalla;
}
