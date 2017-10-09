#include <stdio.h>
#include <math.h>

float soma (float x, float y) {
	return x + y;
}

float subtracao (float x, float y) {
	return x + y;
}

float produto (float x, float y) {
	return x * y;
}

float divisao (float x, float y) {
	return x / y;
}

float potencia (float x, float y) {
	return pow (x, y);
}

int main () {
	int operacao;
	float x, y;
	scanf ("%d %f %f", &operacao, &x, &y);
	
	switch (operacao) {
		case 1:
			printf ("%f\n", soma (x, y));
			break;
			
		case 2:
			printf ("%f\n", subtracao (x, y));
			break;
			
		case 3:
			printf ("%f\n", produto (x, y));
			break;
			
		case 4:
			printf ("%f\n", divisao (x, y));
			break;
			
		case 5:
			printf ("%f\n", potencia (x, y));
			break;
	}
	
	return 0;
}
