#include <stdio.h>

// 1 - Ingresar dos valores, indicar si son iguales

int main() {
	
	float n1, n2; 

	printf("Ingrese el primer valor: ");
	scanf("%f", &n1);

	printf("Ingrese el segundo numero a comparar: ");
	scanf("%f", &n2);

	if (n1 == n2) {
		printf("\n%.2f = %.2f => Los numeros son iguales", n1, n2);
	} else {
		printf("\n%.2f es disinto de %.2f", n1, n2);
	}



	return 0;

}
