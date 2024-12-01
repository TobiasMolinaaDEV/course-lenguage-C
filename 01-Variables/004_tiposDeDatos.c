#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Tipo entero (formato %d, %i)
    int entero = 10;
    printf("Su valor de tipo entero es: %d" , entero);
    
    // Tipo flotante (formato %f)
    float flotante =6.5;
    printf("\nSu valor de tipo flotante es: %.2f" , flotante);
    
    // Tipo double (formato %lf -> long float)
    double doble =15.6090;
    printf("\nSu valor de tipo double es: %.3lf" , doble);
    
    // Tipo char (formato %c)
    char caracter = 'A';
    printf("\nSu caracter  es: %c" , caracter);
    
    //Tipo bool (valores: true - 1 o false - 0)
    // las variables de tipo bool no estan incluidas, por lo tanto tendremos que llamar a otra biblioteca para usarla. -> #include <stdbool.h>
    bool logico = true;
    printf("\nSu tipo logico en decimal es: %d", logico); 
    bool logico2 = false;
    printf("\nSu tipo logico en decimal es: %d", logico2);

    //Un arreglo es un conjunto de datos 
    //Se encuentran ubicados de forma consecutiva en la memoria ram

    //Tipo cadena (formato %s -> string)

    char cadena[] = "Hola";
    printf("\nSu cadena de caracteres es:%s", cadena);

    //Tipo Cadena (otra sintaxis)
    char cadena2 [10] = "Saludos";
    printf("\nTipo cadena2: %s", cadena2);

    return 0;
}
