#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 5 - Ingresar dos lados de un triángulo rectángulo y calcular, 
la hipotenusa, el perímetro, la superficie. */

int main(int argc, char *argv[]) {
	float l1, l2, hip, per, sup;
	
	printf(" --- Programa que calcula la hipotenusa, el perímetro y la superficie de un triangulo rectangulo ---\n\n");
	
	printf("Ingrese los dos lados del triangulo: ");
	scanf("%f %f", &l1, &l2);
	
	hip = sqrt( pow(l1,2) + pow(l2, 2) );
	per = l1 + l2 + hip;
	sup = (l1*l2) / 2;
	
	printf("\nLa Hipotenusa es: %.2f", hip);
	printf("\nEl Perimetro es: %.2f", per);
	printf("\nLa Superficie es: %.2f", sup);
	
	return 0;
}
