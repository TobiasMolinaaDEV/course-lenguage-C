#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Ciclo do while.
    // repetir hasta que sea un valor positivo.
    int numero;
    bool condicion;
    do
    {
        printf("Proporcione un numero positivo: ");
        scanf("%d", &numero);
        condicion = numero > 0;
    
    } while (!condicion);
    
        // termina el ciclo. 
        printf("\nValor positivo: %d", numero);
    
    return 0;
}
