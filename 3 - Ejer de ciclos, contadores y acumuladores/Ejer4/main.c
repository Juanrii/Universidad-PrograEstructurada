#include <stdio.h>
#include <stdlib.h>
#define N 100

/* Ingresar facturas hasta nro de factura = 0,
sumar sus importes, indicar el total gastado y cúales y cuantas superan los $1000. */

int main(int argc, char *argv[]) {
	int i = 0, factura, contFac = 0, superan[N] = {0}, sup1000 = 0;
	float importe, totalGastado = 0;
	
	printf("\nIngrese el nro de factura: ");
	scanf("%d", &factura);
	
	while(factura != 0) {
		
		printf("\nIngrese el importe: $");
		scanf("%f", &importe);
	
		totalGastado += importe; 
		
		if (importe > 1000) {
			superan[i] = factura;
			sup1000++;
			i++;
		}
		
		printf("\nIngrese el nro de factura (0 FINALIZA): ");
		scanf("%d", &factura);
	
		contFac++;
	}
	
	printf("\nTotal gastado: $%.2f", totalGastado);
	printf("\n\nFacturas que superan los $1000");
	
	if (sup1000 > 0) {
		for(i = 0; i < sup1000; i++) {
			printf("\nNro Factura: %d", superan[i]);
		}
		printf("\nTotal de facturas que superan los $1000: %d", sup1000);
	}
	
	return 0;
}
