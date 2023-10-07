#include "Arduino.h"
#include "LCD_MESSAGES.h"

void cabecera_lcd (LiquidCrystal_I2C& lcd)
{
  lcd.clear ();                                                    // BORRAR PANTALLA DE LCD
  lcd.setCursor (0, 0);                                            // POSICIONA EL CURSOR EL LA PRIMERA FILA DEL LCD
  lcd.print (F ("   HIDROELECTRICA"));                              // IMPRIME MENSAJE
  lcd.setCursor (0, 1);                                            // POSICIONA EL CURSOR EL LA SEGUNDA FILA DEL LCD
  lcd.print (F ("  PALMIRA - NANEGAL"));                            // IMPRIME MENSAJE
}

void mensaje_iniciar_sistema (LiquidCrystal_I2C& lcd)
{
  lcd.clear ();                                                    // BORRAR PANTALLA DE LCD
  lcd.setCursor (0, 0);                                            // POSICIONA EL CURSOR EL LA PRIMERA FILA DEL LCD
  lcd.print (F ("Presione Una Tecla"));                                // IMPRIME MENSAJE
  lcd.setCursor (0, 1);                                            // POSICIONA EL CURSOR EL LA SEGUNDA FILA DEL LCD
  lcd.print (F ("Para iniciar"));                                     // IMPRIME MENSAJE
  lcd.setCursor (0, 2);                                            // POSICIONA EL CURSOR EL LA SEGUNDA FILA DEL LCD
  lcd.print (F ("El Sistema"));                                     // IMPRIME MENSAJE
}

void mensaje_incio (LiquidCrystal_I2C& lcd)
{
  lcd.clear ();                                                    // BORRAR PANTALLA DE LCD
  lcd.setCursor (0, 0);                                            // POSICIONA EL CURSOR EL LA PRIMERA FILA DEL LCD
  lcd.print (F ("   HIDROELECTRICA"));                              // IMPRIME MENSAJE
  lcd.setCursor (0, 1);                                            // POSICIONA EL CURSOR EL LA SEGUNDA FILA DEL LCD
  lcd.print (F ("  PALMIRA - NANEGAL"));                            // IMPRIME MENSAJE

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO.");                                        // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO..");                                       // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO...");                                      // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO....");                                     // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO.....");                                    // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO......");                                   // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO.......");                                  // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO........");                                 // IMPRIME MENSAJE
  delay (200);                                                     // RETARDO ESPERAR 500 MILISEGUNDOS

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO.........");                                // IMPRIME MENSAJE
  delay (200);

  lcd.setCursor (0, 3);                                            // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO..........");                               // IMPRIME MENSAJE    
  delay (200);

  lcd.setCursor (0, 3);                                             // POSICIONA EL CURSOR EN LA TERCERA FILA DEL LCD
  lcd.print ("INICIANDO...........");                               // IMPRIME MENSAJE    
  delay (200);
}

