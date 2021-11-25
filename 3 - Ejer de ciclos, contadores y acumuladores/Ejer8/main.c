#include <stdio.h>
#include <stdlib.h>

/* 8 - Ingresar valores hasta uno = 0, indicar la cantidad de números ingresados y su promedio */

int main(int argc, char *argv[]) {
	float num,sum,pro;
	int cont;
	
	sum=pro=cont=0;
	
	printf("\nIngrese un numero: ");
	scanf("%f",&num);
	
	while(num!=0){
		cont++;
		sum+=num;
		printf("\nIngrese un numero (0 FINALIZA): ");
		scanf("%f",&num);
	}
	
	pro=sum/cont;
	printf("\nCantidad de numeros ingresados: %d\nPromedio de los numeros ingresados: %.2f",cont,pro);
	
	return 0;
}
