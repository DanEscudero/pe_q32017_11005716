#include <stdio.h>

int main () {
	int valor;
	
	scanf ("%d", &valor);
	for (int i = 100; i <= valor; i += 2)
		printf ("%d, ", i);
	printf ("\n");
}
