#include <stdio.h>
#include <stdlib.h>

#define MAX_CONTATOS 10

typedef struct contato
{
	char nome[255];
	long num;
	char email[255];
} contato;

void imprime_contato (contato *c)
{
	printf("Nome    : %s\n", c->nome);
	printf("Telefone: %li\n", c->num);
	printf("Email   : %s\n", c->email);
}

void le_contato (contato *c)
{
	printf("Nome    : ");
	scanf("%s", c->nome);
	
	printf("Telefone: ");
	scanf("%li", &(c->num));
	
	printf("Email   : ");
	scanf("%s", c->email);
}

int busca_Nome (contato **p_agenda, int len, char *busca)
{
	int i = len - 1;
	while(i >= 0 && (*p_agenda+i)->nome != busca)
		i--;
	
	return i;
}

int busca_Telefone (contato **p_agenda, int len, long busca)
{
	int i = len - 1;
	while(i >= 0 && (*p_agenda+i)->num != busca)
		i--;
	
	return i;
}

void imprime_Agenda (contato **p_agenda, int len) 
{
	printf ("===AGENDA===\n");
	for (int i = 0; i < len; i++) {
		imprime_contato(*p_agenda+i);
		printf ("\n");
	}
}

int main ()
{
	contato agenda[MAX_CONTATOS];
	contato *p_agenda = agenda;
	int opcao = -1, len = 0, resultado;
	char nome_b[255];
	long num_b;
	
	while (opcao)
	{
		
		printf("\n1 - Inserir contato\n2 - Busca por nome\n3 - Busca por telefone\n4 - Mostra agenda\n");
		scanf("%d", &opcao);
		
		system("clear");
		switch (opcao) {
			case 1:
				printf("Entre com as informacoes do contato\n");
				le_contato(&agenda[len]);
				len++;
				break;
			
			case 2:
				printf("Entre com o nome a ser buscado: ");
				
				scanf("%s", nome_b);
				resultado = busca_Nome(&p_agenda, len, nome_b);
				
				if (resultado == -1) 
					printf ("Nao encontrado.\n");				
				else 
					printf ("found");//imprime_contato(agenda[resultado]);
				break;
			
			case 3:
				printf("Entre com o numero a ser buscado: ");
				
				scanf("%li", &num_b);
				resultado = busca_Telefone(&p_agenda, len, num_b);
				
				if (resultado == -1) 
					printf("Nao encontrado.\n");				
				else 
					printf ("found");//imprime_contato(agenda[resultado]);
				break;
			
			case 4:
				imprime_Agenda(&p_agenda, len);
				break;
			
			default:
				printf ("Entre com uma opcao valida\n");
				break;
		}
	}
	
	return(0);
}
