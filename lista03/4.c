#include <stdio.h>
#include <stdlib.h>
#define M 3

/* Imprime matriz m*n */
int imprime_matriz (int *v, int n, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf ("%d ", *(v + m*i + j));
		}
		printf ("\n");
	}
	printf ("\n");
}

/* Le matriz m*n */
void le_matriz (int *v, int n, int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf ("%d", (v + m*i + j));
		}
	}
}

/* Troca valores */
void troca (int * x, int * y) {
	int aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
}

/* Transpoe matriz */
void transpor (int * v, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			troca (&v[i][j], &v[j][i]);
		}
	}
}

int main () {
	int mat[M][M];
	
	le_matriz (*mat, M, M);
	printf ("Matriz Normal:\n");
	imprime_matriz (*mat, M, M);
	transpor (mat, M, M);
	printf ("Matriz Transposta:\n");
	imprime_matriz (*mat, M, M);
	
	return 0;
}
