#include <stdio.h>
#include <stdlib.h>

/* 3 - Ingresar N sueldos e indicar su suma y su promedio */

void cargarSueldo(float sueldos[], float *sum, int *total);

int main(int argc, char *argv[]) {
	float sueldos[] = {0}, sum = 0, pro;
	int total = 0;
	
	cargarSueldo(sueldos, &sum, &total);
	pro = sum / total;
	
	printf("\nLa suma total de sueldos es de: $%.2f\nEl promedio es: $%.2f", sum, pro);
	
	return 0;
}

void cargarSueldo(float sueldos[], float *sum, int *total) {
	float sueldo;
	int i = 0;
	
	printf("\nIngrese el sueldo $: ");
	scanf("%f", &sueldo);
		
	while(sueldo != 0) {
		*total = *total + 1;
		sueldos[i] = sueldo;
		*sum += sueldos[i]; 	
		i++;
			
		printf("\nIngrese el sueldo (0 FINALIZA) $: ");
		scanf("%f", &sueldo);
	}
	
}
