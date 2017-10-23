#include <stdio.h>
#include <stdlib.h>

int tamanho (char *s) {
	int tamanho;
	for (tamanho = 0; s[tamanho] != '\0'; tamanho++);
	return tamanho;
}

char * concatena (char *s1, char *s2) {
	char *string = malloc (sizeof (char) * 255);
	int t_s1, t_s2;
	
	t_s1 = tamanho (s1); 
	t_s2 = tamanho (s2);
	
	for (int i = 0; i != (t_s1 + t_s2); i ++) {
		if (i < t_s1)
			string [i] = s1 [i];
		else
			string [i] = s2 [i - t_s1];
	}
	
	return string;
}

int main () {
	char s1[255], s2[255];
    char * s3;
	
	scanf ("%s", s1);
	scanf ("%s", s2);
	s3 = concatena (s1, s2);
	
	printf ("%s\n", s3);
	free (s3);
	
	return 0;
}
