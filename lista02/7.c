#include <stdio.h>

/* Define o caractere a ser apresentado no output */
char unidade (int valor) {
	if (valor == 1) return 'C';
	if (valor == 2) return 'F';
	if (valor == 3) return 'K';
}

/* Funcoes de conversao */
float fahr_kelvin (float valor){
	return ((valor - 32) / 1.8 + 273);
}

float fahr_celsius (float valor){
	return ((valor - 32) / 1.8);
}

float celsius_fahr (float valor){
	return ((valor * 1.8) + 32);
}

float celsius_kelvin (float valor){
	return (valor + 273.15);
}

float kelvin_fahr (float valor){
	return ((valor - 273) * 1.8 + 32);
}

float kelvin_celsius (float valor){
	return (valor - 273.15);
}

/* Avalia os parametros e chama  funcao de conversao adequada */
float temperatura (int u_entrada, int u_saida, float valor) {
	float resposta;
	
	if (u_entrada == u_saida) {
		resposta = valor;
	}
	
	else if (u_entrada == 1) {
		if (u_saida == 2) {
			resposta = celsius_fahr (valor);
		}
		else {
			resposta = celsius_kelvin (valor);
		}
	}
	
	else if (u_entrada == 2) {
		if (u_saida == 1) {
			resposta = fahr_celsius (valor);
		}
		else {
			resposta = fahr_kelvin (valor);
		}
	}
	
	else {
		if (u_saida == 1) {
			resposta = kelvin_celsius (valor);
		}
		else {
			resposta = kelvin_fahr (valor);
		}
	}
	
	return resposta;
}

/* Converte binario em decimal */
int decimal_bin (int decimal) {
	int binario = 0, cont = 1;
	
	while (decimal > 0) {
		binario += ((decimal % 2) * cont);
		cont *= 10;
		decimal /= 2;
	}
	
	return binario;
}

/* Converte decimal em binario */
int bin_decimal (int binario) {
	int decimal = 0, base = 1;
	
	while (binario) {
		decimal += (base * (binario % 10));
		binario /= 10;
		base *= 2;
	}
	
	return decimal;
}

/* Avalia os parametros e chama  funcao de conversao adequada */
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
