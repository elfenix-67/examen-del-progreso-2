#include <stdio.h>
#include <string.h>
#include "funcion.h"
void palabras(char *texto,char **longitud_alta, char *palabra_larga, char *palabra_corta, char *logitud_corta){
     int i = 0, start = 0, len = 0;
    *longitud_alta = 0;
    *longitud_corta = 1000;
    while (texto[i] != '\0'){
        if (texto [i] == ' ') {
            i++;
            start = i;
            continue;
        }
        len=0;
        while (texto[i] != ' ' && texto[i] != '\0'){
        len++;
        i++;
        }
        if (len > *longitud_alta){
            *longitud_alta = len;
            for (int j = 0; j< len; j++) {
            }
            longitud_alta[len]='\0';
        }
        if (len < *logitud_corta){
            *logitud_corta = len;
            for (int j = 0; j < len; j++){
                palabra_corta[j] = texto[start + j];
            }
            logitud_corta[len] = '\0';
        }
        start = i;
        
    }
}

