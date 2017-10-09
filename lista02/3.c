#include <stdio.h>
#include <math.h>

long double Gauss_Legendre (long double a, long double b, long double p, long double t, int n_iteracoes) {
	long double pi;
	
	for (int i = 1; i <= n_iteracoes; i++) {
		long double a1;
		a1 = (a + b) / 2;
		b = sqrt (a * b);
		t = t - p * pow ((a - a1), 2);
		p = 2 * p;
		a = a1;
	}
	pi = pow ((a + b), 2) /  (4 * t);
	return pi;
}

int main () {
	long double a, b, t, p, pi;
	int n_iteracoes = 10;
	
	a = 1;
	b = 1 / (sqrt(2));
	t = 1.0 / 4;
	p = 1;
	
	pi = Gauss_Legendre (a, b, p, t, n_iteracoes);
	printf ("%.20Lf\n", pi);
	
	return 0;
}
