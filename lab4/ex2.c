#include <stdlib.h>
#include <stdio.h>
#define NUM 100

int primo (int n) {
	int primo = 1;
	if (n == 1) return 0;
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

int main () {
	char *primos;
	
	primos = preenche_vetor (NUM);
	printf ("%d\n", soma_vet (primos, NUM));
	return 0;
}
