#include <stdlib.h>
#include <stdio.h>

int preenche_0 (int *v, int n) {
	for (int i = 0; i < n; i ++)
		*(v + i) = 0;
}

int imprime_vet (int *v, int n) {
	for (int i = 0; i < n; i ++)
		printf ("%d\n", *(v+i));
}

int main () {
	int v[10];
	
	preenche_0 (v, 10);
	imprime_vet (v, 10);
	
	return 0;
}
