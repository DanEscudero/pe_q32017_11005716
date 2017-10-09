#include <stdio.h>
#include <math.h>

double delta (double a, double b, double c) {
	return (pow (b, 2) - 4 * a * c);
}

void raizes_reais (double a, double b, double c, double delta) {
	double x1 = ((-1 * b) - sqrt (delta)) / 2.0 * a;
	double x2 = ((-1 * b) + sqrt (delta)) / 2.0 * a;
	
	printf ("%lf %lf\n", x1, x2);
}

void raizes_complexas (double a, double b, double c, double delta){
	double x = (-1 * b) / (2.0 * a);
	delta =  (-1) * delta;
	delta = sqrt (delta) / (2.0 * a);
	
	printf ("%lf + %lf*i %lf - %lf*i\n", x, delta, x, delta);
}

int main () {
	double a, b, c, Delta;
	
	scanf ("%lf %lf %lf", &a, &b, &c);
	
	Delta = delta (a, b, c);
	if (Delta >= 0)
		raizes_reais (a, b, c, Delta);
	else
		raizes_complexas (a, b, c, Delta);
	
	return 0;
}
