#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5 , b = 6;
    printf("\nA es: %d", a);
    printf("\nB es: %d", b);

    bool c = a == b;
    printf ("\nA igual a B?: %d", c);

    c = a != b;
    printf ("\nA es distinto a B?: %d", c);
    
    c = a > b; 
    printf ("\nA es Mayor que B?: %d", c);

    c = a >= b; 
    printf ("\nA es Mayor o Igual que B?: %d", c);
    
    c = a < b; 
    printf ("\nA es Menor que B?: %d", c);
   
    c = a <= b; 
    printf ("\nA es Mayor o igual que B?: %d", c);
   
    return 0;
}
