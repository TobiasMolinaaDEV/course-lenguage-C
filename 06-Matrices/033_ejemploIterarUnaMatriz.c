#include <stdio.h>
#define renglones 2
#define columnas 3

int main()
{
    int matriz [renglones][columnas]={{100,200,300},{400,500,600}};

    //ciclo for anidado par trabajar la matriz.
    printf("---Iteramos la matriz---");
    for (int ren = 0; ren < renglones; ren++)
    {
        printf("\nRenglon (Pivote): %d", ren);
        for (int col = 0; col < columnas; col++)
        {
            printf("\nMatriz [%d] [%d] = %d", ren, col, matriz [ren][col]);
        }
        printf("\n");    
        
    }
    

    return 0;
}
