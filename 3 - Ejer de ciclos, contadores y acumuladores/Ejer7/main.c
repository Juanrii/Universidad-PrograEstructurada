#include <stdio.h>
#define N 10

/* 7 - Ingresar 10 valores, indicar cuántos son positivos, cuántos negativos y cuántos ceros */

int main(int argc, char *argv[]) {
	int i,numeros[N],pos,neg,ceros;
	
	i=pos=neg=ceros=0;
	
	for(i;i<N;i++){
		printf("\nIngrese un numero: ");
		scanf("%d",&numeros[i]);
	
		if(numeros[i]<0){
			neg++;
		} else if(numeros[i]>0){
			pos++;
		}else{
			ceros++;	
		}
	}
	
	printf("\nCantidad de Positivos: %d\nCantidad de Negativos: %d\nCeros: %d",pos,neg,ceros);
	
	return 0;
}
