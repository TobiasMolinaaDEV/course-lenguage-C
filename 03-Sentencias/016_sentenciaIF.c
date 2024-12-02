#include <stdio.h>


int main()
{
    printf("Proporciona un numero: ");
    int miNumero;
    scanf("%d", &miNumero);


    if (miNumero > 0)
    {
        printf("\nValor Positivo: %d", miNumero);
    }
    
    return 0;
}
