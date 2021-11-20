#include <stdio.h>
#include <stdlib.h>
#define N 4

/* 7 - Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to,
indicar cúal de esta sumas es mayor */

void cargarDatos(float vec[], float *sumA, float *sumB);
void obtenerSumaMayor(float sumA, float sumB, float *mayor);

int main(int argc, char *argv[]) {
	float vec[N] = {0}, sumA, sumB, mayor;
	sumA = sumB = mayor = 0;
	
	cargarDatos(vec, &sumA, &sumB);
	obtenerSumaMayor(sumA, sumB, &mayor);
	
	return 0;
}

void cargarDatos(float vec[], float *sumA, float *sumB) {
	int i;
	
	for(i = 0; i < N; i++) {
		printf("\nIngrese un numero: ");
		scanf("%f", &vec[i]);
		
		if (i < 2) {
			*sumA += vec[i];		
		} else {
			*sumB += vec[i];		
		}
	}
}

void obtenerSumaMayor(float sumA, float sumB, float *mayor) {
	if (sumA == sumB) {
		printf("\nLas sumas son iguales %.2f = %.2f", sumA, sumB);	
	} else {
		*mayor = (sumA > sumB) ? sumA : sumB;	
		printf("\nLa suma mayor entre %.2f y %.2f es %.2f", sumA, sumB, *mayor);		
	}
	
	
	
	
}
