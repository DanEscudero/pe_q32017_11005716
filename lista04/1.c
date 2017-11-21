#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
	float x;
	float y;
	float z;
} ponto;

double dist_pontos (ponto *p1, ponto *p2) {
	return sqrt(pow(p1->x-p2->x, 2) + pow(p1->y-p2->y, 2) + pow(p1->z-p2->z, 2));
}

int main () {
	ponto p1, p2;
	
	scanf ("%f, %f, %f", &p1.x, &p1.y, &p1.z);
	scanf ("%f, %f, %f", &p2.x, &p2.y, &p2.z);
	
	printf ("%.2lf\n", dist_pontos(&p1, &p2));
	
	return 0;
}
