#include <stdio.h>
#include <stdlib.h>

int main() {
	// Convertir de texto a numero
	char cadena1[] = "10";
	char cadena2[] = "20";
	// atoi - Ascii to int 
	// atof - Ascii to float
	// si no es numero -> 0
	int resultado = atoi(cadena1) + atoi(cadena2);  
	printf("Resultado suma: %d", resultado);
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
	//Convertir de numero a texto
	int edad = 28;
	char edadTexto[5];// Suficientes caracteres
	// itoa -> int to Ascii
	// ftoa -> float to Ascii
	// Se necesita proporcionar la base numero
	// 10 -> base numerica decimal 
	itoa(edad, edadTexto, 10);
	printf("Convirtiendo a texto: %s", edadTexto);
	
	return 0;
}
