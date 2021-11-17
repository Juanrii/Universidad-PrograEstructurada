#include <stdio.h>
#include <stdlib.h>

/* 9 - Ingresar el tiempo trabajado por un operario y si el valor
de la hora es de 10 pesos, calcular su sueldo */

int main(int argc, char *argv[]) {
	float hrsOperario, valorHr, sueldo;
	
	printf(" --- Programa que calcula el sueldo con una condicion ---\n\n");
	
	printf("Ingrese las horas trabajadas por el operario: ");
	scanf("%f", &hrsOperario);
	
	printf("Ingrese el valor de la hora: $");
	scanf("%f", &valorHr);
	
	if (valorHr == 10) {
		sueldo = valorHr * hrsOperario;
		printf("\nValor hora: $%.2f\nHoras trabajadas: %.2f\n", valorHr, hrsOperario);
		printf("El sueldo del operario es: $%.2f", sueldo);
		return 0;
	}
	
	printf("\nLo siento, el sueldo no puede ser calculado :( \n", sueldo);
	
	return 0;
}
