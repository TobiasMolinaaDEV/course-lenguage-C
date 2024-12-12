#include <stdio.h>
#include <string.h>

int main()
{
    //Subcadenas en C
    char cadena[] = "Hola Mundo";
    char subcadena [10];

    //Strncpy - string copy
    //strcpy
    //char *__cdecl strcpy(char *, const char *)

    int inicio = 0, nCaracteres = 4;

    strncpy (subcadena , &cadena[inicio], nCaracteres);
    subcadena[nCaracteres]= '\0';
    printf("\nCadena Original: %s", cadena);
    printf("\nSubcadena: %s", subcadena);
    return 0;
}
