#include <stdio.h>


int main()
{
    int a , b , c;
    a = 0; 

    ++a;  //Primero se incrmentea el valor
    printf("Nuevo valor de %d", a);

    //post incremento
    // Se usa el valor de la variable dy deespues se incrementa 
    printf("\nvalor de a sin incremernatar %d", a++);
    printf("\nvalor de a ya incrementado %d", a);



    //ejemplo

    a = 5;
    b = 2; 
    c = ++a * b++;

    printf("\nValor de a: %d", a);
    printf("\nValor de b: %d", b);
    printf("\nValor de c: %d", c);

    //Ejemlpo de pre decremento

    a = 5;
    b = 2; 
    c = --a * b--;

    printf("\nValor de a: %d", a);
    printf("\nValor de b: %d", b);
    printf("\nValor de c: %d", c);

    

    return 0;
}
