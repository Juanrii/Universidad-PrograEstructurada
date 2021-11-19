#include <stdio.h>
#include <stdlib.h>

/* 7 - Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do. */

int main(int argc, char *argv[]) {
	float n1, n2, sum, prod, res;
	
	printf(" --- Programa que calcula la suma, producto y resta de dos numeros ---\n\n");
	
	printf("Ingrese dos numeros separados por un espacio: ");
	scanf("%f %f", &n1, &n2);
	
	sum  = n1 + n2;
	prod = n1 * n2;
	res  = n1 - n2;
	
	printf("\nResultados:\n%.2f + %.2f = %.2f\n", n1, n2, sum);
	printf("%.2f * %.2f = %.2f\n", n1, n2, prod);
	printf("%.2f - %.2f = %.2f\n", n1, n2, res);
	
	return 0;
}
