#include <stdio.h>

int mdc (int a, int b) {
	if (b == 0)	return a;
	return mdc (b, a % b);
}

int main () {
	int a, b,resultado;
	
	scanf ("%d %d", &a, &b);
	resultado = mdc (a, b);
	printf ("%d\n", resultado);
	
	return 0;
}
