#include <stdio.h>
#include <math.h>

int fatorial (int x) {
	if (x == 0)
		return 1;
	else
		return x * fatorial (x-1);
}

int coef_bin (int n, int k) {
	return fatorial (n) / (fatorial (k) * fatorial (n-k));
}

int main () {
	int n, k;
	
	scanf ("%d %d", &n, &k);
	printf ("%d\n", coef_bin (n, k));
	
	return 0;
}
