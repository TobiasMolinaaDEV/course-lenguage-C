#include <stdio.h>

// Copia de la referencia de memoria (apuntadores)
int main() {
	int a = 10;
	// Definimos una variable apuntador
	int *b = &a;
	// Modificamos el valor de a o *b
	// *variable -> Desreferencia
	*b = 20; 
	// Si imprimir los valores
	printf("Valor a: %d", a);
	printf("\nValor *b: %d", *b );
	// Imprimir direcciones de memoria
	//%p -> pointer (apuntador)
	printf("\nReferencia a: %p", &a);//Direccion memoria a
	printf("\nReferencia apunta b: %p", b);//Direccion memoria a la que apunta b
	printf("\nReferencia b: %p", &b);//Direccion memoria b
	
	return 0;
}
