#include <stdio.h>
#define N 1000000000

void f (int *x, int *y) {
	int aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
}

int main () {
	unsigned int i;
	int y = 1;
	
	for (i = 0; i < N; i++)
		f(&i, &y);
	
	return 0;
}
