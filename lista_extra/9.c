#include <stdio.h>
#include <stdlib.h>

int imprime_matriz (int *v, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf ("%d ", *(v+ m*i + j));
		}
	printf ("\n");
	}
}

void preenche_0_m (int *v, int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			*(v + m*i + j) = 0;
}

int main () {
	int v[5][5];
	
	preenche_0_m (*v, 5, 5);
	imprime_matriz (*v, 5, 5);
	
	return 0;
}
