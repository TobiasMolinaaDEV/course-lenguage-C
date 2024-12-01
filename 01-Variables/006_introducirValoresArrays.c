#include <stdio.h>
int main()
{
    //Ejemplo para solicitar informacion al cliente
    int tamanioCadena = 10;
    char nombre [tamanioCadena];
    printf("Proporciona un nombre:");
    //leemos informacion del  usuario
    // "%[^'\n']s" nos permite leer la cadena completa sin preocuparnos si cabe o no 
    scanf("%[^'\n']s", nombre);
    //imprimimos el valor proporcionado
    printf ("\nEl nombre proporcionado es %s", nombre);
    
    
    return 0;
}
