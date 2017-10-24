#include <stdio.h>
#include <stdlib.h>

int main () {
	int x = 2;
	int *y = &x;
	
	*y = 3;
	printf ("%d\n", x);
	
	return 0;
}

