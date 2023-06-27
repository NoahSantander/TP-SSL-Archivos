#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *binario;
    char buff[100];
    binario = fopen(argv[1], "rb");
    while (!feof(binario))
    {
        fread(buff, sizeof(char), 1, binario);
        printf("%s", buff);
    }
    fclose(binario);
    return 0;
}