#include <stdio.h>
#include <stdlib.h>

/* 13 - Ingresar las horas trabajadas por un empleado y su categoría,
calcular su sueldo si se sabe que los de la categoría 1 cobran $50, 
la 2 cobra $ 70 y la 3 cobra $ 80. */

int main(int argc, char *argv[]) {
	int hrs, cat;
	float cat$1 = 0, cat$2 = 0, cat$3 = 0;
	const PLUS_C1 = 50, PLUS_C2 = 70, PLUS_C3 = 80;
	
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%d", &hrs);
	
	while (hrs != 0) {
		do {
			printf("Ingrese la categoria (1 - 3): ");
			scanf("%d", &cat);
		} while(cat < 1 || cat > 3);
		
		switch(cat) {
			case 1:
				cat$1 += hrs * PLUS_C1;
				break;
			case 2:
				cat$2 += hrs * PLUS_C2;
				break;
			case 3:
				cat$3 += hrs * PLUS_C3;
				break;
			default:
				break;
		}
		
		printf("Ingrese las horas trabajadas (0 FINALIZA): ");
		scanf("%d", &hrs);
	};
	
	printf("\nSueldo total de los empleados de la Categoria 1: $%.2f", cat$1);
	printf("\nSueldo total de los empleados de la Categoria 2: $%.2f", cat$2);
	printf("\nSueldo total de los empleados de la Categoria 3: $%.2f", cat$3);
	
	return 0;
}
