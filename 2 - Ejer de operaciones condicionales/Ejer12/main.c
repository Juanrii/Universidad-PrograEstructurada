#include <stdio.h>
#include <stdlib.h>

/* 12 - Sobre los datos del ejercico anterior
imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad */

int main(int argc, char *argv[]) {
	float sueldo, cat1$, cat2$, cat3$, sueldoMax5;
	int cat, antig;
	const PREMIO = 50; 
	
	sueldo = cat1$ = cat2$ = cat3$ = sueldoMax5 = 0;
	
	printf("\nIngrese el sueldo del empleado: ");
	scanf("%f", &sueldo);
	
	while(sueldo != 0) {
		do {
			printf("\nIngrese la categoria del empleado (1 - 3): ");
			scanf("%d", &cat);
		} while(cat < 1 || cat > 3);
	
		printf("\nIngrese la antiguedad en anios: ");
		scanf("%d", &antig);
		
		switch(cat) {
			case 1:
				cat1$ += sueldo + (antig * PREMIO);
				if(antig > 5)
					sueldoMax5 += cat1$; 
				break;
			case 2:
				cat2$ += sueldo;
				if(antig > 5)
					sueldoMax5 += cat2$;
				break;
			case 3:
				cat3$ += sueldo;
				if(antig > 5)
					sueldoMax5 += cat3$;
				break;
			default:
				break;
		}
		
		system("cls");		
		printf("\nIngrese el sueldo del empleado (0 Finaliza): ");
		scanf("%f", &sueldo);
	}
	
	printf("\nSueldo total de la categoria 1 es de: %.2f", cat1$);
	printf("\nSueldo total de la categoria 2 es de: %.2f", cat2$);
	printf("\nSueldo total de la categoria 3 es de: %.2f", cat3$);
	
	printf("\nSueldo total de los empleados con mas de 5 anios de exp: %.2f", sueldoMax5);
	
	return 0;
}
