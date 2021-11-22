#include <stdio.h>
#include <stdlib.h>

/* 11 - Ingresar el sueldo, categoría y antigüedad de un empleado, calcular 
el sueldo final si se le da $ 50 por cada año trabajado a cada empleado
de la categoria 1. */

int main(int argc, char *argv[]) {
	float sueldo, cat1$, cat2$, cat3$;
	int cat, antig;
	const PREMIO = 50; 
	
	sueldo = cat1$ = cat2$ = cat3$ = 0;
	
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
				break;
			case 2:
				cat2$ += sueldo;
				break;
			case 3:
				cat3$ += sueldo;
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
	
	return 0;
}
