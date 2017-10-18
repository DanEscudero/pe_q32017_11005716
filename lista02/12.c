#include <stdio.h>

int fatorial (int x) {
	if (!x) return 1;
	else return x * fatorial (x-1);
}

int coef_bin (int n, int k) {
	return fatorial (n) / (fatorial (k) * fatorial (n-k));
}

int main () {
	int n, k, resultado;
	
	scanf ("%d %d", &n, &k);
	resultado = coef_bin (n, k);
	printf ("%d\n", resultado);	
	
	return 0;
}
