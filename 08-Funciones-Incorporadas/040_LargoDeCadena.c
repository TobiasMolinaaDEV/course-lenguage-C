#include <stdio.h>
#include <string.h>

int main()
{
    //Definir cadena
    char cadena[] = "hola";
    //Obtenemos el largo de una cadena
    int largo = strlen (cadena);
    printf("cadena original: %s", cadena);
    printf("\nLargo cadena (strlen): %d", largo);

    largo = sizeof (cadena);
    printf("\nLargo cadena (sizeof): %d", largo);
    
    
    //recorrer la cadena 
    printf("\nRecorriendo la cadena...") ;
    char c;
    for (int i = 0; i < strlen(cadena); i++)
    {
       c = cadena [i];
       printf("\n%c", c);
    }
    

    return 0;
}
