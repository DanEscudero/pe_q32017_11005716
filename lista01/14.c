#include <stdio.h>

int main () {
	int soma = 0, valor;
	float media = 0;
	
	for (int i = 0; i < 10; i ++) {
		scanf ("%d", &valor);
		soma += valor;
		media += (valor/10.0);
	}
	printf ("soma = %d\n", soma);
	printf ("media = %f\n", media);
}
