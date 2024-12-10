// Ejercicio Acumulador Suma.
// while y do while.

#include <stdio.h>
int main()
{
    int numero = 1; 
    int acumuladorSuma = 0;

    do
    {
        
        printf("\n(AcumuladorSuma + numero) -> %d + %d\n", acumuladorSuma, numero);
        acumuladorSuma = acumuladorSuma + numero;
        printf("Suma parcial acumulada: %d\n", acumuladorSuma);
        
        numero++;
    } while (acumuladorSuma < 15);

        printf("\nSu suma total es: %d", acumuladorSuma);
       
    return 0;
}
