#include <stdio.h>

int main()
{
    int numIngresado;
    int tablaMAX = 12;
    int resultado;

    printf("Que tabla desea?: ");
    scanf("%d", &numIngresado);
    printf("\nTabla del: %d", numIngresado);

    for (int numSugerido = 0; numSugerido <= tablaMAX; numSugerido++)
    {
        resultado = numIngresado * numSugerido; 
        printf("\nEste numero %d * %d es = %d", numIngresado, numSugerido, resultado);

    }
    
    return 0;
}
