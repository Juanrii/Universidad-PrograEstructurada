#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

/* 2 - Ingresar 20 notas y nombres de alumnos, indicar los aplazados
( menos de 4) y el nombre a quien pertenece esa nota */

int main(int argc, char *argv[]) {
	float nota, notasAprobadas[] = {0}, notasAplazadas[] = {0};
	char nombre[20], nomAprobados[N][20], nomAplazados[N][20];
	int i, aplazos = 0, aprobados = 0;
	
	for(i = 0; i < N; i++) {
		do {
			printf("\nIngrese la nota: ");
			scanf("%f", &nota);
		} while(nota < 0 || nota > 10);
		
		printf("\nIngrese el nombre del alumno: ");
		fflush(stdin);
		gets(nombre);
		
		if (nota < 4) {
			notasAplazadas[aplazos] = nota;
			strcpy(nomAplazados[aplazos], nombre);
			aplazos++;
		} else {
			notasAprobadas[aprobados] = nota;
			strcpy(nomAprobados[aprobados], nombre);
			aprobados++;
		}
	
	}
	
	if (aprobados > 0) {
		printf("\nAPROBADOS:");
		for(i = 0; i < aprobados; i++) {
			printf("\nNombre: %s \tNota: %.2f", nomAprobados[i], notasAprobadas[i]);
		}	
	}
	
	if (aplazos > 0) { 
		printf("\n\nAPLAZADOS:");
		for(i = 0; i < aplazos; i++) {
			printf("\nNombre: %s \tNota: %.2f", nomAplazados[i], notasAplazadas[i]);
		}
	}	
	
	return 0;
}
