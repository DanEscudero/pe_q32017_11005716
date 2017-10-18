#include <stdio.h>
#include <string.h>

float Desconto (int faltas, float salario_base) {
	return faltas * (salario_base/20.0);
}

float Acrescimo (int h_extras, float salario_base) {
	return h_extras * (40 + salario_base/(20*8));
}

float Salario (float salario_base, float acrescimo, float desconto) {
	return salario_base + acrescimo - desconto;
}

int main () {
	int id_cargo, faltas, h_extras;
	float salario_base, acrescimo, desconto, salario;
	
	scanf ("%d %d %d", &id_cargo, &faltas, &h_extras);

	switch (id_cargo) {
		case 1:
			salario_base = 10000;
			break;
		case 2:
			salario_base = 8000;
			break;
		case 3:
			salario_base = 5000;
			break;
		case 4:
			salario_base = 3000;
			break;
		case 5:
			salario_base = 2000;
			break;
	}
	
	if (h_extras > 40) h_extras = 40;
	desconto = Desconto (faltas, salario_base);
	acrescimo = Acrescimo (h_extras, salario_base);
	salario = Salario (salario_base, acrescimo, desconto);

	printf ("%.0f\n", salario);
}
