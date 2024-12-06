#include <stdio.h>

int main()
{
    //ciclo while
    //imprimir los numeros de X a Y.
    int numInit; 
    int numTerm;
    printf("Ingrese desde que numero desea Comenzar: ");
    scanf("%d", &numInit);
    printf("Ingrese desde que numero desea Finalizar: ");
    scanf("%d", &numTerm);
    
    if (numInit < numTerm)
    {    
        //while.
        while (numInit <= numTerm)
        {
            printf("\n%d", numInit);
            numInit++; /* sumamos de 1 en 1 
            (si no especificamos esta parte del codigo)
            entramos en un bucle infinito.*/
        }                
    }
    else
    {
        printf("\nNo se puede realizar..");
    }
    

    return 0;
}
