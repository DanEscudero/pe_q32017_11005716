#include <stdio.h>

int par_impar (int x) {
	return x%2;
}

int main () {
	int x;
  
	scanf ("%d", &x);
	printf ("%d\n", par_impar(x));
  
	return 0;
}
