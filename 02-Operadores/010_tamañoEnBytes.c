#include <stdio.h>
#include <stdbool.h>

int main() {
	// sizeof 
	// Definicion variables
	int entero;
	float flotante;
	double doble;
	char caracter;
	char cadena[] = "Hola Mundo";
	bool logico;
	
	// sizeof -> entero positivo (unsigned) long (ul) -> %ul
	// int -> signed (valores positivos y negativos)
	// Imprimir el tamanio en bytes de cada tipo de dato
	printf("int tamanio bytes: %lu", sizeof(entero));
	printf("\nfloat tamanio bytes: %lu", sizeof(flotante));
	printf("\ndouble tamanio bytes: %lu", sizeof(doble));
	printf("\nchar tamanio bytes: %lu", sizeof(caracter));
	printf("\ncadena tamanio bytes: %lu", sizeof(cadena));
	printf("\nlogico tamanio bytes: %lu", sizeof(logico));
	
	
	return 0;
}

