#include <stdio.h>
#include <stdlib.h>

/* 10 - Una concesionaria de autos paga a cada vendedor $ 500 por mes más
un plus del 10 % del precio sobre cada vehículo vendido y un valor constante de 50 pesos
por cada uno de ellos, sólo vende un tipo de vehículo, calcular su sueldo */

int main(int argc, char *argv[]) {
	const PREMIO = 50;
	int autosVendidos;
	float precioAuto, sueldo = 500, plus = 10.00;
	
	printf(" --- Programa que calcula el sueldo de un vendedor de autos ---\n\n");
	
	printf("\nIngrese el precio unitario del vehiculo vendido: $");
	scanf("%f", &precioAuto);
	
	printf("\nIngrese la cantidad de autos vendidos: ");
	scanf("%d", &autosVendidos);
	
	sueldo += ( (precioAuto * autosVendidos * plus) / 100 ) + (autosVendidos * PREMIO);
	
	printf("\nResultados\nPrecio unitario por vehiculo: $%.2f\nCantidad de vehiculos vendidos: %d\nSueldo del vendedor: $%.2f", precioAuto, autosVendidos, sueldo);
	
	return 0;
}
