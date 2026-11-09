#include <stdio.h>
#include "ahorcado.h"
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {

    FILE *fich = fopen(argv[1], "r");
    
    int num_palabras = num(fich);

    srand(time(NULL));
    int num_alea = rand() % num_palabras;

    char palabra[1000];
    char res[1000];
    char letra;
    bool victoria = false; 

    obtener_palabra_indice(fich, num_alea, palabra);


    palabra_(palabra,res);
    printf("Bienvenida/o al juego del ahorcado!!\n");
    printf("%s\n",res);
    printf("Esta es tu palabra, a ver si la adivinas!! Tienes 10 intentos\n");
    printf("Aviso: solo sirve con minúsculas \n");
    printf("Di una letra\n");

    for(int i=0; i<= 10 ; i++){
        scanf(" %c", &letra);
        iteracion(letra, res,palabra);
        if( strchr(res, '_')!= NULL ){
            printf("Casi, dime otra letra!\n");
            printf("%s", res);
        }else{
            printf("YEYY LA ADIVINASTE!! :)");
            victoria = true;
            return 0;
        }
    }
    if(victoria ==false ){
        printf("Te has quedado sin intentos, perdiste!!");
        printf("La palabra era: %s", palabra);
    }

    
    return 0;
}