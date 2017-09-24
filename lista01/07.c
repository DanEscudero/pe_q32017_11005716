#include <stdio.h>

int main () {
	int x, y, num = 1;
	
	printf ("Digite dois valores\n");
	scanf ("%d", &x);
	scanf ("%d", &y);

	for (y; y > 0; y--)
		num *= x;
	
	printf ("%d\n", num);
}
