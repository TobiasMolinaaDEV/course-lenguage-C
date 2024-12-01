 //Problema Propuesto 
 // 1. Ingrese su nombre.
 // 2. ingrese su edad. 
 // 3. Proporcione su sueldo en (USD).
 // 4. es un empleado de convfianza (1/0).
 // 5 Mostrar toda la informacion proporcionada.

 #include <stdio.h>
 #include <stdbool.h>

  int main()
  {
    int empleadoCadena = 10;
    char nombreEmpleado [empleadoCadena];
    int edad;
    float sueldo = 0.00;
    bool empleadoConfianza; 
    int empleadoConfianzaTemp;

    printf("ingrese su nombre: \n");
    gets(nombreEmpleado);
    printf("Ingrese su Edad: \n");
    scanf("%d", &edad);
    printf("Proporcione su sueldo en (USD): \n");
    scanf("%f" , &sueldo);
    printf("Es usted un empleado de confianza? (1/0) \n");
    scanf("\n %d", &empleadoConfianzaTemp);
    empleadoConfianza = empleadoConfianzaTemp;

    printf("\nLa informacion proporcionada es:");
    printf("\nNombre: %s", nombreEmpleado);
    printf("\nEdad: %d", edad);
    printf("\nSueldo: $%.2f", sueldo);
    printf("\nEmpleado de confianza: %d", empleadoConfianza);

    return 0;
}
  