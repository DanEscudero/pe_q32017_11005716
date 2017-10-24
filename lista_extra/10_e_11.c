#include <stdlib.h>
#include <stdio.h>

void par_vet (int *v, int n) {
	if (n%2) n--;
	for (int i = 0; i < n; i += 2)
		printf ("%d\n", *(v+i));
}

void impar_vet (int *v, int n) {
	if (!n%2) n--;
	for (int i = 1; i < n; i += 2)
		printf ("%d\n", *(v+i));
}

int main () {
	int vet[10];
	
	for (int i = 0; i < 10; i ++)
		vet [i] = i;
	
	par_vet (vet, 10);
	printf ("\n\n");
	impar_vet (vet, 10);
	
	return 0;
}
