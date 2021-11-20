#include <stdio.h>
#include <stdlib.h>
#define _MAX 2

/* 4 - Ingresar dos valores y realizar la resta del mayor menos el menor */

void mostrarMenu();
void seleccionMenu(int *);
void cargarValores(int);
void calcularMaxMin(int *flag, float *min, float *max, float num);
void resultados(float, float, float *);

int main(int argc, char *argv[]) {
	int op;
	
	mostrarMenu();
	seleccionMenu(&op);
	cargarValores(op);
	
	return 0;
}

void mostrarMenu() {
	printf("\n --- Realizar la resta del mayor menos el menor --- \n");
	printf("\n1) - Ingresar 2 valores");
	printf("\n2) - Ingresar N valores");
	printf("\n0) - Salir");
}

void seleccionMenu(int *op) {
	do {
		printf("\n\nEliga una opcion: ");
		scanf("%d", op);
	} while (*op < 0 || *op > 2);
}

void cargarValores(int op) {
	int i, flag = 0;
	float resta, min, max;
	
	if (op == 1) {
		float numeros[_MAX] = {0};
		
		for(i = 0; i < _MAX; i++) {
			printf("Ingrese un valor para la posicion %d: ", i+1);
			scanf("%f", &numeros[i]);
			calcularMaxMin(&flag, &min, &max, numeros[i]);
		}
	} else if (op == 2) {
		float numeros[] = {0}, numeroActual;
		
		printf("Ingrese un valor para la posicion %d: ", i+1);
		scanf("%f", &numeros[i]);
			
		while (numeros[i] != 0) {
			numeroActual = numeros[i];
			calcularMaxMin(&flag, &min, &max, numeroActual);
			
			printf("Ingrese un valor para la posicion %d (0 Finaliza): ", i+1);
			scanf("%f", &numeros[i]);
		}
	} else {
		printf("\nNos vemos amigo! :)");
		return;
	}
	
	resta = min - max;
	
	resultados(min, max, &resta);
	
}

void calcularMaxMin(int *flag, float *min, float *max, float numeroActual) {
	if (*flag == 0) {
		*min = *max = numeroActual; 
		*flag = 1;
	} else {
		if (*min > numeroActual) {
			*min = numeroActual; 
		}
		if (*max < numeroActual) {
			*max = numeroActual; 
		}
	}
}
	
void resultados(float min, float max, float *resta) {
	if (min != max) {
		printf("\nEl minimo es %.2f y el maximo es %.2f", min, max);
		*resta = max - min;
		printf("\n\nLa resta del mayor menos el menor es\n%.2f - %.2f = %.2f", max, min, *resta);
	} else {
		printf("\nLos numeros son iguales %.2f = %.2f", min, max);
	}
}		
			
