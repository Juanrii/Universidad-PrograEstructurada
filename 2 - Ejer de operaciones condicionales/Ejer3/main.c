#include <stdio.h>
#include <stdlib.h>

/* 3 - Ingresar dos valores y realizar el producto si el 1ro es mayor al 2do,
si son iguales solo indicarlo */

void cargarDatos(float *, float *);
void procesarDatos(float, float);

int main(int argc, char *argv[]) {
	float n1, n2;
	
	cargarDatos(&n1, &n2);
	procesarDatos(n1, n2);
	
	return 0;
}

void cargarDatos(float *n1, float *n2) {
	printf("\nIngrese el primer valor: ");
	scanf("%f", n1);

	printf("\nIngrese el segundo valor: ");
	scanf("%f", n2);
}

void procesarDatos(float n1, float n2) {
	float prod;
	
	if (n1 > n2) {
		prod = n1 * n2;
		printf("\nEl producto de %.2f * %.2f es = %.2f", n1, n2, prod);
	} else if (n1 == n2) {
		printf("\nLos numeros ingresados son iguales %.2f = %.2f", n1, n2);
	} else {
		printf("\nNo tengo nada que hacer aqui. No vemoooo!");
	}
}
