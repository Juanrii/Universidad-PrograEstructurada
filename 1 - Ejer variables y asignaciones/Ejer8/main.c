#include <stdio.h>
#include <stdlib.h>

/* 8 - Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo. */

int main(int argc, char *argv[]) {
	float valorHr, hrsOperario, sueldo;
	
	printf(" --- Programa que calcula el sueldo de un operario --- \n\n");
	
	printf("Ingrese el valor de la hora: ");
	scanf("%f", &valorHr);
		
	printf("\nIngrese las horas trabajadas por el operario: ");
	scanf("%f", &hrsOperario);
	
	sueldo = valorHr * hrsOperario;
	
	printf("\nHoras trabajadas: %.2f\nValor de la hora: $%.2f\nEl sueldo del operario es: $%.2f", hrsOperario, valorHr, sueldo);	

	return 0;
}
