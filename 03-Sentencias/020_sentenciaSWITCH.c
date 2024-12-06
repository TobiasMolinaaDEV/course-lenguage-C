//
#include <stdio.h>

int main()
{
    char noPalabras; 
    int diaSemana;
    printf("Ingrese el dia de la semana: ");
    scanf("%d", &diaSemana);

    switch (diaSemana)
    {
    case 1: 
            printf("\nDia Lunes");
        break;
    case 2: 
            printf("\nDia Martes");
        break;
    case 3: 
            printf("\nDia Miercoles");
        break;
    case 4:
            printf("\nDia Jueves");
        break;
    
    case 5:
            printf("\nDia Viernes");
        break;
    case 6: 
            printf("\nDia Sabado");
        break;
    case 7: 
            printf("\nDia Domingo");
        break;
    default:
            if (diaSemana == noPalabras) //En el caso que se ingrese un char o un string, indique al usuario que es incorrecto.
            {
                printf("\nNO ingrese letras, Solo numeros [1--7]!");
            }
            else{
                printf("\nValor incorrecto!");
            }
        break;
    }
    return 0;
}
