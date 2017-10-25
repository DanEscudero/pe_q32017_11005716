#include <stdio.h>
#include <stdlib.h>

/* Retorna o tamanho de um vetor com tamanho tam */
int * inicia_vet (int tam)
{
	return malloc (sizeof(int) * tam);
}

/* Le as atribuicoes de um vetor */
void le_vet (int * v, int tam)
{
	for (int i = 0; i < tam; i++)
		scanf ("%d", &v[i]);
}

/* Imprime um vetor */
void imprime_vet (int * v, int tam)
{
	for (int i = 0; i < tam; i++)
		printf ("%d ", v[i]);
	printf ("/n");
}

/* Retorna a posicao do numero x, e -1 se nao existe no vetor */
int busca (int * vet, int tam, int x)
{
	int pos = tam;
	
	while (vet[pos] != x && pos >= 0)
		pos --;
	return pos;
}

/* Conta quantas vezes um numero x ocorre
   no vetor v a partir da posicao pos */
int conta_ocorr (int * v, int tam, int x, int pos)
{
	int ocorr = 1;
	
	for (int i = ++pos; i < tam; i ++)
		if (v[i] == x) ocorr ++;
	return ocorr;
}

/* Imprime os valores repetido seguidos do numero de repeticoes */
/* Utiliza o vetor "repetido" como auxiliar */
void repeticoes (int * v, int tam)
{
	int ocorr = 0;
	
	int * impresso = inicia_vet (tam);
	
	for (int i = 0; i < tam; i++) {
		ocorr = conta_ocorr (v, tam, v[i], i);
		
		if (ocorr > 1 && (busca (impresso, tam, v[i]) == -1)) {
			printf ("%d-%d ", v[i], ocorr);
			impresso [i] = v[i];
		}
	}
}

int main () {
	int tam;
	int * vet;
	
	scanf ("%d", &tam);
	vet = inicia_vet (tam);
	le_vet (vet, tam);
	repeticoes (vet, tam);
	printf ("\n");

}
