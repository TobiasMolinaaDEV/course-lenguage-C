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