#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

typedef struct aluno {
	char nome[50];
	long int mat;
	float p1;
	float p2;
	float p3;
	float media;
} aluno;

aluno * le_aluno (aluno *a) {
	scanf("%s %li %f %f %f", a->nome, &a->mat, &a->p1, &a->p2, &a->p3);
	return a;
}

float media (aluno *a) {
	float media = 0;
	
	media += a->p1/3;
	media += a->p2/3;
	media += a->p3/3;

	return media;
}

int busca_p1 (int maximo, aluno v[], int n) {
	short k = 0;
	if (maximo) {
		for (int i = 0; i < SIZE; i++)
			if (v[k].p1 < v[i].p1) k = i;
	}
	
	else {
		for (int i = 0; i < SIZE; i++)
			if (v[k].p1 > v[i].p1) k = i;
	}
	
	return k;
}

int busca_media (int maximo, aluno *v, int n) {
	short k = 0;
	if (maximo) {
		for (int i = 0; i < SIZE; i++)
			if (v[k].media < v[i].media) k = i;
	}
	
	else {
		for (int i = 0; i < SIZE; i++)
			if (v[k].media > v[i].media) k = i;
	}
	
	return k;
}

int main () {
	aluno classe[SIZE];
	int pos;
	
	for (int i = 0; i < SIZE; i++) {
		le_aluno(&classe[i]);
		classe[i].media = media(&classe[i]);
	}
		
	pos = busca_p1(1, classe, SIZE);
	printf ("Maior nota da p1: %.2f\n", classe[pos].p1);
	printf ("Aluno           : %s\n\n", classe[pos].nome);
		
	pos = busca_media(1, classe, SIZE);
	printf ("Maior media: %.2f\n", classe[pos].media);
	printf ("Aluno      : %s\n\n", classe[pos].nome);
	
	pos = busca_media(0, classe, SIZE);
	printf ("Menor media: %.2f\n", classe[pos].media);
	printf ("Aluno      : %s\n\n", classe[pos].nome);
	
	printf ("====APROVACOES====\n");
	for (int i = 0; i < SIZE; i++)
			printf ("%s  %s\n", classe[i].nome, classe[i].media >= 6 ? "ARPOVADO" : "REPROVADO");
	return 0;
}
