#include <stdio.h>
#include <stdlib.h>
#include "bitmap.h"

#pragma pack(1)

#define SIZEMAP 10
#define MAX_SUM_COLORS 765 // 255*3

int main ( int argc, char ** argv ){

    FILE * bmp;
    BitmapHeader header;
    DIB dib;

    if (argc < 2) {
        printf("Uso: ./%s <nome-do-arquivo-bmp>\n", argv[0]);
        return -1;
    }
   
    bmp = fopen(argv[1], "r");

    fread(&header, sizeof(header), 1, bmp);
    
    printf("sig: %c%c\n", header.signature[0], header.signature[1]);
    printf("size: %d\n", header.size);
    printf("offset: %d\n", header.offset);
    
    fread(&dib, sizeof(dib), 1, bmp);
    
    printf("size of this header: %d (%d)\n", dib.sizeheader, sizeof(dib));
    printf("Image size: %d x %d\n", dib.width, dib.height);
    printf("Planes: %d\n", dib.planes);
    printf("bpp: %d\n", dib.bpp);
    printf("compression: %d\n", dib.compression);
    printf("Bit data size: %d\n", dib.imgsize);
    printf("hppm / vppm: %d / %d\n", dib.hppm, dib.vppm);
    printf("number of colors (important): %d (%d)\n", dib.n_colors, dib.n_important_colors);
     
    fclose(bmp);
    
    return 0;
}
