#include <stdio.h>

int main() {
	// Introducir datos en una Matriz
	int renglones, columnas;
	printf("Proporciona el numero de renglones: ");
	scanf("%d", &renglones);
	printf("Proporciona el numero de columnas: ");
	scanf("%d", &columnas);
	
	// Creamos la matriz
	int matriz[renglones][columnas];
	
	// Introducir los valores
	for(int ren = 0; ren < renglones; ren++){
		for(int col = 0; col < columnas; col++){
			printf("Dato[%d][%d] = ", ren, col);
			scanf("%d", &matriz[ren][col]);
		}
	}
	
	// Imprimimos los valores de la matriz
	printf("\n---Impresion de la Matriz---");
	for(int ren = 0; ren < renglones; ren++){
		for(int col = 0; col < columnas; col++){
			printf("\nMatriz[%d][%d] = %d", ren, col, matriz[ren][col]);
		}
		printf("\n");
	}
	
	return 0;
}

