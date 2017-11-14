#include <stdio.h>
#include <stdlib.h>
#define N 3

//imprime no terminal, escreve o array no arq, fecha, abre de novo, le para o array, fecha e imprime o array

typedef struct posicao {
		int x;
		int y;
} posicao;

void ler_vet_posicao (posicao *v, int n)
{
	for (int i = 0; i < N; i ++) {
		printf ("x, y: ");
		scanf ("%d %d", &v[i].x, &v[i].y);
	}
}

void imprime_vet_posicao (posicao *v, int n)
{
	for (int i = 0; i < n; i++) {
		printf ("[%d, %d]\t", v[i].x, v[i].y);
	}
	printf ("\n");
}

int main () {
	posicao v_pos[N];
	FILE * arquivo;
	
	ler_vet_posicao (v_pos, N);
	printf ("Impressao do vetor:\n");
	imprime_vet_posicao (v_pos, N);
	
	arquivo = fopen("arquivo.txt", "w");
	fwrite(v_pos, sizeof(posicao), N, arquivo);
	fclose(arquivo);

	arquivo = fopen("arquivo.txt", "w");
	fread(v_pos, sizeof(posicao), N, arquivo);
	fclose(arquivo);
	
	printf ("Impressao do arquivo:\n");
	imprime_vet_posicao (v_pos, N);
	
	return 0;
}

