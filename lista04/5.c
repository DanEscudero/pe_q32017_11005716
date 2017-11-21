#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM 50000000


typedef unsigned long int ulint;

ulint f1 (ulint x) {
	ulint s_bits = 0;
	
	while (x) {
		s_bits += x%2;
		x /= 2;
	}
	
	return s_bits;
}

ulint f2 (ulint x) {
	ulint s_bits = 0;
	
	while (x) {
		s_bits += x&1;
		x = x >> 1;
	}
	
	return s_bits;
}

int main () {
	/*
	clock_t t1, t2;
	double tempo;
	ulint soma = 0;

	t1 = clock();
	for (ulint i = 2; i < BIGNUM; i++)
		soma += f1(i);
	t2 = clock();
	tempo = (double)(t2-t1)/CLOCKS_PER_SEC;
	printf ("Tempo na versao normal: %lf\n", tempo);
	
	t1 = clock();
	for (ulint i = 2; i < BIGNUM; i++)
		soma += f2(i);
	t2 = clock();
	tempo = (double)(t2-t1)/CLOCKS_PER_SEC;
	printf ("Tempo na versao bitwise: %lf\n", tempo);
	*/
	
	ulint input;
	
	scanf ("%lu", &input);
	printf ("%lu\n", f2(input));
	
	return 0;
}
