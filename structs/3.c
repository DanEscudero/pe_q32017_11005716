#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
	float x;
	float y;
} ponto;

float v_min (float a, float b) {
	if (a<b) return a;
	else return b;
}

float v_max (float a, float b) {
	if (a>b) return a;
	else return b;
}

ponto ler_ponto () {
	ponto p;
	
	scanf ("%f %f", &p.x, &p.y);
	return p;
}

int check_dentro (ponto v1, ponto v2, ponto p) {
	float x_min, x_max, y_min, y_max;
	
	x_min = v_min(v1.x, v2.x);
	x_max = v_max(v1.x, v2.x);
	
	y_min = v_min(v1.y, v2.y);
	y_max = v_max(v1.y, v2.y);
	
	return p.x>x_min && p.x<x_max && p.y>y_min && p.y<y_max;
}

int main () {
	ponto p, v1, v2;
	
	printf ("PONTO: ");
	p = ler_ponto();
	printf ("VERTICE 1: ");
	v1 = ler_ponto();
	printf ("VERTICE 2: ");
	v2 = ler_ponto();
	printf ("\n");
	
	if (check_dentro (v1, v2, p)) printf ("DENTRO\n");
	else printf ("FORA\n");
	
	return 0;
}
