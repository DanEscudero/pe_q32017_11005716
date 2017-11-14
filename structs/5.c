#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

typedef struct aluno {
	char nome[50];
	long int matricula;
	char curso[50];
} aluno;

aluno * le_aluno (aluno *a) {
	scanf ("%s %li %s", a->nome, &a->matricula, a->curso);
	return a;
}

void imprime_aluno (aluno a) {
	printf ("Nome     : %s\n", a.nome);
	printf ("Matricula: %li\n", a.matricula);
	printf ("Curso    : %s\n\n", a.curso);
}

int main () {
	aluno classe[SIZE];
	
	for (int i = 0; i < SIZE; i++)
		le_aluno(&classe[i]);
	
	printf ("\n====IMPRESSAO====\n");
	
	for (int i = 0; i < SIZE; i++)
		imprime_aluno(classe[i]);
	
	return 0;
}
