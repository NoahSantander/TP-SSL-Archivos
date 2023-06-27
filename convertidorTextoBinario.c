#include <stdio.h>
int main(int argc, char *argv[])
{
    char buff[100];
    FILE *binario, *texto;
     if((argc < 3) || !(argc%2))
    {
        printf("La cantidad de archivos es insuficiente.");
        return 0;
    }
    for(int i = 2; i < argc + 1; i += 2)
    {
        if(!(texto = fopen(argv[i], "r")))
        {
            printf("Eror al intentar abrir el archivo de texto, compruebe que exista.");
            return 0;
        }
        fclose(texto);
    }
    for(int i = 2; i < argc + 1; i += 2)
    {
        texto = fopen(argv[i], "r");
        binario = fopen(argv[i-1], "wb");
        while(fread(buff, sizeof(char), 1, texto))
        {
            fwrite(buff, sizeof(char), 1, binario);
        }
        fclose(texto);
        fclose(binario);
    }
    return 0;
}
