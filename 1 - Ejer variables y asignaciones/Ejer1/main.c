#include <stdio.h>
#include <stdlib.h>

/* 1 - Ingresar dos valores enteros y sumarlos */

int main(int argc, char *argv[]) {
	int n1, n2, suma;
	
	printf(" --- Programa que suma dos numeros ingresados por el usuario ---\n\n");
		
	printf("\nIngrese el primer numero entero: ");
	scanf("%d", &n1);
	
	printf("\nIngrese el segundo numero entero: ");
	scanf("%d", &n2);
	
	suma = n1 + n2;
	
	printf("\nLa suma de %d + %d es = %d", n1, n2, suma);
	
	return 0;
}
