#include <stdio.h>

int main () {
	int opcao, valor, resposta = 0, cont = 0, base = 1, resto;
	
	scanf ("%d", &valor);
	scanf ("%d", &opcao);

	if (opcao == 1) {
		while (valor > 0) {
			resposta += (valor%2);
			resposta *= 10;
			valor /= 2;
		}
		resposta /= 10;
		
	}

	else {
		for (valor; valor > 0; valor /= 10) {
			resto = valor % 10;
			resposta = resposta + resto * base;
			base *= 2;
		}
	}

	printf ("%d\n", resposta);
	
	return 0;
}
