#include <stdio.h>
#include <stdlib.h>
#define TAM 5
typedef struct pessoa {
	char nome[255];
	char end[255];
	long int tel;
} pessoa;

pessoa le_pessoa () {
	pessoa p;
	
	scanf ("%s", p.nome);
	scanf ("%s", p.end);	
	scanf ("%li", &p.tel);
	
	return p;
}

void imprime_pessoa (pessoa p) {
	printf ("nome    : %s\n", p.nome);
	printf ("endereco: %s\n", p.end);
	printf ("telefone: %li\n\n", p.tel);
}

void swap (pessoa *p1, pessoa *p2) {
	pessoa *aux;
	aux = p1;
	p1 = p2;
	p2 = aux;
}

void ordenar(pessoa *vet, int len) {
	int pos;
	pessoa aux;
	
	for (int i = len-1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			
			pos = 0;
			while (vet[j].nome[pos] == vet[j+1].nome[pos]) pos++;
			
			if (vet[j].nome[pos] > vet[j+1].nome[pos]) {
				//swap (&vet[j], &vet[j+1]);
				aux = vet[j];
				vet[j] = vet [j+1];
				vet[j+1] = aux;
			}
		}
	}
}

int main () {
	pessoa agenda[TAM];
	
	for (int i = 0; i < TAM; i++)
		agenda[i] = le_pessoa();

	ordenar (agenda, TAM);
	
	printf ("\n=====IMPRESSAO=====\n");	
	for (int i = 0; i < TAM; i++)
		imprime_pessoa (agenda[i]);
	
	return 0;
}
