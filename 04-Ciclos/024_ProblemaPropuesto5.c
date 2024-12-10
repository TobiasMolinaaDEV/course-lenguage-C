// Ejercicio Imprimir de 3 en 3.
// Mostrar en pantalla ingrementos de 3 en 3 positivos hasta un tope de 10.
// Mostrar en pantalla decrementos de 3 en 3 negativos hasta un tope de -10.
// Ambos con ciclo For.

#include <stdio.h>

int main()
{
    const int incrementoMAX = 10;
    const int decrementoMAX = -10;


    printf("Incremento de 3 en 3 (tope 10): \n");
    for (int incremento = 0; incremento <= incrementoMAX; incremento+= 3)
    {    
        printf("%d ", incremento);
    }
    
    printf("\nDecremento de 3 en 3 (tope -10): \n");

    for (int decremento = 0; decremento >= decrementoMAX; decremento-= 3)
    {
        printf("%d ", decremento);
    }
    
    return 0;
}

