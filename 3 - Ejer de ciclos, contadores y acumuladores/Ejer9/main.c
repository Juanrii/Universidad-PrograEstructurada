#include <stdio.h>
#include <stdlib.h>

/* 9 - Ingresar nombres y notas de alumnos teniendo en cuenta que la carga finaliza con nota = 11,
calcular el promedio, imprimir los aprobados, cuántos estan entre 4 y 6.. */

int main(int argc, char *argv[]) {
	char nombre[20], nombres[20][20], aprobados[20][20];
	int nota, notaAprob[20], sum, entre, contAprob = 0, total = 0, i;
	float pro;
	
	do {
		printf("\nIngrese la nota: ");
		scanf("%d", &nota);	
	} while (nota < 0 || nota > 11);
	
	while(nota != 11) {
		total++;
		
		printf("\nIngrese el nombre del alumno: ");
		fflush(stdin);
		gets(nombre);
		
		if (nota >= 4) {
			strcpy(aprobados[contAprob], nombre);
			notaAprob[contAprob] = nota;
			contAprob++;
			if (nota >= 4 && nota <= 6) {
				entre++;
			}
		}
		
		sum += nota;
		
		printf("\nIngrese la nota (11 Finaliza): ");
		scanf("%d", &nota);
	}
	
	if (total > 0) {
		pro = (float) sum/total;
		printf("\nPromedio de notas: %.2f", pro);
	} else {
		printf("\nNo se ingresaron datos\n");
	}
		
	if (contAprob > 0) {
		printf("\n\nAlumnos aprobados:");
		for(i = 0; i < contAprob; i++) {
			printf("\nNombre: %s\tNota: %d", aprobados[i], notaAprob[i]);
		}
		printf("\n\nCantidad de notas entre 4 y 6: %d", entre);		
	} else {
		printf("\nNo hubo alumnos aprobados\n");
	}
	
	return 0;
}
