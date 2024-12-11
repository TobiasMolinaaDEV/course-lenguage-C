#include <stdio.h>

int main()
{
    //introducir valores de manera dinamica al arreglo.
    int numeroElemento;
    printf("Introduzca el tamaño del arreglo: ");
    scanf("%d", &numeroElemento);

    //CREAMOS EL ARREGLO
    int numeros [numeroElemento];

    //Solicitamos al usuario los valores dentro del arreglo. 
    
    for (int i = 0; i < numeroElemento; i++)
    {
        printf("\nArreglo[%d]= ", i);
        scanf("%d", &numeros[i]);
    }
    
    //imprimir

    for (int i = 0; i < numeroElemento; i++)
    {
        printf("\nArreglo [%d] = %d", i, numeros[i]);
    }
    

    return 0;
}

