#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *binario, *texto;
     if((argc < 3) || !(argc%2))
    {
        printf("La cantidad de archivos es insuficiente.");
        return 0;
    }
    for(int i = 1; i < sizeof(argv) - 1; i += 2)
    {
        printf("%d", i);
    }
    binario = fopen("miBinario", "rb");
    texto = fopen("miTexto.txt", "w");
    char buff[100];
    fread(buff, 2, 1, binario);
    fprintf(texto, "%s", buff);
    fclose(binario);
    fclose(texto);
    return 0;
}
