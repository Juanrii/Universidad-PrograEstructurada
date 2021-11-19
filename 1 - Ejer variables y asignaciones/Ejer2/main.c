#include <stdio.h>
#include <stdlib.h>

/* 2 - Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos. */

int main(int argc, char *argv[]) {
	float n1, n2, n3, suma;
	
	printf(" --- Programa que suma 3 valores, sumando de a dos ---\n\n");
	
	printf("\nIngrese el primer numero: ");
	scanf("%f", &n1);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%f", &n2);
	
	suma = n1 + n2;
	
	printf("\nIngrese el tercer numero: ");
	scanf("%f", &n3);
	
	suma += n3;
	
	printf("\nLa suma de %.2f + %.2f + %.2f es = %.2f", n1, n2, n3, suma);
	
	return 0;
}
