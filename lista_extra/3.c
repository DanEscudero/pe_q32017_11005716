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

int main () {
	int v[3][4];
	
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			v[i][j] = i*j;
		
	imprime_matriz (*v, 3, 4);
	
	return 0;
}
