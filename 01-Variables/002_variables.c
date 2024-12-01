#include <stdio.h>

int main()
{
    //1. DECLARAR UNA VARIABLE
    int miNumero;  // tiene un valor basura 
    printf("%d", miNumero); //se muestra el valor basura a modo de ej.
    //2 LA INICIALIZAMOS
    miNumero = 10;
    //3. IMPRIMIR VARIABLE
    // formato %d -> decimal o int 
    //caracter especia \n imprime un salto de linea (para que sea mas legible).
    printf("\n%d", miNumero);

    //4. modificamos el valor de la variable miNumero.
    miNumero = 20;  //ahora la variable tiene el valor nuevo de 20.
    printf("\n%d", miNumero);
  
    return 0;
}
