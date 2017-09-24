#include <stdio.h>

int main () {
	int valor;

	printf ("Digite um valor: ");
	scanf ("%d", &valor);

	if (valor%2)
		printf ("impar\n");
	else
		printf ("par\n");

	return 0;
}
