#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct vetor {
	float x;
	float y;
	float z;
} vetor;

vetor leVetor (vetor v) {
	//scanf ("%f %f %f", &v.x, &v.y, &v.z);
	v.x = 1;
	v.y = 2;
	v.z = 3;
	return v;
}

void imprimeVetor (vetor v) {
	printf ("[%.2f, %.2f, %.2f]\n", v.x, v.y, v.z);
}

vetor somaVetor (vetor v1, vetor v2) {
	vetor vR;
	
	vR.x = v1.x + v2.x;
	vR.y = v1.y + v2.y;
	vR.z = v1.z + v2.z;
	
	return vR;
}

int main () {
	vetor v1, v2, vR;
	
	v1 = leVetor1(v1);	
	v2 = leVetor2(v2);
	
	printf ("Soma: ");
	imprimeVetor(somaVetor(v1, v2));
	
	return 0;
}
