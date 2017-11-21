#include <stdio.h>
#include <stdlib.h>

typedef struct tempo
{
	int min;
	int seg;
	int dec;
} tempo;

int main ()
{
	tempo t1, t2, t;
	
	scanf ("%dm %ds %d", &t1.min, &t1.seg, &t1.dec);
	scanf ("%dm %ds %d", &t2.min, &t2.seg, &t2.dec);
		
	t.min = t2.min-t1.min;
	t.seg = t2.seg-t1.seg;
	t.dec = t2.dec-t1.dec;
	
	printf ("%dm %ds %d\n", t.min, t.seg, t.dec);
	
	return 0;
}
