#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define NUM 250000

int primo (int n) {
	int primo = 1;
	if (n == 1 || !n) return 0;
	for (int i = 2; i <= n/2 && primo == 1; i++) {
		if (n%i == 0) primo = 0;
	}
	return primo;
}

char *preenche_vetor (int n) {
	char *v = malloc (sizeof (char) * n);
	for (int i = 0; i < n; i ++)
		v [i] = primo (i);
	return v;
}

int soma_vet (char *v, int n) {
	int soma = 0;
	
	for (int i = 0; i < n; i ++)
		soma += v[i];
	return soma;
}

void imprime_vet (char *v, int n) {
	for (int i = 0; i < n; i ++)
		printf ("%d ", v[i]);
	printf ("\n\n");
}

int main () {
	char *primos;
	clock_t inicio, fim;
	double tempo;
	
	printf ("na raça\n\n");
	
	inicio = clock();
	primos = preenche_vetor (NUM);
	fim = clock();
	tempo = ((double) (fim - inicio))/CLOCKS_PER_SEC;
	
	printf ("tempo: %.10lf\n\n", tempo);
	printf ("soma: %d\n", soma_vet (primos, NUM));
	
	return 0;
}