#include <stdio.h>
#include <stdlib.h>

int pertence (char t, char * vet) {
	int i = 0;

	while (vet[i] != '\0' && vet[i] != t)
		i++;
	return vet[i];
}

int conta_vogais (char * s, char * vet) {
	int vogais = 0;
	
	for (int i = 0; s[i] != '\0'; i ++)
		if (pertence (s[i], vet))
			vogais++;
			
	return vogais;
}

int main () {
	char vet_vogais [11] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
	char entrada [255];
	
	fgets (entrada, 255, stdin);
	printf ("%d\n", conta_vogais (entrada, vet_vogais));
	
	return 0;
}
