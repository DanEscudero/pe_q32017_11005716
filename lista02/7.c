#include <stdio.h>

char unidade (int valor) {
	if (valor == 1) return 'C';
	if (valor == 2) return 'F';
	if (valor == 3) return 'K';
}

float temperatura (int u_entrada, int u_saida, float valor) {
	float resposta;
	
	//
	
	return resposta;
}

int decimal_bin (int decimal) {
	int binario, cont = 1;
	
	while (!decimal) {
		binario += ((decimal % 2) * cont);
		cont *= 10;
		decimal /= 2;
	}
	
	return binario;
}

int bin_decimal (int binario) {
	int decimal;
	
	//escrever
	
	return decimal;
}

float base_numerica (int u_entrada, int u_saida, float valor) {
	float resposta;
	
	if (u_entrada == u_saida) {
		resposta = valor;
	}
	else if (u_entrada == 1) {
		resposta = decimal_bin (valor);
	}
	else if (u_entrada == 2) {
		resposta = bin_decimal (valor);
	}

	return resposta;
}

int main () {
	int tipo, unidade_entrada, unidade_saida;
	float valor, resultado;
	char u_saida;
	
	scanf ("%d %d %d %f", &tipo, &unidade_entrada, &unidade_saida, &valor);
	
	switch (tipo) {
		case 1:
			resultado = temperatura (unidade_entrada, unidade_saida, valor);
			u_saida = unidade (unidade_saida);
			printf  ("%.2f %c\n", resultado, u_saida);
			break;
		
		case 2:
			resultado = base_numerica (unidade_entrada, unidade_saida, valor);
			printf ("%.0f\n", resultado);
			break;
	}
	
	
	return 0;
}
