#include <stdio.h>
#include <string.h>

int main () {
	int id_cargo, faltas, h_extras;
	float salario_base, acrescimo, desconto, salario;
	char cargo[11];
	
	scanf ("%d", &id_cargo);
	scanf ("%d", &faltas);
	scanf ("%d", &h_extras);

	switch (id_cargo) {
		case 1:
			salario_base = 10000;
			strcpy (cargo, "Diretor");
			break;
		case 2:
			salario_base = 8000;
			strcpy (cargo, "Gerente");
			break;
		case 3:
			salario_base = 5000;
			strcpy (cargo, "Engenheiro");
			break;
		case 4:
			salario_base = 3000;
			strcpy (cargo, "Tecnico");
			break;
		case 5:
			salario_base = 2000;
			strcpy (cargo, "Operador");
			break;
	}

	desconto = faltas * (salario_base/20.0);
	if (h_extras > 40) h_extras = 40;
	acrescimo = h_extras * (40 + salario_base/(20*8));
	salario = salario_base + acrescimo - desconto;

	printf ("cargo        : %s\n", cargo);
	printf ("# de faltas  : %d\n", faltas);
	printf ("# horas-extra: %d\n", h_extras);
	printf ("descontos    : %.1f\n", desconto);
	printf ("acrescimos   : %.1f\n", acrescimo);
	printf ("salario      : %.1f\n", salario);
}
