//Se desea conocer si la edad proporcionada es mayor o menor de edad
//Mostrar mensaje si es mayor o menor a 18 años.
//En caso de que el valor sea negativo mostrar el mensaje (valor incorrecto).
 

 #include <stdio.h>


 int main()
 {
    const i = 18;
    const numInvalidos = 0;
    int numProporcionado;
    printf("Ingrese una edad: " );
    scanf("%d", &numProporcionado);

    if (numProporcionado >= i)
    {
        printf("\nLa persona con edad %d es mayor de edad", numProporcionado);
    }   
    else if (numProporcionado > numInvalidos)
    {
        printf("\nLa persona con edad %d es menor de edad", numProporcionado);

    }
    
    if (numProporcionado  < numInvalidos)
    {
        printf("\nEl numero ingresado: %d es incorrecto", numProporcionado);
    }
   
    return 0;
 }
 

