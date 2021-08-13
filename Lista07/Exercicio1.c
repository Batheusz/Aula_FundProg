#include <stdio.h>

int main()
{
    int letras = 0;
    char caracter;
    FILE *arquivo;
    arquivo = fopen("exercicio1.txt", "r");

    if (arquivo == NULL)
    {
        printf("Impossivel abrir arquivo tente novamente!\n");
        return 0;
    }
    else
    {
        do
        {
            caracter = fgetc(arquivo);
            if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z'))
                letras++;
        }while (caracter != EOF);
    }    

    printf("Seu arquivo tem %d letras\n", letras);
    fclose(arquivo);

    return 0;
}