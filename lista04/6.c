#include <stdlib.h>
#include <stdio.h>

int max (int x, int y) {
	if (x > y) return x;
	return y;
}

int min (int x, int y) {
	if (x < y) return x;
	return y;
}

int main () {
	int x, y;
	
	scanf ("%d %d", &x, &y);
	printf ("maior = %d e menor = %d\n", max(x,y), min(x,y));
	
	return 0;
}
