#include <stdio.h>
#include <string.h>
#include "funcion.h"
int main(){
    char texto[100];
    char *palabra_larga[100], *palabra_corta[100];
    int longitud_alta = 0, longitud_corta = 0;
    printf("ingrese un texto:");
    scanf("%[^\n]", texto);
    palabras(texto, &longitud_alta, &longitud_corta, palabra_larga, palabra_corta);
    printf("la palabra con mas caracteres es: %s (%d caracteres)\n"), longitud_alta, palabra_larga;
    printf("la palabra con menos caracteres es:%s  (%d caracteres)\n"), longitud_corta, palabra_corta;
    
return 0;
}
