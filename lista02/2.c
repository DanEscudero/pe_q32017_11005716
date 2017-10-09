#include <stdio.h>

float volume (float l, float comp, float alt) {
	return l*comp*alt;
}

int main () {
	float largura, comprimento, altura;
	
	scanf ("%f %f %f", &largura, &comprimento, &altura);
	printf ("%.2f\n", volume (largura, comprimento, altura));
	
	return 0;
}
