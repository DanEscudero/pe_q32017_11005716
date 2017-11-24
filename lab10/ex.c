#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define SIZE 30000

/* Devolve um numero aleatorio entre min e max */
float rand_range (int min, int max)
{
	srand(clock());
	int r = 1.0*rand()/RAND_MAX * (max-min) + min;
	return (float)r;
}

/* Funcoes seguintes preenchem o vetor */
void preenche_ord (int *vet, int n)
{
	for (int i = 0; i < n; i++)
		vet[i] = i;
}

void preenche_inv (int *vet, int n)
{
	for (int i = 0; i < n; i++)
		vet[i] = n-i;
}

void preenche_rand (int *vet, int n)
{
	for (int i = 0; i < n; i++)
		vet[i] = rand_range(0, n);
}

/* Designa o modo de preenchimento do vetor */
void preenche_vet (int *vet, int n, int flag)
{
	if (flag==1) 
		preenche_ord(vet, n);
	else if (flag==2)
		preenche_inv(vet, n);
	else if (flag == 3)
		preenche_rand(vet, n);
}

/* Imprime o vetor */
void imprime_vet (int *vet, int n)
{
	for (int i= 0; i < n; i++)
		printf ("%d ", vet[i]);
	printf("\n");
}

void swap (int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

/* Calcula o tempo e imprime com a string */
void tempo (clock_t inicio, clock_t fim, char *string)
{
	double tempo = (fim-inicio)*1.0/CLOCKS_PER_SEC;
	printf ("%s %lf\n", string, tempo);
}

void insertion_sort (int *v, int n)
{
	for (int i = 1; i < n; i++)
		for (int j = i; j > 0 && (v[j-1] > v[j]); j--)
			swap (&v[j-1], &v[j]);
}

int part (int *v, int low, int high)
{
	int pivo = v[high];
	int j, i = low;
	for (j = low; j<high; j++) {
		if (v[j] <= pivo) {
			swap(&v[i], &v[j]);
			i++;
		}
	}
	swap (&v[i], &v[high]);
	return i;
}

void quick_sort (int *v, int low, int high)
{
	int p;
	if (low < high) {
		p = part(v, low, high);
		quick_sort(v, low, p-1);
		quick_sort(v, p+1, high);
	}
}

int main () {
	int vet_ord[SIZE], vet_inv[SIZE], vet_rand[SIZE];
	clock_t inicio, fim;
	
	preenche_vet (vet_ord, SIZE, 1);
	preenche_vet (vet_inv, SIZE, 2);
	preenche_vet (vet_rand, SIZE, 3);
	
	printf ("\n===INSERTION SORT===\n");
	inicio = clock();
	insertion_sort (vet_ord, SIZE);
	fim = clock();
	tempo(inicio, fim, "ordenado: ");

	inicio = clock();
	insertion_sort (vet_inv, SIZE);
	fim = clock();
	tempo(inicio, fim, "invertido:");

	inicio = clock();
	insertion_sort (vet_rand, SIZE);
	fim = clock();
	tempo(inicio, fim, "aleatorio:");
	
	printf ("\n===QUICK SORT===\n");
	inicio = clock();
	quick_sort (vet_ord, 0, SIZE);
	fim = clock();
	tempo(inicio, fim, "ordenado: ");

	inicio = clock();
	quick_sort (vet_inv, 0, SIZE);
	fim = clock();
	tempo(inicio, fim, "invertido:");

	inicio = clock();
	quick_sort (vet_rand, 0, SIZE);
	fim = clock();
	tempo(inicio, fim, "aleatorio:");
	
	return 0;
}
