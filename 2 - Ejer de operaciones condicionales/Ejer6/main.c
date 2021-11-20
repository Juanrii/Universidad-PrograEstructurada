#include <stdio.h>
#include <stdlib.h>
#define N 3

/* Ingresar tres valores, sumarlos, calcular el promedio e 
indicar cúal de estos valores es mayor al promedio */

void cargarDatos(float [], float *, float *);

int main(int argc, char *argv[]) {
	float numeros[N] = {0}, sum = 0, pro, max;
	
	cargarDatos(numeros, &sum, &max);
	
	pro = sum / N;
	
	printf("\nEL promedio es: %.2f y el valor maximo es: %.2f", pro, max);
	
	return 0;
}

void cargarDatos(float numeros[N], float *sum, float *max) {
	int i, bandera = 0;
	
	for(i = 0; i < N; i++) {
		printf("Ingrese un numero: ");
		scanf("%f", &numeros[i]);
		
		if (bandera == 0) {
			*max = numeros[i];
			bandera = 1;
		} else {
			if (*max < numeros[i]) {
				*max = numeros[i];
			}
		}
		
		*sum += numeros[i];
	}
}
