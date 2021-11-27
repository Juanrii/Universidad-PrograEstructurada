#include <stdio.h>

// 11 - Ingresar N valores y calcular promedio de positivos, de negativos y cantidad de ceros

int main() {
	float val, sumPos, sumNeg, promPos, promNeg;
	int pos, neg, zer;

	sumPos = sumNeg = promPos = promNeg = pos = neg = zer = 0;
	
	printf("\nIngrese un numero: ");
	scanf("%f", &val);

	while(val != 9999) {
		
		if(val > 0) {
			sumPos += val;
		  	pos++;
		} else if(val < 0) {
			sumNeg += val;
			neg++;
		} else {
			zer++;
		}

		printf("\nIngrese un numero (9999 finaliza):  ");
        scanf("%f", &val);
	}

	if(pos > 0) {
		promPos = sumPos/pos;
	}
	if(neg > 0) {
		promNeg = sumNeg/neg;
	}
	
	printf("\nPromedio de positivos: %.2f\nPromedio de negativos: %.2f\nCantidad de ceros: %d", promPos, promNeg, zer);

	return 0;
}
