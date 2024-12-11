#include <stdio.h>
#define renglones 2
#define columnas 3

int main()
{
    int matriz[renglones] [columnas] = {
        {100,200,300},
        {400,500,600}
    };

    printf("\n%d", matriz[0][0]);
    printf("\n%d", matriz[1][2]);
    return 0;
}
