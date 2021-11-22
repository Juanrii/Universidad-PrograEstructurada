#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 10 - Ingresar tres valores correspondientes al día, mes y año de una fecha, 
indicar si es válida, considerar los años bisiestos (existe una funcion que 
devuelve "B" en caso de bisiesto y  "N" si no lo es) */

bool esBisiesto(int anio, bool *);
void cargarDia(int *, int max);
void cargarMes(int *);
void cargarAnio(int *);

int main(int argc, char *argv[]) {
	int dia, mes, anio;
	bool bisiesto = false;
	
	cargarMes(&mes);
	cargarAnio(&anio);
	
	bisiesto = esBisiesto(anio, &bisiesto);
	
	if (bisiesto && mes == 2) {
		cargarDia(&dia, 29);
			
	} else {
		switch(mes) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cargarDia(&dia, 31);
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				cargarDia(&dia, 30);
				break;
			
			case 2:
				cargarDia(&dia, 28);
				break;
		}
	}
	
	bisiesto 
		? printf("\nFecha validada: %d\-%d\-%d. Anio biciesto.", dia, mes, anio) 
		: printf("\nFecha validada: %d\-%d\-%d. Anio NO biciesto.", dia, mes, anio);
	
	return 0;
}

bool esBisiesto(int anio, bool *bisiesto) {
   if (anio % 400 == 0 || anio % 4 == 0) {
      printf("\n%d es biciesto.\n", anio);
      *bisiesto = true;
   }
   else if (anio % 100 == 0) {
      printf("\n%d no es biciesto.\n", anio);
   }
   else {
      printf("\n%d no es biciesto.\n", anio);
   }
   
   return *bisiesto;
}

void cargarMes(int *mes) {
	do {
		printf("Ingresar el mes (1 - 12): ");
		scanf("%d", mes);
	} while(*mes < 1 || *mes > 12);
}

void cargarAnio(int *anio) {
	do {
		printf("ingresar el anio: (1900 - 2100)");
		scanf("%d", anio);
	} while(*anio < 1900 || *anio > 2100);
}

void cargarDia(int *dia, int max) {
	do {
		printf("Ingresar el dia (1 - %d): ", max);
		scanf("%d", dia);
	} while(*dia < 1 || *dia > max);
}
