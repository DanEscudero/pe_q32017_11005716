#include <stdio.h>
#include <math.h>

int inverso (int valor) {
	int digitos = (int)log10(valor);
	if (valor < 10) return valor;
	else return (valor % 10) * pow (10, digitos) + inverso (valor/10); 
}

int main () {
	int valor, resultado;
	
	scanf ("%d", &valor);
	
	if (valor == inverso (valor)) printf ("sim\n");
	else printf ("nao\n");
	
	return 0;
}
