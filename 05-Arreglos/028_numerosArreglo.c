#include <stdio.h>

int main()
{
    //definir arreglo.
    int numerosArreglos [5];

    //modificar los valores del arreglo.
    numerosArreglos [0] = 10;
    numerosArreglos [4] = 50;

    //imprimir celdas de mi arreglo.
    printf("\n%d", numerosArreglos [0]);
    printf("\n%d", numerosArreglos[2]);
    printf("\n%d", numerosArreglos[4]);
    
    return 0;
}
