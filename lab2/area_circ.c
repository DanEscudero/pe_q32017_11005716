#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000000000

double aleatorio()
{
  return rand() / (RAND_MAX + 1.0);
}

double quad (double x) {
	return x*x;
}

double quad_distancia (double x1, double y1, double x2, double y2) {
	return quad(x2-x1) + quad(y2-y1);
}

double monte_carlo (int max) {
	int dentro = 0;
	double x, y;
	
	for (int i = 0; i < max; i ++){
		x = aleatorio();
		y = aleatorio();
		if (quad_distancia (x, y, 0.5, 0.5) <= 0.25)
			dentro ++;
	}
	return (4.0*dentro)/(1.0*max);
}

int main () {
	int max;
	srand (time(NULL));
	
	//scanf ("%d", &max);	
	printf ("pi = %.20lf\n", monte_carlo(MAX));

	return 0;
}
