#include <stdio.h>
#include <stdlib.h>

/* 2 - Ingresar un valor indicar si es positivo, negativo o cero */

void cargarDatos(float *valor);
void mostrarResultado(float valor);

int main(int argc, char *argv[]) {
	float valor;
	
	cargarDatos(&valor);
	mostrarResultado(valor);
	
	return 0;
}

void cargarDatos(float *valor) {
	printf("Ingrese un numero: ");
	scanf("%f", valor);
}

void mostrarResultado(float valor) {
	if (valor > 0) {
		printf("\nEl numero %.2f es positivo", valor);
	} else if (valor < 0) {
		printf("\nEl numero %.2f es negativo", valor);
	} else {
		printf("\nEl numero ingresado es cero: %.2f", valor);
	}
}
