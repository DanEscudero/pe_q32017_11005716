#include <stdio.h>

int potencia (int x, int y) {
	if (!y) {
		return 1;
	}
	else if (y == 1) {
		return x;
	}
	else {
		return (x * potencia (x, y-1));
	}
}

int main () {
	int x, y, resultado;
	
	scanf ("%d %d", &x, &y);
	resultado = potencia (x, y);
	
	printf ("%d\n", resultado);
	
	return 0;
}
