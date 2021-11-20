#include <stdio.h>

/* 5 - Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es */

void ingresarLados(float *, float *, float *);
void calcularTipo(float, float, float);

int main() {
	float l1, l2, l3;

	ingresarLados(&l1, &l2, &l3);
	calcularTipo(l1, l2, l3);

	return 0;
}

void ingresarLados(float *l1, float *l2, float *l3) {
	printf("\nIngrese el primer lado del triangulo: ");
	scanf("%f", l1);
	
	printf("\nIngrese el segundo lado del triangulo: ");
	scanf("%f", l2);

	printf("\nIngrese el tercer lado del triangulo: ");
	scanf("%f", l3); 	
}

void calcularTipo(float l1, float l2, float l3) {
	if (l1 == l2 && l1 == l3) {
		printf("\nLos 3 lados son de: %.2fcm, por lo tanto es un triangulo Equilatero", l1);
	} else if (l1 != l2 && l1 != l3 && l2 != l3) {
		printf("\nTodos los lados son distintos, por lo tanto es un triangulo Escaleno");
	} else {
		printf("\nDos lados iguales y uno distinto, se trata de un triangulo Isoceles");
	}	
}
