#include <stdio.h>

int Fibonacci (int x) {
	if ((!x) || x == 1) return x;
	else return Fibonacci (x-1) + Fibonacci (x-2);
}

int main () {
	int x;
	
	printf ("Digite um valor\n");
	scanf ("%d", &x);
	
	for (int i = 0; i <= x; i++)
		printf ("%d, ", Fibonacci(i));
	printf ("\n");
}
