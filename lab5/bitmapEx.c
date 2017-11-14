#include <stdio.h>
#include <stdlib.h>
#include "bitmap.h"

/* sinaliza para o compilador nao compactar a struct */
#pragma pack(1)

#define SIZEMAP 10
#define MAX_SUM_COLORS 765 /* 255*3 */

int main ( int argc, char ** argv ){

    /* dados das cores e do bitmap */
    Color * data;
    BitmapHeader header;
    DIB dib;

    /* arquivo bitmap */
    FILE * bmp;

    /* dado de uma cor */
	/* pixel e a posicao i,j */
    Color pixel;

    int i, j, k = 0;
    const char map[SIZEMAP] = " .,:;ox%#@";
    int intensity;

    if (argc < 2) {
        printf("Uso: ./%s <nome-do-arquivo-bmp>\n", argv[0]);
        return -1;
    }

    
    bmp = fopen(argv[1], "rb");

    /* le o  cabecalho do arquivo bitmap */
    fread(&header, sizeof(header), 1, bmp);       
    fread(&dib, sizeof(dib), 1, bmp);
    
    if ( dib.n_colors ) {
        printf("color table not supported!\n");  
        return -1; 
    }    
    
    /* le os dadods do bitmap */
    data = malloc(sizeof(Color)*dib.width*dib.height);
    fread(data, sizeof(Color), dib.width*dib.height, bmp);
    
    /* complete o algoritmo abaixo */
	for (i=dib.height-1; i>=0; i--) {
        for (j=0; j<dib.width; j++) {
				pixel = *(data + i*dib.width + j);
				intensity = pixel.red + pixel.blue + pixel.green;
				intensity = SIZEMAP - intensity*SIZEMAP/MAX_SUM_COLORS;
				printf ("%c%c", map[intensity], map[intensity]);
        }
        printf("\n");
    }
    
    free(data);    
    
    fclose(bmp);

    return 0;
}
