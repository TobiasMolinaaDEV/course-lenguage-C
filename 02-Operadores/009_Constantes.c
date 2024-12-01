#include <stdio.h>
//2. Otra forma de definir una constante
#define PI 3.1416
// Utilizar la constante M_PI pero de la libreria math
#include <math.h>

#ifndef M_PI
	#define M_PI 3.14159265358979323846
#endif

int main() {
	// Manejo de Constantes en C
	// 1. Definir una constante
	const int MI_CONSTANTE = 10;


	//MI_CONSTANTE = 20; // Esto arroja un error
	printf("Valor constante = %d", MI_CONSTANTE);
	// Imprimimos el valor de la constante PI
	printf("\nValor PI = %.4f", PI);
	// Imprimimos el valor PI de la libreria math
	printf("\nValor PI Math = %f", M_PI);
	
	// Constante segundos por minuto
	const int SEGUNDOS_POR_MINUTO = 60;
	printf("\nConstante SEGUNDOS_POR_MINUTO = %d", SEGUNDOS_POR_MINUTO);
	
	return 0;
}

