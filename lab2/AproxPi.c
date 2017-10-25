#include <stdio.h>
#include <math.h>

int fatorial (int x) {
	int resultado = 1;
	for (int i = 1; i <= x; i ++) {
		resultado *= i;
	}
}
  
double inverso (double x) {
	return 1/x;
}

double Ramanujan (int k) {
	double termo;
	
	termo = fatorial(4*k);
	termo *= (1103 + 26390 * k);
	termo /= pow(fatorial(k),4);
	termo /= pow(396, 4*k);

	return termo;
}

double Chudnovsky (int k) {
	double termo;
	
	termo = pow (-1, k);
	termo *= fatorial (6*k);
	termo *= (13591409 + 545140134 * k);
	termo /= (fatorial (3*k));
	termo /= pow(fatorial(k),3);
	termo /= pow(640320, (3*k + 1,5));
	
	return termo;
}

double somatorio (int opcao, int limite) {
	double resultado, constante;
	if (opcao) {
		constante = 2*sqrt(2)/9801;
		for (int termo = 0; termo <= limite; termo++) {
			resultado += constante * Ramanujan (termo);
		}
	}
	
	else {
		constante = 12;
		for (int termo = 0; termo <= limite; termo ++) {
			resultado += (12 * Chudnovsky (termo));
		}
	}

	return resultado;
}

int main () {
	int limite, opcao;
	double resultado, pi_aproximado;

	printf ("insira limite da soma: ");
	scanf ("%d", &limite);
	
	printf ("1 - Ramanujan\n2 - Chudnovsky\n");
	scanf ("%d", &opcao);
	
	resultado = somatorio (opcao, limite);

	pi_aproximado = inverso (resultado);
	
	printf ("PI = %.20lf\n", pi_aproximado);
	
	return 0;
}
