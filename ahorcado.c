#include <stdio.h>
#include "ahorcado.h"
#include <string.h>

// Verifica y cambia si el usuario ha acertado una letra
void iteracion(char c, char* res, char* palabra){
    for(int i=0 ; i < strlen(res); i++){
        if (palabra[i]==c){
            res[i] = c ;
        }
    }
}

//Inicia la palabra que el usuario tiene que adivinar con _
void palabra_(char* palabra, char* res){
    for(int i=0 ; i < (strlen(palabra)-1); i++){
        res[i]= '_' ;
    }
    

}

//Cuenta cuantas palabras tenemos en el archivo y asi poder calcular un numero aleatorio (es decir una palabra aleatoria de numero i en el fichero)
int num(FILE* fich){
    int i = 0;
    char temp[1000];
    while(fgets(temp, 10000, fich) !=  NULL){
        i++;
    }
    return i;
}

void obtener_palabra_indice(FILE* fich, int num_alea, char*palabra){
    rewind(fich);
    int i=0;
    char temp[10000];
    while( i< num_alea){
        fgets(temp, 10000, fich);
        i++;
    }
    fgets(palabra, 10000, fich);
}


