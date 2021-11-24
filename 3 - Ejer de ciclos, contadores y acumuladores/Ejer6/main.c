#include <stdio.h>
#include <stdlib.h>
#define N 100

/* 6 - Sobre el ejercicio anterior indicar cuántas estan entre $ 400 y $ 700 inclusive. */

int main(int argc, char *argv[]) {
	int i = 0, factura, contFac = 0, superan[N] = {0}, sup1000 = 0, superan10k[N] = {0}, sup10k = 0, sup4y7 = 0;
	float importe, totalGastado = 0;
	
	printf("\nIngrese el nro de factura: ");
	scanf("%d", &factura);
	
	while(factura != 0) {
		
		printf("\nIngrese el importe: $");
		scanf("%f", &importe);
	
		totalGastado += importe; 
		
		if (importe > 400 && importe <= 700) {
			sup4y7++;
		} else if (importe > 1000) {
			superan[i] = factura;
			sup1000++;
			
			if (importe > 10000) {
				superan10k[i] = factura;
				sup10k++;
			}
		
			i++;
		}
		
		printf("\nIngrese el nro de factura (0 FINALIZA): ");
		scanf("%d", &factura);
	
		contFac++;
	}
	
	printf("\nTotal gastado: $%.2f", totalGastado);
	
	if (sup1000 > 0) {
		printf("\n\nFacturas que superan los $1000");
		for(i = 0; i < sup1000; i++) {
			printf("\nNro Factura: %d", superan[i]);
		}
		printf("\nTotal de facturas que superan los $1000: %d", sup1000);
	}
	
	if (sup10k > 0) {
		printf("\n\nFacturas que superan los $10K");
		for(i = 0; i < sup10k; i++) {
			printf("\nNro Factura: %d", superan[i]);
		}
		printf("\nTotal de facturas que superan los $10.000: %d", sup10k);
	}
	
	if (sup4y7 > 0) {
		printf("\nTotal de facturas entre $400 y $700 inclusive : %d", sup4y7);
	}
	
	return 0;
}
