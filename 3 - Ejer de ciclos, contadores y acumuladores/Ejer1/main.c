#include <stdio.h>
#include <stdlib.h>
#define N 5

/* 1 - Ingresar 25 números, calcular su promedio  */

void cargarNumeros(float *, float *);
float obtenerPromedio(float);
void mostrarResultados(float );

int main(int argc, char *argv[]) {
	float num, promedio, acc = 0;
	
	cargarNumeros(&num, &acc);
	promedio = obtenerPromedio(acc);
	mostrarResultados(promedio);
	
	return 0;
}

void cargarNumeros(float *num, float *acc) {
	int i;
	
	printf("\nSe cargaran %d numeros\n", N);
	for(i = 0; i < N; i++) {
		printf("\nIngrese un numero: ");
		scanf("%f", num);
		*acc += *num;
	}	
}

void mostrarResultados(float promedio) {
	printf("\nEl promedio de los %d numeros ingresados es: %.2f", N, promedio);
}

float obtenerPromedio(float acc) {
	return acc/N;
}
