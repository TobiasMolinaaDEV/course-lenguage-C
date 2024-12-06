//Problema propuesto: Se desea conocer que dia de la semana corresponde solo ingresando su numero


#include <stdio.h>


int main()
{
    
    int numIngresado;
    printf("Ingrese un numero correspondiente a un dia de la semana: ");
    scanf("%d", &numIngresado);

    if ( numIngresado >(1||2||3||4||5||6||7))
    {
        printf("\nNUMERO INGRESADO INCORRECTO!");
    }
    else if (numIngresado <(1||2||3||4||5||6||7))
    {
        printf("\nNUMERO INGRESADO INCORRECTO!");
    }
    
    else{
        if (numIngresado == 1)
        {
        printf("\nEl dia es Lunes");
        }
    
        if (numIngresado == 2)
        {
        printf("\nEl dia es Martes");
        }

        if (numIngresado == 3)
        {
        printf("\nEl dia es Miercoles");
        }

        if (numIngresado == 4)
        {
        printf("\nEl dia es Jueves");
        }

        if (numIngresado == 5)
        {
        printf("\nEl dia es Viernes");
        }
        
        if (numIngresado == 6)
        {
        printf("\nEl dia es Sabado");
        }
        
        if (numIngresado == 7)
        {
        printf("\nEl dia es Domingo");
        }
        
    }
   
    
    return 0;
   
}
