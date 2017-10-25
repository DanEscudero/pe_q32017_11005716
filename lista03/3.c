#include <stdio.h>
#include <stdlib.h>

/* Le um vetor de ints */
void le_vetor (int *v, int n) {
	for (int i = 0; i < n; i++) {
		scanf ("%d", v+i);
	}
}

/* Recebe dois vetores e seu tamanho e retorna
   o ponteiro para o vetor que contem a soma */
int * soma_vetores (int *v1, int *v2, int n) {
	int *v3 = malloc (sizeof(int) * n);
	for (int i = 0; i < n; i++)
		v3 [i] = v1[i] + v2[i];
	return v3;
}

/* Imprime numeros de um vetor lado a lado */
void imprime_vet (int *v, int n) {
	for (int i = 0; i < n; i++) {
		printf ("%d ", v[i]);
	}
	printf ("\n");
}

int main () {
	int v1[5], v2[5];
	int *v3;
	
	le_vetor (v1, 5);
	le_vetor (v2, 5);
	
	v3 = soma_vetores (v1, v2, 5);
	imprime_vet (v3, 5);
	
	return 0;
}
