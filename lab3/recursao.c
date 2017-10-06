#include <stdio.h>

int soma (int x) {
	if (x == 1)
		return x;
	else
		return (x + soma(x-1));
}

int digitos (int x) {
	if (x < 10)
		return 1;
	else
		return 1 + digitos(x / 10);
}

int soma_d (int x) {		
	if (x > 0)
		return (x % 10) + soma_d(x / 10);
	else
		return x;
}

int primo (int x, int i) {
	if (x == 1)
		return 0;
	if (x == i)
		return 1;
	if (!(x % i))
		return 0;
	else 
		return primo (x, i+1);
}

int main () {
	int x, i;

	scanf ("%d", &x);

	printf ("somatoria: %d\n", soma(x));
	printf ("digitos: %d\n", digitos (x));
	printf ("soma digitos: %d\n", soma_d(x));
	printf ("primo? (1-sim, 0-nao): %d\n", primo(x, 2));

	
	printf ("Listar Primos ate 100:\n");
	for (i = 1; i <= 100; i++) {
		if (primo (i, 2))
			printf ("%d\n", i);
	}
	
	printf ("\n\n");
	
	return 0;
}
