#include <stdio.h>

int main()
{
    //Definimos la matriz.
    int matriz [2][3];

    // Modificamos los elementos de la matriz.

    matriz [0][0] = 100;
    matriz [1][0] = 300;
    matriz [1][2] = 120;
    
    //leemos los valores de la matriz. 
    
    printf("\n%d", matriz[0][0]);
    printf("\n%d", matriz[0][1]);
    printf("\n%d", matriz[0][2]);
    printf("\n%d", matriz[1][0]);
    printf("\n%d", matriz[1][1]);
    printf("\n%d", matriz[1][2]);
    return 0;
}
