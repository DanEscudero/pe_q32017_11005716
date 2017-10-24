#include <stdio.h>
#include <stdlib.h>

int main () {
	int x = 10;
	int *y = &x;
	int *z = &x;
	int c = *y + *z;
	
	*y = c;
	printf("%d\n", x);
	
	return 0;
}
