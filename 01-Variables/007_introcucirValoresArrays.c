#include <stdio.h>

int main()
{
    int tamanioCadena = 10;
    char nombre [tamanioCadena];
    printf("ingrese un nombre: ");
    //fgets(nombre, tamanioCadena, stdin);
    gets(nombre); 
    printf("\nSu nombre ingresado es: %s", nombre); 


    return 0;
}
