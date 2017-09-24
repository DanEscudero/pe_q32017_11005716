#include <stdio.h>

int main () {
	int x;
	
	printf ("Digite um valor\n");
	scanf ("%d", &x);	
	
	if (!x) printf ("%d\n", 1);
	
	else {
		for (int i = x-1; i != 0; i--) {
			x *= i;
		}
		printf ("%d\n", x);
	}
}
