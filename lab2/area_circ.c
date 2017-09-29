#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float distancia_pontos (float x1, float y1, float x2, float y2) {
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

float aleatorio () {
	return rand()/(double)(RAND_MAX + 1.0);
}

int main () {
	int pts_totais, pts_dentro = 0, max;	
	float x, y, pi;
	srand (time(NULL));
	
	scanf ("%d", &max);
	
	while (pts_totais <= max) {
		x = aleatorio();
		y = aleatorio();
		pts_totais ++;
		
		if (distancia_pontos (x, y, 0.5, 0.5) <= 0.5) {
			pts_dentro ++;
		}
		
	}
	
	pi = 4 * (pts_dentro/pts_totais);
	
	printf ("pi = %f\n", pi);

	return 0;
}
