#include <stdio.h>
int main()
{
    int miNumero;
    printf("Introduzca un Numero: ");
    scanf("%d", &miNumero);

    if (miNumero > 0)
    {
        printf("\nEl numero es positivo: %d", miNumero);
    }

    else{
        
        if (miNumero == 0)
        {
            printf("\nSu numero es 0");
        }
        else{
            printf("\nEl numero es negativo: %d", miNumero);
        
        }
    }

    return 0;
}
