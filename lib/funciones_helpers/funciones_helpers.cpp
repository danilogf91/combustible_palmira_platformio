#include "Arduino.h"
#include "funciones_helpers.h"
#include <avr/wdt.h>


void reiniciar_wdt (unsigned long& previousMillisWDT, const unsigned long& intervalWDT)
{

  unsigned long currentMillis = millis ();

  if ( currentMillis - previousMillisWDT >= intervalWDT )
  {
    previousMillisWDT = currentMillis;
    wdt_reset ();

#ifdef DEBUG 
    Serial.println ("");
    Serial.println ("****** WATCH DOG TIMER ******");
    Serial.print ("Tiempo = ");
    Serial.print (intervalWDT / 1000);
    Serial.println (" s");
    Serial.println ("REINICIADO");
#endif 
  }
}


char TecladoPC (int num)
{

  switch ( num )
  {
    case 8:
      return 'i';                       // Izquierda
      break;
    case 10:
      return 'B';                       // BAJAR
      break;
    case 11:
      return 'A';                       // SUBIR
      break;
    case 13:
      return 'C';                       // ENTRAR
      break;
    case 21:
      return 'd';
      break;

    case 25:
      return 'F';                      // RePag
      break;

    case 26:
      return 'D';                      // AvPag
      break;

    case 42:
      return '*';
      break;
    case 43:
      return '+';
      break;
    case 45:
      return '-';
      break;

    case 46:
      return '%';         // PUNTO DECIMAL
      break;
    case 47:
      return '/';
      break;
    case 48:
      return '0';
      break;
    case 49:
      return '1';
      break;
    case 50:
      return '2';
      break;
    case 51:
      return '3';
      break;
    case 52:
      return '4';
      break;
    case 53:
      return '5';
      break;
    case 54:
      return '6';
      break;
    case 55:
      return '7';
      break;
    case 56:
      return '8';
      break;
    case 57:
      return '9';
      break;
    case 127:
      return '=';           // BORRAR
      break;
    default:
      return 'x';           // UNA TECLA CUALQUIERA
      break;
  }
}
