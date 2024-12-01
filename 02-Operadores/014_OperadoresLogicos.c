#include <stdio.h>
#include <stdbool.h>

int main() {
	// Operadores Logicos
	bool a = true;// Verdadero - 1
	bool b = false;// Falso - 0 
	printf("Valor a: %d", a);
	printf("\nValor b: %d", b);
	
	// Operador Logico && (and - Y)
	// Regresa verdadero si ambos operandos son verdaderos
	
	bool c = a && b;
	printf("\nResultado operador and: %d", c);
	
	// Operador Logico || (or - O)
	// Regresa verdadero si cualquier operando es verdadero
	c = a || b;
	printf("\nResultado operador or: %d", c);
	
	// Operador ! (not - NO)
	c = !a;
	printf("\nResultado operador not: %d", c);
	
	
	return 0;
}

