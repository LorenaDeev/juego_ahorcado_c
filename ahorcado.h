#ifndef _AHORCADO_H_
#define _AHORCADO_H_


#include <stdio.h>

// Verifica y cambia si el usuario ha acertado una letra
void iteracion(char c, char* res, char* palabra);

//Inicia la palabra que el usuario tiene que adivinar con _
void palabra_(char* palabra, char* res);

//Cuenta cuantas palabras tenemos en el archivo y asi poder calcular un numero aleatorio (es decir una palabra aleatoria de numero i en el fichero)
int num(FILE* fich);

void obtener_palabra_indice(FILE* fich, int num_alea, char*palabra);






#endif /*_AHORCADO_H_*/
