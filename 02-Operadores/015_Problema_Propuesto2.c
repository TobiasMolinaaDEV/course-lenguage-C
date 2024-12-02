// Valor Dentro del Rango
// 1. Pedir al usuario que nos proporcione un numero y determinar 
//    si está dentro de los parametros entre 0 y 5.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int dato;
    int minimo = 0, maximo = 5;
    printf("Proporcina un valor entre el 0 y 5:");
    scanf("%d", &dato);

    bool dentroRango = dato >= minimo  &&dato <= maximo; 

    printf("\nValor dentro del rango?: %d", dentroRango);
    return 0;
}

