#include <stdio.h>
#define N 1000000000

void f (int *x, int *y) {
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

int main () {
	unsigned int i;
	int y = 1;
	
	for (i = 0; i < N; i++)
		f(&i, &y);
	
	return 0;
}
