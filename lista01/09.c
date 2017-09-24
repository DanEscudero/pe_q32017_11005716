#include <stdio.h>

int main () {
	int opcao;
	double temperatura;

	scanf ("%lf", &temperatura);
	scanf ("%d", &opcao);

	if (opcao == 1)
		temperatura = (temperatura * 1.8) + 32;

	else
		temperatura = (temperatura - 32) / 1.8;

	printf ("%lf\n", temperatura);
}
