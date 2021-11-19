#include <stdio.h>
#include <stdlib.h>

/* 3 - Ingresar tres valores y sumarlos, se puede sumar de a varios operandos. */

int main(int argc, char *argv[]) {
	float n1, n2, n3, suma = 0;
	
	printf(" --- Programa que suma 3 numeros sin restricciones ---\n\n");
	
	printf("Ingrese el primer numero: ");
	scanf("%f", &n1);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%f", &n2);
	
	printf("\nIngrese el tercer numero: ");
	scanf("%f", &n3);
	
	printf("\nLa suma de %.2f + %.2f + %.2f es = %.2f", n1, n2, n3, suma = n1+n2+n3);
	
	
	return 0;
}
