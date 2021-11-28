#include <stdio.h>
#include <stdlib.h>
/* Necesito definir el tamano del array para
decirle al compilador cuanto espacio asignara
(con malloc() puedo asignar dinamicamente) */
#define N 100 

/* 12 - Ingresar los datos de facturación de una empresa. 
	Número de factura
	Número de artículo
	Cantidad vendida 
	Precio unitario 
 
 Los datos finalizan con numero de factura = 0, cada factura sólo 
 tiene un número de artículo, existen tres artículos

 Se desea saber :
	Valor de cada factura
	Facturación total
	Cuánto se vendio del artículo 1 en cantidad
	Cuántas facturas mayores de $ 3000 se hicieron
	Qué porcentaje representa el monto vendido por cada artículo
    sobre el total
*/

int cargarFactura(int [], int);
void cargarArticulo(int [], int, int [], float[]);
void mostrarResultados(int [], int, int [], int [], float []);
void facturacionTotal(float [], int [], int);
void facturasMayores3k(float [], int, int *);

int main(int argc, char *argv[]) {
	int fact, facturas[N], contFac, articulos[N], art1, art2, art3, cantVend[N], mayores3k;
	float precioUnit[N], precioFac, porcentajeArt1, porcentajeArt2, porcentajeArt3;
	int i = 0;
	
	contFac = art1 = art2 = art3 = mayores3k = 0;
	
	fact = cargarFactura(facturas, i);
	
	while(fact != 0) {
		contFac++;
		i++;
		
		
		cargarArticulo(articulos, i-1, cantVend, precioUnit);
		
		
		fact = cargarFactura(facturas, i);
	}
	
	mostrarResultados(facturas, contFac, articulos, cantVend, precioUnit);
	facturacionTotal(precioUnit, cantVend, contFac);
	facturasMayores3k(precioUnit, cantVend, &mayores3k);
	
	return 0;
}

int cargarFactura(int facturas[], int i) {
	printf("\nIngrese el numero de factura (0 FINALIZA): ");
	scanf("%d", &facturas[i]);
	return facturas[i];
}

void cargarArticulo(int articulos[], int i, int cantVend[], float precioUnit[]) {
	do {
		printf("\nIngrese el numero de articulo (1 - 3): ");
		scanf("%d", &articulos[i]);
	} while (articulos[i] < 1 || articulos[i] > 3);
	
	printf("\nPrecio unitario: $");
	scanf("%f", &precioUnit[i]);
	
	printf("\nCantidad vendida: ");
	scanf("%d", &cantVend[i]);
	
	switch(articulos[i]) {
		case 1:
			
			break;
		case 2:
			break;
		case 3:
			break;
	}
	
	
}

void mostrarResultados(int facturas[], int contFac, int articulos[], int cantVend[], float precioUnit[]) {
	int i, cat1Cant = 0;
	
	for(i = 0; i < contFac; i++) {
		if (articulos[i] == 1) {
			cat1Cant += cantVend[i];
		}
		printf("\nID: %d\tFactura: %d\tArticulo: %d\tPrecio Unitario: $%.2f\tVendidos: %d unidades", i, facturas[i], articulos[i], precioUnit[i], cantVend[i]);
	}
	printf("\n\nSe vendieron un total de %d articulos Nro 1", cat1Cant);
	
}

void facturacionTotal(float precios[], int cantVend[], int cantFac) {
	int i;
	float total = 0;
	for (i = 0; i < cantFac; i++) {
		total += (float) (precios[i] * cantVend[i]);
	}
	printf("\n\nLa facturacion total es de: $%.2f", total);
}

void facturasMayores3k(float precioUnit[], int cantVend, int *mayores3k) {
	int i;
	for(i = 0; i < cantVend; i++) {
		if (precioUnit[i] > 3000) {
			*mayores3k++;
		}
	}
	printf("\nLa cantidad de facturas que superan los $3000 son: %d", mayores3k);
}











