#include <stdio.h>
#include <stdlib.h>

/* 4 - Ingresar los lados de un triángulo calcular su perímetro */

int main(int argc, char *argv[]) {
	int tipo;
	float l1, l2, l3, perimetro = 0;
	
	printf(" --- Programa para calcular el perimetro de un triangulo ---\n\n");
	
	printf("1) - Equilatero \n2) - Isoceles \n3) - Escaleno");
	
	do{
		printf("\nIngrese el tipo de triangulo: ");
		scanf("%d", &tipo);
		
		if (tipo < 1 || tipo > 3) {
			printf("\nOpcion invalida!");	
		}
		
	} while (tipo < 1 || tipo > 3);
	
		
	switch(tipo) {
		case 1:
			printf("\nIngrese uno de los lados del triangulo Equilatero: ");
			scanf("%f", &l1);
			perimetro = 3 * l1;
			
			break;
		case 2:
			printf("\nIngrese la base del triangulo Isoceles: ");
			scanf("%f", &l2);
			
			printf("\nIngrese uno de los lados: ");
			scanf("%f", &l3);
			
			perimetro = (2 * l3) + l2;
			
			break;
		case 3:
			printf("\nIngrese los tres lados del triangulo Escaleno: ");
			scanf("%f %f %f", &l1, &l2, &l3);
			
			perimetro = l1 + l2 + l3;
			
			break;
		default:
			break;
	}
	
	printf("\nEl perimetro del triangulo ingresado es: %.2f", perimetro);
	
	return 0;
}
