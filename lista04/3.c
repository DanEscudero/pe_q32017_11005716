#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
	char nome[100];
	int num;
	float p1;
	float p2;
	float p3;
	float media;
} aluno;

int main () {
	aluno alunos[50];
	FILE *input, *output;
	
	input = fopen("lista_alunos.txt", "r");
	output = fopen("media_alunos.txt", "w");
	
	for (int i = 0; i < 50; i++) {
		fscanf (input, "\%s \%d \%f \%f %f", alunos[i].nome, &alunos[i].num, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);

		alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;
	
		fprintf (output, "\%s \%d \%.2f \%.2f %.2f %.2f\n", alunos[i].nome, alunos[i].num, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
	}
	
	fclose(input);
	fclose(output);
	
	return 0;
}
