#include <stdio.h>
#include <stdlib.h>
#define PREMIO 100

/* 9 - Ingresar el valor de la hora y el tiempo trabajado por un empleado,
calcular su sueldo si se sabe que recibe un premio de $ 100 si trabajo
más de 50 hs y si trabajo más de 150 hs le dan $ 100 adicionales */

float calcularSueldo(float, int, float *);

int main(int argc, char *argv[]) {
	float valorHr, sueldo = 0; 
	int hrs;
	
	printf("Ingrese el valor de la hora: ");
	scanf("%f", &valorHr);
	
	printf("Ingrese las horas trabajadas por el operario: ");
	scanf("%d", &hrs);
	
	sueldo = calcularSueldo(valorHr, hrs, &sueldo);
	
	printf("\nHoras trabajadas: %d\nValor hora: $%.2f\nSueldo: $%.2f\n", hrs, valorHr, sueldo);
	
	return 0;
}

float calcularSueldo(float valorHr, int hrs, float *sueldo) {
	if (hrs > 50) {
		*sueldo += (valorHr * hrs) + PREMIO;
		
		if (hrs > 150) {
			*sueldo += PREMIO;	
		}
	} else {
		*sueldo += (valorHr * hrs);
	}
	return *sueldo;
}
