#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 6 - Ingresar los lados de un rectángulo y calcular su diagonal principal, superficie y perímetro. */

int main(int argc, char *argv[]) {
	float l1, l2, diag, sup, per;
	
	printf(" --- Programa que calcula la diagonal, la superficie y el perimetro de un rectangulo ---\n\n");
	
	printf("\nIngrese el primer lado del rectangulo: ");
	scanf("%f", &l1);	
	
	printf("\nIngrese el segundo lado del rectangulo: ");
	scanf("%f", &l2);
	
	diag = sqrt( pow(l1,2) + pow(l2,2) );
	sup = l1 * l2;
	per = (2 * l1) + (2 * l2);
	
	printf("\n--- Resultados ---\nDiagonal: %.2f\nSuperficie: %.2f\nPerimetro: %.2f\n", diag, sup, per);
	
	return 0;
}
