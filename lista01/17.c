#include <stdio.h>

int main () {
	int x, y, soma_quad = 0, quad_soma = 0;

	scanf ("%d", &x);
	scanf ("%d", &y);
	for (int i = x; i <=y; i ++) {
		soma_quad += (i*i);
		quad_soma += i;
	}

	quad_soma *= quad_soma;
	
	printf ("soma dos quadrados = %d\n", soma_quad);
	printf ("quadrado da soma   = %d\n", quad_soma);
	printf ("diferenca          = %d\n", (quad_soma - soma_quad));
}
