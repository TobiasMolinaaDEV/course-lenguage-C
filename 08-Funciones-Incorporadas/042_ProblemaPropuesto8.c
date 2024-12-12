//Se pide que se obtenga una subcadena "Mundo" de la cadena "Hola Mundo".

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[] = "Hola mundo ";
    char subcadena [10];

    int inicio = 0, nCaracteres = 4;

    strncpy (subcadena , &cadena[inicio], nCaracteres);
    subcadena[nCaracteres]= '\0';
    printf("\nCadena Original: %s", cadena);
    
    int init = 5, nSubCaracteres=10;
    strncpy (subcadena , &cadena[init], nSubCaracteres);
    printf("\nSubcadena: %s", subcadena);

    return 0;
}
