#include <stdio.h>
#include <stdlib.h>

int imprime_vet (int *v, int n) {
	for (int i = 0; i < n; i ++)
		printf ("%d\n", *(v+i));
}

int main () {
	int v[5];
	
	for (int i = 0; i < 5; i++)
		v[i] = (5-i);
	imprime_vet (v, 5);
	
	return 0;
}
