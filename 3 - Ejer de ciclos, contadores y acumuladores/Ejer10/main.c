#include <stdio.h>
#include <stdlib.h>
#define N 5

/* 10 - Ingresar la patente y monto de la multa de 50 autos, indicar cuántos montos superan los $ 40
y del total cobrado que porcentaje representa la suma de estos últimos */

int main(int argc, char *argv[]) {
	int i, superanCant = 0;
	char patentes[N][20] = {""}, superan[N][20] = {""}, patente[20] = {""};
	float monto, montoTotal = 0 , superan$ = 0, porcentaje = 0;

	for(i = 0; i < N; i++) {
		printf("\nIngrese la patente: ");
		fflush(stdin);
		scanf("%s", &patentes[i]);
//		strcpy(patentes[i], patente);
		
		printf("\nIngrese el monto: $");
		scanf("%f", &monto);
		
		montoTotal += monto;
		
		if (monto > 40) {
			superan$ += monto;
			strcpy(superan[superanCant], patentes[i]);
			superanCant++;
		}
		
	}
	
	porcentaje = (superan$ / montoTotal) * 100;

	if (superanCant > 0) {
		printf("\nFacturas que superan los $40: ");
		for(i = 0; i < N; i++) {
			fflush(stdin);
			printf("\n%s", superan[i]);
		}
		printf("\n\nMonto total cobrado: $%.2f\nMonto de las que superan los $40: $%.2f\nporcenteaje que representa la suma de estos ultimos: %.2f", montoTotal, superan$, porcentaje);
	}
	

	return 0;
}
