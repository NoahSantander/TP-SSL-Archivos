#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *binario, *texto;
     if((argc < 3) || !(argc%2))
    {
        printf("La cantidad de archivos es insuficiente.");
        return 0;
    }
    for(int i = 1; i < argc - 1; i += 2)
    {
        if(!(binario = fopen(argv[i], "rb")))
        {
            printf("Eror al intentar abrir el archivo binario, compruebe que exista.");
            return 0;
        }
        fclose(binario);
    }
    return 0;
}
