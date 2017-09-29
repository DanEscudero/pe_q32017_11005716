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
	int pts_totais, pts_dentro = 0;	
	float x, y;
	srand (time(NULL));
	
	scanf ("%d", &pts_totais);
	
	while (i <= pontos) {
		x = aleatorio();
		y = aleatorio();
		pontos ++;
		
		if (distancia (x, y, 0.5, 0.5) <= 0.5) {
			pts_dentro ++;
		}
		
	}

	return 0;
}
