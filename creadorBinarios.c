#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *binario;
    binario = fopen(argv[1], "wb");
    fprintf(binario ,"%s", argv[2]);
    fclose(binario);
    return 0;
}