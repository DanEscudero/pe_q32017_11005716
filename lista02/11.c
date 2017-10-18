#include <stdio.h>

/* 0 ideias de como fazer */
void binario_decimal (int binario) {	
	
}

/* Gambiarra. Nao retorna um numero binario, apenas imprime na tela */
void decimal_binario (int decimal) {
	if (!decimal) return;
	decimal_binario (decimal / 2);
	printf ("%d", (decimal % 2));
}

int main () {
	int valor, opcao;
	
	scanf ("%d %d", &valor, &opcao);
	
	if (opcao == 1)
		decimal_binario (valor);
	else
		binario_decimal (valor);
	
	printf ("\n");
	
	return 0;
}
