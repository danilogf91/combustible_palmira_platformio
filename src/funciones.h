#ifndef funciones_h
#define funciones_h

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

void ENCODER_DATO (void);

void reiniciar_wdt (void);

void leer_dato_super_usuario (int estado_teclas);
void leer_dato_cambiar_clave (int estado_teclas);
void borrar ();

int ESTADO_SUPER_3 (void);
int ESTADO_SUPER_11 (void);

void borrar_galones ();

int ESTADO_CLAVE_41 (void);
int ESTADO_CLAVE_42 (void);
int ESTADO_CLAVE_43 (void);
int ESTADO_CLAVE_44 (void);
int ESTADO_CLAVE_45 (void);
int ESTADO_CLAVE_46 (void);
int ESTADO_CLAVE_47 (void);
int ESTADO_CLAVE_48 (void);
int ESTADO_CLAVE_49 (void);

void antigua_clave (char clave, int num_clave);
void ordenar_parametros_super (int pantalla_ordenar_super_usuario);
void validar_cedula (char dato_ced, int num_estado_ced);
void ingreso_movil (char dato_movil, int num_estado_movil);

void lee_clave_epprom ();
void ingrese_nueva_clave (char clave, int nueva_clave);
// void escribir_password ();
void borrar_cedula ();
void base_datos_protocolo (int CONDUCTOR_1, String factura_string, float galones_float);
// void borrar_ingrese_nueva_clave ();
void base_datos_gas (String nombre, String cedula, float galones, String movil);
void comparacion_ced (int num_estado_aux, String cedula_fila_aux, int bandera_cedula_aux);
void validar_clave (int num_estado_val_clave, int contador_clave_val_clave);
void borrar_clave ();
void borrar_movil ();
void comparacion_mov (int num_estado_mov, String fila_mov, int bandera_movil_aux);
void ingreso_galones_normal (char dato_galones, int num_estado_galones);
void ingreso_clave (char dato_clave, int num_estado_clave);
void cargar_galones (int num_estado_gal);
void num_factura (char dato_factura, int num_estado_factura);

void ingreso_galones_super_usuario (char dato_galones_super, int num_estado_galones_super);

#endif