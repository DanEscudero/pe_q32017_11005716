#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM 1000000000

typedef unsigned long int ulint;

ulint f1 (ulint x) {
	while (x!=1 && !x%2)
		x = x/2;
	
	return x%2;
}

ulint f2 (ulint x) {
	while (x!=1 && !x&1)
		x >> 1;
	
	return x&1;
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
	if (f2(input)) printf("nao\n");
	else printf("sim\n");
	
	return 0;
}
