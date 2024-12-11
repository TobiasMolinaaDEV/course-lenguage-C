#include <stdio.h>

int main()
{
    // definir un arreglo - sintaxis de un arreglo. 
    int numerosArreglo [] = {100,200,300,400,500};

    int largoArreglo;

    int tamanioArreglo = sizeof (numerosArreglo);
    printf("\nEl largo del arreglo es: %d", tamanioArreglo);


    int largoDeUnElemento = sizeof(numerosArreglo [0]);
    printf("\nEl tamaño en memoria de cada celda es de: %d bit", largoDeUnElemento);

    largoArreglo = tamanioArreglo / largoDeUnElemento;
    printf("\nLargo total del arreglo %d", largoArreglo);

    printf("\nIteramos los valores del arreglo: ");
    for ( int i = 0; i < largoArreglo; i++)
    {
        printf("\nArreglo [%d] = %d", i, numerosArreglo [i]);
    }

    return 0;
}
