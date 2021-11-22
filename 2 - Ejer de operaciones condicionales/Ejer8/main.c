#include <stdio.h>
#include <stdlib.h>

/* 8 - Ingresar la edad y la altura de dos personas, 
indicar la estatura del de mayor edad */

int main(int argc, char *argv[]) {
	float altura[2], alt;
	int edad[2], i, mayorEdad, flag = 0;
	
	for(i = 0; i < 2; i++) {
		printf("\nIngrese la edad de la persona: ");
		scanf("%d", &edad[i]);
		
		printf("\nIngrese la altura de la persona: ");
		scanf("%f", &altura[i]);
		
		if (flag == 0) {
			mayorEdad = edad[i];
			alt = altura[i];
			flag = 1;
		} else {
			if (mayorEdad < edad[i]) {
				mayorEdad = edad[i];
				alt = altura[i];
			}
		}
			
	}
	
	printf("\nLa estatura de la persona con mayor edad (%d anios) es de: %.2fcm", mayorEdad, alt);
			
	return 0;
}






