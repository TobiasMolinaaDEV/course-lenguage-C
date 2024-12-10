// Ejercicio Acumulador Suma.
// Realizar la suma de los primeros 5 numeros utilizando un ciclo for, while y do while:
// ejemplo: 1 + 2 + 3 + 4 + 5 -> 15

#include <stdio.h>

int main()
{
    const int MAX = 5;
    int acumuladorSuma = 0; 

    for (int numero = 1; numero <= MAX; numero++)
    {
        printf("\n(AcumuladorSuma + numero) -> %d + %d\n", acumuladorSuma, numero);
        acumuladorSuma = acumuladorSuma + numero;
        printf("Suma parcial acumulada: %d \n", acumuladorSuma);
    }
    printf("\nLa suma acumulativa total es: %d", acumuladorSuma);
    return 0;
}
