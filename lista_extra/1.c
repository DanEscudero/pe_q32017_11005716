#include <stdlib.h>
#include <stdio.h>

void troca (int *x, int *y) {
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

int main () {
	int x, y;
	
	scanf ("%d %d", &x, &y);
	printf ("x: %d, y: %d\n", x, y);
	troca (&x, &y);
	printf ("x: %d, y: %d\n", x, y);
	
	return 0;
}
