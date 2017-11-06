#include <stdio.h>
#include <stdlib.h>
#define M 3

void imprime_matriz_t (int v[M][M], int n, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf ("%d ", v[j][i]);
		}
		printf ("\n");
	}
	printf ("\n");
}

/* Le matriz m*n */
void le_matriz (int v[M][M], int n, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf ("%d", &v[i][j]);
		}
	}
}

int main () {
	int mat[M][M];
	
	le_matriz (mat, M, M);
	imprime_matriz_t (mat, M, M);
	
	return 0;
}
