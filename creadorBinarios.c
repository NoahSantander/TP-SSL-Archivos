#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *binario;
    binario = fopen(argv[1], "wb");
    for(int i = 2; i < argc; i++)
    {
        fwrite(argv[i], sizeof(char), sizeof(argv[i]), binario);
    }
    fclose(binario);
    return 0;
}