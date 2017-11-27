#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100000

int rand_range (int min, int max) {
	srand(clock());
	return rand()*1.0/(RAND_MAX-1) * (max+1-min) + min;
}

void imprime_vet (int *v, int n) {
	for (int i = 0; i < n; i++)
		printf ("%d ", v[i]);
	printf ("\n");
}

void swap (int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void preenche_ord (int *v, int n) {
	for (int i = 0; i < n; i++)
		v[i] = i;
}

void preenche_rand (int *v, int n) {
	for (int i = 0; i < n; i++)
		v[i] = rand_range(0, n-1);
}

void preenche_inv (int *v, int n) {
	for (int i = 0; i < n; i++)
		v[i] = n-i;
}

void inverte (int *v, int n) {
	for (int i = 0; i < n/2; i++)
		swap (&v[i], &v[n-1-i]);
}

void preenche_vet (int modo, int *v, int n) {
	switch (modo) {
		case 1:
			preenche_ord(v, n);
			break;
		case 2:
			preenche_rand(v, n);
			break;
		case 3:
			preenche_inv(v, n);
			break;
	}
}

void insertion (int *v, int n) {
	for (int i=0; i < n; i++)
		for (int j = i; j>0 && v[j-1] > v[j]; j--)
			if (v[j] < v[j-1]) swap(&v[j-1], &v[j]);
}

int part (int *v, int low, int high) {
	int pivo = v[high];
	int j = low;
	for (int i = low; i < high; i++) {
		if (v[i] <= pivo) {
			swap(&v[i], &v[j]);
			j++;
		}
	}
	swap(&v[j], &v[high]);
	return j;
}

void quick (int *v, int low, int high) {
	if (low < high) {
		int p = part (v, low, high);
		quick (v, low, p-1);
		quick (v, p+1, high);
	}
}

void bubble (int *v, int n) {
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0; j--)
			if (v[j] < v[j-1]) swap(&v[j], &v[j-1]);
}

int busca (int *v, int n, int x) {
	int i = n;
	while (i >= 0 && v[i] != x)
		i--;
	return i;
}

int busca_bin (int *v, int inicio, int fim, int x) {
	int i = (inicio+fim)/2;
	if (v[i] == x)
		return i;
	if (inicio >= fim) 
		return -1;
	else {
		if (v[i] < x)
			return busca_bin (v, i+1, fim, x);
		if (v[i] > x)
			return busca_bin (v, inicio, i-1, x);
	}
}

void tempo (clock_t inicio, clock_t fim, char *s) {
	double duracao = (fim-inicio)*1.0/CLOCKS_PER_SEC;
	printf ("%s %.5lfs\n", s, duracao);
}

int main () {
	int v_ord[TAM], v_rand[TAM], v_inv[TAM], pos_x;
	clock_t inicio, fim;
	double duracao;
	
	preenche_vet (1, v_ord, TAM);
	preenche_vet (2, v_rand, TAM);
	preenche_vet (3, v_inv, TAM);
	
	printf ("\n===INSERTION SORT===\n");
	
	inicio = clock();
	insertion(v_ord, TAM);
	fim = clock();
	tempo(inicio, fim, "vetor ordenado: ");
	
	inicio = clock();
	insertion(v_rand, TAM);
	fim = clock();
	tempo(inicio, fim, "vetor aleatorio:");
	
	inicio = clock();
	insertion(v_inv, TAM);
	fim = clock();
	tempo(inicio, fim, "vetor invertido:");
	
	inverte(v_inv, TAM);
	preenche_vet(2, v_rand, TAM);
	
	printf ("\n===QUICK SORT===\n");
	
	inicio = clock();
	quick(v_ord, 0, TAM-1);
	fim = clock();
	tempo(inicio, fim, "vetor ordenado: ");
	
	inicio = clock();
	quick(v_rand, 0, TAM-1);
	fim = clock();
	tempo(inicio, fim, "vetor aleatorio:");
	
	inicio = clock();
	quick(v_inv, 0, TAM-1);
	fim = clock();
	tempo(inicio, fim, "vetor invertido:");

	inverte(v_inv, TAM);
	preenche_vet(2, v_rand, TAM);
		
	printf ("\n===BUBBLE SORT===\n");
	
	inicio = clock();
	bubble(v_ord, TAM);
	fim = clock();
	tempo(inicio, fim, "vetor ordenado: ");
	
	inicio = clock();
	bubble(v_rand, TAM);
	fim = clock();
	tempo(inicio, fim, "vetor aleatorio:");
	
	inicio = clock();
	bubble(v_inv, TAM);
	fim = clock();
	tempo(inicio, fim, "vetor invertido:");
	
	int x = v_rand[rand_range(0, TAM)];
	printf ("\n===BUSCA LINEAR===\n");
	
	inicio = clock();
	pos_x = busca (v_rand, TAM, x);
	fim = clock();
	tempo (inicio, fim, "busca linear:");
	
	printf ("v[%d] = %d\n", pos_x, v_rand[pos_x]);
	
	printf ("\n===BUSCA BINARIA===\n");
	
	inicio = clock();
	pos_x = busca_bin (v_rand, 0, TAM, x);
	fim = clock();
	tempo (inicio, fim, "busca binaria:");
	
	printf ("v[%d] = %d\n", pos_x, v_rand[pos_x]);
	
	return 0;
}

















