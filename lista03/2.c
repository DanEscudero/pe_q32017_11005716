#include <stdio.h>
#include <stdlib.h>

/* Retorna o tamanho de uma string */
int tamanho (char *str) {
	int len;
	for (len = 0; str[len] != '\0'; len++);
	return len;
}

/* Troca dois caracteres */
void troca_char (char *a, char *b) {
	char temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

/* Inverte String, mas mantem no mesmo vetor */
void inverte_string (char *str, int len) {
	for (int i = 0; i < len/2; i ++)
		troca_char (&str[i], &str[len-i-1]);
}
/* Imprime uma String */
void imprime_vet (char *str, int n) {
	for (int i = 0; i < n; i++) {
		printf ("%c", str[i]);
	}
	printf ("\n");
}

int main () {
	char entrada [255];
	int len;
	
	fgets (entrada, 255, stdin);
	len = tamanho (entrada);
	
	inverte_string (entrada, len);
	imprime_vet (entrada, len);
	
	return 0;
}
