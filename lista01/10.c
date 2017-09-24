#include <stdio.h>

int main () {
	int opcao;
	double temperatura;

	scanf ("%lf", &temperatura);
	scanf ("%d", &opcao);

	if (opcao == 1)
		temperatura = temperatura + 273.15;

	else
		temperatura = temperatura - 273.15;

	printf ("%lf\n", temperatura);
}
